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
                     * 获取镜像地址
                     * @return Image 镜像地址
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像地址
                     * @param _image 镜像地址
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
                     * 获取镜像仓库类型：`enterprise`、`personal`。
                     * @return ImageRegistryType 镜像仓库类型：`enterprise`、`personal`。
                     * 
                     */
                    std::string GetImageRegistryType() const;

                    /**
                     * 设置镜像仓库类型：`enterprise`、`personal`。
                     * @param _imageRegistryType 镜像仓库类型：`enterprise`、`personal`。
                     * 
                     */
                    void SetImageRegistryType(const std::string& _imageRegistryType);

                    /**
                     * 判断参数 ImageRegistryType 是否已赋值
                     * @return ImageRegistryType 是否已赋值
                     * 
                     */
                    bool ImageRegistryTypeHasBeenSet() const;

                private:

                    /**
                     * 镜像地址
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 镜像仓库类型：`enterprise`、`personal`。
                     */
                    std::string m_imageRegistryType;
                    bool m_imageRegistryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATEPRECACHEIMAGETASKREQUEST_H_
