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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_JWTCONFIG_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_JWTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/SecretInfo.h>
#include <tencentcloud/waf/v20180125/model/TokenRuleEntry.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 当用户选择JWS/JWE会话管理方式的时候，上传的配置信息以及校验规则
                */
                class JWTConfig : public AbstractModel
                {
                public:
                    JWTConfig();
                    ~JWTConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥信息
                     * @return SecretInfo 密钥信息
                     * 
                     */
                    SecretInfo GetSecretInfo() const;

                    /**
                     * 设置密钥信息
                     * @param _secretInfo 密钥信息
                     * 
                     */
                    void SetSecretInfo(const SecretInfo& _secretInfo);

                    /**
                     * 判断参数 SecretInfo 是否已赋值
                     * @return SecretInfo 是否已赋值
                     * 
                     */
                    bool SecretInfoHasBeenSet() const;

                    /**
                     * 获取Payload校验规则集合
                     * @return PayloadRule Payload校验规则集合
                     * 
                     */
                    std::vector<TokenRuleEntry> GetPayloadRule() const;

                    /**
                     * 设置Payload校验规则集合
                     * @param _payloadRule Payload校验规则集合
                     * 
                     */
                    void SetPayloadRule(const std::vector<TokenRuleEntry>& _payloadRule);

                    /**
                     * 判断参数 PayloadRule 是否已赋值
                     * @return PayloadRule 是否已赋值
                     * 
                     */
                    bool PayloadRuleHasBeenSet() const;

                private:

                    /**
                     * 密钥信息
                     */
                    SecretInfo m_secretInfo;
                    bool m_secretInfoHasBeenSet;

                    /**
                     * Payload校验规则集合
                     */
                    std::vector<TokenRuleEntry> m_payloadRule;
                    bool m_payloadRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_JWTCONFIG_H_
