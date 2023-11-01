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
#include <tencentcloud/essbasic/v20210526/model/ChannelCancelUserAutoSignEnableUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCancelUserAutoSignEnableUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchCancelFlowUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchCancelFlowUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchQuickSignUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchQuickSignUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchSignUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchSignUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBoundFlowsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBoundFlowsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateConvertTaskApiRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateConvertTaskApiResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateEmbedWebUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateEmbedWebUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowApproversRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowApproversResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowByFilesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowByFilesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowGroupByFilesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowGroupByFilesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowGroupByTemplatesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowGroupByTemplatesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowRemindsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowRemindsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignReviewRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignReviewResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowSignUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateOrganizationBatchSignUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateOrganizationBatchSignUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateOrganizationModifyQrCodeRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateOrganizationModifyQrCodeResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePrepareFlowRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePrepareFlowResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePreparedPersonalEsignRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePreparedPersonalEsignResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateReleaseFlowRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateReleaseFlowResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateRoleRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateRoleResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateSealPolicyRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateSealPolicyResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserAutoSignEnableUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserAutoSignEnableUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserAutoSignSealUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserAutoSignSealUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserRolesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateUserRolesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateWebThemeConfigRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateWebThemeConfigResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteRoleRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteRoleResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteRoleUsersRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteRoleUsersResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteSealPoliciesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDeleteSealPoliciesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeEmployeesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeEmployeesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeFlowComponentsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeFlowComponentsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeOrganizationSealsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeOrganizationSealsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeRolesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeRolesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeUserAutoSignStatusRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeUserAutoSignStatusResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDisableUserAutoSignRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDisableUserAutoSignResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelGetTaskResultApiRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelGetTaskResultApiResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelModifyRoleRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelModifyRoleResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelUpdateSealStatusRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelUpdateSealStatusResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelVerifyPdfRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelVerifyPdfResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelFlowEvidenceReportRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelFlowEvidenceReportResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelOrganizationInfoChangeUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelOrganizationInfoChangeUrlResponse.h>
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
                typedef Outcome<Core::Error, Model::ChannelCancelUserAutoSignEnableUrlResponse> ChannelCancelUserAutoSignEnableUrlOutcome;
                typedef std::future<ChannelCancelUserAutoSignEnableUrlOutcome> ChannelCancelUserAutoSignEnableUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCancelUserAutoSignEnableUrlRequest&, ChannelCancelUserAutoSignEnableUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCancelUserAutoSignEnableUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateBatchCancelFlowUrlResponse> ChannelCreateBatchCancelFlowUrlOutcome;
                typedef std::future<ChannelCreateBatchCancelFlowUrlOutcome> ChannelCreateBatchCancelFlowUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateBatchCancelFlowUrlRequest&, ChannelCreateBatchCancelFlowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateBatchCancelFlowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateBatchQuickSignUrlResponse> ChannelCreateBatchQuickSignUrlOutcome;
                typedef std::future<ChannelCreateBatchQuickSignUrlOutcome> ChannelCreateBatchQuickSignUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateBatchQuickSignUrlRequest&, ChannelCreateBatchQuickSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateBatchQuickSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateBatchSignUrlResponse> ChannelCreateBatchSignUrlOutcome;
                typedef std::future<ChannelCreateBatchSignUrlOutcome> ChannelCreateBatchSignUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateBatchSignUrlRequest&, ChannelCreateBatchSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateBatchSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateBoundFlowsResponse> ChannelCreateBoundFlowsOutcome;
                typedef std::future<ChannelCreateBoundFlowsOutcome> ChannelCreateBoundFlowsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateBoundFlowsRequest&, ChannelCreateBoundFlowsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateBoundFlowsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateConvertTaskApiResponse> ChannelCreateConvertTaskApiOutcome;
                typedef std::future<ChannelCreateConvertTaskApiOutcome> ChannelCreateConvertTaskApiOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateConvertTaskApiRequest&, ChannelCreateConvertTaskApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateConvertTaskApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateEmbedWebUrlResponse> ChannelCreateEmbedWebUrlOutcome;
                typedef std::future<ChannelCreateEmbedWebUrlOutcome> ChannelCreateEmbedWebUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateEmbedWebUrlRequest&, ChannelCreateEmbedWebUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateEmbedWebUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowApproversResponse> ChannelCreateFlowApproversOutcome;
                typedef std::future<ChannelCreateFlowApproversOutcome> ChannelCreateFlowApproversOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowApproversRequest&, ChannelCreateFlowApproversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowApproversAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowByFilesResponse> ChannelCreateFlowByFilesOutcome;
                typedef std::future<ChannelCreateFlowByFilesOutcome> ChannelCreateFlowByFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowByFilesRequest&, ChannelCreateFlowByFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowByFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowGroupByFilesResponse> ChannelCreateFlowGroupByFilesOutcome;
                typedef std::future<ChannelCreateFlowGroupByFilesOutcome> ChannelCreateFlowGroupByFilesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowGroupByFilesRequest&, ChannelCreateFlowGroupByFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowGroupByFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateFlowGroupByTemplatesResponse> ChannelCreateFlowGroupByTemplatesOutcome;
                typedef std::future<ChannelCreateFlowGroupByTemplatesOutcome> ChannelCreateFlowGroupByTemplatesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateFlowGroupByTemplatesRequest&, ChannelCreateFlowGroupByTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateFlowGroupByTemplatesAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ChannelCreateOrganizationBatchSignUrlResponse> ChannelCreateOrganizationBatchSignUrlOutcome;
                typedef std::future<ChannelCreateOrganizationBatchSignUrlOutcome> ChannelCreateOrganizationBatchSignUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateOrganizationBatchSignUrlRequest&, ChannelCreateOrganizationBatchSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateOrganizationBatchSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateOrganizationModifyQrCodeResponse> ChannelCreateOrganizationModifyQrCodeOutcome;
                typedef std::future<ChannelCreateOrganizationModifyQrCodeOutcome> ChannelCreateOrganizationModifyQrCodeOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateOrganizationModifyQrCodeRequest&, ChannelCreateOrganizationModifyQrCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateOrganizationModifyQrCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreatePrepareFlowResponse> ChannelCreatePrepareFlowOutcome;
                typedef std::future<ChannelCreatePrepareFlowOutcome> ChannelCreatePrepareFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreatePrepareFlowRequest&, ChannelCreatePrepareFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreatePrepareFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreatePreparedPersonalEsignResponse> ChannelCreatePreparedPersonalEsignOutcome;
                typedef std::future<ChannelCreatePreparedPersonalEsignOutcome> ChannelCreatePreparedPersonalEsignOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreatePreparedPersonalEsignRequest&, ChannelCreatePreparedPersonalEsignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreatePreparedPersonalEsignAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateReleaseFlowResponse> ChannelCreateReleaseFlowOutcome;
                typedef std::future<ChannelCreateReleaseFlowOutcome> ChannelCreateReleaseFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateReleaseFlowRequest&, ChannelCreateReleaseFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateReleaseFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateRoleResponse> ChannelCreateRoleOutcome;
                typedef std::future<ChannelCreateRoleOutcome> ChannelCreateRoleOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateRoleRequest&, ChannelCreateRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateSealPolicyResponse> ChannelCreateSealPolicyOutcome;
                typedef std::future<ChannelCreateSealPolicyOutcome> ChannelCreateSealPolicyOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateSealPolicyRequest&, ChannelCreateSealPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateSealPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateUserAutoSignEnableUrlResponse> ChannelCreateUserAutoSignEnableUrlOutcome;
                typedef std::future<ChannelCreateUserAutoSignEnableUrlOutcome> ChannelCreateUserAutoSignEnableUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateUserAutoSignEnableUrlRequest&, ChannelCreateUserAutoSignEnableUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateUserAutoSignEnableUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateUserAutoSignSealUrlResponse> ChannelCreateUserAutoSignSealUrlOutcome;
                typedef std::future<ChannelCreateUserAutoSignSealUrlOutcome> ChannelCreateUserAutoSignSealUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateUserAutoSignSealUrlRequest&, ChannelCreateUserAutoSignSealUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateUserAutoSignSealUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateUserRolesResponse> ChannelCreateUserRolesOutcome;
                typedef std::future<ChannelCreateUserRolesOutcome> ChannelCreateUserRolesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateUserRolesRequest&, ChannelCreateUserRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateUserRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelCreateWebThemeConfigResponse> ChannelCreateWebThemeConfigOutcome;
                typedef std::future<ChannelCreateWebThemeConfigOutcome> ChannelCreateWebThemeConfigOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateWebThemeConfigRequest&, ChannelCreateWebThemeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateWebThemeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDeleteRoleResponse> ChannelDeleteRoleOutcome;
                typedef std::future<ChannelDeleteRoleOutcome> ChannelDeleteRoleOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDeleteRoleRequest&, ChannelDeleteRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDeleteRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDeleteRoleUsersResponse> ChannelDeleteRoleUsersOutcome;
                typedef std::future<ChannelDeleteRoleUsersOutcome> ChannelDeleteRoleUsersOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDeleteRoleUsersRequest&, ChannelDeleteRoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDeleteRoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDeleteSealPoliciesResponse> ChannelDeleteSealPoliciesOutcome;
                typedef std::future<ChannelDeleteSealPoliciesOutcome> ChannelDeleteSealPoliciesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDeleteSealPoliciesRequest&, ChannelDeleteSealPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDeleteSealPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDescribeEmployeesResponse> ChannelDescribeEmployeesOutcome;
                typedef std::future<ChannelDescribeEmployeesOutcome> ChannelDescribeEmployeesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeEmployeesRequest&, ChannelDescribeEmployeesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeEmployeesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDescribeFlowComponentsResponse> ChannelDescribeFlowComponentsOutcome;
                typedef std::future<ChannelDescribeFlowComponentsOutcome> ChannelDescribeFlowComponentsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeFlowComponentsRequest&, ChannelDescribeFlowComponentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeFlowComponentsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDescribeOrganizationSealsResponse> ChannelDescribeOrganizationSealsOutcome;
                typedef std::future<ChannelDescribeOrganizationSealsOutcome> ChannelDescribeOrganizationSealsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeOrganizationSealsRequest&, ChannelDescribeOrganizationSealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeOrganizationSealsAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDescribeRolesResponse> ChannelDescribeRolesOutcome;
                typedef std::future<ChannelDescribeRolesOutcome> ChannelDescribeRolesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeRolesRequest&, ChannelDescribeRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDescribeUserAutoSignStatusResponse> ChannelDescribeUserAutoSignStatusOutcome;
                typedef std::future<ChannelDescribeUserAutoSignStatusOutcome> ChannelDescribeUserAutoSignStatusOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeUserAutoSignStatusRequest&, ChannelDescribeUserAutoSignStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeUserAutoSignStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDisableUserAutoSignResponse> ChannelDisableUserAutoSignOutcome;
                typedef std::future<ChannelDisableUserAutoSignOutcome> ChannelDisableUserAutoSignOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDisableUserAutoSignRequest&, ChannelDisableUserAutoSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDisableUserAutoSignAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelGetTaskResultApiResponse> ChannelGetTaskResultApiOutcome;
                typedef std::future<ChannelGetTaskResultApiOutcome> ChannelGetTaskResultApiOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelGetTaskResultApiRequest&, ChannelGetTaskResultApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelGetTaskResultApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelModifyRoleResponse> ChannelModifyRoleOutcome;
                typedef std::future<ChannelModifyRoleOutcome> ChannelModifyRoleOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelModifyRoleRequest&, ChannelModifyRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelModifyRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelUpdateSealStatusResponse> ChannelUpdateSealStatusOutcome;
                typedef std::future<ChannelUpdateSealStatusOutcome> ChannelUpdateSealStatusOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelUpdateSealStatusRequest&, ChannelUpdateSealStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelUpdateSealStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelVerifyPdfResponse> ChannelVerifyPdfOutcome;
                typedef std::future<ChannelVerifyPdfOutcome> ChannelVerifyPdfOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelVerifyPdfRequest&, ChannelVerifyPdfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelVerifyPdfAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChannelFlowEvidenceReportResponse> CreateChannelFlowEvidenceReportOutcome;
                typedef std::future<CreateChannelFlowEvidenceReportOutcome> CreateChannelFlowEvidenceReportOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateChannelFlowEvidenceReportRequest&, CreateChannelFlowEvidenceReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelFlowEvidenceReportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChannelOrganizationInfoChangeUrlResponse> CreateChannelOrganizationInfoChangeUrlOutcome;
                typedef std::future<CreateChannelOrganizationInfoChangeUrlOutcome> CreateChannelOrganizationInfoChangeUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateChannelOrganizationInfoChangeUrlRequest&, CreateChannelOrganizationInfoChangeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelOrganizationInfoChangeUrlAsyncHandler;
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
                 *用于批量撤销合同流程<br/>
