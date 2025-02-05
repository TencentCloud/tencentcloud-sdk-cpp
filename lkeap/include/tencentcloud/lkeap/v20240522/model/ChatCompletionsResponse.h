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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/ChatUsage.h>
#include <tencentcloud/lkeap/v20240522/model/Choice.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * ChatCompletions返回参数结构体
                */
                class ChatCompletionsResponse : public AbstractModel
                {
                public:
                    ChatCompletionsResponse();
                    ~ChatCompletionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unix 时间戳，单位为秒。
                     * @return Created Unix 时间戳，单位为秒。
                     * 
                     */
                    int64_t GetCreated() const;

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     * 
                     */
                    bool CreatedHasBeenSet() const;

                    /**
                     * 获取Token 统计信息。
按照总 Token 数量计费。
                     * @return Usage Token 统计信息。
按照总 Token 数量计费。
                     * 
                     */
                    ChatUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取本次请求的 RequestId。
                     * @return Id 本次请求的 RequestId。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取回复内容。
                     * @return Choices 回复内容。
                     * 
                     */
                    std::vector<Choice> GetChoices() const;

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                    /**
                     * 获取模型名称。
                     * @return Model 模型名称。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * Unix 时间戳，单位为秒。
                     */
                    int64_t m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * Token 统计信息。
按照总 Token 数量计费。
                     */
                    ChatUsage m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 本次请求的 RequestId。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 回复内容。
                     */
                    std::vector<Choice> m_choices;
                    bool m_choicesHasBeenSet;

                    /**
                     * 模型名称。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSRESPONSE_H_
