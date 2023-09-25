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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINIPV6STATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINIPV6STATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyDomainIpv6Status请求参数结构体
                */
                class ModifyDomainIpv6StatusRequest : public AbstractModel
                {
                public:
                    ModifyDomainIpv6StatusRequest();
                    ~ModifyDomainIpv6StatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的域名所属的实例ID
                     * @return InstanceId 需要修改的域名所属的实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要修改的域名所属的实例ID
                     * @param _instanceId 需要修改的域名所属的实例ID
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
                     * 获取需要修改的域名
                     * @return Domain 需要修改的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要修改的域名
                     * @param _domain 需要修改的域名
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
                     * 获取需要修改的域名ID
                     * @return DomainId 需要修改的域名ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置需要修改的域名ID
                     * @param _domainId 需要修改的域名ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取修改域名的Ipv6开关为Status （1:开启 2:关闭）
                     * @return Status 修改域名的Ipv6开关为Status （1:开启 2:关闭）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置修改域名的Ipv6开关为Status （1:开启 2:关闭）
                     * @param _status 修改域名的Ipv6开关为Status （1:开启 2:关闭）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 需要修改的域名所属的实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要修改的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 需要修改的域名ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 修改域名的Ipv6开关为Status （1:开启 2:关闭）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYDOMAINIPV6STATUSREQUEST_H_
