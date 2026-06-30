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
                     * 获取<p>是否可设为默认告警策略</p>
                     * @return CanSetDefault <p>是否可设为默认告警策略</p>
                     * 
                     */
                    bool GetCanSetDefault() const;

                    /**
                     * 设置<p>是否可设为默认告警策略</p>
                     * @param _canSetDefault <p>是否可设为默认告警策略</p>
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
                     * 获取<p>告警策略组ID</p>
                     * @return GroupID <p>告警策略组ID</p>
                     * 
                     */
                    int64_t GetGroupID() const;

                    /**
                     * 设置<p>告警策略组ID</p>
                     * @param _groupID <p>告警策略组ID</p>
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
                     * 获取<p>告警策略组名称</p>
                     * @return GroupName <p>告警策略组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>告警策略组名称</p>
                     * @param _groupName <p>告警策略组名称</p>
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
                     * 获取<p>创建时间</p>
                     * @return InsertTime <p>创建时间</p>
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _insertTime <p>创建时间</p>
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
                     * 获取<p>是否为默认告警策略</p>
                     * @return IsDefault <p>是否为默认告警策略</p>
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置<p>是否为默认告警策略</p>
                     * @param _isDefault <p>是否为默认告警策略</p>
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
                     * 获取<p>告警策略启用状态</p>
                     * @return Enable <p>告警策略启用状态</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>告警策略启用状态</p>
                     * @param _enable <p>告警策略启用状态</p>
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
                     * 获取<p>最后修改人UIN</p>
                     * @return LastEditUin <p>最后修改人UIN</p>
                     * 
                     */
                    int64_t GetLastEditUin() const;

                    /**
                     * 设置<p>最后修改人UIN</p>
                     * @param _lastEditUin <p>最后修改人UIN</p>
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
                     * 获取<p>未屏蔽的实例数</p>
                     * @return NoShieldedInstanceCount <p>未屏蔽的实例数</p>
                     * 
                     */
                    int64_t GetNoShieldedInstanceCount() const;

                    /**
                     * 设置<p>未屏蔽的实例数</p>
                     * @param _noShieldedInstanceCount <p>未屏蔽的实例数</p>
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
                     * 获取<p>父策略组ID</p>
                     * @return ParentGroupID <p>父策略组ID</p>
                     * 
                     */
                    int64_t GetParentGroupID() const;

                    /**
                     * 设置<p>父策略组ID</p>
                     * @param _parentGroupID <p>父策略组ID</p>
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
                     * 获取<p>所属项目ID</p>
                     * @return ProjectID <p>所属项目ID</p>
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置<p>所属项目ID</p>
                     * @param _projectID <p>所属项目ID</p>
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
                     * 获取<p>告警接收对象信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverInfos <p>告警接收对象信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PolicyGroupReceiverInfo> GetReceiverInfos() const;

                    /**
                     * 设置<p>告警接收对象信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiverInfos <p>告警接收对象信息</p>
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
                     * 获取<p>备注信息</p>
                     * @return Remark <p>备注信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息</p>
                     * @param _remark <p>备注信息</p>
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
                     * 获取<p>修改时间</p>
                     * @return UpdateTime <p>修改时间</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _updateTime <p>修改时间</p>
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
                     * 获取<p>总绑定实例数</p>
                     * @return TotalInstanceCount <p>总绑定实例数</p>
                     * 
                     */
                    int64_t GetTotalInstanceCount() const;

                    /**
                     * 设置<p>总绑定实例数</p>
                     * @param _totalInstanceCount <p>总绑定实例数</p>
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
                     * 获取<p>视图</p>
                     * @return ViewName <p>视图</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>视图</p>
                     * @param _viewName <p>视图</p>
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
                     * 获取<p>是否为与关系规则</p>
                     * @return IsUnionRule <p>是否为与关系规则</p>
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置<p>是否为与关系规则</p>
                     * @param _isUnionRule <p>是否为与关系规则</p>
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
                     * <p>是否可设为默认告警策略</p>
                     */
                    bool m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * <p>告警策略组ID</p>
                     */
                    int64_t m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * <p>告警策略组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * <p>是否为默认告警策略</p>
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>告警策略启用状态</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>最后修改人UIN</p>
                     */
                    int64_t m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * <p>未屏蔽的实例数</p>
                     */
                    int64_t m_noShieldedInstanceCount;
                    bool m_noShieldedInstanceCountHasBeenSet;

                    /**
                     * <p>父策略组ID</p>
                     */
                    int64_t m_parentGroupID;
                    bool m_parentGroupIDHasBeenSet;

                    /**
                     * <p>所属项目ID</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>告警接收对象信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PolicyGroupReceiverInfo> m_receiverInfos;
                    bool m_receiverInfosHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>总绑定实例数</p>
                     */
                    int64_t m_totalInstanceCount;
                    bool m_totalInstanceCountHasBeenSet;

                    /**
                     * <p>视图</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>是否为与关系规则</p>
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_POLICYGROUP_H_
