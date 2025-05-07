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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTGROUP_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Image.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述快照组详情
                */
                class SnapshotGroup : public AbstractModel
                {
                public:
                    SnapshotGroup();
                    ~SnapshotGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取快照组ID。
                     * @return SnapshotGroupId 快照组ID。
                     * 
                     */
                    std::string GetSnapshotGroupId() const;

                    /**
                     * 设置快照组ID。
                     * @param _snapshotGroupId 快照组ID。
                     * 
                     */
                    void SetSnapshotGroupId(const std::string& _snapshotGroupId);

                    /**
                     * 判断参数 SnapshotGroupId 是否已赋值
                     * @return SnapshotGroupId 是否已赋值
                     * 
                     */
                    bool SnapshotGroupIdHasBeenSet() const;

                    /**
                     * 获取快照组类型。NORMAL: 普通快照组，非一致性快照。
                     * @return SnapshotGroupType 快照组类型。NORMAL: 普通快照组，非一致性快照。
                     * 
                     */
                    std::string GetSnapshotGroupType() const;

                    /**
                     * 设置快照组类型。NORMAL: 普通快照组，非一致性快照。
                     * @param _snapshotGroupType 快照组类型。NORMAL: 普通快照组，非一致性快照。
                     * 
                     */
                    void SetSnapshotGroupType(const std::string& _snapshotGroupType);

                    /**
                     * 判断参数 SnapshotGroupType 是否已赋值
                     * @return SnapshotGroupType 是否已赋值
                     * 
                     */
                    bool SnapshotGroupTypeHasBeenSet() const;

                    /**
                     * 获取快照组是否包含系统盘快照。
                     * @return ContainRootSnapshot 快照组是否包含系统盘快照。
                     * 
                     */
                    bool GetContainRootSnapshot() const;

                    /**
                     * 设置快照组是否包含系统盘快照。
                     * @param _containRootSnapshot 快照组是否包含系统盘快照。
                     * 
                     */
                    void SetContainRootSnapshot(const bool& _containRootSnapshot);

                    /**
                     * 判断参数 ContainRootSnapshot 是否已赋值
                     * @return ContainRootSnapshot 是否已赋值
                     * 
                     */
                    bool ContainRootSnapshotHasBeenSet() const;

                    /**
                     * 获取快照组包含的快照ID列表。
                     * @return SnapshotIdSet 快照组包含的快照ID列表。
                     * 
                     */
                    std::vector<std::string> GetSnapshotIdSet() const;

                    /**
                     * 设置快照组包含的快照ID列表。
                     * @param _snapshotIdSet 快照组包含的快照ID列表。
                     * 
                     */
                    void SetSnapshotIdSet(const std::vector<std::string>& _snapshotIdSet);

                    /**
                     * 判断参数 SnapshotIdSet 是否已赋值
                     * @return SnapshotIdSet 是否已赋值
                     * 
                     */
                    bool SnapshotIdSetHasBeenSet() const;

                    /**
                     * 获取<ul>
    <li>NORMAL: 正常</li>
    <li>CREATING: 创建中</li>
    <li>ROLLBACKING: 回滚中</li>
</ul>
                     * @return SnapshotGroupState <ul>
    <li>NORMAL: 正常</li>
    <li>CREATING: 创建中</li>
    <li>ROLLBACKING: 回滚中</li>
</ul>
                     * 
                     */
                    std::string GetSnapshotGroupState() const;

                    /**
                     * 设置<ul>
    <li>NORMAL: 正常</li>
    <li>CREATING: 创建中</li>
    <li>ROLLBACKING: 回滚中</li>
</ul>
                     * @param _snapshotGroupState <ul>
    <li>NORMAL: 正常</li>
    <li>CREATING: 创建中</li>
    <li>ROLLBACKING: 回滚中</li>
</ul>
                     * 
                     */
                    void SetSnapshotGroupState(const std::string& _snapshotGroupState);

                    /**
                     * 判断参数 SnapshotGroupState 是否已赋值
                     * @return SnapshotGroupState 是否已赋值
                     * 
                     */
                    bool SnapshotGroupStateHasBeenSet() const;

                    /**
                     * 获取快照组创建进度。
                     * @return Percent 快照组创建进度。
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置快照组创建进度。
                     * @param _percent 快照组创建进度。
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
                     * 获取快照组创建时间。
                     * @return CreateTime 快照组创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置快照组创建时间。
                     * @param _createTime 快照组创建时间。
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
                     * 获取快照组最新修改时间
                     * @return ModifyTime 快照组最新修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置快照组最新修改时间
                     * @param _modifyTime 快照组最新修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取快照组关联的镜像列表。
                     * @return Images 快照组关联的镜像列表。
                     * 
                     */
                    std::vector<Image> GetImages() const;

                    /**
                     * 设置快照组关联的镜像列表。
                     * @param _images 快照组关联的镜像列表。
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
                     * 获取快照组名称。
                     * @return SnapshotGroupName 快照组名称。
                     * 
                     */
                    std::string GetSnapshotGroupName() const;

                    /**
                     * 设置快照组名称。
                     * @param _snapshotGroupName 快照组名称。
                     * 
                     */
                    void SetSnapshotGroupName(const std::string& _snapshotGroupName);

                    /**
                     * 判断参数 SnapshotGroupName 是否已赋值
                     * @return SnapshotGroupName 是否已赋值
                     * 
                     */
                    bool SnapshotGroupNameHasBeenSet() const;

                    /**
                     * 获取快照组关联的镜像数量。
                     * @return ImageCount 快照组关联的镜像数量。
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 设置快照组关联的镜像数量。
                     * @param _imageCount 快照组关联的镜像数量。
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
                     * 获取快照组是否永久保留
                     * @return IsPermanent 快照组是否永久保留
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置快照组是否永久保留
                     * @param _isPermanent 快照组是否永久保留
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
                     * 获取快照组到期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadlineTime 快照组到期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置快照组到期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadlineTime 快照组到期时间。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取来源自动快照策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoSnapshotPolicyId 来源自动快照策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置来源自动快照策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoSnapshotPolicyId 来源自动快照策略ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 快照组ID。
                     */
                    std::string m_snapshotGroupId;
                    bool m_snapshotGroupIdHasBeenSet;

                    /**
                     * 快照组类型。NORMAL: 普通快照组，非一致性快照。
                     */
                    std::string m_snapshotGroupType;
                    bool m_snapshotGroupTypeHasBeenSet;

                    /**
                     * 快照组是否包含系统盘快照。
                     */
                    bool m_containRootSnapshot;
                    bool m_containRootSnapshotHasBeenSet;

                    /**
                     * 快照组包含的快照ID列表。
                     */
                    std::vector<std::string> m_snapshotIdSet;
                    bool m_snapshotIdSetHasBeenSet;

                    /**
                     * <ul>
    <li>NORMAL: 正常</li>
    <li>CREATING: 创建中</li>
    <li>ROLLBACKING: 回滚中</li>
</ul>
                     */
                    std::string m_snapshotGroupState;
                    bool m_snapshotGroupStateHasBeenSet;

                    /**
                     * 快照组创建进度。
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 快照组创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 快照组最新修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 快照组关联的镜像列表。
                     */
                    std::vector<Image> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 快照组名称。
                     */
                    std::string m_snapshotGroupName;
                    bool m_snapshotGroupNameHasBeenSet;

                    /**
                     * 快照组关联的镜像数量。
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * 快照组是否永久保留
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * 快照组到期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * 来源自动快照策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOTGROUP_H_
