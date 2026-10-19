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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGLOGSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGLOGSREQUEST_H_

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
                * DescribeBlockingLogs请求参数结构体
                */
                class DescribeBlockingLogsRequest : public AbstractModel
                {
                public:
                    DescribeBlockingLogsRequest();
                    ~DescribeBlockingLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
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
                     * 获取<p>服务产品类型，固定为sqlserver。</p>
                     * @return Product <p>服务产品类型，固定为sqlserver。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，固定为sqlserver。</p>
                     * @param _product <p>服务产品类型，固定为sqlserver。</p>
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
                     * 获取<p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * @return StartTime <p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     * @param _startTime <p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
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
                     * 获取<p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 1 天（24 小时），否则返回 InvalidParameterValue。大跨度趋势场景请改用 DescribeBlockingTrend。</p>
                     * @return EndTime <p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 1 天（24 小时），否则返回 InvalidParameterValue。大跨度趋势场景请改用 DescribeBlockingTrend。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 1 天（24 小时），否则返回 InvalidParameterValue。大跨度趋势场景请改用 DescribeBlockingTrend。</p>
                     * @param _endTime <p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 1 天（24 小时），否则返回 InvalidParameterValue。大跨度趋势场景请改用 DescribeBlockingTrend。</p>
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
                     * 获取<p>根因过滤（可选），支持：C1_LONG_QUERY=长事务查询持锁；C2_SLEEP_UNCOMMITTED=sleeping会话持未提交事务；C3_LOCK_ESCALATION=锁升级；C4_HIGH_CONCURRENCY=高并发争用；C5_INDEX_MISS=索引缺失导致大范围锁；C6_ORPHAN_TRAN=孤儿事务。</p>
                     * @return RootCause <p>根因过滤（可选），支持：C1_LONG_QUERY=长事务查询持锁；C2_SLEEP_UNCOMMITTED=sleeping会话持未提交事务；C3_LOCK_ESCALATION=锁升级；C4_HIGH_CONCURRENCY=高并发争用；C5_INDEX_MISS=索引缺失导致大范围锁；C6_ORPHAN_TRAN=孤儿事务。</p>
                     * 
                     */
                    std::string GetRootCause() const;

                    /**
                     * 设置<p>根因过滤（可选），支持：C1_LONG_QUERY=长事务查询持锁；C2_SLEEP_UNCOMMITTED=sleeping会话持未提交事务；C3_LOCK_ESCALATION=锁升级；C4_HIGH_CONCURRENCY=高并发争用；C5_INDEX_MISS=索引缺失导致大范围锁；C6_ORPHAN_TRAN=孤儿事务。</p>
                     * @param _rootCause <p>根因过滤（可选），支持：C1_LONG_QUERY=长事务查询持锁；C2_SLEEP_UNCOMMITTED=sleeping会话持未提交事务；C3_LOCK_ESCALATION=锁升级；C4_HIGH_CONCURRENCY=高并发争用；C5_INDEX_MISS=索引缺失导致大范围锁；C6_ORPHAN_TRAN=孤儿事务。</p>
                     * 
                     */
                    void SetRootCause(const std::string& _rootCause);

                    /**
                     * 判断参数 RootCause 是否已赋值
                     * @return RootCause 是否已赋值
                     * 
                     */
                    bool RootCauseHasBeenSet() const;

                    /**
                     * 获取<p>头SQL（blocker）MD5过滤（可选）。</p>
                     * @return BlockingSqlMd5 <p>头SQL（blocker）MD5过滤（可选）。</p>
                     * 
                     */
                    std::string GetBlockingSqlMd5() const;

                    /**
                     * 设置<p>头SQL（blocker）MD5过滤（可选）。</p>
                     * @param _blockingSqlMd5 <p>头SQL（blocker）MD5过滤（可选）。</p>
                     * 
                     */
                    void SetBlockingSqlMd5(const std::string& _blockingSqlMd5);

                    /**
                     * 判断参数 BlockingSqlMd5 是否已赋值
                     * @return BlockingSqlMd5 是否已赋值
                     * 
                     */
                    bool BlockingSqlMd5HasBeenSet() const;

                    /**
                     * 获取<p>被阻塞SQL（blocked）MD5过滤（可选）。</p>
                     * @return BlockedSqlMd5 <p>被阻塞SQL（blocked）MD5过滤（可选）。</p>
                     * 
                     */
                    std::string GetBlockedSqlMd5() const;

                    /**
                     * 设置<p>被阻塞SQL（blocked）MD5过滤（可选）。</p>
                     * @param _blockedSqlMd5 <p>被阻塞SQL（blocked）MD5过滤（可选）。</p>
                     * 
                     */
                    void SetBlockedSqlMd5(const std::string& _blockedSqlMd5);

                    /**
                     * 判断参数 BlockedSqlMd5 是否已赋值
                     * @return BlockedSqlMd5 是否已赋值
                     * 
                     */
                    bool BlockedSqlMd5HasBeenSet() const;

                    /**
                     * 获取<p>数据库名列表过滤（可选），按阻塞事件所在数据库名过滤；列表内任意匹配即命中，最多50项。多库实例场景下推荐用本字段定位阻塞所在库。</p>
                     * @return DatabaseNames <p>数据库名列表过滤（可选），按阻塞事件所在数据库名过滤；列表内任意匹配即命中，最多50项。多库实例场景下推荐用本字段定位阻塞所在库。</p>
                     * 
                     */
                    std::vector<std::string> GetDatabaseNames() const;

                    /**
                     * 设置<p>数据库名列表过滤（可选），按阻塞事件所在数据库名过滤；列表内任意匹配即命中，最多50项。多库实例场景下推荐用本字段定位阻塞所在库。</p>
                     * @param _databaseNames <p>数据库名列表过滤（可选），按阻塞事件所在数据库名过滤；列表内任意匹配即命中，最多50项。多库实例场景下推荐用本字段定位阻塞所在库。</p>
                     * 
                     */
                    void SetDatabaseNames(const std::vector<std::string>& _databaseNames);

                    /**
                     * 判断参数 DatabaseNames 是否已赋值
                     * @return DatabaseNames 是否已赋值
                     * 
                     */
                    bool DatabaseNamesHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @return BlockingSessionIds <p>头阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    std::vector<int64_t> GetBlockingSessionIds() const;

                    /**
                     * 设置<p>头阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @param _blockingSessionIds <p>头阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    void SetBlockingSessionIds(const std::vector<int64_t>& _blockingSessionIds);

                    /**
                     * 判断参数 BlockingSessionIds 是否已赋值
                     * @return BlockingSessionIds 是否已赋值
                     * 
                     */
                    bool BlockingSessionIdsHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @return BlockedSessionIds <p>被阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    std::vector<int64_t> GetBlockedSessionIds() const;

                    /**
                     * 设置<p>被阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @param _blockedSessionIds <p>被阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    void SetBlockedSessionIds(const std::vector<int64_t>& _blockedSessionIds);

                    /**
                     * 判断参数 BlockedSessionIds 是否已赋值
                     * @return BlockedSessionIds 是否已赋值
                     * 
                     */
                    bool BlockedSessionIdsHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @return BlockingLoginNames <p>头阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    std::vector<std::string> GetBlockingLoginNames() const;

                    /**
                     * 设置<p>头阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @param _blockingLoginNames <p>头阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    void SetBlockingLoginNames(const std::vector<std::string>& _blockingLoginNames);

                    /**
                     * 判断参数 BlockingLoginNames 是否已赋值
                     * @return BlockingLoginNames 是否已赋值
                     * 
                     */
                    bool BlockingLoginNamesHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @return BlockedLoginNames <p>被阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    std::vector<std::string> GetBlockedLoginNames() const;

                    /**
                     * 设置<p>被阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @param _blockedLoginNames <p>被阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    void SetBlockedLoginNames(const std::vector<std::string>& _blockedLoginNames);

                    /**
                     * 判断参数 BlockedLoginNames 是否已赋值
                     * @return BlockedLoginNames 是否已赋值
                     * 
                     */
                    bool BlockedLoginNamesHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @return BlockingHostNames <p>头阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    std::vector<std::string> GetBlockingHostNames() const;

                    /**
                     * 设置<p>头阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @param _blockingHostNames <p>头阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    void SetBlockingHostNames(const std::vector<std::string>& _blockingHostNames);

                    /**
                     * 判断参数 BlockingHostNames 是否已赋值
                     * @return BlockingHostNames 是否已赋值
                     * 
                     */
                    bool BlockingHostNamesHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @return BlockedHostNames <p>被阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    std::vector<std::string> GetBlockedHostNames() const;

                    /**
                     * 设置<p>被阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @param _blockedHostNames <p>被阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    void SetBlockedHostNames(const std::vector<std::string>& _blockedHostNames);

                    /**
                     * 判断参数 BlockedHostNames 是否已赋值
                     * @return BlockedHostNames 是否已赋值
                     * 
                     */
                    bool BlockedHostNamesHasBeenSet() const;

                    /**
                     * 获取<p>头阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @return BlockingClientApps <p>头阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    std::vector<std::string> GetBlockingClientApps() const;

                    /**
                     * 设置<p>头阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @param _blockingClientApps <p>头阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    void SetBlockingClientApps(const std::vector<std::string>& _blockingClientApps);

                    /**
                     * 判断参数 BlockingClientApps 是否已赋值
                     * @return BlockingClientApps 是否已赋值
                     * 
                     */
                    bool BlockingClientAppsHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @return BlockedClientApps <p>被阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    std::vector<std::string> GetBlockedClientApps() const;

                    /**
                     * 设置<p>被阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * @param _blockedClientApps <p>被阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    void SetBlockedClientApps(const std::vector<std::string>& _blockedClientApps);

                    /**
                     * 判断参数 BlockedClientApps 是否已赋值
                     * @return BlockedClientApps 是否已赋值
                     * 
                     */
                    bool BlockedClientAppsHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞方等待锁模式列表过滤（可选），SQL Server原生lock_mode枚举，常见取值（非穷尽）：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M；serializable隔离级别下还可能出现RangeS-S / RangeS-U / RangeX-X / RangeI-N系列。列表内任意匹配即命中，最多50项。</p>
                     * @return BlockedLockModes <p>被阻塞方等待锁模式列表过滤（可选），SQL Server原生lock_mode枚举，常见取值（非穷尽）：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M；serializable隔离级别下还可能出现RangeS-S / RangeS-U / RangeX-X / RangeI-N系列。列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    std::vector<std::string> GetBlockedLockModes() const;

                    /**
                     * 设置<p>被阻塞方等待锁模式列表过滤（可选），SQL Server原生lock_mode枚举，常见取值（非穷尽）：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M；serializable隔离级别下还可能出现RangeS-S / RangeS-U / RangeX-X / RangeI-N系列。列表内任意匹配即命中，最多50项。</p>
                     * @param _blockedLockModes <p>被阻塞方等待锁模式列表过滤（可选），SQL Server原生lock_mode枚举，常见取值（非穷尽）：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M；serializable隔离级别下还可能出现RangeS-S / RangeS-U / RangeX-X / RangeI-N系列。列表内任意匹配即命中，最多50项。</p>
                     * 
                     */
                    void SetBlockedLockModes(const std::vector<std::string>& _blockedLockModes);

                    /**
                     * 判断参数 BlockedLockModes 是否已赋值
                     * @return BlockedLockModes 是否已赋值
                     * 
                     */
                    bool BlockedLockModesHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞方等待时长下限（毫秒，含），用于筛选慢阻塞（可选）。</p>
                     * @return DurationMsMin <p>被阻塞方等待时长下限（毫秒，含），用于筛选慢阻塞（可选）。</p>
                     * 
                     */
                    int64_t GetDurationMsMin() const;

                    /**
                     * 设置<p>被阻塞方等待时长下限（毫秒，含），用于筛选慢阻塞（可选）。</p>
                     * @param _durationMsMin <p>被阻塞方等待时长下限（毫秒，含），用于筛选慢阻塞（可选）。</p>
                     * 
                     */
                    void SetDurationMsMin(const int64_t& _durationMsMin);

                    /**
                     * 判断参数 DurationMsMin 是否已赋值
                     * @return DurationMsMin 是否已赋值
                     * 
                     */
                    bool DurationMsMinHasBeenSet() const;

                    /**
                     * 获取<p>被阻塞方等待时长上限（毫秒，含），用于筛选阻塞时长不超过某值的记录（可选）。</p>
                     * @return DurationMsMax <p>被阻塞方等待时长上限（毫秒，含），用于筛选阻塞时长不超过某值的记录（可选）。</p>
                     * 
                     */
                    int64_t GetDurationMsMax() const;

                    /**
                     * 设置<p>被阻塞方等待时长上限（毫秒，含），用于筛选阻塞时长不超过某值的记录（可选）。</p>
                     * @param _durationMsMax <p>被阻塞方等待时长上限（毫秒，含），用于筛选阻塞时长不超过某值的记录（可选）。</p>
                     * 
                     */
                    void SetDurationMsMax(const int64_t& _durationMsMax);

                    /**
                     * 判断参数 DurationMsMax 是否已赋值
                     * @return DurationMsMax 是否已赋值
                     * 
                     */
                    bool DurationMsMaxHasBeenSet() const;

                    /**
                     * 获取<p>排序字段（可选），支持reportTime（按明细行上报时间，默认）/ durationMs（按链路阻塞时长）/ blockedWaitTimeMs（按被阻塞方等待时长）/ blockingWaitTimeMs（按头阻塞自身等待时长）。</p>
                     * @return OrderBy <p>排序字段（可选），支持reportTime（按明细行上报时间，默认）/ durationMs（按链路阻塞时长）/ blockedWaitTimeMs（按被阻塞方等待时长）/ blockingWaitTimeMs（按头阻塞自身等待时长）。</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序字段（可选），支持reportTime（按明细行上报时间，默认）/ durationMs（按链路阻塞时长）/ blockedWaitTimeMs（按被阻塞方等待时长）/ blockingWaitTimeMs（按头阻塞自身等待时长）。</p>
                     * @param _orderBy <p>排序字段（可选），支持reportTime（按明细行上报时间，默认）/ durationMs（按链路阻塞时长）/ blockedWaitTimeMs（按被阻塞方等待时长）/ blockingWaitTimeMs（按头阻塞自身等待时长）。</p>
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
                     * 获取<p>排序方向（可选），支持desc（默认，倒序）/ asc（正序）。</p>
                     * @return OrderDirection <p>排序方向（可选），支持desc（默认，倒序）/ asc（正序）。</p>
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置<p>排序方向（可选），支持desc（默认，倒序）/ asc（正序）。</p>
                     * @param _orderDirection <p>排序方向（可选），支持desc（默认，倒序）/ asc（正序）。</p>
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取<p>返回条数上限，默认20，最大100。</p>
                     * @return Limit <p>返回条数上限，默认20，最大100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回条数上限，默认20，最大100。</p>
                     * @param _limit <p>返回条数上限，默认20，最大100。</p>
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
                     * 获取<p>是否返回原始 blocked_process_report XML（可选，默认 false 不返回）。该字段体积较大（KB 级起步，含完整执行计划/等待链/死锁明细等原始上下文），常规列表展示不需要，仅在需要查看完整 XML 现场（如线下诊断、离线分析）时将本参数置为 true 按需拉取。</p>
                     * @return WithXml <p>是否返回原始 blocked_process_report XML（可选，默认 false 不返回）。该字段体积较大（KB 级起步，含完整执行计划/等待链/死锁明细等原始上下文），常规列表展示不需要，仅在需要查看完整 XML 现场（如线下诊断、离线分析）时将本参数置为 true 按需拉取。</p>
                     * 
                     */
                    bool GetWithXml() const;

                    /**
                     * 设置<p>是否返回原始 blocked_process_report XML（可选，默认 false 不返回）。该字段体积较大（KB 级起步，含完整执行计划/等待链/死锁明细等原始上下文），常规列表展示不需要，仅在需要查看完整 XML 现场（如线下诊断、离线分析）时将本参数置为 true 按需拉取。</p>
                     * @param _withXml <p>是否返回原始 blocked_process_report XML（可选，默认 false 不返回）。该字段体积较大（KB 级起步，含完整执行计划/等待链/死锁明细等原始上下文），常规列表展示不需要，仅在需要查看完整 XML 现场（如线下诊断、离线分析）时将本参数置为 true 按需拉取。</p>
                     * 
                     */
                    void SetWithXml(const bool& _withXml);

                    /**
                     * 判断参数 WithXml 是否已赋值
                     * @return WithXml 是否已赋值
                     * 
                     */
                    bool WithXmlHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务产品类型，固定为sqlserver。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>查询起始时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss。必须在最近 30 天内，否则返回 InvalidParameterValue。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间（服务端时区 UTC+8），格式：yyyy-MM-dd HH:mm:ss，需大于 StartTime。单次查询跨度必须 ≤ 1 天（24 小时），否则返回 InvalidParameterValue。大跨度趋势场景请改用 DescribeBlockingTrend。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>根因过滤（可选），支持：C1_LONG_QUERY=长事务查询持锁；C2_SLEEP_UNCOMMITTED=sleeping会话持未提交事务；C3_LOCK_ESCALATION=锁升级；C4_HIGH_CONCURRENCY=高并发争用；C5_INDEX_MISS=索引缺失导致大范围锁；C6_ORPHAN_TRAN=孤儿事务。</p>
                     */
                    std::string m_rootCause;
                    bool m_rootCauseHasBeenSet;

                    /**
                     * <p>头SQL（blocker）MD5过滤（可选）。</p>
                     */
                    std::string m_blockingSqlMd5;
                    bool m_blockingSqlMd5HasBeenSet;

                    /**
                     * <p>被阻塞SQL（blocked）MD5过滤（可选）。</p>
                     */
                    std::string m_blockedSqlMd5;
                    bool m_blockedSqlMd5HasBeenSet;

                    /**
                     * <p>数据库名列表过滤（可选），按阻塞事件所在数据库名过滤；列表内任意匹配即命中，最多50项。多库实例场景下推荐用本字段定位阻塞所在库。</p>
                     */
                    std::vector<std::string> m_databaseNames;
                    bool m_databaseNamesHasBeenSet;

                    /**
                     * <p>头阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     */
                    std::vector<int64_t> m_blockingSessionIds;
                    bool m_blockingSessionIdsHasBeenSet;

                    /**
                     * <p>被阻塞会话 ID（SPID）列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     */
                    std::vector<int64_t> m_blockedSessionIds;
                    bool m_blockedSessionIdsHasBeenSet;

                    /**
                     * <p>头阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     */
                    std::vector<std::string> m_blockingLoginNames;
                    bool m_blockingLoginNamesHasBeenSet;

                    /**
                     * <p>被阻塞登录名列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     */
                    std::vector<std::string> m_blockedLoginNames;
                    bool m_blockedLoginNamesHasBeenSet;

                    /**
                     * <p>头阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     */
                    std::vector<std::string> m_blockingHostNames;
                    bool m_blockingHostNamesHasBeenSet;

                    /**
                     * <p>被阻塞客户端主机列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     */
                    std::vector<std::string> m_blockedHostNames;
                    bool m_blockedHostNamesHasBeenSet;

                    /**
                     * <p>头阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     */
                    std::vector<std::string> m_blockingClientApps;
                    bool m_blockingClientAppsHasBeenSet;

                    /**
                     * <p>被阻塞客户端应用列表过滤（可选），列表内任意匹配即命中，最多50项。</p>
                     */
                    std::vector<std::string> m_blockedClientApps;
                    bool m_blockedClientAppsHasBeenSet;

                    /**
                     * <p>被阻塞方等待锁模式列表过滤（可选），SQL Server原生lock_mode枚举，常见取值（非穷尽）：S、U、X、IS、IU、IX、SIU、SIX、UIX、Sch-S、Sch-M；serializable隔离级别下还可能出现RangeS-S / RangeS-U / RangeX-X / RangeI-N系列。列表内任意匹配即命中，最多50项。</p>
                     */
                    std::vector<std::string> m_blockedLockModes;
                    bool m_blockedLockModesHasBeenSet;

                    /**
                     * <p>被阻塞方等待时长下限（毫秒，含），用于筛选慢阻塞（可选）。</p>
                     */
                    int64_t m_durationMsMin;
                    bool m_durationMsMinHasBeenSet;

                    /**
                     * <p>被阻塞方等待时长上限（毫秒，含），用于筛选阻塞时长不超过某值的记录（可选）。</p>
                     */
                    int64_t m_durationMsMax;
                    bool m_durationMsMaxHasBeenSet;

                    /**
                     * <p>排序字段（可选），支持reportTime（按明细行上报时间，默认）/ durationMs（按链路阻塞时长）/ blockedWaitTimeMs（按被阻塞方等待时长）/ blockingWaitTimeMs（按头阻塞自身等待时长）。</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序方向（可选），支持desc（默认，倒序）/ asc（正序）。</p>
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * <p>返回条数上限，默认20，最大100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>是否返回原始 blocked_process_report XML（可选，默认 false 不返回）。该字段体积较大（KB 级起步，含完整执行计划/等待链/死锁明细等原始上下文），常规列表展示不需要，仅在需要查看完整 XML 现场（如线下诊断、离线分析）时将本参数置为 true 按需拉取。</p>
                     */
                    bool m_withXml;
                    bool m_withXmlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGLOGSREQUEST_H_
