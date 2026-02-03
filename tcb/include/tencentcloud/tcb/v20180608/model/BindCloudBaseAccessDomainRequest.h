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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BINDCLOUDBASEACCESSDOMAINREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BINDCLOUDBASEACCESSDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * BindCloudBaseAccessDomain请求参数结构体
                */
                class BindCloudBaseAccessDomainRequest : public AbstractModel
                {
                public:
                    BindCloudBaseAccessDomainRequest();
                    ~BindCloudBaseAccessDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务Id，目前是指环境Id
                     * @return ServiceId 服务Id，目前是指环境Id
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务Id，目前是指环境Id
                     * @param _serviceId 服务Id，目前是指环境Id
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取自定义域名
                     * @return Domain 自定义域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置自定义域名
                     * @param _domain 自定义域名
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
                     * 获取腾讯云证书Id
                     * @return CertId 腾讯云证书Id
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置腾讯云证书Id
                     * @param _certId 腾讯云证书Id
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取默认1，1 绑定默认Cdn，2 绑定TcbIngress（不经过cdn），4 绑定自定义cdn
                     * @return BindFlag 默认1，1 绑定默认Cdn，2 绑定TcbIngress（不经过cdn），4 绑定自定义cdn
                     * 
                     */
                    uint64_t GetBindFlag() const;

                    /**
                     * 设置默认1，1 绑定默认Cdn，2 绑定TcbIngress（不经过cdn），4 绑定自定义cdn
                     * @param _bindFlag 默认1，1 绑定默认Cdn，2 绑定TcbIngress（不经过cdn），4 绑定自定义cdn
                     * 
                     */
                    void SetBindFlag(const uint64_t& _bindFlag);

                    /**
                     * 判断参数 BindFlag 是否已赋值
                     * @return BindFlag 是否已赋值
                     * 
                     */
                    bool BindFlagHasBeenSet() const;

                    /**
                     * 获取自定义cdn cname域名
                     * @return CustomCname 自定义cdn cname域名
                     * 
                     */
                    std::string GetCustomCname() const;

                    /**
                     * 设置自定义cdn cname域名
                     * @param _customCname 自定义cdn cname域名
                     * 
                     */
                    void SetCustomCname(const std::string& _customCname);

                    /**
                     * 判断参数 CustomCname 是否已赋值
                     * @return CustomCname 是否已赋值
                     * 
                     */
                    bool CustomCnameHasBeenSet() const;

                private:

                    /**
                     * 服务Id，目前是指环境Id
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 自定义域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 腾讯云证书Id
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 默认1，1 绑定默认Cdn，2 绑定TcbIngress（不经过cdn），4 绑定自定义cdn
                     */
                    uint64_t m_bindFlag;
                    bool m_bindFlagHasBeenSet;

                    /**
                     * 自定义cdn cname域名
                     */
                    std::string m_customCname;
                    bool m_customCnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BINDCLOUDBASEACCESSDOMAINREQUEST_H_
