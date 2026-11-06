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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONINVOKETTS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONINVOKETTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 调用服务端主动发起请求到TTS
                */
                class VoiceConversationInvokeTTS : public AbstractModel
                {
                public:
                    VoiceConversationInvokeTTS();
                    ~VoiceConversationInvokeTTS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>注入的内容。</p>
                     * @return Content <p>注入的内容。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>注入的内容。</p>
                     * @param _content <p>注入的内容。</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>优先级。如果不处于对话中则将注入的内容送给TTS，否则由优先级决定。</p><p>枚举值：</p><ul><li>0： 高优先级，打断当前对话，并清空等待队列将注入的内容送给TTS。</li><li>1： 中优先级，不会打断当前对话，清空等待队列将注入的内容排队。如果不处于对话中则将注入的内容排队。</li><li>2： 低优先级，丢弃注入的内容。</li></ul><p>默认值：0</p><p>InvokeLLM和InvokeTTS的任务队列是同一队列，最多支持一个Invoke事件排队。</p>
                     * @return Priority <p>优先级。如果不处于对话中则将注入的内容送给TTS，否则由优先级决定。</p><p>枚举值：</p><ul><li>0： 高优先级，打断当前对话，并清空等待队列将注入的内容送给TTS。</li><li>1： 中优先级，不会打断当前对话，清空等待队列将注入的内容排队。如果不处于对话中则将注入的内容排队。</li><li>2： 低优先级，丢弃注入的内容。</li></ul><p>默认值：0</p><p>InvokeLLM和InvokeTTS的任务队列是同一队列，最多支持一个Invoke事件排队。</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>优先级。如果不处于对话中则将注入的内容送给TTS，否则由优先级决定。</p><p>枚举值：</p><ul><li>0： 高优先级，打断当前对话，并清空等待队列将注入的内容送给TTS。</li><li>1： 中优先级，不会打断当前对话，清空等待队列将注入的内容排队。如果不处于对话中则将注入的内容排队。</li><li>2： 低优先级，丢弃注入的内容。</li></ul><p>默认值：0</p><p>InvokeLLM和InvokeTTS的任务队列是同一队列，最多支持一个Invoke事件排队。</p>
                     * @param _priority <p>优先级。如果不处于对话中则将注入的内容送给TTS，否则由优先级决定。</p><p>枚举值：</p><ul><li>0： 高优先级，打断当前对话，并清空等待队列将注入的内容送给TTS。</li><li>1： 中优先级，不会打断当前对话，清空等待队列将注入的内容排队。如果不处于对话中则将注入的内容排队。</li><li>2： 低优先级，丢弃注入的内容。</li></ul><p>默认值：0</p><p>InvokeLLM和InvokeTTS的任务队列是同一队列，最多支持一个Invoke事件排队。</p>
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * <p>注入的内容。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>优先级。如果不处于对话中则将注入的内容送给TTS，否则由优先级决定。</p><p>枚举值：</p><ul><li>0： 高优先级，打断当前对话，并清空等待队列将注入的内容送给TTS。</li><li>1： 中优先级，不会打断当前对话，清空等待队列将注入的内容排队。如果不处于对话中则将注入的内容排队。</li><li>2： 低优先级，丢弃注入的内容。</li></ul><p>默认值：0</p><p>InvokeLLM和InvokeTTS的任务队列是同一队列，最多支持一个Invoke事件排队。</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONINVOKETTS_H_
