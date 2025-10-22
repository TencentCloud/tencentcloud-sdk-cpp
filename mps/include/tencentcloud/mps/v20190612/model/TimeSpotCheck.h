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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TIMESPOTCHECK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TIMESPOTCHECK_H_

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
                * 媒体质检的检测策略。
                */
                class TimeSpotCheck : public AbstractModel
                {
                public:
                    TimeSpotCheck();
                    ~TimeSpotCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每次循环检测的时长。取值范围（单位s）：

- 最小值：10
- 最大值：86400

                     * @return CheckDuration 每次循环检测的时长。取值范围（单位s）：

- 最小值：10
- 最大值：86400

                     * 
                     */
                    uint64_t GetCheckDuration() const;

                    /**
                     * 设置每次循环检测的时长。取值范围（单位s）：

- 最小值：10
- 最大值：86400

                     * @param _checkDuration 每次循环检测的时长。取值范围（单位s）：

- 最小值：10
- 最大值：86400

                     * 
                     */
                    void SetCheckDuration(const uint64_t& _checkDuration);

                    /**
                     * 判断参数 CheckDuration 是否已赋值
                     * @return CheckDuration 是否已赋值
                     * 
                     */
                    bool CheckDurationHasBeenSet() const;

                    /**
                     * 获取抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测。取值范围（单位 s）：
- 最小值：10
- 最大值：3600
                     * @return CheckInterval 抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测。取值范围（单位 s）：
- 最小值：10
- 最大值：3600
                     * 
                     */
                    uint64_t GetCheckInterval() const;

                    /**
                     * 设置抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测。取值范围（单位 s）：
- 最小值：10
- 最大值：3600
                     * @param _checkInterval 抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测。取值范围（单位 s）：
- 最小值：10
- 最大值：3600
                     * 
                     */
                    void SetCheckInterval(const uint64_t& _checkInterval);

                    /**
                     * 判断参数 CheckInterval 是否已赋值
                     * @return CheckInterval 是否已赋值
                     * 
                     */
                    bool CheckIntervalHasBeenSet() const;

                    /**
                     * 获取片头跳过时长。取值范围（单位 s）：
- 最小值：1
- 最大值：1800
                     * @return SkipDuration 片头跳过时长。取值范围（单位 s）：
- 最小值：1
- 最大值：1800
                     * 
                     */
                    uint64_t GetSkipDuration() const;

                    /**
                     * 设置片头跳过时长。取值范围（单位 s）：
- 最小值：1
- 最大值：1800
                     * @param _skipDuration 片头跳过时长。取值范围（单位 s）：
- 最小值：1
- 最大值：1800
                     * 
                     */
                    void SetSkipDuration(const uint64_t& _skipDuration);

                    /**
                     * 判断参数 SkipDuration 是否已赋值
                     * @return SkipDuration 是否已赋值
                     * 
                     */
                    bool SkipDurationHasBeenSet() const;

                    /**
                     * 获取循环次数。取值范围:
- 最小值：0
- 最大值：1000

取值为 0 或为空时，表示循环至视频结束。
                     * @return CirclesNumber 循环次数。取值范围:
- 最小值：0
- 最大值：1000

取值为 0 或为空时，表示循环至视频结束。
                     * 
                     */
                    uint64_t GetCirclesNumber() const;

                    /**
                     * 设置循环次数。取值范围:
- 最小值：0
- 最大值：1000

取值为 0 或为空时，表示循环至视频结束。
                     * @param _circlesNumber 循环次数。取值范围:
- 最小值：0
- 最大值：1000

取值为 0 或为空时，表示循环至视频结束。
                     * 
                     */
                    void SetCirclesNumber(const uint64_t& _circlesNumber);

                    /**
                     * 判断参数 CirclesNumber 是否已赋值
                     * @return CirclesNumber 是否已赋值
                     * 
                     */
                    bool CirclesNumberHasBeenSet() const;

                private:

                    /**
                     * 每次循环检测的时长。取值范围（单位s）：

- 最小值：10
- 最大值：86400

                     */
                    uint64_t m_checkDuration;
                    bool m_checkDurationHasBeenSet;

                    /**
                     * 抽检间隔，表示在一次检测结束后，等待多长时间后，再次检测。取值范围（单位 s）：
- 最小值：10
- 最大值：3600
                     */
                    uint64_t m_checkInterval;
                    bool m_checkIntervalHasBeenSet;

                    /**
                     * 片头跳过时长。取值范围（单位 s）：
- 最小值：1
- 最大值：1800
                     */
                    uint64_t m_skipDuration;
                    bool m_skipDurationHasBeenSet;

                    /**
                     * 循环次数。取值范围:
- 最小值：0
- 最大值：1000

取值为 0 或为空时，表示循环至视频结束。
                     */
                    uint64_t m_circlesNumber;
                    bool m_circlesNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TIMESPOTCHECK_H_
