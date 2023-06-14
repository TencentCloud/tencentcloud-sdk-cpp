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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_

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
                * DescribeDBSlowlogs请求参数结构体
                */
                class DescribeDBSlowlogsRequest : public AbstractModel
                {
                public:
                    DescribeDBSlowlogsRequest();
                    ~DescribeDBSlowlogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如postgres-lnp6j617
                     * @return DBInstanceId 实例ID，形如postgres-lnp6j617
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-lnp6j617
                     * @param _dBInstanceId 实例ID，形如postgres-lnp6j617
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
                     * 获取查询起始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
                     * @return StartTime 查询起始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
                     * @param _startTime 查询起始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
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
                     * 获取数据库名字
                     * @return DatabaseName 数据库名字
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名字
                     * @param _databaseName 数据库名字
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取按照何种指标排序，取值为sum_calls或者sum_cost_time。sum_calls-总调用次数；sum_cost_time-总的花费时间
                     * @return OrderBy 按照何种指标排序，取值为sum_calls或者sum_cost_time。sum_calls-总调用次数；sum_cost_time-总的花费时间
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置按照何种指标排序，取值为sum_calls或者sum_cost_time。sum_calls-总调用次数；sum_cost_time-总的花费时间
                     * @param _orderBy 按照何种指标排序，取值为sum_calls或者sum_cost_time。sum_calls-总调用次数；sum_cost_time-总的花费时间
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序规则。desc-降序；asc-升序
                     * @return OrderByType 排序规则。desc-降序；asc-升序
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序规则。desc-降序；asc-升序
                     * @param _orderByType 排序规则。desc-降序；asc-升序
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取分页返回结果，每页最大返回数量，取值为1-100，默认20
                     * @return Limit 分页返回结果，每页最大返回数量，取值为1-100，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回结果，每页最大返回数量，取值为1-100，默认20
                     * @param _limit 分页返回结果，每页最大返回数量，取值为1-100，默认20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页返回结果，返回结果的第几页，从0开始计数
                     * @return Offset 分页返回结果，返回结果的第几页，从0开始计数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回结果，返回结果的第几页，从0开始计数
                     * @param _offset 分页返回结果，返回结果的第几页，从0开始计数
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如postgres-lnp6j617
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 查询起始时间，形如2018-06-10 17:06:38，起始时间不得小于7天以前
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，形如2018-06-10 17:06:38
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 数据库名字
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 按照何种指标排序，取值为sum_calls或者sum_cost_time。sum_calls-总调用次数；sum_cost_time-总的花费时间
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序规则。desc-降序；asc-升序
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 分页返回结果，每页最大返回数量，取值为1-100，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页返回结果，返回结果的第几页，从0开始计数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBSLOWLOGSREQUEST_H_
