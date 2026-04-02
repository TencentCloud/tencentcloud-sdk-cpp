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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CHOICE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CHOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Delta.h>
#include <tencentcloud/cls/v20201016/model/Message.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 返回的回复, 支持多个
                */
                class Choice : public AbstractModel
                {
                public:
                    Choice();
                    ~Choice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>结束标志位，可能为 stop、 sensitive或者tool_calls。<br>stop 表示输出正常结束。<br>sensitive 表示安全审核未通过。<br>tool_calls 标识函数调用。</p><p>注意：<br>可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。</p>
                     * @return FinishReason <p>结束标志位，可能为 stop、 sensitive或者tool_calls。<br>stop 表示输出正常结束。<br>sensitive 表示安全审核未通过。<br>tool_calls 标识函数调用。</p><p>注意：<br>可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。</p>
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置<p>结束标志位，可能为 stop、 sensitive或者tool_calls。<br>stop 表示输出正常结束。<br>sensitive 表示安全审核未通过。<br>tool_calls 标识函数调用。</p><p>注意：<br>可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。</p>
                     * @param _finishReason <p>结束标志位，可能为 stop、 sensitive或者tool_calls。<br>stop 表示输出正常结束。<br>sensitive 表示安全审核未通过。<br>tool_calls 标识函数调用。</p><p>注意：<br>可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。</p>
                     * 
                     */
                    void SetFinishReason(const std::string& _finishReason);

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     * 
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取<p>增量返回值，流式调用时使用该字段。</p>
                     * @return Delta <p>增量返回值，流式调用时使用该字段。</p>
                     * 
                     */
                    Delta GetDelta() const;

                    /**
                     * 设置<p>增量返回值，流式调用时使用该字段。</p>
                     * @param _delta <p>增量返回值，流式调用时使用该字段。</p>
                     * 
                     */
                    void SetDelta(const Delta& _delta);

                    /**
                     * 判断参数 Delta 是否已赋值
                     * @return Delta 是否已赋值
                     * 
                     */
                    bool DeltaHasBeenSet() const;

                    /**
                     * 获取<p>返回值，非流式调用时使用该字段。</p>
                     * @return Message <p>返回值，非流式调用时使用该字段。</p>
                     * 
                     */
                    Message GetMessage() const;

                    /**
                     * 设置<p>返回值，非流式调用时使用该字段。</p>
                     * @param _message <p>返回值，非流式调用时使用该字段。</p>
                     * 
                     */
                    void SetMessage(const Message& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>索引值，流式调用时使用该字段。</p>
                     * @return Index <p>索引值，流式调用时使用该字段。</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>索引值，流式调用时使用该字段。</p>
                     * @param _index <p>索引值，流式调用时使用该字段。</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * <p>结束标志位，可能为 stop、 sensitive或者tool_calls。<br>stop 表示输出正常结束。<br>sensitive 表示安全审核未通过。<br>tool_calls 标识函数调用。</p><p>注意：<br>可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。</p>
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * <p>增量返回值，流式调用时使用该字段。</p>
                     */
                    Delta m_delta;
                    bool m_deltaHasBeenSet;

                    /**
                     * <p>返回值，非流式调用时使用该字段。</p>
                     */
                    Message m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>索引值，流式调用时使用该字段。</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CHOICE_H_
