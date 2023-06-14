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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTRECORD_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 时移录制段。
                */
                class TimeShiftRecord : public AbstractModel
                {
                public:
                    TimeShiftRecord();
                    ~TimeShiftRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时移录制会话标识。
                     * @return Sid 时移录制会话标识。
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置时移录制会话标识。
                     * @param _sid 时移录制会话标识。
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取录制会话开始时间，Unix 时间戳。
                     * @return StartTime 录制会话开始时间，Unix 时间戳。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置录制会话开始时间，Unix 时间戳。
                     * @param _startTime 录制会话开始时间，Unix 时间戳。
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
                     * 获取录制会话结束时间，Unix 时间戳。
                     * @return EndTime 录制会话结束时间，Unix 时间戳。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置录制会话结束时间，Unix 时间戳。
                     * @param _endTime 录制会话结束时间，Unix 时间戳。
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
                     * 时移录制会话标识。
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 录制会话开始时间，Unix 时间戳。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 录制会话结束时间，Unix 时间戳。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTRECORD_H_
