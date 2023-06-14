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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONINTERVALSTATISTIC_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONINTERVALSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 单位时间间隔的会话统计数据
                */
                class SessionIntervalStatistic : public AbstractModel
                {
                public:
                    SessionIntervalStatistic();
                    ~SessionIntervalStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活跃现场设备数
                     * @return ActiveFieldDeviceNum 活跃现场设备数
                     * 
                     */
                    uint64_t GetActiveFieldDeviceNum() const;

                    /**
                     * 设置活跃现场设备数
                     * @param _activeFieldDeviceNum 活跃现场设备数
                     * 
                     */
                    void SetActiveFieldDeviceNum(const uint64_t& _activeFieldDeviceNum);

                    /**
                     * 判断参数 ActiveFieldDeviceNum 是否已赋值
                     * @return ActiveFieldDeviceNum 是否已赋值
                     * 
                     */
                    bool ActiveFieldDeviceNumHasBeenSet() const;

                    /**
                     * 获取活跃远端设备数
                     * @return ActiveRemoteDeviceNum 活跃远端设备数
                     * 
                     */
                    uint64_t GetActiveRemoteDeviceNum() const;

                    /**
                     * 设置活跃远端设备数
                     * @param _activeRemoteDeviceNum 活跃远端设备数
                     * 
                     */
                    void SetActiveRemoteDeviceNum(const uint64_t& _activeRemoteDeviceNum);

                    /**
                     * 判断参数 ActiveRemoteDeviceNum 是否已赋值
                     * @return ActiveRemoteDeviceNum 是否已赋值
                     * 
                     */
                    bool ActiveRemoteDeviceNumHasBeenSet() const;

                    /**
                     * 获取会话数量
                     * @return SessionNum 会话数量
                     * 
                     */
                    uint64_t GetSessionNum() const;

                    /**
                     * 设置会话数量
                     * @param _sessionNum 会话数量
                     * 
                     */
                    void SetSessionNum(const uint64_t& _sessionNum);

                    /**
                     * 判断参数 SessionNum 是否已赋值
                     * @return SessionNum 是否已赋值
                     * 
                     */
                    bool SessionNumHasBeenSet() const;

                    /**
                     * 获取会话时长，单位：分钟
                     * @return TotalDuration 会话时长，单位：分钟
                     * 
                     */
                    uint64_t GetTotalDuration() const;

                    /**
                     * 设置会话时长，单位：分钟
                     * @param _totalDuration 会话时长，单位：分钟
                     * 
                     */
                    void SetTotalDuration(const uint64_t& _totalDuration);

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                    /**
                     * 获取时间戳，单位：秒
                     * @return StartTime 时间戳，单位：秒
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置时间戳，单位：秒
                     * @param _startTime 时间戳，单位：秒
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取时间戳，单位：秒
                     * @return EndTime 时间戳，单位：秒
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置时间戳，单位：秒
                     * @param _endTime 时间戳，单位：秒
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取优良会话占比，单位：%
                     * @return NotBadSessionRatio 优良会话占比，单位：%
                     * 
                     */
                    uint64_t GetNotBadSessionRatio() const;

                    /**
                     * 设置优良会话占比，单位：%
                     * @param _notBadSessionRatio 优良会话占比，单位：%
                     * 
                     */
                    void SetNotBadSessionRatio(const uint64_t& _notBadSessionRatio);

                    /**
                     * 判断参数 NotBadSessionRatio 是否已赋值
                     * @return NotBadSessionRatio 是否已赋值
                     * 
                     */
                    bool NotBadSessionRatioHasBeenSet() const;

                private:

                    /**
                     * 活跃现场设备数
                     */
                    uint64_t m_activeFieldDeviceNum;
                    bool m_activeFieldDeviceNumHasBeenSet;

                    /**
                     * 活跃远端设备数
                     */
                    uint64_t m_activeRemoteDeviceNum;
                    bool m_activeRemoteDeviceNumHasBeenSet;

                    /**
                     * 会话数量
                     */
                    uint64_t m_sessionNum;
                    bool m_sessionNumHasBeenSet;

                    /**
                     * 会话时长，单位：分钟
                     */
                    uint64_t m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                    /**
                     * 时间戳，单位：秒
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 时间戳，单位：秒
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 优良会话占比，单位：%
                     */
                    uint64_t m_notBadSessionRatio;
                    bool m_notBadSessionRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_SESSIONINTERVALSTATISTIC_H_
