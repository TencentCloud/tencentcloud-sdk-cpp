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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBXLOGSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBXLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBXlogs请求参数结构体
                */
                class DescribeDBXlogsRequest : public AbstractModel
                {
                public:
                    DescribeDBXlogsRequest();
                    ~DescribeDBXlogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如postgres-4wdeb0zv。
                     * @return DBInstanceId 实例ID，形如postgres-4wdeb0zv。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-4wdeb0zv。
                     * @param _dBInstanceId 实例ID，形如postgres-4wdeb0zv。
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
                     * @return StartTime 查询开始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
                     * @param _startTime 查询开始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
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
                     * 获取查询结束时间，形如2018-06-10 17:06:38
                     * @return EndTime 查询结束时间，形如2018-06-10 17:06:38
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，形如2018-06-10 17:06:38
                     * @param _endTime 查询结束时间，形如2018-06-10 17:06:38
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
                     * 获取分页返回，表示返回第几页的条目。从第0页开始计数。
                     * @return Offset 分页返回，表示返回第几页的条目。从第0页开始计数。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回，表示返回第几页的条目。从第0页开始计数。
                     * @param _offset 分页返回，表示返回第几页的条目。从第0页开始计数。
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
                     * 获取分页返回，表示每页有多少条目。取值为1-100。
                     * @return Limit 分页返回，表示每页有多少条目。取值为1-100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，表示每页有多少条目。取值为1-100。
                     * @param _limit 分页返回，表示每页有多少条目。取值为1-100。
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
                     * 实例ID，形如postgres-4wdeb0zv。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 查询开始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，形如2018-06-10 17:06:38
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页返回，表示返回第几页的条目。从第0页开始计数。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回，表示每页有多少条目。取值为1-100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBXLOGSREQUEST_H_
