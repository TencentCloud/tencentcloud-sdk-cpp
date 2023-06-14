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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取策略ID。
                     * @return PolicyId 策略ID。
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略ID。
                     * @param _policyId 策略ID。
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
                     * 获取策略名称。
                     * @return PolicyName 策略名称。
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称。
                     * @param _policyName 策略名称。
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
                     * 获取策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddTime 策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addTime 策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取策略类型。1 表示自定义策略，2 表示预设策略。
                     * @return Type 策略类型。1 表示自定义策略，2 表示预设策略。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置策略类型。1 表示自定义策略，2 表示预设策略。
                     * @param _type 策略类型。1 表示自定义策略，2 表示预设策略。
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
                     * 获取策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 策略描述。
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
                     * 获取创建来源，1 通过控制台创建, 2 通过策略语法创建。
                     * @return CreateMode 创建来源，1 通过控制台创建, 2 通过策略语法创建。
                     * 
                     */
                    uint64_t GetCreateMode() const;

                    /**
                     * 设置创建来源，1 通过控制台创建, 2 通过策略语法创建。
                     * @param _createMode 创建来源，1 通过控制台创建, 2 通过策略语法创建。
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
                     * 获取关联的用户数
                     * @return Attachments 关联的用户数
                     * 
                     */
                    uint64_t GetAttachments() const;

                    /**
                     * 设置关联的用户数
                     * @param _attachments 关联的用户数
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
                     * 获取策略关联的产品
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType 策略关联的产品
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置策略关联的产品
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceType 策略关联的产品
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
                     * 获取当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAttached 当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsAttached() const;

                    /**
                     * 设置当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAttached 当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略
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
                     * 获取是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deactived 是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeactived() const;

                    /**
                     * 设置是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deactived 是否已下线
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
                     * 获取已下线产品列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeactivedDetail 已下线产品列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDeactivedDetail() const;

                    /**
                     * 设置已下线产品列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deactivedDetail 已下线产品列表
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
                     * 获取是否是服务相关角色策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsServiceLinkedPolicy 是否是服务相关角色策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsServiceLinkedPolicy() const;

                    /**
                     * 设置是否是服务相关角色策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isServiceLinkedPolicy 是否是服务相关角色策略
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
                     * 获取关联策略实体数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachEntityCount 关联策略实体数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAttachEntityCount() const;

                    /**
                     * 设置关联策略实体数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachEntityCount 关联策略实体数
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
                     * 获取关联权限边界实体数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachEntityBoundaryCount 关联权限边界实体数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAttachEntityBoundaryCount() const;

                    /**
                     * 设置关联权限边界实体数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachEntityBoundaryCount 关联权限边界实体数
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
                     * 获取最后编辑时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 最后编辑时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后编辑时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 最后编辑时间
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

                private:

                    /**
                     * 策略ID。
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名称。
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 策略类型。1 表示自定义策略，2 表示预设策略。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 策略描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建来源，1 通过控制台创建, 2 通过策略语法创建。
                     */
                    uint64_t m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * 关联的用户数
                     */
                    uint64_t m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * 策略关联的产品
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 当需要查询标记实体是否已经关联策略时不为null。0表示未关联策略，1表示已关联策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isAttached;
                    bool m_isAttachedHasBeenSet;

                    /**
                     * 是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deactived;
                    bool m_deactivedHasBeenSet;

                    /**
                     * 已下线产品列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_deactivedDetail;
                    bool m_deactivedDetailHasBeenSet;

                    /**
                     * 是否是服务相关角色策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isServiceLinkedPolicy;
                    bool m_isServiceLinkedPolicyHasBeenSet;

                    /**
                     * 关联策略实体数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attachEntityCount;
                    bool m_attachEntityCountHasBeenSet;

                    /**
                     * 关联权限边界实体数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attachEntityBoundaryCount;
                    bool m_attachEntityBoundaryCountHasBeenSet;

                    /**
                     * 最后编辑时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_STRATEGYINFO_H_
