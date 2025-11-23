# SEO 搜索引擎优化

## 单页应用(SPA)

- 服务端渲染(SSR)
- 静态站点生成(SSG)
- 预渲染(Prerendering)
- 动态Meta标签管理
- 边缘渲染(Edge Rendering)：CDN 节点执行渲染：利用 CDN 的边缘计算能力，在最近的节点执行 SSR

## 无需 SSR 的 SPA SEO 替代方案

1. 静态站点生成（SSG）

    ```txt
    Jekyll/Hugo方案：将SPA转换为静态站点，SEO效果最佳
    优势：无需服务器，直接部署到CDN，加载速度极快
    适用场景：内容更新频率低的网站，如企业官网、博客
    ```

2. 无头浏览器预渲染

    ```txt
    Puppeteer方案：通过无头浏览器生成完整HTML
    优势：无需修改现有SPA代码，快速实现SEO优化
    ```

## 通用

- sitemap.xml
- robots.txt
- meta 标签

## SSR、SSG框架

### Vue 生态

- Nuxt.js
- VuePress (Vue的文档神器)
- VitePress
- Vite SSG
- Vite SSR
- Quasar

### React 生态

- Next.js (React全家桶)
- Remix

### 通用、其他

- Astro
- Qwik
- Fresh
- SvelteKit
- SolidStart：SolidJS 官方框架
- Marko：eBay 开发
- Eleventy：11ty
- Gatsby：React生态的瑞士军刀
- Hydrogen：Shopify
- Blitz.js：已归档，迁移到 Wasp 或 Next.js
- Hugo：Go 编写的超快纯静态站点生成器
- Jekyll
