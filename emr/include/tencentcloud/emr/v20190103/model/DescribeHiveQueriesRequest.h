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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHIVEQUERIESREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHIVEQUERIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeHiveQueries请求参数结构体
                */
                class DescribeHiveQueriesRequest : public AbstractModel
                {
                public:
                    DescribeHiveQueriesRequest();
                    ~DescribeHiveQueriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取起始时间秒
                     * @return StartTime 起始时间秒
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置起始时间秒
                     * @param _startTime 起始时间秒
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
                     * 获取结束时间秒，EndTime-StartTime不得超过1天秒数86400
                     * @return EndTime 结束时间秒，EndTime-StartTime不得超过1天秒数86400
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间秒，EndTime-StartTime不得超过1天秒数86400
                     * @param _endTime 结束时间秒，EndTime-StartTime不得超过1天秒数86400
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
                     * 获取分页起始偏移，从0开始
                     * @return Offset 分页起始偏移，从0开始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页起始偏移，从0开始
                     * @param _offset 分页起始偏移，从0开始
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页大小，合法范围[1,100]
                     * @return Limit 分页大小，合法范围[1,100]
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，合法范围[1,100]
                     * @param _limit 分页大小，合法范围[1,100]
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取执行状态,ERROR等
                     * @return State 执行状态,ERROR等
                     * 
                     */
                    std::vector<std::string> GetState() const;

                    /**
                     * 设置执行状态,ERROR等
                     * @param _state 执行状态,ERROR等
                     * 
                     */
                    void SetState(const std::vector<std::string>& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取结束时间大于的时间点
                     * @return EndTimeGte 结束时间大于的时间点
                     * 
                     */
                    uint64_t GetEndTimeGte() const;

                    /**
                     * 设置结束时间大于的时间点
                     * @param _endTimeGte 结束时间大于的时间点
                     * 
                     */
                    void SetEndTimeGte(const uint64_t& _endTimeGte);

                    /**
                     * 判断参数 EndTimeGte 是否已赋值
                     * @return EndTimeGte 是否已赋值
                     * 
                     */
                    bool EndTimeGteHasBeenSet() const;

                    /**
                     * 获取结束时间小于时间点
                     * @return EndTimeLte 结束时间小于时间点
                     * 
                     */
                    uint64_t GetEndTimeLte() const;

                    /**
                     * 设置结束时间小于时间点
                     * @param _endTimeLte 结束时间小于时间点
                     * 
                     */
                    void SetEndTimeLte(const uint64_t& _endTimeLte);

                    /**
                     * 判断参数 EndTimeLte 是否已赋值
                     * @return EndTimeLte 是否已赋值
                     * 
                     */
                    bool EndTimeLteHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 起始时间秒
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间秒，EndTime-StartTime不得超过1天秒数86400
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页起始偏移，从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，合法范围[1,100]
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 执行状态,ERROR等
                     */
                    std::vector<std::string> m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 结束时间大于的时间点
                     */
                    uint64_t m_endTimeGte;
                    bool m_endTimeGteHasBeenSet;

                    /**
                     * 结束时间小于时间点
                     */
                    uint64_t m_endTimeLte;
                    bool m_endTimeLteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEHIVEQUERIESREQUEST_H_
