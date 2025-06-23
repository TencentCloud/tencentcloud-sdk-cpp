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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ADDTIMEWINDOWREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ADDTIMEWINDOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AddTimeWindow请求参数结构体
                */
                class AddTimeWindowRequest : public AbstractModel
                {
                public:
                    AddTimeWindowRequest();
                    ~AddTimeWindowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @return InstanceId 实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @param _instanceId 实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取星期一的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起始时间按半个小时对齐；最短半个小时，最长三个小时；可设置多个时间段。 一周中应至少设置一天的时间窗。下同。
                     * @return Monday 星期一的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起始时间按半个小时对齐；最短半个小时，最长三个小时；可设置多个时间段。 一周中应至少设置一天的时间窗。下同。
                     * 
                     */
                    std::vector<std::string> GetMonday() const;

                    /**
                     * 设置星期一的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起始时间按半个小时对齐；最短半个小时，最长三个小时；可设置多个时间段。 一周中应至少设置一天的时间窗。下同。
                     * @param _monday 星期一的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起始时间按半个小时对齐；最短半个小时，最长三个小时；可设置多个时间段。 一周中应至少设置一天的时间窗。下同。
                     * 
                     */
                    void SetMonday(const std::vector<std::string>& _monday);

                    /**
                     * 判断参数 Monday 是否已赋值
                     * @return Monday 是否已赋值
                     * 
                     */
                    bool MondayHasBeenSet() const;

                    /**
                     * 获取星期二的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @return Tuesday 星期二的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    std::vector<std::string> GetTuesday() const;

                    /**
                     * 设置星期二的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @param _tuesday 星期二的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    void SetTuesday(const std::vector<std::string>& _tuesday);

                    /**
                     * 判断参数 Tuesday 是否已赋值
                     * @return Tuesday 是否已赋值
                     * 
                     */
                    bool TuesdayHasBeenSet() const;

                    /**
                     * 获取星期三的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @return Wednesday 星期三的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    std::vector<std::string> GetWednesday() const;

                    /**
                     * 设置星期三的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @param _wednesday 星期三的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    void SetWednesday(const std::vector<std::string>& _wednesday);

                    /**
                     * 判断参数 Wednesday 是否已赋值
                     * @return Wednesday 是否已赋值
                     * 
                     */
                    bool WednesdayHasBeenSet() const;

                    /**
                     * 获取星期四的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @return Thursday 星期四的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    std::vector<std::string> GetThursday() const;

                    /**
                     * 设置星期四的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @param _thursday 星期四的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    void SetThursday(const std::vector<std::string>& _thursday);

                    /**
                     * 判断参数 Thursday 是否已赋值
                     * @return Thursday 是否已赋值
                     * 
                     */
                    bool ThursdayHasBeenSet() const;

                    /**
                     * 获取星期五的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @return Friday 星期五的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    std::vector<std::string> GetFriday() const;

                    /**
                     * 设置星期五的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @param _friday 星期五的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    void SetFriday(const std::vector<std::string>& _friday);

                    /**
                     * 判断参数 Friday 是否已赋值
                     * @return Friday 是否已赋值
                     * 
                     */
                    bool FridayHasBeenSet() const;

                    /**
                     * 获取星期六的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @return Saturday 星期六的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    std::vector<std::string> GetSaturday() const;

                    /**
                     * 设置星期六的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @param _saturday 星期六的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    void SetSaturday(const std::vector<std::string>& _saturday);

                    /**
                     * 判断参数 Saturday 是否已赋值
                     * @return Saturday 是否已赋值
                     * 
                     */
                    bool SaturdayHasBeenSet() const;

                    /**
                     * 获取星期日的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @return Sunday 星期日的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    std::vector<std::string> GetSunday() const;

                    /**
                     * 设置星期日的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * @param _sunday 星期日的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     * 
                     */
                    void SetSunday(const std::vector<std::string>& _sunday);

                    /**
                     * 判断参数 Sunday 是否已赋值
                     * @return Sunday 是否已赋值
                     * 
                     */
                    bool SundayHasBeenSet() const;

                    /**
                     * 获取最大延迟阈值（秒），仅对主实例和灾备实例有效。默认值：10，取值范围：1-10的整数。
                     * @return MaxDelayTime 最大延迟阈值（秒），仅对主实例和灾备实例有效。默认值：10，取值范围：1-10的整数。
                     * 
                     */
                    uint64_t GetMaxDelayTime() const;

                    /**
                     * 设置最大延迟阈值（秒），仅对主实例和灾备实例有效。默认值：10，取值范围：1-10的整数。
                     * @param _maxDelayTime 最大延迟阈值（秒），仅对主实例和灾备实例有效。默认值：10，取值范围：1-10的整数。
                     * 
                     */
                    void SetMaxDelayTime(const uint64_t& _maxDelayTime);

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 星期一的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起始时间按半个小时对齐；最短半个小时，最长三个小时；可设置多个时间段。 一周中应至少设置一天的时间窗。下同。
                     */
                    std::vector<std::string> m_monday;
                    bool m_mondayHasBeenSet;

                    /**
                     * 星期二的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     */
                    std::vector<std::string> m_tuesday;
                    bool m_tuesdayHasBeenSet;

                    /**
                     * 星期三的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     */
                    std::vector<std::string> m_wednesday;
                    bool m_wednesdayHasBeenSet;

                    /**
                     * 星期四的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     */
                    std::vector<std::string> m_thursday;
                    bool m_thursdayHasBeenSet;

                    /**
                     * 星期五的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     */
                    std::vector<std::string> m_friday;
                    bool m_fridayHasBeenSet;

                    /**
                     * 星期六的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     */
                    std::vector<std::string> m_saturday;
                    bool m_saturdayHasBeenSet;

                    /**
                     * 星期日的可维护时间窗口。 一周中应至少设置一天的时间窗。
                     */
                    std::vector<std::string> m_sunday;
                    bool m_sundayHasBeenSet;

                    /**
                     * 最大延迟阈值（秒），仅对主实例和灾备实例有效。默认值：10，取值范围：1-10的整数。
                     */
                    uint64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADDTIMEWINDOWREQUEST_H_
