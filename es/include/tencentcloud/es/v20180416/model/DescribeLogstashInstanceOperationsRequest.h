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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHINSTANCEOPERATIONSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHINSTANCEOPERATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeLogstashInstanceOperations请求参数结构体
                */
                class DescribeLogstashInstanceOperationsRequest : public AbstractModel
                {
                public:
                    DescribeLogstashInstanceOperationsRequest();
                    ~DescribeLogstashInstanceOperationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取起始时间, e.g. "2019-03-07 16:30:39"
                     * @return StartTime 起始时间, e.g. "2019-03-07 16:30:39"
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间, e.g. "2019-03-07 16:30:39"
                     * @param _startTime 起始时间, e.g. "2019-03-07 16:30:39"
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间, e.g. "2019-03-30 20:18:03"
                     * @return EndTime 结束时间, e.g. "2019-03-30 20:18:03"
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间, e.g. "2019-03-30 20:18:03"
                     * @param _endTime 结束时间, e.g. "2019-03-30 20:18:03"
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
                     * 获取分页起始值
                     * @return Offset 分页起始值
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页起始值
                     * @param _offset 分页起始值
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
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 起始时间, e.g. "2019-03-07 16:30:39"
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间, e.g. "2019-03-30 20:18:03"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页起始值
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBELOGSTASHINSTANCEOPERATIONSREQUEST_H_
