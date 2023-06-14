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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEB_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 时间戳防盗链高级版模式B配置。
                */
                class AdvancedAuthenticationTypeB : public AbstractModel
                {
                public:
                    AdvancedAuthenticationTypeB();
                    ~AdvancedAuthenticationTypeB() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取alpha键名。
                     * @return KeyAlpha alpha键名。
                     * 
                     */
                    std::string GetKeyAlpha() const;

                    /**
                     * 设置alpha键名。
                     * @param _keyAlpha alpha键名。
                     * 
                     */
                    void SetKeyAlpha(const std::string& _keyAlpha);

                    /**
                     * 判断参数 KeyAlpha 是否已赋值
                     * @return KeyAlpha 是否已赋值
                     * 
                     */
                    bool KeyAlphaHasBeenSet() const;

                    /**
                     * 获取beta键名。
                     * @return KeyBeta beta键名。
                     * 
                     */
                    std::string GetKeyBeta() const;

                    /**
                     * 设置beta键名。
                     * @param _keyBeta beta键名。
                     * 
                     */
                    void SetKeyBeta(const std::string& _keyBeta);

                    /**
                     * 判断参数 KeyBeta 是否已赋值
                     * @return KeyBeta 是否已赋值
                     * 
                     */
                    bool KeyBetaHasBeenSet() const;

                    /**
                     * 获取gamma键名。
                     * @return KeyGamma gamma键名。
                     * 
                     */
                    std::string GetKeyGamma() const;

                    /**
                     * 设置gamma键名。
                     * @param _keyGamma gamma键名。
                     * 
                     */
                    void SetKeyGamma(const std::string& _keyGamma);

                    /**
                     * 判断参数 KeyGamma 是否已赋值
                     * @return KeyGamma 是否已赋值
                     * 
                     */
                    bool KeyGammaHasBeenSet() const;

                    /**
                     * 获取uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * @return SignParam uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * 
                     */
                    std::string GetSignParam() const;

                    /**
                     * 设置uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * @param _signParam uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * 
                     */
                    void SetSignParam(const std::string& _signParam);

                    /**
                     * 判断参数 SignParam 是否已赋值
                     * @return SignParam 是否已赋值
                     * 
                     */
                    bool SignParamHasBeenSet() const;

                    /**
                     * 获取uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * @return TimeParam uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * 
                     */
                    std::string GetTimeParam() const;

                    /**
                     * 设置uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * @param _timeParam uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     * 
                     */
                    void SetTimeParam(const std::string& _timeParam);

                    /**
                     * 判断参数 TimeParam 是否已赋值
                     * @return TimeParam 是否已赋值
                     * 
                     */
                    bool TimeParamHasBeenSet() const;

                    /**
                     * 获取过期时间，单位秒。
                     * @return ExpireTime 过期时间，单位秒。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间，单位秒。
                     * @param _expireTime 过期时间，单位秒。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取时间格式，dec，hex分别表示十进制，十六进制。
                     * @return TimeFormat 时间格式，dec，hex分别表示十进制，十六进制。
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置时间格式，dec，hex分别表示十进制，十六进制。
                     * @param _timeFormat 时间格式，dec，hex分别表示十进制，十六进制。
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取鉴权失败时返回的状态码。
                     * @return FailCode 鉴权失败时返回的状态码。
                     * 
                     */
                    int64_t GetFailCode() const;

                    /**
                     * 设置鉴权失败时返回的状态码。
                     * @param _failCode 鉴权失败时返回的状态码。
                     * 
                     */
                    void SetFailCode(const int64_t& _failCode);

                    /**
                     * 判断参数 FailCode 是否已赋值
                     * @return FailCode 是否已赋值
                     * 
                     */
                    bool FailCodeHasBeenSet() const;

                    /**
                     * 获取链接过期时返回的状态码。
                     * @return ExpireCode 链接过期时返回的状态码。
                     * 
                     */
                    int64_t GetExpireCode() const;

                    /**
                     * 设置链接过期时返回的状态码。
                     * @param _expireCode 链接过期时返回的状态码。
                     * 
                     */
                    void SetExpireCode(const int64_t& _expireCode);

                    /**
                     * 判断参数 ExpireCode 是否已赋值
                     * @return ExpireCode 是否已赋值
                     * 
                     */
                    bool ExpireCodeHasBeenSet() const;

                    /**
                     * 获取需要鉴权的url路径列表。
                     * @return RulePaths 需要鉴权的url路径列表。
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置需要鉴权的url路径列表。
                     * @param _rulePaths 需要鉴权的url路径列表。
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                private:

                    /**
                     * alpha键名。
                     */
                    std::string m_keyAlpha;
                    bool m_keyAlphaHasBeenSet;

                    /**
                     * beta键名。
                     */
                    std::string m_keyBeta;
                    bool m_keyBetaHasBeenSet;

                    /**
                     * gamma键名。
                     */
                    std::string m_keyGamma;
                    bool m_keyGammaHasBeenSet;

                    /**
                     * uri串中签名的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     */
                    std::string m_signParam;
                    bool m_signParamHasBeenSet;

                    /**
                     * uri串中时间的字段名，字母，数字或下划线构成，同时必须以字母开头。
                     */
                    std::string m_timeParam;
                    bool m_timeParamHasBeenSet;

                    /**
                     * 过期时间，单位秒。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 时间格式，dec，hex分别表示十进制，十六进制。
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * 鉴权失败时返回的状态码。
                     */
                    int64_t m_failCode;
                    bool m_failCodeHasBeenSet;

                    /**
                     * 链接过期时返回的状态码。
                     */
                    int64_t m_expireCode;
                    bool m_expireCodeHasBeenSet;

                    /**
                     * 需要鉴权的url路径列表。
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEB_H_
