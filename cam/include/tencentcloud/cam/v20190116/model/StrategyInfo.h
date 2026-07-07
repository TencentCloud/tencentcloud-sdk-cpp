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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/Tag.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 策略信息
                */
                class StrategyInfo : public AbstractModel
                {
                public:
                    StrategyInfo();
                    ~StrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略ID。</p>
                     * @return PolicyId <p>策略ID。</p>
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置<p>策略ID。</p>
                     * @param _policyId <p>策略ID。</p>
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>策略名称。</p>
                     * @return PolicyName <p>策略名称。</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>策略名称。</p>
                     * @param _policyName <p>策略名称。</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>策略创建时间。</p>
                     * @return AddTime <p>策略创建时间。</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置<p>策略创建时间。</p>
                     * @param _addTime <p>策略创建时间。</p>
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取<p>策略类型。1 表示自定义策略，2 表示预设策略。</p>
                     * @return Type <p>策略类型。1 表示自定义策略，2 表示预设策略。</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>策略类型。1 表示自定义策略，2 表示预设策略。</p>
                     * @param _type <p>策略类型。1 表示自定义策略，2 表示预设策略。</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>策略描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>策略描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>策略描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>创建来源，1 通过控制台创建, 2 通过策略语法创建。</p>
                     * @return CreateMode <p>创建来源，1 通过控制台创建, 2 通过策略语法创建。</p>
                     * 
                     */
                    uint64_t GetCreateMode() const;

                    /**
                     * 设置<p>创建来源，1 通过控制台创建, 2 通过策略语法创建。</p>
                     * @param _createMode <p>创建来源，1 通过控制台创建, 2 通过策略语法创建。</p>
                     * 
                     */
                    void SetCreateMode(const uint64_t& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     * 
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取<p>关联的用户数</p>
                     * @return Attachments <p>关联的用户数</p>
                     * 
                     */
                    uint64_t GetAttachments() const;

                    /**
                     * 设置<p>关联的用户数</p>
                     * @param _attachments <p>关联的用户数</p>
                     * 
                     */
                    void SetAttachments(const uint64_t& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     * 
                     */
                    bool AttachmentsHasBeenSet() const;

                    /**
                     * 获取<p>策略关联的产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType <p>策略关联的产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>策略关联的产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceType <p>策略关联的产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAttached <p>当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsAttached() const;

                    /**
                     * 设置<p>当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAttached <p>当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAttached(const uint64_t& _isAttached);

                    /**
                     * 判断参数 IsAttached 是否已赋值
                     * @return IsAttached 是否已赋值
                     * 
                     */
                    bool IsAttachedHasBeenSet() const;

                    /**
                     * 获取<p>是否已下线</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deactived <p>是否已下线</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeactived() const;

                    /**
                     * 设置<p>是否已下线</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deactived <p>是否已下线</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeactived(const uint64_t& _deactived);

                    /**
                     * 判断参数 Deactived 是否已赋值
                     * @return Deactived 是否已赋值
                     * 
                     */
                    bool DeactivedHasBeenSet() const;

                    /**
                     * 获取<p>已下线产品列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeactivedDetail <p>已下线产品列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDeactivedDetail() const;

                    /**
                     * 设置<p>已下线产品列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deactivedDetail <p>已下线产品列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeactivedDetail(const std::vector<std::string>& _deactivedDetail);

                    /**
                     * 判断参数 DeactivedDetail 是否已赋值
                     * @return DeactivedDetail 是否已赋值
                     * 
                     */
                    bool DeactivedDetailHasBeenSet() const;

                    /**
                     * 获取<p>是否是服务相关角色策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsServiceLinkedPolicy <p>是否是服务相关角色策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsServiceLinkedPolicy() const;

                    /**
                     * 设置<p>是否是服务相关角色策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isServiceLinkedPolicy <p>是否是服务相关角色策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsServiceLinkedPolicy(const uint64_t& _isServiceLinkedPolicy);

                    /**
                     * 判断参数 IsServiceLinkedPolicy 是否已赋值
                     * @return IsServiceLinkedPolicy 是否已赋值
                     * 
                     */
                    bool IsServiceLinkedPolicyHasBeenSet() const;

                    /**
                     * 获取<p>关联策略实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachEntityCount <p>关联策略实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAttachEntityCount() const;

                    /**
                     * 设置<p>关联策略实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachEntityCount <p>关联策略实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachEntityCount(const int64_t& _attachEntityCount);

                    /**
                     * 判断参数 AttachEntityCount 是否已赋值
                     * @return AttachEntityCount 是否已赋值
                     * 
                     */
                    bool AttachEntityCountHasBeenSet() const;

                    /**
                     * 获取<p>关联权限边界实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachEntityBoundaryCount <p>关联权限边界实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAttachEntityBoundaryCount() const;

                    /**
                     * 设置<p>关联权限边界实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachEntityBoundaryCount <p>关联权限边界实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachEntityBoundaryCount(const int64_t& _attachEntityBoundaryCount);

                    /**
                     * 判断参数 AttachEntityBoundaryCount 是否已赋值
                     * @return AttachEntityBoundaryCount 是否已赋值
                     * 
                     */
                    bool AttachEntityBoundaryCountHasBeenSet() const;

                    /**
                     * 获取<p>最后编辑时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>最后编辑时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最后编辑时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>最后编辑时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>权限级别</p><p>枚举值：</p><ul><li>Global： 全局权限</li><li>Finance： 财务权限</li><li>CloudProduct： 云产品权限</li></ul>
                     * @return PermissionLevel <p>权限级别</p><p>枚举值：</p><ul><li>Global： 全局权限</li><li>Finance： 财务权限</li><li>CloudProduct： 云产品权限</li></ul>
                     * 
                     */
                    std::string GetPermissionLevel() const;

                    /**
                     * 设置<p>权限级别</p><p>枚举值：</p><ul><li>Global： 全局权限</li><li>Finance： 财务权限</li><li>CloudProduct： 云产品权限</li></ul>
                     * @param _permissionLevel <p>权限级别</p><p>枚举值：</p><ul><li>Global： 全局权限</li><li>Finance： 财务权限</li><li>CloudProduct： 云产品权限</li></ul>
                     * 
                     */
                    void SetPermissionLevel(const std::string& _permissionLevel);

                    /**
                     * 判断参数 PermissionLevel 是否已赋值
                     * @return PermissionLevel 是否已赋值
                     * 
                     */
                    bool PermissionLevelHasBeenSet() const;

                private:

                    /**
                     * <p>策略ID。</p>
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>策略名称。</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>策略创建时间。</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>策略类型。1 表示自定义策略，2 表示预设策略。</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>策略描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建来源，1 通过控制台创建, 2 通过策略语法创建。</p>
                     */
                    uint64_t m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * <p>关联的用户数</p>
                     */
                    uint64_t m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * <p>策略关联的产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isAttached;
                    bool m_isAttachedHasBeenSet;

                    /**
                     * <p>是否已下线</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deactived;
                    bool m_deactivedHasBeenSet;

                    /**
                     * <p>已下线产品列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_deactivedDetail;
                    bool m_deactivedDetailHasBeenSet;

                    /**
                     * <p>是否是服务相关角色策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isServiceLinkedPolicy;
                    bool m_isServiceLinkedPolicyHasBeenSet;

                    /**
                     * <p>关联策略实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attachEntityCount;
                    bool m_attachEntityCountHasBeenSet;

                    /**
                     * <p>关联权限边界实体数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attachEntityBoundaryCount;
                    bool m_attachEntityBoundaryCountHasBeenSet;

                    /**
                     * <p>最后编辑时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>权限级别</p><p>枚举值：</p><ul><li>Global： 全局权限</li><li>Finance： 财务权限</li><li>CloudProduct： 云产品权限</li></ul>
                     */
                    std::string m_permissionLevel;
                    bool m_permissionLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_
