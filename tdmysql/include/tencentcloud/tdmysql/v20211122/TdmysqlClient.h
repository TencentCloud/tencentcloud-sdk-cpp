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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_TDMYSQLCLIENT_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_TDMYSQLCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tdmysql/v20211122/model/CancelIsolateDBInstancesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/CancelIsolateDBInstancesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateDBSBackupRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/CreateDBSBackupResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DeleteDBSBackupSetsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DeleteDBSBackupSetsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeBillingEnableRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeBillingEnableResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBParametersRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBParametersResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSAvailableRecoveryTimeRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSAvailableRecoveryTimeResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSCloneInstancesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSCloneInstancesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDatabaseObjectsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDatabaseObjectsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDatabaseTableRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeDatabaseTableResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeFlowRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeFlowResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/DestroyInstancesRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/DestroyInstancesResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/IsolateDBInstanceRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/IsolateDBInstanceResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyAutoRenewFlagRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyAutoRenewFlagResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyBinlogStatusRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyBinlogStatusResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBParametersRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBParametersResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupPolicyRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupPolicyResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupSetCommentRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyDBSBackupSetCommentResponse.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyInstanceNameRequest.h>
#include <tencentcloud/tdmysql/v20211122/model/ModifyInstanceNameResponse.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            class TdmysqlClient : public AbstractClient
            {
            public:
                TdmysqlClient(const Credential &credential, const std::string &region);
                TdmysqlClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelIsolateDBInstancesResponse> CancelIsolateDBInstancesOutcome;
                typedef std::future<CancelIsolateDBInstancesOutcome> CancelIsolateDBInstancesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::CancelIsolateDBInstancesRequest&, CancelIsolateDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelIsolateDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDBSBackupResponse> CreateDBSBackupOutcome;
                typedef std::future<CreateDBSBackupOutcome> CreateDBSBackupOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::CreateDBSBackupRequest&, CreateDBSBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDBSBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDBSBackupSetsResponse> DeleteDBSBackupSetsOutcome;
                typedef std::future<DeleteDBSBackupSetsOutcome> DeleteDBSBackupSetsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DeleteDBSBackupSetsRequest&, DeleteDBSBackupSetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDBSBackupSetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingEnableResponse> DescribeBillingEnableOutcome;
                typedef std::future<DescribeBillingEnableOutcome> DescribeBillingEnableOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeBillingEnableRequest&, DescribeBillingEnableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingEnableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBParametersResponse> DescribeDBParametersOutcome;
                typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBParametersRequest&, DescribeDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSAvailableRecoveryTimeResponse> DescribeDBSAvailableRecoveryTimeOutcome;
                typedef std::future<DescribeDBSAvailableRecoveryTimeOutcome> DescribeDBSAvailableRecoveryTimeOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSAvailableRecoveryTimeRequest&, DescribeDBSAvailableRecoveryTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSAvailableRecoveryTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSCloneInstancesResponse> DescribeDBSCloneInstancesOutcome;
                typedef std::future<DescribeDBSCloneInstancesOutcome> DescribeDBSCloneInstancesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSCloneInstancesRequest&, DescribeDBSCloneInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSCloneInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseObjectsResponse> DescribeDatabaseObjectsOutcome;
                typedef std::future<DescribeDatabaseObjectsOutcome> DescribeDatabaseObjectsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDatabaseObjectsRequest&, DescribeDatabaseObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseTableResponse> DescribeDatabaseTableOutcome;
                typedef std::future<DescribeDatabaseTableOutcome> DescribeDatabaseTableOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeDatabaseTableRequest&, DescribeDatabaseTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyInstancesResponse> DestroyInstancesOutcome;
                typedef std::future<DestroyInstancesOutcome> DestroyInstancesOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::DestroyInstancesRequest&, DestroyInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDBInstanceResponse> IsolateDBInstanceOutcome;
                typedef std::future<IsolateDBInstanceOutcome> IsolateDBInstanceOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::IsolateDBInstanceRequest&, IsolateDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoRenewFlagResponse> ModifyAutoRenewFlagOutcome;
                typedef std::future<ModifyAutoRenewFlagOutcome> ModifyAutoRenewFlagOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyAutoRenewFlagRequest&, ModifyAutoRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBinlogStatusResponse> ModifyBinlogStatusOutcome;
                typedef std::future<ModifyBinlogStatusOutcome> ModifyBinlogStatusOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyBinlogStatusRequest&, ModifyBinlogStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBinlogStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBParametersResponse> ModifyDBParametersOutcome;
                typedef std::future<ModifyDBParametersOutcome> ModifyDBParametersOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyDBParametersRequest&, ModifyDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBSBackupPolicyResponse> ModifyDBSBackupPolicyOutcome;
                typedef std::future<ModifyDBSBackupPolicyOutcome> ModifyDBSBackupPolicyOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyDBSBackupPolicyRequest&, ModifyDBSBackupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBSBackupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBSBackupSetCommentResponse> ModifyDBSBackupSetCommentOutcome;
                typedef std::future<ModifyDBSBackupSetCommentOutcome> ModifyDBSBackupSetCommentOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyDBSBackupSetCommentRequest&, ModifyDBSBackupSetCommentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBSBackupSetCommentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNameResponse> ModifyInstanceNameOutcome;
                typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
                typedef std::function<void(const TdmysqlClient*, const Model::ModifyInstanceNameRequest&, ModifyInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;



                /**
                 *本接口（CancelIsolateDBInstances）提供批量解除隔离实例功能
                 * @param req CancelIsolateDBInstancesRequest
                 * @return CancelIsolateDBInstancesOutcome
                 */
                CancelIsolateDBInstancesOutcome CancelIsolateDBInstances(const Model::CancelIsolateDBInstancesRequest &request);
                void CancelIsolateDBInstancesAsync(const Model::CancelIsolateDBInstancesRequest& request, const CancelIsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelIsolateDBInstancesOutcomeCallable CancelIsolateDBInstancesCallable(const Model::CancelIsolateDBInstancesRequest& request);

                /**
                 *创建实例备份集
                 * @param req CreateDBSBackupRequest
                 * @return CreateDBSBackupOutcome
                 */
                CreateDBSBackupOutcome CreateDBSBackup(const Model::CreateDBSBackupRequest &request);
                void CreateDBSBackupAsync(const Model::CreateDBSBackupRequest& request, const CreateDBSBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDBSBackupOutcomeCallable CreateDBSBackupCallable(const Model::CreateDBSBackupRequest& request);

                /**
                 *删除实例备份集
                 * @param req DeleteDBSBackupSetsRequest
                 * @return DeleteDBSBackupSetsOutcome
                 */
                DeleteDBSBackupSetsOutcome DeleteDBSBackupSets(const Model::DeleteDBSBackupSetsRequest &request);
                void DeleteDBSBackupSetsAsync(const Model::DeleteDBSBackupSetsRequest& request, const DeleteDBSBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDBSBackupSetsOutcomeCallable DeleteDBSBackupSetsCallable(const Model::DeleteDBSBackupSetsRequest& request);

                /**
                 *已无地方调用

本接口（DescribeBillingEnable）用于查询计费是否开启
                 * @param req DescribeBillingEnableRequest
                 * @return DescribeBillingEnableOutcome
                 */
                DescribeBillingEnableOutcome DescribeBillingEnable(const Model::DescribeBillingEnableRequest &request);
                void DescribeBillingEnableAsync(const Model::DescribeBillingEnableRequest& request, const DescribeBillingEnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingEnableOutcomeCallable DescribeBillingEnableCallable(const Model::DescribeBillingEnableRequest& request);

                /**
                 *本接口（DescribeDBParameters）用于获取实例的当前参数设置。
                 * @param req DescribeDBParametersRequest
                 * @return DescribeDBParametersOutcome
                 */
                DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest &request);
                void DescribeDBParametersAsync(const Model::DescribeDBParametersRequest& request, const DescribeDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const Model::DescribeDBParametersRequest& request);

                /**
                 *可恢复时间查询
                 * @param req DescribeDBSAvailableRecoveryTimeRequest
                 * @return DescribeDBSAvailableRecoveryTimeOutcome
                 */
                DescribeDBSAvailableRecoveryTimeOutcome DescribeDBSAvailableRecoveryTime(const Model::DescribeDBSAvailableRecoveryTimeRequest &request);
                void DescribeDBSAvailableRecoveryTimeAsync(const Model::DescribeDBSAvailableRecoveryTimeRequest& request, const DescribeDBSAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSAvailableRecoveryTimeOutcomeCallable DescribeDBSAvailableRecoveryTimeCallable(const Model::DescribeDBSAvailableRecoveryTimeRequest& request);

                /**
                 *查询实例克隆列表
                 * @param req DescribeDBSCloneInstancesRequest
                 * @return DescribeDBSCloneInstancesOutcome
                 */
                DescribeDBSCloneInstancesOutcome DescribeDBSCloneInstances(const Model::DescribeDBSCloneInstancesRequest &request);
                void DescribeDBSCloneInstancesAsync(const Model::DescribeDBSCloneInstancesRequest& request, const DescribeDBSCloneInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSCloneInstancesOutcomeCallable DescribeDBSCloneInstancesCallable(const Model::DescribeDBSCloneInstancesRequest& request);

                /**
                 *本接口（DescribeDBSecurityGroups）用于查询实例安全组信息
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *本接口（DescribeDatabaseObjects）用于查询云数据库实例的数据库中的对象列表，包含表、存储过程、视图和函数。
                 * @param req DescribeDatabaseObjectsRequest
                 * @return DescribeDatabaseObjectsOutcome
                 */
                DescribeDatabaseObjectsOutcome DescribeDatabaseObjects(const Model::DescribeDatabaseObjectsRequest &request);
                void DescribeDatabaseObjectsAsync(const Model::DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseObjectsOutcomeCallable DescribeDatabaseObjectsCallable(const Model::DescribeDatabaseObjectsRequest& request);

                /**
                 *冗余接口，无人调用

本接口（DescribeDatabaseTable）用于查询云数据库实例的表信息。
                 * @param req DescribeDatabaseTableRequest
                 * @return DescribeDatabaseTableOutcome
                 */
                DescribeDatabaseTableOutcome DescribeDatabaseTable(const Model::DescribeDatabaseTableRequest &request);
                void DescribeDatabaseTableAsync(const Model::DescribeDatabaseTableRequest& request, const DescribeDatabaseTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseTableOutcomeCallable DescribeDatabaseTableCallable(const Model::DescribeDatabaseTableRequest& request);

                /**
                 *本接口（DescribeFlow）用于查询异步任务流程状态
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *本接口（DestroyInstances）提供批量销毁实例功能
                 * @param req DestroyInstancesRequest
                 * @return DestroyInstancesOutcome
                 */
                DestroyInstancesOutcome DestroyInstances(const Model::DestroyInstancesRequest &request);
                void DestroyInstancesAsync(const Model::DestroyInstancesRequest& request, const DestroyInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyInstancesOutcomeCallable DestroyInstancesCallable(const Model::DestroyInstancesRequest& request);

                /**
                 *本接口（IsolateDBInstance）提供批量隔离实例功能
                 * @param req IsolateDBInstanceRequest
                 * @return IsolateDBInstanceOutcome
                 */
                IsolateDBInstanceOutcome IsolateDBInstance(const Model::IsolateDBInstanceRequest &request);
                void IsolateDBInstanceAsync(const Model::IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDBInstanceOutcomeCallable IsolateDBInstanceCallable(const Model::IsolateDBInstanceRequest& request);

                /**
                 *本接口（ModifyAutoRenewFlag）用于修改自动续费标志
                 * @param req ModifyAutoRenewFlagRequest
                 * @return ModifyAutoRenewFlagOutcome
                 */
                ModifyAutoRenewFlagOutcome ModifyAutoRenewFlag(const Model::ModifyAutoRenewFlagRequest &request);
                void ModifyAutoRenewFlagAsync(const Model::ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoRenewFlagOutcomeCallable ModifyAutoRenewFlagCallable(const Model::ModifyAutoRenewFlagRequest& request);

                /**
                 *接口功能已被 ModifyInstanceCdc 完全覆盖

修改binlog状态
                 * @param req ModifyBinlogStatusRequest
                 * @return ModifyBinlogStatusOutcome
                 */
                ModifyBinlogStatusOutcome ModifyBinlogStatus(const Model::ModifyBinlogStatusRequest &request);
                void ModifyBinlogStatusAsync(const Model::ModifyBinlogStatusRequest& request, const ModifyBinlogStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBinlogStatusOutcomeCallable ModifyBinlogStatusCallable(const Model::ModifyBinlogStatusRequest& request);

                /**
                 *本接口（ModifyDBInstanceSecurityGroups）用于修改云数据库安全组
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *本接口（ModifyDBParameters）用于修改实例参数。
                 * @param req ModifyDBParametersRequest
                 * @return ModifyDBParametersOutcome
                 */
                ModifyDBParametersOutcome ModifyDBParameters(const Model::ModifyDBParametersRequest &request);
                void ModifyDBParametersAsync(const Model::ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBParametersOutcomeCallable ModifyDBParametersCallable(const Model::ModifyDBParametersRequest& request);

                /**
                 *修改实例备份策略
                 * @param req ModifyDBSBackupPolicyRequest
                 * @return ModifyDBSBackupPolicyOutcome
                 */
                ModifyDBSBackupPolicyOutcome ModifyDBSBackupPolicy(const Model::ModifyDBSBackupPolicyRequest &request);
                void ModifyDBSBackupPolicyAsync(const Model::ModifyDBSBackupPolicyRequest& request, const ModifyDBSBackupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBSBackupPolicyOutcomeCallable ModifyDBSBackupPolicyCallable(const Model::ModifyDBSBackupPolicyRequest& request);

                /**
                 *修改备份集备注
                 * @param req ModifyDBSBackupSetCommentRequest
                 * @return ModifyDBSBackupSetCommentOutcome
                 */
                ModifyDBSBackupSetCommentOutcome ModifyDBSBackupSetComment(const Model::ModifyDBSBackupSetCommentRequest &request);
                void ModifyDBSBackupSetCommentAsync(const Model::ModifyDBSBackupSetCommentRequest& request, const ModifyDBSBackupSetCommentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBSBackupSetCommentOutcomeCallable ModifyDBSBackupSetCommentCallable(const Model::ModifyDBSBackupSetCommentRequest& request);

                /**
                 *本接口（ModifyInstanceName）提供修改实例名称功能
                 * @param req ModifyInstanceNameRequest
                 * @return ModifyInstanceNameOutcome
                 */
                ModifyInstanceNameOutcome ModifyInstanceName(const Model::ModifyInstanceNameRequest &request);
                void ModifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNameOutcomeCallable ModifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_TDMYSQLCLIENT_H_
