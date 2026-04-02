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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEDOMAINPARAM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEDOMAINPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceRouteParam.h>
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
                * 创建或修改HTTP访问服务输入的域名信息，修改HTTP访问服务域名时对应字段不传参数表示不需要修改。
                */
                class HTTPServiceDomainParam : public AbstractModel
                {
                public:
                    HTTPServiceDomainParam();
                    ~HTTPServiceDomainParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>域名。全局唯一。如果域名在其他环境下占用或者腾讯云CDN占用，可能会导致创建失败</p>
                     * @return Domain <p>域名。全局唯一。如果域名在其他环境下占用或者腾讯云CDN占用，可能会导致创建失败</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名。全局唯一。如果域名在其他环境下占用或者腾讯云CDN占用，可能会导致创建失败</p>
                     * @param _domain <p>域名。全局唯一。如果域名在其他环境下占用或者腾讯云CDN占用，可能会导致创建失败</p>
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
                     * 获取<p>自定义CNAME。对应AccessType: Custom</p>
                     * @return CustomCname <p>自定义CNAME。对应AccessType: Custom</p>
                     * 
                     */
                    std::string GetCustomCname() const;

                    /**
                     * 设置<p>自定义CNAME。对应AccessType: Custom</p>
                     * @param _customCname <p>自定义CNAME。对应AccessType: Custom</p>
                     * 
                     */
                    void SetCustomCname(const std::string& _customCname);

                    /**
                     * 判断参数 CustomCname 是否已赋值
                     * @return CustomCname 是否已赋值
                     * 
                     */
                    bool CustomCnameHasBeenSet() const;

                    /**
                     * 获取<p>域名开启状态，不传默认开启</p>
                     * @return Enable <p>域名开启状态，不传默认开启</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>域名开启状态，不传默认开启</p>
                     * @param _enable <p>域名开启状态，不传默认开启</p>
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
                     * 获取<p>创建/修改的HTTP访问服务路由列表。如果不传，仅创建或修改域名信息。列表最大支持传入20个</p>
                     * @return Routes <p>创建/修改的HTTP访问服务路由列表。如果不传，仅创建或修改域名信息。列表最大支持传入20个</p>
                     * 
                     */
                    std::vector<HTTPServiceRouteParam> GetRoutes() const;

                    /**
                     * 设置<p>创建/修改的HTTP访问服务路由列表。如果不传，仅创建或修改域名信息。列表最大支持传入20个</p>
                     * @param _routes <p>创建/修改的HTTP访问服务路由列表。如果不传，仅创建或修改域名信息。列表最大支持传入20个</p>
                     * 
                     */
                    void SetRoutes(const std::vector<HTTPServiceRouteParam>& _routes);

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

                private:

                    /**
                     * <p>域名。全局唯一。如果域名在其他环境下占用或者腾讯云CDN占用，可能会导致创建失败</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

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
                     * <p>自定义CNAME。对应AccessType: Custom</p>
                     */
                    std::string m_customCname;
                    bool m_customCnameHasBeenSet;

                    /**
                     * <p>域名开启状态，不传默认开启</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>创建/修改的HTTP访问服务路由列表。如果不传，仅创建或修改域名信息。列表最大支持传入20个</p>
                     */
                    std::vector<HTTPServiceRouteParam> m_routes;
                    bool m_routesHasBeenSet;

                    /**
                     * <p>扩展字段，内部包含headers处理等</p>
                     */
                    HTTPServiceExtension m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEDOMAINPARAM_H_
