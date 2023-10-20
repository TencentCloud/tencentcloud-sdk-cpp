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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEA_H_

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
                * 时间戳防盗链高级版模式A配置。
                */
                class AdvancedAuthenticationTypeA : public AbstractModel
                {
                public:
                    AdvancedAuthenticationTypeA();
                    ~AdvancedAuthenticationTypeA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     * @return SecretKey 用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     * @param _secretKey 用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

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
                     * 获取是否必须提供过期时间参数。
                     * @return ExpireTimeRequired 是否必须提供过期时间参数。
                     * 
                     */
                    bool GetExpireTimeRequired() const;

                    /**
                     * 设置是否必须提供过期时间参数。
                     * @param _expireTimeRequired 是否必须提供过期时间参数。
                     * 
                     */
                    void SetExpireTimeRequired(const bool& _expireTimeRequired);

                    /**
                     * 判断参数 ExpireTimeRequired 是否已赋值
                     * @return ExpireTimeRequired 是否已赋值
                     * 
                     */
                    bool ExpireTimeRequiredHasBeenSet() const;

                    /**
                     * 获取URL 组成格式，如：${private_key}${schema}${host}${full_uri}。
                     * @return Format URL 组成格式，如：${private_key}${schema}${host}${full_uri}。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置URL 组成格式，如：${private_key}${schema}${host}${full_uri}。
                     * @param _format URL 组成格式，如：${private_key}${schema}${host}${full_uri}。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

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

                    /**
                     * 获取保留字段。
                     * @return Transformation 保留字段。
                     * 
                     */
                    int64_t GetTransformation() const;

                    /**
                     * 设置保留字段。
                     * @param _transformation 保留字段。
                     * 
                     */
                    void SetTransformation(const int64_t& _transformation);

                    /**
                     * 判断参数 Transformation 是否已赋值
                     * @return Transformation 是否已赋值
                     * 
                     */
                    bool TransformationHasBeenSet() const;

                private:

                    /**
                     * 用于计算签名的密钥，只允许字母和数字，长度6-32字节。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

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
                     * 是否必须提供过期时间参数。
                     */
                    bool m_expireTimeRequired;
                    bool m_expireTimeRequiredHasBeenSet;

                    /**
                     * URL 组成格式，如：${private_key}${schema}${host}${full_uri}。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

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

                    /**
                     * 保留字段。
                     */
                    int64_t m_transformation;
                    bool m_transformationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATIONTYPEA_H_
