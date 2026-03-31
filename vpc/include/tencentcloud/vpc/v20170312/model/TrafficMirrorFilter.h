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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORFILTER_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 流量镜像五元组过滤规则对象
                */
                class TrafficMirrorFilter : public AbstractModel
                {
                public:
                    TrafficMirrorFilter();
                    ~TrafficMirrorFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤规则的源网段
                     * @return SrcNet 过滤规则的源网段
                     * 
                     */
                    std::string GetSrcNet() const;

                    /**
                     * 设置过滤规则的源网段
                     * @param _srcNet 过滤规则的源网段
                     * 
                     */
                    void SetSrcNet(const std::string& _srcNet);

                    /**
                     * 判断参数 SrcNet 是否已赋值
                     * @return SrcNet 是否已赋值
                     * 
                     */
                    bool SrcNetHasBeenSet() const;

                    /**
                     * 获取过滤规则的目的网段
                     * @return DstNet 过滤规则的目的网段
                     * 
                     */
                    std::string GetDstNet() const;

                    /**
                     * 设置过滤规则的目的网段
                     * @param _dstNet 过滤规则的目的网段
                     * 
                     */
                    void SetDstNet(const std::string& _dstNet);

                    /**
                     * 判断参数 DstNet 是否已赋值
                     * @return DstNet 是否已赋值
                     * 
                     */
                    bool DstNetHasBeenSet() const;

                    /**
                     * 获取过滤规则的协议
                     * @return Protocol 过滤规则的协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置过滤规则的协议
                     * @param _protocol 过滤规则的协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取过滤规则的源端口，默认值1-65535
                     * @return SrcPort 过滤规则的源端口，默认值1-65535
                     * 
                     */
                    std::string GetSrcPort() const;

                    /**
                     * 设置过滤规则的源端口，默认值1-65535
                     * @param _srcPort 过滤规则的源端口，默认值1-65535
                     * 
                     */
                    void SetSrcPort(const std::string& _srcPort);

                    /**
                     * 判断参数 SrcPort 是否已赋值
                     * @return SrcPort 是否已赋值
                     * 
                     */
                    bool SrcPortHasBeenSet() const;

                    /**
                     * 获取过滤规则的目的端口，默认值1-65535
                     * @return DstPort 过滤规则的目的端口，默认值1-65535
                     * 
                     */
                    std::string GetDstPort() const;

                    /**
                     * 设置过滤规则的目的端口，默认值1-65535
                     * @param _dstPort 过滤规则的目的端口，默认值1-65535
                     * 
                     */
                    void SetDstPort(const std::string& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取流量镜像过滤规则唯一ID。
                     * @return TrafficMirrorFilterRuleId 流量镜像过滤规则唯一ID。
                     * 
                     */
                    std::string GetTrafficMirrorFilterRuleId() const;

                    /**
                     * 设置流量镜像过滤规则唯一ID。
                     * @param _trafficMirrorFilterRuleId 流量镜像过滤规则唯一ID。
                     * 
                     */
                    void SetTrafficMirrorFilterRuleId(const std::string& _trafficMirrorFilterRuleId);

                    /**
                     * 判断参数 TrafficMirrorFilterRuleId 是否已赋值
                     * @return TrafficMirrorFilterRuleId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorFilterRuleIdHasBeenSet() const;

                    /**
                     * 获取流量镜像过滤规则优先级。
                     * @return Priority 流量镜像过滤规则优先级。
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置流量镜像过滤规则优先级。
                     * @param _priority 流量镜像过滤规则优先级。
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取流量镜像过滤规则策略，支持类型："ACCEPT", "DROP"。
                     * @return Action 流量镜像过滤规则策略，支持类型："ACCEPT", "DROP"。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置流量镜像过滤规则策略，支持类型："ACCEPT", "DROP"。
                     * @param _action 流量镜像过滤规则策略，支持类型："ACCEPT", "DROP"。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取流量镜像过滤规则描述。
                     * @return Description 流量镜像过滤规则描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置流量镜像过滤规则描述。
                     * @param _description 流量镜像过滤规则描述。
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
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * 过滤规则的源网段
                     */
                    std::string m_srcNet;
                    bool m_srcNetHasBeenSet;

                    /**
                     * 过滤规则的目的网段
                     */
                    std::string m_dstNet;
                    bool m_dstNetHasBeenSet;

                    /**
                     * 过滤规则的协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 过滤规则的源端口，默认值1-65535
                     */
                    std::string m_srcPort;
                    bool m_srcPortHasBeenSet;

                    /**
                     * 过滤规则的目的端口，默认值1-65535
                     */
                    std::string m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 流量镜像过滤规则唯一ID。
                     */
                    std::string m_trafficMirrorFilterRuleId;
                    bool m_trafficMirrorFilterRuleIdHasBeenSet;

                    /**
                     * 流量镜像过滤规则优先级。
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 流量镜像过滤规则策略，支持类型："ACCEPT", "DROP"。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 流量镜像过滤规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORFILTER_H_
