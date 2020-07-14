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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_DBBRAINCLIENT_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_DBBRAINCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagEventResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagHistoryResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeDBSpaceStatusResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTimeSeriesStatsResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeSlowLogTopSqlsResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTableTimeSeriesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTableTimeSeriesResponse.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTablesRequest.h>
#include <tencentcloud/dbbrain/v20191016/model/DescribeTopSpaceTablesResponse.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            class DbbrainClient : public AbstractClient
            {
            public:
                DbbrainClient(const Credential &credential, const std::string &region);
                DbbrainClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeDBDiagEventResponse> DescribeDBDiagEventOutcome;
                typedef std::future<DescribeDBDiagEventOutcome> DescribeDBDiagEventOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagEventRequest&, DescribeDBDiagEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagEventAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBDiagHistoryResponse> DescribeDBDiagHistoryOutcome;
                typedef std::future<DescribeDBDiagHistoryOutcome> DescribeDBDiagHistoryOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBDiagHistoryRequest&, DescribeDBDiagHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBDiagHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeDBSpaceStatusResponse> DescribeDBSpaceStatusOutcome;
                typedef std::future<DescribeDBSpaceStatusOutcome> DescribeDBSpaceStatusOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeDBSpaceStatusRequest&, DescribeDBSpaceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSpaceStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeSlowLogTimeSeriesStatsResponse> DescribeSlowLogTimeSeriesStatsOutcome;
                typedef std::future<DescribeSlowLogTimeSeriesStatsOutcome> DescribeSlowLogTimeSeriesStatsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogTimeSeriesStatsRequest&, DescribeSlowLogTimeSeriesStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTimeSeriesStatsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSlowLogTopSqlsResponse> DescribeSlowLogTopSqlsOutcome;
                typedef std::future<DescribeSlowLogTopSqlsOutcome> DescribeSlowLogTopSqlsOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeSlowLogTopSqlsRequest&, DescribeSlowLogTopSqlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogTopSqlsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTopSpaceTableTimeSeriesResponse> DescribeTopSpaceTableTimeSeriesOutcome;
                typedef std::future<DescribeTopSpaceTableTimeSeriesOutcome> DescribeTopSpaceTableTimeSeriesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceTableTimeSeriesRequest&, DescribeTopSpaceTableTimeSeriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceTableTimeSeriesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTopSpaceTablesResponse> DescribeTopSpaceTablesOutcome;
                typedef std::future<DescribeTopSpaceTablesOutcome> DescribeTopSpaceTablesOutcomeCallable;
                typedef std::function<void(const DbbrainClient*, const Model::DescribeTopSpaceTablesRequest&, DescribeTopSpaceTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopSpaceTablesAsyncHandler;



                /**
                 *获取实例异常诊断事件的详情信息。
                 * @param req DescribeDBDiagEventRequest
                 * @return DescribeDBDiagEventOutcome
                 */
                DescribeDBDiagEventOutcome DescribeDBDiagEvent(const Model::DescribeDBDiagEventRequest &request);
                void DescribeDBDiagEventAsync(const Model::DescribeDBDiagEventRequest& request, const DescribeDBDiagEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagEventOutcomeCallable DescribeDBDiagEventCallable(const Model::DescribeDBDiagEventRequest& request);

                /**
                 *获取实例诊断事件的列表。
                 * @param req DescribeDBDiagHistoryRequest
                 * @return DescribeDBDiagHistoryOutcome
                 */
                DescribeDBDiagHistoryOutcome DescribeDBDiagHistory(const Model::DescribeDBDiagHistoryRequest &request);
                void DescribeDBDiagHistoryAsync(const Model::DescribeDBDiagHistoryRequest& request, const DescribeDBDiagHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBDiagHistoryOutcomeCallable DescribeDBDiagHistoryCallable(const Model::DescribeDBDiagHistoryRequest& request);

                /**
                 *获取指定时间段内的实例空间使用概览，包括磁盘增长量(MB)、磁盘剩余(MB)、磁盘总量(MB)及预计可用天数。
                 * @param req DescribeDBSpaceStatusRequest
                 * @return DescribeDBSpaceStatusOutcome
                 */
                DescribeDBSpaceStatusOutcome DescribeDBSpaceStatus(const Model::DescribeDBSpaceStatusRequest &request);
                void DescribeDBSpaceStatusAsync(const Model::DescribeDBSpaceStatusRequest& request, const DescribeDBSpaceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSpaceStatusOutcomeCallable DescribeDBSpaceStatusCallable(const Model::DescribeDBSpaceStatusRequest& request);

                /**
                 *获取慢日志统计柱状图
                 * @param req DescribeSlowLogTimeSeriesStatsRequest
                 * @return DescribeSlowLogTimeSeriesStatsOutcome
                 */
                DescribeSlowLogTimeSeriesStatsOutcome DescribeSlowLogTimeSeriesStats(const Model::DescribeSlowLogTimeSeriesStatsRequest &request);
                void DescribeSlowLogTimeSeriesStatsAsync(const Model::DescribeSlowLogTimeSeriesStatsRequest& request, const DescribeSlowLogTimeSeriesStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogTimeSeriesStatsOutcomeCallable DescribeSlowLogTimeSeriesStatsCallable(const Model::DescribeSlowLogTimeSeriesStatsRequest& request);

                /**
                 *按照Sql模板+schema的聚合方式，统计排序指定时间段内的top慢sql。
                 * @param req DescribeSlowLogTopSqlsRequest
                 * @return DescribeSlowLogTopSqlsOutcome
                 */
                DescribeSlowLogTopSqlsOutcome DescribeSlowLogTopSqls(const Model::DescribeSlowLogTopSqlsRequest &request);
                void DescribeSlowLogTopSqlsAsync(const Model::DescribeSlowLogTopSqlsRequest& request, const DescribeSlowLogTopSqlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogTopSqlsOutcomeCallable DescribeSlowLogTopSqlsCallable(const Model::DescribeSlowLogTopSqlsRequest& request);

                /**
                 *获取实例占用空间最大的前几张表在指定时间段内的每日由DBbrain定时采集的空间数据，默认返回按大小排序。
                 * @param req DescribeTopSpaceTableTimeSeriesRequest
                 * @return DescribeTopSpaceTableTimeSeriesOutcome
                 */
                DescribeTopSpaceTableTimeSeriesOutcome DescribeTopSpaceTableTimeSeries(const Model::DescribeTopSpaceTableTimeSeriesRequest &request);
                void DescribeTopSpaceTableTimeSeriesAsync(const Model::DescribeTopSpaceTableTimeSeriesRequest& request, const DescribeTopSpaceTableTimeSeriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceTableTimeSeriesOutcomeCallable DescribeTopSpaceTableTimeSeriesCallable(const Model::DescribeTopSpaceTableTimeSeriesRequest& request);

                /**
                 *获取实例Top表的实时空间统计信息，默认返回按大小排序。
                 * @param req DescribeTopSpaceTablesRequest
                 * @return DescribeTopSpaceTablesOutcome
                 */
                DescribeTopSpaceTablesOutcome DescribeTopSpaceTables(const Model::DescribeTopSpaceTablesRequest &request);
                void DescribeTopSpaceTablesAsync(const Model::DescribeTopSpaceTablesRequest& request, const DescribeTopSpaceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopSpaceTablesOutcomeCallable DescribeTopSpaceTablesCallable(const Model::DescribeTopSpaceTablesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_DBBRAINCLIENT_H_
