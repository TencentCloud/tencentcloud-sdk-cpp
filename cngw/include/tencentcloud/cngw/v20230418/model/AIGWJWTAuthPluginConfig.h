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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWJWTAUTHPLUGINCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWJWTAUTHPLUGINCONFIG_H_

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
                * JWT 认证插件配置
                */
                class AIGWJWTAuthPluginConfig : public AbstractModel
                {
                public:
                    AIGWJWTAuthPluginConfig();
                    ~AIGWJWTAuthPluginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>签名的header名称列表</p>
                     * @return HeaderNames <p>签名的header名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetHeaderNames() const;

                    /**
                     * 设置<p>签名的header名称列表</p>
                     * @param _headerNames <p>签名的header名称列表</p>
                     * 
                     */
                    void SetHeaderNames(const std::vector<std::string>& _headerNames);

                    /**
                     * 判断参数 HeaderNames 是否已赋值
                     * @return HeaderNames 是否已赋值
                     * 
                     */
                    bool HeaderNamesHasBeenSet() const;

                    /**
                     * 获取<p>签名的cookie名称列表</p>
                     * @return CookieNames <p>签名的cookie名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetCookieNames() const;

                    /**
                     * 设置<p>签名的cookie名称列表</p>
                     * @param _cookieNames <p>签名的cookie名称列表</p>
                     * 
                     */
                    void SetCookieNames(const std::vector<std::string>& _cookieNames);

                    /**
                     * 判断参数 CookieNames 是否已赋值
                     * @return CookieNames 是否已赋值
                     * 
                     */
                    bool CookieNamesHasBeenSet() const;

                    /**
                     * 获取<p>签名的URL参数名称列表</p>
                     * @return URIParamNames <p>签名的URL参数名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetURIParamNames() const;

                    /**
                     * 设置<p>签名的URL参数名称列表</p>
                     * @param _uRIParamNames <p>签名的URL参数名称列表</p>
                     * 
                     */
                    void SetURIParamNames(const std::vector<std::string>& _uRIParamNames);

                    /**
                     * 判断参数 URIParamNames 是否已赋值
                     * @return URIParamNames 是否已赋值
                     * 
                     */
                    bool URIParamNamesHasBeenSet() const;

                    /**
                     * 获取<p>消费者标识</p>
                     * @return KeyClaimName <p>消费者标识</p>
                     * 
                     */
                    std::string GetKeyClaimName() const;

                    /**
                     * 设置<p>消费者标识</p>
                     * @param _keyClaimName <p>消费者标识</p>
                     * 
                     */
                    void SetKeyClaimName(const std::string& _keyClaimName);

                    /**
                     * 判断参数 KeyClaimName 是否已赋值
                     * @return KeyClaimName 是否已赋值
                     * 
                     */
                    bool KeyClaimNameHasBeenSet() const;

                    /**
                     * 获取<p>标准消费者校验</p><p>枚举值：</p><ul><li>exp： exp</li><li>nbf： nbf</li></ul>
                     * @return ClaimsToVerify <p>标准消费者校验</p><p>枚举值：</p><ul><li>exp： exp</li><li>nbf： nbf</li></ul>
                     * 
                     */
                    std::vector<std::string> GetClaimsToVerify() const;

                    /**
                     * 设置<p>标准消费者校验</p><p>枚举值：</p><ul><li>exp： exp</li><li>nbf： nbf</li></ul>
                     * @param _claimsToVerify <p>标准消费者校验</p><p>枚举值：</p><ul><li>exp： exp</li><li>nbf： nbf</li></ul>
                     * 
                     */
                    void SetClaimsToVerify(const std::vector<std::string>& _claimsToVerify);

                    /**
                     * 判断参数 ClaimsToVerify 是否已赋值
                     * @return ClaimsToVerify 是否已赋值
                     * 
                     */
                    bool ClaimsToVerifyHasBeenSet() const;

                    /**
                     * 获取<p>最大有效期</p>
                     * @return MaximumExpiration <p>最大有效期</p>
                     * 
                     */
                    int64_t GetMaximumExpiration() const;

                    /**
                     * 设置<p>最大有效期</p>
                     * @param _maximumExpiration <p>最大有效期</p>
                     * 
                     */
                    void SetMaximumExpiration(const int64_t& _maximumExpiration);

                    /**
                     * 判断参数 MaximumExpiration 是否已赋值
                     * @return MaximumExpiration 是否已赋值
                     * 
                     */
                    bool MaximumExpirationHasBeenSet() const;

                    /**
                     * 获取<p>是否Base64编码</p>
                     * @return SecretIsBase64 <p>是否Base64编码</p>
                     * 
                     */
                    bool GetSecretIsBase64() const;

                    /**
                     * 设置<p>是否Base64编码</p>
                     * @param _secretIsBase64 <p>是否Base64编码</p>
                     * 
                     */
                    void SetSecretIsBase64(const bool& _secretIsBase64);

                    /**
                     * 判断参数 SecretIsBase64 是否已赋值
                     * @return SecretIsBase64 是否已赋值
                     * 
                     */
                    bool SecretIsBase64HasBeenSet() const;

                    /**
                     * 获取<p>CORS预检验证</p>
                     * @return RunOnPreFlight <p>CORS预检验证</p>
                     * 
                     */
                    bool GetRunOnPreFlight() const;

                    /**
                     * 设置<p>CORS预检验证</p>
                     * @param _runOnPreFlight <p>CORS预检验证</p>
                     * 
                     */
                    void SetRunOnPreFlight(const bool& _runOnPreFlight);

                    /**
                     * 判断参数 RunOnPreFlight 是否已赋值
                     * @return RunOnPreFlight 是否已赋值
                     * 
                     */
                    bool RunOnPreFlightHasBeenSet() const;

                private:

                    /**
                     * <p>签名的header名称列表</p>
                     */
                    std::vector<std::string> m_headerNames;
                    bool m_headerNamesHasBeenSet;

                    /**
                     * <p>签名的cookie名称列表</p>
                     */
                    std::vector<std::string> m_cookieNames;
                    bool m_cookieNamesHasBeenSet;

                    /**
                     * <p>签名的URL参数名称列表</p>
                     */
                    std::vector<std::string> m_uRIParamNames;
                    bool m_uRIParamNamesHasBeenSet;

                    /**
                     * <p>消费者标识</p>
                     */
                    std::string m_keyClaimName;
                    bool m_keyClaimNameHasBeenSet;

                    /**
                     * <p>标准消费者校验</p><p>枚举值：</p><ul><li>exp： exp</li><li>nbf： nbf</li></ul>
                     */
                    std::vector<std::string> m_claimsToVerify;
                    bool m_claimsToVerifyHasBeenSet;

                    /**
                     * <p>最大有效期</p>
                     */
                    int64_t m_maximumExpiration;
                    bool m_maximumExpirationHasBeenSet;

                    /**
                     * <p>是否Base64编码</p>
                     */
                    bool m_secretIsBase64;
                    bool m_secretIsBase64HasBeenSet;

                    /**
                     * <p>CORS预检验证</p>
                     */
                    bool m_runOnPreFlight;
                    bool m_runOnPreFlightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWJWTAUTHPLUGINCONFIG_H_
