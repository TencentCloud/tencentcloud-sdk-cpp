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

#ifndef TENCENTCLOUD_AAI_V20180522_MODEL_CHATRESPONSE_H_
#define TENCENTCLOUD_AAI_V20180522_MODEL_CHATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aai
    {
        namespace V20180522
        {
            namespace Model
            {
                /**
                * Chat返回参数结构体
                */
                class ChatResponse : public AbstractModel
                {
                public:
                    ChatResponse();
                    ~ChatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取聊天输出文本
                     * @return Answer 聊天输出文本
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                private:

                    /**
                     * 聊天输出文本
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AAI_V20180522_MODEL_CHATRESPONSE_H_
