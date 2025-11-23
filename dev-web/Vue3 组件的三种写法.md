# Vue3 组件的三种写法

作者：江湖术士
链接：<https://www.zhihu.com/question/1959218081281869255/answer/1960336167925978315>
来源：知乎
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

```tsx
// 我写的
import Compo from "./Compo.tsx"
export default defineComponent(()=>{
   const value = ref(0)
   return ()=> <div> 
     <Compo/>
     <input v-model={value.value}/>
   </div>
})
```

```vue
// 别人写的
<script setup lang="ts">
import Compo from "./Compo.tsx"
const value = ref("")
</script>

<template>
  <Compo/>
  <input v-model="value"/>
</template>

```

```vue
// 新手写的
<template>
  <div>
    <input v-model="value"/>
    <Compo/>
  </div>
</template>
<script>
import Compo from "./Compo.tsx"
export default {
   components: [Compo],
   data(){
      return {
         value: ""
      }
   }
}
</script>
```
