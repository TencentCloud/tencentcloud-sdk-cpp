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

#ifndef TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_
#define TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcb/v20180608/model/CheckTcbServiceRequest.h>
#include <tencentcloud/tcb/v20180608/model/CheckTcbServiceResponse.h>
#include <tencentcloud/tcb/v20180608/model/CommonServiceAPIRequest.h>
#include <tencentcloud/tcb/v20180608/model/CommonServiceAPIResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateAuthDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateAuthDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateHostingDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateHostingDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateStaticStoreRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateStaticStoreResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteEndUserRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteEndUserResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeAuthDomainsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeAuthDomainsResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDatabaseACLRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDatabaseACLResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUserLoginStatisticRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUserLoginStatisticResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUserStatisticRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUserStatisticResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUsersRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUsersResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvFreeQuotaRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvFreeQuotaResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvLimitRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvLimitResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvsResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeExtraPkgBillingInfoRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeExtraPkgBillingInfoResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeQuotaDataRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeQuotaDataResponse.h>
#include <tencentcloud/tcb/v20180608/model/DestroyEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/DestroyEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/DestroyStaticStoreRequest.h>
#include <tencentcloud/tcb/v20180608/model/DestroyStaticStoreResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyDatabaseACLRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyDatabaseACLResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/ReinstateEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/ReinstateEnvResponse.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            class TcbClient : public AbstractClient
            {
            public:
                TcbClient(const Credential &credential, const std::string &region);
                TcbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::CheckTcbServiceResponse> CheckTcbServiceOutcome;
                typedef std::future<CheckTcbServiceOutcome> CheckTcbServiceOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CheckTcbServiceRequest&, CheckTcbServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckTcbServiceAsyncHandler;
                typedef Outcome<Error, Model::CommonServiceAPIResponse> CommonServiceAPIOutcome;
                typedef std::future<CommonServiceAPIOutcome> CommonServiceAPIOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CommonServiceAPIRequest&, CommonServiceAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommonServiceAPIAsyncHandler;
                typedef Outcome<Error, Model::CreateAuthDomainResponse> CreateAuthDomainOutcome;
                typedef std::future<CreateAuthDomainOutcome> CreateAuthDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateAuthDomainRequest&, CreateAuthDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthDomainAsyncHandler;
                typedef Outcome<Error, Model::CreateHostingDomainResponse> CreateHostingDomainOutcome;
                typedef std::future<CreateHostingDomainOutcome> CreateHostingDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateHostingDomainRequest&, CreateHostingDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostingDomainAsyncHandler;
                typedef Outcome<Error, Model::CreateStaticStoreResponse> CreateStaticStoreOutcome;
                typedef std::future<CreateStaticStoreOutcome> CreateStaticStoreOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateStaticStoreRequest&, CreateStaticStoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStaticStoreAsyncHandler;
                typedef Outcome<Error, Model::DeleteEndUserResponse> DeleteEndUserOutcome;
                typedef std::future<DeleteEndUserOutcome> DeleteEndUserOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteEndUserRequest&, DeleteEndUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEndUserAsyncHandler;
                typedef Outcome<Error, Model::DescribeAuthDomainsResponse> DescribeAuthDomainsOutcome;
                typedef std::future<DescribeAuthDomainsOutcome> DescribeAuthDomainsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeAuthDomainsRequest&, DescribeAuthDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthDomainsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDatabaseACLResponse> DescribeDatabaseACLOutcome;
                typedef std::future<DescribeDatabaseACLOutcome> DescribeDatabaseACLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeDatabaseACLRequest&, DescribeDatabaseACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseACLAsyncHandler;
                typedef Outcome<Error, Model::DescribeEndUserLoginStatisticResponse> DescribeEndUserLoginStatisticOutcome;
                typedef std::future<DescribeEndUserLoginStatisticOutcome> DescribeEndUserLoginStatisticOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEndUserLoginStatisticRequest&, DescribeEndUserLoginStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndUserLoginStatisticAsyncHandler;
                typedef Outcome<Error, Model::DescribeEndUserStatisticResponse> DescribeEndUserStatisticOutcome;
                typedef std::future<DescribeEndUserStatisticOutcome> DescribeEndUserStatisticOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEndUserStatisticRequest&, DescribeEndUserStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndUserStatisticAsyncHandler;
                typedef Outcome<Error, Model::DescribeEndUsersResponse> DescribeEndUsersOutcome;
                typedef std::future<DescribeEndUsersOutcome> DescribeEndUsersOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEndUsersRequest&, DescribeEndUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndUsersAsyncHandler;
                typedef Outcome<Error, Model::DescribeEnvFreeQuotaResponse> DescribeEnvFreeQuotaOutcome;
                typedef std::future<DescribeEnvFreeQuotaOutcome> DescribeEnvFreeQuotaOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvFreeQuotaRequest&, DescribeEnvFreeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvFreeQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeEnvLimitResponse> DescribeEnvLimitOutcome;
                typedef std::future<DescribeEnvLimitOutcome> DescribeEnvLimitOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvLimitRequest&, DescribeEnvLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvLimitAsyncHandler;
                typedef Outcome<Error, Model::DescribeEnvsResponse> DescribeEnvsOutcome;
                typedef std::future<DescribeEnvsOutcome> DescribeEnvsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvsRequest&, DescribeEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvsAsyncHandler;
                typedef Outcome<Error, Model::DescribeExtraPkgBillingInfoResponse> DescribeExtraPkgBillingInfoOutcome;
                typedef std::future<DescribeExtraPkgBillingInfoOutcome> DescribeExtraPkgBillingInfoOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeExtraPkgBillingInfoRequest&, DescribeExtraPkgBillingInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtraPkgBillingInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeQuotaDataResponse> DescribeQuotaDataOutcome;
                typedef std::future<DescribeQuotaDataOutcome> DescribeQuotaDataOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeQuotaDataRequest&, DescribeQuotaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaDataAsyncHandler;
                typedef Outcome<Error, Model::DestroyEnvResponse> DestroyEnvOutcome;
                typedef std::future<DestroyEnvOutcome> DestroyEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DestroyEnvRequest&, DestroyEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyEnvAsyncHandler;
                typedef Outcome<Error, Model::DestroyStaticStoreResponse> DestroyStaticStoreOutcome;
                typedef std::future<DestroyStaticStoreOutcome> DestroyStaticStoreOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DestroyStaticStoreRequest&, DestroyStaticStoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyStaticStoreAsyncHandler;
                typedef Outcome<Error, Model::ModifyDatabaseACLResponse> ModifyDatabaseACLOutcome;
                typedef std::future<ModifyDatabaseACLOutcome> ModifyDatabaseACLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyDatabaseACLRequest&, ModifyDatabaseACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseACLAsyncHandler;
                typedef Outcome<Error, Model::ModifyEnvResponse> ModifyEnvOutcome;
                typedef std::future<ModifyEnvOutcome> ModifyEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyEnvRequest&, ModifyEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvAsyncHandler;
                typedef Outcome<Error, Model::ReinstateEnvResponse> ReinstateEnvOutcome;
                typedef std::future<ReinstateEnvOutcome> ReinstateEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ReinstateEnvRequest&, ReinstateEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReinstateEnvAsyncHandler;



                /**
                 *检查是否开通Tcb服务
                 * @param req CheckTcbServiceRequest
                 * @return CheckTcbServiceOutcome
                 */
                CheckTcbServiceOutcome CheckTcbService(const Model::CheckTcbServiceRequest &request);
                void CheckTcbServiceAsync(const Model::CheckTcbServiceRequest& request, const CheckTcbServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckTcbServiceOutcomeCallable CheckTcbServiceCallable(const Model::CheckTcbServiceRequest& request);

                /**
                 *TCB云API统一入口
                 * @param req CommonServiceAPIRequest
                 * @return CommonServiceAPIOutcome
                 */
                CommonServiceAPIOutcome CommonServiceAPI(const Model::CommonServiceAPIRequest &request);
                void CommonServiceAPIAsync(const Model::CommonServiceAPIRequest& request, const CommonServiceAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommonServiceAPIOutcomeCallable CommonServiceAPICallable(const Model::CommonServiceAPIRequest& request);

                /**
                 *增加安全域名
                 * @param req CreateAuthDomainRequest
                 * @return CreateAuthDomainOutcome
                 */
                CreateAuthDomainOutcome CreateAuthDomain(const Model::CreateAuthDomainRequest &request);
                void CreateAuthDomainAsync(const Model::CreateAuthDomainRequest& request, const CreateAuthDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuthDomainOutcomeCallable CreateAuthDomainCallable(const Model::CreateAuthDomainRequest& request);

                /**
                 *创建托管域名
                 * @param req CreateHostingDomainRequest
                 * @return CreateHostingDomainOutcome
                 */
                CreateHostingDomainOutcome CreateHostingDomain(const Model::CreateHostingDomainRequest &request);
                void CreateHostingDomainAsync(const Model::CreateHostingDomainRequest& request, const CreateHostingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostingDomainOutcomeCallable CreateHostingDomainCallable(const Model::CreateHostingDomainRequest& request);

                /**
                 *创建静态托管资源，包括COS和CDN，异步任务创建，查看创建结果需要根据DescribeStaticStore接口来查看
                 * @param req CreateStaticStoreRequest
                 * @return CreateStaticStoreOutcome
                 */
                CreateStaticStoreOutcome CreateStaticStore(const Model::CreateStaticStoreRequest &request);
                void CreateStaticStoreAsync(const Model::CreateStaticStoreRequest& request, const CreateStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStaticStoreOutcomeCallable CreateStaticStoreCallable(const Model::CreateStaticStoreRequest& request);

                /**
                 *删除终端用户
                 * @param req DeleteEndUserRequest
                 * @return DeleteEndUserOutcome
                 */
                DeleteEndUserOutcome DeleteEndUser(const Model::DeleteEndUserRequest &request);
                void DeleteEndUserAsync(const Model::DeleteEndUserRequest& request, const DeleteEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEndUserOutcomeCallable DeleteEndUserCallable(const Model::DeleteEndUserRequest& request);

                /**
                 *获取安全域名列表
                 * @param req DescribeAuthDomainsRequest
                 * @return DescribeAuthDomainsOutcome
                 */
                DescribeAuthDomainsOutcome DescribeAuthDomains(const Model::DescribeAuthDomainsRequest &request);
                void DescribeAuthDomainsAsync(const Model::DescribeAuthDomainsRequest& request, const DescribeAuthDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthDomainsOutcomeCallable DescribeAuthDomainsCallable(const Model::DescribeAuthDomainsRequest& request);

                /**
                 *获取数据库权限
                 * @param req DescribeDatabaseACLRequest
                 * @return DescribeDatabaseACLOutcome
                 */
                DescribeDatabaseACLOutcome DescribeDatabaseACL(const Model::DescribeDatabaseACLRequest &request);
                void DescribeDatabaseACLAsync(const Model::DescribeDatabaseACLRequest& request, const DescribeDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseACLOutcomeCallable DescribeDatabaseACLCallable(const Model::DescribeDatabaseACLRequest& request);

                /**
                 *获取环境终端用户新增与登录信息
                 * @param req DescribeEndUserLoginStatisticRequest
                 * @return DescribeEndUserLoginStatisticOutcome
                 */
                DescribeEndUserLoginStatisticOutcome DescribeEndUserLoginStatistic(const Model::DescribeEndUserLoginStatisticRequest &request);
                void DescribeEndUserLoginStatisticAsync(const Model::DescribeEndUserLoginStatisticRequest& request, const DescribeEndUserLoginStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEndUserLoginStatisticOutcomeCallable DescribeEndUserLoginStatisticCallable(const Model::DescribeEndUserLoginStatisticRequest& request);

                /**
                 *获取终端用户总量与平台分布情况
                 * @param req DescribeEndUserStatisticRequest
                 * @return DescribeEndUserStatisticOutcome
                 */
                DescribeEndUserStatisticOutcome DescribeEndUserStatistic(const Model::DescribeEndUserStatisticRequest &request);
                void DescribeEndUserStatisticAsync(const Model::DescribeEndUserStatisticRequest& request, const DescribeEndUserStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEndUserStatisticOutcomeCallable DescribeEndUserStatisticCallable(const Model::DescribeEndUserStatisticRequest& request);

                /**
                 *获取终端用户列表
                 * @param req DescribeEndUsersRequest
                 * @return DescribeEndUsersOutcome
                 */
                DescribeEndUsersOutcome DescribeEndUsers(const Model::DescribeEndUsersRequest &request);
                void DescribeEndUsersAsync(const Model::DescribeEndUsersRequest& request, const DescribeEndUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEndUsersOutcomeCallable DescribeEndUsersCallable(const Model::DescribeEndUsersRequest& request);

                /**
                 *查询后付费免费配额信息
                 * @param req DescribeEnvFreeQuotaRequest
                 * @return DescribeEnvFreeQuotaOutcome
                 */
                DescribeEnvFreeQuotaOutcome DescribeEnvFreeQuota(const Model::DescribeEnvFreeQuotaRequest &request);
                void DescribeEnvFreeQuotaAsync(const Model::DescribeEnvFreeQuotaRequest& request, const DescribeEnvFreeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvFreeQuotaOutcomeCallable DescribeEnvFreeQuotaCallable(const Model::DescribeEnvFreeQuotaRequest& request);

                /**
                 *查询环境个数上限
                 * @param req DescribeEnvLimitRequest
                 * @return DescribeEnvLimitOutcome
                 */
                DescribeEnvLimitOutcome DescribeEnvLimit(const Model::DescribeEnvLimitRequest &request);
                void DescribeEnvLimitAsync(const Model::DescribeEnvLimitRequest& request, const DescribeEnvLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvLimitOutcomeCallable DescribeEnvLimitCallable(const Model::DescribeEnvLimitRequest& request);

                /**
                 *获取环境列表，含环境下的各个资源信息。尤其是各资源的唯一标识，是请求各资源的关键参数
                 * @param req DescribeEnvsRequest
                 * @return DescribeEnvsOutcome
                 */
                DescribeEnvsOutcome DescribeEnvs(const Model::DescribeEnvsRequest &request);
                void DescribeEnvsAsync(const Model::DescribeEnvsRequest& request, const DescribeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvsOutcomeCallable DescribeEnvsCallable(const Model::DescribeEnvsRequest& request);

                /**
                 *获取增值包计费相关信息
                 * @param req DescribeExtraPkgBillingInfoRequest
                 * @return DescribeExtraPkgBillingInfoOutcome
                 */
                DescribeExtraPkgBillingInfoOutcome DescribeExtraPkgBillingInfo(const Model::DescribeExtraPkgBillingInfoRequest &request);
                void DescribeExtraPkgBillingInfoAsync(const Model::DescribeExtraPkgBillingInfoRequest& request, const DescribeExtraPkgBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtraPkgBillingInfoOutcomeCallable DescribeExtraPkgBillingInfoCallable(const Model::DescribeExtraPkgBillingInfoRequest& request);

                /**
                 *查询指定指标的配额使用量
                 * @param req DescribeQuotaDataRequest
                 * @return DescribeQuotaDataOutcome
                 */
                DescribeQuotaDataOutcome DescribeQuotaData(const Model::DescribeQuotaDataRequest &request);
                void DescribeQuotaDataAsync(const Model::DescribeQuotaDataRequest& request, const DescribeQuotaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotaDataOutcomeCallable DescribeQuotaDataCallable(const Model::DescribeQuotaDataRequest& request);

                /**
                 *销毁环境
                 * @param req DestroyEnvRequest
                 * @return DestroyEnvOutcome
                 */
                DestroyEnvOutcome DestroyEnv(const Model::DestroyEnvRequest &request);
                void DestroyEnvAsync(const Model::DestroyEnvRequest& request, const DestroyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyEnvOutcomeCallable DestroyEnvCallable(const Model::DestroyEnvRequest& request);

                /**
                 *销毁静态托管资源，该接口创建异步销毁任务，资源最终状态可从DestroyStaticStore接口查看
                 * @param req DestroyStaticStoreRequest
                 * @return DestroyStaticStoreOutcome
                 */
                DestroyStaticStoreOutcome DestroyStaticStore(const Model::DestroyStaticStoreRequest &request);
                void DestroyStaticStoreAsync(const Model::DestroyStaticStoreRequest& request, const DestroyStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyStaticStoreOutcomeCallable DestroyStaticStoreCallable(const Model::DestroyStaticStoreRequest& request);

                /**
                 *修改数据库权限
                 * @param req ModifyDatabaseACLRequest
                 * @return ModifyDatabaseACLOutcome
                 */
                ModifyDatabaseACLOutcome ModifyDatabaseACL(const Model::ModifyDatabaseACLRequest &request);
                void ModifyDatabaseACLAsync(const Model::ModifyDatabaseACLRequest& request, const ModifyDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseACLOutcomeCallable ModifyDatabaseACLCallable(const Model::ModifyDatabaseACLRequest& request);

                /**
                 *更新环境信息
                 * @param req ModifyEnvRequest
                 * @return ModifyEnvOutcome
                 */
                ModifyEnvOutcome ModifyEnv(const Model::ModifyEnvRequest &request);
                void ModifyEnvAsync(const Model::ModifyEnvRequest& request, const ModifyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnvOutcomeCallable ModifyEnvCallable(const Model::ModifyEnvRequest& request);

                /**
                 *针对已隔离的免费环境，可以通过本接口将其恢复访问。
                 * @param req ReinstateEnvRequest
                 * @return ReinstateEnvOutcome
                 */
                ReinstateEnvOutcome ReinstateEnv(const Model::ReinstateEnvRequest &request);
                void ReinstateEnvAsync(const Model::ReinstateEnvRequest& request, const ReinstateEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReinstateEnvOutcomeCallable ReinstateEnvCallable(const Model::ReinstateEnvRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_
