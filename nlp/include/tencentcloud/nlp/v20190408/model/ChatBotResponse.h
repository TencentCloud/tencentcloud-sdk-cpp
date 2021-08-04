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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_CHATBOTRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_CHATBOTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * ChatBot返回参数结构体
                */
                class ChatBotResponse : public AbstractModel
                {
                public:
                    ChatBotResponse();
                    ~ChatBotResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取闲聊回复
                     * @return Reply 闲聊回复
                     */
                    std::string GetReply() const;

                    /**
                     * 判断参数 Reply 是否已赋值
                     * @return Reply 是否已赋值
                     */
                    bool ReplyHasBeenSet() const;

                    /**
                     * 获取对于当前输出回复的自信度
                     * @return Confidence 对于当前输出回复的自信度
                     */
                    double GetConfidence() const;

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 闲聊回复
                     */
                    std::string m_reply;
                    bool m_replyHasBeenSet;

                    /**
                     * 对于当前输出回复的自信度
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_CHATBOTRESPONSE_H_
