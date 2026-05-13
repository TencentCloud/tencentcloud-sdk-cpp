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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLLATENCYMETRICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLLATENCYMETRICS_H_

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
                * 智能体的响应延时
                */
                class AICallLatencyMetrics : public AbstractModel
                {
                public:
                    AICallLatencyMetrics();
                    ~AICallLatencyMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>asr时延（毫秒）</p><p>-1 表示无 asr时延</p>
                     * @return AsrLatency <p>asr时延（毫秒）</p><p>-1 表示无 asr时延</p>
                     * 
                     */
                    int64_t GetAsrLatency() const;

                    /**
                     * 设置<p>asr时延（毫秒）</p><p>-1 表示无 asr时延</p>
                     * @param _asrLatency <p>asr时延（毫秒）</p><p>-1 表示无 asr时延</p>
                     * 
                     */
                    void SetAsrLatency(const int64_t& _asrLatency);

                    /**
                     * 判断参数 AsrLatency 是否已赋值
                     * @return AsrLatency 是否已赋值
                     * 
                     */
                    bool AsrLatencyHasBeenSet() const;

                    /**
                     * 获取<p>llm首token时延(毫秒)</p>
                     * @return LLMFirstTokenLatency <p>llm首token时延(毫秒)</p>
                     * 
                     */
                    int64_t GetLLMFirstTokenLatency() const;

                    /**
                     * 设置<p>llm首token时延(毫秒)</p>
                     * @param _lLMFirstTokenLatency <p>llm首token时延(毫秒)</p>
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
                     * 获取<p>tts时延（毫秒）</p><p>-1 表示无 tts时延</p>
                     * @return TTSLatency <p>tts时延（毫秒）</p><p>-1 表示无 tts时延</p>
                     * 
                     */
                    int64_t GetTTSLatency() const;

                    /**
                     * 设置<p>tts时延（毫秒）</p><p>-1 表示无 tts时延</p>
                     * @param _tTSLatency <p>tts时延（毫秒）</p><p>-1 表示无 tts时延</p>
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
                     * 获取<p>总时延</p>
                     * @return TotalLatency <p>总时延</p>
                     * 
                     */
                    int64_t GetTotalLatency() const;

                    /**
                     * 设置<p>总时延</p>
                     * @param _totalLatency <p>总时延</p>
                     * 
                     */
                    void SetTotalLatency(const int64_t& _totalLatency);

                    /**
                     * 判断参数 TotalLatency 是否已赋值
                     * @return TotalLatency 是否已赋值
                     * 
                     */
                    bool TotalLatencyHasBeenSet() const;

                private:

                    /**
                     * <p>asr时延（毫秒）</p><p>-1 表示无 asr时延</p>
                     */
                    int64_t m_asrLatency;
                    bool m_asrLatencyHasBeenSet;

                    /**
                     * <p>llm首token时延(毫秒)</p>
                     */
                    int64_t m_lLMFirstTokenLatency;
                    bool m_lLMFirstTokenLatencyHasBeenSet;

                    /**
                     * <p>tts时延（毫秒）</p><p>-1 表示无 tts时延</p>
                     */
                    int64_t m_tTSLatency;
                    bool m_tTSLatencyHasBeenSet;

                    /**
                     * <p>总时延</p>
                     */
                    int64_t m_totalLatency;
                    bool m_totalLatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLLATENCYMETRICS_H_