适用场景：
如果某些合同流程当前至少还有一方没有签署，则可通过该接口取消该合同流程。常用于合同发错、内容填错，需要及时撤销的场景。<br/>
通过签署流程编号批量撤销合同，单次最多支持撤销100份合同。只有合同的发起人或者发起方企业的超管/法人才能进行合同撤销。需要注意的是，若合同处于以下已终止状态，则不可撤销：<br/>
- 已全部签署完成
- 已拒签
- 已过期
- 已撤回
- 拒绝填写
- 已解除

<br/>
满足撤销条件的合同会发起异步撤销流程，而不满足撤销条件的合同将返回失败原因。合同撤销成功后，会通过合同状态为 CANCEL 的回调消息通知调用方。具体的回调消息内容可参考 <a href="https://qian.tencent.com/developers/partner/callback_types_contracts_sign" target="_blank">合同状态变更回调消息</a>。
<br/><br/>
注:
`如果合同流程中的参与方均已签署完毕，则无法通过该接口撤销合同，`签署完毕的合同需要双方走解除流程将合同作废，可以参考<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateReleaseFlow" target="_blank">发起解除合同流程</a>接口。
                 * @param req ChannelBatchCancelFlowsRequest
                 * @return ChannelBatchCancelFlowsOutcome
                 */
                ChannelBatchCancelFlowsOutcome ChannelBatchCancelFlows(const Model::ChannelBatchCancelFlowsRequest &request);
                void ChannelBatchCancelFlowsAsync(const Model::ChannelBatchCancelFlowsRequest& request, const ChannelBatchCancelFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelBatchCancelFlowsOutcomeCallable ChannelBatchCancelFlowsCallable(const Model::ChannelBatchCancelFlowsRequest& request);

                /**
                 *撤销签署流程接口

适用场景：如果某个合同流程当前至少还有一方没有签署，则可通过该接口取消该合同流程。常用于合同发错、内容填错，需要及时撤销的场景。
<ul><li> `可撤回合同状态` ：未全部签署完成</li>
<li> `不撤回合同状态` ：已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等合同状态。</li></ul>
注:
<ul><li>能撤回合同的只能是 `合同的发起人或者发起方企业的超管、法人`  </li>
<li>签署完毕的合同需要双方走解除流程将合同作废，可以参考<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateReleaseFlow" target="_blank">发起解除合同流程接口</a>。</li></ul>
                 * @param req ChannelCancelFlowRequest
                 * @return ChannelCancelFlowOutcome
                 */
                ChannelCancelFlowOutcome ChannelCancelFlow(const Model::ChannelCancelFlowRequest &request);
                void ChannelCancelFlowAsync(const Model::ChannelCancelFlowRequest& request, const ChannelCancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCancelFlowOutcomeCallable ChannelCancelFlowCallable(const Model::ChannelCancelFlowRequest& request);

                /**
                 *此接口（CancelMultiFlowSignQRCode）用于废除一码多扫流程签署二维码。
该接口所需的二维码ID，源自[创建一码多扫流程签署二维码](https://qian.tencent.com/developers/partnerApis/templates/ChannelCreateMultiFlowSignQRCode)生成的。
如果该二维码尚处于有效期内，可通过本接口将其设置为失效状态。
                 * @param req ChannelCancelMultiFlowSignQRCodeRequest
                 * @return ChannelCancelMultiFlowSignQRCodeOutcome
                 */
                ChannelCancelMultiFlowSignQRCodeOutcome ChannelCancelMultiFlowSignQRCode(const Model::ChannelCancelMultiFlowSignQRCodeRequest &request);
                void ChannelCancelMultiFlowSignQRCodeAsync(const Model::ChannelCancelMultiFlowSignQRCodeRequest& request, const ChannelCancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCancelMultiFlowSignQRCodeOutcomeCallable ChannelCancelMultiFlowSignQRCodeCallable(const Model::ChannelCancelMultiFlowSignQRCodeRequest& request);

                /**
                 *此接口（ChannelCancelUserAutoSignEnableUrl）用来撤销发送给个人用户的自动签开通链接，撤销后对应的个人用户开通链接失效。若个人用户已经完成开通，将无法撤销。（处方单场景专用，使用此接口请与客户经理确认）
                 * @param req ChannelCancelUserAutoSignEnableUrlRequest
                 * @return ChannelCancelUserAutoSignEnableUrlOutcome
                 */
                ChannelCancelUserAutoSignEnableUrlOutcome ChannelCancelUserAutoSignEnableUrl(const Model::ChannelCancelUserAutoSignEnableUrlRequest &request);
                void ChannelCancelUserAutoSignEnableUrlAsync(const Model::ChannelCancelUserAutoSignEnableUrlRequest& request, const ChannelCancelUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCancelUserAutoSignEnableUrlOutcomeCallable ChannelCancelUserAutoSignEnableUrlCallable(const Model::ChannelCancelUserAutoSignEnableUrlRequest& request);

                /**
                 *指定需要批量撤销的签署流程Id，获取批量撤销链接 - 不建议使用此接口，可使用ChannelBatchCancelFlows
客户指定需要撤销的签署流程Id，最多100个，超过100不处理；
接口调用成功返回批量撤销合同的链接，通过链接跳转到电子签小程序完成批量撤销;

可以撤回：未全部签署完成
 不可以撤回：已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等合同状态。

注意:
能撤回合同的只能是合同的发起人或者发起企业的超管、法人
                 * @param req ChannelCreateBatchCancelFlowUrlRequest
                 * @return ChannelCreateBatchCancelFlowUrlOutcome
                 */
                ChannelCreateBatchCancelFlowUrlOutcome ChannelCreateBatchCancelFlowUrl(const Model::ChannelCreateBatchCancelFlowUrlRequest &request);
                void ChannelCreateBatchCancelFlowUrlAsync(const Model::ChannelCreateBatchCancelFlowUrlRequest& request, const ChannelCreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateBatchCancelFlowUrlOutcomeCallable ChannelCreateBatchCancelFlowUrlCallable(const Model::ChannelCreateBatchCancelFlowUrlRequest& request);

                /**
                 *该接口用于发起合同后，生成个人用户的批量签署链接, 暂时不支持企业端签署 <br/>
`注意：`<br/>
`1. 该接口目前仅支持签署人类型是个人签署方的批量签署场景(ApproverType=PERSON)。` <br/>
`2. 该接口可生成批量签署链接的C端签署人必须仅有手写签名和时间类型的签署控件，不支持填写控件 。` <br/>
`3. 请确保C端签署人在批量签署合同中为待签署状态，如需顺序签署请待前一位参与人签署完成后，再创建该C端用户的签署链接。` <br/>
`4. 该签署链接有效期为30分钟，过期后将失效，如需签署可重新创建批量签署链接 。` <br/>
`5. 该接口返回的签署链接适用于APP集成的场景，支持APP打开或浏览器直接打开，不支持微信小程序嵌入。`<br/>
跳转到小程序的实现，参考微信官方文档(分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式)，如何配置也可以请参考: <a href="https://qian.tencent.com/developers/company/openwxminiprogram">跳转电子签小程序配置</a>
                 * @param req ChannelCreateBatchQuickSignUrlRequest
                 * @return ChannelCreateBatchQuickSignUrlOutcome
                 */
                ChannelCreateBatchQuickSignUrlOutcome ChannelCreateBatchQuickSignUrl(const Model::ChannelCreateBatchQuickSignUrlRequest &request);
                void ChannelCreateBatchQuickSignUrlAsync(const Model::ChannelCreateBatchQuickSignUrlRequest& request, const ChannelCreateBatchQuickSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateBatchQuickSignUrlOutcomeCallable ChannelCreateBatchQuickSignUrlCallable(const Model::ChannelCreateBatchQuickSignUrlRequest& request);

                /**
                 *通过此接口，创建小程序批量签署链接，个人/企业员工点击此链接即可跳转小程序进行批量签署。
请确保生成链接时候的身份信息和签署合同参与方的信息保持一致。

注：
- 参与人点击链接后需短信验证码才能查看合同内容。
- 企业用户批量签署，需要传OrganizationName（参与方所在企业名称）参数生成签署链接，`请确保此企业已完成腾讯电子签企业认证`。
- 个人批量签署，签名区`仅支持手写签名`。
                 * @param req ChannelCreateBatchSignUrlRequest
                 * @return ChannelCreateBatchSignUrlOutcome
                 */
                ChannelCreateBatchSignUrlOutcome ChannelCreateBatchSignUrl(const Model::ChannelCreateBatchSignUrlRequest &request);
                void ChannelCreateBatchSignUrlAsync(const Model::ChannelCreateBatchSignUrlRequest& request, const ChannelCreateBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateBatchSignUrlOutcomeCallable ChannelCreateBatchSignUrlCallable(const Model::ChannelCreateBatchSignUrlRequest& request);

                /**
                 *此接口（ChannelCreateBoundFlows）用于子客领取合同，经办人需要有相应的角色，合同不能重复领取。
                 * @param req ChannelCreateBoundFlowsRequest
                 * @return ChannelCreateBoundFlowsOutcome
                 */
                ChannelCreateBoundFlowsOutcome ChannelCreateBoundFlows(const Model::ChannelCreateBoundFlowsRequest &request);
                void ChannelCreateBoundFlowsAsync(const Model::ChannelCreateBoundFlowsRequest& request, const ChannelCreateBoundFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateBoundFlowsOutcomeCallable ChannelCreateBoundFlowsCallable(const Model::ChannelCreateBoundFlowsRequest& request);

                /**
                 *此接口（ChannelCreateConvertTaskApi）用来将word、excel、html、图片、txt类型文件转换为PDF文件。<br />
前提条件：源文件已经通过 <a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">文件上传接口</a>完成上传，并得到了源文件的资源Id。<br />
适用场景1：已经上传了一个word文件，希望将该word文件转换成pdf文件后发起合同
适用场景2：已经上传了一个jpg图片文件，希望将该图片文件转换成pdf文件后发起合同<br />
转换文件是一个耗时操作，若想查看转换任务是否完成，可以通过<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelGetTaskResultApi" target="_blank">查询转换任务状态</a>接口获取任务状态。<br />
注: 
1. `支持的文件类型有doc、docx、xls、xlsx、html、jpg、jpeg、png、bmp、txt`
2. `可通过发起合同时设置预览来检查转换文件是否达到预期效果`
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
                 *适用场景：
当通过模板或文件发起合同时，若未指定企业签署人信息，则可调用此接口动态补充签署人。同一签署人只允许补充一人，最终实际签署人取决于谁先领取合同完成签署。

限制条件：
1. 本企业（发起方企业）企业签署人仅支持通过企业名称+姓名+手机号进行补充。
2. 个人签署人仅支持通过姓名+手机号进行补充。
                 * @param req ChannelCreateFlowApproversRequest
                 * @return ChannelCreateFlowApproversOutcome
                 */
                ChannelCreateFlowApproversOutcome ChannelCreateFlowApprovers(const Model::ChannelCreateFlowApproversRequest &request);
                void ChannelCreateFlowApproversAsync(const Model::ChannelCreateFlowApproversRequest& request, const ChannelCreateFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowApproversOutcomeCallable ChannelCreateFlowApproversCallable(const Model::ChannelCreateFlowApproversRequest& request);

                /**
                 *接口（ChannelCreateFlowByFiles）用PDF文件创建签署流程。

适用场景：适用非制式的合同文件签署，开发者有每个签署流程的PDF，可以通过该接口传入完整的PDF文件及流程信息生成待签署的合同流程。

**注**: 
<ul>
<li>此接口静默签(企业自动签)能力为白名单功能，使用前请联系对接的客户经理沟通。</li>
<li>此接口需要依赖<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">文件上传接口</a>生成pdf资源编号（FileIds）进行使用。整体的逻辑如下图</li>
</ul>

![image](https://dyn.ess.tencent.cn/guide/capi/ChannelCreateFlowByFiles.png)

**可以作为发起方和签署方的角色列表**
<table>
<thead>
<tr>
<th>场景编号</th>
<th>可作为发起方类型</th>
<th>可作为签署方的类型</th>
</tr>
</thead>

<tbody>
<tr>
<td>场景一</td>
<td>第三方子企业A员工</td>
<td>第三方子企业A员工</td>
</tr>

<tr>
<td>场景二</td>
<td>第三方子企业A员工</td>
<td>第三方子企业B(不指定经办人)</td>
</tr>

<tr>
<td>场景三</td>
<td>第三方子企业A员工</td>
<td>第三方子企业B员工</td>
</tr>

<tr>
<td>场景四</td>
<td>第三方子企业A员工</td>
<td>个人/自然人</td>
</tr>

<tr>
<td>场景五</td>
<td>第三方子企业A员工</td>
<td>SaaS平台企业员工</td>
</tr>
</tbody>
</table>

**注**: 
`1. 发起合同时候,  作为发起方的第三方子企业A员工的企业和员工必须经过实名, 而作为签署方的第三方子企业A员工/个人/自然人/SaaS平台企业员工/第三方子企业B员工企业中的企业和个人/员工可以未实名`
`2. 不同类型的签署方传参不同, 可以参考开发者中心的FlowApproverInfo结构体说明`
                 * @param req ChannelCreateFlowByFilesRequest
                 * @return ChannelCreateFlowByFilesOutcome
                 */
                ChannelCreateFlowByFilesOutcome ChannelCreateFlowByFiles(const Model::ChannelCreateFlowByFilesRequest &request);
                void ChannelCreateFlowByFilesAsync(const Model::ChannelCreateFlowByFilesRequest& request, const ChannelCreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowByFilesOutcomeCallable ChannelCreateFlowByFilesCallable(const Model::ChannelCreateFlowByFilesRequest& request);

                /**
                 *接口（ChannelCreateFlowGroupByFiles）用于使用 PDF 文件创建合同组签署流程。

合同组是将多个合同签署流程组织在一起，多个合同同时创建，每个签署方得到一个签署链接，`一次完成合同组中多个合同的签署`。合同组的合同`不能拆分一个一个签署`，只能作为一个整体签署。

适用场景：该接口适用于需要一次性完成多份合同签署的情况，多份合同一般具有关联性，用户以目录的形式查看合同。



**注**: 
<ul>
<li>此接口静默签(企业自动签)能力为白名单功能，使用前请联系对接的客户经理沟通。</li>
<li>合同组暂不支持抄送功能</li>
<li>此接口需要依赖<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">文件上传接口</a>生成pdf资源编号（FileIds）进行使用。</li>
</ul>

**可以作为发起方和签署方的角色列表**
<table>
<thead>
<tr>
<th>场景编号</th>
<th>可作为发起方类型</th>
<th>可作为签署方的类型</th>
</tr>
</thead>

<tbody>
<tr>
<td>场景一</td>
<td>第三方子企业A员工</td>
<td>第三方子企业A员工</td>
</tr>

<tr>
<td>场景二</td>
<td>第三方子企业A员工</td>
<td>第三方子企业B(不指定经办人)</td>
</tr>

<tr>
<td>场景三</td>
<td>第三方子企业A员工</td>
<td>第三方子企业B员工</td>
</tr>

<tr>
<td>场景四</td>
<td>第三方子企业A员工</td>
<td>个人/自然人</td>
</tr>

<tr>
<td>场景五</td>
<td>第三方子企业A员工</td>
<td>SaaS平台企业员工</td>
</tr>
</tbody>
</table>

**注**: 
`1. 发起合同时候,  作为发起方的第三方子企业A员工的企业和员工必须经过实名, 而作为签署方的第三方子企业A员工/个人/自然人/SaaS平台企业员工/第三方子企业B员工企业中的企业和个人/员工可以未实名`

`2. 不同类型的签署方传参不同, 可以参考开发者中心的FlowApproverInfo结构体说明`
                 * @param req ChannelCreateFlowGroupByFilesRequest
                 * @return ChannelCreateFlowGroupByFilesOutcome
                 */
                ChannelCreateFlowGroupByFilesOutcome ChannelCreateFlowGroupByFiles(const Model::ChannelCreateFlowGroupByFilesRequest &request);
                void ChannelCreateFlowGroupByFilesAsync(const Model::ChannelCreateFlowGroupByFilesRequest& request, const ChannelCreateFlowGroupByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowGroupByFilesOutcomeCallable ChannelCreateFlowGroupByFilesCallable(const Model::ChannelCreateFlowGroupByFilesRequest& request);

                /**
                 *接口（ChannelCreateFlowGroupByTemplates）用于通过多模板创建合同组签署流程。

合同组是将多个合同签署流程组织在一起，多个合同同时创建，每个签署方得到一个签署链接，`一次完成合同组中多个合同的签署`。合同组的合同`不能拆分一个一个签署`，只能作为一个整体签署。

适用场景：该接口适用于需要一次性完成多份合同签署的情况，多份合同一般具有关联性，用户以目录的形式查看合同。

**注**: 
<ul>
<li>此接口静默签(企业自动签)能力为白名单功能，使用前请联系对接的客户经理沟通。</li>
<li>合同组暂不支持抄送功能</li>
</ul>

**可以作为发起方和签署方的角色列表**
<table>
<thead>
<tr>
<th>场景编号</th>
<th>可作为发起方类型</th>
<th>可作为签署方的类型</th>
</tr>
</thead>

<tbody>
<tr>
<td>场景一</td>
<td>第三方子企业A员工</td>
<td>第三方子企业A员工</td>
</tr>

<tr>
<td>场景二</td>
<td>第三方子企业A员工</td>
<td>第三方子企业B(不指定经办人)</td>
</tr>

<tr>
<td>场景三</td>
<td>第三方子企业A员工</td>
<td>第三方子企业B员工</td>
</tr>

<tr>
<td>场景四</td>
<td>第三方子企业A员工</td>
<td>个人/自然人</td>
</tr>

<tr>
<td>场景五</td>
<td>第三方子企业A员工</td>
<td>SaaS平台企业员工</td>
</tr>
</tbody>
</table>

**注**: 
`1. 发起合同时候,  作为发起方的第三方子企业A员工的企业和员工必须经过实名, 而作为签署方的第三方子企业A员工/个人/自然人/SaaS平台企业员工/第三方子企业B员工企业中的企业和个人/员工可以未实名`

`2. 不同类型的签署方传参不同, 可以参考开发者中心的FlowApproverInfo结构体说明`
                 * @param req ChannelCreateFlowGroupByTemplatesRequest
                 * @return ChannelCreateFlowGroupByTemplatesOutcome
                 */
                ChannelCreateFlowGroupByTemplatesOutcome ChannelCreateFlowGroupByTemplates(const Model::ChannelCreateFlowGroupByTemplatesRequest &request);
                void ChannelCreateFlowGroupByTemplatesAsync(const Model::ChannelCreateFlowGroupByTemplatesRequest& request, const ChannelCreateFlowGroupByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowGroupByTemplatesOutcomeCallable ChannelCreateFlowGroupByTemplatesCallable(const Model::ChannelCreateFlowGroupByTemplatesRequest& request);

                /**
                 *指定需要批量催办的签署流程ID，批量催办合同，最多100个。需要符合以下条件的合同才可被催办：

1. 合同中当前状态为“待签署”的签署人是催办的对象
2. 每个合同只能催办一次

注意：该接口无法直接调用，请联系客户经理申请使用。
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
                 *该接口用于发起合同后，生成C端签署人的签署链接<br/>
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
                 *此接口（ChannelCreateMultiFlowSignQRCode）用于创建一码多扫流程签署二维码。 
适用场景：无需填写签署人信息，可通过模板id生成签署二维码，签署人可通过扫描二维码补充签署信息进行实名签署。
常用于提前不知道签署人的身份信息场景，例如：劳务工招工、大批量员工入职等场景。

**本接口适用于发起方没有填写控件的 B2C或者单C模板**

**若是B2C模板,还要满足以下任意一个条件**

- 模板中配置的签署顺序是无序
- B端企业的签署方式是静默签署
- B端企业是非首位签署

通过一码多扫二维码发起的合同，合同涉及到的回调消息可参考文档[合同发起及签署相关回调
]( https://qian.tencent.com/developers/partner/callback_types_contracts_sign)

用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档[签署二维码相关回调](https://qian.tencent.com/developers/partner/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83)
                 * @param req ChannelCreateMultiFlowSignQRCodeRequest
                 * @return ChannelCreateMultiFlowSignQRCodeOutcome
                 */
                ChannelCreateMultiFlowSignQRCodeOutcome ChannelCreateMultiFlowSignQRCode(const Model::ChannelCreateMultiFlowSignQRCodeRequest &request);
                void ChannelCreateMultiFlowSignQRCodeAsync(const Model::ChannelCreateMultiFlowSignQRCodeRequest& request, const ChannelCreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateMultiFlowSignQRCodeOutcomeCallable ChannelCreateMultiFlowSignQRCodeCallable(const Model::ChannelCreateMultiFlowSignQRCodeRequest& request);

                /**
                 *通过此接口，创建小程序批量签署链接，可以创建企业批量签署链接，员工只需点击链接即可跳转至控制台进行批量签署。

注：
- 员工必须在企业下完成实名认证，且需作为批量签署合同的签署方或者领取方。
- 仅支持传入待签署或者待领取的合同，待填写暂不支持。
- 员工批量签署，支持多种签名方式，包括手写签名、临摹签名、系统签名、个人印章，暂不支持签批控件
                 * @param req ChannelCreateOrganizationBatchSignUrlRequest
                 * @return ChannelCreateOrganizationBatchSignUrlOutcome
                 */
                ChannelCreateOrganizationBatchSignUrlOutcome ChannelCreateOrganizationBatchSignUrl(const Model::ChannelCreateOrganizationBatchSignUrlRequest &request);
                void ChannelCreateOrganizationBatchSignUrlAsync(const Model::ChannelCreateOrganizationBatchSignUrlRequest& request, const ChannelCreateOrganizationBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateOrganizationBatchSignUrlOutcomeCallable ChannelCreateOrganizationBatchSignUrlCallable(const Model::ChannelCreateOrganizationBatchSignUrlRequest& request);

                /**
                 *生成渠道子客编辑企业信息二维码
                 * @param req ChannelCreateOrganizationModifyQrCodeRequest
                 * @return ChannelCreateOrganizationModifyQrCodeOutcome
                 */
                ChannelCreateOrganizationModifyQrCodeOutcome ChannelCreateOrganizationModifyQrCode(const Model::ChannelCreateOrganizationModifyQrCodeRequest &request);
                void ChannelCreateOrganizationModifyQrCodeAsync(const Model::ChannelCreateOrganizationModifyQrCodeRequest& request, const ChannelCreateOrganizationModifyQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateOrganizationModifyQrCodeOutcomeCallable ChannelCreateOrganizationModifyQrCodeCallable(const Model::ChannelCreateOrganizationModifyQrCodeRequest& request);

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
                 *本接口（ChannelCreatePreparedPersonalEsign）用于创建导入个人印章（处方单场景专用，使用此接口请与客户经理确认）。
                 * @param req ChannelCreatePreparedPersonalEsignRequest
                 * @return ChannelCreatePreparedPersonalEsignOutcome
                 */
                ChannelCreatePreparedPersonalEsignOutcome ChannelCreatePreparedPersonalEsign(const Model::ChannelCreatePreparedPersonalEsignRequest &request);
                void ChannelCreatePreparedPersonalEsignAsync(const Model::ChannelCreatePreparedPersonalEsignRequest& request, const ChannelCreatePreparedPersonalEsignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreatePreparedPersonalEsignOutcomeCallable ChannelCreatePreparedPersonalEsignCallable(const Model::ChannelCreatePreparedPersonalEsignRequest& request);

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
                 *此接口（ChannelCreateRole）用来创建企业自定义角色。

适用场景1：创建当前企业的自定义角色，并且创建时不进行权限的设置（PermissionGroups 参数不传），角色中的权限内容可通过接口 ChannelModifyRole 完成更新。

适用场景2：创建当前企业的自定义角色，并且创建时进行权限的设置（PermissionGroups 参数要传），权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles 的输出。此处注意权限树内容可能会更新，需尽量拉取最新的权限树内容，并且权限树内容 PermissionGroups 必须是一颗完整的权限树。
                 * @param req ChannelCreateRoleRequest
                 * @return ChannelCreateRoleOutcome
                 */
                ChannelCreateRoleOutcome ChannelCreateRole(const Model::ChannelCreateRoleRequest &request);
                void ChannelCreateRoleAsync(const Model::ChannelCreateRoleRequest& request, const ChannelCreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateRoleOutcomeCallable ChannelCreateRoleCallable(const Model::ChannelCreateRoleRequest& request);

                /**
                 *将指定印章授权给第三方平台子客企业下的某些员工
                 * @param req ChannelCreateSealPolicyRequest
                 * @return ChannelCreateSealPolicyOutcome
                 */
                ChannelCreateSealPolicyOutcome ChannelCreateSealPolicy(const Model::ChannelCreateSealPolicyRequest &request);
                void ChannelCreateSealPolicyAsync(const Model::ChannelCreateSealPolicyRequest& request, const ChannelCreateSealPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateSealPolicyOutcomeCallable ChannelCreateSealPolicyCallable(const Model::ChannelCreateSealPolicyRequest& request);

                /**
                 *企业方可以通过此接口获取个人用户开启自动签的跳转链接
                 * @param req ChannelCreateUserAutoSignEnableUrlRequest
                 * @return ChannelCreateUserAutoSignEnableUrlOutcome
                 */
                ChannelCreateUserAutoSignEnableUrlOutcome ChannelCreateUserAutoSignEnableUrl(const Model::ChannelCreateUserAutoSignEnableUrlRequest &request);
                void ChannelCreateUserAutoSignEnableUrlAsync(const Model::ChannelCreateUserAutoSignEnableUrlRequest& request, const ChannelCreateUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateUserAutoSignEnableUrlOutcomeCallable ChannelCreateUserAutoSignEnableUrlCallable(const Model::ChannelCreateUserAutoSignEnableUrlRequest& request);

                /**
                 *获取设置自动签印章小程序链接。

注意：
<ul><li>需要<code>企业开通自动签</code>后使用。</li>
<li>仅支持<code>已经开通了自动签的个人</code>更换自动签印章。</li>
<li>链接有效期默认7天，<code>最多30天</code>。</li>
<li>该接口的链接适用于<code>小程序</code>端。</li>
<li>该接口不会扣除您的合同套餐，暂不参与计费。</li></ul>
                 * @param req ChannelCreateUserAutoSignSealUrlRequest
                 * @return ChannelCreateUserAutoSignSealUrlOutcome
                 */
                ChannelCreateUserAutoSignSealUrlOutcome ChannelCreateUserAutoSignSealUrl(const Model::ChannelCreateUserAutoSignSealUrlRequest &request);
                void ChannelCreateUserAutoSignSealUrlAsync(const Model::ChannelCreateUserAutoSignSealUrlRequest& request, const ChannelCreateUserAutoSignSealUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateUserAutoSignSealUrlOutcomeCallable ChannelCreateUserAutoSignSealUrlCallable(const Model::ChannelCreateUserAutoSignSealUrlRequest& request);

                /**
                 *通过此接口，绑定员工角色，支持以电子签userId、客户系统userId两种方式调用。
                 * @param req ChannelCreateUserRolesRequest
                 * @return ChannelCreateUserRolesOutcome
                 */
                ChannelCreateUserRolesOutcome ChannelCreateUserRoles(const Model::ChannelCreateUserRolesRequest &request);
                void ChannelCreateUserRolesAsync(const Model::ChannelCreateUserRolesRequest& request, const ChannelCreateUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateUserRolesOutcomeCallable ChannelCreateUserRolesCallable(const Model::ChannelCreateUserRolesRequest& request);

                /**
                 *用来创建嵌入式页面个性化主题配置（例如是否展示电子签logo、定义主题色等），该接口配合其他所有可嵌入页面接口使用
创建配置对当前第三方应用全局生效，如果多次调用，会以最后一次的配置为准
                 * @param req ChannelCreateWebThemeConfigRequest
                 * @return ChannelCreateWebThemeConfigOutcome
                 */
                ChannelCreateWebThemeConfigOutcome ChannelCreateWebThemeConfig(const Model::ChannelCreateWebThemeConfigRequest &request);
                void ChannelCreateWebThemeConfigAsync(const Model::ChannelCreateWebThemeConfigRequest& request, const ChannelCreateWebThemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateWebThemeConfigOutcomeCallable ChannelCreateWebThemeConfigCallable(const Model::ChannelCreateWebThemeConfigRequest& request);

                /**
                 *此接口（ChannelDeleteRole）用来删除企业自定义角色。

注意：系统角色不可删除。
                 * @param req ChannelDeleteRoleRequest
                 * @return ChannelDeleteRoleOutcome
                 */
                ChannelDeleteRoleOutcome ChannelDeleteRole(const Model::ChannelDeleteRoleRequest &request);
                void ChannelDeleteRoleAsync(const Model::ChannelDeleteRoleRequest& request, const ChannelDeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDeleteRoleOutcomeCallable ChannelDeleteRoleCallable(const Model::ChannelDeleteRoleRequest& request);

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
                 *用于分页查询企业员工信息列表，支持设置过滤条件以筛选员工查询结果。
                 * @param req ChannelDescribeEmployeesRequest
                 * @return ChannelDescribeEmployeesOutcome
                 */
                ChannelDescribeEmployeesOutcome ChannelDescribeEmployees(const Model::ChannelDescribeEmployeesRequest &request);
                void ChannelDescribeEmployeesAsync(const Model::ChannelDescribeEmployeesRequest& request, const ChannelDescribeEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeEmployeesOutcomeCallable ChannelDescribeEmployeesCallable(const Model::ChannelDescribeEmployeesRequest& request);

                /**
                 *查询流程填写控件内容，可以根据流程Id查询该流程相关联的填写控件信息和填写内容。 注意：使用此接口前，需要在【企业应用管理】-【应用集成】-【第三方应用管理】中开通【下载应用内全量合同文件及内容数据】功能。
                 * @param req ChannelDescribeFlowComponentsRequest
                 * @return ChannelDescribeFlowComponentsOutcome
                 */
                ChannelDescribeFlowComponentsOutcome ChannelDescribeFlowComponents(const Model::ChannelDescribeFlowComponentsRequest &request);
                void ChannelDescribeFlowComponentsAsync(const Model::ChannelDescribeFlowComponentsRequest& request, const ChannelDescribeFlowComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeFlowComponentsOutcomeCallable ChannelDescribeFlowComponentsCallable(const Model::ChannelDescribeFlowComponentsRequest& request);

                /**
                 *查询子客企业电子印章，需要操作者具有管理印章权限
客户指定需要获取的印章数量和偏移量，数量最多100，超过100按100处理；入参InfoType控制印章是否携带授权人信息，为1则携带，为0则返回的授权人信息为空数组。接口调用成功返回印章的信息列表还有企业印章的总数，只返回启用的印章。
                 * @param req ChannelDescribeOrganizationSealsRequest
                 * @return ChannelDescribeOrganizationSealsOutcome
                 */
                ChannelDescribeOrganizationSealsOutcome ChannelDescribeOrganizationSeals(const Model::ChannelDescribeOrganizationSealsRequest &request);
                void ChannelDescribeOrganizationSealsAsync(const Model::ChannelDescribeOrganizationSealsRequest& request, const ChannelDescribeOrganizationSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeOrganizationSealsOutcomeCallable ChannelDescribeOrganizationSealsCallable(const Model::ChannelDescribeOrganizationSealsRequest& request);

                /**
                 *分页查询企业角色列表，法人的角色是系统保留角色，不会返回，按照角色创建时间升序排列。
相关系统默认角色说明可参考文档：https://cloud.tencent.com/document/product/1323/61355
                 * @param req ChannelDescribeRolesRequest
                 * @return ChannelDescribeRolesOutcome
                 */
                ChannelDescribeRolesOutcome ChannelDescribeRoles(const Model::ChannelDescribeRolesRequest &request);
                void ChannelDescribeRolesAsync(const Model::ChannelDescribeRolesRequest& request, const ChannelDescribeRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeRolesOutcomeCallable ChannelDescribeRolesCallable(const Model::ChannelDescribeRolesRequest& request);

                /**
                 *通过此接口获取个人用户自动签的开通状态。

注意: `处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。`
                 * @param req ChannelDescribeUserAutoSignStatusRequest
                 * @return ChannelDescribeUserAutoSignStatusOutcome
                 */
                ChannelDescribeUserAutoSignStatusOutcome ChannelDescribeUserAutoSignStatus(const Model::ChannelDescribeUserAutoSignStatusRequest &request);
                void ChannelDescribeUserAutoSignStatusAsync(const Model::ChannelDescribeUserAutoSignStatusRequest& request, const ChannelDescribeUserAutoSignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeUserAutoSignStatusOutcomeCallable ChannelDescribeUserAutoSignStatusCallable(const Model::ChannelDescribeUserAutoSignStatusRequest& request);

                /**
                 *通过此接口可以关闭个人用户自动签功能。
无需对应的用户刷脸等方式同意即可关闭。

注意: 

<ul><li>处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。</li>
<li>如果此用户在开通时候绑定过个人自动签账号许可,  关闭此用户的自动签不会归还个人自动签账号许可的额度。</li></ul>
                 * @param req ChannelDisableUserAutoSignRequest
                 * @return ChannelDisableUserAutoSignOutcome
                 */
                ChannelDisableUserAutoSignOutcome ChannelDisableUserAutoSign(const Model::ChannelDisableUserAutoSignRequest &request);
                void ChannelDisableUserAutoSignAsync(const Model::ChannelDisableUserAutoSignRequest& request, const ChannelDisableUserAutoSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDisableUserAutoSignOutcomeCallable ChannelDisableUserAutoSignCallable(const Model::ChannelDisableUserAutoSignRequest& request);

                /**
                 *此接口（ChannelGetTaskResultApi）用来查询转换任务的状态。如需发起转换任务，请使用<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelCreateConvertTaskApi" target="_blank">创建文件转换任务接口</a>进行资源文件的转换操作<br />
前提条件：已调用 <a href="https://qian.tencent.com/developers/partnerApis/files/ChannelCreateConvertTaskApi" target="_blank">创建文件转换任务接口</a>进行文件转换，并得到了返回的转换任务Id。<br />

适用场景：已创建一个文件转换任务，想查询该文件转换任务的状态，或获取转换后的文件资源Id。<br />
注：
1. `大文件转换所需的时间可能会比较长`
                 * @param req ChannelGetTaskResultApiRequest
                 * @return ChannelGetTaskResultApiOutcome
                 */
                ChannelGetTaskResultApiOutcome ChannelGetTaskResultApi(const Model::ChannelGetTaskResultApiRequest &request);
                void ChannelGetTaskResultApiAsync(const Model::ChannelGetTaskResultApiRequest& request, const ChannelGetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelGetTaskResultApiOutcomeCallable ChannelGetTaskResultApiCallable(const Model::ChannelGetTaskResultApiRequest& request);

                /**
                 *此接口（ChannelModifyRole）用来更新企业自定义角色。

适用场景1：更新当前企业的自定义角色的名称或描述等其他信息，更新时不进行权限的设置（PermissionGroups 参数不传）。

适用场景2：更新当前企业的自定义角色的权限信息，更新时进行权限的设置（PermissionGroups 参数要传），权限树内容 PermissionGroups 可参考接口 ChannelDescribeRoles 的输出。此处注意权限树内容可能会更新，需尽量拉取最新的权限树内容，并且权限树内容 PermissionGroups 必须是一颗完整的权限树。
                 * @param req ChannelModifyRoleRequest
                 * @return ChannelModifyRoleOutcome
                 */
                ChannelModifyRoleOutcome ChannelModifyRole(const Model::ChannelModifyRoleRequest &request);
                void ChannelModifyRoleAsync(const Model::ChannelModifyRoleRequest& request, const ChannelModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelModifyRoleOutcomeCallable ChannelModifyRoleCallable(const Model::ChannelModifyRoleRequest& request);

                /**
                 *本接口（ChannelUpdateSealStatus）用于第三方应用平台为子客企业更新印章状态
                 * @param req ChannelUpdateSealStatusRequest
                 * @return ChannelUpdateSealStatusOutcome
                 */
                ChannelUpdateSealStatusOutcome ChannelUpdateSealStatus(const Model::ChannelUpdateSealStatusRequest &request);
                void ChannelUpdateSealStatusAsync(const Model::ChannelUpdateSealStatusRequest& request, const ChannelUpdateSealStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelUpdateSealStatusOutcomeCallable ChannelUpdateSealStatusCallable(const Model::ChannelUpdateSealStatusRequest& request);

                /**
                 *对合同流程文件进行数字签名验证，判断数字签名是否有效，合同文件内容是否被篡改。
                 * @param req ChannelVerifyPdfRequest
                 * @return ChannelVerifyPdfOutcome
                 */
                ChannelVerifyPdfOutcome ChannelVerifyPdf(const Model::ChannelVerifyPdfRequest &request);
                void ChannelVerifyPdfAsync(const Model::ChannelVerifyPdfRequest& request, const ChannelVerifyPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelVerifyPdfOutcomeCallable ChannelVerifyPdfCallable(const Model::ChannelVerifyPdfRequest& request);

                /**
                 *提交申请出证报告任务并返回报告ID。

注意：
<ul><li>使用此功能`需搭配出证套餐` ，使用前请联系对接的客户经理沟通。</li>
<li>操作人必须是`发起方或者签署方企业的(非走授权书认证)法人或者超管`。</li>
<li>合同流程必须所有参与方`已经签署完成`。</li>
<li>出证过程需一定时间，建议在`提交出证任务后的24小时之后`，通过<a href="https://qian.tencent.com/developers/partnerApis/certificate/DescribeChannelFlowEvidenceReport" target="_blank">获取出证报告任务执行结果</a>接口进行查询执行结果和出证报告的下载URL。</li></ul>

<svg id="SvgjsSvg1006" width="262" height="229" xmlns="http://www.w3.org/2000/svg" version="1.1" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:svgjs="http://svgjs.com/svgjs"><defs id="SvgjsDefs1007"><pattern patternUnits="userSpaceOnUse" id="pattern_mark_0" width="300" height="300"><text x="150" y="100" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><pattern patternUnits="userSpaceOnUse" id="pattern_mark_1" width="300" height="300"><text x="150" y="200" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><marker id="SvgjsMarker1021" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1022" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker></defs><rect id="svgbackgroundid" width="262" height="229" fill="transparent"></rect><rect id="SvgjsRect1009" width="262" height="229" fill="url(#pattern_mark_0)"></rect><rect id="SvgjsRect1010" width="262" height="229" fill="url(#pattern_mark_1)"></rect><g id="SvgjsG1011" transform="translate(31.75,25)"><path id="SvgjsPath1012" d="M 0 0L 198 0L 198 59L 0 59Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1013"><text id="SvgjsText1014" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="178px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="10.375" transform="rotate(0)"><tspan id="SvgjsTspan1015" dy="16" x="99"><tspan id="SvgjsTspan1016" style="text-decoration:;fill: rgb(28, 30, 33);">CreateFlowEvidenceReport</tspan></tspan><tspan id="SvgjsTspan1017" dy="16" x="99"><tspan id="SvgjsTspan1018" style="text-decoration:;fill: rgb(51, 51, 51);">提交申请出证报告任务</tspan></tspan></text></g></g><g id="SvgjsG1019"><path id="SvgjsPath1020" d="M130.75 84.5L130.75 114.5L130.75 114.5L130.75 143.2" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1021)"></path></g><g id="SvgjsG1023" transform="translate(25,145)"><path id="SvgjsPath1024" d="M 0 0L 211.5 0L 211.5 59L 0 59Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1025"><text id="SvgjsText1026" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="192px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="10.375" transform="rotate(0)"><tspan id="SvgjsTspan1027" dy="16" x="106"><tspan id="SvgjsTspan1028" style="text-decoration:;fill: rgb(28, 30, 33);">DescribeFlowEvidenceReport</tspan></tspan><tspan id="SvgjsTspan1029" dy="16" x="106"><tspan id="SvgjsTspan1030" style="text-decoration:;fill: rgb(51, 51, 51);">获取出证报告任务执行结果</tspan></tspan></text></g></g></svg>
                 * @param req CreateChannelFlowEvidenceReportRequest
                 * @return CreateChannelFlowEvidenceReportOutcome
                 */
                CreateChannelFlowEvidenceReportOutcome CreateChannelFlowEvidenceReport(const Model::CreateChannelFlowEvidenceReportRequest &request);
                void CreateChannelFlowEvidenceReportAsync(const Model::CreateChannelFlowEvidenceReportRequest& request, const CreateChannelFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelFlowEvidenceReportOutcomeCallable CreateChannelFlowEvidenceReportCallable(const Model::CreateChannelFlowEvidenceReportRequest& request);

                /**
                 *此接口（CreateChannelOrganizationInfoChangeUrl）用于创建子客企业信息变更链接（需要在移动端打开，会跳转到微信小程序），支持创建企业超管变更链接或企业基础信息变更链接，通过入参 ChangeType 指定。


<h3 id="1-企业超管变更">1. 企业超管变更</h3>

<p>换成企业的其他员工来当超管</p>

<h3 id="2-企业基础信息变更">2. 企业基础信息变更</h3>

<h4 id="可以变动">可以变动</h4>

<ul>
<li>企业名称<br>
</li>
<li>法定代表人姓名(新法人有邀请链接)<br>
</li>
<li>企业地址和所在地</li>
</ul>

<h4 id="不可变动">不可变动</h4>

<ul>
<li>统一社会信用代码<br>
</li>
<li>企业主体类型</li>
</ul>

<p>如果企业名称变动会引起下面的变动</p>

<ul>
<li>合同:   老合同不做任何处理,   新发起的合同需要用新的企业名字作为签署方, 否则无法签署</li>
<li>印章:   会删除所有的印章所有的机构公章和合同专用章,  然后用新企业名称生成新的机构公章 和合同专用章,  而法人章, 财务专用章和人事专用章不会处理</li>
<li>证书:   企业证书会重新请求CA机构用新企业名称生成新的证书</li>
</ul>
                 * @param req CreateChannelOrganizationInfoChangeUrlRequest
                 * @return CreateChannelOrganizationInfoChangeUrlOutcome
                 */
                CreateChannelOrganizationInfoChangeUrlOutcome CreateChannelOrganizationInfoChangeUrl(const Model::CreateChannelOrganizationInfoChangeUrlRequest &request);
                void CreateChannelOrganizationInfoChangeUrlAsync(const Model::CreateChannelOrganizationInfoChangeUrlRequest& request, const CreateChannelOrganizationInfoChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelOrganizationInfoChangeUrlOutcomeCallable CreateChannelOrganizationInfoChangeUrlCallable(const Model::CreateChannelOrganizationInfoChangeUrlRequest& request);

                /**
                 *此接口（CreateConsoleLoginUrl）用于创建第三方平台子客企业控制台Web/移动登录链接。支持web控制台、电子签小程序和H5链接。登录链接是进入子客web企业控制台的唯一入口。

Web链接访问后，会根据子客企业(**Agent中ProxyOrganizationOpenId表示**)和员工(**Agent中OpenId表示**)的状态，进入不同的流程，主要情况分类如下：
<table>
<thead>
<tr>
<th>子客企业状态</th>
<th>子客企业员工状态</th>
<th>点击链接进入的流程</th>
</tr>
</thead>
<tbody>
<tr>
<td>企业未激活</td>
<td>员工未认证</td>
<td>进入企业激活流程，首次完成企业激活流程的员工会成为超管</td>
</tr>
<tr>
<td>企业已激活</td>
<td>员工未认证</td>
<td>进入员认证并加入企业流程</td>
</tr>
<tr>
<td>企业已激活</td>
<td>员工已认证</td>
<td>进入子客企业Web控制台</td>
</tr>
</tbody>
</table>
如果是企业激活流程，需要注意如下情况：

1. 若在激活过程中，**更换用户OpenID重新生成链接，之前的认证会被清理**。因此不要在企业认证过程生成多个链接给多人同时操作，会导致认证过程互相影响。
2. 若您认证中发现信息有误需要重新认证，**可通过更换用户OpenID重新生成链接的方式，来清理掉已有的流程**。
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

**整体的逻辑如下**

![image](https://dyn.ess.tencent.cn/guide/capi/CreateFlowsByTemplates.png)

**可以作为发起方和签署方的角色列表**
<table>
<thead>
<tr>
<th>场景编号</th>
<th>可作为发起方类型</th>
<th>可作为签署方的类型</th>
</tr>
</thead>

<tbody>
<tr>
<td>场景一</td>
<td>第三方子企业A员工</td>
<td>第三方子企业A员工</td>
</tr>

<tr>
<td>场景二</td>
<td>第三方子企业A员工</td>
<td>第三方子企业B(不指定经办人)</td>
</tr>

<tr>
<td>场景三</td>
<td>第三方子企业A员工</td>
<td>第三方子企业B员工</td>
</tr>

<tr>
<td>场景四</td>
<td>第三方子企业A员工</td>
<td>个人/自然人</td>
</tr>

<tr>
<td>场景五</td>
<td>第三方子企业A员工</td>
<td>SaaS平台企业员工</td>
</tr>
</tbody>
</table>

**注**: 
`1. 发起合同时候,  作为发起方的第三方子企业A员工的企业和员工必须经过实名, 而作为签署方的第三方子企业A员工/个人/自然人/SaaS平台企业员工/第三方子企业B员工企业中的企业和个人/员工可以未实名`
`2. 不同类型的签署方传参不同, 可以参考开发者中心的FlowApproverInfo结构体说明`
                 * @param req CreateFlowsByTemplatesRequest
                 * @return CreateFlowsByTemplatesOutcome
                 */
                CreateFlowsByTemplatesOutcome CreateFlowsByTemplates(const Model::CreateFlowsByTemplatesRequest &request);
                void CreateFlowsByTemplatesAsync(const Model::CreateFlowsByTemplatesRequest& request, const CreateFlowsByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowsByTemplatesOutcomeCallable CreateFlowsByTemplatesCallable(const Model::CreateFlowsByTemplatesRequest& request);

                /**
                 *1. 可以**通过图片**为子客企业代创建印章，图片最大5MB

2. 可以**系统创建**子客企业代创建印章, 系统创建的印章样子下图(样式可以调整)

![image](https://dyn.ess.tencent.cn/guide/capi/CreateSealByImage.png)
                 * @param req CreateSealByImageRequest
                 * @return CreateSealByImageOutcome
                 */
                CreateSealByImageOutcome CreateSealByImage(const Model::CreateSealByImageRequest &request);
                void CreateSealByImageAsync(const Model::CreateSealByImageRequest& request, const CreateSealByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSealByImageOutcomeCallable CreateSealByImageCallable(const Model::CreateSealByImageRequest& request);

                /**
                 *创建跳转小程序查看或签署的链接

**腾讯电子签小程序的AppID 和 原始Id如下:**

| 小程序 | AppID | 原始ID |
| ------------ | ------------ | ------------ |
| 腾讯电子签（正式版） | wxa023b292fd19d41d | gh_da88f6188665 |
| 腾讯电子签Demo | wx371151823f6f3edf | gh_39a5d3de69fa |

**主要使用场景可以更加EndPoint分类如下**

|EndPoint| 场景| 说明和示例|
|  ----  | ----  | --- |
|  WEIXINAPP  | 短链跳转腾讯电子签小程序签署场景  |  点击链接打开电子签小程序（与腾讯电子签官方短信提醒用户签署形式一样）<br> 示例: https://essurl.cn/x9nvWU8fTg|
|  LONGURL2WEIXINAPP  | 长链跳转腾讯电子签小程序签署场景  |  点击链接打开电子签小程序, 是WEIXINAPP生成短链代表的那个长链|
|  CHANNEL  | 带有H5引导页的跳转腾讯电子签小程序签署场景 |  点击链接打开一个H5引导页面, 页面中有个"前往小程序"的按钮, 点击后会跳转到腾讯电子签小程序签署场景;  签署完成会回到H5引导页面, 然后跳转到指定创建链接指定的JumpUrl<br>示例: https://res.ess.tencent.cn/cdn/h5-activity-beta/jump-mp.html?use=channel-guide&type=warning&token=uIFKIU8fTd |
|APP| 贵方App跳转腾讯电子签小程序签署场景|  贵方App直接跳转到小程序后, 在腾讯电子签小程序签署完成后返回贵方App的场景<br>跳转到腾讯电子签小程序的实现可以参考微信的官方文档:<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/launchApp.html" target="_blank">开放能力/打开 App</a> <br> 示例: pages/guide?from=default&where=mini& to=CONTRACT_DETAIL& id=yDwiBUUc*duRvquCSX8wd& shortKey=yDwivUA**W1yRsTre3 |
|APP| 贵方小程序跳转腾讯电子签小程序签署场景|  贵方App直接跳转到小程序后, 在腾讯电子签小程序签署完成后返回贵方小程序的场景<br>跳转到腾讯电子签小程序的实现可以参考微信官方文档<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html" target="_blank">全屏方式</a>和<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html " target="_blank">半屏方式</a><br>此时返回的SignUrl就是官方文档中的path<br> 示例:pages/guide?from=default&where=mini& to=CONTRACT_DETAIL& id=yDwiBUUc*duRvquCSX8wd& shortKey=yDwivUA**W1yRsTre3  |
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
                 *查询企业扩展服务的开通和授权情况，当前支持查询以下内容：
1. 企业自动签
2. 企业与港澳台居民签署合同
3. 使用手机号验证签署方身份
4. 骑缝章
5. 拓宽签署方年龄限制
6. 下载企业合同/文件

注: 此接口 参数Agent. ProxyOperator.OpenId 需要传递超管或者法人的OpenId
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
                 *获取合同流程PDF的下载链接，可以下载签署中、签署完的此子企业创建的合同

**注意**:   
有两种开通权限的途径

**第一种**:   需第三方应用的子企业登录控制台进行授权,  授权在**企业中心**的**授权管理**区域,  界面如下图
授权过程需要**子企业超管**扫描跳转到电子签小程序签署<<渠道端下载渠道子客合同功能授权委托书>>

![image](https://dyn.ess.tencent.cn/guide/capi/channel_DescribeResourceUrlsByFlows2.png)

**第二种**: 第三方应用的配置接口打开全第三个应用下的所有自己起开通, 需要**渠道方企业的超管**扫描二维码跳转到电子签小程序签署 <<渠道端下载渠道子客合同功能开通知情同意书>>
![image](https://dyn.ess.tencent.cn/guide/capi/channel_DescribeResourceUrlsByFlows_appilications2.png)
                 * @param req DescribeResourceUrlsByFlowsRequest
                 * @return DescribeResourceUrlsByFlowsOutcome
                 */
                DescribeResourceUrlsByFlowsOutcome DescribeResourceUrlsByFlows(const Model::DescribeResourceUrlsByFlowsRequest &request);
                void DescribeResourceUrlsByFlowsAsync(const Model::DescribeResourceUrlsByFlowsRequest& request, const DescribeResourceUrlsByFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUrlsByFlowsOutcomeCallable DescribeResourceUrlsByFlowsCallable(const Model::DescribeResourceUrlsByFlowsRequest& request);

                /**
                 *通过此接口（DescribeTemplates）查询该第三方平台子客企业在电子签拥有的有效模板，不包括第三方平台模板。

> **适用场景** 
>
>  该接口常用来配合“使用模板创建签署流程”接口作为前置的接口使用。 
>  一个模板通常会包含以下结构信息
>- 模板基本信息
>- 发起方参与信息Promoter、签署参与方 Recipients，后者会在模板发起合同时用于指定参与方
>- 填写控件 Components
>- 签署控件 SignComponents
>- 生成模板的文件基础信息 FileInfos

注意：

>1. 查询条件TemplateId、TemplateName与ChannelTemplateId可同时存在，即可查询同时满足这些条件的模板。
>2. TemplateId 和TemplateIds互为独立，若两个参数都传入，则以TemplateId为准
                 * @param req DescribeTemplatesRequest
                 * @return DescribeTemplatesOutcome
                 */
                DescribeTemplatesOutcome DescribeTemplates(const Model::DescribeTemplatesRequest &request);
                void DescribeTemplatesAsync(const Model::DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplatesOutcomeCallable DescribeTemplatesCallable(const Model::DescribeTemplatesRequest& request);

                /**
                 *此接口（DescribeUsage）用于获取第三方平台所有合作企业流量消耗情况。
 注: 此接口每日限频50次，若要扩大限制次数,请提前与客服经理或邮件至e-contract@tencent.com进行联系。
                 * @param req DescribeUsageRequest
                 * @return DescribeUsageOutcome
                 */
                DescribeUsageOutcome DescribeUsage(const Model::DescribeUsageRequest &request);
                void DescribeUsageAsync(const Model::DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageOutcomeCallable DescribeUsageCallable(const Model::DescribeUsageRequest& request);

                /**
                 *此接口（GetDownloadFlowUrl）用户获取合同控制台下载页面链接,  点击链接后会跳转至本企业合同管理控制台(会筛选出传入的合同列表), 点击**下载**按钮后就会下载传入的合同列表, 下载页面如下图
![image](https://dyn.ess.tencent.cn/guide/capi/channel_GetDownloadFlowUrl.png)

注:
<ul>
<li>仅支持下载 **本企业** 下合同，链接会 **登录企业控制台** </li>
<li> **链接仅可使用一次**，不可重复使用</li>
</ul>
                 * @param req GetDownloadFlowUrlRequest
                 * @return GetDownloadFlowUrlOutcome
                 */
                GetDownloadFlowUrlOutcome GetDownloadFlowUrl(const Model::GetDownloadFlowUrlRequest &request);
                void GetDownloadFlowUrlAsync(const Model::GetDownloadFlowUrlRequest& request, const GetDownloadFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDownloadFlowUrlOutcomeCallable GetDownloadFlowUrlCallable(const Model::GetDownloadFlowUrlRequest& request);

                /**
                 *修改（操作）企业扩展服务 ，企业经办人需要是企业超管或者法人。

跳转小程序的几种方式：主要是设置不同的EndPoint
1. 通过链接Url直接跳转到小程序，不需要返回
设置EndPoint为WEIXINAPP，得到链接打开即可。

2. 客户App直接跳转到小程序-->腾讯电子签小程序操作完成-->返回App
跳转到小程序的实现，参考官方文档
https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/launchApp.html
其中小程序的原始Id，请联系<对接技术人员>获取，或者查看小程序信息自助获取。
设置EndPoint为APP，得到path。

4. 客户小程序直接跳到电子签小程序-->腾讯电子签小程序操作完成--->回到客户小程序
跳转到小程序的实现，参考官方文档（分为全屏、半屏两种方式）
全屏方式：
（https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html）
半屏方式：
（https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html）
其中小程序的原始Id，请联系<对接技术人员>获取，或者查看小程序信息自助获取。
设置EndPoint为APP，得到path。

其中小程序的原始Id如下，或者查看小程序信息自助获取。

| 小程序 | AppID | 原始ID |
| ------------ | ------------ | ------------ |
| 腾讯电子签（正式版） | wxa023b292fd19d41d | gh_da88f6188665 |
| 腾讯电子签Demo | wx371151823f6f3edf | gh_39a5d3de69fa |
                 * @param req ModifyExtendedServiceRequest
                 * @return ModifyExtendedServiceOutcome
                 */
                ModifyExtendedServiceOutcome ModifyExtendedService(const Model::ModifyExtendedServiceRequest &request);
                void ModifyExtendedServiceAsync(const Model::ModifyExtendedServiceRequest& request, const ModifyExtendedServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExtendedServiceOutcomeCallable ModifyExtendedServiceCallable(const Model::ModifyExtendedServiceRequest& request);

                /**
                 *此接口（OperateChannelTemplate）用于针对第三方应用平台模板库中的模板对子客企业可见性的查询和设置。

> **使用场景**
>
>  1：查询 OperateType=SELECT
> - 查询第三方应用平台模板库的可见性以及授权的子客列表。
>
>  2：修改部分子客授权 OperateType=UPDATE
> - 对子客企业进行模板库中模板可见性的进行修改操作。
>- 当模板未发布时，可以修改可见性AuthTag（part/all），当模板发布后，不可做此修改
> - 若模板已发布且可见性AuthTag是part，可以通过ProxyOrganizationOpenIds增加子客的授权范围。如果是自动领取的模板，增加授权范围后会自动下发。
>
>  3：取消部分子客授权 OperateType=DELETE
> - 对子客企业进行模板库中模板可见性的进行删除操作。
> - 主要对于手动领取的模板，去除授权后子客在模板库中看不到，就无法再领取了。但是已经领取过成为自有模板的不会同步删除。
> - 对于自动领取的模板，由于已经下发，更改授权不会影响。
> - 如果要同步删除子客自有模板库中的模板，请使用OperateType=UPDATE+Available参数处理。
                 * @param req OperateChannelTemplateRequest
                 * @return OperateChannelTemplateOutcome
                 */
                OperateChannelTemplateOutcome OperateChannelTemplate(const Model::OperateChannelTemplateRequest &request);
                void OperateChannelTemplateAsync(const Model::OperateChannelTemplateRequest& request, const OperateChannelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateChannelTemplateOutcomeCallable OperateChannelTemplateCallable(const Model::OperateChannelTemplateRequest& request);

                /**
                 *该接口 (PrepareFlows) 用于创建待发起文件
用户通过该接口进入签署流程发起的确认页面，进行发起信息二次确认， 如果确认则进行正常发起。
目前该接口只支持B2C，不建议使用，将会**废弃**。
                 * @param req PrepareFlowsRequest
                 * @return PrepareFlowsOutcome
                 */
                PrepareFlowsOutcome PrepareFlows(const Model::PrepareFlowsRequest &request);
                void PrepareFlowsAsync(const Model::PrepareFlowsRequest& request, const PrepareFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PrepareFlowsOutcomeCallable PrepareFlowsCallable(const Model::PrepareFlowsRequest& request);

                /**
                 *此接口（SyncProxyOrganization）用于同步第三方平台子客企业信息，包括企业名称，企业营业执照，企业统一社会信用代码和法人姓名等，便于子客企业在企业激活过程中无需手动上传营业执照或补充企业信息。注意：
1. 需要在子客企业激活前调用该接口，如果您的企业已经提交企业信息或者企业已经激活，同步的企业信息将不会生效。
2. 如果您同时传递了营业执照信息和企业名称等信息，在认证过程中将以营业执照中的企业信息为准，请注意企业信息需要和营业执照信息对应。
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
                 *此接口（UploadFiles）文件上传。<br/>

适用场景：用于合同，印章的文件上传。文件上传以后，
如果是PDF格式文件可配合<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowByFiles" target="_blank">用PDF文件创建签署流程</a>接口进行合同流程的发起
如果是其他类型可以配合<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelCreateConvertTaskApi" target="_blank">创建文件转换任务</a>接口转换成PDF文件

注: 
1. `图片类型(png/jpg/jpeg)限制大小为5M以下, PDF/word/excel等其他格式限制大小为60M以下`
2. `联调开发环境调用时需要设置Domain接口请求域名为 file.test.ess.tencent.cn，正式环境需要设置为file.ess.tencent.cn，代码示例`
```
HttpProfile httpProfile = new HttpProfile();
httpProfile.setEndpoint("file.test.ess.tencent.cn");
```
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
