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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeShipperTasks请求参数结构体
                */
                class DescribeShipperTasksRequest : public AbstractModel
                {
                public:
                    DescribeShipperTasksRequest();
                    ~DescribeShipperTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取投递规则ID
                     * @return ShipperId 投递规则ID
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置投递规则ID
                     * @param _shipperId 投递规则ID
                     * 
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     * 
                     */
                    bool ShipperIdHasBeenSet() const;

                    /**
                     * 获取查询的开始时间戳，支持最近3天的查询， 毫秒。
StartTime必须小于EndTime
                     * @return StartTime 查询的开始时间戳，支持最近3天的查询， 毫秒。
StartTime必须小于EndTime
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询的开始时间戳，支持最近3天的查询， 毫秒。
StartTime必须小于EndTime
                     * @param _startTime 查询的开始时间戳，支持最近3天的查询， 毫秒。
StartTime必须小于EndTime
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
                     * 获取查询的结束时间戳， 毫秒。
StartTime必须小于EndTime
                     * @return EndTime 查询的结束时间戳， 毫秒。
StartTime必须小于EndTime
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询的结束时间戳， 毫秒。
StartTime必须小于EndTime
                     * @param _endTime 查询的结束时间戳， 毫秒。
StartTime必须小于EndTime
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
                     * 投递规则ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * 查询的开始时间戳，支持最近3天的查询， 毫秒。
StartTime必须小于EndTime
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询的结束时间戳， 毫秒。
StartTime必须小于EndTime
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESHIPPERTASKSREQUEST_H_
