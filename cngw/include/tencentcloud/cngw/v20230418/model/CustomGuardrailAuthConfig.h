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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILAUTHCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILAUTHCONFIG_H_

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
                * 自定义安全护栏鉴权配置；不返回 API Key 明文
                */
                class CustomGuardrailAuthConfig : public AbstractModel
                {
                public:
                    CustomGuardrailAuthConfig();
                    ~CustomGuardrailAuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网关访问审核引擎的鉴权方式：none 无鉴权（创建默认值）；api_key 在指定 HTTP Header 中发送凭据。与客户端访问 AI 网关时使用的鉴权相互独立。none 模式不应携带 HeaderName 或 ApiKey。</p>
                     * @return AuthType <p>网关访问审核引擎的鉴权方式：none 无鉴权（创建默认值）；api_key 在指定 HTTP Header 中发送凭据。与客户端访问 AI 网关时使用的鉴权相互独立。none 模式不应携带 HeaderName 或 ApiKey。</p>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>网关访问审核引擎的鉴权方式：none 无鉴权（创建默认值）；api_key 在指定 HTTP Header 中发送凭据。与客户端访问 AI 网关时使用的鉴权相互独立。none 模式不应携带 HeaderName 或 ApiKey。</p>
                     * @param _authType <p>网关访问审核引擎的鉴权方式：none 无鉴权（创建默认值）；api_key 在指定 HTTP Header 中发送凭据。与客户端访问 AI 网关时使用的鉴权相互独立。none 模式不应携带 HeaderName 或 ApiKey。</p>
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>api_key 模式的鉴权 Header 名，例如 X-Audit-Key 或 Authorization。需为有效 Header 名；不能使用 Content-Type、Accept 或 x-cngw-audit- 前缀的保留名称。不建议使用 Host、Content-Length 等会影响 HTTP 协议语义的头。</p>
                     * @return HeaderName <p>api_key 模式的鉴权 Header 名，例如 X-Audit-Key 或 Authorization。需为有效 Header 名；不能使用 Content-Type、Accept 或 x-cngw-audit- 前缀的保留名称。不建议使用 Host、Content-Length 等会影响 HTTP 协议语义的头。</p>
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置<p>api_key 模式的鉴权 Header 名，例如 X-Audit-Key 或 Authorization。需为有效 Header 名；不能使用 Content-Type、Accept 或 x-cngw-audit- 前缀的保留名称。不建议使用 Host、Content-Length 等会影响 HTTP 协议语义的头。</p>
                     * @param _headerName <p>api_key 模式的鉴权 Header 名，例如 X-Audit-Key 或 Authorization。需为有效 Header 名；不能使用 Content-Type、Accept 或 x-cngw-audit- 前缀的保留名称。不建议使用 Host、Content-Length 等会影响 HTTP 协议语义的头。</p>
                     * 
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     * 
                     */
                    bool HeaderNameHasBeenSet() const;

                    /**
                     * 获取<p>只读：是否已保存审核引擎鉴权密钥。不会返回密钥本身；修改时无需回传此字段。</p>
                     * @return HasApiKey <p>只读：是否已保存审核引擎鉴权密钥。不会返回密钥本身；修改时无需回传此字段。</p>
                     * 
                     */
                    bool GetHasApiKey() const;

                    /**
                     * 设置<p>只读：是否已保存审核引擎鉴权密钥。不会返回密钥本身；修改时无需回传此字段。</p>
                     * @param _hasApiKey <p>只读：是否已保存审核引擎鉴权密钥。不会返回密钥本身；修改时无需回传此字段。</p>
                     * 
                     */
                    void SetHasApiKey(const bool& _hasApiKey);

                    /**
                     * 判断参数 HasApiKey 是否已赋值
                     * @return HasApiKey 是否已赋值
                     * 
                     */
                    bool HasApiKeyHasBeenSet() const;

                private:

                    /**
                     * <p>网关访问审核引擎的鉴权方式：none 无鉴权（创建默认值）；api_key 在指定 HTTP Header 中发送凭据。与客户端访问 AI 网关时使用的鉴权相互独立。none 模式不应携带 HeaderName 或 ApiKey。</p>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>api_key 模式的鉴权 Header 名，例如 X-Audit-Key 或 Authorization。需为有效 Header 名；不能使用 Content-Type、Accept 或 x-cngw-audit- 前缀的保留名称。不建议使用 Host、Content-Length 等会影响 HTTP 协议语义的头。</p>
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * <p>只读：是否已保存审核引擎鉴权密钥。不会返回密钥本身；修改时无需回传此字段。</p>
                     */
                    bool m_hasApiKey;
                    bool m_hasApiKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILAUTHCONFIG_H_
