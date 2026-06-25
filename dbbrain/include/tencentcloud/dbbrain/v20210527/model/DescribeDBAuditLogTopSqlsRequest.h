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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGTOPSQLSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGTOPSQLSREQUEST_H_

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
                * DescribeDBAuditLogTopSqls请求参数结构体
                */
                class DescribeDBAuditLogTopSqlsRequest : public AbstractModel
                {
                public:
                    DescribeDBAuditLogTopSqlsRequest();
                    ~DescribeDBAuditLogTopSqlsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间，如“2019-09-10 12:13:14”。</p>
                     * @return StartTime <p>开始时间，如“2019-09-10 12:13:14”。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，如“2019-09-10 12:13:14”。</p>
                     * @param _startTime <p>开始时间，如“2019-09-10 12:13:14”。</p>
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
                     * 获取<p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     * @return EndTime <p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     * @param _endTime <p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
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
                     * 获取<p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，默认为&quot;mysql&quot;。</p>
                     * @return Product <p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，默认为&quot;mysql&quot;。</p>
                     * @param _product <p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，默认为&quot;mysql&quot;。</p>
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
                     * 获取<p>实例 ID 。</p>
                     * @return InstanceId <p>实例 ID 。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID 。</p>
                     * @param _instanceId <p>实例 ID 。</p>
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
                     * 获取<p>排序键，目前支持 QueryTime,ExecTimes,RowsSent,LockTime以及RowsExamined 等排序键，默认为QueryTime。</p>
                     * @return OrderBy <p>排序键，目前支持 QueryTime,ExecTimes,RowsSent,LockTime以及RowsExamined 等排序键，默认为QueryTime。</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序键，目前支持 QueryTime,ExecTimes,RowsSent,LockTime以及RowsExamined 等排序键，默认为QueryTime。</p>
                     * @param _orderBy <p>排序键，目前支持 QueryTime,ExecTimes,RowsSent,LockTime以及RowsExamined 等排序键，默认为QueryTime。</p>
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
                     * 获取<p>排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。</p>
                     * @return OrderByDirection <p>排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。</p>
                     * 
                     */
                    std::string GetOrderByDirection() const;

                    /**
                     * 设置<p>排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。</p>
                     * @param _orderByDirection <p>排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。</p>
                     * 
                     */
                    void SetOrderByDirection(const std::string& _orderByDirection);

                    /**
                     * 判断参数 OrderByDirection 是否已赋值
                     * @return OrderByDirection 是否已赋值
                     * 
                     */
                    bool OrderByDirectionHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100。</p>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>表名</p>
                     * @return TableName <p>表名</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名</p>
                     * @param _tableName <p>表名</p>
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取<p>Hosts名</p>
                     * @return Hosts <p>Hosts名</p>
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置<p>Hosts名</p>
                     * @param _hosts <p>Hosts名</p>
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取<p>sql codes</p>
                     * @return SqlCodes <p>sql codes</p>
                     * 
                     */
                    std::vector<std::string> GetSqlCodes() const;

                    /**
                     * 设置<p>sql codes</p>
                     * @param _sqlCodes <p>sql codes</p>
                     * 
                     */
                    void SetSqlCodes(const std::vector<std::string>& _sqlCodes);

                    /**
                     * 判断参数 SqlCodes 是否已赋值
                     * @return SqlCodes 是否已赋值
                     * 
                     */
                    bool SqlCodesHasBeenSet() const;

                    /**
                     * 获取<p>sql语句</p>
                     * @return SqlSample <p>sql语句</p>
                     * 
                     */
                    std::string GetSqlSample() const;

                    /**
                     * 设置<p>sql语句</p>
                     * @param _sqlSample <p>sql语句</p>
                     * 
                     */
                    void SetSqlSample(const std::string& _sqlSample);

                    /**
                     * 判断参数 SqlSample 是否已赋值
                     * @return SqlSample 是否已赋值
                     * 
                     */
                    bool SqlSampleHasBeenSet() const;

                    /**
                     * 获取<p>用户名列表</p>
                     * @return Users <p>用户名列表</p>
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置<p>用户名列表</p>
                     * @param _users <p>用户名列表</p>
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间，如“2019-09-10 12:13:14”。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>截止时间，如“2019-09-11 10:13:14”，截止时间与开始时间的间隔小于7天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，默认为&quot;mysql&quot;。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>实例 ID 。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>排序键，目前支持 QueryTime,ExecTimes,RowsSent,LockTime以及RowsExamined 等排序键，默认为QueryTime。</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序方式，支持ASC（升序）以及DESC（降序），默认为DESC。</p>
                     */
                    std::string m_orderByDirection;
                    bool m_orderByDirectionHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>表名</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>Hosts名</p>
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * <p>sql codes</p>
                     */
                    std::vector<std::string> m_sqlCodes;
                    bool m_sqlCodesHasBeenSet;

                    /**
                     * <p>sql语句</p>
                     */
                    std::string m_sqlSample;
                    bool m_sqlSampleHasBeenSet;

                    /**
                     * <p>用户名列表</p>
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGTOPSQLSREQUEST_H_
