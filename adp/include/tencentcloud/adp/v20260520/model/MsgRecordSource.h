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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDSOURCE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDSOURCE_H_

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
                * MsgRecordSource
                */
                class MsgRecordSource : public AbstractModel
                {
                public:
                    MsgRecordSource();
                    ~MsgRecordSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对话消息的接入渠道类型：0=未指定, 1=坐席, 2=体验页面(腾讯云), 3=评测端对话, 4=体验页面(手机号), 5=对话端API接入, 6=评测任务对话, 10=工作流调试, 10000=微信公众号, 10001=微信服务号, 10002=企微应用, 10003=网页组件, 10004=微信客服, 10005=微信小程序, 10006=元器, 10007=应用宝, 10008=元宝, 10009=企微智能机器人, 10010=元器API, 10011=LINE, 10012=Telegram, 10100=电脑管家, 20001=荣耀智能体平台, 20002=小米应用商店；user_id（string）为该渠道下的访客唯一标识。
                     * @return ChannelType 对话消息的接入渠道类型：0=未指定, 1=坐席, 2=体验页面(腾讯云), 3=评测端对话, 4=体验页面(手机号), 5=对话端API接入, 6=评测任务对话, 10=工作流调试, 10000=微信公众号, 10001=微信服务号, 10002=企微应用, 10003=网页组件, 10004=微信客服, 10005=微信小程序, 10006=元器, 10007=应用宝, 10008=元宝, 10009=企微智能机器人, 10010=元器API, 10011=LINE, 10012=Telegram, 10100=电脑管家, 20001=荣耀智能体平台, 20002=小米应用商店；user_id（string）为该渠道下的访客唯一标识。
                     * 
                     */
                    uint64_t GetChannelType() const;

                    /**
                     * 设置对话消息的接入渠道类型：0=未指定, 1=坐席, 2=体验页面(腾讯云), 3=评测端对话, 4=体验页面(手机号), 5=对话端API接入, 6=评测任务对话, 10=工作流调试, 10000=微信公众号, 10001=微信服务号, 10002=企微应用, 10003=网页组件, 10004=微信客服, 10005=微信小程序, 10006=元器, 10007=应用宝, 10008=元宝, 10009=企微智能机器人, 10010=元器API, 10011=LINE, 10012=Telegram, 10100=电脑管家, 20001=荣耀智能体平台, 20002=小米应用商店；user_id（string）为该渠道下的访客唯一标识。
                     * @param _channelType 对话消息的接入渠道类型：0=未指定, 1=坐席, 2=体验页面(腾讯云), 3=评测端对话, 4=体验页面(手机号), 5=对话端API接入, 6=评测任务对话, 10=工作流调试, 10000=微信公众号, 10001=微信服务号, 10002=企微应用, 10003=网页组件, 10004=微信客服, 10005=微信小程序, 10006=元器, 10007=应用宝, 10008=元宝, 10009=企微智能机器人, 10010=元器API, 10011=LINE, 10012=Telegram, 10100=电脑管家, 20001=荣耀智能体平台, 20002=小米应用商店；user_id（string）为该渠道下的访客唯一标识。
                     * 
                     */
                    void SetChannelType(const uint64_t& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return FromId 用户ID
                     * 
                     */
                    std::string GetFromId() const;

                    /**
                     * 设置用户ID
                     * @param _fromId 用户ID
                     * 
                     */
                    void SetFromId(const std::string& _fromId);

                    /**
                     * 判断参数 FromId 是否已赋值
                     * @return FromId 是否已赋值
                     * 
                     */
                    bool FromIdHasBeenSet() const;

                    /**
                     * 获取消息发送者的用户来源类型：1=用户（访客/C端用户）, 2=机器人（AI回复）, 3=坐席（人工客服）；from_id（string）为该来源类型下的用户唯一标识 ID。
                     * @return FromType 消息发送者的用户来源类型：1=用户（访客/C端用户）, 2=机器人（AI回复）, 3=坐席（人工客服）；from_id（string）为该来源类型下的用户唯一标识 ID。
                     * 
                     */
                    uint64_t GetFromType() const;

                    /**
                     * 设置消息发送者的用户来源类型：1=用户（访客/C端用户）, 2=机器人（AI回复）, 3=坐席（人工客服）；from_id（string）为该来源类型下的用户唯一标识 ID。
                     * @param _fromType 消息发送者的用户来源类型：1=用户（访客/C端用户）, 2=机器人（AI回复）, 3=坐席（人工客服）；from_id（string）为该来源类型下的用户唯一标识 ID。
                     * 
                     */
                    void SetFromType(const uint64_t& _fromType);

                    /**
                     * 判断参数 FromType 是否已赋值
                     * @return FromType 是否已赋值
                     * 
                     */
                    bool FromTypeHasBeenSet() const;

                    /**
                     * 获取用户头像
                     * @return UserAvatar 用户头像
                     * 
                     */
                    std::string GetUserAvatar() const;

                    /**
                     * 设置用户头像
                     * @param _userAvatar 用户头像
                     * 
                     */
                    void SetUserAvatar(const std::string& _userAvatar);

                    /**
                     * 判断参数 UserAvatar 是否已赋值
                     * @return UserAvatar 是否已赋值
                     * 
                     */
                    bool UserAvatarHasBeenSet() const;

                    /**
                     * 获取访客ID
                     * @return UserId 访客ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置访客ID
                     * @param _userId 访客ID
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
                     * 获取访客名称
                     * @return UserNickname 访客名称
                     * 
                     */
                    std::string GetUserNickname() const;

                    /**
                     * 设置访客名称
                     * @param _userNickname 访客名称
                     * 
                     */
                    void SetUserNickname(const std::string& _userNickname);

                    /**
                     * 判断参数 UserNickname 是否已赋值
                     * @return UserNickname 是否已赋值
                     * 
                     */
                    bool UserNicknameHasBeenSet() const;

                private:

                    /**
                     * 对话消息的接入渠道类型：0=未指定, 1=坐席, 2=体验页面(腾讯云), 3=评测端对话, 4=体验页面(手机号), 5=对话端API接入, 6=评测任务对话, 10=工作流调试, 10000=微信公众号, 10001=微信服务号, 10002=企微应用, 10003=网页组件, 10004=微信客服, 10005=微信小程序, 10006=元器, 10007=应用宝, 10008=元宝, 10009=企微智能机器人, 10010=元器API, 10011=LINE, 10012=Telegram, 10100=电脑管家, 20001=荣耀智能体平台, 20002=小米应用商店；user_id（string）为该渠道下的访客唯一标识。
                     */
                    uint64_t m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_fromId;
                    bool m_fromIdHasBeenSet;

                    /**
                     * 消息发送者的用户来源类型：1=用户（访客/C端用户）, 2=机器人（AI回复）, 3=坐席（人工客服）；from_id（string）为该来源类型下的用户唯一标识 ID。
                     */
                    uint64_t m_fromType;
                    bool m_fromTypeHasBeenSet;

                    /**
                     * 用户头像
                     */
                    std::string m_userAvatar;
                    bool m_userAvatarHasBeenSet;

                    /**
                     * 访客ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 访客名称
                     */
                    std::string m_userNickname;
                    bool m_userNicknameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDSOURCE_H_
