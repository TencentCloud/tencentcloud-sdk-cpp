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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditLogQueryFilter.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBAuditLogs请求参数结构体
                */
                class DescribeDBAuditLogsRequest : public AbstractModel
                {
                public:
                    DescribeDBAuditLogsRequest();
                    ~DescribeDBAuditLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务产品类型。当前  云 API 仅支持：dcdb、mariadb（cdb、cynosdb 已切至中台）。</p>
                     * @return Product <p>服务产品类型。当前  云 API 仅支持：dcdb、mariadb（cdb、cynosdb 已切至中台）。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型。当前  云 API 仅支持：dcdb、mariadb（cdb、cynosdb 已切至中台）。</p>
                     * @param _product <p>服务产品类型。当前  云 API 仅支持：dcdb、mariadb（cdb、cynosdb 已切至中台）。</p>
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
                     * 获取<p>开始时间，格式 yyyy-MM-dd HH:mm:ss。</p>
                     * @return StartTime <p>开始时间，格式 yyyy-MM-dd HH:mm:ss。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，格式 yyyy-MM-dd HH:mm:ss。</p>
                     * @param _startTime <p>开始时间，格式 yyyy-MM-dd HH:mm:ss。</p>
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
                     * 获取<p>结束时间，格式 yyyy-MM-dd HH:mm:ss。</p>
                     * @return EndTime <p>结束时间，格式 yyyy-MM-dd HH:mm:ss。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，格式 yyyy-MM-dd HH:mm:ss。</p>
                     * @param _endTime <p>结束时间，格式 yyyy-MM-dd HH:mm:ss。</p>
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
                     * 获取<p>实例 ID，必填。dcdb、mariadb 场景以实例维度查询审计日志。</p>
                     * @return InstanceId <p>实例 ID，必填。dcdb、mariadb 场景以实例维度查询审计日志。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，必填。dcdb、mariadb 场景以实例维度查询审计日志。</p>
                     * @param _instanceId <p>实例 ID，必填。dcdb、mariadb 场景以实例维度查询审计日志。</p>
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
                     * 获取<p>日志类型：Proxy 代理日志，DB 数据库日志，All 全部。</p>
                     * @return LogType <p>日志类型：Proxy 代理日志，DB 数据库日志，All 全部。</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型：Proxy 代理日志，DB 数据库日志，All 全部。</p>
                     * @param _logType <p>日志类型：Proxy 代理日志，DB 数据库日志，All 全部。</p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>排序字段，默认 Timestamp。</p>
                     * @return SortBy <p>排序字段，默认 Timestamp。</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序字段，默认 Timestamp。</p>
                     * @param _sortBy <p>排序字段，默认 Timestamp。</p>
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
                     * 获取<p>排序方式：ASC 升序，DESC 降序。默认 DESC。</p>
                     * @return OrderBy <p>排序方式：ASC 升序，DESC 降序。默认 DESC。</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序方式：ASC 升序，DESC 降序。默认 DESC。</p>
                     * @param _orderBy <p>排序方式：ASC 升序，DESC 降序。默认 DESC。</p>
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
                     * 获取<p>偏移量，默认 0。</p>
                     * @return Offset <p>偏移量，默认 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认 0。</p>
                     * @param _offset <p>偏移量，默认 0。</p>
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
                     * 获取<p>返回数量，默认 20，最大 100。</p>
                     * @return Limit <p>返回数量，默认 20，最大 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认 20，最大 100。</p>
                     * @param _limit <p>返回数量，默认 20，最大 100。</p>
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
                     * 获取<p>SQL 开始时间（毫秒级时间戳），根据 QueryId 关联查询时使用。</p>
                     * @return SqlStartTime <p>SQL 开始时间（毫秒级时间戳），根据 QueryId 关联查询时使用。</p>
                     * 
                     */
                    int64_t GetSqlStartTime() const;

                    /**
                     * 设置<p>SQL 开始时间（毫秒级时间戳），根据 QueryId 关联查询时使用。</p>
                     * @param _sqlStartTime <p>SQL 开始时间（毫秒级时间戳），根据 QueryId 关联查询时使用。</p>
                     * 
                     */
                    void SetSqlStartTime(const int64_t& _sqlStartTime);

                    /**
                     * 判断参数 SqlStartTime 是否已赋值
                     * @return SqlStartTime 是否已赋值
                     * 
                     */
                    bool SqlStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>审计日志查询过滤条件集合。</p>
                     * @return Filter <p>审计日志查询过滤条件集合。</p>
                     * 
                     */
                    AuditLogQueryFilter GetFilter() const;

                    /**
                     * 设置<p>审计日志查询过滤条件集合。</p>
                     * @param _filter <p>审计日志查询过滤条件集合。</p>
                     * 
                     */
                    void SetFilter(const AuditLogQueryFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>集群 ID，dcdb 产品以集群维度查询审计日志</p>
                     * @return ClusterId <p>集群 ID，dcdb 产品以集群维度查询审计日志</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID，dcdb 产品以集群维度查询审计日志</p>
                     * @param _clusterId <p>集群 ID，dcdb 产品以集群维度查询审计日志</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>服务产品类型。当前  云 API 仅支持：dcdb、mariadb（cdb、cynosdb 已切至中台）。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>开始时间，格式 yyyy-MM-dd HH:mm:ss。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，格式 yyyy-MM-dd HH:mm:ss。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>实例 ID，必填。dcdb、mariadb 场景以实例维度查询审计日志。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志类型：Proxy 代理日志，DB 数据库日志，All 全部。</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>排序字段，默认 Timestamp。</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>排序方式：ASC 升序，DESC 降序。默认 DESC。</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>偏移量，默认 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认 20，最大 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>SQL 开始时间（毫秒级时间戳），根据 QueryId 关联查询时使用。</p>
                     */
                    int64_t m_sqlStartTime;
                    bool m_sqlStartTimeHasBeenSet;

                    /**
                     * <p>审计日志查询过滤条件集合。</p>
                     */
                    AuditLogQueryFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>集群 ID，dcdb 产品以集群维度查询审计日志</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSREQUEST_H_
