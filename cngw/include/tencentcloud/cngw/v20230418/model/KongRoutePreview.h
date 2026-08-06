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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_KONGROUTEPREVIEW_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_KONGROUTEPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/KVMapping.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 云原生网关路由信息
                */
                class KongRoutePreview : public AbstractModel
                {
                public:
                    KongRoutePreview();
                    ~KongRoutePreview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务ID</p>
                     * @return ID <p>服务ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _iD <p>服务ID</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>服务名字</p>
                     * @return Name <p>服务名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>服务名字</p>
                     * @param _name <p>服务名字</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>请求方法列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Methods <p>请求方法列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置<p>请求方法列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _methods <p>请求方法列表</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>路由Paths列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Paths <p>路由Paths列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置<p>路由Paths列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paths <p>路由Paths列表</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>路由Hosts列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hosts <p>路由Hosts列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置<p>路由Hosts列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hosts <p>路由Hosts列表</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>协议列表</p>
                     * @return Protocols <p>协议列表</p>
                     * 
                     */
                    std::vector<std::string> GetProtocols() const;

                    /**
                     * 设置<p>协议列表</p>
                     * @param _protocols <p>协议列表</p>
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
                     * 获取<p>是否保留Host头</p>
                     * @return PreserveHost <p>是否保留Host头</p>
                     * 
                     */
                    bool GetPreserveHost() const;

                    /**
                     * 设置<p>是否保留Host头</p>
                     * @param _preserveHost <p>是否保留Host头</p>
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
                     * 获取<p>HTTPS重定向状态码</p>
                     * @return HttpsRedirectStatusCode <p>HTTPS重定向状态码</p>
                     * 
                     */
                    int64_t GetHttpsRedirectStatusCode() const;

                    /**
                     * 设置<p>HTTPS重定向状态码</p>
                     * @param _httpsRedirectStatusCode <p>HTTPS重定向状态码</p>
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
                     * 获取<p>是否去除路径前缀</p>
                     * @return StripPath <p>是否去除路径前缀</p>
                     * 
                     */
                    bool GetStripPath() const;

                    /**
                     * 设置<p>是否去除路径前缀</p>
                     * @param _stripPath <p>是否去除路径前缀</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>强制转换 https</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceHttps <p>强制转换 https</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    bool GetForceHttps() const;

                    /**
                     * 设置<p>强制转换 https</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceHttps <p>强制转换 https</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>服务名</p>
                     * @return ServiceName <p>服务名</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名</p>
                     * @param _serviceName <p>服务名</p>
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>服务ID</p>
                     * @return ServiceID <p>服务ID</p>
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _serviceID <p>服务ID</p>
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
                     * 获取<p>目的端口</p>
                     * @return DestinationPorts <p>目的端口</p>
                     * 
                     */
                    std::vector<uint64_t> GetDestinationPorts() const;

                    /**
                     * 设置<p>目的端口</p>
                     * @param _destinationPorts <p>目的端口</p>
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
                     * 获取<p>headers</p>
                     * @return Headers <p>headers</p>
                     * 
                     */
                    std::vector<KVMapping> GetHeaders() const;

                    /**
                     * 设置<p>headers</p>
                     * @param _headers <p>headers</p>
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
                     * 获取<p>正则优先级</p>
                     * @return RegexPriority <p>正则优先级</p>
                     * 
                     */
                    int64_t GetRegexPriority() const;

                    /**
                     * 设置<p>正则优先级</p>
                     * @param _regexPriority <p>正则优先级</p>
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
                     * 获取<p>querystring参数</p>
                     * @return QueryStringParameters <p>querystring参数</p>
                     * 
                     */
                    std::vector<KVMapping> GetQueryStringParameters() const;

                    /**
                     * 设置<p>querystring参数</p>
                     * @param _queryStringParameters <p>querystring参数</p>
                     * 
                     */
                    void SetQueryStringParameters(const std::vector<KVMapping>& _queryStringParameters);

                    /**
                     * 判断参数 QueryStringParameters 是否已赋值
                     * @return QueryStringParameters 是否已赋值
                     * 
                     */
                    bool QueryStringParametersHasBeenSet() const;

                    /**
                     * 获取<p>路由来源</p>
                     * @return RouteSource <p>路由来源</p>
                     * 
                     */
                    std::string GetRouteSource() const;

                    /**
                     * 设置<p>路由来源</p>
                     * @param _routeSource <p>路由来源</p>
                     * 
                     */
                    void SetRouteSource(const std::string& _routeSource);

                    /**
                     * 判断参数 RouteSource 是否已赋值
                     * @return RouteSource 是否已赋值
                     * 
                     */
                    bool RouteSourceHasBeenSet() const;

                private:

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>服务名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>请求方法列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * <p>路由Paths列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * <p>路由Hosts列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * <p>协议列表</p>
                     */
                    std::vector<std::string> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * <p>是否保留Host头</p>
                     */
                    bool m_preserveHost;
                    bool m_preserveHostHasBeenSet;

                    /**
                     * <p>HTTPS重定向状态码</p>
                     */
                    int64_t m_httpsRedirectStatusCode;
                    bool m_httpsRedirectStatusCodeHasBeenSet;

                    /**
                     * <p>是否去除路径前缀</p>
                     */
                    bool m_stripPath;
                    bool m_stripPathHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>强制转换 https</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_forceHttps;
                    bool m_forceHttpsHasBeenSet;

                    /**
                     * <p>服务名</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * <p>目的端口</p>
                     */
                    std::vector<uint64_t> m_destinationPorts;
                    bool m_destinationPortsHasBeenSet;

                    /**
                     * <p>headers</p>
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
                     * <p>正则优先级</p>
                     */
                    int64_t m_regexPriority;
                    bool m_regexPriorityHasBeenSet;

                    /**
                     * <p>querystring参数</p>
                     */
                    std::vector<KVMapping> m_queryStringParameters;
                    bool m_queryStringParametersHasBeenSet;

                    /**
                     * <p>路由来源</p>
                     */
                    std::string m_routeSource;
                    bool m_routeSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_KONGROUTEPREVIEW_H_
