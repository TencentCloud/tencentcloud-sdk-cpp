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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKCONVERSATIONCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKCONVERSATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 对话行为配置
                */
                class TalkConversationConfig : public AbstractModel
                {
                public:
                    TalkConversationConfig();
                    ~TalkConversationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取欢迎语
                     * @return WelcomeMessage 欢迎语
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置欢迎语
                     * @param _welcomeMessage 欢迎语
                     * 
                     */
                    void SetWelcomeMessage(const std::string& _welcomeMessage);

                    /**
                     * 判断参数 WelcomeMessage 是否已赋值
                     * @return WelcomeMessage 是否已赋值
                     * 
                     */
                    bool WelcomeMessageHasBeenSet() const;

                    /**
                     * 获取欢迎语优先级。`0`=默认，`1`=高优不可打断
                     * @return WelcomeMessagePriority 欢迎语优先级。`0`=默认，`1`=高优不可打断
                     * 
                     */
                    int64_t GetWelcomeMessagePriority() const;

                    /**
                     * 设置欢迎语优先级。`0`=默认，`1`=高优不可打断
                     * @param _welcomeMessagePriority 欢迎语优先级。`0`=默认，`1`=高优不可打断
                     * 
                     */
                    void SetWelcomeMessagePriority(const int64_t& _welcomeMessagePriority);

                    /**
                     * 判断参数 WelcomeMessagePriority 是否已赋值
                     * @return WelcomeMessagePriority 是否已赋值
                     * 
                     */
                    bool WelcomeMessagePriorityHasBeenSet() const;

                    /**
                     * 获取智能打断模式。`0`=服务端自动打断，`1`=端上发送打断信令
                     * @return InterruptMode 智能打断模式。`0`=服务端自动打断，`1`=端上发送打断信令
                     * 
                     */
                    int64_t GetInterruptMode() const;

                    /**
                     * 设置智能打断模式。`0`=服务端自动打断，`1`=端上发送打断信令
                     * @param _interruptMode 智能打断模式。`0`=服务端自动打断，`1`=端上发送打断信令
                     * 
                     */
                    void SetInterruptMode(const int64_t& _interruptMode);

                    /**
                     * 判断参数 InterruptMode 是否已赋值
                     * @return InterruptMode 是否已赋值
                     * 
                     */
                    bool InterruptModeHasBeenSet() const;

                    /**
                     * 获取打断词列表。AI 说话期间，仅当用户说出列表中的词才打断 AI；不会触发新的回复
                     * @return InterruptWordList 打断词列表。AI 说话期间，仅当用户说出列表中的词才打断 AI；不会触发新的回复
                     * 
                     */
                    std::vector<std::string> GetInterruptWordList() const;

                    /**
                     * 设置打断词列表。AI 说话期间，仅当用户说出列表中的词才打断 AI；不会触发新的回复
                     * @param _interruptWordList 打断词列表。AI 说话期间，仅当用户说出列表中的词才打断 AI；不会触发新的回复
                     * 
                     */
                    void SetInterruptWordList(const std::vector<std::string>& _interruptWordList);

                    /**
                     * 判断参数 InterruptWordList 是否已赋值
                     * @return InterruptWordList 是否已赋值
                     * 
                     */
                    bool InterruptWordListHasBeenSet() const;

                private:

                    /**
                     * 欢迎语
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                    /**
                     * 欢迎语优先级。`0`=默认，`1`=高优不可打断
                     */
                    int64_t m_welcomeMessagePriority;
                    bool m_welcomeMessagePriorityHasBeenSet;

                    /**
                     * 智能打断模式。`0`=服务端自动打断，`1`=端上发送打断信令
                     */
                    int64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * 打断词列表。AI 说话期间，仅当用户说出列表中的词才打断 AI；不会触发新的回复
                     */
                    std::vector<std::string> m_interruptWordList;
                    bool m_interruptWordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKCONVERSATIONCONFIG_H_
