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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILSERVICECONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILSERVICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 自定义安全护栏审核服务配置
                */
                class CustomGuardrailServiceConfig : public AbstractModel
                {
                public:
                    CustomGuardrailServiceConfig();
                    ~CustomGuardrailServiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>审核服务地址来源：manual 手动填写完整 URL，service 引用本网关服务管理中的 Kong Service。二者互斥；创建时按接口要求显式传入。</p>
                     * @return AddressMode <p>审核服务地址来源：manual 手动填写完整 URL，service 引用本网关服务管理中的 Kong Service。二者互斥；创建时按接口要求显式传入。</p>
                     * 
                     */
                    std::string GetAddressMode() const;

                    /**
                     * 设置<p>审核服务地址来源：manual 手动填写完整 URL，service 引用本网关服务管理中的 Kong Service。二者互斥；创建时按接口要求显式传入。</p>
                     * @param _addressMode <p>审核服务地址来源：manual 手动填写完整 URL，service 引用本网关服务管理中的 Kong Service。二者互斥；创建时按接口要求显式传入。</p>
                     * 
                     */
                    void SetAddressMode(const std::string& _addressMode);

                    /**
                     * 判断参数 AddressMode 是否已赋值
                     * @return AddressMode 是否已赋值
                     * 
                     */
                    bool AddressModeHasBeenSet() const;

                    /**
                     * 获取<p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p>
                     * @return ServiceId <p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p>
                     * @param _serviceId <p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p>
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
                     * 获取<p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p>
                     * @return Endpoint <p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p>
                     * @param _endpoint <p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p>
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取<p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p>
                     * @return SSLVerify <p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p>
                     * 
                     */
                    bool GetSSLVerify() const;

                    /**
                     * 设置<p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p>
                     * @param _sSLVerify <p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p>
                     * 
                     */
                    void SetSSLVerify(const bool& _sSLVerify);

                    /**
                     * 判断参数 SSLVerify 是否已赋值
                     * @return SSLVerify 是否已赋值
                     * 
                     */
                    bool SSLVerifyHasBeenSet() const;

                    /**
                     * 获取<p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p>
                     * @return QueryPassthroughEnabled <p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p>
                     * 
                     */
                    bool GetQueryPassthroughEnabled() const;

                    /**
                     * 设置<p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p>
                     * @param _queryPassthroughEnabled <p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p>
                     * 
                     */
                    void SetQueryPassthroughEnabled(const bool& _queryPassthroughEnabled);

                    /**
                     * 判断参数 QueryPassthroughEnabled 是否已赋值
                     * @return QueryPassthroughEnabled 是否已赋值
                     * 
                     */
                    bool QueryPassthroughEnabledHasBeenSet() const;

                    /**
                     * 获取<p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p>
                     * @return HeaderAllowList <p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p>
                     * 
                     */
                    std::vector<std::string> GetHeaderAllowList() const;

                    /**
                     * 设置<p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p>
                     * @param _headerAllowList <p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p>
                     * 
                     */
                    void SetHeaderAllowList(const std::vector<std::string>& _headerAllowList);

                    /**
                     * 判断参数 HeaderAllowList 是否已赋值
                     * @return HeaderAllowList 是否已赋值
                     * 
                     */
                    bool HeaderAllowListHasBeenSet() const;

                private:

                    /**
                     * <p>审核服务地址来源：manual 手动填写完整 URL，service 引用本网关服务管理中的 Kong Service。二者互斥；创建时按接口要求显式传入。</p>
                     */
                    std::string m_addressMode;
                    bool m_addressModeHasBeenSet;

                    /**
                     * <p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p>
                     */
                    bool m_sSLVerify;
                    bool m_sSLVerifyHasBeenSet;

                    /**
                     * <p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p>
                     */
                    bool m_queryPassthroughEnabled;
                    bool m_queryPassthroughEnabledHasBeenSet;

                    /**
                     * <p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p>
                     */
                    std::vector<std::string> m_headerAllowList;
                    bool m_headerAllowListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILSERVICECONFIG_H_
