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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_INTERVALTIME_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_INTERVALTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 周期时间点信息。
                */
                class IntervalTime : public AbstractModel
                {
                public:
                    IntervalTime();
                    ~IntervalTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取间隔周期，单位ms
                     * @return Interval 间隔周期，单位ms
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置间隔周期，单位ms
                     * @param _interval 间隔周期，单位ms
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取开始时间点，单位ms
                     * @return StartTime 开始时间点，单位ms
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间点，单位ms
                     * @param _startTime 开始时间点，单位ms
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * 间隔周期，单位ms
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 开始时间点，单位ms
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_INTERVALTIME_H_
