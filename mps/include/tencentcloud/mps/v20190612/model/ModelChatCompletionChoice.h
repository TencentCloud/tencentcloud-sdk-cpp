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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATCOMPLETIONCHOICE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATCOMPLETIONCHOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ModelChatResponseMessage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 单条候选回复。
                */
                class ModelChatCompletionChoice : public AbstractModel
                {
                public:
                    ModelChatCompletionChoice();
                    ~ModelChatCompletionChoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>候选回复在候选数组中的索引</p>
                     * @return Index <p>候选回复在候选数组中的索引</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>候选回复在候选数组中的索引</p>
                     * @param _index <p>候选回复在候选数组中的索引</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>结束原因</p>
                     * @return FinishReason <p>结束原因</p>
                     * 
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置<p>结束原因</p>
                     * @param _finishReason <p>结束原因</p>
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
                     * 获取<p>模型回复消息体</p>
                     * @return Message <p>模型回复消息体</p>
                     * 
                     */
                    ModelChatResponseMessage GetMessage() const;

                    /**
                     * 设置<p>模型回复消息体</p>
                     * @param _message <p>模型回复消息体</p>
                     * 
                     */
                    void SetMessage(const ModelChatResponseMessage& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>候选回复在候选数组中的索引</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>结束原因</p>
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * <p>模型回复消息体</p>
                     */
                    ModelChatResponseMessage m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODELCHATCOMPLETIONCHOICE_H_
