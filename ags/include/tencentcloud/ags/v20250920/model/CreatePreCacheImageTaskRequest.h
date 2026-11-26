/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATEPRECACHEIMAGETASKREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATEPRECACHEIMAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreatePreCacheImageTask请求参数结构体
                */
                class CreatePreCacheImageTaskRequest : public AbstractModel
                {
                public:
                    CreatePreCacheImageTaskRequest();
                    ~CreatePreCacheImageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>镜像地址。仅支持 repository:tag、repository@sha256:&lt;64 位摘要&gt; 或 repository:tag@sha256:&lt;64 位摘要&gt;。</p>
                     * @return Image <p>镜像地址。仅支持 repository:tag、repository@sha256:&lt;64 位摘要&gt; 或 repository:tag@sha256:&lt;64 位摘要&gt;。</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>镜像地址。仅支持 repository:tag、repository@sha256:&lt;64 位摘要&gt; 或 repository:tag@sha256:&lt;64 位摘要&gt;。</p>
                     * @param _image <p>镜像地址。仅支持 repository:tag、repository@sha256:&lt;64 位摘要&gt; 或 repository:tag@sha256:&lt;64 位摘要&gt;。</p>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code></p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     * @return ImageRegistryType <p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code></p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     * 
                     */
                    std::string GetImageRegistryType() const;

                    /**
                     * 设置<p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code></p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     * @param _imageRegistryType <p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code></p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     * 
                     */
                    void SetImageRegistryType(const std::string& _imageRegistryType);

                    /**
                     * 判断参数 ImageRegistryType 是否已赋值
                     * @return ImageRegistryType 是否已赋值
                     * 
                     */
                    bool ImageRegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像预热类型</p><p>枚举值：</p><ul><li>image： 镜像预热</li><li>image_volume： 镜像卷预热</li></ul><p>默认值：image</p>
                     * @return PreCacheType <p>镜像预热类型</p><p>枚举值：</p><ul><li>image： 镜像预热</li><li>image_volume： 镜像卷预热</li></ul><p>默认值：image</p>
                     * 
                     */
                    std::string GetPreCacheType() const;

                    /**
                     * 设置<p>镜像预热类型</p><p>枚举值：</p><ul><li>image： 镜像预热</li><li>image_volume： 镜像卷预热</li></ul><p>默认值：image</p>
                     * @param _preCacheType <p>镜像预热类型</p><p>枚举值：</p><ul><li>image： 镜像预热</li><li>image_volume： 镜像卷预热</li></ul><p>默认值：image</p>
                     * 
                     */
                    void SetPreCacheType(const std::string& _preCacheType);

                    /**
                     * 判断参数 PreCacheType 是否已赋值
                     * @return PreCacheType 是否已赋值
                     * 
                     */
                    bool PreCacheTypeHasBeenSet() const;

                    /**
                     * 获取<p>闲置清理时间</p><p>枚举值：</p><ul><li>inherit： 继承账号配置的自动清理策略</li><li>0： 永不自动清理</li><li>正整数加 m/h/d： 空闲相应时间后自动清理</li></ul><p>默认值：inherit</p>
                     * @return IdleTTL <p>闲置清理时间</p><p>枚举值：</p><ul><li>inherit： 继承账号配置的自动清理策略</li><li>0： 永不自动清理</li><li>正整数加 m/h/d： 空闲相应时间后自动清理</li></ul><p>默认值：inherit</p>
                     * 
                     */
                    std::string GetIdleTTL() const;

                    /**
                     * 设置<p>闲置清理时间</p><p>枚举值：</p><ul><li>inherit： 继承账号配置的自动清理策略</li><li>0： 永不自动清理</li><li>正整数加 m/h/d： 空闲相应时间后自动清理</li></ul><p>默认值：inherit</p>
                     * @param _idleTTL <p>闲置清理时间</p><p>枚举值：</p><ul><li>inherit： 继承账号配置的自动清理策略</li><li>0： 永不自动清理</li><li>正整数加 m/h/d： 空闲相应时间后自动清理</li></ul><p>默认值：inherit</p>
                     * 
                     */
                    void SetIdleTTL(const std::string& _idleTTL);

                    /**
                     * 判断参数 IdleTTL 是否已赋值
                     * @return IdleTTL 是否已赋值
                     * 
                     */
                    bool IdleTTLHasBeenSet() const;

                private:

                    /**
                     * <p>镜像地址。仅支持 repository:tag、repository@sha256:&lt;64 位摘要&gt; 或 repository:tag@sha256:&lt;64 位摘要&gt;。</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code></p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     */
                    std::string m_imageRegistryType;
                    bool m_imageRegistryTypeHasBeenSet;

                    /**
                     * <p>镜像预热类型</p><p>枚举值：</p><ul><li>image： 镜像预热</li><li>image_volume： 镜像卷预热</li></ul><p>默认值：image</p>
                     */
                    std::string m_preCacheType;
                    bool m_preCacheTypeHasBeenSet;

                    /**
                     * <p>闲置清理时间</p><p>枚举值：</p><ul><li>inherit： 继承账号配置的自动清理策略</li><li>0： 永不自动清理</li><li>正整数加 m/h/d： 空闲相应时间后自动清理</li></ul><p>默认值：inherit</p>
                     */
                    std::string m_idleTTL;
                    bool m_idleTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATEPRECACHEIMAGETASKREQUEST_H_
