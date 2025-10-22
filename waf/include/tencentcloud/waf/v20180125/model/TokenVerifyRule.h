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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_TOKENVERIFYRULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_TOKENVERIFYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/JWTConfig.h>
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
                * Token有效性校验规则
                */
                class TokenVerifyRule : public AbstractModel
                {
                public:
                    TokenVerifyRule();
                    ~TokenVerifyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取JWS、JWE专用校验规则
                     * @return JWTRule JWS、JWE专用校验规则
                     * 
                     */
                    JWTConfig GetJWTRule() const;

                    /**
                     * 设置JWS、JWE专用校验规则
                     * @param _jWTRule JWS、JWE专用校验规则
                     * 
                     */
                    void SetJWTRule(const JWTConfig& _jWTRule);

                    /**
                     * 判断参数 JWTRule 是否已赋值
                     * @return JWTRule 是否已赋值
                     * 
                     */
                    bool JWTRuleHasBeenSet() const;

                    /**
                     * 获取其他会话有效性校验方式(contains、length、regex)的校验规则
                     * @return GeneralRule 其他会话有效性校验方式(contains、length、regex)的校验规则
                     * 
                     */
                    TokenRuleEntry GetGeneralRule() const;

                    /**
                     * 设置其他会话有效性校验方式(contains、length、regex)的校验规则
                     * @param _generalRule 其他会话有效性校验方式(contains、length、regex)的校验规则
                     * 
                     */
                    void SetGeneralRule(const TokenRuleEntry& _generalRule);

                    /**
                     * 判断参数 GeneralRule 是否已赋值
                     * @return GeneralRule 是否已赋值
                     * 
                     */
                    bool GeneralRuleHasBeenSet() const;

                private:

                    /**
                     * JWS、JWE专用校验规则
                     */
                    JWTConfig m_jWTRule;
                    bool m_jWTRuleHasBeenSet;

                    /**
                     * 其他会话有效性校验方式(contains、length、regex)的校验规则
                     */
                    TokenRuleEntry m_generalRule;
                    bool m_generalRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_TOKENVERIFYRULE_H_
