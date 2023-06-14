/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULIGNOREREGISTRYIMAGE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULIGNOREREGISTRYIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 漏洞扫描忽略的仓库镜像
                */
                class VulIgnoreRegistryImage : public AbstractModel
                {
                public:
                    VulIgnoreRegistryImage();
                    ~VulIgnoreRegistryImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录ID
                     * @return ID 记录ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置记录ID
                     * @param _iD 记录ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取仓库名称
                     * @return RegistryName 仓库名称
                     * 
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置仓库名称
                     * @param _registryName 仓库名称
                     * 
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     * 
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取镜像版本
                     * @return ImageVersion 镜像版本
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置镜像版本
                     * @param _imageVersion 镜像版本
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取仓库地址
                     * @return RegistryPath 仓库地址
                     * 
                     */
                    std::string GetRegistryPath() const;

                    /**
                     * 设置仓库地址
                     * @param _registryPath 仓库地址
                     * 
                     */
                    void SetRegistryPath(const std::string& _registryPath);

                    /**
                     * 判断参数 RegistryPath 是否已赋值
                     * @return RegistryPath 是否已赋值
                     * 
                     */
                    bool RegistryPathHasBeenSet() const;

                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像ID
                     * @param _imageID 镜像ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取漏洞PocID
                     * @return PocID 漏洞PocID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置漏洞PocID
                     * @param _pocID 漏洞PocID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                private:

                    /**
                     * 记录ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 仓库名称
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * 镜像版本
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * 仓库地址
                     */
                    std::string m_registryPath;
                    bool m_registryPathHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 漏洞PocID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULIGNOREREGISTRYIMAGE_H_
