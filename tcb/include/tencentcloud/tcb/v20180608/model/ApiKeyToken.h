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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_APIKEYTOKEN_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_APIKEYTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * API Key 访问凭证信息。描述云开发环境下 API Key 的完整信息，包括标识符、名称、令牌值、创建时间和过期时间。支持两种类型：api_key（服务端管理员访问凭证，用于服务端接口调用的身份认证，可设置有效期，单个环境最多 5 个）和 publish_key（前端匿名访问凭证，固定有效期，每个环境仅保留一个）。注意：令牌值（ApiKey 字段）仅在创建时返回完整明文，列表查询时将进行脱敏处理。
                */
                class ApiKeyToken : public AbstractModel
                {
                public:
                    ApiKeyToken();
                    ~ApiKeyToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API Key 的唯一标识符，由系统基于 UUID 自动生成的 Base64 URL 编码字符串。后续对该 API Key 进行删除、修改名称或精确查询操作时，均需使用该值作为定位参数
                     * @return KeyId API Key 的唯一标识符，由系统基于 UUID 自动生成的 Base64 URL 编码字符串。后续对该 API Key 进行删除、修改名称或精确查询操作时，均需使用该值作为定位参数
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置API Key 的唯一标识符，由系统基于 UUID 自动生成的 Base64 URL 编码字符串。后续对该 API Key 进行删除、修改名称或精确查询操作时，均需使用该值作为定位参数
                     * @param _keyId API Key 的唯一标识符，由系统基于 UUID 自动生成的 Base64 URL 编码字符串。后续对该 API Key 进行删除、修改名称或精确查询操作时，均需使用该值作为定位参数
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取API Key 的名称，即创建时传入的 KeyName 参数值。对于 publish_key 类型，该值固定为 publish_key
                     * @return Name API Key 的名称，即创建时传入的 KeyName 参数值。对于 publish_key 类型，该值固定为 publish_key
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API Key 的名称，即创建时传入的 KeyName 参数值。对于 publish_key 类型，该值固定为 publish_key
                     * @param _name API Key 的名称，即创建时传入的 KeyName 参数值。对于 publish_key 类型，该值固定为 publish_key
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
                     * 获取API Key 的令牌值（JWT 格式），用于服务端接口调用时的身份认证。出于安全考虑，仅在创建时返回一次完整明文；后续通过列表查询接口获取时，api_key 类型将进行脱敏处理；publish_key 类型始终返回完整明文。请在创建后妥善保存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiKey API Key 的令牌值（JWT 格式），用于服务端接口调用时的身份认证。出于安全考虑，仅在创建时返回一次完整明文；后续通过列表查询接口获取时，api_key 类型将进行脱敏处理；publish_key 类型始终返回完整明文。请在创建后妥善保存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置API Key 的令牌值（JWT 格式），用于服务端接口调用时的身份认证。出于安全考虑，仅在创建时返回一次完整明文；后续通过列表查询接口获取时，api_key 类型将进行脱敏处理；publish_key 类型始终返回完整明文。请在创建后妥善保存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiKey API Key 的令牌值（JWT 格式），用于服务端接口调用时的身份认证。出于安全考虑，仅在创建时返回一次完整明文；后续通过列表查询接口获取时，api_key 类型将进行脱敏处理；publish_key 类型始终返回完整明文。请在创建后妥善保存
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API Key 的过期时间，格式遵循 ISO 8601 标准。对于 api_key 类型：若创建时未指定有效期（ExpireIn），则该字段不返回，表示永不过期；若指定了有效期，则返回具体的过期时间。对于 publish_key 类型：始终返回，固定为约 2099 年
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireAt API Key 的过期时间，格式遵循 ISO 8601 标准。对于 api_key 类型：若创建时未指定有效期（ExpireIn），则该字段不返回，表示永不过期；若指定了有效期，则返回具体的过期时间。对于 publish_key 类型：始终返回，固定为约 2099 年
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireAt() const;

                    /**
                     * 设置API Key 的过期时间，格式遵循 ISO 8601 标准。对于 api_key 类型：若创建时未指定有效期（ExpireIn），则该字段不返回，表示永不过期；若指定了有效期，则返回具体的过期时间。对于 publish_key 类型：始终返回，固定为约 2099 年
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireAt API Key 的过期时间，格式遵循 ISO 8601 标准。对于 api_key 类型：若创建时未指定有效期（ExpireIn），则该字段不返回，表示永不过期；若指定了有效期，则返回具体的过期时间。对于 publish_key 类型：始终返回，固定为约 2099 年
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireAt(const std::string& _expireAt);

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                    /**
                     * 获取API Key 的创建时间，格式遵循 ISO 8601 标准。对于 api_key 类型：为该 Key 实际创建时的时间。对于 publish_key 类型：若环境下已存在 publish_key 记录，则返回首次创建的时间而非本次调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateAt API Key 的创建时间，格式遵循 ISO 8601 标准。对于 api_key 类型：为该 Key 实际创建时的时间。对于 publish_key 类型：若环境下已存在 publish_key 记录，则返回首次创建的时间而非本次调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置API Key 的创建时间，格式遵循 ISO 8601 标准。对于 api_key 类型：为该 Key 实际创建时的时间。对于 publish_key 类型：若环境下已存在 publish_key 记录，则返回首次创建的时间而非本次调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createAt API Key 的创建时间，格式遵循 ISO 8601 标准。对于 api_key 类型：为该 Key 实际创建时的时间。对于 publish_key 类型：若环境下已存在 publish_key 记录，则返回首次创建的时间而非本次调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                private:

                    /**
                     * API Key 的唯一标识符，由系统基于 UUID 自动生成的 Base64 URL 编码字符串。后续对该 API Key 进行删除、修改名称或精确查询操作时，均需使用该值作为定位参数
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * API Key 的名称，即创建时传入的 KeyName 参数值。对于 publish_key 类型，该值固定为 publish_key
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * API Key 的令牌值（JWT 格式），用于服务端接口调用时的身份认证。出于安全考虑，仅在创建时返回一次完整明文；后续通过列表查询接口获取时，api_key 类型将进行脱敏处理；publish_key 类型始终返回完整明文。请在创建后妥善保存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * API Key 的过期时间，格式遵循 ISO 8601 标准。对于 api_key 类型：若创建时未指定有效期（ExpireIn），则该字段不返回，表示永不过期；若指定了有效期，则返回具体的过期时间。对于 publish_key 类型：始终返回，固定为约 2099 年
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * API Key 的创建时间，格式遵循 ISO 8601 标准。对于 api_key 类型：为该 Key 实际创建时的时间。对于 publish_key 类型：若环境下已存在 publish_key 记录，则返回首次创建的时间而非本次调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_APIKEYTOKEN_H_
