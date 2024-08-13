# Go 谚语

## Go Proverbs

> [Go Proverbs](https://go-proverbs.github.io/)
>
> [10+ 条 Go 官方谚语，你知道几条？](https://mp.weixin.qq.com/s/cJON1H68eBFeuBpWhFbXXw)

不要通过共享内存来通信，通过通信来共享内存（Don't communicate by sharing memory, share memory by communicating）。

并发不是并行（Concurrency is not parallelism）。

通道是协调的，互斥是串行的（Channels orchestrate; mutexes serialize）。

接口越大，抽象性越弱（The bigger the interface, the weaker the abstraction）。

让零值变得有用（Make the zero value useful）。

interface{} 什么也没说（interface{} says nothing）。

Gofmt 的风格没有人喜欢，但 Gofmt 却是大家的最爱（Gofmt's style is no one's favorite, yet gofmt is everyone's favorite）。

复制一点总比依赖一点好（A little copying is better than a little dependency）。

Syscall 必须始终用 build 标签来保护（Syscall must always be guarded with build tags）。

Cgo 必须始终用构建标签来保护（Cgo must always be guarded with build tags）。

Cgo 不是 Go（Cgo is not Go）。

使用 unsafe 包没有任何保证（With the unsafe package there are no guarantees）。

清晰的比聪明的好（Clear is better than clever）。

反射从来不是清晰的（Reflection is never clear）。

错误就是价值（Errors are values）。

不要只是检查错误，要优雅地处理它们（Don't just check errors, handle them gracefully）。

设计架构，命名组件，记录细节（Design the architecture, name the components, document the details）。

文档是为用户准备的（Documentation is for users）。

不要恐慌（Don't panic）。
