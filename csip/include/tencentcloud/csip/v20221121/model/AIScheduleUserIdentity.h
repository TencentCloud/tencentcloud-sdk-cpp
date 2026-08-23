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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEUSERIDENTITY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEUSERIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AI助手用户身份信息
                */
                class AIScheduleUserIdentity : public AbstractModel
                {
                public:
                    AIScheduleUserIdentity();
                    ~AIScheduleUserIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppId <p>appid</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appId <p>appid</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>账号Uin</p>
                     * @return Uin <p>账号Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>账号Uin</p>
                     * @param _uin <p>账号Uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>子账号uin</p>
                     * @return SubUin <p>子账号uin</p>
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>子账号uin</p>
                     * @param _subUin <p>子账号uin</p>
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取<p>用户ID</p>
                     * @return UserId <p>用户ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户ID</p>
                     * @param _userId <p>用户ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>机器人ID</p>
                     * @return BotId <p>机器人ID</p>
                     * 
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置<p>机器人ID</p>
                     * @param _botId <p>机器人ID</p>
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
                     * 获取<p>聊天ID</p>
                     * @return ChatId <p>聊天ID</p>
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置<p>聊天ID</p>
                     * @param _chatId <p>聊天ID</p>
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取<p>渠道标识，如 wecom / qq / wx / feishu / dingtalk / cloud</p>
                     * @return Channel <p>渠道标识，如 wecom / qq / wx / feishu / dingtalk / cloud</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>渠道标识，如 wecom / qq / wx / feishu / dingtalk / cloud</p>
                     * @param _channel <p>渠道标识，如 wecom / qq / wx / feishu / dingtalk / cloud</p>
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>账号Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子账号uin</p>
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>用户ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>机器人ID</p>
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * <p>聊天ID</p>
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * <p>渠道标识，如 wecom / qq / wx / feishu / dingtalk / cloud</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEUSERIDENTITY_H_
