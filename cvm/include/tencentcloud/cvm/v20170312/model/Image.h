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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_IMAGE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_IMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Snapshot.h>
#include <tencentcloud/cvm/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 一个关于镜像详细信息的结构体，主要包括镜像的主要状态与属性。
                */
                class Image : public AbstractModel
                {
                public:
                    Image();
                    ~Image() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像ID
                     * @return ImageId 镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
                     * @param _imageId 镜像ID
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像操作系统
                     * @return OsName 镜像操作系统
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置镜像操作系统
                     * @param _osName 镜像操作系统
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取镜像类型。镜像类型返回值包括：
* `PUBLIC_IMAGE` 公共镜像
* `PRIVATE_IMAGE` 自定义镜像
* `SHARED_IMAGE` 共享镜像
                     * @return ImageType 镜像类型。镜像类型返回值包括：
* `PUBLIC_IMAGE` 公共镜像
* `PRIVATE_IMAGE` 自定义镜像
* `SHARED_IMAGE` 共享镜像
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型。镜像类型返回值包括：
* `PUBLIC_IMAGE` 公共镜像
* `PRIVATE_IMAGE` 自定义镜像
* `SHARED_IMAGE` 共享镜像
                     * @param _imageType 镜像类型。镜像类型返回值包括：
* `PUBLIC_IMAGE` 公共镜像
* `PRIVATE_IMAGE` 自定义镜像
* `SHARED_IMAGE` 共享镜像
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取镜像创建时间。
按照 ISO8601 标准表示，并且使用 UTC 时间，格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @return CreatedTime 镜像创建时间。
按照 ISO8601 标准表示，并且使用 UTC 时间，格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置镜像创建时间。
按照 ISO8601 标准表示，并且使用 UTC 时间，格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @param _createdTime 镜像创建时间。
按照 ISO8601 标准表示，并且使用 UTC 时间，格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

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
                     * 获取镜像大小，单位 GiB。
                     * @return ImageSize 镜像大小，单位 GiB。
                     * 
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置镜像大小，单位 GiB。
                     * @param _imageSize 镜像大小，单位 GiB。
                     * 
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取镜像架构。镜像架构返回值包括：
* `x86_64`
* `arm`
* `i386`
                     * @return Architecture 镜像架构。镜像架构返回值包括：
* `x86_64`
* `arm`
* `i386`
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置镜像架构。镜像架构返回值包括：
* `x86_64`
* `arm`
* `i386`
                     * @param _architecture 镜像架构。镜像架构返回值包括：
* `x86_64`
* `arm`
* `i386`
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
                     * 获取镜像状态:
CREATING-创建中
NORMAL-正常
CREATEFAILED-创建失败
USING-使用中
SYNCING-同步中
IMPORTING-导入中
IMPORTFAILED-导入失败
                     * @return ImageState 镜像状态:
CREATING-创建中
NORMAL-正常
CREATEFAILED-创建失败
USING-使用中
SYNCING-同步中
IMPORTING-导入中
IMPORTFAILED-导入失败
                     * 
                     */
                    std::string GetImageState() const;

                    /**
                     * 设置镜像状态:
CREATING-创建中
NORMAL-正常
CREATEFAILED-创建失败
USING-使用中
SYNCING-同步中
IMPORTING-导入中
IMPORTFAILED-导入失败
                     * @param _imageState 镜像状态:
CREATING-创建中
NORMAL-正常
CREATEFAILED-创建失败
USING-使用中
SYNCING-同步中
IMPORTING-导入中
IMPORTFAILED-导入失败
                     * 
                     */
                    void SetImageState(const std::string& _imageState);

                    /**
                     * 判断参数 ImageState 是否已赋值
                     * @return ImageState 是否已赋值
                     * 
                     */
                    bool ImageStateHasBeenSet() const;

                    /**
                     * 获取镜像来源平台，包括如TencentOS、 CentOS、 Windows、 Ubuntu、 Debian、Fedora等。
                     * @return Platform 镜像来源平台，包括如TencentOS、 CentOS、 Windows、 Ubuntu、 Debian、Fedora等。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置镜像来源平台，包括如TencentOS、 CentOS、 Windows、 Ubuntu、 Debian、Fedora等。
                     * @param _platform 镜像来源平台，包括如TencentOS、 CentOS、 Windows、 Ubuntu、 Debian、Fedora等。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取镜像创建者
                     * @return ImageCreator 镜像创建者
                     * 
                     */
                    std::string GetImageCreator() const;

                    /**
                     * 设置镜像创建者
                     * @param _imageCreator 镜像创建者
                     * 
                     */
                    void SetImageCreator(const std::string& _imageCreator);

                    /**
                     * 判断参数 ImageCreator 是否已赋值
                     * @return ImageCreator 是否已赋值
                     * 
                     */
                    bool ImageCreatorHasBeenSet() const;

                    /**
                     * 获取镜像来源。镜像来源返回值包括：
* `OFFICIAL` 官方镜像
* `CREATE_IMAGE` 用户自建镜像
* `EXTERNAL_IMPORT` 用户外部导入镜像
                     * @return ImageSource 镜像来源。镜像来源返回值包括：
* `OFFICIAL` 官方镜像
* `CREATE_IMAGE` 用户自建镜像
* `EXTERNAL_IMPORT` 用户外部导入镜像
                     * 
                     */
                    std::string GetImageSource() const;

                    /**
                     * 设置镜像来源。镜像来源返回值包括：
* `OFFICIAL` 官方镜像
* `CREATE_IMAGE` 用户自建镜像
* `EXTERNAL_IMPORT` 用户外部导入镜像
                     * @param _imageSource 镜像来源。镜像来源返回值包括：
* `OFFICIAL` 官方镜像
* `CREATE_IMAGE` 用户自建镜像
* `EXTERNAL_IMPORT` 用户外部导入镜像
                     * 
                     */
                    void SetImageSource(const std::string& _imageSource);

                    /**
                     * 判断参数 ImageSource 是否已赋值
                     * @return ImageSource 是否已赋值
                     * 
                     */
                    bool ImageSourceHasBeenSet() const;

                    /**
                     * 获取同步百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyncPercent 同步百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSyncPercent() const;

                    /**
                     * 设置同步百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _syncPercent 同步百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSyncPercent(const int64_t& _syncPercent);

                    /**
                     * 判断参数 SyncPercent 是否已赋值
                     * @return SyncPercent 是否已赋值
                     * 
                     */
                    bool SyncPercentHasBeenSet() const;

                    /**
                     * 获取镜像是否支持cloud-init
                     * @return IsSupportCloudinit 镜像是否支持cloud-init
                     * 
                     */
                    bool GetIsSupportCloudinit() const;

                    /**
                     * 设置镜像是否支持cloud-init
                     * @param _isSupportCloudinit 镜像是否支持cloud-init
                     * 
                     */
                    void SetIsSupportCloudinit(const bool& _isSupportCloudinit);

                    /**
                     * 判断参数 IsSupportCloudinit 是否已赋值
                     * @return IsSupportCloudinit 是否已赋值
                     * 
                     */
                    bool IsSupportCloudinitHasBeenSet() const;

                    /**
                     * 获取镜像关联的快照信息
                     * @return SnapshotSet 镜像关联的快照信息
                     * 
                     */
                    std::vector<Snapshot> GetSnapshotSet() const;

                    /**
                     * 设置镜像关联的快照信息
                     * @param _snapshotSet 镜像关联的快照信息
                     * 
                     */
                    void SetSnapshotSet(const std::vector<Snapshot>& _snapshotSet);

                    /**
                     * 判断参数 SnapshotSet 是否已赋值
                     * @return SnapshotSet 是否已赋值
                     * 
                     */
                    bool SnapshotSetHasBeenSet() const;

                    /**
                     * 获取镜像关联的标签列表。
                     * @return Tags 镜像关联的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置镜像关联的标签列表。
                     * @param _tags 镜像关联的标签列表。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取镜像许可类型。镜像许可类型返回值包括：
* `TencentCloud` 腾讯云官方许可
* `BYOL` 用户自带许可
                     * @return LicenseType 镜像许可类型。镜像许可类型返回值包括：
* `TencentCloud` 腾讯云官方许可
* `BYOL` 用户自带许可
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置镜像许可类型。镜像许可类型返回值包括：
* `TencentCloud` 腾讯云官方许可
* `BYOL` 用户自带许可
                     * @param _licenseType 镜像许可类型。镜像许可类型返回值包括：
* `TencentCloud` 腾讯云官方许可
* `BYOL` 用户自带许可
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
                     * 获取镜像族
                     * @return ImageFamily 镜像族
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置镜像族
                     * @param _imageFamily 镜像族
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
                     * 获取镜像是否废弃
                     * @return ImageDeprecated 镜像是否废弃
                     * 
                     */
                    bool GetImageDeprecated() const;

                    /**
                     * 设置镜像是否废弃
                     * @param _imageDeprecated 镜像是否废弃
                     * 
                     */
                    void SetImageDeprecated(const bool& _imageDeprecated);

                    /**
                     * 判断参数 ImageDeprecated 是否已赋值
                     * @return ImageDeprecated 是否已赋值
                     * 
                     */
                    bool ImageDeprecatedHasBeenSet() const;

                    /**
                     * 获取CDC镜像缓存状态
                     * @return CdcCacheStatus CDC镜像缓存状态
                     * 
                     */
                    std::string GetCdcCacheStatus() const;

                    /**
                     * 设置CDC镜像缓存状态
                     * @param _cdcCacheStatus CDC镜像缓存状态
                     * 
                     */
                    void SetCdcCacheStatus(const std::string& _cdcCacheStatus);

                    /**
                     * 判断参数 CdcCacheStatus 是否已赋值
                     * @return CdcCacheStatus 是否已赋值
                     * 
                     */
                    bool CdcCacheStatusHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像操作系统
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 镜像类型。镜像类型返回值包括：
* `PUBLIC_IMAGE` 公共镜像
* `PRIVATE_IMAGE` 自定义镜像
* `SHARED_IMAGE` 共享镜像
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 镜像创建时间。
按照 ISO8601 标准表示，并且使用 UTC 时间，格式为：YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像描述
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * 镜像大小，单位 GiB。
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 镜像架构。镜像架构返回值包括：
* `x86_64`
* `arm`
* `i386`
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 镜像状态:
CREATING-创建中
NORMAL-正常
CREATEFAILED-创建失败
USING-使用中
SYNCING-同步中
IMPORTING-导入中
IMPORTFAILED-导入失败
                     */
                    std::string m_imageState;
                    bool m_imageStateHasBeenSet;

                    /**
                     * 镜像来源平台，包括如TencentOS、 CentOS、 Windows、 Ubuntu、 Debian、Fedora等。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 镜像创建者
                     */
                    std::string m_imageCreator;
                    bool m_imageCreatorHasBeenSet;

                    /**
                     * 镜像来源。镜像来源返回值包括：
* `OFFICIAL` 官方镜像
* `CREATE_IMAGE` 用户自建镜像
* `EXTERNAL_IMPORT` 用户外部导入镜像
                     */
                    std::string m_imageSource;
                    bool m_imageSourceHasBeenSet;

                    /**
                     * 同步百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_syncPercent;
                    bool m_syncPercentHasBeenSet;

                    /**
                     * 镜像是否支持cloud-init
                     */
                    bool m_isSupportCloudinit;
                    bool m_isSupportCloudinitHasBeenSet;

                    /**
                     * 镜像关联的快照信息
                     */
                    std::vector<Snapshot> m_snapshotSet;
                    bool m_snapshotSetHasBeenSet;

                    /**
                     * 镜像关联的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 镜像许可类型。镜像许可类型返回值包括：
* `TencentCloud` 腾讯云官方许可
* `BYOL` 用户自带许可
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 镜像族
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * 镜像是否废弃
                     */
                    bool m_imageDeprecated;
                    bool m_imageDeprecatedHasBeenSet;

                    /**
                     * CDC镜像缓存状态
                     */
                    std::string m_cdcCacheStatus;
                    bool m_cdcCacheStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_IMAGE_H_
