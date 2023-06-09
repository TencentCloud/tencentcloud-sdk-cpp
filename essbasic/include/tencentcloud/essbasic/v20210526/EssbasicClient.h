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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_ESSBASICCLIENT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_ESSBASICCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelBatchCancelFlowsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelBatchCancelFlowsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCancelFlowRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCancelFlowResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCancelMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCancelMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchCancelFlowUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchCancelFlowUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBoundFlowsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBoundFlowsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateConvertTaskApiRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateConvertTaskApiResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateEmbedWebUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateEmbedWebUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowByFilesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowByFilesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowGroupByFilesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowGroupByFilesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowRemindsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowRemindsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignReviewRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignReviewResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePrepareFlowRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePrepareFlowResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateReleaseFlowRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateReleaseFlowResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateSealPolicyRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateSealPolicyResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserRolesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserRolesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteRoleUsersRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteRoleUsersResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteSealPoliciesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteSealPoliciesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeEmployeesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeEmployeesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeOrganizationSealsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeOrganizationSealsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeRolesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeRolesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelGetTaskResultApiRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelGetTaskResultApiResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelUpdateSealStatusRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelUpdateSealStatusResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelVerifyPdfRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelVerifyPdfResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelFlowEvidenceReportRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelFlowEvidenceReportResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSealByImageRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSealByImageResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSignUrlsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSignUrlsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeChannelFlowEvidenceReportRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeChannelFlowEvidenceReportResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeExtendedServiceAuthInfoRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeExtendedServiceAuthInfoResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeFlowDetailInfoRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeFlowDetailInfoResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeResourceUrlsByFlowsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeResourceUrlsByFlowsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeTemplatesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeTemplatesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeUsageRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeUsageResponse.h>
#include <tencentcloud/essbasic/v20210526/model/GetDownloadFlowUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/GetDownloadFlowUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ModifyExtendedServiceRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ModifyExtendedServiceResponse.h>
#include <tencentcloud/essbasic/v20210526/model/OperateChannelTemplateRequest.h>
#include <tencentcloud/essbasic/v20210526/model/OperateChannelTemplateResponse.h>
#include <tencentcloud/essbasic/v20210526/model/PrepareFlowsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/PrepareFlowsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationRequest.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationResponse.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationOperatorsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/SyncProxyOrganizationOperatorsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/UploadFilesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/UploadFilesResponse.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            class EssbasicClient : public AbstractClient
            {
            public:
                EssbasicClient(const Credential &credential, const std::string &region);
                EssbasicClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChannelBatchCancelFlowsResponse> ChannelBatchCancelFlowsOutcome;
                typedef std::future<ChannelBatchCancelFlowsOutcome> ChannelBatchCancelFlowsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelBatchCancelFlowsRequest&, ChannelBatchCancelFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelBatchCancelFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCancelFlowResponse> ChannelCancelFlowOutcome;
                typedef std::future<ChannelCancelFlowOutcome> ChannelCancelFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCancelFlowRequest&, ChannelCancelFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCancelFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCancelMultiFlowSignQRCodeResponse> ChannelCancelMultiFlowSignQRCodeOutcome;
                typedef std::future<ChannelCancelMultiFlowSignQRCodeOutcome> ChannelCancelMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCancelMultiFlowSignQRCodeRequest&, ChannelCancelMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCancelMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateBatchCancelFlowUrlResponse> ChannelCreateBatchCancelFlowUrlOutcome;
                typedef std::future<ChannelCreateBatchCancelFlowUrlOutcome> ChannelCreateBatchCancelFlowUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateBatchCancelFlowUrlRequest&, ChannelCreateBatchCancelFlowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateBatchCancelFlowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateBoundFlowsResponse> ChannelCreateBoundFlowsOutcome;
                typedef std::future<ChannelCreateBoundFlowsOutcome> ChannelCreateBoundFlowsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateBoundFlowsRequest&, ChannelCreateBoundFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateBoundFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateConvertTaskApiResponse> ChannelCreateConvertTaskApiOutcome;
                typedef std::future<ChannelCreateConvertTaskApiOutcome> ChannelCreateConvertTaskApiOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateConvertTaskApiRequest&, ChannelCreateConvertTaskApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateConvertTaskApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateEmbedWebUrlResponse> ChannelCreateEmbedWebUrlOutcome;
                typedef std::future<ChannelCreateEmbedWebUrlOutcome> ChannelCreateEmbedWebUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateEmbedWebUrlRequest&, ChannelCreateEmbedWebUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateEmbedWebUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowByFilesResponse> ChannelCreateFlowByFilesOutcome;
                typedef std::future<ChannelCreateFlowByFilesOutcome> ChannelCreateFlowByFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowByFilesRequest&, ChannelCreateFlowByFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowByFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowGroupByFilesResponse> ChannelCreateFlowGroupByFilesOutcome;
                typedef std::future<ChannelCreateFlowGroupByFilesOutcome> ChannelCreateFlowGroupByFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowGroupByFilesRequest&, ChannelCreateFlowGroupByFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowGroupByFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowRemindsResponse> ChannelCreateFlowRemindsOutcome;
                typedef std::future<ChannelCreateFlowRemindsOutcome> ChannelCreateFlowRemindsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowRemindsRequest&, ChannelCreateFlowRemindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowRemindsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowSignReviewResponse> ChannelCreateFlowSignReviewOutcome;
                typedef std::future<ChannelCreateFlowSignReviewOutcome> ChannelCreateFlowSignReviewOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowSignReviewRequest&, ChannelCreateFlowSignReviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowSignReviewAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowSignUrlResponse> ChannelCreateFlowSignUrlOutcome;
                typedef std::future<ChannelCreateFlowSignUrlOutcome> ChannelCreateFlowSignUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowSignUrlRequest&, ChannelCreateFlowSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateMultiFlowSignQRCodeResponse> ChannelCreateMultiFlowSignQRCodeOutcome;
                typedef std::future<ChannelCreateMultiFlowSignQRCodeOutcome> ChannelCreateMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateMultiFlowSignQRCodeRequest&, ChannelCreateMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreatePrepareFlowResponse> ChannelCreatePrepareFlowOutcome;
                typedef std::future<ChannelCreatePrepareFlowOutcome> ChannelCreatePrepareFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreatePrepareFlowRequest&, ChannelCreatePrepareFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreatePrepareFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateReleaseFlowResponse> ChannelCreateReleaseFlowOutcome;
                typedef std::future<ChannelCreateReleaseFlowOutcome> ChannelCreateReleaseFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateReleaseFlowRequest&, ChannelCreateReleaseFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateReleaseFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateSealPolicyResponse> ChannelCreateSealPolicyOutcome;
                typedef std::future<ChannelCreateSealPolicyOutcome> ChannelCreateSealPolicyOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateSealPolicyRequest&, ChannelCreateSealPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateSealPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateUserRolesResponse> ChannelCreateUserRolesOutcome;
                typedef std::future<ChannelCreateUserRolesOutcome> ChannelCreateUserRolesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateUserRolesRequest&, ChannelCreateUserRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateUserRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDeleteRoleUsersResponse> ChannelDeleteRoleUsersOutcome;
                typedef std::future<ChannelDeleteRoleUsersOutcome> ChannelDeleteRoleUsersOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDeleteRoleUsersRequest&, ChannelDeleteRoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDeleteRoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDeleteSealPoliciesResponse> ChannelDeleteSealPoliciesOutcome;
                typedef std::future<ChannelDeleteSealPoliciesOutcome> ChannelDeleteSealPoliciesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDeleteSealPoliciesRequest&, ChannelDeleteSealPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDeleteSealPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDescribeEmployeesResponse> ChannelDescribeEmployeesOutcome;
                typedef std::future<ChannelDescribeEmployeesOutcome> ChannelDescribeEmployeesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeEmployeesRequest&, ChannelDescribeEmployeesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeEmployeesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDescribeOrganizationSealsResponse> ChannelDescribeOrganizationSealsOutcome;
                typedef std::future<ChannelDescribeOrganizationSealsOutcome> ChannelDescribeOrganizationSealsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeOrganizationSealsRequest&, ChannelDescribeOrganizationSealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeOrganizationSealsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDescribeRolesResponse> ChannelDescribeRolesOutcome;
                typedef std::future<ChannelDescribeRolesOutcome> ChannelDescribeRolesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeRolesRequest&, ChannelDescribeRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelGetTaskResultApiResponse> ChannelGetTaskResultApiOutcome;
                typedef std::future<ChannelGetTaskResultApiOutcome> ChannelGetTaskResultApiOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelGetTaskResultApiRequest&, ChannelGetTaskResultApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelGetTaskResultApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelUpdateSealStatusResponse> ChannelUpdateSealStatusOutcome;
                typedef std::future<ChannelUpdateSealStatusOutcome> ChannelUpdateSealStatusOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelUpdateSealStatusRequest&, ChannelUpdateSealStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelUpdateSealStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelVerifyPdfResponse> ChannelVerifyPdfOutcome;
                typedef std::future<ChannelVerifyPdfOutcome> ChannelVerifyPdfOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelVerifyPdfRequest&, ChannelVerifyPdfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelVerifyPdfAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChannelFlowEvidenceReportResponse> CreateChannelFlowEvidenceReportOutcome;
                typedef std::future<CreateChannelFlowEvidenceReportOutcome> CreateChannelFlowEvidenceReportOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateChannelFlowEvidenceReportRequest&, CreateChannelFlowEvidenceReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelFlowEvidenceReportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsoleLoginUrlResponse> CreateConsoleLoginUrlOutcome;
                typedef std::future<CreateConsoleLoginUrlOutcome> CreateConsoleLoginUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateConsoleLoginUrlRequest&, CreateConsoleLoginUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleLoginUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowsByTemplatesResponse> CreateFlowsByTemplatesOutcome;
                typedef std::future<CreateFlowsByTemplatesOutcome> CreateFlowsByTemplatesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateFlowsByTemplatesRequest&, CreateFlowsByTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowsByTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSealByImageResponse> CreateSealByImageOutcome;
                typedef std::future<CreateSealByImageOutcome> CreateSealByImageOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSealByImageRequest&, CreateSealByImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSealByImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSignUrlsResponse> CreateSignUrlsOutcome;
                typedef std::future<CreateSignUrlsOutcome> CreateSignUrlsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSignUrlsRequest&, CreateSignUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelFlowEvidenceReportResponse> DescribeChannelFlowEvidenceReportOutcome;
                typedef std::future<DescribeChannelFlowEvidenceReportOutcome> DescribeChannelFlowEvidenceReportOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeChannelFlowEvidenceReportRequest&, DescribeChannelFlowEvidenceReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelFlowEvidenceReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtendedServiceAuthInfoResponse> DescribeExtendedServiceAuthInfoOutcome;
                typedef std::future<DescribeExtendedServiceAuthInfoOutcome> DescribeExtendedServiceAuthInfoOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeExtendedServiceAuthInfoRequest&, DescribeExtendedServiceAuthInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtendedServiceAuthInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowDetailInfoResponse> DescribeFlowDetailInfoOutcome;
                typedef std::future<DescribeFlowDetailInfoOutcome> DescribeFlowDetailInfoOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeFlowDetailInfoRequest&, DescribeFlowDetailInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowDetailInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUrlsByFlowsResponse> DescribeResourceUrlsByFlowsOutcome;
                typedef std::future<DescribeResourceUrlsByFlowsOutcome> DescribeResourceUrlsByFlowsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeResourceUrlsByFlowsRequest&, DescribeResourceUrlsByFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUrlsByFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTemplatesResponse> DescribeTemplatesOutcome;
                typedef std::future<DescribeTemplatesOutcome> DescribeTemplatesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeTemplatesRequest&, DescribeTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsageResponse> DescribeUsageOutcome;
                typedef std::future<DescribeUsageOutcome> DescribeUsageOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeUsageRequest&, DescribeUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDownloadFlowUrlResponse> GetDownloadFlowUrlOutcome;
                typedef std::future<GetDownloadFlowUrlOutcome> GetDownloadFlowUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::GetDownloadFlowUrlRequest&, GetDownloadFlowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDownloadFlowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExtendedServiceResponse> ModifyExtendedServiceOutcome;
                typedef std::future<ModifyExtendedServiceOutcome> ModifyExtendedServiceOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ModifyExtendedServiceRequest&, ModifyExtendedServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExtendedServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateChannelTemplateResponse> OperateChannelTemplateOutcome;
                typedef std::future<OperateChannelTemplateOutcome> OperateChannelTemplateOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::OperateChannelTemplateRequest&, OperateChannelTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateChannelTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::PrepareFlowsResponse> PrepareFlowsOutcome;
                typedef std::future<PrepareFlowsOutcome> PrepareFlowsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::PrepareFlowsRequest&, PrepareFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PrepareFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncProxyOrganizationResponse> SyncProxyOrganizationOutcome;
                typedef std::future<SyncProxyOrganizationOutcome> SyncProxyOrganizationOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SyncProxyOrganizationRequest&, SyncProxyOrganizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncProxyOrganizationAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncProxyOrganizationOperatorsResponse> SyncProxyOrganizationOperatorsOutcome;
                typedef std::future<SyncProxyOrganizationOperatorsOutcome> SyncProxyOrganizationOperatorsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::SyncProxyOrganizationOperatorsRequest&, SyncProxyOrganizationOperatorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncProxyOrganizationOperatorsAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFilesResponse> UploadFilesOutcome;
                typedef std::future<UploadFilesOutcome> UploadFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::UploadFilesRequest&, UploadFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFilesAsyncHandler;



                /**
                 *指定需要批量撤销的签署流程Id，批量撤销合同
客户指定需要撤销的签署流程Id，最多100个，超过100不处理；

**满足撤销条件的合同会发起异步撤销流程，不满足撤销条件的合同返回失败原因。**

**合同撤销成功后，会通过合同状态为 CANCEL 的回调消息通知调用方 [具体可参考回调消息](https://qian.tencent.com/developers/scenes/partner/callback_data_types#-%E5%90%88%E5%90%8C%E7%8A%B6%E6%80%81%E9%80%9A%E7%9F%A5---flowstatuschange)**

**注意:
能撤回合同的只能是合同的发起人或者发起企业的超管、法人**
                 * @param req ChannelBatchCancelFlowsRequest
                 * @return ChannelBatchCancelFlowsOutcome
                 */
                ChannelBatchCancelFlowsOutcome ChannelBatchCancelFlows(const Model::ChannelBatchCancelFlowsRequest &request);
                void ChannelBatchCancelFlowsAsync(const Model::ChannelBatchCancelFlowsRequest& request, const ChannelBatchCancelFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelBatchCancelFlowsOutcomeCallable ChannelBatchCancelFlowsCallable(const Model::ChannelBatchCancelFlowsRequest& request);

                /**
                 *撤销签署流程接口，可以撤回：未全部签署完成；不可以撤回（终态）：已全部签署完成、已拒签、已过期、已撤回。
注意:
能撤回合同的只能是合同的发起人或者发起企业的超管、法人
                 * @param req ChannelCancelFlowRequest
                 * @return ChannelCancelFlowOutcome
                 */
                ChannelCancelFlowOutcome ChannelCancelFlow(const Model::ChannelCancelFlowRequest &request);
                void ChannelCancelFlowAsync(const Model::ChannelCancelFlowRequest& request, const ChannelCancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCancelFlowOutcomeCallable ChannelCancelFlowCallable(const Model::ChannelCancelFlowRequest& request);

                /**
                 *此接口（ChannelCancelMultiFlowSignQRCode）用于取消一码多扫二维码。该接口对传入的二维码ID，若还在有效期内，可以提前失效。
                 * @param req ChannelCancelMultiFlowSignQRCodeRequest
                 * @return ChannelCancelMultiFlowSignQRCodeOutcome
                 */
                ChannelCancelMultiFlowSignQRCodeOutcome ChannelCancelMultiFlowSignQRCode(const Model::ChannelCancelMultiFlowSignQRCodeRequest &request);
                void ChannelCancelMultiFlowSignQRCodeAsync(const Model::ChannelCancelMultiFlowSignQRCodeRequest& request, const ChannelCancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCancelMultiFlowSignQRCodeOutcomeCallable ChannelCancelMultiFlowSignQRCodeCallable(const Model::ChannelCancelMultiFlowSignQRCodeRequest& request);

                /**
                 *指定需要批量撤销的签署流程Id，获取批量撤销链接 - 不建议使用此接口，可使用ChannelBatchCancelFlows
客户指定需要撤销的签署流程Id，最多100个，超过100不处理；
接口调用成功返回批量撤销合同的链接，通过链接跳转到电子签小程序完成批量撤销;
可以撤回：未全部签署完成；不可以撤回（终态）：已全部签署完成、已拒签、已过期、已撤回。
注意:
能撤回合同的只能是合同的发起人或者发起企业的超管、法人
                 * @param req ChannelCreateBatchCancelFlowUrlRequest
                 * @return ChannelCreateBatchCancelFlowUrlOutcome
                 */
                ChannelCreateBatchCancelFlowUrlOutcome ChannelCreateBatchCancelFlowUrl(const Model::ChannelCreateBatchCancelFlowUrlRequest &request);
                void ChannelCreateBatchCancelFlowUrlAsync(const Model::ChannelCreateBatchCancelFlowUrlRequest& request, const ChannelCreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateBatchCancelFlowUrlOutcomeCallable ChannelCreateBatchCancelFlowUrlCallable(const Model::ChannelCreateBatchCancelFlowUrlRequest& request);

                /**
                 *此接口（ChannelCreateBoundFlows）用于子客领取合同，经办人需要有相应的角色，合同不能重复领取。
                 * @param req ChannelCreateBoundFlowsRequest
                 * @return ChannelCreateBoundFlowsOutcome
                 */
                ChannelCreateBoundFlowsOutcome ChannelCreateBoundFlows(const Model::ChannelCreateBoundFlowsRequest &request);
                void ChannelCreateBoundFlowsAsync(const Model::ChannelCreateBoundFlowsRequest& request, const ChannelCreateBoundFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateBoundFlowsOutcomeCallable ChannelCreateBoundFlowsCallable(const Model::ChannelCreateBoundFlowsRequest& request);

                /**
                 *上传了word、excel文件后，通过该接口发起文件转换任务，将word、excel文件转换为pdf文件。
                 * @param req ChannelCreateConvertTaskApiRequest
                 * @return ChannelCreateConvertTaskApiOutcome
                 */
                ChannelCreateConvertTaskApiOutcome ChannelCreateConvertTaskApi(const Model::ChannelCreateConvertTaskApiRequest &request);
                void ChannelCreateConvertTaskApiAsync(const Model::ChannelCreateConvertTaskApiRequest& request, const ChannelCreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateConvertTaskApiOutcomeCallable ChannelCreateConvertTaskApiCallable(const Model::ChannelCreateConvertTaskApiRequest& request);

                /**
                 *本接口（ChannelCreateEmbedWebUrl）用于创建常规模块嵌入web的链接
本接口支持创建：创建印章，创建模板，修改模板，预览模板，预览合同流程的web链接
进入web连接后与当前控制台操作保持一致
                 * @param req ChannelCreateEmbedWebUrlRequest
                 * @return ChannelCreateEmbedWebUrlOutcome
                 */
                ChannelCreateEmbedWebUrlOutcome ChannelCreateEmbedWebUrl(const Model::ChannelCreateEmbedWebUrlRequest &request);
                void ChannelCreateEmbedWebUrlAsync(const Model::ChannelCreateEmbedWebUrlRequest& request, const ChannelCreateEmbedWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateEmbedWebUrlOutcomeCallable ChannelCreateEmbedWebUrlCallable(const Model::ChannelCreateEmbedWebUrlRequest& request);

                /**
                 *接口（ChannelCreateFlowByFiles）用于通过文件创建签署流程。此接口静默签能力不可直接使用，请联系客户经理申请使用
                 * @param req ChannelCreateFlowByFilesRequest
                 * @return ChannelCreateFlowByFilesOutcome
                 */
                ChannelCreateFlowByFilesOutcome ChannelCreateFlowByFiles(const Model::ChannelCreateFlowByFilesRequest &request);
                void ChannelCreateFlowByFilesAsync(const Model::ChannelCreateFlowByFilesRequest& request, const ChannelCreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowByFilesOutcomeCallable ChannelCreateFlowByFilesCallable(const Model::ChannelCreateFlowByFilesRequest& request);

                /**
                 *接口（ChannelCreateFlowGroupByFiles）用于通过多文件创建合同组签署流程。
                 * @param req ChannelCreateFlowGroupByFilesRequest
                 * @return ChannelCreateFlowGroupByFilesOutcome
                 */
                ChannelCreateFlowGroupByFilesOutcome ChannelCreateFlowGroupByFiles(const Model::ChannelCreateFlowGroupByFilesRequest &request);
                void ChannelCreateFlowGroupByFilesAsync(const Model::ChannelCreateFlowGroupByFilesRequest& request, const ChannelCreateFlowGroupByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowGroupByFilesOutcomeCallable ChannelCreateFlowGroupByFilesCallable(const Model::ChannelCreateFlowGroupByFilesRequest& request);

                /**
                 *指定需要批量催办的签署流程Id，批量催办合同，最多100个；接口失败后返回错误信息
注意:
该接口不可直接调用，请联系客户经理申请使用
仅能催办当前状态为“待签署”的签署人，且只能催办一次
                 * @param req ChannelCreateFlowRemindsRequest
                 * @return ChannelCreateFlowRemindsOutcome
                 */
                ChannelCreateFlowRemindsOutcome ChannelCreateFlowReminds(const Model::ChannelCreateFlowRemindsRequest &request);
                void ChannelCreateFlowRemindsAsync(const Model::ChannelCreateFlowRemindsRequest& request, const ChannelCreateFlowRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowRemindsOutcomeCallable ChannelCreateFlowRemindsCallable(const Model::ChannelCreateFlowRemindsRequest& request);

                /**
                 *提交企业流程审批结果
目前存在两种审核操作，签署审核，发起审核
签署审核：通过接口（CreateFlowsByTemplates或ChannelCreateFlowByFiles或ChannelCreatePrepareFlow）发起签署流程后，若指定了参数 NeedSignReview 为true,则可以调用此接口，指定operate=SignReview，提交企业内部签署审批结果；若签署流程状态正常，且本企业存在签署方未签署，同一签署流程可以多次提交签署审批结果，签署时的最后一个“审批结果”有效

发起审核：通过接口ChannelCreatePrepareFlow指定发起后需要审核，则可以通过调用此接口，指定operate=CreateReview，提交企业内部审批结果，可多次提交，当通过后，后续提交结果无效
                 * @param req ChannelCreateFlowSignReviewRequest
                 * @return ChannelCreateFlowSignReviewOutcome
                 */
                ChannelCreateFlowSignReviewOutcome ChannelCreateFlowSignReview(const Model::ChannelCreateFlowSignReviewRequest &request);
                void ChannelCreateFlowSignReviewAsync(const Model::ChannelCreateFlowSignReviewRequest& request, const ChannelCreateFlowSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowSignReviewOutcomeCallable ChannelCreateFlowSignReviewCallable(const Model::ChannelCreateFlowSignReviewRequest& request);

                /**
                 *创建个人签署H5签署链接，请联系客户经理申请使用<br/>
该接口用于发起合同后，生成C端签署人的签署链接<br/>
注意：该接口目前签署人类型仅支持个人签署方（PERSON）<br/>
注意：该接口可生成签署链接的C端签署人必须仅有手写签名和时间类型的签署控件<br/>
注意：该接口返回的签署链接是用于APP集成的场景，支持APP打开或浏览器直接打开，不支持微信小程序嵌入。微信小程序请使用小程序跳转或半屏弹窗的方式<br/>
                 * @param req ChannelCreateFlowSignUrlRequest
                 * @return ChannelCreateFlowSignUrlOutcome
                 */
                ChannelCreateFlowSignUrlOutcome ChannelCreateFlowSignUrl(const Model::ChannelCreateFlowSignUrlRequest &request);
                void ChannelCreateFlowSignUrlAsync(const Model::ChannelCreateFlowSignUrlRequest& request, const ChannelCreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowSignUrlOutcomeCallable ChannelCreateFlowSignUrlCallable(const Model::ChannelCreateFlowSignUrlRequest& request);

                /**
                 *此接口（ChannelCreateMultiFlowSignQRCode）用于创建一码多扫流程签署二维码。 适用场景：无需填写签署人信息，可通过模板id生成签署二维码，签署人可通过扫描二维码补充签署信息进行实名签署。常用于提前不知道签署人的身份信息场景，例如：劳务工招工、大批量员工入职等场景。

**本接口适用于发起方没有填写控件的 B2C或者单C模板**

**若是B2C模板,还要满足以下任意一个条件**

- 模板中配置的签署顺序是无序
- B端企业的签署方式是静默签署
- B端企业是非首位签署
                 * @param req ChannelCreateMultiFlowSignQRCodeRequest
                 * @return ChannelCreateMultiFlowSignQRCodeOutcome
                 */
                ChannelCreateMultiFlowSignQRCodeOutcome ChannelCreateMultiFlowSignQRCode(const Model::ChannelCreateMultiFlowSignQRCodeRequest &request);
                void ChannelCreateMultiFlowSignQRCodeAsync(const Model::ChannelCreateMultiFlowSignQRCodeRequest& request, const ChannelCreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateMultiFlowSignQRCodeOutcomeCallable ChannelCreateMultiFlowSignQRCodeCallable(const Model::ChannelCreateMultiFlowSignQRCodeRequest& request);

                /**
                 *创建预发起合同
通过此接口指定：合同，签署人，填写控件信息，生成预创建合同链接，点击后跳转到web页面完成合同创建并发起
可指定合同信息不可更改，签署人信息不可更改
合同发起后，填写及签署流程与现有操作流程一致
注意：目前仅支持模板发起
                 * @param req ChannelCreatePrepareFlowRequest
                 * @return ChannelCreatePrepareFlowOutcome
                 */
                ChannelCreatePrepareFlowOutcome ChannelCreatePrepareFlow(const Model::ChannelCreatePrepareFlowRequest &request);
                void ChannelCreatePrepareFlowAsync(const Model::ChannelCreatePrepareFlowRequest& request, const ChannelCreatePrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreatePrepareFlowOutcomeCallable ChannelCreatePrepareFlowCallable(const Model::ChannelCreatePrepareFlowRequest& request);

                /**
                 *发起解除协议，主要应用场景为：基于一份已经签署的合同，进行解除操作。
合同发起人必须在电子签已经进行实名。
                 * @param req ChannelCreateReleaseFlowRequest
                 * @return ChannelCreateReleaseFlowOutcome
                 */
                ChannelCreateReleaseFlowOutcome ChannelCreateReleaseFlow(const Model::ChannelCreateReleaseFlowRequest &request);
                void ChannelCreateReleaseFlowAsync(const Model::ChannelCreateReleaseFlowRequest& request, const ChannelCreateReleaseFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateReleaseFlowOutcomeCallable ChannelCreateReleaseFlowCallable(const Model::ChannelCreateReleaseFlowRequest& request);

                /**
                 *将指定印章授权给第三方平台子客企业下的某些员工
                 * @param req ChannelCreateSealPolicyRequest
                 * @return ChannelCreateSealPolicyOutcome
                 */
                ChannelCreateSealPolicyOutcome ChannelCreateSealPolicy(const Model::ChannelCreateSealPolicyRequest &request);
                void ChannelCreateSealPolicyAsync(const Model::ChannelCreateSealPolicyRequest& request, const ChannelCreateSealPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateSealPolicyOutcomeCallable ChannelCreateSealPolicyCallable(const Model::ChannelCreateSealPolicyRequest& request);

                /**
                 *通过此接口，绑定员工角色，支持以电子签userId、客户系统userId两种方式调用。
                 * @param req ChannelCreateUserRolesRequest
                 * @return ChannelCreateUserRolesOutcome
                 */
                ChannelCreateUserRolesOutcome ChannelCreateUserRoles(const Model::ChannelCreateUserRolesRequest &request);
                void ChannelCreateUserRolesAsync(const Model::ChannelCreateUserRolesRequest& request, const ChannelCreateUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateUserRolesOutcomeCallable ChannelCreateUserRolesCallable(const Model::ChannelCreateUserRolesRequest& request);

                /**
                 *通过此接口，删除员工绑定的角色，支持以电子签userId、客户系统userId两种方式调用。
                 * @param req ChannelDeleteRoleUsersRequest
                 * @return ChannelDeleteRoleUsersOutcome
                 */
                ChannelDeleteRoleUsersOutcome ChannelDeleteRoleUsers(const Model::ChannelDeleteRoleUsersRequest &request);
                void ChannelDeleteRoleUsersAsync(const Model::ChannelDeleteRoleUsersRequest& request, const ChannelDeleteRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDeleteRoleUsersOutcomeCallable ChannelDeleteRoleUsersCallable(const Model::ChannelDeleteRoleUsersRequest& request);

                /**
                 *删除指定印章下多个授权信息
                 * @param req ChannelDeleteSealPoliciesRequest
                 * @return ChannelDeleteSealPoliciesOutcome
                 */
                ChannelDeleteSealPoliciesOutcome ChannelDeleteSealPolicies(const Model::ChannelDeleteSealPoliciesRequest &request);
                void ChannelDeleteSealPoliciesAsync(const Model::ChannelDeleteSealPoliciesRequest& request, const ChannelDeleteSealPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDeleteSealPoliciesOutcomeCallable ChannelDeleteSealPoliciesCallable(const Model::ChannelDeleteSealPoliciesRequest& request);

                /**
                 *查询企业员工列表
                 * @param req ChannelDescribeEmployeesRequest
                 * @return ChannelDescribeEmployeesOutcome
                 */
                ChannelDescribeEmployeesOutcome ChannelDescribeEmployees(const Model::ChannelDescribeEmployeesRequest &request);
                void ChannelDescribeEmployeesAsync(const Model::ChannelDescribeEmployeesRequest& request, const ChannelDescribeEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeEmployeesOutcomeCallable ChannelDescribeEmployeesCallable(const Model::ChannelDescribeEmployeesRequest& request);

                /**
                 *查询子客企业电子印章，需要操作者具有管理印章权限
客户指定需要获取的印章数量和偏移量，数量最多100，超过100按100处理；入参InfoType控制印章是否携带授权人信息，为1则携带，为0则返回的授权人信息为空数组。接口调用成功返回印章的信息列表还有企业印章的总数。
                 * @param req ChannelDescribeOrganizationSealsRequest
                 * @return ChannelDescribeOrganizationSealsOutcome
                 */
                ChannelDescribeOrganizationSealsOutcome ChannelDescribeOrganizationSeals(const Model::ChannelDescribeOrganizationSealsRequest &request);
                void ChannelDescribeOrganizationSealsAsync(const Model::ChannelDescribeOrganizationSealsRequest& request, const ChannelDescribeOrganizationSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeOrganizationSealsOutcomeCallable ChannelDescribeOrganizationSealsCallable(const Model::ChannelDescribeOrganizationSealsRequest& request);

                /**
                 *查询用户角色
                 * @param req ChannelDescribeRolesRequest
                 * @return ChannelDescribeRolesOutcome
                 */
                ChannelDescribeRolesOutcome ChannelDescribeRoles(const Model::ChannelDescribeRolesRequest &request);
                void ChannelDescribeRolesAsync(const Model::ChannelDescribeRolesRequest& request, const ChannelDescribeRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeRolesOutcomeCallable ChannelDescribeRolesCallable(const Model::ChannelDescribeRolesRequest& request);

                /**
                 *通过发起转换任务接口（ChannelCreateConvertTaskApi）返回的任务Id查询转换任务状态，通过本接口确认转换任务是否完成。大文件转换所需的时间可能会比较长。
                 * @param req ChannelGetTaskResultApiRequest
                 * @return ChannelGetTaskResultApiOutcome
                 */
                ChannelGetTaskResultApiOutcome ChannelGetTaskResultApi(const Model::ChannelGetTaskResultApiRequest &request);
                void ChannelGetTaskResultApiAsync(const Model::ChannelGetTaskResultApiRequest& request, const ChannelGetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelGetTaskResultApiOutcomeCallable ChannelGetTaskResultApiCallable(const Model::ChannelGetTaskResultApiRequest& request);

                /**
                 *本接口（ChannelUpdateSealStatus）用于第三方应用平台为子客企业更新印章状态
                 * @param req ChannelUpdateSealStatusRequest
                 * @return ChannelUpdateSealStatusOutcome
                 */
                ChannelUpdateSealStatusOutcome ChannelUpdateSealStatus(const Model::ChannelUpdateSealStatusRequest &request);
                void ChannelUpdateSealStatusAsync(const Model::ChannelUpdateSealStatusRequest& request, const ChannelUpdateSealStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelUpdateSealStatusOutcomeCallable ChannelUpdateSealStatusCallable(const Model::ChannelUpdateSealStatusRequest& request);

                /**
                 *对流程的合同文件进行验证，判断文件是否合法。
                 * @param req ChannelVerifyPdfRequest
                 * @return ChannelVerifyPdfOutcome
                 */
                ChannelVerifyPdfOutcome ChannelVerifyPdf(const Model::ChannelVerifyPdfRequest &request);
                void ChannelVerifyPdfAsync(const Model::ChannelVerifyPdfRequest& request, const ChannelVerifyPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelVerifyPdfOutcomeCallable ChannelVerifyPdfCallable(const Model::ChannelVerifyPdfRequest& request);

                /**
                 *创建出证报告，返回报告 ID。需要配合出证套餐才能调用。
出证需要一定时间，建议调用创建出证24小时之后再通过DescribeChannelFlowEvidenceReport进行查询。
                 * @param req CreateChannelFlowEvidenceReportRequest
                 * @return CreateChannelFlowEvidenceReportOutcome
                 */
                CreateChannelFlowEvidenceReportOutcome CreateChannelFlowEvidenceReport(const Model::CreateChannelFlowEvidenceReportRequest &request);
                void CreateChannelFlowEvidenceReportAsync(const Model::CreateChannelFlowEvidenceReportRequest& request, const CreateChannelFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelFlowEvidenceReportOutcomeCallable CreateChannelFlowEvidenceReportCallable(const Model::CreateChannelFlowEvidenceReportRequest& request);

                /**
                 *此接口（CreateConsoleLoginUrl）用于创建第三方平台子客企业控制台Web/移动登录链接。登录链接是子客控制台的唯一入口。
若子客企业未激活，会进入企业激活流程，首次参与激活流程的经办人会成为超管。（若企业激活过程中填写信息有误，需要重置激活流程，可以换一个经办人OpenId获取新的链接进入。）
若子客企业已激活，使用了新的经办人OpenId进入，则会进入经办人的实名流程。
若子客企业、经办人均已完成认证，则会直接进入子客Web控制台。
                 * @param req CreateConsoleLoginUrlRequest
                 * @return CreateConsoleLoginUrlOutcome
                 */
                CreateConsoleLoginUrlOutcome CreateConsoleLoginUrl(const Model::CreateConsoleLoginUrlRequest &request);
                void CreateConsoleLoginUrlAsync(const Model::CreateConsoleLoginUrlRequest& request, const CreateConsoleLoginUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsoleLoginUrlOutcomeCallable CreateConsoleLoginUrlCallable(const Model::CreateConsoleLoginUrlRequest& request);

                /**
                 *接口（CreateFlowsByTemplates）用于使用模板批量创建签署流程。当前可批量发起合同（签署流程）数量为1-20个。
如若在模板中配置了动态表格, 上传的附件必须为A4大小
合同发起人必须在电子签已经进行实名。
                 * @param req CreateFlowsByTemplatesRequest
                 * @return CreateFlowsByTemplatesOutcome
                 */
                CreateFlowsByTemplatesOutcome CreateFlowsByTemplates(const Model::CreateFlowsByTemplatesRequest &request);
                void CreateFlowsByTemplatesAsync(const Model::CreateFlowsByTemplatesRequest& request, const CreateFlowsByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowsByTemplatesOutcomeCallable CreateFlowsByTemplatesCallable(const Model::CreateFlowsByTemplatesRequest& request);

                /**
                 *通过图片为子客企业代创建印章，图片最大5MB
                 * @param req CreateSealByImageRequest
                 * @return CreateSealByImageOutcome
                 */
                CreateSealByImageOutcome CreateSealByImage(const Model::CreateSealByImageRequest &request);
                void CreateSealByImageAsync(const Model::CreateSealByImageRequest& request, const CreateSealByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSealByImageOutcomeCallable CreateSealByImageCallable(const Model::CreateSealByImageRequest& request);

                /**
                 *创建跳转小程序查看或签署的链接。

跳转小程序的几种方式：主要是设置不同的EndPoint
1. 通过链接Url直接跳转到小程序，不需要返回
设置EndPoint为WEIXINAPP，得到链接打开即可。（与短信提醒用户签署形式一样）。

2. 通过链接Url打开H5引导页-->点击跳转到小程序-->签署完退出小程序-->回到H5引导页-->跳转到指定JumpUrl
设置EndPoint为CHANNEL，指定JumpUrl，得到链接打开即可。

3. 客户App直接跳转到小程序-->小程序签署完成-->返回App
跳转到小程序的实现，参考官方文档
https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/launchApp.html
其中小程序的原始Id，请联系<对接技术人员>获取，或者查看小程序信息自助获取。
使用CreateSignUrls，设置EndPoint为APP，得到path。

4. 客户小程序直接跳到电子签小程序-->签署完成退出电子签小程序-->回到客户小程序
跳转到小程序的实现，参考官方文档（分为全屏、半屏两种方式）
全屏方式：
（https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html）
半屏方式：
（https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html）
其中小程序的原始Id，请联系<对接技术人员>获取，或者查看小程序信息自助获取。
使用CreateSignUrls，设置EndPoint为APP，得到path。
                 * @param req CreateSignUrlsRequest
                 * @return CreateSignUrlsOutcome
                 */
                CreateSignUrlsOutcome CreateSignUrls(const Model::CreateSignUrlsRequest &request);
                void CreateSignUrlsAsync(const Model::CreateSignUrlsRequest& request, const CreateSignUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSignUrlsOutcomeCallable CreateSignUrlsCallable(const Model::CreateSignUrlsRequest& request);

                /**
                 *查询出证报告，返回报告 URL。
                 * @param req DescribeChannelFlowEvidenceReportRequest
                 * @return DescribeChannelFlowEvidenceReportOutcome
                 */
                DescribeChannelFlowEvidenceReportOutcome DescribeChannelFlowEvidenceReport(const Model::DescribeChannelFlowEvidenceReportRequest &request);
                void DescribeChannelFlowEvidenceReportAsync(const Model::DescribeChannelFlowEvidenceReportRequest& request, const DescribeChannelFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelFlowEvidenceReportOutcomeCallable DescribeChannelFlowEvidenceReportCallable(const Model::DescribeChannelFlowEvidenceReportRequest& request);

                /**
                 *查询企业扩展服务授权信息，企业经办人需要是企业超管或者法人
                 * @param req DescribeExtendedServiceAuthInfoRequest
                 * @return DescribeExtendedServiceAuthInfoOutcome
                 */
                DescribeExtendedServiceAuthInfoOutcome DescribeExtendedServiceAuthInfo(const Model::DescribeExtendedServiceAuthInfoRequest &request);
                void DescribeExtendedServiceAuthInfoAsync(const Model::DescribeExtendedServiceAuthInfoRequest& request, const DescribeExtendedServiceAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtendedServiceAuthInfoOutcomeCallable DescribeExtendedServiceAuthInfoCallable(const Model::DescribeExtendedServiceAuthInfoRequest& request);

                /**
                 *此接口（DescribeFlowDetailInfo）用于查询合同(签署流程)的详细信息。
                 * @param req DescribeFlowDetailInfoRequest
                 * @return DescribeFlowDetailInfoOutcome
                 */
                DescribeFlowDetailInfoOutcome DescribeFlowDetailInfo(const Model::DescribeFlowDetailInfoRequest &request);
                void DescribeFlowDetailInfoAsync(const Model::DescribeFlowDetailInfoRequest& request, const DescribeFlowDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowDetailInfoOutcomeCallable DescribeFlowDetailInfoCallable(const Model::DescribeFlowDetailInfoRequest& request);

                /**
                 *根据签署流程信息批量获取资源下载链接，可以下载签署中、签署完的合同，需合作企业先进行授权。
此接口直接返回下载的资源的url，与接口GetDownloadFlowUrl跳转到控制台的下载方式不同。
                 * @param req DescribeResourceUrlsByFlowsRequest
                 * @return DescribeResourceUrlsByFlowsOutcome
                 */
                DescribeResourceUrlsByFlowsOutcome DescribeResourceUrlsByFlows(const Model::DescribeResourceUrlsByFlowsRequest &request);
                void DescribeResourceUrlsByFlowsAsync(const Model::DescribeResourceUrlsByFlowsRequest& request, const DescribeResourceUrlsByFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUrlsByFlowsOutcomeCallable DescribeResourceUrlsByFlowsCallable(const Model::DescribeResourceUrlsByFlowsRequest& request);

                /**
                 *通过此接口（DescribeTemplates）查询该第三方平台子客企业在电子签拥有的有效模板，不包括第三方平台模板
                 * @param req DescribeTemplatesRequest
                 * @return DescribeTemplatesOutcome
                 */
                DescribeTemplatesOutcome DescribeTemplates(const Model::DescribeTemplatesRequest &request);
                void DescribeTemplatesAsync(const Model::DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplatesOutcomeCallable DescribeTemplatesCallable(const Model::DescribeTemplatesRequest& request);

                /**
                 *此接口（DescribeUsage）用于获取第三方平台所有合作企业流量消耗情况。
 注: 此接口每日限频2次，若要扩大限制次数,请提前与客服经理或邮件至e-contract@tencent.com进行联系。
                 * @param req DescribeUsageRequest
                 * @return DescribeUsageOutcome
                 */
                DescribeUsageOutcome DescribeUsage(const Model::DescribeUsageRequest &request);
                void DescribeUsageAsync(const Model::DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageOutcomeCallable DescribeUsageCallable(const Model::DescribeUsageRequest& request);

                /**
                 *此接口（GetDownloadFlowUrl）用于创建电子签批量下载地址，让合作企业进入控制台直接下载，支持客户合同（流程）按照自定义文件夹形式 分类下载。
当前接口限制最多合同（流程）50个.
返回的链接只能使用一次
                 * @param req GetDownloadFlowUrlRequest
                 * @return GetDownloadFlowUrlOutcome
                 */
                GetDownloadFlowUrlOutcome GetDownloadFlowUrl(const Model::GetDownloadFlowUrlRequest &request);
                void GetDownloadFlowUrlAsync(const Model::GetDownloadFlowUrlRequest& request, const GetDownloadFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDownloadFlowUrlOutcomeCallable GetDownloadFlowUrlCallable(const Model::GetDownloadFlowUrlRequest& request);

                /**
                 *修改（操作）企业扩展服务 ，企业经办人需要是企业超管或者法人
                 * @param req ModifyExtendedServiceRequest
                 * @return ModifyExtendedServiceOutcome
                 */
                ModifyExtendedServiceOutcome ModifyExtendedService(const Model::ModifyExtendedServiceRequest &request);
                void ModifyExtendedServiceAsync(const Model::ModifyExtendedServiceRequest& request, const ModifyExtendedServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExtendedServiceOutcomeCallable ModifyExtendedServiceCallable(const Model::ModifyExtendedServiceRequest& request);

                /**
                 *此接口（OperateChannelTemplate）用于针对第三方应用平台模板库中的模板对子客企业可见性的查询和设置，不会直接分配第三方应用平台模板给子客企业。
1、OperateType=select时：
查询第三方应用平台模板库
2、OperateType=update或者delete时：
对子客企业进行模板库中模板可见性的修改、删除操作。
                 * @param req OperateChannelTemplateRequest
                 * @return OperateChannelTemplateOutcome
                 */
                OperateChannelTemplateOutcome OperateChannelTemplate(const Model::OperateChannelTemplateRequest &request);
                void OperateChannelTemplateAsync(const Model::OperateChannelTemplateRequest& request, const OperateChannelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateChannelTemplateOutcomeCallable OperateChannelTemplateCallable(const Model::OperateChannelTemplateRequest& request);

                /**
                 *该接口 (PrepareFlows) 用于创建待发起文件
用户通过该接口进入签署流程发起的确认页面，进行发起信息二次确认， 如果确认则进行正常发起。
目前该接口只支持B2C，不建议使用，将会废弃。
                 * @param req PrepareFlowsRequest
                 * @return PrepareFlowsOutcome
                 */
                PrepareFlowsOutcome PrepareFlows(const Model::PrepareFlowsRequest &request);
                void PrepareFlowsAsync(const Model::PrepareFlowsRequest& request, const PrepareFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PrepareFlowsOutcomeCallable PrepareFlowsCallable(const Model::PrepareFlowsRequest& request);

                /**
                 *此接口（SyncProxyOrganization）用于同步第三方平台子客企业信息，主要是子客企业的营业执照，便于子客企业开通过程中不用手动上传。若有需要调用此接口，需要在创建控制链接CreateConsoleLoginUrl之后即刻进行调用。
                 * @param req SyncProxyOrganizationRequest
                 * @return SyncProxyOrganizationOutcome
                 */
                SyncProxyOrganizationOutcome SyncProxyOrganization(const Model::SyncProxyOrganizationRequest &request);
                void SyncProxyOrganizationAsync(const Model::SyncProxyOrganizationRequest& request, const SyncProxyOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncProxyOrganizationOutcomeCallable SyncProxyOrganizationCallable(const Model::SyncProxyOrganizationRequest& request);

                /**
                 *此接口（SyncProxyOrganizationOperators）用于同步 第三方平台子客企业经办人列表，主要是同步经办人的离职状态。子客Web控制台的组织架构管理，是依赖于第三方应用平台的，无法针对员工做新增/更新/离职等操作。 
若经办人信息有误，或者需要修改，也可以先将之前的经办人做离职操作，然后重新使用控制台链接CreateConsoleLoginUrl让经办人重新实名。
                 * @param req SyncProxyOrganizationOperatorsRequest
                 * @return SyncProxyOrganizationOperatorsOutcome
                 */
                SyncProxyOrganizationOperatorsOutcome SyncProxyOrganizationOperators(const Model::SyncProxyOrganizationOperatorsRequest &request);
                void SyncProxyOrganizationOperatorsAsync(const Model::SyncProxyOrganizationOperatorsRequest& request, const SyncProxyOrganizationOperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncProxyOrganizationOperatorsOutcomeCallable SyncProxyOrganizationOperatorsCallable(const Model::SyncProxyOrganizationOperatorsRequest& request);

                /**
                 *此接口（UploadFiles）用于文件上传。
其中上传的文件，图片类型(png/jpg/jpeg)大小限制为5M，其他大小限制为60M。
调用时需要设置Domain, 正式环境为 file.ess.tencent.cn。
代码示例：
HttpProfile httpProfile = new HttpProfile();
httpProfile.setEndpoint("file.test.ess.tencent.cn");
                 * @param req UploadFilesRequest
                 * @return UploadFilesOutcome
                 */
                UploadFilesOutcome UploadFiles(const Model::UploadFilesRequest &request);
                void UploadFilesAsync(const Model::UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFilesOutcomeCallable UploadFilesCallable(const Model::UploadFilesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_ESSBASICCLIENT_H_
