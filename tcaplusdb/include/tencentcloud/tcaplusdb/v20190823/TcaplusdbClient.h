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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_TCAPLUSDBCLIENT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_TCAPLUSDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ClearTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ClearTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CompareIdlFilesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateAppRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateAppResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateZoneRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/CreateZoneResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteAppRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteAppResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteIdlFilesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteZoneRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DeleteZoneResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeAppsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeAppsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeIdlFileInfosResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeRegionsResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTablesInRecycleResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTasksRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeTasksResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeUinInWhitelistResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeZonesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/DescribeZonesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyAppNameRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyAppNameResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyAppPasswordRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyAppPasswordResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableMemosResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTableQuotasResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyZoneNameRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ModifyZoneNameResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/RecoverRecycleTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/RollbackTablesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/RollbackTablesResponse.h>
#include <tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesRequest.h>
#include <tencentcloud/tcaplusdb/v20190823/model/VerifyIdlFilesResponse.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            class TcaplusdbClient : public AbstractClient
            {
            public:
                TcaplusdbClient(const Credential &credential, const std::string &region);
                TcaplusdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ClearTablesResponse> ClearTablesOutcome;
                typedef std::future<ClearTablesOutcome> ClearTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ClearTablesRequest&, ClearTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearTablesAsyncHandler;
                typedef Outcome<Error, Model::CompareIdlFilesResponse> CompareIdlFilesOutcome;
                typedef std::future<CompareIdlFilesOutcome> CompareIdlFilesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CompareIdlFilesRequest&, CompareIdlFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompareIdlFilesAsyncHandler;
                typedef Outcome<Error, Model::CreateAppResponse> CreateAppOutcome;
                typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CreateAppRequest&, CreateAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
                typedef Outcome<Error, Model::CreateTablesResponse> CreateTablesOutcome;
                typedef std::future<CreateTablesOutcome> CreateTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CreateTablesRequest&, CreateTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTablesAsyncHandler;
                typedef Outcome<Error, Model::CreateZoneResponse> CreateZoneOutcome;
                typedef std::future<CreateZoneOutcome> CreateZoneOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::CreateZoneRequest&, CreateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateZoneAsyncHandler;
                typedef Outcome<Error, Model::DeleteAppResponse> DeleteAppOutcome;
                typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteAppRequest&, DeleteAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
                typedef Outcome<Error, Model::DeleteIdlFilesResponse> DeleteIdlFilesOutcome;
                typedef std::future<DeleteIdlFilesOutcome> DeleteIdlFilesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteIdlFilesRequest&, DeleteIdlFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIdlFilesAsyncHandler;
                typedef Outcome<Error, Model::DeleteTablesResponse> DeleteTablesOutcome;
                typedef std::future<DeleteTablesOutcome> DeleteTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteTablesRequest&, DeleteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTablesAsyncHandler;
                typedef Outcome<Error, Model::DeleteZoneResponse> DeleteZoneOutcome;
                typedef std::future<DeleteZoneOutcome> DeleteZoneOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DeleteZoneRequest&, DeleteZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZoneAsyncHandler;
                typedef Outcome<Error, Model::DescribeAppsResponse> DescribeAppsOutcome;
                typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeAppsRequest&, DescribeAppsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppsAsyncHandler;
                typedef Outcome<Error, Model::DescribeIdlFileInfosResponse> DescribeIdlFileInfosOutcome;
                typedef std::future<DescribeIdlFileInfosOutcome> DescribeIdlFileInfosOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeIdlFileInfosRequest&, DescribeIdlFileInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdlFileInfosAsyncHandler;
                typedef Outcome<Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeTablesInRecycleResponse> DescribeTablesInRecycleOutcome;
                typedef std::future<DescribeTablesInRecycleOutcome> DescribeTablesInRecycleOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeTablesInRecycleRequest&, DescribeTablesInRecycleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesInRecycleAsyncHandler;
                typedef Outcome<Error, Model::DescribeTasksResponse> DescribeTasksOutcome;
                typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeTasksRequest&, DescribeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeUinInWhitelistResponse> DescribeUinInWhitelistOutcome;
                typedef std::future<DescribeUinInWhitelistOutcome> DescribeUinInWhitelistOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeUinInWhitelistRequest&, DescribeUinInWhitelistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUinInWhitelistAsyncHandler;
                typedef Outcome<Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Error, Model::ModifyAppNameResponse> ModifyAppNameOutcome;
                typedef std::future<ModifyAppNameOutcome> ModifyAppNameOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyAppNameRequest&, ModifyAppNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyAppPasswordResponse> ModifyAppPasswordOutcome;
                typedef std::future<ModifyAppPasswordOutcome> ModifyAppPasswordOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyAppPasswordRequest&, ModifyAppPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppPasswordAsyncHandler;
                typedef Outcome<Error, Model::ModifyTableMemosResponse> ModifyTableMemosOutcome;
                typedef std::future<ModifyTableMemosOutcome> ModifyTableMemosOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyTableMemosRequest&, ModifyTableMemosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableMemosAsyncHandler;
                typedef Outcome<Error, Model::ModifyTableQuotasResponse> ModifyTableQuotasOutcome;
                typedef std::future<ModifyTableQuotasOutcome> ModifyTableQuotasOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyTableQuotasRequest&, ModifyTableQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableQuotasAsyncHandler;
                typedef Outcome<Error, Model::ModifyTablesResponse> ModifyTablesOutcome;
                typedef std::future<ModifyTablesOutcome> ModifyTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyTablesRequest&, ModifyTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTablesAsyncHandler;
                typedef Outcome<Error, Model::ModifyZoneNameResponse> ModifyZoneNameOutcome;
                typedef std::future<ModifyZoneNameOutcome> ModifyZoneNameOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::ModifyZoneNameRequest&, ModifyZoneNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneNameAsyncHandler;
                typedef Outcome<Error, Model::RecoverRecycleTablesResponse> RecoverRecycleTablesOutcome;
                typedef std::future<RecoverRecycleTablesOutcome> RecoverRecycleTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::RecoverRecycleTablesRequest&, RecoverRecycleTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverRecycleTablesAsyncHandler;
                typedef Outcome<Error, Model::RollbackTablesResponse> RollbackTablesOutcome;
                typedef std::future<RollbackTablesOutcome> RollbackTablesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::RollbackTablesRequest&, RollbackTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollbackTablesAsyncHandler;
                typedef Outcome<Error, Model::VerifyIdlFilesResponse> VerifyIdlFilesOutcome;
                typedef std::future<VerifyIdlFilesOutcome> VerifyIdlFilesOutcomeCallable;
                typedef std::function<void(const TcaplusdbClient*, const Model::VerifyIdlFilesRequest&, VerifyIdlFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyIdlFilesAsyncHandler;



                /**
                 *根据给定的表信息，清除表数据。
                 * @param req ClearTablesRequest
                 * @return ClearTablesOutcome
                 */
                ClearTablesOutcome ClearTables(const Model::ClearTablesRequest &request);
                void ClearTablesAsync(const Model::ClearTablesRequest& request, const ClearTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearTablesOutcomeCallable ClearTablesCallable(const Model::ClearTablesRequest& request);

                /**
                 *选中目标表，上传并校验改表文件，返回是否允许修改表结构
                 * @param req CompareIdlFilesRequest
                 * @return CompareIdlFilesOutcome
                 */
                CompareIdlFilesOutcome CompareIdlFiles(const Model::CompareIdlFilesRequest &request);
                void CompareIdlFilesAsync(const Model::CompareIdlFilesRequest& request, const CompareIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompareIdlFilesOutcomeCallable CompareIdlFilesCallable(const Model::CompareIdlFilesRequest& request);

                /**
                 *本接口用于创建TcaplusDB应用
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *根据选择的IDL文件列表，批量创建表
                 * @param req CreateTablesRequest
                 * @return CreateTablesOutcome
                 */
                CreateTablesOutcome CreateTables(const Model::CreateTablesRequest &request);
                void CreateTablesAsync(const Model::CreateTablesRequest& request, const CreateTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTablesOutcomeCallable CreateTablesCallable(const Model::CreateTablesRequest& request);

                /**
                 *在TcaplusDB应用下创建大区
                 * @param req CreateZoneRequest
                 * @return CreateZoneOutcome
                 */
                CreateZoneOutcome CreateZone(const Model::CreateZoneRequest &request);
                void CreateZoneAsync(const Model::CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateZoneOutcomeCallable CreateZoneCallable(const Model::CreateZoneRequest& request);

                /**
                 *删除TcaplusDB应用实例，必须在应用实例所属所有资源（包括大区，表）都已经释放的情况下才会成功。
                 * @param req DeleteAppRequest
                 * @return DeleteAppOutcome
                 */
                DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest &request);
                void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request);

                /**
                 *指定应用ID和待删除IDL文件的信息，删除目标文件，如果文件正在被表关联则删除失败。
                 * @param req DeleteIdlFilesRequest
                 * @return DeleteIdlFilesOutcome
                 */
                DeleteIdlFilesOutcome DeleteIdlFiles(const Model::DeleteIdlFilesRequest &request);
                void DeleteIdlFilesAsync(const Model::DeleteIdlFilesRequest& request, const DeleteIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIdlFilesOutcomeCallable DeleteIdlFilesCallable(const Model::DeleteIdlFilesRequest& request);

                /**
                 *根据指定的表信息删除目标表
                 * @param req DeleteTablesRequest
                 * @return DeleteTablesOutcome
                 */
                DeleteTablesOutcome DeleteTables(const Model::DeleteTablesRequest &request);
                void DeleteTablesAsync(const Model::DeleteTablesRequest& request, const DeleteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTablesOutcomeCallable DeleteTablesCallable(const Model::DeleteTablesRequest& request);

                /**
                 *删除大区
                 * @param req DeleteZoneRequest
                 * @return DeleteZoneOutcome
                 */
                DeleteZoneOutcome DeleteZone(const Model::DeleteZoneRequest &request);
                void DeleteZoneAsync(const Model::DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteZoneOutcomeCallable DeleteZoneCallable(const Model::DeleteZoneRequest& request);

                /**
                 *查询TcaplusDB应用列表，包含应用详细信息。
                 * @param req DescribeAppsRequest
                 * @return DescribeAppsOutcome
                 */
                DescribeAppsOutcome DescribeApps(const Model::DescribeAppsRequest &request);
                void DescribeAppsAsync(const Model::DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppsOutcomeCallable DescribeAppsCallable(const Model::DescribeAppsRequest& request);

                /**
                 *查询表描述文件详情
                 * @param req DescribeIdlFileInfosRequest
                 * @return DescribeIdlFileInfosOutcome
                 */
                DescribeIdlFileInfosOutcome DescribeIdlFileInfos(const Model::DescribeIdlFileInfosRequest &request);
                void DescribeIdlFileInfosAsync(const Model::DescribeIdlFileInfosRequest& request, const DescribeIdlFileInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdlFileInfosOutcomeCallable DescribeIdlFileInfosCallable(const Model::DescribeIdlFileInfosRequest& request);

                /**
                 *查询TcaplusDB服务支持的地域列表
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *查询表详情
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *查询回收站中的表详情
                 * @param req DescribeTablesInRecycleRequest
                 * @return DescribeTablesInRecycleOutcome
                 */
                DescribeTablesInRecycleOutcome DescribeTablesInRecycle(const Model::DescribeTablesInRecycleRequest &request);
                void DescribeTablesInRecycleAsync(const Model::DescribeTablesInRecycleRequest& request, const DescribeTablesInRecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesInRecycleOutcomeCallable DescribeTablesInRecycleCallable(const Model::DescribeTablesInRecycleRequest& request);

                /**
                 *查询任务列表
                 * @param req DescribeTasksRequest
                 * @return DescribeTasksOutcome
                 */
                DescribeTasksOutcome DescribeTasks(const Model::DescribeTasksRequest &request);
                void DescribeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTasksOutcomeCallable DescribeTasksCallable(const Model::DescribeTasksRequest& request);

                /**
                 *查询本用户是否在白名单中，控制是否能创建TDR类型的APP或表
                 * @param req DescribeUinInWhitelistRequest
                 * @return DescribeUinInWhitelistOutcome
                 */
                DescribeUinInWhitelistOutcome DescribeUinInWhitelist(const Model::DescribeUinInWhitelistRequest &request);
                void DescribeUinInWhitelistAsync(const Model::DescribeUinInWhitelistRequest& request, const DescribeUinInWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUinInWhitelistOutcomeCallable DescribeUinInWhitelistCallable(const Model::DescribeUinInWhitelistRequest& request);

                /**
                 *查询大区列表
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *修改指定的应用名称
                 * @param req ModifyAppNameRequest
                 * @return ModifyAppNameOutcome
                 */
                ModifyAppNameOutcome ModifyAppName(const Model::ModifyAppNameRequest &request);
                void ModifyAppNameAsync(const Model::ModifyAppNameRequest& request, const ModifyAppNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppNameOutcomeCallable ModifyAppNameCallable(const Model::ModifyAppNameRequest& request);

                /**
                 *修改指定AppInstanceId的实例密码，后台将在旧密码失效之前同时支持TcaplusDB SDK使用旧密码和新密码访问数据库。在旧密码失效之前不能提交新的密码修改请求，在旧密码失效之后不能提交修改旧密码过期时间的请求。
                 * @param req ModifyAppPasswordRequest
                 * @return ModifyAppPasswordOutcome
                 */
                ModifyAppPasswordOutcome ModifyAppPassword(const Model::ModifyAppPasswordRequest &request);
                void ModifyAppPasswordAsync(const Model::ModifyAppPasswordRequest& request, const ModifyAppPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppPasswordOutcomeCallable ModifyAppPasswordCallable(const Model::ModifyAppPasswordRequest& request);

                /**
                 *修改表备注信息
                 * @param req ModifyTableMemosRequest
                 * @return ModifyTableMemosOutcome
                 */
                ModifyTableMemosOutcome ModifyTableMemos(const Model::ModifyTableMemosRequest &request);
                void ModifyTableMemosAsync(const Model::ModifyTableMemosRequest& request, const ModifyTableMemosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableMemosOutcomeCallable ModifyTableMemosCallable(const Model::ModifyTableMemosRequest& request);

                /**
                 *表扩缩容
                 * @param req ModifyTableQuotasRequest
                 * @return ModifyTableQuotasOutcome
                 */
                ModifyTableQuotasOutcome ModifyTableQuotas(const Model::ModifyTableQuotasRequest &request);
                void ModifyTableQuotasAsync(const Model::ModifyTableQuotasRequest& request, const ModifyTableQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableQuotasOutcomeCallable ModifyTableQuotasCallable(const Model::ModifyTableQuotasRequest& request);

                /**
                 *根据用户选定的表定义IDL文件，批量修改指定的表
                 * @param req ModifyTablesRequest
                 * @return ModifyTablesOutcome
                 */
                ModifyTablesOutcome ModifyTables(const Model::ModifyTablesRequest &request);
                void ModifyTablesAsync(const Model::ModifyTablesRequest& request, const ModifyTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTablesOutcomeCallable ModifyTablesCallable(const Model::ModifyTablesRequest& request);

                /**
                 *修改TcaplusDB大区名称
                 * @param req ModifyZoneNameRequest
                 * @return ModifyZoneNameOutcome
                 */
                ModifyZoneNameOutcome ModifyZoneName(const Model::ModifyZoneNameRequest &request);
                void ModifyZoneNameAsync(const Model::ModifyZoneNameRequest& request, const ModifyZoneNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneNameOutcomeCallable ModifyZoneNameCallable(const Model::ModifyZoneNameRequest& request);

                /**
                 *恢复回收站中，用户自行删除的表。对欠费待释放的表无效。
                 * @param req RecoverRecycleTablesRequest
                 * @return RecoverRecycleTablesOutcome
                 */
                RecoverRecycleTablesOutcome RecoverRecycleTables(const Model::RecoverRecycleTablesRequest &request);
                void RecoverRecycleTablesAsync(const Model::RecoverRecycleTablesRequest& request, const RecoverRecycleTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverRecycleTablesOutcomeCallable RecoverRecycleTablesCallable(const Model::RecoverRecycleTablesRequest& request);

                /**
                 *表数据回档
                 * @param req RollbackTablesRequest
                 * @return RollbackTablesOutcome
                 */
                RollbackTablesOutcome RollbackTables(const Model::RollbackTablesRequest &request);
                void RollbackTablesAsync(const Model::RollbackTablesRequest& request, const RollbackTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollbackTablesOutcomeCallable RollbackTablesCallable(const Model::RollbackTablesRequest& request);

                /**
                 *上传并校验加表文件，返回校验合法的表定义
                 * @param req VerifyIdlFilesRequest
                 * @return VerifyIdlFilesOutcome
                 */
                VerifyIdlFilesOutcome VerifyIdlFiles(const Model::VerifyIdlFilesRequest &request);
                void VerifyIdlFilesAsync(const Model::VerifyIdlFilesRequest& request, const VerifyIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyIdlFilesOutcomeCallable VerifyIdlFilesCallable(const Model::VerifyIdlFilesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_TCAPLUSDBCLIENT_H_
