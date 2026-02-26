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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MONITORCLIENT_H_
#define TENCENTCLOUD_MONITOR_V20230616_MONITORCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/monitor/v20230616/model/CreateNoticeContentTmplRequest.h>
#include <tencentcloud/monitor/v20230616/model/CreateNoticeContentTmplResponse.h>
#include <tencentcloud/monitor/v20230616/model/DeleteNoticeContentTmplsRequest.h>
#include <tencentcloud/monitor/v20230616/model/DeleteNoticeContentTmplsResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAlarmNotifyHistoriesRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeAlarmNotifyHistoriesResponse.h>
#include <tencentcloud/monitor/v20230616/model/DescribeNoticeContentTmplRequest.h>
#include <tencentcloud/monitor/v20230616/model/DescribeNoticeContentTmplResponse.h>
#include <tencentcloud/monitor/v20230616/model/ModifyNoticeContentTmplRequest.h>
#include <tencentcloud/monitor/v20230616/model/ModifyNoticeContentTmplResponse.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            class MonitorClient : public AbstractClient
            {
            public:
                MonitorClient(const Credential &credential, const std::string &region);
                MonitorClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateNoticeContentTmplResponse> CreateNoticeContentTmplOutcome;
                typedef std::future<CreateNoticeContentTmplOutcome> CreateNoticeContentTmplOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateNoticeContentTmplRequest&, CreateNoticeContentTmplOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNoticeContentTmplAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNoticeContentTmplsResponse> DeleteNoticeContentTmplsOutcome;
                typedef std::future<DeleteNoticeContentTmplsOutcome> DeleteNoticeContentTmplsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteNoticeContentTmplsRequest&, DeleteNoticeContentTmplsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNoticeContentTmplsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNotifyHistoriesResponse> DescribeAlarmNotifyHistoriesOutcome;
                typedef std::future<DescribeAlarmNotifyHistoriesOutcome> DescribeAlarmNotifyHistoriesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNotifyHistoriesRequest&, DescribeAlarmNotifyHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNotifyHistoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNoticeContentTmplResponse> DescribeNoticeContentTmplOutcome;
                typedef std::future<DescribeNoticeContentTmplOutcome> DescribeNoticeContentTmplOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeNoticeContentTmplRequest&, DescribeNoticeContentTmplOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoticeContentTmplAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNoticeContentTmplResponse> ModifyNoticeContentTmplOutcome;
                typedef std::future<ModifyNoticeContentTmplOutcome> ModifyNoticeContentTmplOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyNoticeContentTmplRequest&, ModifyNoticeContentTmplOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNoticeContentTmplAsyncHandler;



                /**
                 *创建自定义通知内容模板
                 * @param req CreateNoticeContentTmplRequest
                 * @return CreateNoticeContentTmplOutcome
                 */
                CreateNoticeContentTmplOutcome CreateNoticeContentTmpl(const Model::CreateNoticeContentTmplRequest &request);
                void CreateNoticeContentTmplAsync(const Model::CreateNoticeContentTmplRequest& request, const CreateNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNoticeContentTmplOutcomeCallable CreateNoticeContentTmplCallable(const Model::CreateNoticeContentTmplRequest& request);

                /**
                 *删除通知内容模板
                 * @param req DeleteNoticeContentTmplsRequest
                 * @return DeleteNoticeContentTmplsOutcome
                 */
                DeleteNoticeContentTmplsOutcome DeleteNoticeContentTmpls(const Model::DeleteNoticeContentTmplsRequest &request);
                void DeleteNoticeContentTmplsAsync(const Model::DeleteNoticeContentTmplsRequest& request, const DeleteNoticeContentTmplsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNoticeContentTmplsOutcomeCallable DeleteNoticeContentTmplsCallable(const Model::DeleteNoticeContentTmplsRequest& request);

                /**
                 *按需查询告警的通知历史
                 * @param req DescribeAlarmNotifyHistoriesRequest
                 * @return DescribeAlarmNotifyHistoriesOutcome
                 */
                DescribeAlarmNotifyHistoriesOutcome DescribeAlarmNotifyHistories(const Model::DescribeAlarmNotifyHistoriesRequest &request);
                void DescribeAlarmNotifyHistoriesAsync(const Model::DescribeAlarmNotifyHistoriesRequest& request, const DescribeAlarmNotifyHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNotifyHistoriesOutcomeCallable DescribeAlarmNotifyHistoriesCallable(const Model::DescribeAlarmNotifyHistoriesRequest& request);

                /**
                 *根据查询条件获取自定义通知内容模板，若所有查询条件空，则获取账号下所有模板
                 * @param req DescribeNoticeContentTmplRequest
                 * @return DescribeNoticeContentTmplOutcome
                 */
                DescribeNoticeContentTmplOutcome DescribeNoticeContentTmpl(const Model::DescribeNoticeContentTmplRequest &request);
                void DescribeNoticeContentTmplAsync(const Model::DescribeNoticeContentTmplRequest& request, const DescribeNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNoticeContentTmplOutcomeCallable DescribeNoticeContentTmplCallable(const Model::DescribeNoticeContentTmplRequest& request);

                /**
                 *修改通知内容模板
                 * @param req ModifyNoticeContentTmplRequest
                 * @return ModifyNoticeContentTmplOutcome
                 */
                ModifyNoticeContentTmplOutcome ModifyNoticeContentTmpl(const Model::ModifyNoticeContentTmplRequest &request);
                void ModifyNoticeContentTmplAsync(const Model::ModifyNoticeContentTmplRequest& request, const ModifyNoticeContentTmplAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNoticeContentTmplOutcomeCallable ModifyNoticeContentTmplCallable(const Model::ModifyNoticeContentTmplRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MONITORCLIENT_H_
