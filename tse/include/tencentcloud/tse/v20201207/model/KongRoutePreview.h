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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGROUTEPREVIEW_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGROUTEPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                     * 获取服务ID
                     * @return ID 服务ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置服务ID
                     * @param _iD 服务ID
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
                     * 获取服务名字
                     * @return Name 服务名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名字
                     * @param _name 服务名字
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
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Methods 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _methods 无
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
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Paths 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paths 无
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
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hosts 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hosts 无
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
                     * 获取无
                     * @return Protocols 无
                     * 
                     */
                    std::vector<std::string> GetProtocols() const;

                    /**
                     * 设置无
                     * @param _protocols 无
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
                     * 获取无
                     * @return PreserveHost 无
                     * 
                     */
                    bool GetPreserveHost() const;

                    /**
                     * 设置无
                     * @param _preserveHost 无
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
                     * 获取无
                     * @return HttpsRedirectStatusCode 无
                     * 
                     */
                    int64_t GetHttpsRedirectStatusCode() const;

                    /**
                     * 设置无
                     * @param _httpsRedirectStatusCode 无
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
                     * 获取无
                     * @return StripPath 无
                     * 
                     */
                    bool GetStripPath() const;

                    /**
                     * 设置无
                     * @param _stripPath 无
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
                     * 获取无
                     * @return CreatedTime 无
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置无
                     * @param _createdTime 无
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
                     * 获取是否开启了强制HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceHttps 是否开启了强制HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    bool GetForceHttps() const;

                    /**
                     * 设置是否开启了强制HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceHttps 是否开启了强制HTTPS
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
                     * 获取服务名
                     * @return ServiceName 服务名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名
                     * @param _serviceName 服务名
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
                     * 获取服务ID
                     * @return ServiceID 服务ID
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置服务ID
                     * @param _serviceID 服务ID
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
                     * 获取目的端口
                     * @return DestinationPorts 目的端口
                     * 
                     */
                    std::vector<uint64_t> GetDestinationPorts() const;

                    /**
                     * 设置目的端口
                     * @param _destinationPorts 目的端口
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
                     * 获取正则优先级
                     * @return RegexPriority 正则优先级
                     * 
                     */
                    int64_t GetRegexPriority() const;

                    /**
                     * 设置正则优先级
                     * @param _regexPriority 正则优先级
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
                     * 服务ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 服务名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * 无
                     */
                    bool m_preserveHost;
                    bool m_preserveHostHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_httpsRedirectStatusCode;
                    bool m_httpsRedirectStatusCodeHasBeenSet;

                    /**
                     * 无
                     */
                    bool m_stripPath;
                    bool m_stripPathHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 是否开启了强制HTTPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_forceHttps;
                    bool m_forceHttpsHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 服务ID
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * 目的端口
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
                     * 正则优先级
                     */
                    int64_t m_regexPriority;
                    bool m_regexPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGROUTEPREVIEW_H_
