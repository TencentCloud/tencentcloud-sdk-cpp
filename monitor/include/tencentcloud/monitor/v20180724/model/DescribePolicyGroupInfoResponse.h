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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFORESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCondition.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoEventCondition.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoReceiverInfo.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoCallback.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoConditionTpl.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyGroupInfo返回参数结构体
                */
                class DescribePolicyGroupInfoResponse : public AbstractModel
                {
                public:
                    DescribePolicyGroupInfoResponse();
                    ~DescribePolicyGroupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略组名称
                     * @return GroupName 策略组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取策略组所属的项目id
                     * @return ProjectId 策略组所属的项目id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取是否为默认策略，0表示非默认策略，1表示默认策略
                     * @return IsDefault 是否为默认策略，0表示非默认策略，1表示默认策略
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取策略类型
                     * @return ViewName 策略类型
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取策略说明
                     * @return Remark 策略说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取策略类型名称
                     * @return ShowName 策略类型名称
                     * 
                     */
                    std::string GetShowName() const;

                    /**
                     * 判断参数 ShowName 是否已赋值
                     * @return ShowName 是否已赋值
                     * 
                     */
                    bool ShowNameHasBeenSet() const;

                    /**
                     * 获取最近编辑的用户uin
                     * @return LastEditUin 最近编辑的用户uin
                     * 
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取最近编辑时间
                     * @return UpdateTime 最近编辑时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取该策略支持的地域
                     * @return Region 该策略支持的地域
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取策略类型的维度列表
                     * @return DimensionGroup 策略类型的维度列表
                     * 
                     */
                    std::vector<std::string> GetDimensionGroup() const;

                    /**
                     * 判断参数 DimensionGroup 是否已赋值
                     * @return DimensionGroup 是否已赋值
                     * 
                     */
                    bool DimensionGroupHasBeenSet() const;

                    /**
                     * 获取阈值规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionsConfig 阈值规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribePolicyGroupInfoCondition> GetConditionsConfig() const;

                    /**
                     * 判断参数 ConditionsConfig 是否已赋值
                     * @return ConditionsConfig 是否已赋值
                     * 
                     */
                    bool ConditionsConfigHasBeenSet() const;

                    /**
                     * 获取产品事件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventConfig 产品事件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribePolicyGroupInfoEventCondition> GetEventConfig() const;

                    /**
                     * 判断参数 EventConfig 是否已赋值
                     * @return EventConfig 是否已赋值
                     * 
                     */
                    bool EventConfigHasBeenSet() const;

                    /**
                     * 获取用户接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiverInfos 用户接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribePolicyGroupInfoReceiverInfo> GetReceiverInfos() const;

                    /**
                     * 判断参数 ReceiverInfos 是否已赋值
                     * @return ReceiverInfos 是否已赋值
                     * 
                     */
                    bool ReceiverInfosHasBeenSet() const;

                    /**
                     * 获取用户回调信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Callback 用户回调信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyGroupInfoCallback GetCallback() const;

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取模板策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionsTemp 模板策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyGroupInfoConditionTpl GetConditionsTemp() const;

                    /**
                     * 判断参数 ConditionsTemp 是否已赋值
                     * @return ConditionsTemp 是否已赋值
                     * 
                     */
                    bool ConditionsTempHasBeenSet() const;

                    /**
                     * 获取是否可以设置成默认策略
                     * @return CanSetDefault 是否可以设置成默认策略
                     * 
                     */
                    bool GetCanSetDefault() const;

                    /**
                     * 判断参数 CanSetDefault 是否已赋值
                     * @return CanSetDefault 是否已赋值
                     * 
                     */
                    bool CanSetDefaultHasBeenSet() const;

                    /**
                     * 获取是否且规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUnionRule 是否且规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     * 
                     */
                    bool IsUnionRuleHasBeenSet() const;

                private:

                    /**
                     * 策略组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 策略组所属的项目id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否为默认策略，0表示非默认策略，1表示默认策略
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 策略说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 策略类型名称
                     */
                    std::string m_showName;
                    bool m_showNameHasBeenSet;

                    /**
                     * 最近编辑的用户uin
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * 最近编辑时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 该策略支持的地域
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 策略类型的维度列表
                     */
                    std::vector<std::string> m_dimensionGroup;
                    bool m_dimensionGroupHasBeenSet;

                    /**
                     * 阈值规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribePolicyGroupInfoCondition> m_conditionsConfig;
                    bool m_conditionsConfigHasBeenSet;

                    /**
                     * 产品事件规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribePolicyGroupInfoEventCondition> m_eventConfig;
                    bool m_eventConfigHasBeenSet;

                    /**
                     * 用户接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribePolicyGroupInfoReceiverInfo> m_receiverInfos;
                    bool m_receiverInfosHasBeenSet;

                    /**
                     * 用户回调信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyGroupInfoCallback m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * 模板策略组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyGroupInfoConditionTpl m_conditionsTemp;
                    bool m_conditionsTempHasBeenSet;

                    /**
                     * 是否可以设置成默认策略
                     */
                    bool m_canSetDefault;
                    bool m_canSetDefaultHasBeenSet;

                    /**
                     * 是否且规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFORESPONSE_H_
