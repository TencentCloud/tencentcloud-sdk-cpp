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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILAUTHCONFIGPATCH_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILAUTHCONFIGPATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 局部更新配置。只更新显式提供字段；未传字段保留。条件必填按合并后的完整策略校验，不会要求每次重传全部配置。
                */
                class CustomGuardrailAuthConfigPatch : public AbstractModel
                {
                public:
                    CustomGuardrailAuthConfigPatch();
                    ~CustomGuardrailAuthConfigPatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
                     * @return AuthType <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
                     * @param _authType <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
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
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
                     * @return HeaderName <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
                     * @param _headerName <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
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
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     * @return ApiKey <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     * @param _apiKey <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取<p>true 表示清除已保存密钥，不能与 ApiKey 同时传入。仅传 ClearApiKey=true 时同时切换为 none 并清空鉴权 Header；也可通过 AuthType=none 清除既有密钥。</p><p>修改时省略本字段保留原值。</p>
                     * @return ClearApiKey <p>true 表示清除已保存密钥，不能与 ApiKey 同时传入。仅传 ClearApiKey=true 时同时切换为 none 并清空鉴权 Header；也可通过 AuthType=none 清除既有密钥。</p><p>修改时省略本字段保留原值。</p>
                     * 
                     */
                    bool GetClearApiKey() const;

                    /**
                     * 设置<p>true 表示清除已保存密钥，不能与 ApiKey 同时传入。仅传 ClearApiKey=true 时同时切换为 none 并清空鉴权 Header；也可通过 AuthType=none 清除既有密钥。</p><p>修改时省略本字段保留原值。</p>
                     * @param _clearApiKey <p>true 表示清除已保存密钥，不能与 ApiKey 同时传入。仅传 ClearApiKey=true 时同时切换为 none 并清空鉴权 Header；也可通过 AuthType=none 清除既有密钥。</p><p>修改时省略本字段保留原值。</p>
                     * 
                     */
                    void SetClearApiKey(const bool& _clearApiKey);

                    /**
                     * 判断参数 ClearApiKey 是否已赋值
                     * @return ClearApiKey 是否已赋值
                     * 
                     */
                    bool ClearApiKeyHasBeenSet() const;

                private:

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。审核引擎鉴权方式，必须显式选择 none（无鉴权）或 api_key（Header 密钥）；无鉴权也必须填写 none，不再自动补齐。api_key 时 HeaderName 和 ApiKey 必填；与客户端访问网关的鉴权独立。</p>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填的有效 HTTP Header 名，例如 X-Audit-Key 或 Authorization；禁止协议保留头。AuthType=none 时不得填写。</p>
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。AuthType=api_key 时必填，作为 Header 完整值原样发送；如需 Bearer，调用方自行填写前缀。修改时省略可沿用已保存密钥；不能用 HasApiKey 代替真实密钥。</p>
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * <p>true 表示清除已保存密钥，不能与 ApiKey 同时传入。仅传 ClearApiKey=true 时同时切换为 none 并清空鉴权 Header；也可通过 AuthType=none 清除既有密钥。</p><p>修改时省略本字段保留原值。</p>
                     */
                    bool m_clearApiKey;
                    bool m_clearApiKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILAUTHCONFIGPATCH_H_
