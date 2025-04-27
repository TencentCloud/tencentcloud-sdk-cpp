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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYDETAIL_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI时延明细
                */
                class AILatencyDetail : public AbstractModel
                {
                public:
                    AILatencyDetail();
                    ~AILatencyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对话ID
                     * @return RoundId 对话ID
                     * 
                     */
                    std::string GetRoundId() const;

                    /**
                     * 设置对话ID
                     * @param _roundId 对话ID
                     * 
                     */
                    void SetRoundId(const std::string& _roundId);

                    /**
                     * 判断参数 RoundId 是否已赋值
                     * @return RoundId 是否已赋值
                     * 
                     */
                    bool RoundIdHasBeenSet() const;

                    /**
                     * 获取asr时延（毫秒）
                     * @return ASRLatency asr时延（毫秒）
                     * 
                     */
                    int64_t GetASRLatency() const;

                    /**
                     * 设置asr时延（毫秒）
                     * @param _aSRLatency asr时延（毫秒）
                     * 
                     */
                    void SetASRLatency(const int64_t& _aSRLatency);

                    /**
                     * 判断参数 ASRLatency 是否已赋值
                     * @return ASRLatency 是否已赋值
                     * 
                     */
                    bool ASRLatencyHasBeenSet() const;

                    /**
                     * 获取tts时延（毫秒）
                     * @return TTSLatency tts时延（毫秒）
                     * 
                     */
                    int64_t GetTTSLatency() const;

                    /**
                     * 设置tts时延（毫秒）
                     * @param _tTSLatency tts时延（毫秒）
                     * 
                     */
                    void SetTTSLatency(const int64_t& _tTSLatency);

                    /**
                     * 判断参数 TTSLatency 是否已赋值
                     * @return TTSLatency 是否已赋值
                     * 
                     */
                    bool TTSLatencyHasBeenSet() const;

                    /**
                     * 获取llm时延（毫秒）
                     * @return LLMLatency llm时延（毫秒）
                     * 
                     */
                    int64_t GetLLMLatency() const;

                    /**
                     * 设置llm时延（毫秒）
                     * @param _lLMLatency llm时延（毫秒）
                     * 
                     */
                    void SetLLMLatency(const int64_t& _lLMLatency);

                    /**
                     * 判断参数 LLMLatency 是否已赋值
                     * @return LLMLatency 是否已赋值
                     * 
                     */
                    bool LLMLatencyHasBeenSet() const;

                    /**
                     * 获取llm首token时延(毫秒)
                     * @return LLMFirstTokenLatency llm首token时延(毫秒)
                     * 
                     */
                    int64_t GetLLMFirstTokenLatency() const;

                    /**
                     * 设置llm首token时延(毫秒)
                     * @param _lLMFirstTokenLatency llm首token时延(毫秒)
                     * 
                     */
                    void SetLLMFirstTokenLatency(const int64_t& _lLMFirstTokenLatency);

                    /**
                     * 判断参数 LLMFirstTokenLatency 是否已赋值
                     * @return LLMFirstTokenLatency 是否已赋值
                     * 
                     */
                    bool LLMFirstTokenLatencyHasBeenSet() const;

                    /**
                     * 获取端到端时延（毫秒）
                     * @return ETELatency 端到端时延（毫秒）
                     * 
                     */
                    int64_t GetETELatency() const;

                    /**
                     * 设置端到端时延（毫秒）
                     * @param _eTELatency 端到端时延（毫秒）
                     * 
                     */
                    void SetETELatency(const int64_t& _eTELatency);

                    /**
                     * 判断参数 ETELatency 是否已赋值
                     * @return ETELatency 是否已赋值
                     * 
                     */
                    bool ETELatencyHasBeenSet() const;

                private:

                    /**
                     * 对话ID
                     */
                    std::string m_roundId;
                    bool m_roundIdHasBeenSet;

                    /**
                     * asr时延（毫秒）
                     */
                    int64_t m_aSRLatency;
                    bool m_aSRLatencyHasBeenSet;

                    /**
                     * tts时延（毫秒）
                     */
                    int64_t m_tTSLatency;
                    bool m_tTSLatencyHasBeenSet;

                    /**
                     * llm时延（毫秒）
                     */
                    int64_t m_lLMLatency;
                    bool m_lLMLatencyHasBeenSet;

                    /**
                     * llm首token时延(毫秒)
                     */
                    int64_t m_lLMFirstTokenLatency;
                    bool m_lLMFirstTokenLatencyHasBeenSet;

                    /**
                     * 端到端时延（毫秒）
                     */
                    int64_t m_eTELatency;
                    bool m_eTELatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYDETAIL_H_
