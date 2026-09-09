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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_LINECHANNELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_LINECHANNELCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * LINE渠道配置
                */
                class LineChannelConfig : public AbstractModel
                {
                public:
                    LineChannelConfig();
                    ~LineChannelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>LINE Channel Access Token</p>
                     * @return AccessToken <p>LINE Channel Access Token</p>
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 设置<p>LINE Channel Access Token</p>
                     * @param _accessToken <p>LINE Channel Access Token</p>
                     * 
                     */
                    void SetAccessToken(const std::string& _accessToken);

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取<p>LINE回调地址</p>
                     * @return CallbackUrl <p>LINE回调地址</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>LINE回调地址</p>
                     * @param _callbackUrl <p>LINE回调地址</p>
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>LINE Channel Secret</p>
                     * @return ChannelSecret <p>LINE Channel Secret</p>
                     * 
                     */
                    std::string GetChannelSecret() const;

                    /**
                     * 设置<p>LINE Channel Secret</p>
                     * @param _channelSecret <p>LINE Channel Secret</p>
                     * 
                     */
                    void SetChannelSecret(const std::string& _channelSecret);

                    /**
                     * 判断参数 ChannelSecret 是否已赋值
                     * @return ChannelSecret 是否已赋值
                     * 
                     */
                    bool ChannelSecretHasBeenSet() const;

                private:

                    /**
                     * <p>LINE Channel Access Token</p>
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * <p>LINE回调地址</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>LINE Channel Secret</p>
                     */
                    std::string m_channelSecret;
                    bool m_channelSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_LINECHANNELCONFIG_H_
