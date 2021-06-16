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

#ifndef TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
#define TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dlc/v20210125/model/CreateDatabaseRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateDatabaseResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateScriptRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateScriptResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateStoreLocationRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateStoreLocationResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskRequest.h>
#include <tencentcloud/dlc/v20210125/model/CreateTaskResponse.h>
#include <tencentcloud/dlc/v20210125/model/DeleteScriptRequest.h>
#include <tencentcloud/dlc/v20210125/model/DeleteScriptResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatabasesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeDatabasesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeScriptsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeScriptsResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTableRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTableResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTablesResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeTasksResponse.h>
#include <tencentcloud/dlc/v20210125/model/DescribeViewsRequest.h>
#include <tencentcloud/dlc/v20210125/model/DescribeViewsResponse.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            class DlcClient : public AbstractClient
            {
            public:
                DlcClient(const Credential &credential, const std::string &region);
                DlcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CreateDatabaseResponse> CreateDatabaseOutcome;
                typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateDatabaseRequest&, CreateDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
                typedef Outcome<Error, Model::CreateScriptResponse> CreateScriptOutcome;
                typedef std::future<CreateScriptOutcome> CreateScriptOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateScriptRequest&, CreateScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScriptAsyncHandler;
                typedef Outcome<Error, Model::CreateStoreLocationResponse> CreateStoreLocationOutcome;
                typedef std::future<CreateStoreLocationOutcome> CreateStoreLocationOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateStoreLocationRequest&, CreateStoreLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStoreLocationAsyncHandler;
                typedef Outcome<Error, Model::CreateTableResponse> CreateTableOutcome;
                typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTableRequest&, CreateTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
                typedef Outcome<Error, Model::CreateTaskResponse> CreateTaskOutcome;
                typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::CreateTaskRequest&, CreateTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
                typedef Outcome<Error, Model::DeleteScriptResponse> DeleteScriptOutcome;
                typedef std::future<DeleteScriptOutcome> DeleteScriptOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DeleteScriptRequest&, DeleteScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScriptAsyncHandler;
                typedef Outcome<Error, Model::DescribeDatabasesResponse> DescribeDatabasesOutcome;
                typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeDatabasesRequest&, DescribeDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
                typedef Outcome<Error, Model::DescribeScriptsResponse> DescribeScriptsOutcome;
                typedef std::future<DescribeScriptsOutcome> DescribeScriptsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeScriptsRequest&, DescribeScriptsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScriptsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTableResponse> DescribeTableOutcome;
                typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTableRequest&, DescribeTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableAsyncHandler;
                typedef Outcome<Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeViewsResponse> DescribeViewsOutcome;
                typedef std::future<DescribeViewsOutcome> DescribeViewsOutcomeCallable;
                typedef std::function<void(const DlcClient*, const Model::DescribeViewsRequest&, DescribeViewsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeViewsAsyncHandler;



                /**
                 *本接口（CreateDatabase）用于生成建库SQL语句。
                 * @param req CreateDatabaseRequest
                 * @return CreateDatabaseOutcome
                 */
                CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest &request);
                void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request);

                /**
                 *该接口（CreateScript）用于创建sql脚本。
                 * @param req CreateScriptRequest
                 * @return CreateScriptOutcome
                 */
                CreateScriptOutcome CreateScript(const Model::CreateScriptRequest &request);
                void CreateScriptAsync(const Model::CreateScriptRequest& request, const CreateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScriptOutcomeCallable CreateScriptCallable(const Model::CreateScriptRequest& request);

                /**
                 *该接口（CreateStoreLocation）新增或覆盖计算结果存储位置。
                 * @param req CreateStoreLocationRequest
                 * @return CreateStoreLocationOutcome
                 */
                CreateStoreLocationOutcome CreateStoreLocation(const Model::CreateStoreLocationRequest &request);
                void CreateStoreLocationAsync(const Model::CreateStoreLocationRequest& request, const CreateStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStoreLocationOutcomeCallable CreateStoreLocationCallable(const Model::CreateStoreLocationRequest& request);

                /**
                 *本接口（CreateTable）用于生成建表SQL。
                 * @param req CreateTableRequest
                 * @return CreateTableOutcome
                 */
                CreateTableOutcome CreateTable(const Model::CreateTableRequest &request);
                void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request);

                /**
                 *本接口（CreateTask）用于创建sql查询任务。
                 * @param req CreateTaskRequest
                 * @return CreateTaskOutcome
                 */
                CreateTaskOutcome CreateTask(const Model::CreateTaskRequest &request);
                void CreateTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskOutcomeCallable CreateTaskCallable(const Model::CreateTaskRequest& request);

                /**
                 *该接口（DeleteScript）用于删除sql脚本。
                 * @param req DeleteScriptRequest
                 * @return DeleteScriptOutcome
                 */
                DeleteScriptOutcome DeleteScript(const Model::DeleteScriptRequest &request);
                void DeleteScriptAsync(const Model::DeleteScriptRequest& request, const DeleteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScriptOutcomeCallable DeleteScriptCallable(const Model::DeleteScriptRequest& request);

                /**
                 *本接口（DescribeDatabases）用于查询数据库列表。
                 * @param req DescribeDatabasesRequest
                 * @return DescribeDatabasesOutcome
                 */
                DescribeDatabasesOutcome DescribeDatabases(const Model::DescribeDatabasesRequest &request);
                void DescribeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabasesOutcomeCallable DescribeDatabasesCallable(const Model::DescribeDatabasesRequest& request);

                /**
                 *该接口（DescribeScripts）用于获取所有SQL查询。
                 * @param req DescribeScriptsRequest
                 * @return DescribeScriptsOutcome
                 */
                DescribeScriptsOutcome DescribeScripts(const Model::DescribeScriptsRequest &request);
                void DescribeScriptsAsync(const Model::DescribeScriptsRequest& request, const DescribeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScriptsOutcomeCallable DescribeScriptsCallable(const Model::DescribeScriptsRequest& request);

                /**
                 *查询单个表的详细信息。
                 * @param req DescribeTableRequest
                 * @return DescribeTableOutcome
                 */
                DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest &request);
                void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request);

                /**
                 *本接口（DescribleTables）用于查询数据表列表。
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *该接口（DescribleTasks）用于查询任务列表
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *本接口（DescribeViews）用于查询数据视图列表。
                 * @param req DescribeViewsRequest
                 * @return DescribeViewsOutcome
                 */
                DescribeViewsOutcome DescribeViews(const Model::DescribeViewsRequest &request);
                void DescribeViewsAsync(const Model::DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeViewsOutcomeCallable DescribeViewsCallable(const Model::DescribeViewsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_DLCCLIENT_H_
