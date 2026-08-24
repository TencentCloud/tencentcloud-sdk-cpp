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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_FLOWCONTROLRULE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_FLOWCONTROLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 流控规则
                */
                class FlowControlRule : public AbstractModel
                {
                public:
                    FlowControlRule();
                    ~FlowControlRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流控开始时间
                     * @return StartTime 流控开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置流控开始时间
                     * @param _startTime 流控开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取流控结束时间
                     * @return EndTime 流控结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置流控结束时间
                     * @param _endTime 流控结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取流控规则最大带宽，单位MB/s
                     * @return MaxBandwidthMBps 流控规则最大带宽，单位MB/s
                     * 
                     */
                    uint64_t GetMaxBandwidthMBps() const;

                    /**
                     * 设置流控规则最大带宽，单位MB/s
                     * @param _maxBandwidthMBps 流控规则最大带宽，单位MB/s
                     * 
                     */
                    void SetMaxBandwidthMBps(const uint64_t& _maxBandwidthMBps);

                    /**
                     * 判断参数 MaxBandwidthMBps 是否已赋值
                     * @return MaxBandwidthMBps 是否已赋值
                     * 
                     */
                    bool MaxBandwidthMBpsHasBeenSet() const;

                private:

                    /**
                     * 流控开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 流控结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 流控规则最大带宽，单位MB/s
                     */
                    uint64_t m_maxBandwidthMBps;
                    bool m_maxBandwidthMBpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_FLOWCONTROLRULE_H_
