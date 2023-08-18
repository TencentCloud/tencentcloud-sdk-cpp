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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TESTINGTEXTGENERATIONRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TESTINGTEXTGENERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/TextGenerationChoices.h>
#include <tencentcloud/nlp/v20190408/model/TextGenerationUsage.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TestingTextGeneration返回参数结构体
                */
                class TestingTextGenerationResponse : public AbstractModel
                {
                public:
                    TestingTextGenerationResponse();
                    ~TestingTextGenerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取结果
                     * @return Choices 结果
                     * 
                     */
                    std::vector<TextGenerationChoices> GetChoices() const;

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                    /**
                     * 获取unix时间戳的字符串
                     * @return Created unix时间戳的字符串
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
                     * 获取会话id
                     * @return Id 会话id
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
                     * 获取模型名
                     * @return Model 模型名
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取token数量
                     * @return Usage token数量
                     * 
                     */
                    TextGenerationUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 结果
                     */
                    std::vector<TextGenerationChoices> m_choices;
                    bool m_choicesHasBeenSet;

                    /**
                     * unix时间戳的字符串
                     */
                    int64_t m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * 会话id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 模型名
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * token数量
                     */
                    TextGenerationUsage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TESTINGTEXTGENERATIONRESPONSE_H_
