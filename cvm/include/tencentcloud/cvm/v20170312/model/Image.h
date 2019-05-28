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
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
                     * @param ImageId 镜像ID
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像操作系统
                     * @return OsName 镜像操作系统
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置镜像操作系统
                     * @param OsName 镜像操作系统
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取镜像类型
                     * @return ImageType 镜像类型
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像类型
                     * @param ImageType 镜像类型
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取镜像创建时间
                     * @return CreatedTime 镜像创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置镜像创建时间
                     * @param CreatedTime 镜像创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param ImageName 镜像名称
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取镜像描述
                     * @return ImageDescription 镜像描述
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置镜像描述
                     * @param ImageDescription 镜像描述
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取镜像大小
                     * @return ImageSize 镜像大小
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置镜像大小
                     * @param ImageSize 镜像大小
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取镜像架构
                     * @return Architecture 镜像架构
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置镜像架构
                     * @param Architecture 镜像架构
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取镜像状态
                     * @return ImageState 镜像状态
                     */
                    std::string GetImageState() const;

                    /**
                     * 设置镜像状态
                     * @param ImageState 镜像状态
                     */
                    void SetImageState(const std::string& _imageState);

                    /**
                     * 判断参数 ImageState 是否已赋值
                     * @return ImageState 是否已赋值
                     */
                    bool ImageStateHasBeenSet() const;

                    /**
                     * 获取镜像来源平台
                     * @return Platform 镜像来源平台
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置镜像来源平台
                     * @param Platform 镜像来源平台
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取镜像创建者
                     * @return ImageCreator 镜像创建者
                     */
                    std::string GetImageCreator() const;

                    /**
                     * 设置镜像创建者
                     * @param ImageCreator 镜像创建者
                     */
                    void SetImageCreator(const std::string& _imageCreator);

                    /**
                     * 判断参数 ImageCreator 是否已赋值
                     * @return ImageCreator 是否已赋值
                     */
                    bool ImageCreatorHasBeenSet() const;

                    /**
                     * 获取镜像来源
                     * @return ImageSource 镜像来源
                     */
                    std::string GetImageSource() const;

                    /**
                     * 设置镜像来源
                     * @param ImageSource 镜像来源
                     */
                    void SetImageSource(const std::string& _imageSource);

                    /**
                     * 判断参数 ImageSource 是否已赋值
                     * @return ImageSource 是否已赋值
                     */
                    bool ImageSourceHasBeenSet() const;

                    /**
                     * 获取同步百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SyncPercent 同步百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSyncPercent() const;

                    /**
                     * 设置同步百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SyncPercent 同步百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSyncPercent(const int64_t& _syncPercent);

                    /**
                     * 判断参数 SyncPercent 是否已赋值
                     * @return SyncPercent 是否已赋值
                     */
                    bool SyncPercentHasBeenSet() const;

                    /**
                     * 获取镜像是否支持cloud-init
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportCloudinit 镜像是否支持cloud-init
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsSupportCloudinit() const;

                    /**
                     * 设置镜像是否支持cloud-init
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsSupportCloudinit 镜像是否支持cloud-init
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsSupportCloudinit(const bool& _isSupportCloudinit);

                    /**
                     * 判断参数 IsSupportCloudinit 是否已赋值
                     * @return IsSupportCloudinit 是否已赋值
                     */
                    bool IsSupportCloudinitHasBeenSet() const;

                    /**
                     * 获取镜像关联的快照信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotSet 镜像关联的快照信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Snapshot> GetSnapshotSet() const;

                    /**
                     * 设置镜像关联的快照信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SnapshotSet 镜像关联的快照信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSnapshotSet(const std::vector<Snapshot>& _snapshotSet);

                    /**
                     * 判断参数 SnapshotSet 是否已赋值
                     * @return SnapshotSet 是否已赋值
                     */
                    bool SnapshotSetHasBeenSet() const;

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
                     * 镜像类型
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * 镜像创建时间
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
                     * 镜像大小
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 镜像架构
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 镜像状态
                     */
                    std::string m_imageState;
                    bool m_imageStateHasBeenSet;

                    /**
                     * 镜像来源平台
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 镜像创建者
                     */
                    std::string m_imageCreator;
                    bool m_imageCreatorHasBeenSet;

                    /**
                     * 镜像来源
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSupportCloudinit;
                    bool m_isSupportCloudinitHasBeenSet;

                    /**
                     * 镜像关联的快照信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Snapshot> m_snapshotSet;
                    bool m_snapshotSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_IMAGE_H_
