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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTIMAGEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>
#include <tencentcloud/cvm/v20170312/model/ImportImageDataDisk.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ImportImage请求参数结构体
                */
                class ImportImageRequest : public AbstractModel
                {
                public:
                    ImportImageRequest();
                    ~ImportImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导入镜像的操作系统架构。
取值范围包括：`x86_64` 、`i386`、`arm_64`
                     * @return Architecture 导入镜像的操作系统架构。
取值范围包括：`x86_64` 、`i386`、`arm_64`
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置导入镜像的操作系统架构。
取值范围包括：`x86_64` 、`i386`、`arm_64`
                     * @param _architecture 导入镜像的操作系统架构。
取值范围包括：`x86_64` 、`i386`、`arm_64`
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
                     * 获取导入镜像的操作系统类型 。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsListSupported`获取。
                     * @return OsType 导入镜像的操作系统类型 。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsListSupported`获取。
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置导入镜像的操作系统类型 。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsListSupported`获取。
                     * @param _osType 导入镜像的操作系统类型 。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsListSupported`获取。
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
                     * 获取导入镜像的操作系统版本。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsVersionSet`获取。
                     * @return OsVersion 导入镜像的操作系统版本。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsVersionSet`获取。
                     * 
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置导入镜像的操作系统版本。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsVersionSet`获取。
                     * @param _osVersion 导入镜像的操作系统版本。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsVersionSet`获取。
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
                     * 获取导入镜像存放的cos地址
                     * @return ImageUrl 导入镜像存放的cos地址
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置导入镜像存放的cos地址
                     * @param _imageUrl 导入镜像存放的cos地址
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取镜像名称。
最多支持 60 个字符。
                     * @return ImageName 镜像名称。
最多支持 60 个字符。
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称。
最多支持 60 个字符。
                     * @param _imageName 镜像名称。
最多支持 60 个字符。
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
                     * 获取镜像描述。
最多支持 256 个字符。
                     * @return ImageDescription 镜像描述。
最多支持 256 个字符。
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述。
最多支持 256 个字符。
                     * @param _imageDescription 镜像描述。
最多支持 256 个字符。
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
                     * 获取只检查参数，不执行任务。
默认值：false
                     * @return DryRun 只检查参数，不执行任务。
默认值：false
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置只检查参数，不执行任务。
默认值：false
                     * @param _dryRun 只检查参数，不执行任务。
默认值：false
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取是否强制导入，参考[强制导入镜像](https://cloud.tencent.com/document/product/213/12849)
默认值：false
                     * @return Force 是否强制导入，参考[强制导入镜像](https://cloud.tencent.com/document/product/213/12849)
默认值：false
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否强制导入，参考[强制导入镜像](https://cloud.tencent.com/document/product/213/12849)
默认值：false
                     * @param _force 是否强制导入，参考[强制导入镜像](https://cloud.tencent.com/document/product/213/12849)
默认值：false
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                    /**
                     * 获取标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
                     * @return TagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
                     * @param _tagSpecification 标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取导入镜像后，激活操作系统采用的许可证类型。
默认值：TencentCloud
取值范围：
TencentCloud: 腾讯云官方许可
BYOL: 自带许可（Bring Your Own License）
                     * @return LicenseType 导入镜像后，激活操作系统采用的许可证类型。
默认值：TencentCloud
取值范围：
TencentCloud: 腾讯云官方许可
BYOL: 自带许可（Bring Your Own License）
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置导入镜像后，激活操作系统采用的许可证类型。
默认值：TencentCloud
取值范围：
TencentCloud: 腾讯云官方许可
BYOL: 自带许可（Bring Your Own License）
                     * @param _licenseType 导入镜像后，激活操作系统采用的许可证类型。
默认值：TencentCloud
取值范围：
TencentCloud: 腾讯云官方许可
BYOL: 自带许可（Bring Your Own License）
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取启动模式。
取值范围：`Legacy BIOS`、`UEFI`
默认值：Legacy BIOS
                     * @return BootMode 启动模式。
取值范围：`Legacy BIOS`、`UEFI`
默认值：Legacy BIOS
                     * 
                     */
                    std::string GetBootMode() const;

                    /**
                     * 设置启动模式。
取值范围：`Legacy BIOS`、`UEFI`
默认值：Legacy BIOS
                     * @param _bootMode 启动模式。
取值范围：`Legacy BIOS`、`UEFI`
默认值：Legacy BIOS
                     * 
                     */
                    void SetBootMode(const std::string& _bootMode);

                    /**
                     * 判断参数 BootMode 是否已赋值
                     * @return BootMode 是否已赋值
                     * 
                     */
                    bool BootModeHasBeenSet() const;

                    /**
                     * 获取 镜像族
                     * @return ImageFamily  镜像族
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置 镜像族
                     * @param _imageFamily  镜像族
                     * 
                     */
                    void SetImageFamily(const std::string& _imageFamily);

                    /**
                     * 判断参数 ImageFamily 是否已赋值
                     * @return ImageFamily 是否已赋值
                     * 
                     */
                    bool ImageFamilyHasBeenSet() const;

                    /**
                     * 获取导入的数据盘列表
                     * @return ImportImageDataDiskList 导入的数据盘列表
                     * 
                     */
                    std::vector<ImportImageDataDisk> GetImportImageDataDiskList() const;

                    /**
                     * 设置导入的数据盘列表
                     * @param _importImageDataDiskList 导入的数据盘列表
                     * 
                     */
                    void SetImportImageDataDiskList(const std::vector<ImportImageDataDisk>& _importImageDataDiskList);

                    /**
                     * 判断参数 ImportImageDataDiskList 是否已赋值
                     * @return ImportImageDataDiskList 是否已赋值
                     * 
                     */
                    bool ImportImageDataDiskListHasBeenSet() const;

                private:

                    /**
                     * 导入镜像的操作系统架构。
取值范围包括：`x86_64` 、`i386`、`arm_64`
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 导入镜像的操作系统类型 。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsListSupported`获取。
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 导入镜像的操作系统版本。
可通过 [DescribeImportImageOs](https://cloud.tencent.com/document/api/213/15718) 接口返回值中的`ImportImageOsVersionSet`获取。
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                    /**
                     * 导入镜像存放的cos地址
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 镜像名称。
最多支持 60 个字符。
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像描述。
最多支持 256 个字符。
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 只检查参数，不执行任务。
默认值：false
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 是否强制导入，参考[强制导入镜像](https://cloud.tencent.com/document/product/213/12849)
默认值：false
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                    /**
                     * 标签描述列表。通过指定该参数可以同时绑定标签到自定义镜像。
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 导入镜像后，激活操作系统采用的许可证类型。
默认值：TencentCloud
取值范围：
TencentCloud: 腾讯云官方许可
BYOL: 自带许可（Bring Your Own License）
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 启动模式。
取值范围：`Legacy BIOS`、`UEFI`
默认值：Legacy BIOS
                     */
                    std::string m_bootMode;
                    bool m_bootModeHasBeenSet;

                    /**
                     *  镜像族
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * 导入的数据盘列表
                     */
                    std::vector<ImportImageDataDisk> m_importImageDataDiskList;
                    bool m_importImageDataDiskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_IMPORTIMAGEREQUEST_H_
