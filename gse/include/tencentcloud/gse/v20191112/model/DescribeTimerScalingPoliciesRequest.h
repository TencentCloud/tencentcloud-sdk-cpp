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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBETIMERSCALINGPOLICIESREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBETIMERSCALINGPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeTimerScalingPolicies请求参数结构体
                */
                class DescribeTimerScalingPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeTimerScalingPoliciesRequest();
                    ~DescribeTimerScalingPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取扩缩容配置服务器舰队ID
                     * @return FleetId 扩缩容配置服务器舰队ID
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置扩缩容配置服务器舰队ID
                     * @param _fleetId 扩缩容配置服务器舰队ID
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取定时器名称
                     * @return TimerName 定时器名称
                     * 
                     */
                    std::string GetTimerName() const;

                    /**
                     * 设置定时器名称
                     * @param _timerName 定时器名称
                     * 
                     */
                    void SetTimerName(const std::string& _timerName);

                    /**
                     * 判断参数 TimerName 是否已赋值
                     * @return TimerName 是否已赋值
                     * 
                     */
                    bool TimerNameHasBeenSet() const;

                    /**
                     * 获取定时器开始时间
                     * @return BeginTime 定时器开始时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置定时器开始时间
                     * @param _beginTime 定时器开始时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取定时器结束时间
                     * @return EndTime 定时器结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置定时器结束时间
                     * @param _endTime 定时器结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return Limit 页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页大小
                     * @param _limit 页大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 扩缩容配置服务器舰队ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 定时器名称
                     */
                    std::string m_timerName;
                    bool m_timerNameHasBeenSet;

                    /**
                     * 定时器开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 定时器结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBETIMERSCALINGPOLICIESREQUEST_H_
