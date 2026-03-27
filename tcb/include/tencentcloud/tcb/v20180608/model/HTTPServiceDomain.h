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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEDOMAIN_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceRoute.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 查询HTTP访问服务输出的域名信息，每个域名内包含所有路由信息
                */
                class HTTPServiceDomain : public AbstractModel
                {
                public:
                    HTTPServiceDomain();
                    ~HTTPServiceDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调
                     * @return DomainType 域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调
                     * 
                     */
                    std::string GetDomainType() const;

                    /**
                     * 设置域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调
                     * @param _domainType 域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调
                     * 
                     */
                    void SetDomainType(const std::string& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                    /**
                     * 获取绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）
                     * @return AccessType 绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）
                     * @param _accessType 绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取证书ID。当前账户下SSL平台的证书ID
                     * @return CertId 证书ID。当前账户下SSL平台的证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书ID。当前账户下SSL平台的证书ID
                     * @param _certId 证书ID。当前账户下SSL平台的证书ID
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
                     * 获取协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向
                     * @return Protocol 协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向
                     * @param _protocol 协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向
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
                     * 获取配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。
                     * @return Cname 配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。
                     * @param _cname 配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取是否是默认域名
                     * @return IsDefault 是否是默认域名
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否是默认域名
                     * @param _isDefault 是否是默认域名
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取域名开启状态
                     * @return Enable 域名开启状态
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置域名开启状态
                     * @param _enable 域名开启状态
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取状态。PROCESSING、FAIL，SUCCESS。
                     * @return Status 状态。PROCESSING、FAIL，SUCCESS。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态。PROCESSING、FAIL，SUCCESS。
                     * @param _status 状态。PROCESSING、FAIL，SUCCESS。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取DNS解析状态。OK： 解析正常，INVALID：解析不正确，域名未解析到当前Cname域名。
                     * @return DNSStatus DNS解析状态。OK： 解析正常，INVALID：解析不正确，域名未解析到当前Cname域名。
                     * 
                     */
                    std::string GetDNSStatus() const;

                    /**
                     * 设置DNS解析状态。OK： 解析正常，INVALID：解析不正确，域名未解析到当前Cname域名。
                     * @param _dNSStatus DNS解析状态。OK： 解析正常，INVALID：解析不正确，域名未解析到当前Cname域名。
                     * 
                     */
                    void SetDNSStatus(const std::string& _dNSStatus);

                    /**
                     * 判断参数 DNSStatus 是否已赋值
                     * @return DNSStatus 是否已赋值
                     * 
                     */
                    bool DNSStatusHasBeenSet() const;

                    /**
                     * 获取HTTP访问服务路由信息
                     * @return Routes HTTP访问服务路由信息
                     * 
                     */
                    std::vector<HTTPServiceRoute> GetRoutes() const;

                    /**
                     * 设置HTTP访问服务路由信息
                     * @param _routes HTTP访问服务路由信息
                     * 
                     */
                    void SetRoutes(const std::vector<HTTPServiceRoute>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     * 
                     */
                    bool RoutesHasBeenSet() const;

                    /**
                     * 获取域名创建时间
                     * @return CreateTime 域名创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置域名创建时间
                     * @param _createTime 域名创建时间
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
                     * 获取域名更新时间
                     * @return UpdateTime 域名更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置域名更新时间
                     * @param _updateTime 域名更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调
                     */
                    std::string m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * 绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 证书ID。当前账户下SSL平台的证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 是否是默认域名
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 域名开启状态
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 状态。PROCESSING、FAIL，SUCCESS。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DNS解析状态。OK： 解析正常，INVALID：解析不正确，域名未解析到当前Cname域名。
                     */
                    std::string m_dNSStatus;
                    bool m_dNSStatusHasBeenSet;

                    /**
                     * HTTP访问服务路由信息
                     */
                    std::vector<HTTPServiceRoute> m_routes;
                    bool m_routesHasBeenSet;

                    /**
                     * 域名创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 域名更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEDOMAIN_H_
