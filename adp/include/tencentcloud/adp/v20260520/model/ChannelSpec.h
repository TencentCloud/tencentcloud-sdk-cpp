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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CHANNELSPEC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CHANNELSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DingTalkChannelConfig.h>
#include <tencentcloud/adp/v20260520/model/LarkChannelConfig.h>
#include <tencentcloud/adp/v20260520/model/LineChannelConfig.h>
#include <tencentcloud/adp/v20260520/model/TelegramChannelConfig.h>
#include <tencentcloud/adp/v20260520/model/UserAgentReference.h>
#include <tencentcloud/adp/v20260520/model/WechatChannelConfig.h>
#include <tencentcloud/adp/v20260520/model/WechatClawBotChannelConfig.h>
#include <tencentcloud/adp/v20260520/model/WechatCustomerServiceChannelConfig.h>
#include <tencentcloud/adp/v20260520/model/WecomAppChannelConfig.h>
#include <tencentcloud/adp/v20260520/model/WecomRobotChannelConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 渠道规格（聚合场景/类型/名称/备注/配置）
                */
                class ChannelSpec : public AbstractModel
                {
                public:
                    ChannelSpec();
                    ~ChannelSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>渠道名称</p>
                     * @return ChannelName <p>渠道名称</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>渠道名称</p>
                     * @param _channelName <p>渠道名称</p>
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取<p>渠道类型，详见ChannelType枚举</p><p>枚举值：</p><ul><li>10000： 微信服务号(Wechat)</li><li>10002： 企微应用(WeComApp)</li><li>10004： 微信客服(WechatCustomerService)</li><li>10009： 企微智能机器人(WeComRobot)</li><li>10013： 钉钉机器人(DingTalk)</li><li>10014： 企微智能机器人WebSocket(WeComRobot)</li><li>10015： 微信ClawBot(WechatClawBot)</li><li>10011： LINE(Line)</li><li>10012： Telegram(Telegram)</li><li>10016： 飞书机器人(Lark) </li></ul><p>C端场景（Scene=1时）只支持10014和10015</p>
                     * @return ChannelType <p>渠道类型，详见ChannelType枚举</p><p>枚举值：</p><ul><li>10000： 微信服务号(Wechat)</li><li>10002： 企微应用(WeComApp)</li><li>10004： 微信客服(WechatCustomerService)</li><li>10009： 企微智能机器人(WeComRobot)</li><li>10013： 钉钉机器人(DingTalk)</li><li>10014： 企微智能机器人WebSocket(WeComRobot)</li><li>10015： 微信ClawBot(WechatClawBot)</li><li>10011： LINE(Line)</li><li>10012： Telegram(Telegram)</li><li>10016： 飞书机器人(Lark) </li></ul><p>C端场景（Scene=1时）只支持10014和10015</p>
                     * 
                     */
                    int64_t GetChannelType() const;

                    /**
                     * 设置<p>渠道类型，详见ChannelType枚举</p><p>枚举值：</p><ul><li>10000： 微信服务号(Wechat)</li><li>10002： 企微应用(WeComApp)</li><li>10004： 微信客服(WechatCustomerService)</li><li>10009： 企微智能机器人(WeComRobot)</li><li>10013： 钉钉机器人(DingTalk)</li><li>10014： 企微智能机器人WebSocket(WeComRobot)</li><li>10015： 微信ClawBot(WechatClawBot)</li><li>10011： LINE(Line)</li><li>10012： Telegram(Telegram)</li><li>10016： 飞书机器人(Lark) </li></ul><p>C端场景（Scene=1时）只支持10014和10015</p>
                     * @param _channelType <p>渠道类型，详见ChannelType枚举</p><p>枚举值：</p><ul><li>10000： 微信服务号(Wechat)</li><li>10002： 企微应用(WeComApp)</li><li>10004： 微信客服(WechatCustomerService)</li><li>10009： 企微智能机器人(WeComRobot)</li><li>10013： 钉钉机器人(DingTalk)</li><li>10014： 企微智能机器人WebSocket(WeComRobot)</li><li>10015： 微信ClawBot(WechatClawBot)</li><li>10011： LINE(Line)</li><li>10012： Telegram(Telegram)</li><li>10016： 飞书机器人(Lark) </li></ul><p>C端场景（Scene=1时）只支持10014和10015</p>
                     * 
                     */
                    void SetChannelType(const int64_t& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Description <p>备注</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _description <p>备注</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>钉钉机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DingTalk <p>钉钉机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DingTalkChannelConfig GetDingTalk() const;

                    /**
                     * 设置<p>钉钉机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dingTalk <p>钉钉机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDingTalk(const DingTalkChannelConfig& _dingTalk);

                    /**
                     * 判断参数 DingTalk 是否已赋值
                     * @return DingTalk 是否已赋值
                     * 
                     */
                    bool DingTalkHasBeenSet() const;

                    /**
                     * 获取<p>飞书机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lark <p>飞书机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LarkChannelConfig GetLark() const;

                    /**
                     * 设置<p>飞书机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lark <p>飞书机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLark(const LarkChannelConfig& _lark);

                    /**
                     * 判断参数 Lark 是否已赋值
                     * @return Lark 是否已赋值
                     * 
                     */
                    bool LarkHasBeenSet() const;

                    /**
                     * 获取<p>LINE配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Line <p>LINE配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LineChannelConfig GetLine() const;

                    /**
                     * 设置<p>LINE配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _line <p>LINE配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLine(const LineChannelConfig& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取<p>渠道场景：0-B端场景，1-C端场景</p>
                     * @return Scene <p>渠道场景：0-B端场景，1-C端场景</p>
                     * 
                     */
                    int64_t GetScene() const;

                    /**
                     * 设置<p>渠道场景：0-B端场景，1-C端场景</p>
                     * @param _scene <p>渠道场景：0-B端场景，1-C端场景</p>
                     * 
                     */
                    void SetScene(const int64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取<p>Telegram配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Telegram <p>Telegram配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TelegramChannelConfig GetTelegram() const;

                    /**
                     * 设置<p>Telegram配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _telegram <p>Telegram配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTelegram(const TelegramChannelConfig& _telegram);

                    /**
                     * 判断参数 Telegram 是否已赋值
                     * @return Telegram 是否已赋值
                     * 
                     */
                    bool TelegramHasBeenSet() const;

                    /**
                     * 获取<p>归属用户+Agent运行态标识（C端）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAgent <p>归属用户+Agent运行态标识（C端）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UserAgentReference GetUserAgent() const;

                    /**
                     * 设置<p>归属用户+Agent运行态标识（C端）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAgent <p>归属用户+Agent运行态标识（C端）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserAgent(const UserAgentReference& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取<p>微信公众号/小程序配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Wechat <p>微信公众号/小程序配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WechatChannelConfig GetWechat() const;

                    /**
                     * 设置<p>微信公众号/小程序配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechat <p>微信公众号/小程序配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechat(const WechatChannelConfig& _wechat);

                    /**
                     * 判断参数 Wechat 是否已赋值
                     * @return Wechat 是否已赋值
                     * 
                     */
                    bool WechatHasBeenSet() const;

                    /**
                     * 获取<p>微信ClawBot配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatClawBot <p>微信ClawBot配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WechatClawBotChannelConfig GetWechatClawBot() const;

                    /**
                     * 设置<p>微信ClawBot配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatClawBot <p>微信ClawBot配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatClawBot(const WechatClawBotChannelConfig& _wechatClawBot);

                    /**
                     * 判断参数 WechatClawBot 是否已赋值
                     * @return WechatClawBot 是否已赋值
                     * 
                     */
                    bool WechatClawBotHasBeenSet() const;

                    /**
                     * 获取<p>微信客服配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WechatCustomerService <p>微信客服配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WechatCustomerServiceChannelConfig GetWechatCustomerService() const;

                    /**
                     * 设置<p>微信客服配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wechatCustomerService <p>微信客服配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWechatCustomerService(const WechatCustomerServiceChannelConfig& _wechatCustomerService);

                    /**
                     * 判断参数 WechatCustomerService 是否已赋值
                     * @return WechatCustomerService 是否已赋值
                     * 
                     */
                    bool WechatCustomerServiceHasBeenSet() const;

                    /**
                     * 获取<p>企微应用配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WecomApp <p>企微应用配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WecomAppChannelConfig GetWecomApp() const;

                    /**
                     * 设置<p>企微应用配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wecomApp <p>企微应用配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWecomApp(const WecomAppChannelConfig& _wecomApp);

                    /**
                     * 判断参数 WecomApp 是否已赋值
                     * @return WecomApp 是否已赋值
                     * 
                     */
                    bool WecomAppHasBeenSet() const;

                    /**
                     * 获取<p>企微机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WecomRobot <p>企微机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WecomRobotChannelConfig GetWecomRobot() const;

                    /**
                     * 设置<p>企微机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wecomRobot <p>企微机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWecomRobot(const WecomRobotChannelConfig& _wecomRobot);

                    /**
                     * 判断参数 WecomRobot 是否已赋值
                     * @return WecomRobot 是否已赋值
                     * 
                     */
                    bool WecomRobotHasBeenSet() const;

                private:

                    /**
                     * <p>渠道名称</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>渠道类型，详见ChannelType枚举</p><p>枚举值：</p><ul><li>10000： 微信服务号(Wechat)</li><li>10002： 企微应用(WeComApp)</li><li>10004： 微信客服(WechatCustomerService)</li><li>10009： 企微智能机器人(WeComRobot)</li><li>10013： 钉钉机器人(DingTalk)</li><li>10014： 企微智能机器人WebSocket(WeComRobot)</li><li>10015： 微信ClawBot(WechatClawBot)</li><li>10011： LINE(Line)</li><li>10012： Telegram(Telegram)</li><li>10016： 飞书机器人(Lark) </li></ul><p>C端场景（Scene=1时）只支持10014和10015</p>
                     */
                    int64_t m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>钉钉机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DingTalkChannelConfig m_dingTalk;
                    bool m_dingTalkHasBeenSet;

                    /**
                     * <p>飞书机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LarkChannelConfig m_lark;
                    bool m_larkHasBeenSet;

                    /**
                     * <p>LINE配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LineChannelConfig m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * <p>渠道场景：0-B端场景，1-C端场景</p>
                     */
                    int64_t m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>Telegram配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TelegramChannelConfig m_telegram;
                    bool m_telegramHasBeenSet;

                    /**
                     * <p>归属用户+Agent运行态标识（C端）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserAgentReference m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * <p>微信公众号/小程序配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatChannelConfig m_wechat;
                    bool m_wechatHasBeenSet;

                    /**
                     * <p>微信ClawBot配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatClawBotChannelConfig m_wechatClawBot;
                    bool m_wechatClawBotHasBeenSet;

                    /**
                     * <p>微信客服配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WechatCustomerServiceChannelConfig m_wechatCustomerService;
                    bool m_wechatCustomerServiceHasBeenSet;

                    /**
                     * <p>企微应用配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WecomAppChannelConfig m_wecomApp;
                    bool m_wecomAppHasBeenSet;

                    /**
                     * <p>企微机器人配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WecomRobotChannelConfig m_wecomRobot;
                    bool m_wecomRobotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CHANNELSPEC_H_
