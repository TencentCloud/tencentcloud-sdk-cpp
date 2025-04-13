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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYSTATISTICS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AILatencyStatisticsInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI时延统计
                */
                class AILatencyStatistics : public AbstractModel
                {
                public:
                    AILatencyStatistics();
                    ~AILatencyStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取asr时延统计
                     * @return ASRLatency asr时延统计
                     * 
                     */
                    AILatencyStatisticsInfo GetASRLatency() const;

                    /**
                     * 设置asr时延统计
                     * @param _aSRLatency asr时延统计
                     * 
                     */
                    void SetASRLatency(const AILatencyStatisticsInfo& _aSRLatency);

                    /**
                     * 判断参数 ASRLatency 是否已赋值
                     * @return ASRLatency 是否已赋值
                     * 
                     */
                    bool ASRLatencyHasBeenSet() const;

                    /**
                     * 获取tts时延统计
                     * @return TTSLatency tts时延统计
                     * 
                     */
                    AILatencyStatisticsInfo GetTTSLatency() const;

                    /**
                     * 设置tts时延统计
                     * @param _tTSLatency tts时延统计
                     * 
                     */
                    void SetTTSLatency(const AILatencyStatisticsInfo& _tTSLatency);

                    /**
                     * 判断参数 TTSLatency 是否已赋值
                     * @return TTSLatency 是否已赋值
                     * 
                     */
                    bool TTSLatencyHasBeenSet() const;

                    /**
                     * 获取llm时延统计
                     * @return LLMLatency llm时延统计
                     * 
                     */
                    AILatencyStatisticsInfo GetLLMLatency() const;

                    /**
                     * 设置llm时延统计
                     * @param _lLMLatency llm时延统计
                     * 
                     */
                    void SetLLMLatency(const AILatencyStatisticsInfo& _lLMLatency);

                    /**
                     * 判断参数 LLMLatency 是否已赋值
                     * @return LLMLatency 是否已赋值
                     * 
                     */
                    bool LLMLatencyHasBeenSet() const;

                    /**
                     * 获取端到端时延统计
                     * @return ETELatency 端到端时延统计
                     * 
                     */
                    AILatencyStatisticsInfo GetETELatency() const;

                    /**
                     * 设置端到端时延统计
                     * @param _eTELatency 端到端时延统计
                     * 
                     */
                    void SetETELatency(const AILatencyStatisticsInfo& _eTELatency);

                    /**
                     * 判断参数 ETELatency 是否已赋值
                     * @return ETELatency 是否已赋值
                     * 
                     */
                    bool ETELatencyHasBeenSet() const;

                private:

                    /**
                     * asr时延统计
                     */
                    AILatencyStatisticsInfo m_aSRLatency;
                    bool m_aSRLatencyHasBeenSet;

                    /**
                     * tts时延统计
                     */
                    AILatencyStatisticsInfo m_tTSLatency;
                    bool m_tTSLatencyHasBeenSet;

                    /**
                     * llm时延统计
                     */
                    AILatencyStatisticsInfo m_lLMLatency;
                    bool m_lLMLatencyHasBeenSet;

                    /**
                     * 端到端时延统计
                     */
                    AILatencyStatisticsInfo m_eTELatency;
                    bool m_eTELatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYSTATISTICS_H_
