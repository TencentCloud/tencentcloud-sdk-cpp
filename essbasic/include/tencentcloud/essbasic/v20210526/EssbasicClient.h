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
                 *指定需要批量撤销的签署流程Id，批量撤销合同
客户指定需要撤销的签署流程Id，最多100个，超过100不处理；

可以撤回：未全部签署完成
 不可以撤回：已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等合同状态。

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
                 *上传了word、excel、图片文件后，通过该接口发起文件转换任务，将word、excel、图片文件转换为pdf文件。
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
                 *接口（ChannelCreateFlowGroupByTemplates）用于通过多模板创建合同组签署流程。
                 * @param req ChannelCreateFlowGroupByTemplatesRequest
                 * @return ChannelCreateFlowGroupByTemplatesOutcome
                 */
                ChannelCreateFlowGroupByTemplatesOutcome ChannelCreateFlowGroupByTemplates(const Model::ChannelCreateFlowGroupByTemplatesRequest &request);
                void ChannelCreateFlowGroupByTemplatesAsync(const Model::ChannelCreateFlowGroupByTemplatesRequest& request, const ChannelCreateFlowGroupByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowGroupByTemplatesOutcomeCallable ChannelCreateFlowGroupByTemplatesCallable(const Model::ChannelCreateFlowGroupByTemplatesRequest& request);

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
                 *查询企业员工列表
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
                 *企业方可以通过此接口查询个人用户自动签开启状态
                 * @param req ChannelDescribeUserAutoSignStatusRequest
                 * @return ChannelDescribeUserAutoSignStatusOutcome
                 */
                ChannelDescribeUserAutoSignStatusOutcome ChannelDescribeUserAutoSignStatus(const Model::ChannelDescribeUserAutoSignStatusRequest &request);
                void ChannelDescribeUserAutoSignStatusAsync(const Model::ChannelDescribeUserAutoSignStatusRequest& request, const ChannelDescribeUserAutoSignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeUserAutoSignStatusOutcomeCallable ChannelDescribeUserAutoSignStatusCallable(const Model::ChannelDescribeUserAutoSignStatusRequest& request);

                /**
                 *企业方可以通过此接口关闭个人的自动签功能
                 * @param req ChannelDisableUserAutoSignRequest
                 * @return ChannelDisableUserAutoSignOutcome
                 */
                ChannelDisableUserAutoSignOutcome ChannelDisableUserAutoSign(const Model::ChannelDisableUserAutoSignRequest &request);
                void ChannelDisableUserAutoSignAsync(const Model::ChannelDisableUserAutoSignRequest& request, const ChannelDisableUserAutoSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDisableUserAutoSignOutcomeCallable ChannelDisableUserAutoSignCallable(const Model::ChannelDisableUserAutoSignRequest& request);

                /**
                 *查询转换任务的状态。转换任务Id通过发起转换任务接口（ChannelCreateConvertTaskApi）获取。
注意：大文件转换所需的时间可能会比较长。
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
                 *对流程的合同文件进行数字签名验证，判断文件是否被篡改。
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
                 *此接口（CreateChannelOrganizationInfoChangeUrl）用于创建子客企业信息变更链接，支持创建企业超管变更链接或企业基础信息变更链接，通过入参ChangeType指定。
                 * @param req CreateChannelOrganizationInfoChangeUrlRequest
                 * @return CreateChannelOrganizationInfoChangeUrlOutcome
                 */
                CreateChannelOrganizationInfoChangeUrlOutcome CreateChannelOrganizationInfoChangeUrl(const Model::CreateChannelOrganizationInfoChangeUrlRequest &request);
                void CreateChannelOrganizationInfoChangeUrlAsync(const Model::CreateChannelOrganizationInfoChangeUrlRequest& request, const CreateChannelOrganizationInfoChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelOrganizationInfoChangeUrlOutcomeCallable CreateChannelOrganizationInfoChangeUrlCallable(const Model::CreateChannelOrganizationInfoChangeUrlRequest& request);

                /**
                 *此接口（CreateConsoleLoginUrl）用于创建第三方平台子客企业控制台Web/移动登录链接。支持web控制台、电子签小程序和H5链接。登录链接是进入子客控制台的唯一入口。
链接访问后，会根据企业的和员工的状态（企业根据ProxyOrganizationOpenId参数，员工根据OpenId参数判断），进入不同的流程，主要情况分类如下：
1. 若子客企业未激活，会进入企业激活流程，首次参与激活流程的经办人会成为超管。
2. 若子客企业已激活，员工未激活，则会进入经办人激活流程。
3. 若子客企业、经办人均已完成认证，则会直接进入子客Web控制台。

如果是企业激活流程，需要注意如下情况：

1. 若在激活过程中，更换用户OpenID重新生成链接，之前的认证会被清理。因此不要在认证过程中多人同时操作，导致认证过程互相影响。
2. 若您认证中发现信息有误需要重新认证，可以通过更换OpenID重新生成链接的方式，来清理掉已有的流程。
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
（https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html ）
半屏方式：
（https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html ）
其中小程序的原始Id，请联系<对接技术人员>获取，或者查看小程序信息自助获取。
使用CreateSignUrls，设置EndPoint为APP，得到path。

其中小程序的原始Id如下，或者查看小程序信息自助获取。

| 小程序 | AppID | 原始ID |
| ------------ | ------------ | ------------ |
| 腾讯电子签（正式版） | wxa023b292fd19d41d | gh_da88f6188665 |
| 腾讯电子签Demo | wx371151823f6f3edf | gh_39a5d3de69fa |
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
目前该接口只支持B2C，不建议使用，将会废弃。
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
