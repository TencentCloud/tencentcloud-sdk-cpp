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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYSTATISTICSINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYSTATISTICSINFO_H_

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
                * AI时延统计
                */
                class AILatencyStatisticsInfo : public AbstractModel
                {
                public:
                    AILatencyStatisticsInfo();
                    ~AILatencyStatisticsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小值
                     * @return MinLatency 最小值
                     * 
                     */
                    int64_t GetMinLatency() const;

                    /**
                     * 设置最小值
                     * @param _minLatency 最小值
                     * 
                     */
                    void SetMinLatency(const int64_t& _minLatency);

                    /**
                     * 判断参数 MinLatency 是否已赋值
                     * @return MinLatency 是否已赋值
                     * 
                     */
                    bool MinLatencyHasBeenSet() const;

                    /**
                     * 获取中位数
                     * @return MiddleLatency 中位数
                     * 
                     */
                    int64_t GetMiddleLatency() const;

                    /**
                     * 设置中位数
                     * @param _middleLatency 中位数
                     * 
                     */
                    void SetMiddleLatency(const int64_t& _middleLatency);

                    /**
                     * 判断参数 MiddleLatency 是否已赋值
                     * @return MiddleLatency 是否已赋值
                     * 
                     */
                    bool MiddleLatencyHasBeenSet() const;

                    /**
                     * 获取p90
                     * @return P90Latency p90
                     * 
                     */
                    int64_t GetP90Latency() const;

                    /**
                     * 设置p90
                     * @param _p90Latency p90
                     * 
                     */
                    void SetP90Latency(const int64_t& _p90Latency);

                    /**
                     * 判断参数 P90Latency 是否已赋值
                     * @return P90Latency 是否已赋值
                     * 
                     */
                    bool P90LatencyHasBeenSet() const;

                private:

                    /**
                     * 最小值
                     */
                    int64_t m_minLatency;
                    bool m_minLatencyHasBeenSet;

                    /**
                     * 中位数
                     */
                    int64_t m_middleLatency;
                    bool m_middleLatencyHasBeenSet;

                    /**
                     * p90
                     */
                    int64_t m_p90Latency;
                    bool m_p90LatencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AILATENCYSTATISTICSINFO_H_
