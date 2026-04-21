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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_IMAGEINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_IMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 镜像相关配置
                */
                class ImageInfo : public AbstractModel
                {
                public:
                    ImageInfo();
                    ~ImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>tcr仓库地址</p>
                     * @return ImageRegistryUrl <p>tcr仓库地址</p>
                     * 
                     */
                    std::string GetImageRegistryUrl() const;

                    /**
                     * 设置<p>tcr仓库地址</p>
                     * @param _imageRegistryUrl <p>tcr仓库地址</p>
                     * 
                     */
                    void SetImageRegistryUrl(const std::string& _imageRegistryUrl);

                    /**
                     * 判断参数 ImageRegistryUrl 是否已赋值
                     * @return ImageRegistryUrl 是否已赋值
                     * 
                     */
                    bool ImageRegistryUrlHasBeenSet() const;

                    /**
                     * 获取<p>仓库用户名</p>
                     * @return ImageRegistryUsername <p>仓库用户名</p>
                     * 
                     */
                    std::string GetImageRegistryUsername() const;

                    /**
                     * 设置<p>仓库用户名</p>
                     * @param _imageRegistryUsername <p>仓库用户名</p>
                     * 
                     */
                    void SetImageRegistryUsername(const std::string& _imageRegistryUsername);

                    /**
                     * 判断参数 ImageRegistryUsername 是否已赋值
                     * @return ImageRegistryUsername 是否已赋值
                     * 
                     */
                    bool ImageRegistryUsernameHasBeenSet() const;

                    /**
                     * 获取<p>仓库密码</p>
                     * @return ImageRegistryPassword <p>仓库密码</p>
                     * 
                     */
                    std::string GetImageRegistryPassword() const;

                    /**
                     * 设置<p>仓库密码</p>
                     * @param _imageRegistryPassword <p>仓库密码</p>
                     * 
                     */
                    void SetImageRegistryPassword(const std::string& _imageRegistryPassword);

                    /**
                     * 判断参数 ImageRegistryPassword 是否已赋值
                     * @return ImageRegistryPassword 是否已赋值
                     * 
                     */
                    bool ImageRegistryPasswordHasBeenSet() const;

                private:

                    /**
                     * <p>tcr仓库地址</p>
                     */
                    std::string m_imageRegistryUrl;
                    bool m_imageRegistryUrlHasBeenSet;

                    /**
                     * <p>仓库用户名</p>
                     */
                    std::string m_imageRegistryUsername;
                    bool m_imageRegistryUsernameHasBeenSet;

                    /**
                     * <p>仓库密码</p>
                     */
                    std::string m_imageRegistryPassword;
                    bool m_imageRegistryPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_IMAGEINFO_H_
