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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEIN_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 安全策略规则（入参）
                */
                class SecurityPolicyRuleIn : public AbstractModel
                {
                public:
                    SecurityPolicyRuleIn();
                    ~SecurityPolicyRuleIn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求来源IP或IP段。
                     * @return SourceCidr 请求来源IP或IP段。
                     * 
                     */
                    std::string GetSourceCidr() const;

                    /**
                     * 设置请求来源IP或IP段。
                     * @param _sourceCidr 请求来源IP或IP段。
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
                     * 获取策略：允许（ACCEPT）或拒绝（DROP）
                     * @return Action 策略：允许（ACCEPT）或拒绝（DROP）
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置策略：允许（ACCEPT）或拒绝（DROP）
                     * @param _action 策略：允许（ACCEPT）或拒绝（DROP）
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
                     * 获取规则别名
                     * @return AliasName 规则别名
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置规则别名
                     * @param _aliasName 规则别名
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取协议：TCP或UDP，ALL表示所有协议
                     * @return Protocol 协议：TCP或UDP，ALL表示所有协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议：TCP或UDP，ALL表示所有协议
                     * @param _protocol 协议：TCP或UDP，ALL表示所有协议
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
                     * 获取目标端口，填写格式举例：
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     * @return DestPortRange 目标端口，填写格式举例：
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     * 
                     */
                    std::string GetDestPortRange() const;

                    /**
                     * 设置目标端口，填写格式举例：
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     * @param _destPortRange 目标端口，填写格式举例：
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     * 
                     */
                    void SetDestPortRange(const std::string& _destPortRange);

                    /**
                     * 判断参数 DestPortRange 是否已赋值
                     * @return DestPortRange 是否已赋值
                     * 
                     */
                    bool DestPortRangeHasBeenSet() const;

                private:

                    /**
                     * 请求来源IP或IP段。
                     */
                    std::string m_sourceCidr;
                    bool m_sourceCidrHasBeenSet;

                    /**
                     * 策略：允许（ACCEPT）或拒绝（DROP）
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则别名
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 协议：TCP或UDP，ALL表示所有协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 目标端口，填写格式举例：
单个端口: 80
多个端口: 80,443
连续端口: 3306-20000
所有端口: ALL
                     */
                    std::string m_destPortRange;
                    bool m_destPortRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_SECURITYPOLICYRULEIN_H_
