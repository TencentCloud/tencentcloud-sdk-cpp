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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCREQLIMITPOLICYREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCREQLIMITPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CCReqLimitPolicyRecord.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateCCReqLimitPolicy请求参数结构体
                */
                class CreateCCReqLimitPolicyRequest : public AbstractModel
                {
                public:
                    CreateCCReqLimitPolicyRequest();
                    ~CreateCCReqLimitPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP值
                     * @return Ip IP值
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP值
                     * @param _ip IP值
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取协议，可取值http, https, http/https
                     * @return Protocol 协议，可取值http, https, http/https
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，可取值http, https, http/https
                     * @param _protocol 协议，可取值http, https, http/https
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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取策略项
                     * @return Policy 策略项
                     * 
                     */
                    CCReqLimitPolicyRecord GetPolicy() const;

                    /**
                     * 设置策略项
                     * @param _policy 策略项
                     * 
                     */
                    void SetPolicy(const CCReqLimitPolicyRecord& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取是否为兜底频控 0表示不是 1表示是
                     * @return IsGlobal 是否为兜底频控 0表示不是 1表示是
                     * 
                     */
                    int64_t GetIsGlobal() const;

                    /**
                     * 设置是否为兜底频控 0表示不是 1表示是
                     * @param _isGlobal 是否为兜底频控 0表示不是 1表示是
                     * 
                     */
                    void SetIsGlobal(const int64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP值
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 协议，可取值http, https, http/https
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 策略项
                     */
                    CCReqLimitPolicyRecord m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 是否为兜底频控 0表示不是 1表示是
                     */
                    int64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATECCREQLIMITPOLICYREQUEST_H_
