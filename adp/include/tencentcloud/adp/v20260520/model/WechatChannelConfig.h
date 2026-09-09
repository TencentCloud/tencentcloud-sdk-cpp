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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WECHATCHANNELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WECHATCHANNELCONFIG_H_

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
                * 微信公众号/小程序渠道配置
                */
                class WechatChannelConfig : public AbstractModel
                {
                public:
                    WechatChannelConfig();
                    ~WechatChannelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>授权二维码URL（创建后回填）</p>
                     * @return QrcodeUrl <p>授权二维码URL（创建后回填）</p>
                     * 
                     */
                    std::string GetQrcodeUrl() const;

                    /**
                     * 设置<p>授权二维码URL（创建后回填）</p>
                     * @param _qrcodeUrl <p>授权二维码URL（创建后回填）</p>
                     * 
                     */
                    void SetQrcodeUrl(const std::string& _qrcodeUrl);

                    /**
                     * 判断参数 QrcodeUrl 是否已赋值
                     * @return QrcodeUrl 是否已赋值
                     * 
                     */
                    bool QrcodeUrlHasBeenSet() const;

                    /**
                     * 获取<p>公众号/小程序AppId（授权后回填）</p>
                     * @return WechatAppId <p>公众号/小程序AppId（授权后回填）</p>
                     * 
                     */
                    std::string GetWechatAppId() const;

                    /**
                     * 设置<p>公众号/小程序AppId（授权后回填）</p>
                     * @param _wechatAppId <p>公众号/小程序AppId（授权后回填）</p>
                     * 
                     */
                    void SetWechatAppId(const std::string& _wechatAppId);

                    /**
                     * 判断参数 WechatAppId 是否已赋值
                     * @return WechatAppId 是否已赋值
                     * 
                     */
                    bool WechatAppIdHasBeenSet() const;

                    /**
                     * 获取<p>公众号/小程序RefreshToken（授权后回填）</p>
                     * @return WechatRefreshToken <p>公众号/小程序RefreshToken（授权后回填）</p>
                     * 
                     */
                    std::string GetWechatRefreshToken() const;

                    /**
                     * 设置<p>公众号/小程序RefreshToken（授权后回填）</p>
                     * @param _wechatRefreshToken <p>公众号/小程序RefreshToken（授权后回填）</p>
                     * 
                     */
                    void SetWechatRefreshToken(const std::string& _wechatRefreshToken);

                    /**
                     * 判断参数 WechatRefreshToken 是否已赋值
                     * @return WechatRefreshToken 是否已赋值
                     * 
                     */
                    bool WechatRefreshTokenHasBeenSet() const;

                private:

                    /**
                     * <p>授权二维码URL（创建后回填）</p>
                     */
                    std::string m_qrcodeUrl;
                    bool m_qrcodeUrlHasBeenSet;

                    /**
                     * <p>公众号/小程序AppId（授权后回填）</p>
                     */
                    std::string m_wechatAppId;
                    bool m_wechatAppIdHasBeenSet;

                    /**
                     * <p>公众号/小程序RefreshToken（授权后回填）</p>
                     */
                    std::string m_wechatRefreshToken;
                    bool m_wechatRefreshTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WECHATCHANNELCONFIG_H_
