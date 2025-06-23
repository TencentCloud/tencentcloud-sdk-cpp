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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_TIMEINTERVALSTRATEGY_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_TIMEINTERVALSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 按时间段扩容策略
                */
                class TimeIntervalStrategy : public AbstractModel
                {
                public:
                    TimeIntervalStrategy();
                    ~TimeIntervalStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开始扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     * @return StartTime 开始扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     * @param _startTime 开始扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     * @return EndTime 结束扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     * @param _endTime 结束扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 开始扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束扩容时间。
说明：此值的格式为 Integer 的时间戳（秒级）。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_TIMEINTERVALSTRATEGY_H_
