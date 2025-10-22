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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_TOKENVALIDATION_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_TOKENVALIDATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/TokenVerifyRule.h>
#include <tencentcloud/waf/v20180125/model/TokenDisplaySetting.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * token有效性配置信息
                */
                class TokenValidation : public AbstractModel
                {
                public:
                    TokenValidation();
                    ~TokenValidation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启token有效性校验
                     * @return Enable 是否开启token有效性校验
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启token有效性校验
                     * @param _enable 是否开启token有效性校验
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取token有效性的校验方式，可选值为：jws、jwe、contains、len、regex
                     * @return VerifyType token有效性的校验方式，可选值为：jws、jwe、contains、len、regex
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置token有效性的校验方式，可选值为：jws、jwe、contains、len、regex
                     * @param _verifyType token有效性的校验方式，可选值为：jws、jwe、contains、len、regex
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取有效性校验配置和规则
                     * @return VerifyRule 有效性校验配置和规则
                     * 
                     */
                    TokenVerifyRule GetVerifyRule() const;

                    /**
                     * 设置有效性校验配置和规则
                     * @param _verifyRule 有效性校验配置和规则
                     * 
                     */
                    void SetVerifyRule(const TokenVerifyRule& _verifyRule);

                    /**
                     * 判断参数 VerifyRule 是否已赋值
                     * @return VerifyRule 是否已赋值
                     * 
                     */
                    bool VerifyRuleHasBeenSet() const;

                    /**
                     * 获取Token显示设置（只有当校验方式为jws/jwe的时候才会有该配置信息）
                     * @return DisplaySetting Token显示设置（只有当校验方式为jws/jwe的时候才会有该配置信息）
                     * 
                     */
                    TokenDisplaySetting GetDisplaySetting() const;

                    /**
                     * 设置Token显示设置（只有当校验方式为jws/jwe的时候才会有该配置信息）
                     * @param _displaySetting Token显示设置（只有当校验方式为jws/jwe的时候才会有该配置信息）
                     * 
                     */
                    void SetDisplaySetting(const TokenDisplaySetting& _displaySetting);

                    /**
                     * 判断参数 DisplaySetting 是否已赋值
                     * @return DisplaySetting 是否已赋值
                     * 
                     */
                    bool DisplaySettingHasBeenSet() const;

                private:

                    /**
                     * 是否开启token有效性校验
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * token有效性的校验方式，可选值为：jws、jwe、contains、len、regex
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 有效性校验配置和规则
                     */
                    TokenVerifyRule m_verifyRule;
                    bool m_verifyRuleHasBeenSet;

                    /**
                     * Token显示设置（只有当校验方式为jws/jwe的时候才会有该配置信息）
                     */
                    TokenDisplaySetting m_displaySetting;
                    bool m_displaySettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_TOKENVALIDATION_H_
