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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYEVENTDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYEVENTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageRegistryInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageDenyEventDetail返回参数结构体
                */
                class DescribeImageDenyEventDetailResponse : public AbstractModel
                {
                public:
                    DescribeImageDenyEventDetailResponse();
                    ~DescribeImageDenyEventDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件ID
                     * @return EventID 事件ID
                     * 
                     */
                    int64_t GetEventID() const;

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取事件类型 EVENT_RISK:风险事件类型，EVENT_PRIVILEGE:特权
                     * @return EventType 事件类型 EVENT_RISK:风险事件类型，EVENT_PRIVILEGE:特权
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则RuleID
                     * @return RuleID 规则RuleID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取规则类型
                     * @return RuleType 规则类型
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则启用状态 0:开启，1:关闭
                     * @return RuleStatus 规则启用状态 0:开启，1:关闭
                     * 
                     */
                    int64_t GetRuleStatus() const;

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取规则策略状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * @return RuleEffectStatus 规则策略状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * 
                     */
                    std::string GetRuleEffectStatus() const;

                    /**
                     * 判断参数 RuleEffectStatus 是否已赋值
                     * @return RuleEffectStatus 是否已赋值
                     * 
                     */
                    bool RuleEffectStatusHasBeenSet() const;

                    /**
                     * 获取规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleInfo 规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRuleInfo() const;

                    /**
                     * 判断参数 RuleInfo 是否已赋值
                     * @return RuleInfo 是否已赋值
                     * 
                     */
                    bool RuleInfoHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return RuleDescription 规则描述
                     * 
                     */
                    std::string GetRuleDescription() const;

                    /**
                     * 判断参数 RuleDescription 是否已赋值
                     * @return RuleDescription 是否已赋值
                     * 
                     */
                    bool RuleDescriptionHasBeenSet() const;

                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return NodeIP 内网IP
                     * 
                     */
                    std::string GetNodeIP() const;

                    /**
                     * 判断参数 NodeIP 是否已赋值
                     * @return NodeIP 是否已赋值
                     * 
                     */
                    bool NodeIPHasBeenSet() const;

                    /**
                     * 获取外网IP
                     * @return PublicIP 外网IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取主机Quuid
                     * @return QUUID 主机Quuid
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取首次生成时间
                     * @return FoundTime 首次生成时间
                     * 
                     */
                    std::string GetFoundTime() const;

                    /**
                     * 判断参数 FoundTime 是否已赋值
                     * @return FoundTime 是否已赋值
                     * 
                     */
                    bool FoundTimeHasBeenSet() const;

                    /**
                     * 获取最近生成时间
                     * @return LatestFoundTime 最近生成时间
                     * 
                     */
                    std::string GetLatestFoundTime() const;

                    /**
                     * 判断参数 LatestFoundTime 是否已赋值
                     * @return LatestFoundTime 是否已赋值
                     * 
                     */
                    bool LatestFoundTimeHasBeenSet() const;

                    /**
                     * 获取事件数量
                     * @return EventCount 事件数量
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取执行动作:
BEHAVIOR_ALERT:告警，
BEHAVIOR_HOLDUP_SUCCESSED:拦截
                     * @return DealBehavior 执行动作:
BEHAVIOR_ALERT:告警，
BEHAVIOR_HOLDUP_SUCCESSED:拦截
                     * 
                     */
                    std::string GetDealBehavior() const;

                    /**
                     * 判断参数 DealBehavior 是否已赋值
                     * @return DealBehavior 是否已赋值
                     * 
                     */
                    bool DealBehaviorHasBeenSet() const;

                    /**
                     * 获取Pod名称
                     * @return PodName Pod名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取规则开始拦截时间
                     * @return RuleEffectTime 规则开始拦截时间
                     * 
                     */
                    std::string GetRuleEffectTime() const;

                    /**
                     * 判断参数 RuleEffectTime 是否已赋值
                     * @return RuleEffectTime 是否已赋值
                     * 
                     */
                    bool RuleEffectTimeHasBeenSet() const;

                    /**
                     * 获取事件描述
                     * @return Description 事件描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取镜像启动参数
                     * @return StartParam 镜像启动参数
                     * 
                     */
                    std::string GetStartParam() const;

                    /**
                     * 判断参数 StartParam 是否已赋值
                     * @return StartParam 是否已赋值
                     * 
                     */
                    bool StartParamHasBeenSet() const;

                    /**
                     * 获取解决方案
                     * @return Solution 解决方案
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取pod ip
                     * @return PodIP pod ip
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取 pod状态
                     * @return PodStatus  pod状态
                     * 
                     */
                    std::string GetPodStatus() const;

                    /**
                     * 判断参数 PodStatus 是否已赋值
                     * @return PodStatus 是否已赋值
                     * 
                     */
                    bool PodStatusHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return ClusterID 集群id
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return NodeType 节点类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点id
                     * @return NodeID 节点id
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取节点唯一id
                     * @return NodeUniqueID 节点唯一id
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取节点子网id
                     * @return NodeSubNetID 节点子网id
                     * 
                     */
                    std::string GetNodeSubNetID() const;

                    /**
                     * 判断参数 NodeSubNetID 是否已赋值
                     * @return NodeSubNetID 是否已赋值
                     * 
                     */
                    bool NodeSubNetIDHasBeenSet() const;

                    /**
                     * 获取节点子网名称
                     * @return NodeSubNetName 节点子网名称
                     * 
                     */
                    std::string GetNodeSubNetName() const;

                    /**
                     * 判断参数 NodeSubNetName 是否已赋值
                     * @return NodeSubNetName 是否已赋值
                     * 
                     */
                    bool NodeSubNetNameHasBeenSet() const;

                    /**
                     * 获取节点子网cidr
                     * @return NodeSubNetCIDR 节点子网cidr
                     * 
                     */
                    std::string GetNodeSubNetCIDR() const;

                    /**
                     * 判断参数 NodeSubNetCIDR 是否已赋值
                     * @return NodeSubNetCIDR 是否已赋值
                     * 
                     */
                    bool NodeSubNetCIDRHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取镜像仓库信息
                     * @return ImageRegistryInfo 镜像仓库信息
                     * 
                     */
                    ImageRegistryInfo GetImageRegistryInfo() const;

                    /**
                     * 判断参数 ImageRegistryInfo 是否已赋值
                     * @return ImageRegistryInfo 是否已赋值
                     * 
                     */
                    bool ImageRegistryInfoHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    int64_t m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * 事件类型 EVENT_RISK:风险事件类型，EVENT_PRIVILEGE:特权
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则RuleID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 规则类型
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则启用状态 0:开启，1:关闭
                     */
                    int64_t m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 规则策略状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     */
                    std::string m_ruleEffectStatus;
                    bool m_ruleEffectStatusHasBeenSet;

                    /**
                     * 规则内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ruleInfo;
                    bool m_ruleInfoHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_ruleDescription;
                    bool m_ruleDescriptionHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_nodeIP;
                    bool m_nodeIPHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * 首次生成时间
                     */
                    std::string m_foundTime;
                    bool m_foundTimeHasBeenSet;

                    /**
                     * 最近生成时间
                     */
                    std::string m_latestFoundTime;
                    bool m_latestFoundTimeHasBeenSet;

                    /**
                     * 事件数量
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 执行动作:
BEHAVIOR_ALERT:告警，
BEHAVIOR_HOLDUP_SUCCESSED:拦截
                     */
                    std::string m_dealBehavior;
                    bool m_dealBehaviorHasBeenSet;

                    /**
                     * Pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 规则开始拦截时间
                     */
                    std::string m_ruleEffectTime;
                    bool m_ruleEffectTimeHasBeenSet;

                    /**
                     * 事件描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 镜像启动参数
                     */
                    std::string m_startParam;
                    bool m_startParamHasBeenSet;

                    /**
                     * 解决方案
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * pod ip
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     *  pod状态
                     */
                    std::string m_podStatus;
                    bool m_podStatusHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点id
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * 节点唯一id
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * 节点子网id
                     */
                    std::string m_nodeSubNetID;
                    bool m_nodeSubNetIDHasBeenSet;

                    /**
                     * 节点子网名称
                     */
                    std::string m_nodeSubNetName;
                    bool m_nodeSubNetNameHasBeenSet;

                    /**
                     * 节点子网cidr
                     */
                    std::string m_nodeSubNetCIDR;
                    bool m_nodeSubNetCIDRHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 镜像仓库信息
                     */
                    ImageRegistryInfo m_imageRegistryInfo;
                    bool m_imageRegistryInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYEVENTDETAILRESPONSE_H_
