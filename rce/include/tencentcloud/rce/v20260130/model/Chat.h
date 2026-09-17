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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_CHAT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_CHAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 聊天信息
                */
                class Chat : public AbstractModel
                {
                public:
                    Chat();
                    ~Chat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>聊天文本内容，不含HTML、不含昵称，限2000字符</p>
                     * @return ChatText <p>聊天文本内容，不含HTML、不含昵称，限2000字符</p>
                     * 
                     */
                    std::string GetChatText() const;

                    /**
                     * 设置<p>聊天文本内容，不含HTML、不含昵称，限2000字符</p>
                     * @param _chatText <p>聊天文本内容，不含HTML、不含昵称，限2000字符</p>
                     * 
                     */
                    void SetChatText(const std::string& _chatText);

                    /**
                     * 判断参数 ChatText 是否已赋值
                     * @return ChatText 是否已赋值
                     * 
                     */
                    bool ChatTextHasBeenSet() const;

                    /**
                     * 获取<p>频道类型，枚举值：world-世界 / guild-公会 / single-单聊 / other-其他</p>
                     * @return ChannelType <p>频道类型，枚举值：world-世界 / guild-公会 / single-单聊 / other-其他</p>
                     * 
                     */
                    std::string GetChannelType() const;

                    /**
                     * 设置<p>频道类型，枚举值：world-世界 / guild-公会 / single-单聊 / other-其他</p>
                     * @param _channelType <p>频道类型，枚举值：world-世界 / guild-公会 / single-单聊 / other-其他</p>
                     * 
                     */
                    void SetChannelType(const std::string& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取<p>群/频道唯一ID（单聊时为空）</p>
                     * @return GroupId <p>群/频道唯一ID（单聊时为空）</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>群/频道唯一ID（单聊时为空）</p>
                     * @param _groupId <p>群/频道唯一ID（单聊时为空）</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>群/频道名称</p>
                     * @return GroupName <p>群/频道名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>群/频道名称</p>
                     * @param _groupName <p>群/频道名称</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>群主/管理员ID</p>
                     * @return GroupAdministrator <p>群主/管理员ID</p>
                     * 
                     */
                    std::string GetGroupAdministrator() const;

                    /**
                     * 设置<p>群主/管理员ID</p>
                     * @param _groupAdministrator <p>群主/管理员ID</p>
                     * 
                     */
                    void SetGroupAdministrator(const std::string& _groupAdministrator);

                    /**
                     * 判断参数 GroupAdministrator 是否已赋值
                     * @return GroupAdministrator 是否已赋值
                     * 
                     */
                    bool GroupAdministratorHasBeenSet() const;

                private:

                    /**
                     * <p>聊天文本内容，不含HTML、不含昵称，限2000字符</p>
                     */
                    std::string m_chatText;
                    bool m_chatTextHasBeenSet;

                    /**
                     * <p>频道类型，枚举值：world-世界 / guild-公会 / single-单聊 / other-其他</p>
                     */
                    std::string m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * <p>群/频道唯一ID（单聊时为空）</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>群/频道名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>群主/管理员ID</p>
                     */
                    std::string m_groupAdministrator;
                    bool m_groupAdministratorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_CHAT_H_
