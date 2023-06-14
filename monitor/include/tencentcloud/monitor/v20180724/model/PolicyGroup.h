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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PolicyGroupReceiverInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 策略组信息
                */
                class PolicyGroup : public AbstractModel
                {
                public:
                    PolicyGroup();
                    ~PolicyGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否可设为默认告警策略
                     * @return CanSetDefault 是否可设为默认告警策略
                     * 
                     */
                    bool GetCanSetDefault() const;

                    /**
                     * 设置是否可设为默认告警策略
                     * @param _canSetDefault 是否可设为默认告警策略
                     * 
                     */
                    void SetCanSetDefault(const bool& _canSetDefault);

                    /**
                     * 判断参数 CanSetDefault 是否已赋值
                     * @return CanSetDefault 是否已赋值
                     * 
                     */
                    bool CanSetDefaultHasBeenSet() const;

                    /**
                     * 获取告警策略组ID
                     * @return GroupID 告警策略组ID
                     * 
                     */
                    int64_t GetGroupID() const;

                    /**
                     * 设置告警策略组ID
                     * @param _groupID 告警策略组ID
                     * 
                     */
                    void SetGroupID(const int64_t& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取告警策略组名称
                     * @return GroupName 告警策略组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置告警策略组名称
                     * @param _groupName 告警策略组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return InsertTime 创建时间
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置创建时间
                     * @param _insertTime 创建时间
                     * 
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取是否为默认告警策略
                     * @return IsDefault 是否为默认告警策略
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否为默认告警策略
                     * @param _isDefault 是否为默认告警策略
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取告警策略启用状态
                     * @return Enable 告警策略启用状态
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置告警策略启用状态
                     * @param _enable 告警策略启用状态
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取最后修改人UIN
                     * @return LastEditUin 最后修改人UIN
                     * 
                     */
                    int64_t GetLastEditUin() const;

                    /**
                     * 设置最后修改人UIN
                     * @param _lastEditUin 最后修改人UIN
                     * 
                     */
                    void SetLastEditUin(const int64_t& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取未屏蔽的实例数
                     * @return NoShieldedInstanceCount 未屏蔽的实例数
                     * 
                     */
                    int64_t GetNoShieldedInstanceCount() const;

                    /**
                     * 设置未屏蔽的实例数
                     * @param _noShieldedInstanceCount 未屏蔽的实例数
                     * 
                     */
                    void SetNoShieldedInstanceCount(const int64_t& _noShieldedInstanceCount);

                    /**
                     * 判断参数 NoShieldedInstanceCount 是否已赋值
                     * @return NoShieldedInstanceCount 是否已赋值
                     * 
                     */
                    bool NoShieldedInstanceCountHasBeenSet() const;

                    /**
                     * 获取父策略组ID
                     * @return ParentGroupID 父策略组ID
                     * 
                     */
                    int64_t GetParentGroupID() const;

                    /**
                     * 设置父策略组ID
                     * @param _parentGroupID 父策略组ID
                     * 
                     */
                    void SetParentGroupID(const int64_t& _parentGroupID);

                    /**
                     * 判断参数 ParentGroupID 是否已赋值
                     * @return ParentGroupID 是否已赋值
                     * 
                     */
                    bool ParentGroupIDHasBeenSet() const;

                    /**
                     * 获取所属项目ID
                     * @return ProjectID 所属项目ID
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置所属项目ID
                     * @param _projectID 所属项目ID
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取告警接收对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverInfos 告警接收对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PolicyGroupReceiverInfo> GetReceiverInfos() const;

                    /**
                     * 设置告警接收对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverInfos 告警接收对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiverInfos(const std::vector<PolicyGroupReceiverInfo>& _receiverInfos);

                    /**
                     * 判断参数 ReceiverInfos 是否已赋值
                     * @return ReceiverInfos 是否已赋值
                     * 
                     */
                    bool ReceiverInfosHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取总绑定实例数
                     * @return TotalInstanceCount 总绑定实例数
                     * 
                     */
                    int64_t GetTotalInstanceCount() const;

                    /**
                     * 设置总绑定实例数
                     * @param _totalInstanceCount 总绑定实例数
                     * 
                     */
                    void SetTotalInstanceCount(const int64_t& _totalInstanceCount);

                    /**
                     * 判断参数 TotalInstanceCount 是否已赋值
                     * @return TotalInstanceCount 是否已赋值
                     * 
                     */
                    bool TotalInstanceCountHasBeenSet() const;

                    /**
                     * 获取视图
                     * @return ViewName 视图
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置视图
                     * @param _viewName 视图
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取是否为与关系规则
                     * @return IsUnionRule 是否为与关系规则
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置是否为与关系规则
                     * @param _isUnionRule 是否为与关系规则
                     * 
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     * 
                     */
                    bool IsUnionRuleHasBeenSet() const;

                private:

                    /**
                     * 是否可设为默认告警策略
                     */
                    bool m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * 告警策略组ID
                     */
                    int64_t m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * 告警策略组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 是否为默认告警策略
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 告警策略启用状态
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 最后修改人UIN
                     */
                    int64_t m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * 未屏蔽的实例数
                     */
                    int64_t m_noShieldedInstanceCount;
                    bool m_noShieldedInstanceCountHasBeenSet;

                    /**
                     * 父策略组ID
                     */
                    int64_t m_parentGroupID;
                    bool m_parentGroupIDHasBeenSet;

                    /**
                     * 所属项目ID
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 告警接收对象信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PolicyGroupReceiverInfo> m_receiverInfos;
                    bool m_receiverInfosHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 修改时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 总绑定实例数
                     */
                    int64_t m_totalInstanceCount;
                    bool m_totalInstanceCountHasBeenSet;

                    /**
                     * 视图
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 是否为与关系规则
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUP_H_
