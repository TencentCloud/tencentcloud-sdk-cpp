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
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
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
                     * 获取所属服务的ID
                     * @return ServiceID 所属服务的ID
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置所属服务的ID
                     * @param _serviceID 所属服务的ID
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
                     * 获取路由的ID，实例级别唯一
                     * @return RouteID 路由的ID，实例级别唯一
                     * 
                     */
                    std::string GetRouteID() const;

                    /**
                     * 设置路由的ID，实例级别唯一
                     * @param _routeID 路由的ID，实例级别唯一
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
                     * 获取路由的名字，实例级别唯一，可以不提供
                     * @return RouteName 路由的名字，实例级别唯一，可以不提供
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置路由的名字，实例级别唯一，可以不提供
                     * @param _routeName 路由的名字，实例级别唯一，可以不提供
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
                     * 获取路由的方法，其中方法可选值：
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
                     * @return Methods 路由的方法，其中方法可选值：
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置路由的方法，其中方法可选值：
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
                     * @param _methods 路由的方法，其中方法可选值：
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
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
                     * 获取路由的域名
                     * @return Hosts 路由的域名
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置路由的域名
                     * @param _hosts 路由的域名
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
                     * 获取路由的路径
                     * @return Paths 路由的路径
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置路由的路径
                     * @param _paths 路由的路径
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
                     * 获取路由的协议，可选
- https
- http
                     * @return Protocols 路由的协议，可选
- https
- http
                     * 
                     */
                    std::vector<std::string> GetProtocols() const;

                    /**
                     * 设置路由的协议，可选
- https
- http
                     * @param _protocols 路由的协议，可选
- https
- http
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
                     * 获取转发到后端时是否保留Host
                     * @return PreserveHost 转发到后端时是否保留Host
                     * 
                     */
                    bool GetPreserveHost() const;

                    /**
                     * 设置转发到后端时是否保留Host
                     * @param _preserveHost 转发到后端时是否保留Host
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
                     * 获取https重定向状态码
                     * @return HttpsRedirectStatusCode https重定向状态码
                     * 
                     */
                    int64_t GetHttpsRedirectStatusCode() const;

                    /**
                     * 设置https重定向状态码
                     * @param _httpsRedirectStatusCode https重定向状态码
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
                     * 获取转发到后端时是否StripPath
                     * @return StripPath 转发到后端时是否StripPath
                     * 
                     */
                    bool GetStripPath() const;

                    /**
                     * 设置转发到后端时是否StripPath
                     * @param _stripPath 转发到后端时是否StripPath
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
                     * 获取是否开启强制HTTPS
                     * @return ForceHttps 是否开启强制HTTPS
                     * @deprecated
                     */
                    bool GetForceHttps() const;

                    /**
                     * 设置是否开启强制HTTPS
                     * @param _forceHttps 是否开启强制HTTPS
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
                     * 获取四层匹配的目的端口	
                     * @return DestinationPorts 四层匹配的目的端口	
                     * 
                     */
                    std::vector<uint64_t> GetDestinationPorts() const;

                    /**
                     * 设置四层匹配的目的端口	
                     * @param _destinationPorts 四层匹配的目的端口	
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
                     * 获取路由的Headers
                     * @return Headers 路由的Headers
                     * 
                     */
                    std::vector<KVMapping> GetHeaders() const;

                    /**
                     * 设置路由的Headers
                     * @param _headers 路由的Headers
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
                     * 获取是否缓存请求body，默认true
                     * @return RequestBuffering 是否缓存请求body，默认true
                     * 
                     */
                    bool GetRequestBuffering() const;

                    /**
                     * 设置是否缓存请求body，默认true
                     * @param _requestBuffering 是否缓存请求body，默认true
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
                     * 获取是否缓存响应body，默认true
                     * @return ResponseBuffering 是否缓存响应body，默认true
                     * 
                     */
                    bool GetResponseBuffering() const;

                    /**
                     * 设置是否缓存响应body，默认true
                     * @param _responseBuffering 是否缓存响应body，默认true
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
                     * 获取增加优先级
                     * @return RegexPriority 增加优先级
                     * 
                     */
                    int64_t GetRegexPriority() const;

                    /**
                     * 设置增加优先级
                     * @param _regexPriority 增加优先级
                     * 
                     */
                    void SetRegexPriority(const int64_t& _regexPriority);

                    /**
                     * 判断参数 RegexPriority 是否已赋值
                     * @return RegexPriority 是否已赋值
                     * 
                     */
                    bool RegexPriorityHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 所属服务的ID
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * 路由的ID，实例级别唯一
                     */
                    std::string m_routeID;
                    bool m_routeIDHasBeenSet;

                    /**
                     * 路由的名字，实例级别唯一，可以不提供
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * 路由的方法，其中方法可选值：
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * 路由的域名
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 路由的路径
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * 路由的协议，可选
- https
- http
                     */
                    std::vector<std::string> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * 转发到后端时是否保留Host
                     */
                    bool m_preserveHost;
                    bool m_preserveHostHasBeenSet;

                    /**
                     * https重定向状态码
                     */
                    int64_t m_httpsRedirectStatusCode;
                    bool m_httpsRedirectStatusCodeHasBeenSet;

                    /**
                     * 转发到后端时是否StripPath
                     */
                    bool m_stripPath;
                    bool m_stripPathHasBeenSet;

                    /**
                     * 是否开启强制HTTPS
                     */
                    bool m_forceHttps;
                    bool m_forceHttpsHasBeenSet;

                    /**
                     * 四层匹配的目的端口	
                     */
                    std::vector<uint64_t> m_destinationPorts;
                    bool m_destinationPortsHasBeenSet;

                    /**
                     * 路由的Headers
                     */
                    std::vector<KVMapping> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 是否缓存请求body，默认true
                     */
                    bool m_requestBuffering;
                    bool m_requestBufferingHasBeenSet;

                    /**
                     * 是否缓存响应body，默认true
                     */
                    bool m_responseBuffering;
                    bool m_responseBufferingHasBeenSet;

                    /**
                     * 增加优先级
                     */
                    int64_t m_regexPriority;
                    bool m_regexPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTEREQUEST_H_
