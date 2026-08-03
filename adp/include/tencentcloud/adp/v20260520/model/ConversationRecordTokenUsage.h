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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDTOKENUSAGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDTOKENUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 单次对话 token 消耗信息
                */
                class ConversationRecordTokenUsage : public AbstractModel
                {
                public:
                    ConversationRecordTokenUsage();
                    ~ConversationRecordTokenUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入 token 总数</p>
                     * @return InputTokens <p>输入 token 总数</p>
                     * 
                     */
                    std::string GetInputTokens() const;

                    /**
                     * 设置<p>输入 token 总数</p>
                     * @param _inputTokens <p>输入 token 总数</p>
                     * 
                     */
                    void SetInputTokens(const std::string& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>输出 token 总数</p>
                     * @return OutputTokens <p>输出 token 总数</p>
                     * 
                     */
                    std::string GetOutputTokens() const;

                    /**
                     * 设置<p>输出 token 总数</p>
                     * @param _outputTokens <p>输出 token 总数</p>
                     * 
                     */
                    void SetOutputTokens(const std::string& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>消耗 token 总数</p>
                     * @return TotalTokens <p>消耗 token 总数</p>
                     * 
                     */
                    std::string GetTotalTokens() const;

                    /**
                     * 设置<p>消耗 token 总数</p>
                     * @param _totalTokens <p>消耗 token 总数</p>
                     * 
                     */
                    void SetTotalTokens(const std::string& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取<p>缓存命中 token 总数</p>
                     * @return CachedTokens <p>缓存命中 token 总数</p>
                     * 
                     */
                    std::string GetCachedTokens() const;

                    /**
                     * 设置<p>缓存命中 token 总数</p>
                     * @param _cachedTokens <p>缓存命中 token 总数</p>
                     * 
                     */
                    void SetCachedTokens(const std::string& _cachedTokens);

                    /**
                     * 判断参数 CachedTokens 是否已赋值
                     * @return CachedTokens 是否已赋值
                     * 
                     */
                    bool CachedTokensHasBeenSet() const;

                    /**
                     * 获取<p>推理 token 总数</p>
                     * @return ReasoningTokens <p>推理 token 总数</p>
                     * 
                     */
                    std::string GetReasoningTokens() const;

                    /**
                     * 设置<p>推理 token 总数</p>
                     * @param _reasoningTokens <p>推理 token 总数</p>
                     * 
                     */
                    void SetReasoningTokens(const std::string& _reasoningTokens);

                    /**
                     * 判断参数 ReasoningTokens 是否已赋值
                     * @return ReasoningTokens 是否已赋值
                     * 
                     */
                    bool ReasoningTokensHasBeenSet() const;

                private:

                    /**
                     * <p>输入 token 总数</p>
                     */
                    std::string m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>输出 token 总数</p>
                     */
                    std::string m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>消耗 token 总数</p>
                     */
                    std::string m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * <p>缓存命中 token 总数</p>
                     */
                    std::string m_cachedTokens;
                    bool m_cachedTokensHasBeenSet;

                    /**
                     * <p>推理 token 总数</p>
                     */
                    std::string m_reasoningTokens;
                    bool m_reasoningTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONRECORDTOKENUSAGE_H_
