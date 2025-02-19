/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CHOICE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CHOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/Delta.h>
#include <tencentcloud/lkeap/v20240522/model/Message.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
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
                     * 获取结束标志位，可能为 stop、 content_filter。
stop 表示输出正常结束。
content_filter 只在开启流式输出审核时会出现，表示安全审核未通过。
                     * @return FinishReason 结束标志位，可能为 stop、 content_filter。
stop 表示输出正常结束。
content_filter 只在开启流式输出审核时会出现，表示安全审核未通过。
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置结束标志位，可能为 stop、 content_filter。
stop 表示输出正常结束。
content_filter 只在开启流式输出审核时会出现，表示安全审核未通过。
                     * @param _finishReason 结束标志位，可能为 stop、 content_filter。
stop 表示输出正常结束。
content_filter 只在开启流式输出审核时会出现，表示安全审核未通过。
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
                     * 获取增量返回值，流式调用时使用该字段。
                     * @return Delta 增量返回值，流式调用时使用该字段。
                     * 
                     */
                    Delta GetDelta() const;

                    /**
                     * 设置增量返回值，流式调用时使用该字段。
                     * @param _delta 增量返回值，流式调用时使用该字段。
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
                     * 获取返回值，非流式调用时使用该字段。
                     * @return Message 返回值，非流式调用时使用该字段。
                     * 
                     */
                    Message GetMessage() const;

                    /**
                     * 设置返回值，非流式调用时使用该字段。
                     * @param _message 返回值，非流式调用时使用该字段。
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
                     * 获取索引值，流式调用时使用该字段。
                     * @return Index 索引值，流式调用时使用该字段。
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置索引值，流式调用时使用该字段。
                     * @param _index 索引值，流式调用时使用该字段。
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
                     * 结束标志位，可能为 stop、 content_filter。
stop 表示输出正常结束。
content_filter 只在开启流式输出审核时会出现，表示安全审核未通过。
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * 增量返回值，流式调用时使用该字段。
                     */
                    Delta m_delta;
                    bool m_deltaHasBeenSet;

                    /**
                     * 返回值，非流式调用时使用该字段。
                     */
                    Message m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 索引值，流式调用时使用该字段。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CHOICE_H_
