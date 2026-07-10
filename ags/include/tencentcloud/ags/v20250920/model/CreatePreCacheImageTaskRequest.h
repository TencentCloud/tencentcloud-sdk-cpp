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
                     * 获取<p>镜像地址</p>
                     * @return Image <p>镜像地址</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>镜像地址</p>
                     * @param _image <p>镜像地址</p>
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
                     * 获取<p>预热超时时长</p>
                     * @return TimeoutMinutes <p>预热超时时长</p>
                     * 
                     */
                    int64_t GetTimeoutMinutes() const;

                    /**
                     * 设置<p>预热超时时长</p>
                     * @param _timeoutMinutes <p>预热超时时长</p>
                     * 
                     */
                    void SetTimeoutMinutes(const int64_t& _timeoutMinutes);

                    /**
                     * 判断参数 TimeoutMinutes 是否已赋值
                     * @return TimeoutMinutes 是否已赋值
                     * 
                     */
                    bool TimeoutMinutesHasBeenSet() const;

                private:

                    /**
                     * <p>镜像地址</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code></p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     */
                    std::string m_imageRegistryType;
                    bool m_imageRegistryTypeHasBeenSet;

                    /**
                     * <p>预热超时时长</p>
                     */
                    int64_t m_timeoutMinutes;
                    bool m_timeoutMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATEPRECACHEIMAGETASKREQUEST_H_
