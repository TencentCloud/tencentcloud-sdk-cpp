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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TIMERPUSHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TIMERPUSHCONFIG_H_

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
                * TimerPushConfig
                */
                class TimerPushConfig : public AbstractModel
                {
                public:
                    TimerPushConfig();
                    ~TimerPushConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 不推送 |
| 2 | 微信公众号 |
| 3 | 企业微信 AI 机器人 |
                     * @return PushChannel 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 不推送 |
| 2 | 微信公众号 |
| 3 | 企业微信 AI 机器人 |
                     * 
                     */
                    int64_t GetPushChannel() const;

                    /**
                     * 设置
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 不推送 |
| 2 | 微信公众号 |
| 3 | 企业微信 AI 机器人 |
                     * @param _pushChannel 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 不推送 |
| 2 | 微信公众号 |
| 3 | 企业微信 AI 机器人 |
                     * 
                     */
                    void SetPushChannel(const int64_t& _pushChannel);

                    /**
                     * 判断参数 PushChannel 是否已赋值
                     * @return PushChannel 是否已赋值
                     * 
                     */
                    bool PushChannelHasBeenSet() const;

                    /**
                     * 获取推送会话ID
                     * @return PushTargetId 推送会话ID
                     * 
                     */
                    std::string GetPushTargetId() const;

                    /**
                     * 设置推送会话ID
                     * @param _pushTargetId 推送会话ID
                     * 
                     */
                    void SetPushTargetId(const std::string& _pushTargetId);

                    /**
                     * 判断参数 PushTargetId 是否已赋值
                     * @return PushTargetId 是否已赋值
                     * 
                     */
                    bool PushTargetIdHasBeenSet() const;

                    /**
                     * 获取
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 用户 (微信公众号 openid) |
| 2 | 群聊 (企微机器人 chat_id) |
                     * @return PushTargetType 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 用户 (微信公众号 openid) |
| 2 | 群聊 (企微机器人 chat_id) |
                     * 
                     */
                    int64_t GetPushTargetType() const;

                    /**
                     * 设置
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 用户 (微信公众号 openid) |
| 2 | 群聊 (企微机器人 chat_id) |
                     * @param _pushTargetType 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 用户 (微信公众号 openid) |
| 2 | 群聊 (企微机器人 chat_id) |
                     * 
                     */
                    void SetPushTargetType(const int64_t& _pushTargetType);

                    /**
                     * 判断参数 PushTargetType 是否已赋值
                     * @return PushTargetType 是否已赋值
                     * 
                     */
                    bool PushTargetTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return PushWebhookUrl 
                     * 
                     */
                    std::string GetPushWebhookUrl() const;

                    /**
                     * 设置
                     * @param _pushWebhookUrl 
                     * 
                     */
                    void SetPushWebhookUrl(const std::string& _pushWebhookUrl);

                    /**
                     * 判断参数 PushWebhookUrl 是否已赋值
                     * @return PushWebhookUrl 是否已赋值
                     * 
                     */
                    bool PushWebhookUrlHasBeenSet() const;

                private:

                    /**
                     * 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 不推送 |
| 2 | 微信公众号 |
| 3 | 企业微信 AI 机器人 |
                     */
                    int64_t m_pushChannel;
                    bool m_pushChannelHasBeenSet;

                    /**
                     * 推送会话ID
                     */
                    std::string m_pushTargetId;
                    bool m_pushTargetIdHasBeenSet;

                    /**
                     * 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 用户 (微信公众号 openid) |
| 2 | 群聊 (企微机器人 chat_id) |
                     */
                    int64_t m_pushTargetType;
                    bool m_pushTargetTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_pushWebhookUrl;
                    bool m_pushWebhookUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TIMERPUSHCONFIG_H_
