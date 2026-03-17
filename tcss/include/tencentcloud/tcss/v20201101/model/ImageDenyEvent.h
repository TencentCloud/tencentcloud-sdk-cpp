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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYEVENT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 镜像拦截事件
                */
                class ImageDenyEvent : public AbstractModel
                {
                public:
                    ImageDenyEvent();
                    ~ImageDenyEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件类型 EVENT_RISK:风险事件类型，EVENT_PRIVILEGE:特权
                     * @return EventType 事件类型 EVENT_RISK:风险事件类型，EVENT_PRIVILEGE:特权
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型 EVENT_RISK:风险事件类型，EVENT_PRIVILEGE:特权
                     * @param _eventType 事件类型 EVENT_RISK:风险事件类型，EVENT_PRIVILEGE:特权
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

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
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

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
                     * 设置规则RuleID
                     * @param _ruleID 规则RuleID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

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
                     * 设置规则类型
                     * @param _ruleType 规则类型
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
                     * 获取规则启用状态 0:开启，1:关闭
                     * @return RuleStatus 规则启用状态 0:开启，1:关闭
                     * 
                     */
                    int64_t GetRuleStatus() const;

                    /**
                     * 设置规则启用状态 0:开启，1:关闭
                     * @param _ruleStatus 规则启用状态 0:开启，1:关闭
                     * 
                     */
                    void SetRuleStatus(const int64_t& _ruleStatus);

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
                     * 设置规则策略状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * @param _ruleEffectStatus 规则策略状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * 
                     */
                    void SetRuleEffectStatus(const std::string& _ruleEffectStatus);

                    /**
                     * 判断参数 RuleEffectStatus 是否已赋值
                     * @return RuleEffectStatus 是否已赋值
                     * 
                     */
                    bool RuleEffectStatusHasBeenSet() const;

                    /**
                     * 获取规则内容
                     * @return RuleInfo 规则内容
                     * 
                     */
                    std::vector<std::string> GetRuleInfo() const;

                    /**
                     * 设置规则内容
                     * @param _ruleInfo 规则内容
                     * 
                     */
                    void SetRuleInfo(const std::vector<std::string>& _ruleInfo);

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
                     * 设置规则描述
                     * @param _ruleDescription 规则描述
                     * 
                     */
                    void SetRuleDescription(const std::string& _ruleDescription);

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
                     * 设置镜像ID
                     * @param _imageID 镜像ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

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
                     * 设置镜像名称
                     * @param _imageName 镜像名称
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

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
                     * 设置节点名称
                     * @param _nodeName 节点名称
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

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
                     * 设置内网IP
                     * @param _nodeIP 内网IP
                     * 
                     */
                    void SetNodeIP(const std::string& _nodeIP);

                    /**
                     * 判断参数 NodeIP 是否已赋值
                     * @return NodeIP 是否已赋值
                     * 
                     */
                    bool NodeIPHasBeenSet() const;

                    /**
                     * 获取主机Quuid
                     * @return QUUID 主机Quuid
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置主机Quuid
                     * @param _qUUID 主机Quuid
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

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
                     * 设置首次生成时间
                     * @param _foundTime 首次生成时间
                     * 
                     */
                    void SetFoundTime(const std::string& _foundTime);

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
                     * 设置最近生成时间
                     * @param _latestFoundTime 最近生成时间
                     * 
                     */
                    void SetLatestFoundTime(const std::string& _latestFoundTime);

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
                     * 设置事件数量
                     * @param _eventCount 事件数量
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

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
                     * 设置执行动作:
BEHAVIOR_ALERT:告警，
BEHAVIOR_HOLDUP_SUCCESSED:拦截
                     * @param _dealBehavior 执行动作:
BEHAVIOR_ALERT:告警，
BEHAVIOR_HOLDUP_SUCCESSED:拦截
                     * 
                     */
                    void SetDealBehavior(const std::string& _dealBehavior);

                    /**
                     * 判断参数 DealBehavior 是否已赋值
                     * @return DealBehavior 是否已赋值
                     * 
                     */
                    bool DealBehaviorHasBeenSet() const;

                    /**
                     * 获取事件ID
                     * @return EventID 事件ID
                     * 
                     */
                    int64_t GetEventID() const;

                    /**
                     * 设置事件ID
                     * @param _eventID 事件ID
                     * 
                     */
                    void SetEventID(const int64_t& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取外网IP
                     * @return PublicIP 外网IP
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置外网IP
                     * @param _publicIP 外网IP
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return NodeID 节点ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置节点ID
                     * @param _nodeID 节点ID
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

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
                     * 设置节点类型
                     * @param _nodeType 节点类型
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取超级节点唯一id
                     * @return NodeUniqueID 超级节点唯一id
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置超级节点唯一id
                     * @param _nodeUniqueID 超级节点唯一id
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取pod ip
                     * @return PodIP pod ip
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置pod ip
                     * @param _podIP pod ip
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取pod name
                     * @return PodName pod name
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod name
                     * @param _podName pod name
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

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
                     * 设置镜像仓库信息
                     * @param _imageRegistryInfo 镜像仓库信息
                     * 
                     */
                    void SetImageRegistryInfo(const ImageRegistryInfo& _imageRegistryInfo);

                    /**
                     * 判断参数 ImageRegistryInfo 是否已赋值
                     * @return ImageRegistryInfo 是否已赋值
                     * 
                     */
                    bool ImageRegistryInfoHasBeenSet() const;

                private:

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
                     * 事件ID
                     */
                    int64_t m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 超级节点唯一id
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * pod ip
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYEVENT_H_
