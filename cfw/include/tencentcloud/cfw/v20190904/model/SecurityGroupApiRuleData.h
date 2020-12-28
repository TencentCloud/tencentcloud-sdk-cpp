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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPAPIRULEDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPAPIRULEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 添加安全组Api规则对象
                */
                class SecurityGroupApiRuleData : public AbstractModel
                {
                public:
                    SecurityGroupApiRuleData();
                    ~SecurityGroupApiRuleData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问源，入站时为Ip/Cidr，默认为0.0.0.0/0； 出站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     * @return SourceId 访问源，入站时为Ip/Cidr，默认为0.0.0.0/0； 出站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置访问源，入站时为Ip/Cidr，默认为0.0.0.0/0； 出站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     * @param SourceId 访问源，入站时为Ip/Cidr，默认为0.0.0.0/0； 出站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取访问目的，出站时为Ip/Cidr，默认为0.0.0.0/0；入站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     * @return TargetId 访问目的，出站时为Ip/Cidr，默认为0.0.0.0/0；入站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置访问目的，出站时为Ip/Cidr，默认为0.0.0.0/0；入站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     * @param TargetId 访问目的，出站时为Ip/Cidr，默认为0.0.0.0/0；入站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取协议，支持ANY/TCP/UDP/ICMP
                     * @return Protocol 协议，支持ANY/TCP/UDP/ICMP
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，支持ANY/TCP/UDP/ICMP
                     * @param Protocol 协议，支持ANY/TCP/UDP/ICMP
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取端口, 当Protocol为ANY或ICMP时，Port为-1/-1
                     * @return Port 端口, 当Protocol为ANY或ICMP时，Port为-1/-1
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口, 当Protocol为ANY或ICMP时，Port为-1/-1
                     * @param Port 端口, 当Protocol为ANY或ICMP时，Port为-1/-1
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取策略, 1：阻断，2：放行
                     * @return Strategy 策略, 1：阻断，2：放行
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置策略, 1：阻断，2：放行
                     * @param Strategy 策略, 1：阻断，2：放行
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Detail 描述
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置描述
                     * @param Detail 描述
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取规则类型，1：VpcId+Ip/Cidr, 2: 实例ID，入站时为访问目的类型，出站时为访问源类型
                     * @return RuleType 规则类型，1：VpcId+Ip/Cidr, 2: 实例ID，入站时为访问目的类型，出站时为访问源类型
                     */
                    uint64_t GetRuleType() const;

                    /**
                     * 设置规则类型，1：VpcId+Ip/Cidr, 2: 实例ID，入站时为访问目的类型，出站时为访问源类型
                     * @param RuleType 规则类型，1：VpcId+Ip/Cidr, 2: 实例ID，入站时为访问目的类型，出站时为访问源类型
                     */
                    void SetRuleType(const uint64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取执行顺序，中间插入必传，前插、后插非必传
                     * @return OrderIndex 执行顺序，中间插入必传，前插、后插非必传
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置执行顺序，中间插入必传，前插、后插非必传
                     * @param OrderIndex 执行顺序，中间插入必传，前插、后插非必传
                     */
                    void SetOrderIndex(const uint64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取私有网络ID，当RuleType为1时必传
                     * @return VpcId 私有网络ID，当RuleType为1时必传
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，当RuleType为1时必传
                     * @param VpcId 私有网络ID，当RuleType为1时必传
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * 访问源，入站时为Ip/Cidr，默认为0.0.0.0/0； 出站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 访问目的，出站时为Ip/Cidr，默认为0.0.0.0/0；入站时当RuleType为1时，支持内网Ip/Cidr, 当RuleType为2时，填实例ID
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 协议，支持ANY/TCP/UDP/ICMP
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口, 当Protocol为ANY或ICMP时，Port为-1/-1
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 策略, 1：阻断，2：放行
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 规则类型，1：VpcId+Ip/Cidr, 2: 实例ID，入站时为访问目的类型，出站时为访问源类型
                     */
                    uint64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 执行顺序，中间插入必传，前插、后插非必传
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 私有网络ID，当RuleType为1时必传
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPAPIRULEDATA_H_
