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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CREATECHATCOMPLETIONREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CREATECHATCOMPLETIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * CreateChatCompletion请求参数结构体
                */
                class CreateChatCompletionRequest : public AbstractModel
                {
                public:
                    CreateChatCompletionRequest();
                    ~CreateChatCompletionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>输入内容</p>
                     * @return InputContent <p>输入内容</p>
                     * 
                     */
                    std::string GetInputContent() const;

                    /**
                     * 设置<p>输入内容</p>
                     * @param _inputContent <p>输入内容</p>
                     * 
                     */
                    void SetInputContent(const std::string& _inputContent);

                    /**
                     * 判断参数 InputContent 是否已赋值
                     * @return InputContent 是否已赋值
                     * 
                     */
                    bool InputContentHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>对话窗口ID，空值表示新的会话</p>
                     * @return ChatId <p>对话窗口ID，空值表示新的会话</p>
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置<p>对话窗口ID，空值表示新的会话</p>
                     * @param _chatId <p>对话窗口ID，空值表示新的会话</p>
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
                     * 获取<p>是否隐藏</p>
                     * @return IsHidden <p>是否隐藏</p>
                     * 
                     */
                    bool GetIsHidden() const;

                    /**
                     * 设置<p>是否隐藏</p>
                     * @param _isHidden <p>是否隐藏</p>
                     * 
                     */
                    void SetIsHidden(const bool& _isHidden);

                    /**
                     * 判断参数 IsHidden 是否已赋值
                     * @return IsHidden 是否已赋值
                     * 
                     */
                    bool IsHiddenHasBeenSet() const;

                    /**
                     * 获取<p>是否隐藏会话</p>
                     * @return IsChatHidden <p>是否隐藏会话</p>
                     * 
                     */
                    bool GetIsChatHidden() const;

                    /**
                     * 设置<p>是否隐藏会话</p>
                     * @param _isChatHidden <p>是否隐藏会话</p>
                     * 
                     */
                    void SetIsChatHidden(const bool& _isChatHidden);

                    /**
                     * 判断参数 IsChatHidden 是否已赋值
                     * @return IsChatHidden 是否已赋值
                     * 
                     */
                    bool IsChatHiddenHasBeenSet() const;

                private:

                    /**
                     * <p>输入内容</p>
                     */
                    std::string m_inputContent;
                    bool m_inputContentHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>对话窗口ID，空值表示新的会话</p>
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * <p>是否隐藏</p>
                     */
                    bool m_isHidden;
                    bool m_isHiddenHasBeenSet;

                    /**
                     * <p>是否隐藏会话</p>
                     */
                    bool m_isChatHidden;
                    bool m_isChatHiddenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CREATECHATCOMPLETIONREQUEST_H_
