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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEETASKSTATISTICSREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEETASKSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeTWeSeeTaskStatistics请求参数结构体
                */
                class DescribeTWeSeeTaskStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeTWeSeeTaskStatisticsRequest();
                    ~DescribeTWeSeeTaskStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * @return ServiceType 算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * @param _serviceType 算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取套餐规格。可选值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     * @return ServiceTier 套餐规格。可选值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     * 
                     */
                    std::string GetServiceTier() const;

                    /**
                     * 设置套餐规格。可选值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     * @param _serviceTier 套餐规格。可选值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     * 
                     */
                    void SetServiceTier(const std::string& _serviceTier);

                    /**
                     * 判断参数 ServiceTier 是否已赋值
                     * @return ServiceTier 是否已赋值
                     * 
                     */
                    bool ServiceTierHasBeenSet() const;

                    /**
                     * 获取起始时间 UNIX 时间戳，单位：秒
                     * @return StartTime 起始时间 UNIX 时间戳，单位：秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间 UNIX 时间戳，单位：秒
                     * @param _startTime 起始时间 UNIX 时间戳，单位：秒
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
                     * 获取结束时间 UNIX 时间戳，单位：秒
                     * @return EndTime 结束时间 UNIX 时间戳，单位：秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间 UNIX 时间戳，单位：秒
                     * @param _endTime 结束时间 UNIX 时间戳，单位：秒
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
                     * 获取数据点间隔，单位：秒；-1 表示汇总，只返回 1 个数据点
                     * @return Interval 数据点间隔，单位：秒；-1 表示汇总，只返回 1 个数据点
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置数据点间隔，单位：秒；-1 表示汇总，只返回 1 个数据点
                     * @param _interval 数据点间隔，单位：秒；-1 表示汇总，只返回 1 个数据点
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * 算法类型。可选值：

- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 套餐规格。可选值：

- `POSTPAID`：后付费（适用于视频理解、图片理解）
- `BASIC`：包年包月基础版（适用于视频理解）
                     */
                    std::string m_serviceTier;
                    bool m_serviceTierHasBeenSet;

                    /**
                     * 起始时间 UNIX 时间戳，单位：秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间 UNIX 时间戳，单位：秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 数据点间隔，单位：秒；-1 表示汇总，只返回 1 个数据点
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEETASKSTATISTICSREQUEST_H_
