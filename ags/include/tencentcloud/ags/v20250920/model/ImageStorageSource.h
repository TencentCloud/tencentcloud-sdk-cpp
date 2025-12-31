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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_IMAGESTORAGESOURCE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_IMAGESTORAGESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 镜像卷挂载源配置
                */
                class ImageStorageSource : public AbstractModel
                {
                public:
                    ImageStorageSource();
                    ~ImageStorageSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像地址
                     * @return Reference 镜像地址
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置镜像地址
                     * @param _reference 镜像地址
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

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

                    /**
                     * 获取镜像内部的路径
                     * @return SubPath 镜像内部的路径
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置镜像内部的路径
                     * @param _subPath 镜像内部的路径
                     * 
                     */
                    void SetSubPath(const std::string& _subPath);

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                    /**
                     * 获取镜像 Digest，请求时无需传入
                     * @return Digest 镜像 Digest，请求时无需传入
                     * 
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置镜像 Digest，请求时无需传入
                     * @param _digest 镜像 Digest，请求时无需传入
                     * 
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     * 
                     */
                    bool DigestHasBeenSet() const;

                private:

                    /**
                     * 镜像地址
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * 镜像仓库类型：`enterprise`、`personal`。
                     */
                    std::string m_imageRegistryType;
                    bool m_imageRegistryTypeHasBeenSet;

                    /**
                     * 镜像内部的路径
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * 镜像 Digest，请求时无需传入
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_IMAGESTORAGESOURCE_H_
