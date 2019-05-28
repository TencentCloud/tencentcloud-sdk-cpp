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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESLOWLOGSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeSlowlogs请求参数结构体
                */
                class DescribeSlowlogsRequest : public AbstractModel
                {
                public:
                    DescribeSlowlogsRequest();
                    ~DescribeSlowlogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-k8voqdlz
                     * @return InstanceId 实例ID，形如mssql-k8voqdlz
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-k8voqdlz
                     * @param InstanceId 实例ID，形如mssql-k8voqdlz
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间
                     * @return StartTime 查询开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间
                     * @param StartTime 查询开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return EndTime 查询结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间
                     * @param EndTime 查询结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页返回结果，分页大小，默认20，不超过100
                     * @return Limit 分页返回结果，分页大小，默认20，不超过100
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回结果，分页大小，默认20，不超过100
                     * @param Limit 分页返回结果，分页大小，默认20，不超过100
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取从第几页开始返回，起始页，从0开始，默认为0
                     * @return Offset 从第几页开始返回，起始页，从0开始，默认为0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置从第几页开始返回，起始页，从0开始，默认为0
                     * @param Offset 从第几页开始返回，起始页，从0开始，默认为0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-k8voqdlz
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 查询开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页返回结果，分页大小，默认20，不超过100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 从第几页开始返回，起始页，从0开始，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESLOWLOGSREQUEST_H_
