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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WECHATCLAWBOTCHANNELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WECHATCLAWBOTCHANNELCONFIG_H_

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
                * 微信ClawBot渠道配置
                */
                class WechatClawBotChannelConfig : public AbstractModel
                {
                public:
                    WechatClawBotChannelConfig();
                    ~WechatClawBotChannelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ClawBot机器人ID（扫码后回填）</p>
                     * @return BotId <p>ClawBot机器人ID（扫码后回填）</p>
                     * 
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置<p>ClawBot机器人ID（扫码后回填）</p>
                     * @param _botId <p>ClawBot机器人ID（扫码后回填）</p>
                     * 
                     */
                    void SetBotId(const std::string& _botId);

                    /**
                     * 判断参数 BotId 是否已赋值
                     * @return BotId 是否已赋值
                     * 
                     */
                    bool BotIdHasBeenSet() const;

                    /**
                     * 获取<p>ClawBot机器人Token（扫码后回填）</p>
                     * @return BotToken <p>ClawBot机器人Token（扫码后回填）</p>
                     * 
                     */
                    std::string GetBotToken() const;

                    /**
                     * 设置<p>ClawBot机器人Token（扫码后回填）</p>
                     * @param _botToken <p>ClawBot机器人Token（扫码后回填）</p>
                     * 
                     */
                    void SetBotToken(const std::string& _botToken);

                    /**
                     * 判断参数 BotToken 是否已赋值
                     * @return BotToken 是否已赋值
                     * 
                     */
                    bool BotTokenHasBeenSet() const;

                    /**
                     * 获取<p>二维码状态（wait/confirmed/expired）</p>
                     * @return QrcodeStatus <p>二维码状态（wait/confirmed/expired）</p>
                     * 
                     */
                    std::string GetQrcodeStatus() const;

                    /**
                     * 设置<p>二维码状态（wait/confirmed/expired）</p>
                     * @param _qrcodeStatus <p>二维码状态（wait/confirmed/expired）</p>
                     * 
                     */
                    void SetQrcodeStatus(const std::string& _qrcodeStatus);

                    /**
                     * 判断参数 QrcodeStatus 是否已赋值
                     * @return QrcodeStatus 是否已赋值
                     * 
                     */
                    bool QrcodeStatusHasBeenSet() const;

                    /**
                     * 获取<p>二维码URL（创建后回填）</p>
                     * @return QrcodeUrl <p>二维码URL（创建后回填）</p>
                     * 
                     */
                    std::string GetQrcodeUrl() const;

                    /**
                     * 设置<p>二维码URL（创建后回填）</p>
                     * @param _qrcodeUrl <p>二维码URL（创建后回填）</p>
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
                     * 获取<p>微信用户ID（扫码后回填）</p>
                     * @return WechatUserId <p>微信用户ID（扫码后回填）</p>
                     * 
                     */
                    std::string GetWechatUserId() const;

                    /**
                     * 设置<p>微信用户ID（扫码后回填）</p>
                     * @param _wechatUserId <p>微信用户ID（扫码后回填）</p>
                     * 
                     */
                    void SetWechatUserId(const std::string& _wechatUserId);

                    /**
                     * 判断参数 WechatUserId 是否已赋值
                     * @return WechatUserId 是否已赋值
                     * 
                     */
                    bool WechatUserIdHasBeenSet() const;

                private:

                    /**
                     * <p>ClawBot机器人ID（扫码后回填）</p>
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * <p>ClawBot机器人Token（扫码后回填）</p>
                     */
                    std::string m_botToken;
                    bool m_botTokenHasBeenSet;

                    /**
                     * <p>二维码状态（wait/confirmed/expired）</p>
                     */
                    std::string m_qrcodeStatus;
                    bool m_qrcodeStatusHasBeenSet;

                    /**
                     * <p>二维码URL（创建后回填）</p>
                     */
                    std::string m_qrcodeUrl;
                    bool m_qrcodeUrlHasBeenSet;

                    /**
                     * <p>微信用户ID（扫码后回填）</p>
                     */
                    std::string m_wechatUserId;
                    bool m_wechatUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WECHATCLAWBOTCHANNELCONFIG_H_
