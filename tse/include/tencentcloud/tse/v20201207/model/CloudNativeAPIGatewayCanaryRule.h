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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRuleCondition.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayBalancedService.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 灰度规则
                */
                class CloudNativeAPIGatewayCanaryRule : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayCanaryRule();
                    ~CloudNativeAPIGatewayCanaryRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
                     * @return Priority 优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
                     * @param _priority 优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取是否启用规则
                     * @return Enabled 是否启用规则
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用规则
                     * @param _enabled 是否启用规则
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取参数匹配条件
                     * @return ConditionList 参数匹配条件
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRuleCondition> GetConditionList() const;

                    /**
                     * 设置参数匹配条件
                     * @param _conditionList 参数匹配条件
                     * 
                     */
                    void SetConditionList(const std::vector<CloudNativeAPIGatewayCanaryRuleCondition>& _conditionList);

                    /**
                     * 判断参数 ConditionList 是否已赋值
                     * @return ConditionList 是否已赋值
                     * 
                     */
                    bool ConditionListHasBeenSet() const;

                    /**
                     * 获取服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BalancedServiceList 服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayBalancedService> GetBalancedServiceList() const;

                    /**
                     * 设置服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _balancedServiceList 服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBalancedServiceList(const std::vector<CloudNativeAPIGatewayBalancedService>& _balancedServiceList);

                    /**
                     * 判断参数 BalancedServiceList 是否已赋值
                     * @return BalancedServiceList 是否已赋值
                     * 
                     */
                    bool BalancedServiceListHasBeenSet() const;

                    /**
                     * 获取归属服务 ID
                     * @return ServiceId 归属服务 ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置归属服务 ID
                     * @param _serviceId 归属服务 ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取归属服务名称
                     * @return ServiceName 归属服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置归属服务名称
                     * @param _serviceName 归属服务名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取灰度规则类别
Standard｜Lane
                     * @return RuleType 灰度规则类别
Standard｜Lane
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置灰度规则类别
Standard｜Lane
                     * @param _ruleType 灰度规则类别
Standard｜Lane
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取全链路灰度策略多个条件之间的匹配方式，与AND，或OR
                     * @return MatchType 全链路灰度策略多个条件之间的匹配方式，与AND，或OR
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置全链路灰度策略多个条件之间的匹配方式，与AND，或OR
                     * @param _matchType 全链路灰度策略多个条件之间的匹配方式，与AND，或OR
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取泳道组ID
                     * @return GroupId 泳道组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置泳道组ID
                     * @param _groupId 泳道组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取泳道组名称
                     * @return GroupName 泳道组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置泳道组名称
                     * @param _groupName 泳道组名称
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
                     * 获取泳道ID
                     * @return LaneId 泳道ID
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置泳道ID
                     * @param _laneId 泳道ID
                     * 
                     */
                    void SetLaneId(const std::string& _laneId);

                    /**
                     * 判断参数 LaneId 是否已赋值
                     * @return LaneId 是否已赋值
                     * 
                     */
                    bool LaneIdHasBeenSet() const;

                    /**
                     * 获取泳道名称
                     * @return LaneName 泳道名称
                     * 
                     */
                    std::string GetLaneName() const;

                    /**
                     * 设置泳道名称
                     * @param _laneName 泳道名称
                     * 
                     */
                    void SetLaneName(const std::string& _laneName);

                    /**
                     * 判断参数 LaneName 是否已赋值
                     * @return LaneName 是否已赋值
                     * 
                     */
                    bool LaneNameHasBeenSet() const;

                    /**
                     * 获取泳道匹配规则：严格STRICT｜宽松PERMISSIVE
                     * @return MatchMode 泳道匹配规则：严格STRICT｜宽松PERMISSIVE
                     * 
                     */
                    std::string GetMatchMode() const;

                    /**
                     * 设置泳道匹配规则：严格STRICT｜宽松PERMISSIVE
                     * @param _matchMode 泳道匹配规则：严格STRICT｜宽松PERMISSIVE
                     * 
                     */
                    void SetMatchMode(const std::string& _matchMode);

                    /**
                     * 判断参数 MatchMode 是否已赋值
                     * @return MatchMode 是否已赋值
                     * 
                     */
                    bool MatchModeHasBeenSet() const;

                    /**
                     * 获取泳道标签
                     * @return LaneTag 泳道标签
                     * 
                     */
                    std::string GetLaneTag() const;

                    /**
                     * 设置泳道标签
                     * @param _laneTag 泳道标签
                     * 
                     */
                    void SetLaneTag(const std::string& _laneTag);

                    /**
                     * 判断参数 LaneTag 是否已赋值
                     * @return LaneTag 是否已赋值
                     * 
                     */
                    bool LaneTagHasBeenSet() const;

                private:

                    /**
                     * 优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 是否启用规则
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 参数匹配条件
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRuleCondition> m_conditionList;
                    bool m_conditionListHasBeenSet;

                    /**
                     * 服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudNativeAPIGatewayBalancedService> m_balancedServiceList;
                    bool m_balancedServiceListHasBeenSet;

                    /**
                     * 归属服务 ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 归属服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 灰度规则类别
Standard｜Lane
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 全链路灰度策略多个条件之间的匹配方式，与AND，或OR
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * 泳道组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 泳道组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 泳道ID
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                    /**
                     * 泳道名称
                     */
                    std::string m_laneName;
                    bool m_laneNameHasBeenSet;

                    /**
                     * 泳道匹配规则：严格STRICT｜宽松PERMISSIVE
                     */
                    std::string m_matchMode;
                    bool m_matchModeHasBeenSet;

                    /**
                     * 泳道标签
                     */
                    std::string m_laneTag;
                    bool m_laneTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULE_H_
