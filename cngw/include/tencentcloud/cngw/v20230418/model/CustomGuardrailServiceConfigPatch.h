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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILSERVICECONFIGPATCH_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILSERVICECONFIGPATCH_H_

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
                * 局部更新配置。只更新显式提供字段；未传字段保留。条件必填按合并后的完整策略校验，不会要求每次重传全部配置。
                */
                class CustomGuardrailServiceConfigPatch : public AbstractModel
                {
                public:
                    CustomGuardrailServiceConfigPatch();
                    ~CustomGuardrailServiceConfigPatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核服务地址来源，必须显式选择 service（已有服务）或 manual（手动 URL）；不得省略、为空或 null。service 时 ServiceId 必填，manual 时 Endpoint 必填，两种地址互斥。</p>
                     * @return AddressMode <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核服务地址来源，必须显式选择 service（已有服务）或 manual（手动 URL）；不得省略、为空或 null。service 时 ServiceId 必填，manual 时 Endpoint 必填，两种地址互斥。</p>
                     * 
                     */
                    std::string GetAddressMode() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核服务地址来源，必须显式选择 service（已有服务）或 manual（手动 URL）；不得省略、为空或 null。service 时 ServiceId 必填，manual 时 Endpoint 必填，两种地址互斥。</p>
                     * @param _addressMode <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核服务地址来源，必须显式选择 service（已有服务）或 manual（手动 URL）；不得省略、为空或 null。service 时 ServiceId 必填，manual 时 Endpoint 必填，两种地址互斥。</p>
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
                     * 获取<p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p><p>修改时省略本字段保留原值。</p>
                     * @return ServiceId <p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p><p>修改时省略本字段保留原值。</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p><p>修改时省略本字段保留原值。</p>
                     * @param _serviceId <p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p><p>修改时省略本字段保留原值。</p>
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
                     * 获取<p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p><p>修改时省略本字段保留原值。</p>
                     * @return Endpoint <p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p><p>修改时省略本字段保留原值。</p>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p><p>修改时省略本字段保留原值。</p>
                     * @param _endpoint <p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p><p>修改时省略本字段保留原值。</p>
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
                     * 获取<p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSLVerify <p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSSLVerify() const;

                    /**
                     * 设置<p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSLVerify <p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryPassthroughEnabled <p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetQueryPassthroughEnabled() const;

                    /**
                     * 设置<p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryPassthroughEnabled <p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderAllowList <p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHeaderAllowList() const;

                    /**
                     * 设置<p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headerAllowList <p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核服务地址来源，必须显式选择 service（已有服务）或 manual（手动 URL）；不得省略、为空或 null。service 时 ServiceId 必填，manual 时 Endpoint 必填，两种地址互斥。</p>
                     */
                    std::string m_addressMode;
                    bool m_addressModeHasBeenSet;

                    /**
                     * <p>AddressMode=service 时必填。填写审核引擎对应的 Kong Service ID，不是被审核的模型 API、MCP Server 或 Agent API ID。按该服务的 protocol、host、port、path 拼出审核 URL；直接请求该 URL，不是经过该服务的网关 Route，也不会自动继承其 Route 插件或业务鉴权。manual 模式不得填写。</p><p>修改时省略本字段保留原值。</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>AddressMode=manual 时必填，审核引擎接受 POST 的 HTTP/HTTPS 完整 URL，例如 https://audit.example.com/v2/audit；路径以实际引擎为准，不会自动补 /v2/audit。service 模式不得填写。请填写 URL 原文，不要粘贴 Markdown 链接。</p><p>修改时省略本字段保留原值。</p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>是否校验审核引擎 HTTPS 证书，创建默认 true；仅影响审核 HTTP 调用，不是客户端访问网关的 TLS 设置。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sSLVerify;
                    bool m_sSLVerifyHasBeenSet;

                    /**
                     * <p>是否把原业务请求的完整 Query 字符串写入送审包，创建默认 false。开启可能把 Query 中的凭据或个人信息传给审核服务，须确认接收方可信；不是审核服务 URL 自身的 Query 开关。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_queryPassthroughEnabled;
                    bool m_queryPassthroughEnabledHasBeenSet;

                    /**
                     * <p>允许额外写入送审包的原始 HTTP Header 名称，最多 64 项，每项最长 128 字节；名称不区分大小写，默认 []。内置保留 content-type、accept、mcp-protocol-version、a2a-version；Authorization、Cookie、API Key、MCP 会话标识和内部 Relay 等受限头不会因加入本列表而放行。审核服务自身的鉴权请使用 AuthConfig。</p><p>修改时省略本字段保留原值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_headerAllowList;
                    bool m_headerAllowListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILSERVICECONFIGPATCH_H_
