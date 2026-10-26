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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWGATEWAYVERIFYOAUTHCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWGATEWAYVERIFYOAUTHCONFIG_H_

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
                * AI 网关 MCP Server OAuth2 验签配置
                */
                class AIGWGatewayVerifyOAuthConfig : public AbstractModel
                {
                public:
                    AIGWGatewayVerifyOAuthConfig();
                    ~AIGWGatewayVerifyOAuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>令牌校验方式</p><p>枚举值：</p><ul><li>JWTJWKS： JWTJWKS</li><li>Introspection： Introspection</li></ul><p>切换方式后另一方式专属字段不生效</p>
                     * @return VerifyMethod <p>令牌校验方式</p><p>枚举值：</p><ul><li>JWTJWKS： JWTJWKS</li><li>Introspection： Introspection</li></ul><p>切换方式后另一方式专属字段不生效</p>
                     * 
                     */
                    std::string GetVerifyMethod() const;

                    /**
                     * 设置<p>令牌校验方式</p><p>枚举值：</p><ul><li>JWTJWKS： JWTJWKS</li><li>Introspection： Introspection</li></ul><p>切换方式后另一方式专属字段不生效</p>
                     * @param _verifyMethod <p>令牌校验方式</p><p>枚举值：</p><ul><li>JWTJWKS： JWTJWKS</li><li>Introspection： Introspection</li></ul><p>切换方式后另一方式专属字段不生效</p>
                     * 
                     */
                    void SetVerifyMethod(const std::string& _verifyMethod);

                    /**
                     * 判断参数 VerifyMethod 是否已赋值
                     * @return VerifyMethod 是否已赋值
                     * 
                     */
                    bool VerifyMethodHasBeenSet() const;

                    /**
                     * 获取<p>令牌签发者，校验 iss；VerifyMethod=JWTJWKS 时必填</p>
                     * @return Issuer <p>令牌签发者，校验 iss；VerifyMethod=JWTJWKS 时必填</p>
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置<p>令牌签发者，校验 iss；VerifyMethod=JWTJWKS 时必填</p>
                     * @param _issuer <p>令牌签发者，校验 iss；VerifyMethod=JWTJWKS 时必填</p>
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取<p>JWKS 地址</p><p>入参限制：VerifyMethod=JWTJWKS 时必填</p>
                     * @return JwksUri <p>JWKS 地址</p><p>入参限制：VerifyMethod=JWTJWKS 时必填</p>
                     * 
                     */
                    std::string GetJwksUri() const;

                    /**
                     * 设置<p>JWKS 地址</p><p>入参限制：VerifyMethod=JWTJWKS 时必填</p>
                     * @param _jwksUri <p>JWKS 地址</p><p>入参限制：VerifyMethod=JWTJWKS 时必填</p>
                     * 
                     */
                    void SetJwksUri(const std::string& _jwksUri);

                    /**
                     * 判断参数 JwksUri 是否已赋值
                     * @return JwksUri 是否已赋值
                     * 
                     */
                    bool JwksUriHasBeenSet() const;

                    /**
                     * 获取<p>校验 aud</p>
                     * @return Audience <p>校验 aud</p>
                     * 
                     */
                    std::string GetAudience() const;

                    /**
                     * 设置<p>校验 aud</p>
                     * @param _audience <p>校验 aud</p>
                     * 
                     */
                    void SetAudience(const std::string& _audience);

                    /**
                     * 判断参数 Audience 是否已赋值
                     * @return Audience 是否已赋值
                     * 
                     */
                    bool AudienceHasBeenSet() const;

                    /**
                     * 获取<p>JWKS 缓存秒数，默认 3600，必须大于 0</p><p>默认值：3600</p>
                     * @return JwksCacheTtl <p>JWKS 缓存秒数，默认 3600，必须大于 0</p><p>默认值：3600</p>
                     * 
                     */
                    uint64_t GetJwksCacheTtl() const;

                    /**
                     * 设置<p>JWKS 缓存秒数，默认 3600，必须大于 0</p><p>默认值：3600</p>
                     * @param _jwksCacheTtl <p>JWKS 缓存秒数，默认 3600，必须大于 0</p><p>默认值：3600</p>
                     * 
                     */
                    void SetJwksCacheTtl(const uint64_t& _jwksCacheTtl);

                    /**
                     * 判断参数 JwksCacheTtl 是否已赋值
                     * @return JwksCacheTtl 是否已赋值
                     * 
                     */
                    bool JwksCacheTtlHasBeenSet() const;

                    /**
                     * 获取<p>令牌内省端点</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     * @return IntrospectionEndpoint <p>令牌内省端点</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     * 
                     */
                    std::string GetIntrospectionEndpoint() const;

                    /**
                     * 设置<p>令牌内省端点</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     * @param _introspectionEndpoint <p>令牌内省端点</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     * 
                     */
                    void SetIntrospectionEndpoint(const std::string& _introspectionEndpoint);

                    /**
                     * 判断参数 IntrospectionEndpoint 是否已赋值
                     * @return IntrospectionEndpoint 是否已赋值
                     * 
                     */
                    bool IntrospectionEndpointHasBeenSet() const;

                    /**
                     * 获取<p>调用内省端点的 Client ID</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     * @return IntrospectionClientId <p>调用内省端点的 Client ID</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     * 
                     */
                    std::string GetIntrospectionClientId() const;

                    /**
                     * 设置<p>调用内省端点的 Client ID</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     * @param _introspectionClientId <p>调用内省端点的 Client ID</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     * 
                     */
                    void SetIntrospectionClientId(const std::string& _introspectionClientId);

                    /**
                     * 判断参数 IntrospectionClientId 是否已赋值
                     * @return IntrospectionClientId 是否已赋值
                     * 
                     */
                    bool IntrospectionClientIdHasBeenSet() const;

                    /**
                     * 获取<p>调用内省端点的 Client Secret</p><p>入参限制：VerifyMethod=Introspection 时必填</p><p>加密落库，查询时无论 Enable 状态均脱敏</p>
                     * @return IntrospectionClientSecret <p>调用内省端点的 Client Secret</p><p>入参限制：VerifyMethod=Introspection 时必填</p><p>加密落库，查询时无论 Enable 状态均脱敏</p>
                     * 
                     */
                    std::string GetIntrospectionClientSecret() const;

                    /**
                     * 设置<p>调用内省端点的 Client Secret</p><p>入参限制：VerifyMethod=Introspection 时必填</p><p>加密落库，查询时无论 Enable 状态均脱敏</p>
                     * @param _introspectionClientSecret <p>调用内省端点的 Client Secret</p><p>入参限制：VerifyMethod=Introspection 时必填</p><p>加密落库，查询时无论 Enable 状态均脱敏</p>
                     * 
                     */
                    void SetIntrospectionClientSecret(const std::string& _introspectionClientSecret);

                    /**
                     * 判断参数 IntrospectionClientSecret 是否已赋值
                     * @return IntrospectionClientSecret 是否已赋值
                     * 
                     */
                    bool IntrospectionClientSecretHasBeenSet() const;

                    /**
                     * 获取<p>内省结果缓存秒数</p><p>默认值：60</p><p>0 表示不缓存</p>
                     * @return IntrospectionCacheTtl <p>内省结果缓存秒数</p><p>默认值：60</p><p>0 表示不缓存</p>
                     * 
                     */
                    uint64_t GetIntrospectionCacheTtl() const;

                    /**
                     * 设置<p>内省结果缓存秒数</p><p>默认值：60</p><p>0 表示不缓存</p>
                     * @param _introspectionCacheTtl <p>内省结果缓存秒数</p><p>默认值：60</p><p>0 表示不缓存</p>
                     * 
                     */
                    void SetIntrospectionCacheTtl(const uint64_t& _introspectionCacheTtl);

                    /**
                     * 判断参数 IntrospectionCacheTtl 是否已赋值
                     * @return IntrospectionCacheTtl 是否已赋值
                     * 
                     */
                    bool IntrospectionCacheTtlHasBeenSet() const;

                    /**
                     * 获取<p>逗号分隔的 scope 白名单；令牌需命中其一，否则 401</p>
                     * @return ScopeWhitelist <p>逗号分隔的 scope 白名单；令牌需命中其一，否则 401</p>
                     * 
                     */
                    std::string GetScopeWhitelist() const;

                    /**
                     * 设置<p>逗号分隔的 scope 白名单；令牌需命中其一，否则 401</p>
                     * @param _scopeWhitelist <p>逗号分隔的 scope 白名单；令牌需命中其一，否则 401</p>
                     * 
                     */
                    void SetScopeWhitelist(const std::string& _scopeWhitelist);

                    /**
                     * 判断参数 ScopeWhitelist 是否已赋值
                     * @return ScopeWhitelist 是否已赋值
                     * 
                     */
                    bool ScopeWhitelistHasBeenSet() const;

                    /**
                     * 获取<p>读取调用方令牌的 Header 名</p><p>默认值：Authorization</p>
                     * @return TokenHeader <p>读取调用方令牌的 Header 名</p><p>默认值：Authorization</p>
                     * 
                     */
                    std::string GetTokenHeader() const;

                    /**
                     * 设置<p>读取调用方令牌的 Header 名</p><p>默认值：Authorization</p>
                     * @param _tokenHeader <p>读取调用方令牌的 Header 名</p><p>默认值：Authorization</p>
                     * 
                     */
                    void SetTokenHeader(const std::string& _tokenHeader);

                    /**
                     * 判断参数 TokenHeader 是否已赋值
                     * @return TokenHeader 是否已赋值
                     * 
                     */
                    bool TokenHeaderHasBeenSet() const;

                private:

                    /**
                     * <p>令牌校验方式</p><p>枚举值：</p><ul><li>JWTJWKS： JWTJWKS</li><li>Introspection： Introspection</li></ul><p>切换方式后另一方式专属字段不生效</p>
                     */
                    std::string m_verifyMethod;
                    bool m_verifyMethodHasBeenSet;

                    /**
                     * <p>令牌签发者，校验 iss；VerifyMethod=JWTJWKS 时必填</p>
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * <p>JWKS 地址</p><p>入参限制：VerifyMethod=JWTJWKS 时必填</p>
                     */
                    std::string m_jwksUri;
                    bool m_jwksUriHasBeenSet;

                    /**
                     * <p>校验 aud</p>
                     */
                    std::string m_audience;
                    bool m_audienceHasBeenSet;

                    /**
                     * <p>JWKS 缓存秒数，默认 3600，必须大于 0</p><p>默认值：3600</p>
                     */
                    uint64_t m_jwksCacheTtl;
                    bool m_jwksCacheTtlHasBeenSet;

                    /**
                     * <p>令牌内省端点</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     */
                    std::string m_introspectionEndpoint;
                    bool m_introspectionEndpointHasBeenSet;

                    /**
                     * <p>调用内省端点的 Client ID</p><p>入参限制：VerifyMethod=Introspection 时必填</p>
                     */
                    std::string m_introspectionClientId;
                    bool m_introspectionClientIdHasBeenSet;

                    /**
                     * <p>调用内省端点的 Client Secret</p><p>入参限制：VerifyMethod=Introspection 时必填</p><p>加密落库，查询时无论 Enable 状态均脱敏</p>
                     */
                    std::string m_introspectionClientSecret;
                    bool m_introspectionClientSecretHasBeenSet;

                    /**
                     * <p>内省结果缓存秒数</p><p>默认值：60</p><p>0 表示不缓存</p>
                     */
                    uint64_t m_introspectionCacheTtl;
                    bool m_introspectionCacheTtlHasBeenSet;

                    /**
                     * <p>逗号分隔的 scope 白名单；令牌需命中其一，否则 401</p>
                     */
                    std::string m_scopeWhitelist;
                    bool m_scopeWhitelistHasBeenSet;

                    /**
                     * <p>读取调用方令牌的 Header 名</p><p>默认值：Authorization</p>
                     */
                    std::string m_tokenHeader;
                    bool m_tokenHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWGATEWAYVERIFYOAUTHCONFIG_H_
