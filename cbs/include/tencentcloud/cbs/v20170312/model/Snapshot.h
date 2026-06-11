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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOT_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Placement.h>
#include <tencentcloud/cbs/v20170312/model/Image.h>
#include <tencentcloud/cbs/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
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
                     * 获取<p>快照所在的位置。</p>
                     * @return Placement <p>快照所在的位置。</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>快照所在的位置。</p>
                     * @param _placement <p>快照所在的位置。</p>
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
                     * 获取<p>是否为跨地域复制的快照。取值范围：</p><ul>    <li>true：表示为跨地域复制的快照。</li>    <li>false：本地域的快照。</li></ul>
                     * @return CopyFromRemote <p>是否为跨地域复制的快照。取值范围：</p><ul>    <li>true：表示为跨地域复制的快照。</li>    <li>false：本地域的快照。</li></ul>
                     * 
                     */
                    bool GetCopyFromRemote() const;

                    /**
                     * 设置<p>是否为跨地域复制的快照。取值范围：</p><ul>    <li>true：表示为跨地域复制的快照。</li>    <li>false：本地域的快照。</li></ul>
                     * @param _copyFromRemote <p>是否为跨地域复制的快照。取值范围：</p><ul>    <li>true：表示为跨地域复制的快照。</li>    <li>false：本地域的快照。</li></ul>
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
                     * 获取<p>快照的状态。取值范围：</p><ul>    <li>NORMAL：正常</li>    <li>CREATING：创建中</li>    <li>ROLLBACKING：回滚中</li>    <li>COPYING_FROM_REMOTE：跨地域复制中</li>    <li>CHECKING_COPIED：复制校验中</li>    <li>TORECYCLE：待回收</li></ul>
                     * @return SnapshotState <p>快照的状态。取值范围：</p><ul>    <li>NORMAL：正常</li>    <li>CREATING：创建中</li>    <li>ROLLBACKING：回滚中</li>    <li>COPYING_FROM_REMOTE：跨地域复制中</li>    <li>CHECKING_COPIED：复制校验中</li>    <li>TORECYCLE：待回收</li></ul>
                     * 
                     */
                    std::string GetSnapshotState() const;

                    /**
                     * 设置<p>快照的状态。取值范围：</p><ul>    <li>NORMAL：正常</li>    <li>CREATING：创建中</li>    <li>ROLLBACKING：回滚中</li>    <li>COPYING_FROM_REMOTE：跨地域复制中</li>    <li>CHECKING_COPIED：复制校验中</li>    <li>TORECYCLE：待回收</li></ul>
                     * @param _snapshotState <p>快照的状态。取值范围：</p><ul>    <li>NORMAL：正常</li>    <li>CREATING：创建中</li>    <li>ROLLBACKING：回滚中</li>    <li>COPYING_FROM_REMOTE：跨地域复制中</li>    <li>CHECKING_COPIED：复制校验中</li>    <li>TORECYCLE：待回收</li></ul>
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
                     * 获取<p>是否为永久快照。取值范围：</p><ul>    <li>true：永久快照</li>    <li>false：非永久快照</li></ul>
                     * @return IsPermanent <p>是否为永久快照。取值范围：</p><ul>    <li>true：永久快照</li>    <li>false：非永久快照</li></ul>
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置<p>是否为永久快照。取值范围：</p><ul>    <li>true：永久快照</li>    <li>false：非永久快照</li></ul>
                     * @param _isPermanent <p>是否为永久快照。取值范围：</p><ul>    <li>true：永久快照</li>    <li>false：非永久快照</li></ul>
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
                     * 获取<p>快照名称，用户自定义的快照别名。调用<a href="/document/product/362/15650">ModifySnapshotAttribute</a>可修改此字段。</p>
                     * @return SnapshotName <p>快照名称，用户自定义的快照别名。调用<a href="/document/product/362/15650">ModifySnapshotAttribute</a>可修改此字段。</p>
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>快照名称，用户自定义的快照别名。调用<a href="/document/product/362/15650">ModifySnapshotAttribute</a>可修改此字段。</p>
                     * @param _snapshotName <p>快照名称，用户自定义的快照别名。调用<a href="/document/product/362/15650">ModifySnapshotAttribute</a>可修改此字段。</p>
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
                     * 获取<p>快照到期时间。如果快照为永久保留，此字段为空。</p>
                     * @return DeadlineTime <p>快照到期时间。如果快照为永久保留，此字段为空。</p>
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置<p>快照到期时间。如果快照为永久保留，此字段为空。</p>
                     * @param _deadlineTime <p>快照到期时间。如果快照为永久保留，此字段为空。</p>
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
                     * 获取<p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
                     * @return Percent <p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置<p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
                     * @param _percent <p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
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
                     * 获取<p>快照关联的镜像列表。</p>
                     * @return Images <p>快照关联的镜像列表。</p>
                     * 
                     */
                    std::vector<Image> GetImages() const;

                    /**
                     * 设置<p>快照关联的镜像列表。</p>
                     * @param _images <p>快照关联的镜像列表。</p>
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
                     * 获取<p>快照当前被共享数。</p>
                     * @return ShareReference <p>快照当前被共享数。</p>
                     * 
                     */
                    uint64_t GetShareReference() const;

                    /**
                     * 设置<p>快照当前被共享数。</p>
                     * @param _shareReference <p>快照当前被共享数。</p>
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
                     * 获取<p>快照类型，目前该项取值可以为<code>PRIVATE_SNAPSHOT</code>（私有快照）或者<code>SHARED_SNAPSHOT</code>（共享快照）</p>
                     * @return SnapshotType <p>快照类型，目前该项取值可以为<code>PRIVATE_SNAPSHOT</code>（私有快照）或者<code>SHARED_SNAPSHOT</code>（共享快照）</p>
                     * 
                     */
                    std::string GetSnapshotType() const;

                    /**
                     * 设置<p>快照类型，目前该项取值可以为<code>PRIVATE_SNAPSHOT</code>（私有快照）或者<code>SHARED_SNAPSHOT</code>（共享快照）</p>
                     * @param _snapshotType <p>快照类型，目前该项取值可以为<code>PRIVATE_SNAPSHOT</code>（私有快照）或者<code>SHARED_SNAPSHOT</code>（共享快照）</p>
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
                     * 获取<p>创建此快照的云硬盘大小，单位GiB。</p>
                     * @return DiskSize <p>创建此快照的云硬盘大小，单位GiB。</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>创建此快照的云硬盘大小，单位GiB。</p>
                     * @param _diskSize <p>创建此快照的云硬盘大小，单位GiB。</p>
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
                     * 获取<p>创建此快照的云硬盘ID。</p>
                     * @return DiskId <p>创建此快照的云硬盘ID。</p>
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>创建此快照的云硬盘ID。</p>
                     * @param _diskId <p>创建此快照的云硬盘ID。</p>
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
                     * 获取<p>快照正在跨地域复制的目的地域，若没有则返回<code>[]</code>。</p>
                     * @return CopyingToRegions <p>快照正在跨地域复制的目的地域，若没有则返回<code>[]</code>。</p>
                     * 
                     */
                    std::vector<std::string> GetCopyingToRegions() const;

                    /**
                     * 设置<p>快照正在跨地域复制的目的地域，若没有则返回<code>[]</code>。</p>
                     * @param _copyingToRegions <p>快照正在跨地域复制的目的地域，若没有则返回<code>[]</code>。</p>
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
                     * 获取<p>是否为加密盘创建的快照。取值范围：</p><ul>    <li>true：该快照为加密盘创建的</li>    <li>false：非加密盘创建的快照</li></ul>
                     * @return Encrypt <p>是否为加密盘创建的快照。取值范围：</p><ul>    <li>true：该快照为加密盘创建的</li>    <li>false：非加密盘创建的快照</li></ul>
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置<p>是否为加密盘创建的快照。取值范围：</p><ul>    <li>true：该快照为加密盘创建的</li>    <li>false：非加密盘创建的快照</li></ul>
                     * @param _encrypt <p>是否为加密盘创建的快照。取值范围：</p><ul>    <li>true：该快照为加密盘创建的</li>    <li>false：非加密盘创建的快照</li></ul>
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
                     * 获取<p>快照的创建时间。</p>
                     * @return CreateTime <p>快照的创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>快照的创建时间。</p>
                     * @param _createTime <p>快照的创建时间。</p>
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
                     * 获取<p>快照关联的镜像个数。</p>
                     * @return ImageCount <p>快照关联的镜像个数。</p>
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 设置<p>快照关联的镜像个数。</p>
                     * @param _imageCount <p>快照关联的镜像个数。</p>
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
                     * 获取<p>创建此快照的云硬盘类型。取值范围：</p><ul>    <li>SYSTEM_DISK：系统盘</li>    <li>DATA_DISK：数据盘</li></ul>
                     * @return DiskUsage <p>创建此快照的云硬盘类型。取值范围：</p><ul>    <li>SYSTEM_DISK：系统盘</li>    <li>DATA_DISK：数据盘</li></ul>
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置<p>创建此快照的云硬盘类型。取值范围：</p><ul>    <li>SYSTEM_DISK：系统盘</li>    <li>DATA_DISK：数据盘</li></ul>
                     * @param _diskUsage <p>创建此快照的云硬盘类型。取值范围：</p><ul>    <li>SYSTEM_DISK：系统盘</li>    <li>DATA_DISK：数据盘</li></ul>
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
                     * 获取<p>快照ID。</p>
                     * @return SnapshotId <p>快照ID。</p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>快照ID。</p>
                     * @param _snapshotId <p>快照ID。</p>
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
                     * 获取<p>快照开始共享的时间。</p>
                     * @return TimeStartShare <p>快照开始共享的时间。</p>
                     * 
                     */
                    std::string GetTimeStartShare() const;

                    /**
                     * 设置<p>快照开始共享的时间。</p>
                     * @param _timeStartShare <p>快照开始共享的时间。</p>
                     * 
                     */
                    void SetTimeStartShare(const std::string& _timeStartShare);

                    /**
                     * 判断参数 TimeStartShare 是否已赋值
                     * @return TimeStartShare 是否已赋值
                     * 
                     */
                    bool TimeStartShareHasBeenSet() const;

                    /**
                     * 获取<p>快照绑定的标签列表。</p>
                     * @return Tags <p>快照绑定的标签列表。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>快照绑定的标签列表。</p>
                     * @param _tags <p>快照绑定的标签列表。</p>
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
                     * 获取<p>快照是否锁定。取值范围：</p><ul>    <li>true：已锁定</li>    <li>false：未锁定</li></ul>
                     * @return IsLocked <p>快照是否锁定。取值范围：</p><ul>    <li>true：已锁定</li>    <li>false：未锁定</li></ul>
                     * 
                     */
                    bool GetIsLocked() const;

                    /**
                     * 设置<p>快照是否锁定。取值范围：</p><ul>    <li>true：已锁定</li>    <li>false：未锁定</li></ul>
                     * @param _isLocked <p>快照是否锁定。取值范围：</p><ul>    <li>true：已锁定</li>    <li>false：未锁定</li></ul>
                     * 
                     */
                    void SetIsLocked(const bool& _isLocked);

                    /**
                     * 判断参数 IsLocked 是否已赋值
                     * @return IsLocked 是否已赋值
                     * 
                     */
                    bool IsLockedHasBeenSet() const;

                    /**
                     * 获取<p>快照记录的最新修改时间</p>
                     * @return LatestModifyTime <p>快照记录的最新修改时间</p>
                     * 
                     */
                    std::string GetLatestModifyTime() const;

                    /**
                     * 设置<p>快照记录的最新修改时间</p>
                     * @param _latestModifyTime <p>快照记录的最新修改时间</p>
                     * 
                     */
                    void SetLatestModifyTime(const std::string& _latestModifyTime);

                    /**
                     * 判断参数 LatestModifyTime 是否已赋值
                     * @return LatestModifyTime 是否已赋值
                     * 
                     */
                    bool LatestModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>自动快照策略ID，仅当该快照由自动快照策略方式创建时才会返回。</p>
                     * @return AutoSnapshotPolicyId <p>自动快照策略ID，仅当该快照由自动快照策略方式创建时才会返回。</p>
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置<p>自动快照策略ID，仅当该快照由自动快照策略方式创建时才会返回。</p>
                     * @param _autoSnapshotPolicyId <p>自动快照策略ID，仅当该快照由自动快照策略方式创建时才会返回。</p>
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                private:

                    /**
                     * <p>快照所在的位置。</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>是否为跨地域复制的快照。取值范围：</p><ul>    <li>true：表示为跨地域复制的快照。</li>    <li>false：本地域的快照。</li></ul>
                     */
                    bool m_copyFromRemote;
                    bool m_copyFromRemoteHasBeenSet;

                    /**
                     * <p>快照的状态。取值范围：</p><ul>    <li>NORMAL：正常</li>    <li>CREATING：创建中</li>    <li>ROLLBACKING：回滚中</li>    <li>COPYING_FROM_REMOTE：跨地域复制中</li>    <li>CHECKING_COPIED：复制校验中</li>    <li>TORECYCLE：待回收</li></ul>
                     */
                    std::string m_snapshotState;
                    bool m_snapshotStateHasBeenSet;

                    /**
                     * <p>是否为永久快照。取值范围：</p><ul>    <li>true：永久快照</li>    <li>false：非永久快照</li></ul>
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * <p>快照名称，用户自定义的快照别名。调用<a href="/document/product/362/15650">ModifySnapshotAttribute</a>可修改此字段。</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>快照到期时间。如果快照为永久保留，此字段为空。</p>
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * <p>快照创建进度百分比，快照创建成功后此字段恒为100。</p>
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * <p>快照关联的镜像列表。</p>
                     */
                    std::vector<Image> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>快照当前被共享数。</p>
                     */
                    uint64_t m_shareReference;
                    bool m_shareReferenceHasBeenSet;

                    /**
                     * <p>快照类型，目前该项取值可以为<code>PRIVATE_SNAPSHOT</code>（私有快照）或者<code>SHARED_SNAPSHOT</code>（共享快照）</p>
                     */
                    std::string m_snapshotType;
                    bool m_snapshotTypeHasBeenSet;

                    /**
                     * <p>创建此快照的云硬盘大小，单位GiB。</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>创建此快照的云硬盘ID。</p>
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <p>快照正在跨地域复制的目的地域，若没有则返回<code>[]</code>。</p>
                     */
                    std::vector<std::string> m_copyingToRegions;
                    bool m_copyingToRegionsHasBeenSet;

                    /**
                     * <p>是否为加密盘创建的快照。取值范围：</p><ul>    <li>true：该快照为加密盘创建的</li>    <li>false：非加密盘创建的快照</li></ul>
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * <p>快照的创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>快照关联的镜像个数。</p>
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * <p>创建此快照的云硬盘类型。取值范围：</p><ul>    <li>SYSTEM_DISK：系统盘</li>    <li>DATA_DISK：数据盘</li></ul>
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * <p>快照ID。</p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>快照开始共享的时间。</p>
                     */
                    std::string m_timeStartShare;
                    bool m_timeStartShareHasBeenSet;

                    /**
                     * <p>快照绑定的标签列表。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>快照是否锁定。取值范围：</p><ul>    <li>true：已锁定</li>    <li>false：未锁定</li></ul>
                     */
                    bool m_isLocked;
                    bool m_isLockedHasBeenSet;

                    /**
                     * <p>快照记录的最新修改时间</p>
                     */
                    std::string m_latestModifyTime;
                    bool m_latestModifyTimeHasBeenSet;

                    /**
                     * <p>自动快照策略ID，仅当该快照由自动快照策略方式创建时才会返回。</p>
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOT_H_
