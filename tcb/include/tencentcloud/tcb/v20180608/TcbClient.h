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
#include <tencentcloud/tcb/v20180608/model/BindEnvGatewayRequest.h>
#include <tencentcloud/tcb/v20180608/model/BindEnvGatewayResponse.h>
#include <tencentcloud/tcb/v20180608/model/CheckTcbServiceRequest.h>
#include <tencentcloud/tcb/v20180608/model/CheckTcbServiceResponse.h>
#include <tencentcloud/tcb/v20180608/model/CommonServiceAPIRequest.h>
#include <tencentcloud/tcb/v20180608/model/CommonServiceAPIResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateAndDeployCloudBaseProjectRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateAndDeployCloudBaseProjectResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateAuthDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateAuthDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateCloudBaseRunResourceRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateCloudBaseRunResourceResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateCloudBaseRunServerVersionRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateCloudBaseRunServerVersionResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateHostingDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateHostingDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreatePostpayPackageRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreatePostpayPackageResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateStandaloneGatewayRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateStandaloneGatewayResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateStaticStoreRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateStaticStoreResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateWxCloudBaseRunEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateWxCloudBaseRunEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateWxCloudBaseRunServerDBClusterRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateWxCloudBaseRunServerDBClusterResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseProjectLatestVersionRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseProjectLatestVersionResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseRunServerVersionRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseRunServerVersionResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteEndUserRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteEndUserResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteWxGatewayRouteRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteWxGatewayRouteResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeActivityInfoRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeActivityInfoResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeActivityRecordRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeActivityRecordResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeAuthDomainsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeAuthDomainsResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseBuildServiceRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseBuildServiceResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseProjectLatestVersionListRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseProjectLatestVersionListResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseProjectVersionListRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseProjectVersionListResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunConfForGateWayRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunConfForGateWayResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunResourceRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunResourceResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunResourceForExtendRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunResourceForExtendResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunServerVersionRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunServerVersionResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunVersionRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunVersionResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunVersionSnapshotRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunVersionSnapshotResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCurveDataRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCurveDataResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDatabaseACLRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDatabaseACLResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDownloadFileRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDownloadFileResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUserLoginStatisticRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUserLoginStatisticResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUserStatisticRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUserStatisticResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUsersRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEndUsersResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvDealRegionRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvDealRegionResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvFreeQuotaRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvFreeQuotaResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvLimitRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvLimitResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvPostpaidDeductRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvPostpaidDeductResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvsResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeExtensionUploadInfoRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeExtensionUploadInfoResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeExtraPkgBillingInfoRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeExtraPkgBillingInfoResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeHostingDomainTaskRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeHostingDomainTaskResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribePostpayFreeQuotasRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribePostpayFreeQuotasResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribePostpayPackageFreeQuotasRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribePostpayPackageFreeQuotasResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeQuotaDataRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeQuotaDataResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeSmsQuotasRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeSmsQuotasResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeSpecialCostItemsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeSpecialCostItemsResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeStandaloneGatewayRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeStandaloneGatewayResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeStandaloneGatewayPackageRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeStandaloneGatewayPackageResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeUserActivityInfoRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeUserActivityInfoResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeWxCloudBaseRunEnvsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeWxCloudBaseRunEnvsResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeWxCloudBaseRunSubNetsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeWxCloudBaseRunSubNetsResponse.h>
#include <tencentcloud/tcb/v20180608/model/DestroyEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/DestroyEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/DestroyStandaloneGatewayRequest.h>
#include <tencentcloud/tcb/v20180608/model/DestroyStandaloneGatewayResponse.h>
#include <tencentcloud/tcb/v20180608/model/DestroyStaticStoreRequest.h>
#include <tencentcloud/tcb/v20180608/model/DestroyStaticStoreResponse.h>
#include <tencentcloud/tcb/v20180608/model/EstablishCloudBaseRunServerRequest.h>
#include <tencentcloud/tcb/v20180608/model/EstablishCloudBaseRunServerResponse.h>
#include <tencentcloud/tcb/v20180608/model/EstablishWxGatewayRouteRequest.h>
#include <tencentcloud/tcb/v20180608/model/EstablishWxGatewayRouteResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyCloudBaseRunServerFlowConfRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyCloudBaseRunServerFlowConfResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyDatabaseACLRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyDatabaseACLResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEndUserRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEndUserResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/ReinstateEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/ReinstateEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/ReplaceActivityRecordRequest.h>
#include <tencentcloud/tcb/v20180608/model/ReplaceActivityRecordResponse.h>
#include <tencentcloud/tcb/v20180608/model/RollUpdateCloudBaseRunServerVersionRequest.h>
#include <tencentcloud/tcb/v20180608/model/RollUpdateCloudBaseRunServerVersionResponse.h>
#include <tencentcloud/tcb/v20180608/model/TurnOffStandaloneGatewayRequest.h>
#include <tencentcloud/tcb/v20180608/model/TurnOffStandaloneGatewayResponse.h>
#include <tencentcloud/tcb/v20180608/model/TurnOnStandaloneGatewayRequest.h>
#include <tencentcloud/tcb/v20180608/model/TurnOnStandaloneGatewayResponse.h>


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

                typedef Outcome<Core::Error, Model::BindEnvGatewayResponse> BindEnvGatewayOutcome;
                typedef std::future<BindEnvGatewayOutcome> BindEnvGatewayOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::BindEnvGatewayRequest&, BindEnvGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindEnvGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckTcbServiceResponse> CheckTcbServiceOutcome;
                typedef std::future<CheckTcbServiceOutcome> CheckTcbServiceOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CheckTcbServiceRequest&, CheckTcbServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckTcbServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CommonServiceAPIResponse> CommonServiceAPIOutcome;
                typedef std::future<CommonServiceAPIOutcome> CommonServiceAPIOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CommonServiceAPIRequest&, CommonServiceAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommonServiceAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndDeployCloudBaseProjectResponse> CreateAndDeployCloudBaseProjectOutcome;
                typedef std::future<CreateAndDeployCloudBaseProjectOutcome> CreateAndDeployCloudBaseProjectOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateAndDeployCloudBaseProjectRequest&, CreateAndDeployCloudBaseProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndDeployCloudBaseProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuthDomainResponse> CreateAuthDomainOutcome;
                typedef std::future<CreateAuthDomainOutcome> CreateAuthDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateAuthDomainRequest&, CreateAuthDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudBaseRunResourceResponse> CreateCloudBaseRunResourceOutcome;
                typedef std::future<CreateCloudBaseRunResourceOutcome> CreateCloudBaseRunResourceOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateCloudBaseRunResourceRequest&, CreateCloudBaseRunResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudBaseRunResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudBaseRunServerVersionResponse> CreateCloudBaseRunServerVersionOutcome;
                typedef std::future<CreateCloudBaseRunServerVersionOutcome> CreateCloudBaseRunServerVersionOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateCloudBaseRunServerVersionRequest&, CreateCloudBaseRunServerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudBaseRunServerVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostingDomainResponse> CreateHostingDomainOutcome;
                typedef std::future<CreateHostingDomainOutcome> CreateHostingDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateHostingDomainRequest&, CreateHostingDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostingDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePostpayPackageResponse> CreatePostpayPackageOutcome;
                typedef std::future<CreatePostpayPackageOutcome> CreatePostpayPackageOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreatePostpayPackageRequest&, CreatePostpayPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePostpayPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStandaloneGatewayResponse> CreateStandaloneGatewayOutcome;
                typedef std::future<CreateStandaloneGatewayOutcome> CreateStandaloneGatewayOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateStandaloneGatewayRequest&, CreateStandaloneGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStandaloneGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStaticStoreResponse> CreateStaticStoreOutcome;
                typedef std::future<CreateStaticStoreOutcome> CreateStaticStoreOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateStaticStoreRequest&, CreateStaticStoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStaticStoreAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWxCloudBaseRunEnvResponse> CreateWxCloudBaseRunEnvOutcome;
                typedef std::future<CreateWxCloudBaseRunEnvOutcome> CreateWxCloudBaseRunEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateWxCloudBaseRunEnvRequest&, CreateWxCloudBaseRunEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWxCloudBaseRunEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWxCloudBaseRunServerDBClusterResponse> CreateWxCloudBaseRunServerDBClusterOutcome;
                typedef std::future<CreateWxCloudBaseRunServerDBClusterOutcome> CreateWxCloudBaseRunServerDBClusterOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateWxCloudBaseRunServerDBClusterRequest&, CreateWxCloudBaseRunServerDBClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWxCloudBaseRunServerDBClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudBaseProjectLatestVersionResponse> DeleteCloudBaseProjectLatestVersionOutcome;
                typedef std::future<DeleteCloudBaseProjectLatestVersionOutcome> DeleteCloudBaseProjectLatestVersionOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteCloudBaseProjectLatestVersionRequest&, DeleteCloudBaseProjectLatestVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudBaseProjectLatestVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudBaseRunServerVersionResponse> DeleteCloudBaseRunServerVersionOutcome;
                typedef std::future<DeleteCloudBaseRunServerVersionOutcome> DeleteCloudBaseRunServerVersionOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteCloudBaseRunServerVersionRequest&, DeleteCloudBaseRunServerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudBaseRunServerVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEndUserResponse> DeleteEndUserOutcome;
                typedef std::future<DeleteEndUserOutcome> DeleteEndUserOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteEndUserRequest&, DeleteEndUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEndUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWxGatewayRouteResponse> DeleteWxGatewayRouteOutcome;
                typedef std::future<DeleteWxGatewayRouteOutcome> DeleteWxGatewayRouteOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteWxGatewayRouteRequest&, DeleteWxGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWxGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActivityInfoResponse> DescribeActivityInfoOutcome;
                typedef std::future<DescribeActivityInfoOutcome> DescribeActivityInfoOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeActivityInfoRequest&, DescribeActivityInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActivityInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActivityRecordResponse> DescribeActivityRecordOutcome;
                typedef std::future<DescribeActivityRecordOutcome> DescribeActivityRecordOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeActivityRecordRequest&, DescribeActivityRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActivityRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthDomainsResponse> DescribeAuthDomainsOutcome;
                typedef std::future<DescribeAuthDomainsOutcome> DescribeAuthDomainsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeAuthDomainsRequest&, DescribeAuthDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseBuildServiceResponse> DescribeCloudBaseBuildServiceOutcome;
                typedef std::future<DescribeCloudBaseBuildServiceOutcome> DescribeCloudBaseBuildServiceOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseBuildServiceRequest&, DescribeCloudBaseBuildServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseBuildServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseProjectLatestVersionListResponse> DescribeCloudBaseProjectLatestVersionListOutcome;
                typedef std::future<DescribeCloudBaseProjectLatestVersionListOutcome> DescribeCloudBaseProjectLatestVersionListOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseProjectLatestVersionListRequest&, DescribeCloudBaseProjectLatestVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseProjectLatestVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseProjectVersionListResponse> DescribeCloudBaseProjectVersionListOutcome;
                typedef std::future<DescribeCloudBaseProjectVersionListOutcome> DescribeCloudBaseProjectVersionListOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseProjectVersionListRequest&, DescribeCloudBaseProjectVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseProjectVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseRunConfForGateWayResponse> DescribeCloudBaseRunConfForGateWayOutcome;
                typedef std::future<DescribeCloudBaseRunConfForGateWayOutcome> DescribeCloudBaseRunConfForGateWayOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseRunConfForGateWayRequest&, DescribeCloudBaseRunConfForGateWayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseRunConfForGateWayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseRunResourceResponse> DescribeCloudBaseRunResourceOutcome;
                typedef std::future<DescribeCloudBaseRunResourceOutcome> DescribeCloudBaseRunResourceOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseRunResourceRequest&, DescribeCloudBaseRunResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseRunResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseRunResourceForExtendResponse> DescribeCloudBaseRunResourceForExtendOutcome;
                typedef std::future<DescribeCloudBaseRunResourceForExtendOutcome> DescribeCloudBaseRunResourceForExtendOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseRunResourceForExtendRequest&, DescribeCloudBaseRunResourceForExtendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseRunResourceForExtendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseRunServerVersionResponse> DescribeCloudBaseRunServerVersionOutcome;
                typedef std::future<DescribeCloudBaseRunServerVersionOutcome> DescribeCloudBaseRunServerVersionOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseRunServerVersionRequest&, DescribeCloudBaseRunServerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseRunServerVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseRunVersionResponse> DescribeCloudBaseRunVersionOutcome;
                typedef std::future<DescribeCloudBaseRunVersionOutcome> DescribeCloudBaseRunVersionOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseRunVersionRequest&, DescribeCloudBaseRunVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseRunVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseRunVersionSnapshotResponse> DescribeCloudBaseRunVersionSnapshotOutcome;
                typedef std::future<DescribeCloudBaseRunVersionSnapshotOutcome> DescribeCloudBaseRunVersionSnapshotOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseRunVersionSnapshotRequest&, DescribeCloudBaseRunVersionSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseRunVersionSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCurveDataResponse> DescribeCurveDataOutcome;
                typedef std::future<DescribeCurveDataOutcome> DescribeCurveDataOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCurveDataRequest&, DescribeCurveDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurveDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseACLResponse> DescribeDatabaseACLOutcome;
                typedef std::future<DescribeDatabaseACLOutcome> DescribeDatabaseACLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeDatabaseACLRequest&, DescribeDatabaseACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDownloadFileResponse> DescribeDownloadFileOutcome;
                typedef std::future<DescribeDownloadFileOutcome> DescribeDownloadFileOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeDownloadFileRequest&, DescribeDownloadFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEndUserLoginStatisticResponse> DescribeEndUserLoginStatisticOutcome;
                typedef std::future<DescribeEndUserLoginStatisticOutcome> DescribeEndUserLoginStatisticOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEndUserLoginStatisticRequest&, DescribeEndUserLoginStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndUserLoginStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEndUserStatisticResponse> DescribeEndUserStatisticOutcome;
                typedef std::future<DescribeEndUserStatisticOutcome> DescribeEndUserStatisticOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEndUserStatisticRequest&, DescribeEndUserStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndUserStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEndUsersResponse> DescribeEndUsersOutcome;
                typedef std::future<DescribeEndUsersOutcome> DescribeEndUsersOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEndUsersRequest&, DescribeEndUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvDealRegionResponse> DescribeEnvDealRegionOutcome;
                typedef std::future<DescribeEnvDealRegionOutcome> DescribeEnvDealRegionOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvDealRegionRequest&, DescribeEnvDealRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvDealRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvFreeQuotaResponse> DescribeEnvFreeQuotaOutcome;
                typedef std::future<DescribeEnvFreeQuotaOutcome> DescribeEnvFreeQuotaOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvFreeQuotaRequest&, DescribeEnvFreeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvFreeQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvLimitResponse> DescribeEnvLimitOutcome;
                typedef std::future<DescribeEnvLimitOutcome> DescribeEnvLimitOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvLimitRequest&, DescribeEnvLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvPostpaidDeductResponse> DescribeEnvPostpaidDeductOutcome;
                typedef std::future<DescribeEnvPostpaidDeductOutcome> DescribeEnvPostpaidDeductOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvPostpaidDeductRequest&, DescribeEnvPostpaidDeductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvPostpaidDeductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvsResponse> DescribeEnvsOutcome;
                typedef std::future<DescribeEnvsOutcome> DescribeEnvsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvsRequest&, DescribeEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtensionUploadInfoResponse> DescribeExtensionUploadInfoOutcome;
                typedef std::future<DescribeExtensionUploadInfoOutcome> DescribeExtensionUploadInfoOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeExtensionUploadInfoRequest&, DescribeExtensionUploadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtensionUploadInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtraPkgBillingInfoResponse> DescribeExtraPkgBillingInfoOutcome;
                typedef std::future<DescribeExtraPkgBillingInfoOutcome> DescribeExtraPkgBillingInfoOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeExtraPkgBillingInfoRequest&, DescribeExtraPkgBillingInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtraPkgBillingInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostingDomainTaskResponse> DescribeHostingDomainTaskOutcome;
                typedef std::future<DescribeHostingDomainTaskOutcome> DescribeHostingDomainTaskOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeHostingDomainTaskRequest&, DescribeHostingDomainTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostingDomainTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePostpayFreeQuotasResponse> DescribePostpayFreeQuotasOutcome;
                typedef std::future<DescribePostpayFreeQuotasOutcome> DescribePostpayFreeQuotasOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribePostpayFreeQuotasRequest&, DescribePostpayFreeQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostpayFreeQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePostpayPackageFreeQuotasResponse> DescribePostpayPackageFreeQuotasOutcome;
                typedef std::future<DescribePostpayPackageFreeQuotasOutcome> DescribePostpayPackageFreeQuotasOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribePostpayPackageFreeQuotasRequest&, DescribePostpayPackageFreeQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePostpayPackageFreeQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotaDataResponse> DescribeQuotaDataOutcome;
                typedef std::future<DescribeQuotaDataOutcome> DescribeQuotaDataOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeQuotaDataRequest&, DescribeQuotaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmsQuotasResponse> DescribeSmsQuotasOutcome;
                typedef std::future<DescribeSmsQuotasOutcome> DescribeSmsQuotasOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeSmsQuotasRequest&, DescribeSmsQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpecialCostItemsResponse> DescribeSpecialCostItemsOutcome;
                typedef std::future<DescribeSpecialCostItemsOutcome> DescribeSpecialCostItemsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeSpecialCostItemsRequest&, DescribeSpecialCostItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpecialCostItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStandaloneGatewayResponse> DescribeStandaloneGatewayOutcome;
                typedef std::future<DescribeStandaloneGatewayOutcome> DescribeStandaloneGatewayOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeStandaloneGatewayRequest&, DescribeStandaloneGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStandaloneGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStandaloneGatewayPackageResponse> DescribeStandaloneGatewayPackageOutcome;
                typedef std::future<DescribeStandaloneGatewayPackageOutcome> DescribeStandaloneGatewayPackageOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeStandaloneGatewayPackageRequest&, DescribeStandaloneGatewayPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStandaloneGatewayPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserActivityInfoResponse> DescribeUserActivityInfoOutcome;
                typedef std::future<DescribeUserActivityInfoOutcome> DescribeUserActivityInfoOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeUserActivityInfoRequest&, DescribeUserActivityInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserActivityInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWxCloudBaseRunEnvsResponse> DescribeWxCloudBaseRunEnvsOutcome;
                typedef std::future<DescribeWxCloudBaseRunEnvsOutcome> DescribeWxCloudBaseRunEnvsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeWxCloudBaseRunEnvsRequest&, DescribeWxCloudBaseRunEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWxCloudBaseRunEnvsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWxCloudBaseRunSubNetsResponse> DescribeWxCloudBaseRunSubNetsOutcome;
                typedef std::future<DescribeWxCloudBaseRunSubNetsOutcome> DescribeWxCloudBaseRunSubNetsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeWxCloudBaseRunSubNetsRequest&, DescribeWxCloudBaseRunSubNetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWxCloudBaseRunSubNetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyEnvResponse> DestroyEnvOutcome;
                typedef std::future<DestroyEnvOutcome> DestroyEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DestroyEnvRequest&, DestroyEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyStandaloneGatewayResponse> DestroyStandaloneGatewayOutcome;
                typedef std::future<DestroyStandaloneGatewayOutcome> DestroyStandaloneGatewayOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DestroyStandaloneGatewayRequest&, DestroyStandaloneGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyStandaloneGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyStaticStoreResponse> DestroyStaticStoreOutcome;
                typedef std::future<DestroyStaticStoreOutcome> DestroyStaticStoreOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DestroyStaticStoreRequest&, DestroyStaticStoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyStaticStoreAsyncHandler;
                typedef Outcome<Core::Error, Model::EstablishCloudBaseRunServerResponse> EstablishCloudBaseRunServerOutcome;
                typedef std::future<EstablishCloudBaseRunServerOutcome> EstablishCloudBaseRunServerOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::EstablishCloudBaseRunServerRequest&, EstablishCloudBaseRunServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EstablishCloudBaseRunServerAsyncHandler;
                typedef Outcome<Core::Error, Model::EstablishWxGatewayRouteResponse> EstablishWxGatewayRouteOutcome;
                typedef std::future<EstablishWxGatewayRouteOutcome> EstablishWxGatewayRouteOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::EstablishWxGatewayRouteRequest&, EstablishWxGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EstablishWxGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudBaseRunServerFlowConfResponse> ModifyCloudBaseRunServerFlowConfOutcome;
                typedef std::future<ModifyCloudBaseRunServerFlowConfOutcome> ModifyCloudBaseRunServerFlowConfOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyCloudBaseRunServerFlowConfRequest&, ModifyCloudBaseRunServerFlowConfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudBaseRunServerFlowConfAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseACLResponse> ModifyDatabaseACLOutcome;
                typedef std::future<ModifyDatabaseACLOutcome> ModifyDatabaseACLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyDatabaseACLRequest&, ModifyDatabaseACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseACLAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEndUserResponse> ModifyEndUserOutcome;
                typedef std::future<ModifyEndUserOutcome> ModifyEndUserOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyEndUserRequest&, ModifyEndUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEndUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnvResponse> ModifyEnvOutcome;
                typedef std::future<ModifyEnvOutcome> ModifyEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyEnvRequest&, ModifyEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::ReinstateEnvResponse> ReinstateEnvOutcome;
                typedef std::future<ReinstateEnvOutcome> ReinstateEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ReinstateEnvRequest&, ReinstateEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReinstateEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceActivityRecordResponse> ReplaceActivityRecordOutcome;
                typedef std::future<ReplaceActivityRecordOutcome> ReplaceActivityRecordOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ReplaceActivityRecordRequest&, ReplaceActivityRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceActivityRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::RollUpdateCloudBaseRunServerVersionResponse> RollUpdateCloudBaseRunServerVersionOutcome;
                typedef std::future<RollUpdateCloudBaseRunServerVersionOutcome> RollUpdateCloudBaseRunServerVersionOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::RollUpdateCloudBaseRunServerVersionRequest&, RollUpdateCloudBaseRunServerVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RollUpdateCloudBaseRunServerVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::TurnOffStandaloneGatewayResponse> TurnOffStandaloneGatewayOutcome;
                typedef std::future<TurnOffStandaloneGatewayOutcome> TurnOffStandaloneGatewayOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::TurnOffStandaloneGatewayRequest&, TurnOffStandaloneGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TurnOffStandaloneGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::TurnOnStandaloneGatewayResponse> TurnOnStandaloneGatewayOutcome;
                typedef std::future<TurnOnStandaloneGatewayOutcome> TurnOnStandaloneGatewayOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::TurnOnStandaloneGatewayRequest&, TurnOnStandaloneGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TurnOnStandaloneGatewayAsyncHandler;



                /**
                 *绑定另外一个环境下的网关，callContainer请求可以访问到该网关
                 * @param req BindEnvGatewayRequest
                 * @return BindEnvGatewayOutcome
                 */
                BindEnvGatewayOutcome BindEnvGateway(const Model::BindEnvGatewayRequest &request);
                void BindEnvGatewayAsync(const Model::BindEnvGatewayRequest& request, const BindEnvGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindEnvGatewayOutcomeCallable BindEnvGatewayCallable(const Model::BindEnvGatewayRequest& request);

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
                 *创建云开发项目
                 * @param req CreateAndDeployCloudBaseProjectRequest
                 * @return CreateAndDeployCloudBaseProjectOutcome
                 */
                CreateAndDeployCloudBaseProjectOutcome CreateAndDeployCloudBaseProject(const Model::CreateAndDeployCloudBaseProjectRequest &request);
                void CreateAndDeployCloudBaseProjectAsync(const Model::CreateAndDeployCloudBaseProjectRequest& request, const CreateAndDeployCloudBaseProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndDeployCloudBaseProjectOutcomeCallable CreateAndDeployCloudBaseProjectCallable(const Model::CreateAndDeployCloudBaseProjectRequest& request);

                /**
                 *增加安全域名
                 * @param req CreateAuthDomainRequest
                 * @return CreateAuthDomainOutcome
                 */
                CreateAuthDomainOutcome CreateAuthDomain(const Model::CreateAuthDomainRequest &request);
                void CreateAuthDomainAsync(const Model::CreateAuthDomainRequest& request, const CreateAuthDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuthDomainOutcomeCallable CreateAuthDomainCallable(const Model::CreateAuthDomainRequest& request);

                /**
                 *开通容器托管的资源，包括集群创建，VPC配置，异步任务创建，镜像托管，Coding等，查看创建结果需要根据DescribeCloudBaseRunResource接口来查看
                 * @param req CreateCloudBaseRunResourceRequest
                 * @return CreateCloudBaseRunResourceOutcome
                 */
                CreateCloudBaseRunResourceOutcome CreateCloudBaseRunResource(const Model::CreateCloudBaseRunResourceRequest &request);
                void CreateCloudBaseRunResourceAsync(const Model::CreateCloudBaseRunResourceRequest& request, const CreateCloudBaseRunResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudBaseRunResourceOutcomeCallable CreateCloudBaseRunResourceCallable(const Model::CreateCloudBaseRunResourceRequest& request);

                /**
                 *创建服务版本
                 * @param req CreateCloudBaseRunServerVersionRequest
                 * @return CreateCloudBaseRunServerVersionOutcome
                 */
                CreateCloudBaseRunServerVersionOutcome CreateCloudBaseRunServerVersion(const Model::CreateCloudBaseRunServerVersionRequest &request);
                void CreateCloudBaseRunServerVersionAsync(const Model::CreateCloudBaseRunServerVersionRequest& request, const CreateCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudBaseRunServerVersionOutcomeCallable CreateCloudBaseRunServerVersionCallable(const Model::CreateCloudBaseRunServerVersionRequest& request);

                /**
                 *创建托管域名
                 * @param req CreateHostingDomainRequest
                 * @return CreateHostingDomainOutcome
                 */
                CreateHostingDomainOutcome CreateHostingDomain(const Model::CreateHostingDomainRequest &request);
                void CreateHostingDomainAsync(const Model::CreateHostingDomainRequest& request, const CreateHostingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostingDomainOutcomeCallable CreateHostingDomainCallable(const Model::CreateHostingDomainRequest& request);

                /**
                 *开通后付费资源
                 * @param req CreatePostpayPackageRequest
                 * @return CreatePostpayPackageOutcome
                 */
                CreatePostpayPackageOutcome CreatePostpayPackage(const Model::CreatePostpayPackageRequest &request);
                void CreatePostpayPackageAsync(const Model::CreatePostpayPackageRequest& request, const CreatePostpayPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePostpayPackageOutcomeCallable CreatePostpayPackageCallable(const Model::CreatePostpayPackageRequest& request);

                /**
                 *本接口（CreateStandaloneGateway）用于创建独立网关。
                 * @param req CreateStandaloneGatewayRequest
                 * @return CreateStandaloneGatewayOutcome
                 */
                CreateStandaloneGatewayOutcome CreateStandaloneGateway(const Model::CreateStandaloneGatewayRequest &request);
                void CreateStandaloneGatewayAsync(const Model::CreateStandaloneGatewayRequest& request, const CreateStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStandaloneGatewayOutcomeCallable CreateStandaloneGatewayCallable(const Model::CreateStandaloneGatewayRequest& request);

                /**
                 *创建静态托管资源，包括COS和CDN，异步任务创建，查看创建结果需要根据DescribeStaticStore接口来查看
                 * @param req CreateStaticStoreRequest
                 * @return CreateStaticStoreOutcome
                 */
                CreateStaticStoreOutcome CreateStaticStore(const Model::CreateStaticStoreRequest &request);
                void CreateStaticStoreAsync(const Model::CreateStaticStoreRequest& request, const CreateStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStaticStoreOutcomeCallable CreateStaticStoreCallable(const Model::CreateStaticStoreRequest& request);

                /**
                 *创建微信云托管
                 * @param req CreateWxCloudBaseRunEnvRequest
                 * @return CreateWxCloudBaseRunEnvOutcome
                 */
                CreateWxCloudBaseRunEnvOutcome CreateWxCloudBaseRunEnv(const Model::CreateWxCloudBaseRunEnvRequest &request);
                void CreateWxCloudBaseRunEnvAsync(const Model::CreateWxCloudBaseRunEnvRequest& request, const CreateWxCloudBaseRunEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWxCloudBaseRunEnvOutcomeCallable CreateWxCloudBaseRunEnvCallable(const Model::CreateWxCloudBaseRunEnvRequest& request);

                /**
                 *开通微信云托管MySQL数据库服务
                 * @param req CreateWxCloudBaseRunServerDBClusterRequest
                 * @return CreateWxCloudBaseRunServerDBClusterOutcome
                 */
                CreateWxCloudBaseRunServerDBClusterOutcome CreateWxCloudBaseRunServerDBCluster(const Model::CreateWxCloudBaseRunServerDBClusterRequest &request);
                void CreateWxCloudBaseRunServerDBClusterAsync(const Model::CreateWxCloudBaseRunServerDBClusterRequest& request, const CreateWxCloudBaseRunServerDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWxCloudBaseRunServerDBClusterOutcomeCallable CreateWxCloudBaseRunServerDBClusterCallable(const Model::CreateWxCloudBaseRunServerDBClusterRequest& request);

                /**
                 *删除云项目
                 * @param req DeleteCloudBaseProjectLatestVersionRequest
                 * @return DeleteCloudBaseProjectLatestVersionOutcome
                 */
                DeleteCloudBaseProjectLatestVersionOutcome DeleteCloudBaseProjectLatestVersion(const Model::DeleteCloudBaseProjectLatestVersionRequest &request);
                void DeleteCloudBaseProjectLatestVersionAsync(const Model::DeleteCloudBaseProjectLatestVersionRequest& request, const DeleteCloudBaseProjectLatestVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudBaseProjectLatestVersionOutcomeCallable DeleteCloudBaseProjectLatestVersionCallable(const Model::DeleteCloudBaseProjectLatestVersionRequest& request);

                /**
                 *删除服务版本
                 * @param req DeleteCloudBaseRunServerVersionRequest
                 * @return DeleteCloudBaseRunServerVersionOutcome
                 */
                DeleteCloudBaseRunServerVersionOutcome DeleteCloudBaseRunServerVersion(const Model::DeleteCloudBaseRunServerVersionRequest &request);
                void DeleteCloudBaseRunServerVersionAsync(const Model::DeleteCloudBaseRunServerVersionRequest& request, const DeleteCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudBaseRunServerVersionOutcomeCallable DeleteCloudBaseRunServerVersionCallable(const Model::DeleteCloudBaseRunServerVersionRequest& request);

                /**
                 *删除终端用户
                 * @param req DeleteEndUserRequest
                 * @return DeleteEndUserOutcome
                 */
                DeleteEndUserOutcome DeleteEndUser(const Model::DeleteEndUserRequest &request);
                void DeleteEndUserAsync(const Model::DeleteEndUserRequest& request, const DeleteEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEndUserOutcomeCallable DeleteEndUserCallable(const Model::DeleteEndUserRequest& request);

                /**
                 *删除安全网关路由
                 * @param req DeleteWxGatewayRouteRequest
                 * @return DeleteWxGatewayRouteOutcome
                 */
                DeleteWxGatewayRouteOutcome DeleteWxGatewayRoute(const Model::DeleteWxGatewayRouteRequest &request);
                void DeleteWxGatewayRouteAsync(const Model::DeleteWxGatewayRouteRequest& request, const DeleteWxGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWxGatewayRouteOutcomeCallable DeleteWxGatewayRouteCallable(const Model::DeleteWxGatewayRouteRequest& request);

                /**
                 *查询活动信息
                 * @param req DescribeActivityInfoRequest
                 * @return DescribeActivityInfoOutcome
                 */
                DescribeActivityInfoOutcome DescribeActivityInfo(const Model::DescribeActivityInfoRequest &request);
                void DescribeActivityInfoAsync(const Model::DescribeActivityInfoRequest& request, const DescribeActivityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActivityInfoOutcomeCallable DescribeActivityInfoCallable(const Model::DescribeActivityInfoRequest& request);

                /**
                 *查询活动记录信息
                 * @param req DescribeActivityRecordRequest
                 * @return DescribeActivityRecordOutcome
                 */
                DescribeActivityRecordOutcome DescribeActivityRecord(const Model::DescribeActivityRecordRequest &request);
                void DescribeActivityRecordAsync(const Model::DescribeActivityRecordRequest& request, const DescribeActivityRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActivityRecordOutcomeCallable DescribeActivityRecordCallable(const Model::DescribeActivityRecordRequest& request);

                /**
                 *获取安全域名列表
                 * @param req DescribeAuthDomainsRequest
                 * @return DescribeAuthDomainsOutcome
                 */
                DescribeAuthDomainsOutcome DescribeAuthDomains(const Model::DescribeAuthDomainsRequest &request);
                void DescribeAuthDomainsAsync(const Model::DescribeAuthDomainsRequest& request, const DescribeAuthDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthDomainsOutcomeCallable DescribeAuthDomainsCallable(const Model::DescribeAuthDomainsRequest& request);

                /**
                 *获取云托管代码上传url
                 * @param req DescribeCloudBaseBuildServiceRequest
                 * @return DescribeCloudBaseBuildServiceOutcome
                 */
                DescribeCloudBaseBuildServiceOutcome DescribeCloudBaseBuildService(const Model::DescribeCloudBaseBuildServiceRequest &request);
                void DescribeCloudBaseBuildServiceAsync(const Model::DescribeCloudBaseBuildServiceRequest& request, const DescribeCloudBaseBuildServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseBuildServiceOutcomeCallable DescribeCloudBaseBuildServiceCallable(const Model::DescribeCloudBaseBuildServiceRequest& request);

                /**
                 *获取云开发项目列表
                 * @param req DescribeCloudBaseProjectLatestVersionListRequest
                 * @return DescribeCloudBaseProjectLatestVersionListOutcome
                 */
                DescribeCloudBaseProjectLatestVersionListOutcome DescribeCloudBaseProjectLatestVersionList(const Model::DescribeCloudBaseProjectLatestVersionListRequest &request);
                void DescribeCloudBaseProjectLatestVersionListAsync(const Model::DescribeCloudBaseProjectLatestVersionListRequest& request, const DescribeCloudBaseProjectLatestVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseProjectLatestVersionListOutcomeCallable DescribeCloudBaseProjectLatestVersionListCallable(const Model::DescribeCloudBaseProjectLatestVersionListRequest& request);

                /**
                 *云项目部署列表
                 * @param req DescribeCloudBaseProjectVersionListRequest
                 * @return DescribeCloudBaseProjectVersionListOutcome
                 */
                DescribeCloudBaseProjectVersionListOutcome DescribeCloudBaseProjectVersionList(const Model::DescribeCloudBaseProjectVersionListRequest &request);
                void DescribeCloudBaseProjectVersionListAsync(const Model::DescribeCloudBaseProjectVersionListRequest& request, const DescribeCloudBaseProjectVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseProjectVersionListOutcomeCallable DescribeCloudBaseProjectVersionListCallable(const Model::DescribeCloudBaseProjectVersionListRequest& request);

                /**
                 *独立网关中拉取云托管服务对应的配置信息
                 * @param req DescribeCloudBaseRunConfForGateWayRequest
                 * @return DescribeCloudBaseRunConfForGateWayOutcome
                 */
                DescribeCloudBaseRunConfForGateWayOutcome DescribeCloudBaseRunConfForGateWay(const Model::DescribeCloudBaseRunConfForGateWayRequest &request);
                void DescribeCloudBaseRunConfForGateWayAsync(const Model::DescribeCloudBaseRunConfForGateWayRequest& request, const DescribeCloudBaseRunConfForGateWayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseRunConfForGateWayOutcomeCallable DescribeCloudBaseRunConfForGateWayCallable(const Model::DescribeCloudBaseRunConfForGateWayRequest& request);

                /**
                 *查看容器托管的集群状态
                 * @param req DescribeCloudBaseRunResourceRequest
                 * @return DescribeCloudBaseRunResourceOutcome
                 */
                DescribeCloudBaseRunResourceOutcome DescribeCloudBaseRunResource(const Model::DescribeCloudBaseRunResourceRequest &request);
                void DescribeCloudBaseRunResourceAsync(const Model::DescribeCloudBaseRunResourceRequest& request, const DescribeCloudBaseRunResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseRunResourceOutcomeCallable DescribeCloudBaseRunResourceCallable(const Model::DescribeCloudBaseRunResourceRequest& request);

                /**
                 *查看容器托管的集群状态扩展使用
                 * @param req DescribeCloudBaseRunResourceForExtendRequest
                 * @return DescribeCloudBaseRunResourceForExtendOutcome
                 */
                DescribeCloudBaseRunResourceForExtendOutcome DescribeCloudBaseRunResourceForExtend(const Model::DescribeCloudBaseRunResourceForExtendRequest &request);
                void DescribeCloudBaseRunResourceForExtendAsync(const Model::DescribeCloudBaseRunResourceForExtendRequest& request, const DescribeCloudBaseRunResourceForExtendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseRunResourceForExtendOutcomeCallable DescribeCloudBaseRunResourceForExtendCallable(const Model::DescribeCloudBaseRunResourceForExtendRequest& request);

                /**
                 *查询服务版本的详情，CPU和MEM  请使用CPUSize和MemSize
                 * @param req DescribeCloudBaseRunServerVersionRequest
                 * @return DescribeCloudBaseRunServerVersionOutcome
                 */
                DescribeCloudBaseRunServerVersionOutcome DescribeCloudBaseRunServerVersion(const Model::DescribeCloudBaseRunServerVersionRequest &request);
                void DescribeCloudBaseRunServerVersionAsync(const Model::DescribeCloudBaseRunServerVersionRequest& request, const DescribeCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseRunServerVersionOutcomeCallable DescribeCloudBaseRunServerVersionCallable(const Model::DescribeCloudBaseRunServerVersionRequest& request);

                /**
                 *查询服务版本详情(新)
                 * @param req DescribeCloudBaseRunVersionRequest
                 * @return DescribeCloudBaseRunVersionOutcome
                 */
                DescribeCloudBaseRunVersionOutcome DescribeCloudBaseRunVersion(const Model::DescribeCloudBaseRunVersionRequest &request);
                void DescribeCloudBaseRunVersionAsync(const Model::DescribeCloudBaseRunVersionRequest& request, const DescribeCloudBaseRunVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseRunVersionOutcomeCallable DescribeCloudBaseRunVersionCallable(const Model::DescribeCloudBaseRunVersionRequest& request);

                /**
                 *查询版本历史
                 * @param req DescribeCloudBaseRunVersionSnapshotRequest
                 * @return DescribeCloudBaseRunVersionSnapshotOutcome
                 */
                DescribeCloudBaseRunVersionSnapshotOutcome DescribeCloudBaseRunVersionSnapshot(const Model::DescribeCloudBaseRunVersionSnapshotRequest &request);
                void DescribeCloudBaseRunVersionSnapshotAsync(const Model::DescribeCloudBaseRunVersionSnapshotRequest& request, const DescribeCloudBaseRunVersionSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseRunVersionSnapshotOutcomeCallable DescribeCloudBaseRunVersionSnapshotCallable(const Model::DescribeCloudBaseRunVersionSnapshotRequest& request);

                /**
                 *根据用户传入的指标, 拉取一段时间内的监控数据。
                 * @param req DescribeCurveDataRequest
                 * @return DescribeCurveDataOutcome
                 */
                DescribeCurveDataOutcome DescribeCurveData(const Model::DescribeCurveDataRequest &request);
                void DescribeCurveDataAsync(const Model::DescribeCurveDataRequest& request, const DescribeCurveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCurveDataOutcomeCallable DescribeCurveDataCallable(const Model::DescribeCurveDataRequest& request);

                /**
                 *获取数据库权限
                 * @param req DescribeDatabaseACLRequest
                 * @return DescribeDatabaseACLOutcome
                 */
                DescribeDatabaseACLOutcome DescribeDatabaseACL(const Model::DescribeDatabaseACLRequest &request);
                void DescribeDatabaseACLAsync(const Model::DescribeDatabaseACLRequest& request, const DescribeDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseACLOutcomeCallable DescribeDatabaseACLCallable(const Model::DescribeDatabaseACLRequest& request);

                /**
                 *获取下载文件信息
                 * @param req DescribeDownloadFileRequest
                 * @return DescribeDownloadFileOutcome
                 */
                DescribeDownloadFileOutcome DescribeDownloadFile(const Model::DescribeDownloadFileRequest &request);
                void DescribeDownloadFileAsync(const Model::DescribeDownloadFileRequest& request, const DescribeDownloadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDownloadFileOutcomeCallable DescribeDownloadFileCallable(const Model::DescribeDownloadFileRequest& request);

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
                 *获取环境下单地域
                 * @param req DescribeEnvDealRegionRequest
                 * @return DescribeEnvDealRegionOutcome
                 */
                DescribeEnvDealRegionOutcome DescribeEnvDealRegion(const Model::DescribeEnvDealRegionRequest &request);
                void DescribeEnvDealRegionAsync(const Model::DescribeEnvDealRegionRequest& request, const DescribeEnvDealRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvDealRegionOutcomeCallable DescribeEnvDealRegionCallable(const Model::DescribeEnvDealRegionRequest& request);

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
                 *查询环境后付费计费详情
                 * @param req DescribeEnvPostpaidDeductRequest
                 * @return DescribeEnvPostpaidDeductOutcome
                 */
                DescribeEnvPostpaidDeductOutcome DescribeEnvPostpaidDeduct(const Model::DescribeEnvPostpaidDeductRequest &request);
                void DescribeEnvPostpaidDeductAsync(const Model::DescribeEnvPostpaidDeductRequest& request, const DescribeEnvPostpaidDeductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvPostpaidDeductOutcomeCallable DescribeEnvPostpaidDeductCallable(const Model::DescribeEnvPostpaidDeductRequest& request);

                /**
                 *获取环境列表，含环境下的各个资源信息。尤其是各资源的唯一标识，是请求各资源的关键参数
                 * @param req DescribeEnvsRequest
                 * @return DescribeEnvsOutcome
                 */
                DescribeEnvsOutcome DescribeEnvs(const Model::DescribeEnvsRequest &request);
                void DescribeEnvsAsync(const Model::DescribeEnvsRequest& request, const DescribeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvsOutcomeCallable DescribeEnvsCallable(const Model::DescribeEnvsRequest& request);

                /**
                 *描述扩展上传文件信息
                 * @param req DescribeExtensionUploadInfoRequest
                 * @return DescribeExtensionUploadInfoOutcome
                 */
                DescribeExtensionUploadInfoOutcome DescribeExtensionUploadInfo(const Model::DescribeExtensionUploadInfoRequest &request);
                void DescribeExtensionUploadInfoAsync(const Model::DescribeExtensionUploadInfoRequest& request, const DescribeExtensionUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtensionUploadInfoOutcomeCallable DescribeExtensionUploadInfoCallable(const Model::DescribeExtensionUploadInfoRequest& request);

                /**
                 *获取增值包计费相关信息
                 * @param req DescribeExtraPkgBillingInfoRequest
                 * @return DescribeExtraPkgBillingInfoOutcome
                 */
                DescribeExtraPkgBillingInfoOutcome DescribeExtraPkgBillingInfo(const Model::DescribeExtraPkgBillingInfoRequest &request);
                void DescribeExtraPkgBillingInfoAsync(const Model::DescribeExtraPkgBillingInfoRequest& request, const DescribeExtraPkgBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtraPkgBillingInfoOutcomeCallable DescribeExtraPkgBillingInfoCallable(const Model::DescribeExtraPkgBillingInfoRequest& request);

                /**
                 *查询静态托管域名任务状态
                 * @param req DescribeHostingDomainTaskRequest
                 * @return DescribeHostingDomainTaskOutcome
                 */
                DescribeHostingDomainTaskOutcome DescribeHostingDomainTask(const Model::DescribeHostingDomainTaskRequest &request);
                void DescribeHostingDomainTaskAsync(const Model::DescribeHostingDomainTaskRequest& request, const DescribeHostingDomainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostingDomainTaskOutcomeCallable DescribeHostingDomainTaskCallable(const Model::DescribeHostingDomainTaskRequest& request);

                /**
                 *查询后付费资源免费量
                 * @param req DescribePostpayFreeQuotasRequest
                 * @return DescribePostpayFreeQuotasOutcome
                 */
                DescribePostpayFreeQuotasOutcome DescribePostpayFreeQuotas(const Model::DescribePostpayFreeQuotasRequest &request);
                void DescribePostpayFreeQuotasAsync(const Model::DescribePostpayFreeQuotasRequest& request, const DescribePostpayFreeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePostpayFreeQuotasOutcomeCallable DescribePostpayFreeQuotasCallable(const Model::DescribePostpayFreeQuotasRequest& request);

                /**
                 *获取后付费免费额度
                 * @param req DescribePostpayPackageFreeQuotasRequest
                 * @return DescribePostpayPackageFreeQuotasOutcome
                 */
                DescribePostpayPackageFreeQuotasOutcome DescribePostpayPackageFreeQuotas(const Model::DescribePostpayPackageFreeQuotasRequest &request);
                void DescribePostpayPackageFreeQuotasAsync(const Model::DescribePostpayPackageFreeQuotasRequest& request, const DescribePostpayPackageFreeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePostpayPackageFreeQuotasOutcomeCallable DescribePostpayPackageFreeQuotasCallable(const Model::DescribePostpayPackageFreeQuotasRequest& request);

                /**
                 *查询指定指标的配额使用量
                 * @param req DescribeQuotaDataRequest
                 * @return DescribeQuotaDataOutcome
                 */
                DescribeQuotaDataOutcome DescribeQuotaData(const Model::DescribeQuotaDataRequest &request);
                void DescribeQuotaDataAsync(const Model::DescribeQuotaDataRequest& request, const DescribeQuotaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotaDataOutcomeCallable DescribeQuotaDataCallable(const Model::DescribeQuotaDataRequest& request);

                /**
                 *查询后付费短信资源量
1 有免费包的返回SmsFreeQuota结构所有字段
2 没有免费包，有付费包，付费返回复用SmsFreeQuota结构，其中只有 TodayUsedQuota 字段有效
3 都没有返回为空数组
                 * @param req DescribeSmsQuotasRequest
                 * @return DescribeSmsQuotasOutcome
                 */
                DescribeSmsQuotasOutcome DescribeSmsQuotas(const Model::DescribeSmsQuotasRequest &request);
                void DescribeSmsQuotasAsync(const Model::DescribeSmsQuotasRequest& request, const DescribeSmsQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsQuotasOutcomeCallable DescribeSmsQuotasCallable(const Model::DescribeSmsQuotasRequest& request);

                /**
                 *查询环境1分钱抵扣信息
                 * @param req DescribeSpecialCostItemsRequest
                 * @return DescribeSpecialCostItemsOutcome
                 */
                DescribeSpecialCostItemsOutcome DescribeSpecialCostItems(const Model::DescribeSpecialCostItemsRequest &request);
                void DescribeSpecialCostItemsAsync(const Model::DescribeSpecialCostItemsRequest& request, const DescribeSpecialCostItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpecialCostItemsOutcomeCallable DescribeSpecialCostItemsCallable(const Model::DescribeSpecialCostItemsRequest& request);

                /**
                 *本接口（DescribeStandaloneGateway）查询小租户网关套餐信息。
                 * @param req DescribeStandaloneGatewayRequest
                 * @return DescribeStandaloneGatewayOutcome
                 */
                DescribeStandaloneGatewayOutcome DescribeStandaloneGateway(const Model::DescribeStandaloneGatewayRequest &request);
                void DescribeStandaloneGatewayAsync(const Model::DescribeStandaloneGatewayRequest& request, const DescribeStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStandaloneGatewayOutcomeCallable DescribeStandaloneGatewayCallable(const Model::DescribeStandaloneGatewayRequest& request);

                /**
                 *本接口（DescribeStandaloneGatewayPackage）用于查询小租户网关套餐信息。
                 * @param req DescribeStandaloneGatewayPackageRequest
                 * @return DescribeStandaloneGatewayPackageOutcome
                 */
                DescribeStandaloneGatewayPackageOutcome DescribeStandaloneGatewayPackage(const Model::DescribeStandaloneGatewayPackageRequest &request);
                void DescribeStandaloneGatewayPackageAsync(const Model::DescribeStandaloneGatewayPackageRequest& request, const DescribeStandaloneGatewayPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStandaloneGatewayPackageOutcomeCallable DescribeStandaloneGatewayPackageCallable(const Model::DescribeStandaloneGatewayPackageRequest& request);

                /**
                 *查询用户活动信息
                 * @param req DescribeUserActivityInfoRequest
                 * @return DescribeUserActivityInfoOutcome
                 */
                DescribeUserActivityInfoOutcome DescribeUserActivityInfo(const Model::DescribeUserActivityInfoRequest &request);
                void DescribeUserActivityInfoAsync(const Model::DescribeUserActivityInfoRequest& request, const DescribeUserActivityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserActivityInfoOutcomeCallable DescribeUserActivityInfoCallable(const Model::DescribeUserActivityInfoRequest& request);

                /**
                 *查询微信云托管环境信息
                 * @param req DescribeWxCloudBaseRunEnvsRequest
                 * @return DescribeWxCloudBaseRunEnvsOutcome
                 */
                DescribeWxCloudBaseRunEnvsOutcome DescribeWxCloudBaseRunEnvs(const Model::DescribeWxCloudBaseRunEnvsRequest &request);
                void DescribeWxCloudBaseRunEnvsAsync(const Model::DescribeWxCloudBaseRunEnvsRequest& request, const DescribeWxCloudBaseRunEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWxCloudBaseRunEnvsOutcomeCallable DescribeWxCloudBaseRunEnvsCallable(const Model::DescribeWxCloudBaseRunEnvsRequest& request);

                /**
                 *查询微信云托管子网
                 * @param req DescribeWxCloudBaseRunSubNetsRequest
                 * @return DescribeWxCloudBaseRunSubNetsOutcome
                 */
                DescribeWxCloudBaseRunSubNetsOutcome DescribeWxCloudBaseRunSubNets(const Model::DescribeWxCloudBaseRunSubNetsRequest &request);
                void DescribeWxCloudBaseRunSubNetsAsync(const Model::DescribeWxCloudBaseRunSubNetsRequest& request, const DescribeWxCloudBaseRunSubNetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWxCloudBaseRunSubNetsOutcomeCallable DescribeWxCloudBaseRunSubNetsCallable(const Model::DescribeWxCloudBaseRunSubNetsRequest& request);

                /**
                 *销毁环境
                 * @param req DestroyEnvRequest
                 * @return DestroyEnvOutcome
                 */
                DestroyEnvOutcome DestroyEnv(const Model::DestroyEnvRequest &request);
                void DestroyEnvAsync(const Model::DestroyEnvRequest& request, const DestroyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyEnvOutcomeCallable DestroyEnvCallable(const Model::DestroyEnvRequest& request);

                /**
                 *本接口（DestroyStandaloneGateway）用于销毁小租户网关。
                 * @param req DestroyStandaloneGatewayRequest
                 * @return DestroyStandaloneGatewayOutcome
                 */
                DestroyStandaloneGatewayOutcome DestroyStandaloneGateway(const Model::DestroyStandaloneGatewayRequest &request);
                void DestroyStandaloneGatewayAsync(const Model::DestroyStandaloneGatewayRequest& request, const DestroyStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyStandaloneGatewayOutcomeCallable DestroyStandaloneGatewayCallable(const Model::DestroyStandaloneGatewayRequest& request);

                /**
                 *销毁静态托管资源，该接口创建异步销毁任务，资源最终状态可从DestroyStaticStore接口查看
                 * @param req DestroyStaticStoreRequest
                 * @return DestroyStaticStoreOutcome
                 */
                DestroyStaticStoreOutcome DestroyStaticStore(const Model::DestroyStaticStoreRequest &request);
                void DestroyStaticStoreAsync(const Model::DestroyStaticStoreRequest& request, const DestroyStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyStaticStoreOutcomeCallable DestroyStaticStoreCallable(const Model::DestroyStaticStoreRequest& request);

                /**
                 *创建云应用服务
                 * @param req EstablishCloudBaseRunServerRequest
                 * @return EstablishCloudBaseRunServerOutcome
                 */
                EstablishCloudBaseRunServerOutcome EstablishCloudBaseRunServer(const Model::EstablishCloudBaseRunServerRequest &request);
                void EstablishCloudBaseRunServerAsync(const Model::EstablishCloudBaseRunServerRequest& request, const EstablishCloudBaseRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EstablishCloudBaseRunServerOutcomeCallable EstablishCloudBaseRunServerCallable(const Model::EstablishCloudBaseRunServerRequest& request);

                /**
                 *创建或修改安全网关路由
                 * @param req EstablishWxGatewayRouteRequest
                 * @return EstablishWxGatewayRouteOutcome
                 */
                EstablishWxGatewayRouteOutcome EstablishWxGatewayRoute(const Model::EstablishWxGatewayRouteRequest &request);
                void EstablishWxGatewayRouteAsync(const Model::EstablishWxGatewayRouteRequest& request, const EstablishWxGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EstablishWxGatewayRouteOutcomeCallable EstablishWxGatewayRouteCallable(const Model::EstablishWxGatewayRouteRequest& request);

                /**
                 *修改容器内的版本流量配置
                 * @param req ModifyCloudBaseRunServerFlowConfRequest
                 * @return ModifyCloudBaseRunServerFlowConfOutcome
                 */
                ModifyCloudBaseRunServerFlowConfOutcome ModifyCloudBaseRunServerFlowConf(const Model::ModifyCloudBaseRunServerFlowConfRequest &request);
                void ModifyCloudBaseRunServerFlowConfAsync(const Model::ModifyCloudBaseRunServerFlowConfRequest& request, const ModifyCloudBaseRunServerFlowConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudBaseRunServerFlowConfOutcomeCallable ModifyCloudBaseRunServerFlowConfCallable(const Model::ModifyCloudBaseRunServerFlowConfRequest& request);

                /**
                 *修改数据库权限
                 * @param req ModifyDatabaseACLRequest
                 * @return ModifyDatabaseACLOutcome
                 */
                ModifyDatabaseACLOutcome ModifyDatabaseACL(const Model::ModifyDatabaseACLRequest &request);
                void ModifyDatabaseACLAsync(const Model::ModifyDatabaseACLRequest& request, const ModifyDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseACLOutcomeCallable ModifyDatabaseACLCallable(const Model::ModifyDatabaseACLRequest& request);

                /**
                 *管理终端用户
                 * @param req ModifyEndUserRequest
                 * @return ModifyEndUserOutcome
                 */
                ModifyEndUserOutcome ModifyEndUser(const Model::ModifyEndUserRequest &request);
                void ModifyEndUserAsync(const Model::ModifyEndUserRequest& request, const ModifyEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEndUserOutcomeCallable ModifyEndUserCallable(const Model::ModifyEndUserRequest& request);

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

                /**
                 *更新活动详情
                 * @param req ReplaceActivityRecordRequest
                 * @return ReplaceActivityRecordOutcome
                 */
                ReplaceActivityRecordOutcome ReplaceActivityRecord(const Model::ReplaceActivityRecordRequest &request);
                void ReplaceActivityRecordAsync(const Model::ReplaceActivityRecordRequest& request, const ReplaceActivityRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceActivityRecordOutcomeCallable ReplaceActivityRecordCallable(const Model::ReplaceActivityRecordRequest& request);

                /**
                 *针对特定的版本，进行滚动更新
                 * @param req RollUpdateCloudBaseRunServerVersionRequest
                 * @return RollUpdateCloudBaseRunServerVersionOutcome
                 */
                RollUpdateCloudBaseRunServerVersionOutcome RollUpdateCloudBaseRunServerVersion(const Model::RollUpdateCloudBaseRunServerVersionRequest &request);
                void RollUpdateCloudBaseRunServerVersionAsync(const Model::RollUpdateCloudBaseRunServerVersionRequest& request, const RollUpdateCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RollUpdateCloudBaseRunServerVersionOutcomeCallable RollUpdateCloudBaseRunServerVersionCallable(const Model::RollUpdateCloudBaseRunServerVersionRequest& request);

                /**
                 *本接口（TurnOffStandaloneGateway）用于关闭小租户网关。
                 * @param req TurnOffStandaloneGatewayRequest
                 * @return TurnOffStandaloneGatewayOutcome
                 */
                TurnOffStandaloneGatewayOutcome TurnOffStandaloneGateway(const Model::TurnOffStandaloneGatewayRequest &request);
                void TurnOffStandaloneGatewayAsync(const Model::TurnOffStandaloneGatewayRequest& request, const TurnOffStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TurnOffStandaloneGatewayOutcomeCallable TurnOffStandaloneGatewayCallable(const Model::TurnOffStandaloneGatewayRequest& request);

                /**
                 *本接口（TurnOnStandaloneGateway）用于开启小租户网关。
                 * @param req TurnOnStandaloneGatewayRequest
                 * @return TurnOnStandaloneGatewayOutcome
                 */
                TurnOnStandaloneGatewayOutcome TurnOnStandaloneGateway(const Model::TurnOnStandaloneGatewayRequest &request);
                void TurnOnStandaloneGatewayAsync(const Model::TurnOnStandaloneGatewayRequest& request, const TurnOnStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TurnOnStandaloneGatewayOutcomeCallable TurnOnStandaloneGatewayCallable(const Model::TurnOnStandaloneGatewayRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_
