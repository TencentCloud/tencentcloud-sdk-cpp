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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISSLOWLOGTOPSQLSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISSLOWLOGTOPSQLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeRedisSlowLogTopSqls请求参数结构体
                */
                class DescribeRedisSlowLogTopSqlsRequest : public AbstractModel
                {
                public:
                    DescribeRedisSlowLogTopSqlsRequest();
                    ~DescribeRedisSlowLogTopSqlsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 。
                     * @return InstanceId 实例 ID 。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID 。
                     * @param _instanceId 实例 ID 。
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
                     * 获取开始时间，如“2019-09-10 12:13:14”。
                     * @return StartTime 开始时间，如“2019-09-10 12:13:14”。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如“2019-09-10 12:13:14”。
                     * @param _startTime 开始时间，如“2019-09-10 12:13:14”。
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
                     * 获取截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * @return EndTime 截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     * @param _endTime 截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
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
                     * 获取服务产品类型，支持值： "redis" - 云数据库 Redis。
                     * @return Product 服务产品类型，支持值： "redis" - 云数据库 Redis。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值： "redis" - 云数据库 Redis。
                     * @param _product 服务产品类型，支持值： "redis" - 云数据库 Redis。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Redis Proxy节点ID。
                     * @return InstanceProxyId Redis Proxy节点ID。
                     * 
                     */
                    std::string GetInstanceProxyId() const;

                    /**
                     * 设置Redis Proxy节点ID。
                     * @param _instanceProxyId Redis Proxy节点ID。
                     * 
                     */
                    void SetInstanceProxyId(const std::string& _instanceProxyId);

                    /**
                     * 判断参数 InstanceProxyId 是否已赋值
                     * @return InstanceProxyId 是否已赋值
                     * 
                     */
                    bool InstanceProxyIdHasBeenSet() const;

                    /**
                     * 获取排序键，支持ExecTimes,QueryTime,QueryTimeMax,QueryTimeAvg等排序键，默认为QueryTime。
                     * @return SortBy 排序键，支持ExecTimes,QueryTime,QueryTimeMax,QueryTimeAvg等排序键，默认为QueryTime。
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序键，支持ExecTimes,QueryTime,QueryTimeMax,QueryTimeAvg等排序键，默认为QueryTime。
                     * @param _sortBy 排序键，支持ExecTimes,QueryTime,QueryTimeMax,QueryTimeAvg等排序键，默认为QueryTime。
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。
                     * @return OrderBy 排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。
                     * @param _orderBy 排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。
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
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 实例 ID 。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间，如“2019-09-10 12:13:14”。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 服务产品类型，支持值： "redis" - 云数据库 Redis。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Redis Proxy节点ID。
                     */
                    std::string m_instanceProxyId;
                    bool m_instanceProxyIdHasBeenSet;

                    /**
                     * 排序键，支持ExecTimes,QueryTime,QueryTimeMax,QueryTimeAvg等排序键，默认为QueryTime。
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISSLOWLOGTOPSQLSREQUEST_H_
