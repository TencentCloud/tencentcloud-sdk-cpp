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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCPRECISIONPOLICY_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCPRECISIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CCPrecisionPlyRecord.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CC精准防护策略信息
                */
                class CCPrecisionPolicy : public AbstractModel
                {
                public:
                    CCPrecisionPolicy();
                    ~CCPrecisionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略Id
                     * @return PolicyId 策略Id
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置策略Id
                     * @param PolicyId 策略Id
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param InstanceId 实例Id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Ip地址
                     * @return Ip Ip地址
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Ip地址
                     * @param Ip Ip地址
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取协议
                     * @return Protocol 协议
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param Protocol 协议
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param Domain 域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取策略方式（丢弃或验证码）
                     * @return PolicyAction 策略方式（丢弃或验证码）
                     */
                    std::string GetPolicyAction() const;

                    /**
                     * 设置策略方式（丢弃或验证码）
                     * @param PolicyAction 策略方式（丢弃或验证码）
                     */
                    void SetPolicyAction(const std::string& _policyAction);

                    /**
                     * 判断参数 PolicyAction 是否已赋值
                     * @return PolicyAction 是否已赋值
                     */
                    bool PolicyActionHasBeenSet() const;

                    /**
                     * 获取策略列表
                     * @return PolicyList 策略列表
                     */
                    std::vector<CCPrecisionPlyRecord> GetPolicyList() const;

                    /**
                     * 设置策略列表
                     * @param PolicyList 策略列表
                     */
                    void SetPolicyList(const std::vector<CCPrecisionPlyRecord>& _policyList);

                    /**
                     * 判断参数 PolicyList 是否已赋值
                     * @return PolicyList 是否已赋值
                     */
                    bool PolicyListHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param ModifyTime 修改时间
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 策略Id
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Ip地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 策略方式（丢弃或验证码）
                     */
                    std::string m_policyAction;
                    bool m_policyActionHasBeenSet;

                    /**
                     * 策略列表
                     */
                    std::vector<CCPrecisionPlyRecord> m_policyList;
                    bool m_policyListHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCPRECISIONPOLICY_H_
