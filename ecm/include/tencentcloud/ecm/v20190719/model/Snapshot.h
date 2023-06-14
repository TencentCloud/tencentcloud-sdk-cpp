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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SNAPSHOT_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SNAPSHOT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Placement.h>
#include <tencentcloud/ecm/v20190719/model/Image.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 描述了快照的详细信息
                */
                class Snapshot : public AbstractModel
                {
                public:
                    Snapshot();
                    ~Snapshot() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取快照所在的位置。
                     * @return Placement 快照所在的位置。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置快照所在的位置。
                     * @param _placement 快照所在的位置。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取是否为跨地域复制的快照。取值范围：<br><li>true：表示为跨地域复制的快照。<br><li>false:本地域的快照。
                     * @return CopyFromRemote 是否为跨地域复制的快照。取值范围：<br><li>true：表示为跨地域复制的快照。<br><li>false:本地域的快照。
                     * 
                     */
                    bool GetCopyFromRemote() const;

                    /**
                     * 设置是否为跨地域复制的快照。取值范围：<br><li>true：表示为跨地域复制的快照。<br><li>false:本地域的快照。
                     * @param _copyFromRemote 是否为跨地域复制的快照。取值范围：<br><li>true：表示为跨地域复制的快照。<br><li>false:本地域的快照。
                     * 
                     */
                    void SetCopyFromRemote(const bool& _copyFromRemote);

                    /**
                     * 判断参数 CopyFromRemote 是否已赋值
                     * @return CopyFromRemote 是否已赋值
                     * 
                     */
                    bool CopyFromRemoteHasBeenSet() const;

                    /**
                     * 获取是否为永久快照。取值范围：<br><li>true：永久快照<br><li>false：非永久快照。
                     * @return IsPermanent 是否为永久快照。取值范围：<br><li>true：永久快照<br><li>false：非永久快照。
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置是否为永久快照。取值范围：<br><li>true：永久快照<br><li>false：非永久快照。
                     * @param _isPermanent 是否为永久快照。取值范围：<br><li>true：永久快照<br><li>false：非永久快照。
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取快照名称，用户自定义的快照别名。调用[ModifySnapshotAttribute](/document/product/362/15650)可修改此字段。
                     * @return SnapshotName 快照名称，用户自定义的快照别名。调用[ModifySnapshotAttribute](/document/product/362/15650)可修改此字段。
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称，用户自定义的快照别名。调用[ModifySnapshotAttribute](/document/product/362/15650)可修改此字段。
                     * @param _snapshotName 快照名称，用户自定义的快照别名。调用[ModifySnapshotAttribute](/document/product/362/15650)可修改此字段。
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取快照创建进度百分比，快照创建成功后此字段恒为100。
                     * @return Percent 快照创建进度百分比，快照创建成功后此字段恒为100。
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置快照创建进度百分比，快照创建成功后此字段恒为100。
                     * @param _percent 快照创建进度百分比，快照创建成功后此字段恒为100。
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取快照关联的镜像列表。
                     * @return Images 快照关联的镜像列表。
                     * 
                     */
                    std::vector<Image> GetImages() const;

                    /**
                     * 设置快照关联的镜像列表。
                     * @param _images 快照关联的镜像列表。
                     * 
                     */
                    void SetImages(const std::vector<Image>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取快照当前被共享数。
                     * @return ShareReference 快照当前被共享数。
                     * 
                     */
                    uint64_t GetShareReference() const;

                    /**
                     * 设置快照当前被共享数。
                     * @param _shareReference 快照当前被共享数。
                     * 
                     */
                    void SetShareReference(const uint64_t& _shareReference);

                    /**
                     * 判断参数 ShareReference 是否已赋值
                     * @return ShareReference 是否已赋值
                     * 
                     */
                    bool ShareReferenceHasBeenSet() const;

                    /**
                     * 获取快照类型，目前该项取值可以为PRIVATE_SNAPSHOT或者SHARED_SNAPSHOT
                     * @return SnapshotType 快照类型，目前该项取值可以为PRIVATE_SNAPSHOT或者SHARED_SNAPSHOT
                     * 
                     */
                    std::string GetSnapshotType() const;

                    /**
                     * 设置快照类型，目前该项取值可以为PRIVATE_SNAPSHOT或者SHARED_SNAPSHOT
                     * @param _snapshotType 快照类型，目前该项取值可以为PRIVATE_SNAPSHOT或者SHARED_SNAPSHOT
                     * 
                     */
                    void SetSnapshotType(const std::string& _snapshotType);

                    /**
                     * 判断参数 SnapshotType 是否已赋值
                     * @return SnapshotType 是否已赋值
                     * 
                     */
                    bool SnapshotTypeHasBeenSet() const;

                    /**
                     * 获取创建此快照的云硬盘大小，单位GB。
                     * @return DiskSize 创建此快照的云硬盘大小，单位GB。
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置创建此快照的云硬盘大小，单位GB。
                     * @param _diskSize 创建此快照的云硬盘大小，单位GB。
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取创建此快照的云硬盘ID。
                     * @return DiskId 创建此快照的云硬盘ID。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置创建此快照的云硬盘ID。
                     * @param _diskId 创建此快照的云硬盘ID。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取快照正在跨地域复制的目的地域，默认取值为[]。
                     * @return CopyingToRegions 快照正在跨地域复制的目的地域，默认取值为[]。
                     * 
                     */
                    std::vector<std::string> GetCopyingToRegions() const;

                    /**
                     * 设置快照正在跨地域复制的目的地域，默认取值为[]。
                     * @param _copyingToRegions 快照正在跨地域复制的目的地域，默认取值为[]。
                     * 
                     */
                    void SetCopyingToRegions(const std::vector<std::string>& _copyingToRegions);

                    /**
                     * 判断参数 CopyingToRegions 是否已赋值
                     * @return CopyingToRegions 是否已赋值
                     * 
                     */
                    bool CopyingToRegionsHasBeenSet() const;

                    /**
                     * 获取快照ID。
                     * @return SnapshotId 快照ID。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照ID。
                     * @param _snapshotId 快照ID。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取创建此快照的云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * @return DiskUsage 创建此快照的云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置创建此快照的云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * @param _diskUsage 创建此快照的云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取是否为加密盘创建的快照。取值范围：<br><li>true：该快照为加密盘创建的<br><li>false:非加密盘创建的快照。
                     * @return Encrypt 是否为加密盘创建的快照。取值范围：<br><li>true：该快照为加密盘创建的<br><li>false:非加密盘创建的快照。
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置是否为加密盘创建的快照。取值范围：<br><li>true：该快照为加密盘创建的<br><li>false:非加密盘创建的快照。
                     * @param _encrypt 是否为加密盘创建的快照。取值范围：<br><li>true：该快照为加密盘创建的<br><li>false:非加密盘创建的快照。
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取快照的创建时间。
                     * @return CreateTime 快照的创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置快照的创建时间。
                     * @param _createTime 快照的创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取快照关联的镜像个数。
                     * @return ImageCount 快照关联的镜像个数。
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 设置快照关联的镜像个数。
                     * @param _imageCount 快照关联的镜像个数。
                     * 
                     */
                    void SetImageCount(const uint64_t& _imageCount);

                    /**
                     * 判断参数 ImageCount 是否已赋值
                     * @return ImageCount 是否已赋值
                     * 
                     */
                    bool ImageCountHasBeenSet() const;

                    /**
                     * 获取快照的状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中<br><li>COPYING_FROM_REMOTE：跨地域复制中<br><li>CHECKING_COPIED：复制校验中<br><li>TORECYCLE：待回收。
                     * @return SnapshotState 快照的状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中<br><li>COPYING_FROM_REMOTE：跨地域复制中<br><li>CHECKING_COPIED：复制校验中<br><li>TORECYCLE：待回收。
                     * 
                     */
                    std::string GetSnapshotState() const;

                    /**
                     * 设置快照的状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中<br><li>COPYING_FROM_REMOTE：跨地域复制中<br><li>CHECKING_COPIED：复制校验中<br><li>TORECYCLE：待回收。
                     * @param _snapshotState 快照的状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中<br><li>COPYING_FROM_REMOTE：跨地域复制中<br><li>CHECKING_COPIED：复制校验中<br><li>TORECYCLE：待回收。
                     * 
                     */
                    void SetSnapshotState(const std::string& _snapshotState);

                    /**
                     * 判断参数 SnapshotState 是否已赋值
                     * @return SnapshotState 是否已赋值
                     * 
                     */
                    bool SnapshotStateHasBeenSet() const;

                    /**
                     * 获取快照的到期时间。
                     * @return DeadlineTime 快照的到期时间。
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置快照的到期时间。
                     * @param _deadlineTime 快照的到期时间。
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取快照开始共享的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeStartShare 快照开始共享的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeStartShare() const;

                    /**
                     * 设置快照开始共享的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeStartShare 快照开始共享的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeStartShare(const std::string& _timeStartShare);

                    /**
                     * 判断参数 TimeStartShare 是否已赋值
                     * @return TimeStartShare 是否已赋值
                     * 
                     */
                    bool TimeStartShareHasBeenSet() const;

                private:

                    /**
                     * 快照所在的位置。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 是否为跨地域复制的快照。取值范围：<br><li>true：表示为跨地域复制的快照。<br><li>false:本地域的快照。
                     */
                    bool m_copyFromRemote;
                    bool m_copyFromRemoteHasBeenSet;

                    /**
                     * 是否为永久快照。取值范围：<br><li>true：永久快照<br><li>false：非永久快照。
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * 快照名称，用户自定义的快照别名。调用[ModifySnapshotAttribute](/document/product/362/15650)可修改此字段。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 快照创建进度百分比，快照创建成功后此字段恒为100。
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 快照关联的镜像列表。
                     */
                    std::vector<Image> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 快照当前被共享数。
                     */
                    uint64_t m_shareReference;
                    bool m_shareReferenceHasBeenSet;

                    /**
                     * 快照类型，目前该项取值可以为PRIVATE_SNAPSHOT或者SHARED_SNAPSHOT
                     */
                    std::string m_snapshotType;
                    bool m_snapshotTypeHasBeenSet;

                    /**
                     * 创建此快照的云硬盘大小，单位GB。
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 创建此快照的云硬盘ID。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 快照正在跨地域复制的目的地域，默认取值为[]。
                     */
                    std::vector<std::string> m_copyingToRegions;
                    bool m_copyingToRegionsHasBeenSet;

                    /**
                     * 快照ID。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 创建此快照的云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 是否为加密盘创建的快照。取值范围：<br><li>true：该快照为加密盘创建的<br><li>false:非加密盘创建的快照。
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * 快照的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 快照关联的镜像个数。
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * 快照的状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中<br><li>COPYING_FROM_REMOTE：跨地域复制中<br><li>CHECKING_COPIED：复制校验中<br><li>TORECYCLE：待回收。
                     */
                    std::string m_snapshotState;
                    bool m_snapshotStateHasBeenSet;

                    /**
                     * 快照的到期时间。
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * 快照开始共享的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeStartShare;
                    bool m_timeStartShareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SNAPSHOT_H_
