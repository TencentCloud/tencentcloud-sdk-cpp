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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KVMapping.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayRoute请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayRouteRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayRouteRequest();
                    ~ModifyCloudNativeAPIGatewayRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关ID</p>
                     * @return GatewayId <p>网关ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关ID</p>
                     * @param _gatewayId <p>网关ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>所属服务的ID</p>
                     * @return ServiceID <p>所属服务的ID</p>
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置<p>所属服务的ID</p>
                     * @param _serviceID <p>所属服务的ID</p>
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取<p>路由的ID，实例级别唯一</p>
                     * @return RouteID <p>路由的ID，实例级别唯一</p>
                     * 
                     */
                    std::string GetRouteID() const;

                    /**
                     * 设置<p>路由的ID，实例级别唯一</p>
                     * @param _routeID <p>路由的ID，实例级别唯一</p>
                     * 
                     */
                    void SetRouteID(const std::string& _routeID);

                    /**
                     * 判断参数 RouteID 是否已赋值
                     * @return RouteID 是否已赋值
                     * 
                     */
                    bool RouteIDHasBeenSet() const;

                    /**
                     * 获取<p>路由的名字，实例级别唯一，可以不提供</p>
                     * @return RouteName <p>路由的名字，实例级别唯一，可以不提供</p>
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置<p>路由的名字，实例级别唯一，可以不提供</p>
                     * @param _routeName <p>路由的名字，实例级别唯一，可以不提供</p>
                     * 
                     */
                    void SetRouteName(const std::string& _routeName);

                    /**
                     * 判断参数 RouteName 是否已赋值
                     * @return RouteName 是否已赋值
                     * 
                     */
                    bool RouteNameHasBeenSet() const;

                    /**
                     * 获取<p>路由的方法，其中方法可选值：</p><ul><li>GET</li><li>POST</li><li>DELETE</li><li>PUT</li><li>OPTIONS</li><li>PATCH</li><li>HEAD</li><li>ANY</li><li>TRACE</li><li>COPY</li><li>MOVE</li><li>PROPFIND</li><li>PROPPATCH</li><li>MKCOL</li><li>LOCK</li><li>UNLOCK</li></ul>
                     * @return Methods <p>路由的方法，其中方法可选值：</p><ul><li>GET</li><li>POST</li><li>DELETE</li><li>PUT</li><li>OPTIONS</li><li>PATCH</li><li>HEAD</li><li>ANY</li><li>TRACE</li><li>COPY</li><li>MOVE</li><li>PROPFIND</li><li>PROPPATCH</li><li>MKCOL</li><li>LOCK</li><li>UNLOCK</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置<p>路由的方法，其中方法可选值：</p><ul><li>GET</li><li>POST</li><li>DELETE</li><li>PUT</li><li>OPTIONS</li><li>PATCH</li><li>HEAD</li><li>ANY</li><li>TRACE</li><li>COPY</li><li>MOVE</li><li>PROPFIND</li><li>PROPPATCH</li><li>MKCOL</li><li>LOCK</li><li>UNLOCK</li></ul>
                     * @param _methods <p>路由的方法，其中方法可选值：</p><ul><li>GET</li><li>POST</li><li>DELETE</li><li>PUT</li><li>OPTIONS</li><li>PATCH</li><li>HEAD</li><li>ANY</li><li>TRACE</li><li>COPY</li><li>MOVE</li><li>PROPFIND</li><li>PROPPATCH</li><li>MKCOL</li><li>LOCK</li><li>UNLOCK</li></ul>
                     * 
                     */
                    void SetMethods(const std::vector<std::string>& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取<p>路由的域名</p>
                     * @return Hosts <p>路由的域名</p>
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置<p>路由的域名</p>
                     * @param _hosts <p>路由的域名</p>
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取<p>路由的路径</p>
                     * @return Paths <p>路由的路径</p>
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置<p>路由的路径</p>
                     * @param _paths <p>路由的路径</p>
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取<p>路由的协议，可选</p><ul><li>https</li><li>http</li></ul>
                     * @return Protocols <p>路由的协议，可选</p><ul><li>https</li><li>http</li></ul>
                     * 
                     */
                    std::vector<std::string> GetProtocols() const;

                    /**
                     * 设置<p>路由的协议，可选</p><ul><li>https</li><li>http</li></ul>
                     * @param _protocols <p>路由的协议，可选</p><ul><li>https</li><li>http</li></ul>
                     * 
                     */
                    void SetProtocols(const std::vector<std::string>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取<p>转发到后端时是否保留Host</p>
                     * @return PreserveHost <p>转发到后端时是否保留Host</p>
                     * 
                     */
                    bool GetPreserveHost() const;

                    /**
                     * 设置<p>转发到后端时是否保留Host</p>
                     * @param _preserveHost <p>转发到后端时是否保留Host</p>
                     * 
                     */
                    void SetPreserveHost(const bool& _preserveHost);

                    /**
                     * 判断参数 PreserveHost 是否已赋值
                     * @return PreserveHost 是否已赋值
                     * 
                     */
                    bool PreserveHostHasBeenSet() const;

                    /**
                     * 获取<p>https重定向状态码</p>
                     * @return HttpsRedirectStatusCode <p>https重定向状态码</p>
                     * 
                     */
                    int64_t GetHttpsRedirectStatusCode() const;

                    /**
                     * 设置<p>https重定向状态码</p>
                     * @param _httpsRedirectStatusCode <p>https重定向状态码</p>
                     * 
                     */
                    void SetHttpsRedirectStatusCode(const int64_t& _httpsRedirectStatusCode);

                    /**
                     * 判断参数 HttpsRedirectStatusCode 是否已赋值
                     * @return HttpsRedirectStatusCode 是否已赋值
                     * 
                     */
                    bool HttpsRedirectStatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>转发到后端时是否StripPath</p>
                     * @return StripPath <p>转发到后端时是否StripPath</p>
                     * 
                     */
                    bool GetStripPath() const;

                    /**
                     * 设置<p>转发到后端时是否StripPath</p>
                     * @param _stripPath <p>转发到后端时是否StripPath</p>
                     * 
                     */
                    void SetStripPath(const bool& _stripPath);

                    /**
                     * 判断参数 StripPath 是否已赋值
                     * @return StripPath 是否已赋值
                     * 
                     */
                    bool StripPathHasBeenSet() const;

                    /**
                     * 获取<p>是否开启强制HTTPS</p>
                     * @return ForceHttps <p>是否开启强制HTTPS</p>
                     * @deprecated
                     */
                    bool GetForceHttps() const;

                    /**
                     * 设置<p>是否开启强制HTTPS</p>
                     * @param _forceHttps <p>是否开启强制HTTPS</p>
                     * @deprecated
                     */
                    void SetForceHttps(const bool& _forceHttps);

                    /**
                     * 判断参数 ForceHttps 是否已赋值
                     * @return ForceHttps 是否已赋值
                     * @deprecated
                     */
                    bool ForceHttpsHasBeenSet() const;

                    /**
                     * 获取<p>四层匹配的目的端口</p>
                     * @return DestinationPorts <p>四层匹配的目的端口</p>
                     * 
                     */
                    std::vector<uint64_t> GetDestinationPorts() const;

                    /**
                     * 设置<p>四层匹配的目的端口</p>
                     * @param _destinationPorts <p>四层匹配的目的端口</p>
                     * 
                     */
                    void SetDestinationPorts(const std::vector<uint64_t>& _destinationPorts);

                    /**
                     * 判断参数 DestinationPorts 是否已赋值
                     * @return DestinationPorts 是否已赋值
                     * 
                     */
                    bool DestinationPortsHasBeenSet() const;

                    /**
                     * 获取<p>路由的Headers</p>
                     * @return Headers <p>路由的Headers</p>
                     * 
                     */
                    std::vector<KVMapping> GetHeaders() const;

                    /**
                     * 设置<p>路由的Headers</p>
                     * @param _headers <p>路由的Headers</p>
                     * 
                     */
                    void SetHeaders(const std::vector<KVMapping>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取<p>是否缓存请求body，默认true</p>
                     * @return RequestBuffering <p>是否缓存请求body，默认true</p>
                     * 
                     */
                    bool GetRequestBuffering() const;

                    /**
                     * 设置<p>是否缓存请求body，默认true</p>
                     * @param _requestBuffering <p>是否缓存请求body，默认true</p>
                     * 
                     */
                    void SetRequestBuffering(const bool& _requestBuffering);

                    /**
                     * 判断参数 RequestBuffering 是否已赋值
                     * @return RequestBuffering 是否已赋值
                     * 
                     */
                    bool RequestBufferingHasBeenSet() const;

                    /**
                     * 获取<p>是否缓存响应body，默认true</p>
                     * @return ResponseBuffering <p>是否缓存响应body，默认true</p>
                     * 
                     */
                    bool GetResponseBuffering() const;

                    /**
                     * 设置<p>是否缓存响应body，默认true</p>
                     * @param _responseBuffering <p>是否缓存响应body，默认true</p>
                     * 
                     */
                    void SetResponseBuffering(const bool& _responseBuffering);

                    /**
                     * 判断参数 ResponseBuffering 是否已赋值
                     * @return ResponseBuffering 是否已赋值
                     * 
                     */
                    bool ResponseBufferingHasBeenSet() const;

                    /**
                     * 获取<p>增加优先级</p>
                     * @return RegexPriority <p>增加优先级</p>
                     * 
                     */
                    int64_t GetRegexPriority() const;

                    /**
                     * 设置<p>增加优先级</p>
                     * @param _regexPriority <p>增加优先级</p>
                     * 
                     */
                    void SetRegexPriority(const int64_t& _regexPriority);

                    /**
                     * 判断参数 RegexPriority 是否已赋值
                     * @return RegexPriority 是否已赋值
                     * 
                     */
                    bool RegexPriorityHasBeenSet() const;

                    /**
                     * 获取<p>querysring参数</p>
                     * @return QueryStringParameters <p>querysring参数</p>
                     * 
                     */
                    std::vector<KVMapping> GetQueryStringParameters() const;

                    /**
                     * 设置<p>querysring参数</p>
                     * @param _queryStringParameters <p>querysring参数</p>
                     * 
                     */
                    void SetQueryStringParameters(const std::vector<KVMapping>& _queryStringParameters);

                    /**
                     * 判断参数 QueryStringParameters 是否已赋值
                     * @return QueryStringParameters 是否已赋值
                     * 
                     */
                    bool QueryStringParametersHasBeenSet() const;

                private:

                    /**
                     * <p>网关ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>所属服务的ID</p>
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * <p>路由的ID，实例级别唯一</p>
                     */
                    std::string m_routeID;
                    bool m_routeIDHasBeenSet;

                    /**
                     * <p>路由的名字，实例级别唯一，可以不提供</p>
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * <p>路由的方法，其中方法可选值：</p><ul><li>GET</li><li>POST</li><li>DELETE</li><li>PUT</li><li>OPTIONS</li><li>PATCH</li><li>HEAD</li><li>ANY</li><li>TRACE</li><li>COPY</li><li>MOVE</li><li>PROPFIND</li><li>PROPPATCH</li><li>MKCOL</li><li>LOCK</li><li>UNLOCK</li></ul>
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * <p>路由的域名</p>
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * <p>路由的路径</p>
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * <p>路由的协议，可选</p><ul><li>https</li><li>http</li></ul>
                     */
                    std::vector<std::string> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * <p>转发到后端时是否保留Host</p>
                     */
                    bool m_preserveHost;
                    bool m_preserveHostHasBeenSet;

                    /**
                     * <p>https重定向状态码</p>
                     */
                    int64_t m_httpsRedirectStatusCode;
                    bool m_httpsRedirectStatusCodeHasBeenSet;

                    /**
                     * <p>转发到后端时是否StripPath</p>
                     */
                    bool m_stripPath;
                    bool m_stripPathHasBeenSet;

                    /**
                     * <p>是否开启强制HTTPS</p>
                     */
                    bool m_forceHttps;
                    bool m_forceHttpsHasBeenSet;

                    /**
                     * <p>四层匹配的目的端口</p>
                     */
                    std::vector<uint64_t> m_destinationPorts;
                    bool m_destinationPortsHasBeenSet;

                    /**
                     * <p>路由的Headers</p>
                     */
                    std::vector<KVMapping> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>是否缓存请求body，默认true</p>
                     */
                    bool m_requestBuffering;
                    bool m_requestBufferingHasBeenSet;

                    /**
                     * <p>是否缓存响应body，默认true</p>
                     */
                    bool m_responseBuffering;
                    bool m_responseBufferingHasBeenSet;

                    /**
                     * <p>增加优先级</p>
                     */
                    int64_t m_regexPriority;
                    bool m_regexPriorityHasBeenSet;

                    /**
                     * <p>querysring参数</p>
                     */
                    std::vector<KVMapping> m_queryStringParameters;
                    bool m_queryStringParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTEREQUEST_H_
