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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEMONITORDATAREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeDeviceMonitorData请求参数结构体
                */
                class DescribeDeviceMonitorDataRequest : public AbstractModel
                {
                public:
                    DescribeDeviceMonitorDataRequest();
                    ~DescribeDeviceMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间戳
                     * @return StartTime 开始时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间戳
                     * @param _startTime 开始时间戳
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
                     * 获取结束时间戳
                     * @return EndTime 结束时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳
                     * @param _endTime 结束时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取类型 支持 OnlineChannels/OnlineDevices/RecordingChannels
                     * @return Type 类型 支持 OnlineChannels/OnlineDevices/RecordingChannels
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型 支持 OnlineChannels/OnlineDevices/RecordingChannels
                     * @param _type 类型 支持 OnlineChannels/OnlineDevices/RecordingChannels
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取时间粒度 目前只支持 1h
                     * @return TimesSpec 时间粒度 目前只支持 1h
                     * 
                     */
                    std::string GetTimesSpec() const;

                    /**
                     * 设置时间粒度 目前只支持 1h
                     * @param _timesSpec 时间粒度 目前只支持 1h
                     * 
                     */
                    void SetTimesSpec(const std::string& _timesSpec);

                    /**
                     * 判断参数 TimesSpec 是否已赋值
                     * @return TimesSpec 是否已赋值
                     * 
                     */
                    bool TimesSpecHasBeenSet() const;

                private:

                    /**
                     * 开始时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 类型 支持 OnlineChannels/OnlineDevices/RecordingChannels
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 时间粒度 目前只支持 1h
                     */
                    std::string m_timesSpec;
                    bool m_timesSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEMONITORDATAREQUEST_H_
