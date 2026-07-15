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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWOAUTHAUTHPLUGINCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWOAUTHAUTHPLUGINCONFIG_H_

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
                * 资源端 OAuth2 认证插件配置
                */
                class AIGWOAuthAuthPluginConfig : public AbstractModel
                {
                public:
                    AIGWOAuthAuthPluginConfig();
                    ~AIGWOAuthAuthPluginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>取token的头部名称</p>
                     * @return HeaderNames <p>取token的头部名称</p>
                     * 
                     */
                    std::vector<std::string> GetHeaderNames() const;

                    /**
                     * 设置<p>取token的头部名称</p>
                     * @param _headerNames <p>取token的头部名称</p>
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
                     * 获取<p>过期时间</p>
                     * @return TokenExpiration <p>过期时间</p>
                     * 
                     */
                    int64_t GetTokenExpiration() const;

                    /**
                     * 设置<p>过期时间</p>
                     * @param _tokenExpiration <p>过期时间</p>
                     * 
                     */
                    void SetTokenExpiration(const int64_t& _tokenExpiration);

                    /**
                     * 判断参数 TokenExpiration 是否已赋值
                     * @return TokenExpiration 是否已赋值
                     * 
                     */
                    bool TokenExpirationHasBeenSet() const;

                    /**
                     * 获取<p>授权范围</p>
                     * @return Scopes <p>授权范围</p>
                     * 
                     */
                    std::vector<std::string> GetScopes() const;

                    /**
                     * 设置<p>授权范围</p>
                     * @param _scopes <p>授权范围</p>
                     * 
                     */
                    void SetScopes(const std::vector<std::string>& _scopes);

                    /**
                     * 判断参数 Scopes 是否已赋值
                     * @return Scopes 是否已赋值
                     * 
                     */
                    bool ScopesHasBeenSet() const;

                    /**
                     * 获取<p>是否强制判断授权范围</p>
                     * @return MandatoryScope <p>是否强制判断授权范围</p>
                     * 
                     */
                    bool GetMandatoryScope() const;

                    /**
                     * 设置<p>是否强制判断授权范围</p>
                     * @param _mandatoryScope <p>是否强制判断授权范围</p>
                     * 
                     */
                    void SetMandatoryScope(const bool& _mandatoryScope);

                    /**
                     * 判断参数 MandatoryScope 是否已赋值
                     * @return MandatoryScope 是否已赋值
                     * 
                     */
                    bool MandatoryScopeHasBeenSet() const;

                private:

                    /**
                     * <p>取token的头部名称</p>
                     */
                    std::vector<std::string> m_headerNames;
                    bool m_headerNamesHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    int64_t m_tokenExpiration;
                    bool m_tokenExpirationHasBeenSet;

                    /**
                     * <p>授权范围</p>
                     */
                    std::vector<std::string> m_scopes;
                    bool m_scopesHasBeenSet;

                    /**
                     * <p>是否强制判断授权范围</p>
                     */
                    bool m_mandatoryScope;
                    bool m_mandatoryScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWOAUTHAUTHPLUGINCONFIG_H_
