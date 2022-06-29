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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_SETAUTHENTICATIONREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_SETAUTHENTICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SetAuthentication请求参数结构体
                */
                class SetAuthenticationRequest : public AbstractModel
                {
                public:
                    SetAuthenticationRequest();
                    ~SetAuthenticationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器ID。
                     * @return ListenerId 监听器ID。
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。
                     * @param ListenerId 监听器ID。
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取需要进行高级配置的域名，该域名为监听器下的转发规则的域名。
                     * @return Domain 需要进行高级配置的域名，该域名为监听器下的转发规则的域名。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要进行高级配置的域名，该域名为监听器下的转发规则的域名。
                     * @param Domain 需要进行高级配置的域名，该域名为监听器下的转发规则的域名。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取基础认证开关，其中：
0，关闭基础认证；
1，开启基础认证。
默认为0。
                     * @return BasicAuth 基础认证开关，其中：
0，关闭基础认证；
1，开启基础认证。
默认为0。
                     */
                    int64_t GetBasicAuth() const;

                    /**
                     * 设置基础认证开关，其中：
0，关闭基础认证；
1，开启基础认证。
默认为0。
                     * @param BasicAuth 基础认证开关，其中：
0，关闭基础认证；
1，开启基础认证。
默认为0。
                     */
                    void SetBasicAuth(const int64_t& _basicAuth);

                    /**
                     * 判断参数 BasicAuth 是否已赋值
                     * @return BasicAuth 是否已赋值
                     */
                    bool BasicAuthHasBeenSet() const;

                    /**
                     * 获取通道认证开关，用于源站对Gaap的认证，其中：
0，关闭通道认证；
1，开启通道认证。
默认为0。
                     * @return GaapAuth 通道认证开关，用于源站对Gaap的认证，其中：
0，关闭通道认证；
1，开启通道认证。
默认为0。
                     */
                    int64_t GetGaapAuth() const;

                    /**
                     * 设置通道认证开关，用于源站对Gaap的认证，其中：
0，关闭通道认证；
1，开启通道认证。
默认为0。
                     * @param GaapAuth 通道认证开关，用于源站对Gaap的认证，其中：
0，关闭通道认证；
1，开启通道认证。
默认为0。
                     */
                    void SetGaapAuth(const int64_t& _gaapAuth);

                    /**
                     * 判断参数 GaapAuth 是否已赋值
                     * @return GaapAuth 是否已赋值
                     */
                    bool GaapAuthHasBeenSet() const;

                    /**
                     * 获取源站认证开关，用于Gaap对服务器的认证，其中：
0，关闭源站认证；
1，开启源站认证。
默认为0。
                     * @return RealServerAuth 源站认证开关，用于Gaap对服务器的认证，其中：
0，关闭源站认证；
1，开启源站认证。
默认为0。
                     */
                    int64_t GetRealServerAuth() const;

                    /**
                     * 设置源站认证开关，用于Gaap对服务器的认证，其中：
0，关闭源站认证；
1，开启源站认证。
默认为0。
                     * @param RealServerAuth 源站认证开关，用于Gaap对服务器的认证，其中：
0，关闭源站认证；
1，开启源站认证。
默认为0。
                     */
                    void SetRealServerAuth(const int64_t& _realServerAuth);

                    /**
                     * 判断参数 RealServerAuth 是否已赋值
                     * @return RealServerAuth 是否已赋值
                     */
                    bool RealServerAuthHasBeenSet() const;

                    /**
                     * 获取基础认证配置ID，从证书管理页获取。
                     * @return BasicAuthConfId 基础认证配置ID，从证书管理页获取。
                     */
                    std::string GetBasicAuthConfId() const;

                    /**
                     * 设置基础认证配置ID，从证书管理页获取。
                     * @param BasicAuthConfId 基础认证配置ID，从证书管理页获取。
                     */
                    void SetBasicAuthConfId(const std::string& _basicAuthConfId);

                    /**
                     * 判断参数 BasicAuthConfId 是否已赋值
                     * @return BasicAuthConfId 是否已赋值
                     */
                    bool BasicAuthConfIdHasBeenSet() const;

                    /**
                     * 获取通道SSL证书ID，从证书管理页获取。
                     * @return GaapCertificateId 通道SSL证书ID，从证书管理页获取。
                     */
                    std::string GetGaapCertificateId() const;

                    /**
                     * 设置通道SSL证书ID，从证书管理页获取。
                     * @param GaapCertificateId 通道SSL证书ID，从证书管理页获取。
                     */
                    void SetGaapCertificateId(const std::string& _gaapCertificateId);

                    /**
                     * 判断参数 GaapCertificateId 是否已赋值
                     * @return GaapCertificateId 是否已赋值
                     */
                    bool GaapCertificateIdHasBeenSet() const;

                    /**
                     * 获取源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     * @return RealServerCertificateId 源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     */
                    std::string GetRealServerCertificateId() const;

                    /**
                     * 设置源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     * @param RealServerCertificateId 源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     */
                    void SetRealServerCertificateId(const std::string& _realServerCertificateId);

                    /**
                     * 判断参数 RealServerCertificateId 是否已赋值
                     * @return RealServerCertificateId 是否已赋值
                     */
                    bool RealServerCertificateIdHasBeenSet() const;

                    /**
                     * 获取该字段已废弃，请使用创建规则和修改规则中的SNI功能。
                     * @return RealServerCertificateDomain 该字段已废弃，请使用创建规则和修改规则中的SNI功能。
                     */
                    std::string GetRealServerCertificateDomain() const;

                    /**
                     * 设置该字段已废弃，请使用创建规则和修改规则中的SNI功能。
                     * @param RealServerCertificateDomain 该字段已废弃，请使用创建规则和修改规则中的SNI功能。
                     */
                    void SetRealServerCertificateDomain(const std::string& _realServerCertificateDomain);

                    /**
                     * 判断参数 RealServerCertificateDomain 是否已赋值
                     * @return RealServerCertificateDomain 是否已赋值
                     */
                    bool RealServerCertificateDomainHasBeenSet() const;

                    /**
                     * 获取多源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     * @return PolyRealServerCertificateIds 多源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     */
                    std::vector<std::string> GetPolyRealServerCertificateIds() const;

                    /**
                     * 设置多源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     * @param PolyRealServerCertificateIds 多源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     */
                    void SetPolyRealServerCertificateIds(const std::vector<std::string>& _polyRealServerCertificateIds);

                    /**
                     * 判断参数 PolyRealServerCertificateIds 是否已赋值
                     * @return PolyRealServerCertificateIds 是否已赋值
                     */
                    bool PolyRealServerCertificateIdsHasBeenSet() const;

                private:

                    /**
                     * 监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 需要进行高级配置的域名，该域名为监听器下的转发规则的域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 基础认证开关，其中：
0，关闭基础认证；
1，开启基础认证。
默认为0。
                     */
                    int64_t m_basicAuth;
                    bool m_basicAuthHasBeenSet;

                    /**
                     * 通道认证开关，用于源站对Gaap的认证，其中：
0，关闭通道认证；
1，开启通道认证。
默认为0。
                     */
                    int64_t m_gaapAuth;
                    bool m_gaapAuthHasBeenSet;

                    /**
                     * 源站认证开关，用于Gaap对服务器的认证，其中：
0，关闭源站认证；
1，开启源站认证。
默认为0。
                     */
                    int64_t m_realServerAuth;
                    bool m_realServerAuthHasBeenSet;

                    /**
                     * 基础认证配置ID，从证书管理页获取。
                     */
                    std::string m_basicAuthConfId;
                    bool m_basicAuthConfIdHasBeenSet;

                    /**
                     * 通道SSL证书ID，从证书管理页获取。
                     */
                    std::string m_gaapCertificateId;
                    bool m_gaapCertificateIdHasBeenSet;

                    /**
                     * 源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     */
                    std::string m_realServerCertificateId;
                    bool m_realServerCertificateIdHasBeenSet;

                    /**
                     * 该字段已废弃，请使用创建规则和修改规则中的SNI功能。
                     */
                    std::string m_realServerCertificateDomain;
                    bool m_realServerCertificateDomainHasBeenSet;

                    /**
                     * 多源站CA证书ID，从证书管理页获取。源站认证时，填写该参数或RealServerCertificateId参数
                     */
                    std::vector<std::string> m_polyRealServerCertificateIds;
                    bool m_polyRealServerCertificateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_SETAUTHENTICATIONREQUEST_H_
