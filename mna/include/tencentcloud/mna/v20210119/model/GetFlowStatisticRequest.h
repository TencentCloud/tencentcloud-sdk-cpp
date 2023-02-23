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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetFlowStatistic请求参数结构体
                */
                class GetFlowStatisticRequest : public AbstractModel
                {
                public:
                    GetFlowStatisticRequest();
                    ~GetFlowStatisticRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param DeviceId 设备ID
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取开始查找时间
                     * @return BeginTime 开始查找时间
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置开始查找时间
                     * @param BeginTime 开始查找时间
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取截止时间
                     * @return EndTime 截止时间
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置截止时间
                     * @param EndTime 截止时间
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取流量种类（1：上行流量，2：下行流量）
                     * @return Type 流量种类（1：上行流量，2：下行流量）
                     */
                    int64_t GetType() const;

                    /**
                     * 设置流量种类（1：上行流量，2：下行流量）
                     * @param Type 流量种类（1：上行流量，2：下行流量）
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取时间粒度（1：按小时统计，2：按天统计）
                     * @return TimeGranularity 时间粒度（1：按小时统计，2：按天统计）
                     */
                    int64_t GetTimeGranularity() const;

                    /**
                     * 设置时间粒度（1：按小时统计，2：按天统计）
                     * @param TimeGranularity 时间粒度（1：按小时统计，2：按天统计）
                     */
                    void SetTimeGranularity(const int64_t& _timeGranularity);

                    /**
                     * 判断参数 TimeGranularity 是否已赋值
                     * @return TimeGranularity 是否已赋值
                     */
                    bool TimeGranularityHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 开始查找时间
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 截止时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 流量种类（1：上行流量，2：下行流量）
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 时间粒度（1：按小时统计，2：按天统计）
                     */
                    int64_t m_timeGranularity;
                    bool m_timeGranularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICREQUEST_H_
