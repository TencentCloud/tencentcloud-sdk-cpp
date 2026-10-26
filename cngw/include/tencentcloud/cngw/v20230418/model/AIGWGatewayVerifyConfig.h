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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWGATEWAYVERIFYCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWGATEWAYVERIFYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWGatewayVerifyOAuthConfig.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关 MCP Server 网关验签配置
                */
                class AIGWGatewayVerifyConfig : public AbstractModel
                {
                public:
                    AIGWGatewayVerifyConfig();
                    ~AIGWGatewayVerifyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启网关验签</p>
                     * @return Enable <p>是否开启网关验签</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否开启网关验签</p>
                     * @param _enable <p>是否开启网关验签</p>
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
                     * 获取<p>网关验签类型</p><p>枚举值：</p><ul><li>OAuth： OAuth2</li></ul>
                     * @return VerifyType <p>网关验签类型</p><p>枚举值：</p><ul><li>OAuth： OAuth2</li></ul>
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置<p>网关验签类型</p><p>枚举值：</p><ul><li>OAuth： OAuth2</li></ul>
                     * @param _verifyType <p>网关验签类型</p><p>枚举值：</p><ul><li>OAuth： OAuth2</li></ul>
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
                     * 获取<p>OAuth2验签配置</p>
                     * @return OAuthConfig <p>OAuth2验签配置</p>
                     * 
                     */
                    AIGWGatewayVerifyOAuthConfig GetOAuthConfig() const;

                    /**
                     * 设置<p>OAuth2验签配置</p>
                     * @param _oAuthConfig <p>OAuth2验签配置</p>
                     * 
                     */
                    void SetOAuthConfig(const AIGWGatewayVerifyOAuthConfig& _oAuthConfig);

                    /**
                     * 判断参数 OAuthConfig 是否已赋值
                     * @return OAuthConfig 是否已赋值
                     * 
                     */
                    bool OAuthConfigHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启网关验签</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>网关验签类型</p><p>枚举值：</p><ul><li>OAuth： OAuth2</li></ul>
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * <p>OAuth2验签配置</p>
                     */
                    AIGWGatewayVerifyOAuthConfig m_oAuthConfig;
                    bool m_oAuthConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWGATEWAYVERIFYCONFIG_H_
