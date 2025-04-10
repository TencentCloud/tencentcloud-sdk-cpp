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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_TOKENUSAGE_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_TOKENUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * token使用量
                */
                class TokenUsage : public AbstractModel
                {
                public:
                    TokenUsage();
                    ~TokenUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示prompt的tokens数，多次返回中保持不变
                     * @return PromptTokens 表示prompt的tokens数，多次返回中保持不变
                     * 
                     */
                    uint64_t GetPromptTokens() const;

                    /**
                     * 设置表示prompt的tokens数，多次返回中保持不变
                     * @param _promptTokens 表示prompt的tokens数，多次返回中保持不变
                     * 
                     */
                    void SetPromptTokens(const uint64_t& _promptTokens);

                    /**
                     * 判断参数 PromptTokens 是否已赋值
                     * @return PromptTokens 是否已赋值
                     * 
                     */
                    bool PromptTokensHasBeenSet() const;

                    /**
                     * 获取回答的token总数，在流式返回中，表示到目前为止所有completion的tokens总数，多次返回中持续累加        
                     * @return CompletionTokens 回答的token总数，在流式返回中，表示到目前为止所有completion的tokens总数，多次返回中持续累加        
                     * 
                     */
                    uint64_t GetCompletionTokens() const;

                    /**
                     * 设置回答的token总数，在流式返回中，表示到目前为止所有completion的tokens总数，多次返回中持续累加        
                     * @param _completionTokens 回答的token总数，在流式返回中，表示到目前为止所有completion的tokens总数，多次返回中持续累加        
                     * 
                     */
                    void SetCompletionTokens(const uint64_t& _completionTokens);

                    /**
                     * 判断参数 CompletionTokens 是否已赋值
                     * @return CompletionTokens 是否已赋值
                     * 
                     */
                    bool CompletionTokensHasBeenSet() const;

                    /**
                     * 获取表示prompt_tokens和completion_tokens之和 
                     * @return TotalTokens 表示prompt_tokens和completion_tokens之和 
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置表示prompt_tokens和completion_tokens之和 
                     * @param _totalTokens 表示prompt_tokens和completion_tokens之和 
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * 表示prompt的tokens数，多次返回中保持不变
                     */
                    uint64_t m_promptTokens;
                    bool m_promptTokensHasBeenSet;

                    /**
                     * 回答的token总数，在流式返回中，表示到目前为止所有completion的tokens总数，多次返回中持续累加        
                     */
                    uint64_t m_completionTokens;
                    bool m_completionTokensHasBeenSet;

                    /**
                     * 表示prompt_tokens和completion_tokens之和 
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_TOKENUSAGE_H_
