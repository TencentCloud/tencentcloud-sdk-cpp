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
#include <tencentcloud/tcb/v20180608/model/HTTPServiceExtension.h>


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
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
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
                     * 获取<p>域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调</p>
                     * @return DomainType <p>域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调</p>
                     * 
                     */
                    std::string GetDomainType() const;

                    /**
                     * 设置<p>域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调</p>
                     * @param _domainType <p>域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调</p>
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
                     * 获取<p>绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）</p>
                     * @return AccessType <p>绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）</p>
                     * @param _accessType <p>绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）</p>
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
                     * 获取<p>证书ID。当前账户下SSL平台的证书ID</p>
                     * @return CertId <p>证书ID。当前账户下SSL平台的证书ID</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>证书ID。当前账户下SSL平台的证书ID</p>
                     * @param _certId <p>证书ID。当前账户下SSL平台的证书ID</p>
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
                     * 获取<p>协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向</p>
                     * @return Protocol <p>协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向</p>
                     * @param _protocol <p>协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向</p>
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
                     * 获取<p>配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。</p>
                     * @return Cname <p>配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。</p>
                     * @param _cname <p>配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。</p>
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
                     * 获取<p>是否是默认域名</p>
                     * @return IsDefault <p>是否是默认域名</p>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置<p>是否是默认域名</p>
                     * @param _isDefault <p>是否是默认域名</p>
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
                     * 获取<p>域名开启状态</p>
                     * @return Enable <p>域名开启状态</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>域名开启状态</p>
                     * @param _enable <p>域名开启状态</p>
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
                     * 获取<p>状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FAIL： 失败</li><li>EO_PENDING_VERIFICATION： 待验证edgeone归属权</li><li>SUCCESS： 成功</li></ul>
                     * @return Status <p>状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FAIL： 失败</li><li>EO_PENDING_VERIFICATION： 待验证edgeone归属权</li><li>SUCCESS： 成功</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FAIL： 失败</li><li>EO_PENDING_VERIFICATION： 待验证edgeone归属权</li><li>SUCCESS： 成功</li></ul>
                     * @param _status <p>状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FAIL： 失败</li><li>EO_PENDING_VERIFICATION： 待验证edgeone归属权</li><li>SUCCESS： 成功</li></ul>
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
                     * 获取<p>DNS解析状态</p><p>枚举值：</p><ul><li>OK： 正常，命中目标 cname</li><li>EMPTY： 解析为空，域名尚未配置 CNAME 或未生效</li><li>INVALID： 异常，解析到其他非目标地址</li></ul>
                     * @return DNSStatus <p>DNS解析状态</p><p>枚举值：</p><ul><li>OK： 正常，命中目标 cname</li><li>EMPTY： 解析为空，域名尚未配置 CNAME 或未生效</li><li>INVALID： 异常，解析到其他非目标地址</li></ul>
                     * 
                     */
                    std::string GetDNSStatus() const;

                    /**
                     * 设置<p>DNS解析状态</p><p>枚举值：</p><ul><li>OK： 正常，命中目标 cname</li><li>EMPTY： 解析为空，域名尚未配置 CNAME 或未生效</li><li>INVALID： 异常，解析到其他非目标地址</li></ul>
                     * @param _dNSStatus <p>DNS解析状态</p><p>枚举值：</p><ul><li>OK： 正常，命中目标 cname</li><li>EMPTY： 解析为空，域名尚未配置 CNAME 或未生效</li><li>INVALID： 异常，解析到其他非目标地址</li></ul>
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
                     * 获取<p>HTTP访问服务路由信息</p>
                     * @return Routes <p>HTTP访问服务路由信息</p>
                     * 
                     */
                    std::vector<HTTPServiceRoute> GetRoutes() const;

                    /**
                     * 设置<p>HTTP访问服务路由信息</p>
                     * @param _routes <p>HTTP访问服务路由信息</p>
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
                     * 获取<p>扩展字段，内部包含headers处理等</p>
                     * @return Extension <p>扩展字段，内部包含headers处理等</p>
                     * 
                     */
                    HTTPServiceExtension GetExtension() const;

                    /**
                     * 设置<p>扩展字段，内部包含headers处理等</p>
                     * @param _extension <p>扩展字段，内部包含headers处理等</p>
                     * 
                     */
                    void SetExtension(const HTTPServiceExtension& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                    /**
                     * 获取<p>域名创建时间</p>
                     * @return CreateTime <p>域名创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>域名创建时间</p>
                     * @param _createTime <p>域名创建时间</p>
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
                     * 获取<p>域名更新时间</p>
                     * @return UpdateTime <p>域名更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>域名更新时间</p>
                     * @param _updateTime <p>域名更新时间</p>
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
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名类型。 HTTPSERVICE: HTTP访问服务，CBR: 云托管服务，ANYSERVICE: 任意服务，AI_AGENT: AI agent，VM: 主机，INTEGRATION_CALLBACK: 集成回调</p>
                     */
                    std::string m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * <p>绑定类型。默认DIRECT。DIRECT: 直连到HTTP访问服务， CDN: 接入云开发CDN，CUSTOM: 自定义接入类型（其他CDN或者WAF）</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>证书ID。当前账户下SSL平台的证书ID</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>协议类型。默认HTTP_AND_HTTPS。HTTP_AND_HTTPS: 同时开启http和https，HTTP_TO_HTTPS: http重定向成https，HTTPS_TO_HTTP: https重定向成http。如果未配置证书无法访问https或者进行重定向</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>配置DNS解析的CNAME。根据AccessType返回不同的CNAME值。</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>是否是默认域名</p>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>域名开启状态</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>状态。</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>FAIL： 失败</li><li>EO_PENDING_VERIFICATION： 待验证edgeone归属权</li><li>SUCCESS： 成功</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>DNS解析状态</p><p>枚举值：</p><ul><li>OK： 正常，命中目标 cname</li><li>EMPTY： 解析为空，域名尚未配置 CNAME 或未生效</li><li>INVALID： 异常，解析到其他非目标地址</li></ul>
                     */
                    std::string m_dNSStatus;
                    bool m_dNSStatusHasBeenSet;

                    /**
                     * <p>HTTP访问服务路由信息</p>
                     */
                    std::vector<HTTPServiceRoute> m_routes;
                    bool m_routesHasBeenSet;

                    /**
                     * <p>扩展字段，内部包含headers处理等</p>
                     */
                    HTTPServiceExtension m_extension;
                    bool m_extensionHasBeenSet;

                    /**
                     * <p>域名创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>域名更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEDOMAIN_H_
