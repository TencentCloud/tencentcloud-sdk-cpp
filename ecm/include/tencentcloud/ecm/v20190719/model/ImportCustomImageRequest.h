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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_IMPORTCUSTOMIMAGEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_IMPORTCUSTOMIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ImageUrl.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ImportCustomImage请求参数结构体
                */
                class ImportCustomImageRequest : public AbstractModel
                {
                public:
                    ImportCustomImageRequest();
                    ~ImportCustomImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param _imageName 镜像名称
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取导入镜像的操作系统架构，x86_64 或 i386
                     * @return Architecture 导入镜像的操作系统架构，x86_64 或 i386
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置导入镜像的操作系统架构，x86_64 或 i386
                     * @param _architecture 导入镜像的操作系统架构，x86_64 或 i386
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取导入镜像的操作系统类型，通过DescribeImportImageOs获取
                     * @return OsType 导入镜像的操作系统类型，通过DescribeImportImageOs获取
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置导入镜像的操作系统类型，通过DescribeImportImageOs获取
                     * @param _osType 导入镜像的操作系统类型，通过DescribeImportImageOs获取
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取导入镜像的操作系统版本，通过DescribeImportImageOs获取
                     * @return OsVersion 导入镜像的操作系统版本，通过DescribeImportImageOs获取
                     * 
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置导入镜像的操作系统版本，通过DescribeImportImageOs获取
                     * @param _osVersion 导入镜像的操作系统版本，通过DescribeImportImageOs获取
                     * 
                     */
                    void SetOsVersion(const std::string& _osVersion);

                    /**
                     * 判断参数 OsVersion 是否已赋值
                     * @return OsVersion 是否已赋值
                     * 
                     */
                    bool OsVersionHasBeenSet() const;

                    /**
                     * 获取镜像描述
                     * @return ImageDescription 镜像描述
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述
                     * @param _imageDescription 镜像描述
                     * 
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     * 
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取镜像启动方式，cloudinit或nbd， 默认cloudinit
                     * @return InitFlag 镜像启动方式，cloudinit或nbd， 默认cloudinit
                     * 
                     */
                    std::string GetInitFlag() const;

                    /**
                     * 设置镜像启动方式，cloudinit或nbd， 默认cloudinit
                     * @param _initFlag 镜像启动方式，cloudinit或nbd， 默认cloudinit
                     * 
                     */
                    void SetInitFlag(const std::string& _initFlag);

                    /**
                     * 判断参数 InitFlag 是否已赋值
                     * @return InitFlag 是否已赋值
                     * 
                     */
                    bool InitFlagHasBeenSet() const;

                    /**
                     * 获取镜像文件描述，多层镜像按顺序传入
                     * @return ImageUrls 镜像文件描述，多层镜像按顺序传入
                     * 
                     */
                    std::vector<ImageUrl> GetImageUrls() const;

                    /**
                     * 设置镜像文件描述，多层镜像按顺序传入
                     * @param _imageUrls 镜像文件描述，多层镜像按顺序传入
                     * 
                     */
                    void SetImageUrls(const std::vector<ImageUrl>& _imageUrls);

                    /**
                     * 判断参数 ImageUrls 是否已赋值
                     * @return ImageUrls 是否已赋值
                     * 
                     */
                    bool ImageUrlsHasBeenSet() const;

                private:

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 导入镜像的操作系统架构，x86_64 或 i386
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 导入镜像的操作系统类型，通过DescribeImportImageOs获取
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 导入镜像的操作系统版本，通过DescribeImportImageOs获取
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                    /**
                     * 镜像描述
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 镜像启动方式，cloudinit或nbd， 默认cloudinit
                     */
                    std::string m_initFlag;
                    bool m_initFlagHasBeenSet;

                    /**
                     * 镜像文件描述，多层镜像按顺序传入
                     */
                    std::vector<ImageUrl> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_IMPORTCUSTOMIMAGEREQUEST_H_
