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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TOKENSUSAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TOKENSUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * token 的用量
                */
                class TokensUsage : public AbstractModel
                {
                public:
                    TokensUsage();
                    ~TokensUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入token量</p>
                     * @return InputTokens <p>输入token量</p>
                     * 
                     */
                    uint64_t GetInputTokens() const;

                    /**
                     * 设置<p>输入token量</p>
                     * @param _inputTokens <p>输入token量</p>
                     * 
                     */
                    void SetInputTokens(const uint64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>输出token量</p>
                     * @return OutputTokens <p>输出token量</p>
                     * 
                     */
                    uint64_t GetOutputTokens() const;

                    /**
                     * 设置<p>输出token量</p>
                     * @param _outputTokens <p>输出token量</p>
                     * 
                     */
                    void SetOutputTokens(const uint64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>总token量，一般是输入+输出</p>
                     * @return TotalTokens <p>总token量，一般是输入+输出</p>
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置<p>总token量，一般是输入+输出</p>
                     * @param _totalTokens <p>总token量，一般是输入+输出</p>
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
                     * <p>输入token量</p>
                     */
                    uint64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>输出token量</p>
                     */
                    uint64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>总token量，一般是输入+输出</p>
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TOKENSUSAGE_H_
