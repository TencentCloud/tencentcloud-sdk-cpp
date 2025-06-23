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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYTIMEWINDOWREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYTIMEWINDOWREQUEST_H_

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
                * ModifyTimeWindow请求参数结构体
                */
                class ModifyTimeWindowRequest : public AbstractModel
                {
                public:
                    ModifyTimeWindowRequest();
                    ~ModifyTimeWindowRequest() = default;
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
                     * 获取修改后的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起止时间按半个小时对齐；最短半个小时，最长三个小时；最多设置两个时间段；起止时间范围为：[00:00, 24:00]。
说明：设置两个时间段的 json 示例如下。
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     * @return TimeRanges 修改后的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起止时间按半个小时对齐；最短半个小时，最长三个小时；最多设置两个时间段；起止时间范围为：[00:00, 24:00]。
说明：设置两个时间段的 json 示例如下。
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     * 
                     */
                    std::vector<std::string> GetTimeRanges() const;

                    /**
                     * 设置修改后的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起止时间按半个小时对齐；最短半个小时，最长三个小时；最多设置两个时间段；起止时间范围为：[00:00, 24:00]。
说明：设置两个时间段的 json 示例如下。
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     * @param _timeRanges 修改后的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起止时间按半个小时对齐；最短半个小时，最长三个小时；最多设置两个时间段；起止时间范围为：[00:00, 24:00]。
说明：设置两个时间段的 json 示例如下。
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     * 
                     */
                    void SetTimeRanges(const std::vector<std::string>& _timeRanges);

                    /**
                     * 判断参数 TimeRanges 是否已赋值
                     * @return TimeRanges 是否已赋值
                     * 
                     */
                    bool TimeRangesHasBeenSet() const;

                    /**
                     * 获取指定修改哪一天的可维护时间段，可能的取值为：monday，tuesday，wednesday，thursday，friday，saturday，sunday。如果不指定该值或者为空，则默认一周七天都修改。
说明：指定修改多天的 json 示例如下。
[
    "monday",
    "tuesday"
  ]
                     * @return Weekdays 指定修改哪一天的可维护时间段，可能的取值为：monday，tuesday，wednesday，thursday，friday，saturday，sunday。如果不指定该值或者为空，则默认一周七天都修改。
说明：指定修改多天的 json 示例如下。
[
    "monday",
    "tuesday"
  ]
                     * 
                     */
                    std::vector<std::string> GetWeekdays() const;

                    /**
                     * 设置指定修改哪一天的可维护时间段，可能的取值为：monday，tuesday，wednesday，thursday，friday，saturday，sunday。如果不指定该值或者为空，则默认一周七天都修改。
说明：指定修改多天的 json 示例如下。
[
    "monday",
    "tuesday"
  ]
                     * @param _weekdays 指定修改哪一天的可维护时间段，可能的取值为：monday，tuesday，wednesday，thursday，friday，saturday，sunday。如果不指定该值或者为空，则默认一周七天都修改。
说明：指定修改多天的 json 示例如下。
[
    "monday",
    "tuesday"
  ]
                     * 
                     */
                    void SetWeekdays(const std::vector<std::string>& _weekdays);

                    /**
                     * 判断参数 Weekdays 是否已赋值
                     * @return Weekdays 是否已赋值
                     * 
                     */
                    bool WeekdaysHasBeenSet() const;

                    /**
                     * 获取数据延迟阈值（秒），仅对主实例和灾备实例有效。不传默认不修改，保持原来的阈值，取值范围：1-10的整数。
                     * @return MaxDelayTime 数据延迟阈值（秒），仅对主实例和灾备实例有效。不传默认不修改，保持原来的阈值，取值范围：1-10的整数。
                     * 
                     */
                    uint64_t GetMaxDelayTime() const;

                    /**
                     * 设置数据延迟阈值（秒），仅对主实例和灾备实例有效。不传默认不修改，保持原来的阈值，取值范围：1-10的整数。
                     * @param _maxDelayTime 数据延迟阈值（秒），仅对主实例和灾备实例有效。不传默认不修改，保持原来的阈值，取值范围：1-10的整数。
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
                     * 修改后的可维护时间段，其中每一个时间段的格式形如：10:00-12:00；起止时间按半个小时对齐；最短半个小时，最长三个小时；最多设置两个时间段；起止时间范围为：[00:00, 24:00]。
说明：设置两个时间段的 json 示例如下。
[
    "01:00-01:30",
    "02:00-02:30"
  ]
                     */
                    std::vector<std::string> m_timeRanges;
                    bool m_timeRangesHasBeenSet;

                    /**
                     * 指定修改哪一天的可维护时间段，可能的取值为：monday，tuesday，wednesday，thursday，friday，saturday，sunday。如果不指定该值或者为空，则默认一周七天都修改。
说明：指定修改多天的 json 示例如下。
[
    "monday",
    "tuesday"
  ]
                     */
                    std::vector<std::string> m_weekdays;
                    bool m_weekdaysHasBeenSet;

                    /**
                     * 数据延迟阈值（秒），仅对主实例和灾备实例有效。不传默认不修改，保持原来的阈值，取值范围：1-10的整数。
                     */
                    uint64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYTIMEWINDOWREQUEST_H_
