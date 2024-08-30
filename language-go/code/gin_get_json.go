package main

import (
	"encoding/json"
	"net/http"

	"github.com/gin-gonic/gin"
)

func main() {
	router := gin.Default()
	router.POST("json", func(ctx *gin.Context) {
		rawData, _ := ctx.GetRawData()
		var m map[string]interface{}
		_ = json.Unmarshal(rawData, &m)
		ctx.JSON(http.StatusOK, m)
	})
	router.Run(":8080")
}
