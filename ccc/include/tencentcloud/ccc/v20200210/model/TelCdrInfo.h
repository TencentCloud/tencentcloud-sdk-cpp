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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SeatUserInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 电话话单信息
                */
                class TelCdrInfo : public AbstractModel
                {
                public:
                    TelCdrInfo();
                    ~TelCdrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主叫号码
                     * @return Caller 主叫号码
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置主叫号码
                     * @param Caller 主叫号码
                     */
                    void SetCaller(const std::string& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取被叫号码
                     * @return Callee 被叫号码
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫号码
                     * @param Callee 被叫号码
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取呼叫发起时间戳，Unix 时间戳
                     * @return Time 呼叫发起时间戳，Unix 时间戳
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置呼叫发起时间戳，Unix 时间戳
                     * @param Time 呼叫发起时间戳，Unix 时间戳
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取呼入呼出方向 0 呼入 1 呼出
                     * @return Direction 呼入呼出方向 0 呼入 1 呼出
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置呼入呼出方向 0 呼入 1 呼出
                     * @param Direction 呼入呼出方向 0 呼入 1 呼出
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取通话时长
                     * @return Duration 通话时长
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置通话时长
                     * @param Duration 通话时长
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取录音信息
                     * @return RecordURL 录音信息
                     */
                    std::string GetRecordURL() const;

                    /**
                     * 设置录音信息
                     * @param RecordURL 录音信息
                     */
                    void SetRecordURL(const std::string& _recordURL);

                    /**
                     * 判断参数 RecordURL 是否已赋值
                     * @return RecordURL 是否已赋值
                     */
                    bool RecordURLHasBeenSet() const;

                    /**
                     * 获取坐席信息
                     * @return SeatUser 坐席信息
                     */
                    SeatUserInfo GetSeatUser() const;

                    /**
                     * 设置坐席信息
                     * @param SeatUser 坐席信息
                     */
                    void SetSeatUser(const SeatUserInfo& _seatUser);

                    /**
                     * 判断参数 SeatUser 是否已赋值
                     * @return SeatUser 是否已赋值
                     */
                    bool SeatUserHasBeenSet() const;

                    /**
                     * 获取结束状态 0 未知 1 正常通话 2 未接通
                     * @return EndStatus 结束状态 0 未知 1 正常通话 2 未接通
                     */
                    int64_t GetEndStatus() const;

                    /**
                     * 设置结束状态 0 未知 1 正常通话 2 未接通
                     * @param EndStatus 结束状态 0 未知 1 正常通话 2 未接通
                     */
                    void SetEndStatus(const int64_t& _endStatus);

                    /**
                     * 判断参数 EndStatus 是否已赋值
                     * @return EndStatus 是否已赋值
                     */
                    bool EndStatusHasBeenSet() const;

                    /**
                     * 获取技能组
                     * @return SkillGroup 技能组
                     */
                    std::string GetSkillGroup() const;

                    /**
                     * 设置技能组
                     * @param SkillGroup 技能组
                     */
                    void SetSkillGroup(const std::string& _skillGroup);

                    /**
                     * 判断参数 SkillGroup 是否已赋值
                     * @return SkillGroup 是否已赋值
                     */
                    bool SkillGroupHasBeenSet() const;

                    /**
                     * 获取主叫归属地
                     * @return CallerLocation 主叫归属地
                     */
                    std::string GetCallerLocation() const;

                    /**
                     * 设置主叫归属地
                     * @param CallerLocation 主叫归属地
                     */
                    void SetCallerLocation(const std::string& _callerLocation);

                    /**
                     * 判断参数 CallerLocation 是否已赋值
                     * @return CallerLocation 是否已赋值
                     */
                    bool CallerLocationHasBeenSet() const;

                private:

                    /**
                     * 主叫号码
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 被叫号码
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * 呼叫发起时间戳，Unix 时间戳
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 呼入呼出方向 0 呼入 1 呼出
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 通话时长
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 录音信息
                     */
                    std::string m_recordURL;
                    bool m_recordURLHasBeenSet;

                    /**
                     * 坐席信息
                     */
                    SeatUserInfo m_seatUser;
                    bool m_seatUserHasBeenSet;

                    /**
                     * 结束状态 0 未知 1 正常通话 2 未接通
                     */
                    int64_t m_endStatus;
                    bool m_endStatusHasBeenSet;

                    /**
                     * 技能组
                     */
                    std::string m_skillGroup;
                    bool m_skillGroupHasBeenSet;

                    /**
                     * 主叫归属地
                     */
                    std::string m_callerLocation;
                    bool m_callerLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TELCDRINFO_H_
