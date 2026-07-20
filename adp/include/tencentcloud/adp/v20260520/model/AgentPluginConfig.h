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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginParameter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 的插件基本配置
                */
                class AgentPluginConfig : public AbstractModel
                {
                public:
                    AgentPluginConfig();
                    ~AgentPluginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>插件id</p>
                     * @return PluginId <p>插件id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>插件id</p>
                     * @param _pluginId <p>插件id</p>
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取<p>插件 Header 参数</p>
                     * @return HeaderParameterList <p>插件 Header 参数</p>
                     * 
                     */
                    std::vector<AgentPluginParameter> GetHeaderParameterList() const;

                    /**
                     * 设置<p>插件 Header 参数</p>
                     * @param _headerParameterList <p>插件 Header 参数</p>
                     * 
                     */
                    void SetHeaderParameterList(const std::vector<AgentPluginParameter>& _headerParameterList);

                    /**
                     * 判断参数 HeaderParameterList 是否已赋值
                     * @return HeaderParameterList 是否已赋值
                     * 
                     */
                    bool HeaderParameterListHasBeenSet() const;

                    /**
                     * 获取<p>插件 Query 参数</p>
                     * @return QueryParameterList <p>插件 Query 参数</p>
                     * 
                     */
                    std::vector<AgentPluginParameter> GetQueryParameterList() const;

                    /**
                     * 设置<p>插件 Query 参数</p>
                     * @param _queryParameterList <p>插件 Query 参数</p>
                     * 
                     */
                    void SetQueryParameterList(const std::vector<AgentPluginParameter>& _queryParameterList);

                    /**
                     * 判断参数 QueryParameterList 是否已赋值
                     * @return QueryParameterList 是否已赋值
                     * 
                     */
                    bool QueryParameterListHasBeenSet() const;

                    /**
                     * 获取<p>是否使用CAM一键授权，仅 auth_type=2时生效</p>
                     * @return EnableCamRoleAuth <p>是否使用CAM一键授权，仅 auth_type=2时生效</p>
                     * 
                     */
                    bool GetEnableCamRoleAuth() const;

                    /**
                     * 设置<p>是否使用CAM一键授权，仅 auth_type=2时生效</p>
                     * @param _enableCamRoleAuth <p>是否使用CAM一键授权，仅 auth_type=2时生效</p>
                     * 
                     */
                    void SetEnableCamRoleAuth(const bool& _enableCamRoleAuth);

                    /**
                     * 判断参数 EnableCamRoleAuth 是否已赋值
                     * @return EnableCamRoleAuth 是否已赋值
                     * 
                     */
                    bool EnableCamRoleAuthHasBeenSet() const;

                    /**
                     * 获取<p>授权类型</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： API Key</li><li>2： CAM授权</li><li>3： OAuth2.0授权</li></ul>
                     * @return AuthType <p>授权类型</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： API Key</li><li>2： CAM授权</li><li>3： OAuth2.0授权</li></ul>
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置<p>授权类型</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： API Key</li><li>2： CAM授权</li><li>3： OAuth2.0授权</li></ul>
                     * @param _authType <p>授权类型</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： API Key</li><li>2： CAM授权</li><li>3： OAuth2.0授权</li></ul>
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>OAuth 授权同意模式；0-开发者授权；1-使用者授权（仅在auth_type=3时生效）</p>
                     * @return OAuthConsent <p>OAuth 授权同意模式；0-开发者授权；1-使用者授权（仅在auth_type=3时生效）</p>
                     * 
                     */
                    int64_t GetOAuthConsent() const;

                    /**
                     * 设置<p>OAuth 授权同意模式；0-开发者授权；1-使用者授权（仅在auth_type=3时生效）</p>
                     * @param _oAuthConsent <p>OAuth 授权同意模式；0-开发者授权；1-使用者授权（仅在auth_type=3时生效）</p>
                     * 
                     */
                    void SetOAuthConsent(const int64_t& _oAuthConsent);

                    /**
                     * 判断参数 OAuthConsent 是否已赋值
                     * @return OAuthConsent 是否已赋值
                     * 
                     */
                    bool OAuthConsentHasBeenSet() const;

                private:

                    /**
                     * <p>插件id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>插件 Header 参数</p>
                     */
                    std::vector<AgentPluginParameter> m_headerParameterList;
                    bool m_headerParameterListHasBeenSet;

                    /**
                     * <p>插件 Query 参数</p>
                     */
                    std::vector<AgentPluginParameter> m_queryParameterList;
                    bool m_queryParameterListHasBeenSet;

                    /**
                     * <p>是否使用CAM一键授权，仅 auth_type=2时生效</p>
                     */
                    bool m_enableCamRoleAuth;
                    bool m_enableCamRoleAuthHasBeenSet;

                    /**
                     * <p>授权类型</p><p>枚举值：</p><ul><li>0： 无鉴权</li><li>1： API Key</li><li>2： CAM授权</li><li>3： OAuth2.0授权</li></ul>
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>OAuth 授权同意模式；0-开发者授权；1-使用者授权（仅在auth_type=3时生效）</p>
                     */
                    int64_t m_oAuthConsent;
                    bool m_oAuthConsentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCONFIG_H_
