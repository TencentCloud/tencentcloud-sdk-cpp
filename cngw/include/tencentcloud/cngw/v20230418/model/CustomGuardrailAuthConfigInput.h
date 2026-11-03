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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILAUTHCONFIGINPUT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILAUTHCONFIGINPUT_H_

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
                * 自定义安全护栏审核服务鉴权配置
                */
                class CustomGuardrailAuthConfigInput : public AbstractModel
                {
                public:
                    CustomGuardrailAuthConfigInput();
                    ~CustomGuardrailAuthConfigInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
                     * @return AuthType <p>审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
                     * @param _authType <p>审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
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
                     * 获取<p>AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
                     * @return HeaderName <p>AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置<p>AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
                     * @param _headerName <p>AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
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
                     * 获取<p>AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     * @return ApiKey <p>AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     * @param _apiKey <p>AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                private:

                    /**
                     * <p>审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * <p>AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILAUTHCONFIGINPUT_H_
