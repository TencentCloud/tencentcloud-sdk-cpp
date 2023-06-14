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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IP6RULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IP6RULE_H_

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
                * IPV6转换规则
                */
                class Ip6Rule : public AbstractModel
                {
                public:
                    Ip6Rule();
                    ~Ip6Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     * @return Ip6RuleId IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     * 
                     */
                    std::string GetIp6RuleId() const;

                    /**
                     * 设置IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     * @param _ip6RuleId IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     * 
                     */
                    void SetIp6RuleId(const std::string& _ip6RuleId);

                    /**
                     * 判断参数 Ip6RuleId 是否已赋值
                     * @return Ip6RuleId 是否已赋值
                     * 
                     */
                    bool Ip6RuleIdHasBeenSet() const;

                    /**
                     * 获取IPV6转换规则名称
                     * @return Ip6RuleName IPV6转换规则名称
                     * 
                     */
                    std::string GetIp6RuleName() const;

                    /**
                     * 设置IPV6转换规则名称
                     * @param _ip6RuleName IPV6转换规则名称
                     * 
                     */
                    void SetIp6RuleName(const std::string& _ip6RuleName);

                    /**
                     * 判断参数 Ip6RuleName 是否已赋值
                     * @return Ip6RuleName 是否已赋值
                     * 
                     */
                    bool Ip6RuleNameHasBeenSet() const;

                    /**
                     * 获取IPV6地址
                     * @return Vip6 IPV6地址
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置IPV6地址
                     * @param _vip6 IPV6地址
                     * 
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     * 
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取IPV6端口号
                     * @return Vport6 IPV6端口号
                     * 
                     */
                    int64_t GetVport6() const;

                    /**
                     * 设置IPV6端口号
                     * @param _vport6 IPV6端口号
                     * 
                     */
                    void SetVport6(const int64_t& _vport6);

                    /**
                     * 判断参数 Vport6 是否已赋值
                     * @return Vport6 是否已赋值
                     * 
                     */
                    bool Vport6HasBeenSet() const;

                    /**
                     * 获取协议类型，支持TCP/UDP
                     * @return Protocol 协议类型，支持TCP/UDP
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型，支持TCP/UDP
                     * @param _protocol 协议类型，支持TCP/UDP
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
                     * 获取IPV4地址
                     * @return Vip IPV4地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IPV4地址
                     * @param _vip IPV4地址
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取IPV4端口号
                     * @return Vport IPV4端口号
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置IPV4端口号
                     * @param _vport IPV4端口号
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取转换规则状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     * @return RuleStatus 转换规则状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     * 
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置转换规则状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     * @param _ruleStatus 转换规则状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     * 
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取转换规则创建时间
                     * @return CreatedTime 转换规则创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置转换规则创建时间
                     * @param _createdTime 转换规则创建时间
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
                     * IPV6转换规则唯一ID，形如rule6-xxxxxxxx
                     */
                    std::string m_ip6RuleId;
                    bool m_ip6RuleIdHasBeenSet;

                    /**
                     * IPV6转换规则名称
                     */
                    std::string m_ip6RuleName;
                    bool m_ip6RuleNameHasBeenSet;

                    /**
                     * IPV6地址
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * IPV6端口号
                     */
                    int64_t m_vport6;
                    bool m_vport6HasBeenSet;

                    /**
                     * 协议类型，支持TCP/UDP
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * IPV4地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * IPV4端口号
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 转换规则状态，限于CREATING,RUNNING,DELETING,MODIFYING
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 转换规则创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IP6RULE_H_
