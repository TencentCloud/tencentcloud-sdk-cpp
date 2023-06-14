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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLQUINTUPLEENTRY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLQUINTUPLEENTRY_H_

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
                * 网络ACL五元组Entry
                */
                class NetworkAclQuintupleEntry : public AbstractModel
                {
                public:
                    NetworkAclQuintupleEntry();
                    ~NetworkAclQuintupleEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议, 取值: TCP,UDP, ICMP, ALL。
                     * @return Protocol 协议, 取值: TCP,UDP, ICMP, ALL。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议, 取值: TCP,UDP, ICMP, ALL。
                     * @param _protocol 协议, 取值: TCP,UDP, ICMP, ALL。
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
                     * 获取描述。
                     * @return Description 描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param _description 描述。
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
                     * 获取源端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * @return SourcePort 源端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * 
                     */
                    std::string GetSourcePort() const;

                    /**
                     * 设置源端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * @param _sourcePort 源端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * 
                     */
                    void SetSourcePort(const std::string& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     * 
                     */
                    bool SourcePortHasBeenSet() const;

                    /**
                     * 获取源CIDR。
                     * @return SourceCidr 源CIDR。
                     * 
                     */
                    std::string GetSourceCidr() const;

                    /**
                     * 设置源CIDR。
                     * @param _sourceCidr 源CIDR。
                     * 
                     */
                    void SetSourceCidr(const std::string& _sourceCidr);

                    /**
                     * 判断参数 SourceCidr 是否已赋值
                     * @return SourceCidr 是否已赋值
                     * 
                     */
                    bool SourceCidrHasBeenSet() const;

                    /**
                     * 获取目的端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * @return DestinationPort 目的端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * 
                     */
                    std::string GetDestinationPort() const;

                    /**
                     * 设置目的端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * @param _destinationPort 目的端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     * 
                     */
                    void SetDestinationPort(const std::string& _destinationPort);

                    /**
                     * 判断参数 DestinationPort 是否已赋值
                     * @return DestinationPort 是否已赋值
                     * 
                     */
                    bool DestinationPortHasBeenSet() const;

                    /**
                     * 获取目的CIDR。
                     * @return DestinationCidr 目的CIDR。
                     * 
                     */
                    std::string GetDestinationCidr() const;

                    /**
                     * 设置目的CIDR。
                     * @param _destinationCidr 目的CIDR。
                     * 
                     */
                    void SetDestinationCidr(const std::string& _destinationCidr);

                    /**
                     * 判断参数 DestinationCidr 是否已赋值
                     * @return DestinationCidr 是否已赋值
                     * 
                     */
                    bool DestinationCidrHasBeenSet() const;

                    /**
                     * 获取动作，ACCEPT 或 DROP。
                     * @return Action 动作，ACCEPT 或 DROP。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作，ACCEPT 或 DROP。
                     * @param _action 动作，ACCEPT 或 DROP。
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
                     * 获取网络ACL条目唯一ID。
                     * @return NetworkAclQuintupleEntryId 网络ACL条目唯一ID。
                     * 
                     */
                    std::string GetNetworkAclQuintupleEntryId() const;

                    /**
                     * 设置网络ACL条目唯一ID。
                     * @param _networkAclQuintupleEntryId 网络ACL条目唯一ID。
                     * 
                     */
                    void SetNetworkAclQuintupleEntryId(const std::string& _networkAclQuintupleEntryId);

                    /**
                     * 判断参数 NetworkAclQuintupleEntryId 是否已赋值
                     * @return NetworkAclQuintupleEntryId 是否已赋值
                     * 
                     */
                    bool NetworkAclQuintupleEntryIdHasBeenSet() const;

                    /**
                     * 获取优先级，从1开始。
                     * @return Priority 优先级，从1开始。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级，从1开始。
                     * @param _priority 优先级，从1开始。
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
                     * 获取创建时间，用于DescribeNetworkAclQuintupleEntries的出参。
                     * @return CreateTime 创建时间，用于DescribeNetworkAclQuintupleEntries的出参。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，用于DescribeNetworkAclQuintupleEntries的出参。
                     * @param _createTime 创建时间，用于DescribeNetworkAclQuintupleEntries的出参。
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
                     * 获取方向，INGRESS或EGRESS，用于DescribeNetworkAclQuintupleEntries的出参。
                     * @return NetworkAclDirection 方向，INGRESS或EGRESS，用于DescribeNetworkAclQuintupleEntries的出参。
                     * 
                     */
                    std::string GetNetworkAclDirection() const;

                    /**
                     * 设置方向，INGRESS或EGRESS，用于DescribeNetworkAclQuintupleEntries的出参。
                     * @param _networkAclDirection 方向，INGRESS或EGRESS，用于DescribeNetworkAclQuintupleEntries的出参。
                     * 
                     */
                    void SetNetworkAclDirection(const std::string& _networkAclDirection);

                    /**
                     * 判断参数 NetworkAclDirection 是否已赋值
                     * @return NetworkAclDirection 是否已赋值
                     * 
                     */
                    bool NetworkAclDirectionHasBeenSet() const;

                private:

                    /**
                     * 协议, 取值: TCP,UDP, ICMP, ALL。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 源端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     */
                    std::string m_sourcePort;
                    bool m_sourcePortHasBeenSet;

                    /**
                     * 源CIDR。
                     */
                    std::string m_sourceCidr;
                    bool m_sourceCidrHasBeenSet;

                    /**
                     * 目的端口(all, 单个port,  range)。当Protocol为ALL或ICMP时，不能指定Port。
                     */
                    std::string m_destinationPort;
                    bool m_destinationPortHasBeenSet;

                    /**
                     * 目的CIDR。
                     */
                    std::string m_destinationCidr;
                    bool m_destinationCidrHasBeenSet;

                    /**
                     * 动作，ACCEPT 或 DROP。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 网络ACL条目唯一ID。
                     */
                    std::string m_networkAclQuintupleEntryId;
                    bool m_networkAclQuintupleEntryIdHasBeenSet;

                    /**
                     * 优先级，从1开始。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 创建时间，用于DescribeNetworkAclQuintupleEntries的出参。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 方向，INGRESS或EGRESS，用于DescribeNetworkAclQuintupleEntries的出参。
                     */
                    std::string m_networkAclDirection;
                    bool m_networkAclDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLQUINTUPLEENTRY_H_
