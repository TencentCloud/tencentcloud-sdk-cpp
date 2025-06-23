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
#include <tencentcloud/essbasic/v20210526/model/ArchiveDynamicFlowRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ArchiveDynamicFlowResponse.h>
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
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateDynamicFlowApproverRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreateDynamicFlowApproverResponse.h>
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
#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePrepareFlowGroupRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelCreatePrepareFlowGroupResponse.h>
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
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeAccountBillDetailRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeAccountBillDetailResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeBillUsageDetailRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeBillUsageDetailResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeEmployeesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeEmployeesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeFlowComponentsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeFlowComponentsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeOrganizationSealsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeOrganizationSealsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeRolesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeRolesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeSignFaceVideoRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeSignFaceVideoResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeUserAutoSignStatusRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeUserAutoSignStatusResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDisableUserAutoSignRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelDisableUserAutoSignResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelGetTaskResultApiRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelGetTaskResultApiResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelModifyRoleRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelModifyRoleResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelRenewAutoSignLicenseRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelRenewAutoSignLicenseResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelUpdateSealStatusRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelUpdateSealStatusResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelVerifyPdfRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelVerifyPdfResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateBatchInitOrganizationUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateBatchInitOrganizationUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateBatchOrganizationAuthorizationUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateBatchOrganizationAuthorizationUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateBatchOrganizationRegistrationTasksRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateBatchOrganizationRegistrationTasksResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelFlowEvidenceReportRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelFlowEvidenceReportResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelOrganizationInfoChangeUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelOrganizationInfoChangeUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelSubOrganizationActiveRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateChannelSubOrganizationActiveResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateCloseOrganizationUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateCloseOrganizationUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateConsoleLoginUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateEmployeeChangeUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateEmployeeChangeUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateEmployeeQualificationSealQrCodeRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateEmployeeQualificationSealQrCodeResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowBlockchainEvidenceUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowBlockchainEvidenceUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowForwardsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowForwardsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowGroupSignReviewRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowGroupSignReviewResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateLegalSealQrCodeRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateLegalSealQrCodeResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateModifyAdminAuthorizationUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateModifyAdminAuthorizationUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateOrganizationAuthFileRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateOrganizationAuthFileResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreatePartnerAutoSignAuthUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreatePartnerAutoSignAuthUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreatePersonAuthCertificateImageRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreatePersonAuthCertificateImageResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSealByImageRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSealByImageResponse.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSignUrlsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/CreateSignUrlsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DeleteOrganizationAuthorizationsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DeleteOrganizationAuthorizationsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeBatchOrganizationRegistrationTasksRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeBatchOrganizationRegistrationTasksResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeBatchOrganizationRegistrationUrlsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeBatchOrganizationRegistrationUrlsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeCancelFlowsTaskRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeCancelFlowsTaskResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeChannelFlowEvidenceReportRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeChannelFlowEvidenceReportResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeChannelOrganizationsRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeChannelOrganizationsResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeChannelSealPolicyWorkflowUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeChannelSealPolicyWorkflowUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeExtendedServiceAuthDetailRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeExtendedServiceAuthDetailResponse.h>
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
#include <tencentcloud/essbasic/v20210526/model/DescribeUserFlowTypeRequest.h>
#include <tencentcloud/essbasic/v20210526/model/DescribeUserFlowTypeResponse.h>
#include <tencentcloud/essbasic/v20210526/model/GetDownloadFlowUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/GetDownloadFlowUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ModifyExtendedServiceRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ModifyExtendedServiceResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ModifyFlowDeadlineRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ModifyFlowDeadlineResponse.h>
#include <tencentcloud/essbasic/v20210526/model/ModifyPartnerAutoSignAuthUrlRequest.h>
#include <tencentcloud/essbasic/v20210526/model/ModifyPartnerAutoSignAuthUrlResponse.h>
#include <tencentcloud/essbasic/v20210526/model/OperateChannelTemplateRequest.h>
#include <tencentcloud/essbasic/v20210526/model/OperateChannelTemplateResponse.h>
#include <tencentcloud/essbasic/v20210526/model/OperateTemplateRequest.h>
#include <tencentcloud/essbasic/v20210526/model/OperateTemplateResponse.h>
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

                typedef Outcome<Core::Error, Model::ArchiveDynamicFlowResponse> ArchiveDynamicFlowOutcome;
                typedef std::future<ArchiveDynamicFlowOutcome> ArchiveDynamicFlowOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ArchiveDynamicFlowRequest&, ArchiveDynamicFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ArchiveDynamicFlowAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ChannelCreateDynamicFlowApproverResponse> ChannelCreateDynamicFlowApproverOutcome;
                typedef std::future<ChannelCreateDynamicFlowApproverOutcome> ChannelCreateDynamicFlowApproverOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreateDynamicFlowApproverRequest&, ChannelCreateDynamicFlowApproverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreateDynamicFlowApproverAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ChannelCreatePrepareFlowGroupResponse> ChannelCreatePrepareFlowGroupOutcome;
                typedef std::future<ChannelCreatePrepareFlowGroupOutcome> ChannelCreatePrepareFlowGroupOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelCreatePrepareFlowGroupRequest&, ChannelCreatePrepareFlowGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelCreatePrepareFlowGroupAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ChannelDescribeAccountBillDetailResponse> ChannelDescribeAccountBillDetailOutcome;
                typedef std::future<ChannelDescribeAccountBillDetailOutcome> ChannelDescribeAccountBillDetailOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeAccountBillDetailRequest&, ChannelDescribeAccountBillDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeAccountBillDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelDescribeBillUsageDetailResponse> ChannelDescribeBillUsageDetailOutcome;
                typedef std::future<ChannelDescribeBillUsageDetailOutcome> ChannelDescribeBillUsageDetailOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeBillUsageDetailRequest&, ChannelDescribeBillUsageDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeBillUsageDetailAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ChannelDescribeSignFaceVideoResponse> ChannelDescribeSignFaceVideoOutcome;
                typedef std::future<ChannelDescribeSignFaceVideoOutcome> ChannelDescribeSignFaceVideoOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelDescribeSignFaceVideoRequest&, ChannelDescribeSignFaceVideoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelDescribeSignFaceVideoAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ChannelRenewAutoSignLicenseResponse> ChannelRenewAutoSignLicenseOutcome;
                typedef std::future<ChannelRenewAutoSignLicenseOutcome> ChannelRenewAutoSignLicenseOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelRenewAutoSignLicenseRequest&, ChannelRenewAutoSignLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelRenewAutoSignLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelUpdateSealStatusResponse> ChannelUpdateSealStatusOutcome;
                typedef std::future<ChannelUpdateSealStatusOutcome> ChannelUpdateSealStatusOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelUpdateSealStatusRequest&, ChannelUpdateSealStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelUpdateSealStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ChannelVerifyPdfResponse> ChannelVerifyPdfOutcome;
                typedef std::future<ChannelVerifyPdfOutcome> ChannelVerifyPdfOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ChannelVerifyPdfRequest&, ChannelVerifyPdfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChannelVerifyPdfAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchInitOrganizationUrlResponse> CreateBatchInitOrganizationUrlOutcome;
                typedef std::future<CreateBatchInitOrganizationUrlOutcome> CreateBatchInitOrganizationUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateBatchInitOrganizationUrlRequest&, CreateBatchInitOrganizationUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchInitOrganizationUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchOrganizationAuthorizationUrlResponse> CreateBatchOrganizationAuthorizationUrlOutcome;
                typedef std::future<CreateBatchOrganizationAuthorizationUrlOutcome> CreateBatchOrganizationAuthorizationUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateBatchOrganizationAuthorizationUrlRequest&, CreateBatchOrganizationAuthorizationUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchOrganizationAuthorizationUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchOrganizationRegistrationTasksResponse> CreateBatchOrganizationRegistrationTasksOutcome;
                typedef std::future<CreateBatchOrganizationRegistrationTasksOutcome> CreateBatchOrganizationRegistrationTasksOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateBatchOrganizationRegistrationTasksRequest&, CreateBatchOrganizationRegistrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchOrganizationRegistrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChannelFlowEvidenceReportResponse> CreateChannelFlowEvidenceReportOutcome;
                typedef std::future<CreateChannelFlowEvidenceReportOutcome> CreateChannelFlowEvidenceReportOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateChannelFlowEvidenceReportRequest&, CreateChannelFlowEvidenceReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelFlowEvidenceReportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChannelOrganizationInfoChangeUrlResponse> CreateChannelOrganizationInfoChangeUrlOutcome;
                typedef std::future<CreateChannelOrganizationInfoChangeUrlOutcome> CreateChannelOrganizationInfoChangeUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateChannelOrganizationInfoChangeUrlRequest&, CreateChannelOrganizationInfoChangeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelOrganizationInfoChangeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChannelSubOrganizationActiveResponse> CreateChannelSubOrganizationActiveOutcome;
                typedef std::future<CreateChannelSubOrganizationActiveOutcome> CreateChannelSubOrganizationActiveOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateChannelSubOrganizationActiveRequest&, CreateChannelSubOrganizationActiveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelSubOrganizationActiveAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloseOrganizationUrlResponse> CreateCloseOrganizationUrlOutcome;
                typedef std::future<CreateCloseOrganizationUrlOutcome> CreateCloseOrganizationUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateCloseOrganizationUrlRequest&, CreateCloseOrganizationUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloseOrganizationUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConsoleLoginUrlResponse> CreateConsoleLoginUrlOutcome;
                typedef std::future<CreateConsoleLoginUrlOutcome> CreateConsoleLoginUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateConsoleLoginUrlRequest&, CreateConsoleLoginUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConsoleLoginUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmployeeChangeUrlResponse> CreateEmployeeChangeUrlOutcome;
                typedef std::future<CreateEmployeeChangeUrlOutcome> CreateEmployeeChangeUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateEmployeeChangeUrlRequest&, CreateEmployeeChangeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmployeeChangeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmployeeQualificationSealQrCodeResponse> CreateEmployeeQualificationSealQrCodeOutcome;
                typedef std::future<CreateEmployeeQualificationSealQrCodeOutcome> CreateEmployeeQualificationSealQrCodeOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateEmployeeQualificationSealQrCodeRequest&, CreateEmployeeQualificationSealQrCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmployeeQualificationSealQrCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowBlockchainEvidenceUrlResponse> CreateFlowBlockchainEvidenceUrlOutcome;
                typedef std::future<CreateFlowBlockchainEvidenceUrlOutcome> CreateFlowBlockchainEvidenceUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateFlowBlockchainEvidenceUrlRequest&, CreateFlowBlockchainEvidenceUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowBlockchainEvidenceUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowForwardsResponse> CreateFlowForwardsOutcome;
                typedef std::future<CreateFlowForwardsOutcome> CreateFlowForwardsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateFlowForwardsRequest&, CreateFlowForwardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowForwardsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowGroupSignReviewResponse> CreateFlowGroupSignReviewOutcome;
                typedef std::future<CreateFlowGroupSignReviewOutcome> CreateFlowGroupSignReviewOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateFlowGroupSignReviewRequest&, CreateFlowGroupSignReviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowGroupSignReviewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowsByTemplatesResponse> CreateFlowsByTemplatesOutcome;
                typedef std::future<CreateFlowsByTemplatesOutcome> CreateFlowsByTemplatesOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateFlowsByTemplatesRequest&, CreateFlowsByTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowsByTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLegalSealQrCodeResponse> CreateLegalSealQrCodeOutcome;
                typedef std::future<CreateLegalSealQrCodeOutcome> CreateLegalSealQrCodeOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateLegalSealQrCodeRequest&, CreateLegalSealQrCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLegalSealQrCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModifyAdminAuthorizationUrlResponse> CreateModifyAdminAuthorizationUrlOutcome;
                typedef std::future<CreateModifyAdminAuthorizationUrlOutcome> CreateModifyAdminAuthorizationUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateModifyAdminAuthorizationUrlRequest&, CreateModifyAdminAuthorizationUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModifyAdminAuthorizationUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationAuthFileResponse> CreateOrganizationAuthFileOutcome;
                typedef std::future<CreateOrganizationAuthFileOutcome> CreateOrganizationAuthFileOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateOrganizationAuthFileRequest&, CreateOrganizationAuthFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationAuthFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePartnerAutoSignAuthUrlResponse> CreatePartnerAutoSignAuthUrlOutcome;
                typedef std::future<CreatePartnerAutoSignAuthUrlOutcome> CreatePartnerAutoSignAuthUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreatePartnerAutoSignAuthUrlRequest&, CreatePartnerAutoSignAuthUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePartnerAutoSignAuthUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonAuthCertificateImageResponse> CreatePersonAuthCertificateImageOutcome;
                typedef std::future<CreatePersonAuthCertificateImageOutcome> CreatePersonAuthCertificateImageOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreatePersonAuthCertificateImageRequest&, CreatePersonAuthCertificateImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonAuthCertificateImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSealByImageResponse> CreateSealByImageOutcome;
                typedef std::future<CreateSealByImageOutcome> CreateSealByImageOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSealByImageRequest&, CreateSealByImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSealByImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSignUrlsResponse> CreateSignUrlsOutcome;
                typedef std::future<CreateSignUrlsOutcome> CreateSignUrlsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::CreateSignUrlsRequest&, CreateSignUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOrganizationAuthorizationsResponse> DeleteOrganizationAuthorizationsOutcome;
                typedef std::future<DeleteOrganizationAuthorizationsOutcome> DeleteOrganizationAuthorizationsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DeleteOrganizationAuthorizationsRequest&, DeleteOrganizationAuthorizationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrganizationAuthorizationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchOrganizationRegistrationTasksResponse> DescribeBatchOrganizationRegistrationTasksOutcome;
                typedef std::future<DescribeBatchOrganizationRegistrationTasksOutcome> DescribeBatchOrganizationRegistrationTasksOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeBatchOrganizationRegistrationTasksRequest&, DescribeBatchOrganizationRegistrationTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchOrganizationRegistrationTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchOrganizationRegistrationUrlsResponse> DescribeBatchOrganizationRegistrationUrlsOutcome;
                typedef std::future<DescribeBatchOrganizationRegistrationUrlsOutcome> DescribeBatchOrganizationRegistrationUrlsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeBatchOrganizationRegistrationUrlsRequest&, DescribeBatchOrganizationRegistrationUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchOrganizationRegistrationUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCancelFlowsTaskResponse> DescribeCancelFlowsTaskOutcome;
                typedef std::future<DescribeCancelFlowsTaskOutcome> DescribeCancelFlowsTaskOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeCancelFlowsTaskRequest&, DescribeCancelFlowsTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCancelFlowsTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelFlowEvidenceReportResponse> DescribeChannelFlowEvidenceReportOutcome;
                typedef std::future<DescribeChannelFlowEvidenceReportOutcome> DescribeChannelFlowEvidenceReportOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeChannelFlowEvidenceReportRequest&, DescribeChannelFlowEvidenceReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelFlowEvidenceReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelOrganizationsResponse> DescribeChannelOrganizationsOutcome;
                typedef std::future<DescribeChannelOrganizationsOutcome> DescribeChannelOrganizationsOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeChannelOrganizationsRequest&, DescribeChannelOrganizationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelOrganizationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChannelSealPolicyWorkflowUrlResponse> DescribeChannelSealPolicyWorkflowUrlOutcome;
                typedef std::future<DescribeChannelSealPolicyWorkflowUrlOutcome> DescribeChannelSealPolicyWorkflowUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeChannelSealPolicyWorkflowUrlRequest&, DescribeChannelSealPolicyWorkflowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChannelSealPolicyWorkflowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtendedServiceAuthDetailResponse> DescribeExtendedServiceAuthDetailOutcome;
                typedef std::future<DescribeExtendedServiceAuthDetailOutcome> DescribeExtendedServiceAuthDetailOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeExtendedServiceAuthDetailRequest&, DescribeExtendedServiceAuthDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtendedServiceAuthDetailAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeUserFlowTypeResponse> DescribeUserFlowTypeOutcome;
                typedef std::future<DescribeUserFlowTypeOutcome> DescribeUserFlowTypeOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::DescribeUserFlowTypeRequest&, DescribeUserFlowTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserFlowTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDownloadFlowUrlResponse> GetDownloadFlowUrlOutcome;
                typedef std::future<GetDownloadFlowUrlOutcome> GetDownloadFlowUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::GetDownloadFlowUrlRequest&, GetDownloadFlowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDownloadFlowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExtendedServiceResponse> ModifyExtendedServiceOutcome;
                typedef std::future<ModifyExtendedServiceOutcome> ModifyExtendedServiceOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ModifyExtendedServiceRequest&, ModifyExtendedServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExtendedServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFlowDeadlineResponse> ModifyFlowDeadlineOutcome;
                typedef std::future<ModifyFlowDeadlineOutcome> ModifyFlowDeadlineOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ModifyFlowDeadlineRequest&, ModifyFlowDeadlineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowDeadlineAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPartnerAutoSignAuthUrlResponse> ModifyPartnerAutoSignAuthUrlOutcome;
                typedef std::future<ModifyPartnerAutoSignAuthUrlOutcome> ModifyPartnerAutoSignAuthUrlOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::ModifyPartnerAutoSignAuthUrlRequest&, ModifyPartnerAutoSignAuthUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPartnerAutoSignAuthUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateChannelTemplateResponse> OperateChannelTemplateOutcome;
                typedef std::future<OperateChannelTemplateOutcome> OperateChannelTemplateOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::OperateChannelTemplateRequest&, OperateChannelTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateChannelTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::OperateTemplateResponse> OperateTemplateOutcome;
                typedef std::future<OperateTemplateOutcome> OperateTemplateOutcomeCallable;
                typedef std::function<void(const EssbasicClient*, const Model::OperateTemplateRequest&, OperateTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OperateTemplateAsyncHandler;
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
                 *该接口用于结束动态签署方2.0的合同流程。


**功能开通**
- 动态签署方2.0功能的使用需要先<font color="red">联系产品经理开通模块化计费功能</font>，然后到控制台中打开此功能。详细的使用说明请参考<a href="https://qian.tencent.com/developers/company/dynamic_signer_v2" target="_blank">动态签署方2.0</a>文档。

**使用条件**
- 此接口只能在<font color="red">合同处于非终态且<b>所有的签署方都已经完成签署</b></font>。一旦合同进入终态（例如：过期、拒签、撤销或者调用过此接口成功过），将无法通过此接口结束合同流程。
                 * @param req ArchiveDynamicFlowRequest
                 * @return ArchiveDynamicFlowOutcome
                 */
                ArchiveDynamicFlowOutcome ArchiveDynamicFlow(const Model::ArchiveDynamicFlowRequest &request);
                void ArchiveDynamicFlowAsync(const Model::ArchiveDynamicFlowRequest& request, const ArchiveDynamicFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ArchiveDynamicFlowOutcomeCallable ArchiveDynamicFlowCallable(const Model::ArchiveDynamicFlowRequest& request);

                /**
                 *通过合同编号批量撤销合同，单次最多支持撤销100份合同。

适用场景：如果某个合同当前**至少还有一方没有签署**，则可通过该接口取消该合同流程。常用于合同发错、内容填错，需要及时撤销的场景。

- **可撤回合同状态**：未全部签署完成
- **不撤回合同状态**：已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等合同状态。

批量撤销结果可以通过接口返回的TaskId关联[批量撤销任务结果回调](https://qian.tencent.com/developers/partner/callback_types_contracts_sign#%E4%B9%9D-%E6%89%B9%E9%87%8F%E6%92%A4%E9%94%80%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)或通过接口[查询批量撤销合同结果](https://qian.tencent.com/developers/partnerApis/operateFlows/DescribeCancelFlowsTask)主动查询。


注:
- 有对应合同撤销权限的人:  <font color='red'>**合同的发起人（并已经授予撤销权限）或者发起人所在企业的超管、法人**</font>
- 签署完毕的合同需要双方走解除流程将合同作废，可以参考<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateReleaseFlow" target="_blank">发起解除合同流程接口</a>
- <font color='red'>只有撤销没有参与方签署过或只有自动签署签署过的合同，才会返还合同额度。</font>
- 撤销后可以看合同PDF内容的人员： 发起方的超管， 发起方自己，发起方撤销合同的操作人员，已经签署合同、已经填写合同、邀请填写已经补充信息的参与人员， 其他参与人员看不到合同的内容。
                 * @param req ChannelBatchCancelFlowsRequest
                 * @return ChannelBatchCancelFlowsOutcome
                 */
                ChannelBatchCancelFlowsOutcome ChannelBatchCancelFlows(const Model::ChannelBatchCancelFlowsRequest &request);
                void ChannelBatchCancelFlowsAsync(const Model::ChannelBatchCancelFlowsRequest& request, const ChannelBatchCancelFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelBatchCancelFlowsOutcomeCallable ChannelBatchCancelFlowsCallable(const Model::ChannelBatchCancelFlowsRequest& request);

                /**
                 *撤销签署流程接口

适用场景：如果某个合同流程当前至少还有一方没有签署，则可通过该接口取消该合同流程。常用于合同发错、内容填错，需要及时撤销的场景。

- **可撤回合同状态**：未全部签署完成
- **不撤回合同状态**：已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等合同状态。

注:
- 有对应合同撤销权限的人:  <font color='red'>**合同的发起人（并已经授予撤销权限）或者发起人所在企业的超管、法人**</font>
- 签署完毕的合同需要双方走解除流程将合同作废，可以参考<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateReleaseFlow" target="_blank">发起解除合同流程接口</a>
- <font color='red'>只有撤销没有参与方签署过或只有自动签署签署过的合同，才会返还合同额度。</font>
- 撤销后可以看合同PDF内容的人员： 发起方的超管， 发起方自己，发起方撤销合同的操作人员，已经签署合同、已经填写合同、邀请填写已经补充信息的参与人员， 其他参与人员看不到合同的内容。
                 * @param req ChannelCancelFlowRequest
                 * @return ChannelCancelFlowOutcome
                 */
                ChannelCancelFlowOutcome ChannelCancelFlow(const Model::ChannelCancelFlowRequest &request);
                void ChannelCancelFlowAsync(const Model::ChannelCancelFlowRequest& request, const ChannelCancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCancelFlowOutcomeCallable ChannelCancelFlowCallable(const Model::ChannelCancelFlowRequest& request);

                /**
                 *此接口（CancelMultiFlowSignQRCode）用于废除取消一码多签签署码。
该接口所需的二维码ID，源自[创建一码多签签署码](https://qian.tencent.com/developers/partnerApis/templates/ChannelCreateMultiFlowSignQRCode)生成的。
如果该签署码尚处于有效期内，可通过本接口将其设置为失效状态。
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
                 *通过合同编号生成批量撤销合同的链接，单次最多支持撤销100份合同,   返回的链接需要有此权限的人<font color='red'>**合同的发起人（并已经授予撤销权限）或者发起人所在企业的超管、法人**</font>在<font color='red'>**手机端**</font>打开,  跳转到腾讯电子签小程序输入撤销原因来进行撤销合同

适用场景：如果某个合同当前**至少还有一方没有签署**，则可通过该接口取消该合同流程。常用于合同发错、内容填错，需要及时撤销的场景。

- **可撤回合同状态**：未全部签署完成
- **不撤回合同状态**：已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等合同状态。

批量撤销结果可以通过接口返回的TaskId关联[批量撤销任务结果回调](https://qian.tencent.com/developers/partner/callback_types_contracts_sign#%E4%B9%9D-%E6%89%B9%E9%87%8F%E6%92%A4%E9%94%80%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)或通过接口[查询批量撤销合同结果](https://qian.tencent.com/developers/partnerApis/operateFlows/DescribeCancelFlowsTask)主动查询。

注:
- 签署完毕的合同需要双方走解除流程将合同作废，可以参考<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateReleaseFlow" target="_blank">发起解除合同流程接口</a>
- <font color='red'>只有撤销没有参与方签署过或只有自动签署签署过的合同，才会返还合同额度。</font>
- 撤销后可以看合同PDF内容的人员： 发起方的超管， 发起方自己，发起方撤销合同的操作人员，已经签署合同、已经填写合同、邀请填写已经补充信息的参与人员， 其他参与人员看不到合同的内容。
                 * @param req ChannelCreateBatchCancelFlowUrlRequest
                 * @return ChannelCreateBatchCancelFlowUrlOutcome
                 */
                ChannelCreateBatchCancelFlowUrlOutcome ChannelCreateBatchCancelFlowUrl(const Model::ChannelCreateBatchCancelFlowUrlRequest &request);
                void ChannelCreateBatchCancelFlowUrlAsync(const Model::ChannelCreateBatchCancelFlowUrlRequest& request, const ChannelCreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateBatchCancelFlowUrlOutcomeCallable ChannelCreateBatchCancelFlowUrlCallable(const Model::ChannelCreateBatchCancelFlowUrlRequest& request);

                /**
                 *该接口用于发起合同后，生成个人/企业用户的批量待办链接。
**注意：**
1. 该接口可生成签署人的批量、合同组签署/查看链接 。
2. 该签署链接**有效期为30分钟**，过期后将失效，如需签署可重新创建批量签署链接 。
4. 该接口返回的签署链接适用于APP集成的场景，支持APP打开或浏览器直接打开，**不支持微信小程序嵌入**。
跳转到小程序的实现，参考微信官方文档(分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式)，如何配置也可以请参考: <a href="https://qian.tencent.com/developers/company/openwxminiprogram">跳转电子签小程序配置</a>。
6. 因h5涉及人脸身份认证能力基于慧眼人脸核身，对Android和iOS系统均有一定要求， 因此<font color='red'>App嵌入H5签署合同需要按照慧眼提供的<a href="https://cloud.tencent.com/document/product/1007/61076">慧眼人脸核身兼容性文档</a>做兼容性适配</font>。
7. H5签署现在仅支持中国大陆身份证和中国港澳台居民居住证。
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
- 使用此接口生成链接，需要提前开通 `个人签署方仅校验手机号` 功能，在 `腾讯电子签网页端-企业设置-拓展服务` 中可以找到。
- 个人参与方点击链接后需短信验证码才能查看合同内容。
- 个人用户批量签署，需要传Name，Mobile，IdCardNumber(IdCardType) 参数。
- saas企业员工用户批量签署，在传递了姓名等基本信息参数的情况下，还需要传OrganizationName（参与方所在企业名称）参数生成签署链接，<font color="red">请确保此企业已完成腾讯电子签企业认证</font>。
- 子客企业员工用户批量签署，需要传递员工OpenId和子客企业的OrganizationOpenId。<font color="red">请确保此OrganizationOpenId对应子客已经认证，且OpenId对应员工此子客下已经实名</font>。Name，Mobile, IdCard等信息此时可以不传，系统会查询此OpenId实名信息自动补充。
- 生成批量签署链接时，合同目标参与方状态需为<font color="red">待签署</font>状态。
- 个人批量签署进行的合同的签名区， 全部变成<font color="red">手写签名</font>（不管合同里边设置的签名限制）来进行。
- 不支持签署方含有签批控件，或设置了签署方在签署时自行添加签署控件功能的合同进行批量签署。
- 进行小程序批量签署必须指定待签署的流程id，<font color="red">接口中FlowIds参数必传。</font>
                 * @param req ChannelCreateBatchSignUrlRequest
                 * @return ChannelCreateBatchSignUrlOutcome
                 */
                ChannelCreateBatchSignUrlOutcome ChannelCreateBatchSignUrl(const Model::ChannelCreateBatchSignUrlRequest &request);
                void ChannelCreateBatchSignUrlAsync(const Model::ChannelCreateBatchSignUrlRequest& request, const ChannelCreateBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateBatchSignUrlOutcomeCallable ChannelCreateBatchSignUrlCallable(const Model::ChannelCreateBatchSignUrlRequest& request);

                /**
                 *此接口（ChannelCreateBoundFlows）用于子客企业领取未归属给员工的合同，将合同领取给当前员工，合同不能重复领取。


**未归属合同发起方式**
 指定对应企业的OrganizationOpenId和OrganizationName而不指定具体的参与人(OpenId/名字/手机号等),  则合同进入待领取状态, 示例代码如下
```
		FlowApprovers: []*essbasic.FlowApproverInfo{
			{
				ApproverType:       common.StringPtr("ORGANIZATION"),
				OrganizationOpenId: common.StringPtr("org_dianziqian"),
				OrganizationName:   common.StringPtr("典子谦示例企业"),
			}
		},
```

可以<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录控制台查看带领取的合同
![image](https://qcloudimg.tencent-cloud.cn/raw/a34d0cc56ec871613e94dfc6252bc072.png)

注: 
1. 支持批量领取,  如果有一个合同流程无法领取会导致接口报错,  使得所有合同都领取失败
2. 只有企业的<font color="red">超管或者法人</font>才能进行合同的领取
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
                 *接口（ChannelCreateDynamicFlowApprover）用来补充<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowByFiles" target="_blank">用PDF文件创建签署流程</a>发起的动态合同的签署人信息
**注**: 
<ul>
<li>此接口需要保证：渠道企业已开启：模块化计费能力，</li>
<li>此接口需要保证：渠道应用已开启：动态签署人2.0能力</li>
<li>此接口需要保证：合同发起时指定开启了动态合同</li>
<li>此接口补充的动态签署人传参规则，请参考接口：<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowByFiles" target="_blank">用PDF文件创建签署流程</a>的签署人传参规则</li>
</ul>
                 * @param req ChannelCreateDynamicFlowApproverRequest
                 * @return ChannelCreateDynamicFlowApproverOutcome
                 */
                ChannelCreateDynamicFlowApproverOutcome ChannelCreateDynamicFlowApprover(const Model::ChannelCreateDynamicFlowApproverRequest &request);
                void ChannelCreateDynamicFlowApproverAsync(const Model::ChannelCreateDynamicFlowApproverRequest& request, const ChannelCreateDynamicFlowApproverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateDynamicFlowApproverOutcomeCallable ChannelCreateDynamicFlowApproverCallable(const Model::ChannelCreateDynamicFlowApproverRequest& request);

                /**
                 *本接口（ChannelCreateEmbedWebUrl）用于创建可嵌入web页面的URL（此web页面可以通过iframe方式嵌入到贵方系统的网页中），支持以下类型的Web链接创建：
1. 创建印章
2. 创建模板
3. 修改模板
4. 预览模板
5. 预览合同流程

预览模板的嵌入页面长相如下：
![image](https://qcloudimg.tencent-cloud.cn/raw/57bdda4a884e3f5b2de12d5a282a3651.png)

预览合同流程的嵌入页面长相如下：
![image](https://qcloudimg.tencent-cloud.cn/raw/dc7af994e2f6da56bdad5975e927de34.png)
                 * @param req ChannelCreateEmbedWebUrlRequest
                 * @return ChannelCreateEmbedWebUrlOutcome
                 */
                ChannelCreateEmbedWebUrlOutcome ChannelCreateEmbedWebUrl(const Model::ChannelCreateEmbedWebUrlRequest &request);
                void ChannelCreateEmbedWebUrlAsync(const Model::ChannelCreateEmbedWebUrlRequest& request, const ChannelCreateEmbedWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateEmbedWebUrlOutcomeCallable ChannelCreateEmbedWebUrlCallable(const Model::ChannelCreateEmbedWebUrlRequest& request);

                /**
                 ***适用场景**：
当通过模板或文件发起合同时，若未指定企业签署人信息，则可调用此接口动态补充签署人。同一签署人只允许补充一人，最终实际签署人取决于谁先领取合同完成签署。

**接口使用说明**：

1.本接口现已支持批量补充签署人

2.当<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中指定需要补充的FlowId时，可以对指定合同补充签署人；可以指定多个相同发起方的不同合同在完成批量补充

3.当<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口入参</a>中指定需要补充的FlowId时，是对指定的合同补充多个指定的签署人

4.如果同时指定了<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId和<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口入参</a>中的FlowId，仅使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId作为补充的合同

5.如果部分指定了<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId，又指定了<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口入参</a>中的FlowId；那么<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>存在指定的FlowId，则使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId，不存在则使用<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口入参</a>中的FlowId作为补充的合同


6.如果同时未指定了<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#fillapproverinfo/" target="_blank">补充签署人结构体</a>中的FlowId和<a href="https://qian.tencent.com/developers/partnerApis/flows/ChannelCreateFlowApprovers/" target="_blank">补充签署人接口入参</a>中的FlowId，则传参错误

**限制条件**：
1. 本企业（发起方企业）企业签署人仅支持通过企业名称+姓名+手机号进行补充。
2. 个人签署人支持通过姓名+手机号进行补充，补充动态签署人时：若个人用户已完成实名，则可通过姓名+证件号码进行补充。
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

![image](https://qcloudimg.tencent-cloud.cn/raw/bf86248a2c163228c4e894cf5926af69/ChannelCreateFlowByFiles.png)

**可以作为发起方和签署方的角色列表**
<table>     <thead>     <tr>         <th>场景编号</th>         <th>发起方</th>         <th>签署方</th>         <th>补充</th>     </tr>     </thead>     <tbody>     <tr>         <td>场景一</td>         <td>子企业A的员工</td>         <td>子企业A的员工</td>         <td>子企业是通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">CreateConsoleLoginUrl</a>生成子客登录链接注册的企业</td>     </tr>     <tr>         <td>场景二</td>         <td>子企业A的员工</td>         <td>子企业B(不指定经办人走领取逻辑)</td>         <td>领取的逻辑可以参考文档<a href="https://qian.tencent.com/developers/partner/dynamic_signer" target="_blank">动态签署方</a> </td>     </tr>     <tr>         <td>场景三</td>         <td>子企业A的员工</td>         <td>子企业B的员工</td>         <td>-</td>     </tr>     <tr>         <td>场景四</td>         <td>子企业A的员工</td>         <td>个人</td>         <td>就是自然人，不是企业员工</td>     </tr>     <tr>         <td>场景五</td>         <td>子企业A的员工</td>         <td>SaaS平台企业员工</td>         <td>SaaS平台企业是通过<a href="https://qian.tencent.cn/console/company-register" target="_blank">https://qian.tencent.cn/console/company-register</a>链接注册的企业</td>     </tr>     </tbody> </table>


**注**: 
`1. 发起合同时候,  作为发起方的第三方子企业A员工的企业和员工必须经过实名, 而作为签署方的第三方子企业A员工/个人/自然人/SaaS平台企业员工/第三方子企业B员工企业中的企业和个人/员工可以未实名`

`2. 不同类型的签署方传参不同, 可以参考开发者中心的FlowApproverInfo结构体说明`

`3. 合同发起后就会扣减合同的额度, 只有撤销没有参与方签署过或只有自动签署签署过的合同，才会返还合同额度。（过期，拒签，签署完成，解除完成等状态不会返还额度）`

`4. 静默（自动）签署不支持合同签署方存在填写功能`

<font color="red">相关视频指引</font> <br>
1. <a href="https://dyn.ess.tencent.cn/guide/apivideo/essbasic-UploadFiles.mp4" target="_blank">【上传文件代码】编写示例</a><br>
1. <a href="https://dyn.ess.tencent.cn/guide/apivideo/essbasic-ChannelCreateFlowByFiles.mp4" target="_blank">【用PDF文件创建签署流程】编写示例</a><br>
                 * @param req ChannelCreateFlowByFilesRequest
                 * @return ChannelCreateFlowByFilesOutcome
                 */
                ChannelCreateFlowByFilesOutcome ChannelCreateFlowByFiles(const Model::ChannelCreateFlowByFilesRequest &request);
                void ChannelCreateFlowByFilesAsync(const Model::ChannelCreateFlowByFilesRequest& request, const ChannelCreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowByFilesOutcomeCallable ChannelCreateFlowByFilesCallable(const Model::ChannelCreateFlowByFilesRequest& request);

                /**
                 *接口（ChannelCreateFlowGroupByFiles）用于使用 PDF 文件创建合同组签署流程。

- 该接口允许通过选择多个模板一次性创建多个合同，这些合同被组织在一个合同组中。
- 每个签署方将收到一个签署链接，通过这个链接可以访问并签署合同组中的所有合同。
- 合同组中的合同必须作为一个整体进行签署，不能将合同组拆分成单独的合同进行逐一签署。

<img src="https://qcloudimg.tencent-cloud.cn/raw/a63074a0293c9ff5bf6c0bb74c0d3b20.png"   width="400" />


### 2. 适用场景

该接口适用于需要一次性完成多份合同签署的情况，多份合同一般具有关联性，用户以目录的形式查看合同。

### 3. 发起方要求和签署方实名要求
- **发起方要求**：作为合同发起方的第三方子企业A的员工必须进行实名认证。
- **签署方要求**：签署方可以是多种身份（如第三方子企业的员工、个人、SaaS平台企业员工），其中企业和员工可以不进行实名认证。

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
<td>第三方子企业B员工</td>
</tr>

<tr>
<td>场景三</td>
<td>第三方子企业A员工</td>
<td>个人/自然人</td>
</tr>

<tr>
<td>场景四</td>
<td>第三方子企业A员工</td>
<td>SaaS平台企业员工</td>
</tr>
</tbody>
</table>

### 4. 签署方参数差异
- 根据签署方的不同类型（第三方子企业的员工、个人、SaaS平台企业员工），传递的参数也不同。具体参数的结构和要求可以参考开发者中心提供的 `FlowApproverInfo` 结构体说明。

### 5. 合同额度的扣减与返还
- **扣减时机**：合同一旦发起，相关的合同额度就会被扣减，合同组下面的每个合同都要扣减一个合同额度。
- **返还条件**：只有在合同被撤销且没有任何签署方签署过，或者只有自动签署的情况下，合同额度才会被返还。
- **不返还的情况**：如果合同已过期、被拒签、签署完成或已解除，合同额度将不会被返还。

### 6. 静默（自动）签署的限制
- 在使用静默（自动）签署功能时，合同签署方不能有填写控件。<font color="red">此接口静默签(企业自动签)能力为白名单功能</font>，使用前请联系对接的客户经理沟通。

### 7.合同组暂不支持抄送功能
                 * @param req ChannelCreateFlowGroupByFilesRequest
                 * @return ChannelCreateFlowGroupByFilesOutcome
                 */
                ChannelCreateFlowGroupByFilesOutcome ChannelCreateFlowGroupByFiles(const Model::ChannelCreateFlowGroupByFilesRequest &request);
                void ChannelCreateFlowGroupByFilesAsync(const Model::ChannelCreateFlowGroupByFilesRequest& request, const ChannelCreateFlowGroupByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowGroupByFilesOutcomeCallable ChannelCreateFlowGroupByFilesCallable(const Model::ChannelCreateFlowGroupByFilesRequest& request);

                /**
                 *接口（ChannelCreateFlowGroupByTemplates）用于通过多模板创建合同组签署流程。

- 该接口允许通过选择多个模板一次性创建多个合同，这些合同被组织在一个合同组中。
- 每个签署方将收到一个签署链接，通过这个链接可以访问并签署合同组中的所有合同。
- 合同组中的合同必须作为一个整体进行签署，不能将合同组拆分成单独的合同进行逐一签署。

<img src="https://qcloudimg.tencent-cloud.cn/raw/a63074a0293c9ff5bf6c0bb74c0d3b20.png"   width="400" />

### 2. 适用场景

该接口适用于需要一次性完成多份合同签署的情况，多份合同一般具有关联性，用户以目录的形式查看合同。

### 3. 发起方要求和签署方实名要求
- **发起方要求**：作为合同发起方的第三方子企业A的员工必须进行实名认证。
- **签署方要求**：签署方可以是多种身份（如第三方子企业的员工、个人、SaaS平台企业员工），其中企业和员工可以不进行实名认证。

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
<td>第三方子企业B员工</td>
</tr>

<tr>
<td>场景三</td>
<td>第三方子企业A员工</td>
<td>个人/自然人</td>
</tr>

<tr>
<td>场景四</td>
<td>第三方子企业A员工</td>
<td>SaaS平台企业员工</td>
</tr>
</tbody>
</table>

### 4. 签署方参数差异
- 根据签署方的不同类型（第三方子企业的员工、个人、SaaS平台企业员工），传递的参数也不同。具体参数的结构和要求可以参考开发者中心提供的 `FlowApproverInfo` 结构体说明。

### 5. 合同额度的扣减与返还
- **扣减时机**：合同一旦发起，相关的合同额度就会被扣减，合同组下面的每个合同都要扣减一个合同额度。
- **返还条件**：只有在合同被撤销且没有任何签署方签署过，或者只有自动签署的情况下，合同额度才会被返还。
- **不返还的情况**：如果合同已过期、被拒签、签署完成或已解除，合同额度将不会被返还。

### 6. 静默（自动）签署的限制
- 在使用静默（自动）签署功能时，合同签署方不能有填写控件。<font color="red">此接口静默签(企业自动签)能力为白名单功能</font>，使用前请联系对接的客户经理沟通。

### 7.合同组暂不支持抄送功能
                 * @param req ChannelCreateFlowGroupByTemplatesRequest
                 * @return ChannelCreateFlowGroupByTemplatesOutcome
                 */
                ChannelCreateFlowGroupByTemplatesOutcome ChannelCreateFlowGroupByTemplates(const Model::ChannelCreateFlowGroupByTemplatesRequest &request);
                void ChannelCreateFlowGroupByTemplatesAsync(const Model::ChannelCreateFlowGroupByTemplatesRequest& request, const ChannelCreateFlowGroupByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowGroupByTemplatesOutcomeCallable ChannelCreateFlowGroupByTemplatesCallable(const Model::ChannelCreateFlowGroupByTemplatesRequest& request);

                /**
                 *指定需要批量催办的签署流程ID，批量催办合同，最多100个。需要符合以下条件的合同才可被催办
1. 合同中当前状态为 **待签署** 的签署人是催办的对象
2. **每个合同只能催办一次**

**催办的效果**: 对方会收到如下的短信通知

![image](https://qcloudimg.tencent-cloud.cn/raw/3caf94b7f540fa5736270d38528d3a7b.png)


**注**：`合同催办是白名单功能，请联系客户经理申请开白后使用`
                 * @param req ChannelCreateFlowRemindsRequest
                 * @return ChannelCreateFlowRemindsOutcome
                 */
                ChannelCreateFlowRemindsOutcome ChannelCreateFlowReminds(const Model::ChannelCreateFlowRemindsRequest &request);
                void ChannelCreateFlowRemindsAsync(const Model::ChannelCreateFlowRemindsRequest& request, const ChannelCreateFlowRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowRemindsOutcomeCallable ChannelCreateFlowRemindsCallable(const Model::ChannelCreateFlowRemindsRequest& request);

                /**
                 *提交企业流程审批结果 
**当前存在两种审核操作：**
<ul>
<li>签署审核
<ul>
<li>在通过接口<ul><li>CreateFlowsByTemplates</li><li>ChannelCreateFlowByFiles</li><li>ChannelCreateFlowGroupByTemplates</li><li>ChannelCreateFlowGroupByFiles</li><li>ChannelCreatePrepareFlow</li></ul> 发起签署流程时，通过指定NeedSignReview为true，则可以调用此接口，并指定operate=SignReview，以提交企业内部签署审批结果</li>
<li>在通过接口<ul><li>CreateFlowsByTemplates</li><li>ChannelCreateFlowByFiles</li><li>ChannelCreateFlowGroupByTemplates</li><li>ChannelCreateFlowGroupByFiles</li></ul>发起签署流程时，通过指定签署人ApproverNeedSignReview为true，则可以调用此接口，并指定operate=SignReview，并指定RecipientId，以提交企业内部签署审批结果</li>
</ul>
</li>
<li>发起审核
 <ul>
<li>通过接口ChannelCreatePrepareFlow指定发起后需要审核，那么可以调用此接口，并指定operate=CreateReview，以提交企业内部审批结果。可以多次提交审批结果，但一旦审批通过，后续提交的结果将无效
</li>
</ul>
</li>
</ul>
                 * @param req ChannelCreateFlowSignReviewRequest
                 * @return ChannelCreateFlowSignReviewOutcome
                 */
                ChannelCreateFlowSignReviewOutcome ChannelCreateFlowSignReview(const Model::ChannelCreateFlowSignReviewRequest &request);
                void ChannelCreateFlowSignReviewAsync(const Model::ChannelCreateFlowSignReviewRequest& request, const ChannelCreateFlowSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowSignReviewOutcomeCallable ChannelCreateFlowSignReviewCallable(const Model::ChannelCreateFlowSignReviewRequest& request);

                /**
                 *该接口用于发起合同后，生成用户的签署链接 <br/>

**注意**
1. 该签署**链接有效期为30分钟**，过期后将失效，如需签署可重新创建签署链接 。
2. 该接口返回的签署链接适用于APP集成的场景，支持APP打开或浏览器直接打开，**不支持微信小程序嵌入**。配置方式请参考：<a href="https://qian.tencent.com/developers/company/openqianh5/">跳转电子签H5</a>。
如需跳转到小程序的实现，参考微信官方文档（分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式），如何配置也可以请参考: <a href="https://qian.tencent.com/developers/company/openwxminiprogram">跳转电子签小程序配置</a>。
3. 因h5涉及人脸身份认证能力基于慧眼人脸核身，对Android和iOS系统均有一定要求， 因此<font color='red'>App嵌入H5签署合同需要按照慧眼提供的<a href="https://cloud.tencent.com/document/product/1007/61076">慧眼人脸核身兼容性文档</a>做兼容性适配</font>。
4. H5签署现在仅支持中国大陆身份证和中国港澳台居民居住证。
                 * @param req ChannelCreateFlowSignUrlRequest
                 * @return ChannelCreateFlowSignUrlOutcome
                 */
                ChannelCreateFlowSignUrlOutcome ChannelCreateFlowSignUrl(const Model::ChannelCreateFlowSignUrlRequest &request);
                void ChannelCreateFlowSignUrlAsync(const Model::ChannelCreateFlowSignUrlRequest& request, const ChannelCreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateFlowSignUrlOutcomeCallable ChannelCreateFlowSignUrlCallable(const Model::ChannelCreateFlowSignUrlRequest& request);

                /**
                 *此接口（ChannelCreateMultiFlowSignQRCode）用于创建一码多签签署码。 

**适用场景**:
签署人可通过扫描二维码补充签署信息进行实名签署。常用于提前不知道签署人的身份信息场景，例如：劳务工招工、大批量员工入职等场景。

**注意**:
1.满足以下条件的模板支持创建签署码： 
 - 签署对象：企业与个人（无序签署）、企业与个人（顺序签署&企业非首位）、 仅个人签署。
 - 其发起方没有填写控件,签署方（B端或C端）可以有填写控件。 
 - 如签署对象中含企业方，企业方签署区只能由发起方企业签署。

2. 通过扫描一码多签签署码发起的合同，合同涉及到的回调消息可参考文档[合同发起及签署相关回调
]( https://qian.tencent.com/developers/partner/callback_types_contracts_sign)
3. 用户通过扫描一码多签签署码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档[签署二维码相关回调](https://qian.tencent.com/developers/partner/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83)

签署码的样式如下图:
![image](https://qcloudimg.tencent-cloud.cn/raw/27317cf5aacb094fb1dc6f94179a5148.png )
                 * @param req ChannelCreateMultiFlowSignQRCodeRequest
                 * @return ChannelCreateMultiFlowSignQRCodeOutcome
                 */
                ChannelCreateMultiFlowSignQRCodeOutcome ChannelCreateMultiFlowSignQRCode(const Model::ChannelCreateMultiFlowSignQRCodeRequest &request);
                void ChannelCreateMultiFlowSignQRCodeAsync(const Model::ChannelCreateMultiFlowSignQRCodeRequest& request, const ChannelCreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateMultiFlowSignQRCodeOutcomeCallable ChannelCreateMultiFlowSignQRCodeCallable(const Model::ChannelCreateMultiFlowSignQRCodeRequest& request);

                /**
                 *通过此接口，可以创建企业批量签署链接，员工只需点击链接即可跳转至控制台进行批量签署。

注：
- 员工必须在企业下完成实名认证，且需作为批量签署合同的签署方或者领取方。
- 仅支持传入待签署或者待领取的合同，待填写暂不支持。
- 员工批量签署，支持多种签名方式，包括手写签名、临摹签名、系统签名、个人印章、签批控件等。

签署的嵌入页面长相如下：
![image](https://qcloudimg.tencent-cloud.cn/raw/a4754bc835a3f837ddec1e28b02ed9c0.png)
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
                 *通过此接口指定合同、签署人、填写控件等信息，生成嵌入式链接，此链接可以嵌入到其他网页或者直接打开，打开后进入发起页面。在此页面上，合同信息和签署人信息均不可更改。

注意：
1. <font color="red">仅支持在PC浏览器</font>上进行操作和使用。
2. 在使用<font color="red">模板发起合同时，需指定RecipientId</font>以明确参与方在模板中所扮演的角色。

**嵌入式签署人-各种场景传参说明**:

<table>
<thead>
<tr>
<th>场景编号</th>
<th>可作为签署方的类型</th>
<th>签署方传参说明</th>
</tr>
</thead>

<tbody>
<tr>
<td>场景一</td>
<td>第三方子企业员工</td>
<td>OpenId、OrganizationName、OrganizationOpenId必传 ,ApproverType设置为0</td>
</tr>
<tr>
<td>场景二</td>
<td>SaaS平台企业员工</td>
<td>Name、Mobile、OrganizationName必传，NotChannelOrganization=True。 ApproverType设置为0</td>
</tr>
<tr>
<td>场景三</td>
<td>个人/自然人</td>
<td>Name、Mobile必传, ApproverType设置为1</td>
</tr>
</tbody>
</table>

嵌入的页面样式如下：
![image](https://qcloudimg.tencent-cloud.cn/raw/b2ae013fb4d747891dd3815bbe897208.png)
                 * @param req ChannelCreatePrepareFlowRequest
                 * @return ChannelCreatePrepareFlowOutcome
                 */
                ChannelCreatePrepareFlowOutcome ChannelCreatePrepareFlow(const Model::ChannelCreatePrepareFlowRequest &request);
                void ChannelCreatePrepareFlowAsync(const Model::ChannelCreatePrepareFlowRequest& request, const ChannelCreatePrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreatePrepareFlowOutcomeCallable ChannelCreatePrepareFlowCallable(const Model::ChannelCreatePrepareFlowRequest& request);

                /**
                 *接口（ChannelCreatePrepareFlowGroup）用于创建嵌入式合同组签署流程。

- 该接口当前仅支持文件发起
- 该接口能力和ChannelCreateFlowGroupByFiles，~~ChannelCreateFlowGroupByTemplates~~保持一致。
- 返回的FlowGroupId 为临时id，只有在页面内成功发起后FlowGroupId才会有效。
                 * @param req ChannelCreatePrepareFlowGroupRequest
                 * @return ChannelCreatePrepareFlowGroupOutcome
                 */
                ChannelCreatePrepareFlowGroupOutcome ChannelCreatePrepareFlowGroup(const Model::ChannelCreatePrepareFlowGroupRequest &request);
                void ChannelCreatePrepareFlowGroupAsync(const Model::ChannelCreatePrepareFlowGroupRequest& request, const ChannelCreatePrepareFlowGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreatePrepareFlowGroupOutcomeCallable ChannelCreatePrepareFlowGroupCallable(const Model::ChannelCreatePrepareFlowGroupRequest& request);

                /**
                 *本接口（ChannelCreatePreparedPersonalEsign）用于创建导入个人印章（处方单场景专用，使用此接口请与客户经理确认）。
                 * @param req ChannelCreatePreparedPersonalEsignRequest
                 * @return ChannelCreatePreparedPersonalEsignOutcome
                 */
                ChannelCreatePreparedPersonalEsignOutcome ChannelCreatePreparedPersonalEsign(const Model::ChannelCreatePreparedPersonalEsignRequest &request);
                void ChannelCreatePreparedPersonalEsignAsync(const Model::ChannelCreatePreparedPersonalEsignRequest& request, const ChannelCreatePreparedPersonalEsignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreatePreparedPersonalEsignOutcomeCallable ChannelCreatePreparedPersonalEsignCallable(const Model::ChannelCreatePreparedPersonalEsignRequest& request);

                /**
                 *发起解除协议的主要应用场景为：基于一份已经签署的合同(签署流程)，进行解除操作。
解除协议的模板是官方提供，经过提供法务审核，暂不支持自定义。具体用法可以参考文档[合同解除](https://qian.tencent.com/developers/partner/flow_release)。

注意：
<ul><li><code>原合同必须签署完</code>成后才能发起解除协议。</li>
<li>只有原合同企业类型的参与人才能发起解除协议，<code>个人参与方不能发起解除协议</code>。</li>
<li>原合同个人类型参与人必须是解除协议的参与人，<code>不能更换其他第三方个人</code>参与解除协议。</li>
<li>如果原合同企业参与人无法参与解除协议，可以指定同企业具有同等权限的<code>企业员工代为处理</code>。</li>
<li>发起解除协议同发起其他企业合同一样，也会参与合同<code>扣费</code>，扣费标准同其他类型合同。</li>
<li>在解除协议签署完毕后，原合同变为已解除状态。</li>
<li>非原合同企业参与人发起解除协议时，需要有<code>解除合同的权限</code>。</li>
</ul>
                 * @param req ChannelCreateReleaseFlowRequest
                 * @return ChannelCreateReleaseFlowOutcome
                 */
                ChannelCreateReleaseFlowOutcome ChannelCreateReleaseFlow(const Model::ChannelCreateReleaseFlowRequest &request);
                void ChannelCreateReleaseFlowAsync(const Model::ChannelCreateReleaseFlowRequest& request, const ChannelCreateReleaseFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelCreateReleaseFlowOutcomeCallable ChannelCreateReleaseFlowCallable(const Model::ChannelCreateReleaseFlowRequest& request);

                /**
                 *此接口（ChannelCreateRole）用来创建企业自定义角色。

适用场景1：创建当前企业的自定义角色，并且创建时不进行权限的设置（PermissionGroups 参数不传），角色中的权限内容可通过接口 ChannelModifyRole 完成更新。

适用场景2：创建当前企业的自定义角色，并且创建时进行权限的设置（PermissionGroups 参数要传），权限树内容 PermissionGroups 可参考[查询角色列表接口](https://qian.tencent.com/developers/partnerApis/accounts/ChannelDescribeRoles) 的输出。此处注意权限树内容可能会更新，需尽量拉取最新的权限树内容，并且权限树内容 PermissionGroups 必须是一颗完整的权限树。
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
                 *获取个人用户自动签的开通链接。

注意: `处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。`
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
                 *使用此接口，用来绑定企业实名员工的角色，
支持以电子签userId、客户系统openId两种方式进行绑定。

对应控制台的操作如下图
![image](https://qcloudimg.tencent-cloud.cn/raw/5b41194d3cb3f2058ec0ba0fb5ebc6a6.png)
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

注：**系统角色不可删除。**
                 * @param req ChannelDeleteRoleRequest
                 * @return ChannelDeleteRoleOutcome
                 */
                ChannelDeleteRoleOutcome ChannelDeleteRole(const Model::ChannelDeleteRoleRequest &request);
                void ChannelDeleteRoleAsync(const Model::ChannelDeleteRoleRequest& request, const ChannelDeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDeleteRoleOutcomeCallable ChannelDeleteRoleCallable(const Model::ChannelDeleteRoleRequest& request);

                /**
                 *通过此接口，删除员工绑定的角色，支持以电子签userId、客户系统userId两种方式调用。

对应控制台的操作如下图
![image](https://qcloudimg.tencent-cloud.cn/raw/5b41194d3cb3f2058ec0ba0fb5ebc6a6.png)
                 * @param req ChannelDeleteRoleUsersRequest
                 * @return ChannelDeleteRoleUsersOutcome
                 */
                ChannelDeleteRoleUsersOutcome ChannelDeleteRoleUsers(const Model::ChannelDeleteRoleUsersRequest &request);
                void ChannelDeleteRoleUsersAsync(const Model::ChannelDeleteRoleUsersRequest& request, const ChannelDeleteRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDeleteRoleUsersOutcomeCallable ChannelDeleteRoleUsersCallable(const Model::ChannelDeleteRoleUsersRequest& request);

                /**
                 *此接口（ChannelDeleteSealPolicies）用于删除已指定员工印章授权信息，删除员工的印章授权后，该员工使用印章进行盖章时，将需要提交印章授权申请且通过审核后才能使用该印章进行签署。
                 * @param req ChannelDeleteSealPoliciesRequest
                 * @return ChannelDeleteSealPoliciesOutcome
                 */
                ChannelDeleteSealPoliciesOutcome ChannelDeleteSealPolicies(const Model::ChannelDeleteSealPoliciesRequest &request);
                void ChannelDeleteSealPoliciesAsync(const Model::ChannelDeleteSealPoliciesRequest& request, const ChannelDeleteSealPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDeleteSealPoliciesOutcomeCallable ChannelDeleteSealPoliciesCallable(const Model::ChannelDeleteSealPoliciesRequest& request);

                /**
                 *通过此接口（ChannelDescribeAccountBillDetail）查询该第三方平台子客账号绑定中、剩余可绑定账号等套餐使用情况。
<ul>
<li>对于渠道客户企业的查询，通过指定渠道企业的唯一标识(Agent.ProxyOrganizationId)来查询“子客账号”套餐消耗详情</li>
</ul>
                 * @param req ChannelDescribeAccountBillDetailRequest
                 * @return ChannelDescribeAccountBillDetailOutcome
                 */
                ChannelDescribeAccountBillDetailOutcome ChannelDescribeAccountBillDetail(const Model::ChannelDescribeAccountBillDetailRequest &request);
                void ChannelDescribeAccountBillDetailAsync(const Model::ChannelDescribeAccountBillDetailRequest& request, const ChannelDescribeAccountBillDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeAccountBillDetailOutcomeCallable ChannelDescribeAccountBillDetailCallable(const Model::ChannelDescribeAccountBillDetailRequest& request);

                /**
                 *通过此接口（ChannelDescribeBillUsageDetail）查询该第三方平台子客企业的套餐消耗详情。可以支持单个子客和整个应用下所有子客的查询。
<ul>
<li>对于单个子客企业的查询，通过指定子客的唯一标识(Agent.ProxyOrganizationOpenId)来查询该子客消耗详情</li>
<li>对于整个应用下所有企业的查询，不需要指定子客的唯一标识，只需要传入渠道应用标识(Agent.AppId)直接查询整个应用下所有子客企业消耗详情</li>
</ul>
                 * @param req ChannelDescribeBillUsageDetailRequest
                 * @return ChannelDescribeBillUsageDetailOutcome
                 */
                ChannelDescribeBillUsageDetailOutcome ChannelDescribeBillUsageDetail(const Model::ChannelDescribeBillUsageDetailRequest &request);
                void ChannelDescribeBillUsageDetailAsync(const Model::ChannelDescribeBillUsageDetailRequest& request, const ChannelDescribeBillUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeBillUsageDetailOutcomeCallable ChannelDescribeBillUsageDetailCallable(const Model::ChannelDescribeBillUsageDetailRequest& request);

                /**
                 *获取企业员工信息, 可以获取员工的名字,OpenId,UserId和简述的角色等信息，支持设置过滤条件以筛选员工查询结果。

**注**:通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/SyncProxyOrganizationOperators" target="_blank">企业员工新增或离职</a>接口增加的新员工或者离职的员工也会在列表中。
                 * @param req ChannelDescribeEmployeesRequest
                 * @return ChannelDescribeEmployeesOutcome
                 */
                ChannelDescribeEmployeesOutcome ChannelDescribeEmployees(const Model::ChannelDescribeEmployeesRequest &request);
                void ChannelDescribeEmployeesAsync(const Model::ChannelDescribeEmployeesRequest& request, const ChannelDescribeEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeEmployeesOutcomeCallable ChannelDescribeEmployeesCallable(const Model::ChannelDescribeEmployeesRequest& request);

                /**
                 *您可以通过合同流程ID查询相关的<font color="red"><b>填写控件</b></font>信息及其内容。这包括控件的归属方、控件的填写状态（是否已填写）以及具体的填写内容。

无论是<font color="red"><b>发起方还是签署方</b></font>填写的控件，均包含在查询结果中。

![image](https://qcloudimg.tencent-cloud.cn/raw/08f6ea50d3ae88b51c280c2b17c2a126.png)
### 2.  哪些控件会出现在结果里边？ 
**A.不返回的控件类型：**
- 动态表格
- 附件控件
- 水印控件

**B.返回的控件类型：**
- 单行文本
- 多行文本
- 勾选框控件
- 数字控件
- 日期控件
- 图片控件（图片下载地址）
- 邮箱控件
- 地址控件
- 学历控件
- 性别控件
- 省市区控件

### 3.怎么授权？   

此接口需要授权,  有两种开通权限的途径

**第一种**:   需第三方应用的子企业登录控制台进行授权,  授权在**企业中心**的**授权管理**区域,  界面如下图
授权过程需要**子企业超管**扫描跳转到电子签小程序签署<<渠道端下载渠道子客合同功能授权委托书>>

![image](https://qcloudimg.tencent-cloud.cn/raw/8b483dfebdeafac85051279406944048.png)

**第二种**: 第三方应用的配置接口打开全第三个应用下的所有自己起开通, 需要**渠道方企业的超管**扫描二维码跳转到电子签小程序签署 <<渠道端下载渠道子客合同功能开通知情同意书>>
![image](https://qcloudimg.tencent-cloud.cn/raw/238979ef51dd381ccbdbc755a593debc/channel_DescribeResourceUrlsByFlows_appilications2.png)
                 * @param req ChannelDescribeFlowComponentsRequest
                 * @return ChannelDescribeFlowComponentsOutcome
                 */
                ChannelDescribeFlowComponentsOutcome ChannelDescribeFlowComponents(const Model::ChannelDescribeFlowComponentsRequest &request);
                void ChannelDescribeFlowComponentsAsync(const Model::ChannelDescribeFlowComponentsRequest& request, const ChannelDescribeFlowComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeFlowComponentsOutcomeCallable ChannelDescribeFlowComponentsCallable(const Model::ChannelDescribeFlowComponentsRequest& request);

                /**
                 *此接口查询子企业电子印章。<br />

注：
1. 此操作要求操作者具备<b>印章查询权限</b>（若调用者尚无此权限，请联系超级管理员前往Web控制台【组织管理】->【角色管理】添加相应权限）。
                 * @param req ChannelDescribeOrganizationSealsRequest
                 * @return ChannelDescribeOrganizationSealsOutcome
                 */
                ChannelDescribeOrganizationSealsOutcome ChannelDescribeOrganizationSeals(const Model::ChannelDescribeOrganizationSealsRequest &request);
                void ChannelDescribeOrganizationSealsAsync(const Model::ChannelDescribeOrganizationSealsRequest& request, const ChannelDescribeOrganizationSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeOrganizationSealsOutcomeCallable ChannelDescribeOrganizationSealsCallable(const Model::ChannelDescribeOrganizationSealsRequest& request);

                /**
                 *分页查询企业角色列表，法人的角色是系统保留角色，不会返回，按照角色创建时间升序排列。


<font color="red">系统默认角色</font>说明可参考下表

| 角色名称| 建议授予对象 | 角色描述 |
| --- | --- | --- |
| **超级管理员** |电子签业务最高权限，可以授权给法务/企业法人/业务负责人等 | 所有功能和数据管理权限，只能设置一位超管。 |
| **业务管理员**|IT 系统负责人，可以授权给CTO等 | 企业合同模块、印章模块、模板模块等全量功能及数据权限。 |
| **经办人**|企业法务负责人等 | 发起合同、签署合同（含填写、拒签）、撤销合同、持有印章等权限能力，可查看企业所有合同数据。 |
| **业务员**|销售员、采购员 等| 发起合同、签署合同（含填写、拒签）、撤销合同、持有印章等权限能力，可查看自己相关所有合同数据。 |

附件：<a href="https://dyn.ess.tencent.cn/guide/apivideo/roles.xlsx" target="_blank">点击下载角色对应的权限点的excel文档</a>
                 * @param req ChannelDescribeRolesRequest
                 * @return ChannelDescribeRolesOutcome
                 */
                ChannelDescribeRolesOutcome ChannelDescribeRoles(const Model::ChannelDescribeRolesRequest &request);
                void ChannelDescribeRolesAsync(const Model::ChannelDescribeRolesRequest& request, const ChannelDescribeRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeRolesOutcomeCallable ChannelDescribeRolesCallable(const Model::ChannelDescribeRolesRequest& request);

                /**
                 *该接口用于在使用视频认证方式签署合同后，获取用户的签署人脸认证视频。

1. 该接口**仅适用于在H5端签署**的合同，**在通过视频认证后**获取认证的视频内容。
2. 该接口**不支持小程序端**的签署认证的视频获取。
3. 请在**签署完成后的三天内**获取视频，**过期后将无法获取**。

**注意：该接口需要开通白名单，请联系客户经理开通后使用。**
                 * @param req ChannelDescribeSignFaceVideoRequest
                 * @return ChannelDescribeSignFaceVideoOutcome
                 */
                ChannelDescribeSignFaceVideoOutcome ChannelDescribeSignFaceVideo(const Model::ChannelDescribeSignFaceVideoRequest &request);
                void ChannelDescribeSignFaceVideoAsync(const Model::ChannelDescribeSignFaceVideoRequest& request, const ChannelDescribeSignFaceVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelDescribeSignFaceVideoOutcomeCallable ChannelDescribeSignFaceVideoCallable(const Model::ChannelDescribeSignFaceVideoRequest& request);

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

适用场景：已创建一个文件转换任务，想查询该文件转换任务的状态，或获取转换后的文件资源ID。<br />
注：
1. `大文件转换所需的时间可能会比较长。`
2. `本接口返回的文件资源ID就是PDF资源ID，可以直接用于【用PDF文件创建签署流程】接口发起合同。`
                 * @param req ChannelGetTaskResultApiRequest
                 * @return ChannelGetTaskResultApiOutcome
                 */
                ChannelGetTaskResultApiOutcome ChannelGetTaskResultApi(const Model::ChannelGetTaskResultApiRequest &request);
                void ChannelGetTaskResultApiAsync(const Model::ChannelGetTaskResultApiRequest& request, const ChannelGetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelGetTaskResultApiOutcomeCallable ChannelGetTaskResultApiCallable(const Model::ChannelGetTaskResultApiRequest& request);

                /**
                 *此接口（ChannelModifyRole）用来更新企业自定义角色。

适用场景1：更新当前企业的自定义角色的名称或描述等其他信息，更新时不进行权限的设置（PermissionGroups 参数不传）。

适用场景2：更新当前企业的自定义角色的权限信息，更新时进行权限的设置（PermissionGroups 参数要传），权限树内容 PermissionGroups 可参考[查询角色列表接口](https://qian.tencent.com/developers/partnerApis/accounts/ChannelDescribeRoles) 的输出。此处注意权限树内容可能会更新，需尽量拉取最新的权限树内容，并且权限树内容 PermissionGroups 必须是一颗完整的权限树。
                 * @param req ChannelModifyRoleRequest
                 * @return ChannelModifyRoleOutcome
                 */
                ChannelModifyRoleOutcome ChannelModifyRole(const Model::ChannelModifyRoleRequest &request);
                void ChannelModifyRoleAsync(const Model::ChannelModifyRoleRequest& request, const ChannelModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelModifyRoleOutcomeCallable ChannelModifyRoleCallable(const Model::ChannelModifyRoleRequest& request);

                /**
                 *给医疗个人自动签许可续期。续期成功后，可对医疗自动签许可追加一年有效期，只可续期一次。

注意: `处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。`
                 * @param req ChannelRenewAutoSignLicenseRequest
                 * @return ChannelRenewAutoSignLicenseOutcome
                 */
                ChannelRenewAutoSignLicenseOutcome ChannelRenewAutoSignLicense(const Model::ChannelRenewAutoSignLicenseRequest &request);
                void ChannelRenewAutoSignLicenseAsync(const Model::ChannelRenewAutoSignLicenseRequest& request, const ChannelRenewAutoSignLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelRenewAutoSignLicenseOutcomeCallable ChannelRenewAutoSignLicenseCallable(const Model::ChannelRenewAutoSignLicenseRequest& request);

                /**
                 *此接口（ChannelUpdateSealStatus）用于第三方应用平台为子客企业更新印章状态。
                 * @param req ChannelUpdateSealStatusRequest
                 * @return ChannelUpdateSealStatusOutcome
                 */
                ChannelUpdateSealStatusOutcome ChannelUpdateSealStatus(const Model::ChannelUpdateSealStatusRequest &request);
                void ChannelUpdateSealStatusAsync(const Model::ChannelUpdateSealStatusRequest& request, const ChannelUpdateSealStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelUpdateSealStatusOutcomeCallable ChannelUpdateSealStatusCallable(const Model::ChannelUpdateSealStatusRequest& request);

                /**
                 *对合同流程文件进行数字签名验证，判断数字签名是否有效，合同文件内容是否被篡改。

**补充**： 可以到控制台[合同验签](https://qian.tencent.com/verifySign)体验验签功能，界面如下
![image](https://qcloudimg.tencent-cloud.cn/raw/81c333ccb07f0c5fbaf840d9cee61333.png)
                 * @param req ChannelVerifyPdfRequest
                 * @return ChannelVerifyPdfOutcome
                 */
                ChannelVerifyPdfOutcome ChannelVerifyPdf(const Model::ChannelVerifyPdfRequest &request);
                void ChannelVerifyPdfAsync(const Model::ChannelVerifyPdfRequest& request, const ChannelVerifyPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChannelVerifyPdfOutcomeCallable ChannelVerifyPdfCallable(const Model::ChannelVerifyPdfRequest& request);

                /**
                 *支持企业进行批量初始化操作：

此接口存在以下限制：
1. 批量操作的企业需要已经完成电子签的认证流程。
2. 通过此接口生成的链接在小程序端进行操作时，操作人需要是<font  color="red">所有企业的超管或法人</font>。
3. 批量操作的企业，需要是本方第三方应用下的企业。
4. <font  color="red">操作链接过期时间默认为生成链接后7天。</font>
                 * @param req CreateBatchInitOrganizationUrlRequest
                 * @return CreateBatchInitOrganizationUrlOutcome
                 */
                CreateBatchInitOrganizationUrlOutcome CreateBatchInitOrganizationUrl(const Model::CreateBatchInitOrganizationUrlRequest &request);
                void CreateBatchInitOrganizationUrlAsync(const Model::CreateBatchInitOrganizationUrlRequest& request, const CreateBatchInitOrganizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchInitOrganizationUrlOutcomeCallable CreateBatchInitOrganizationUrlCallable(const Model::CreateBatchInitOrganizationUrlRequest& request);

                /**
                 *此接口用于获取企业批量认证链接-单链接包含多条认证流。

前提条件：已调用 [CreateBatchOrganizationRegistrationTasks创建子企业批量认证链接任务接口](https://qian.tencent.com/developers/partnerApis/accounts/CreateBatchOrganizationRegistrationTasks) 和[查询子企业批量认证链接DescribeBatchOrganizationRegistrationUrls](https://qian.tencent.com/developers/partnerApis/accounts/DescribeBatchOrganizationRegistrationUrls) 确保认证任务已经完成。

异步任务的处理完成时间视当前已提交的任务量、任务的复杂程度等因素决定，正常情况下 3~5 秒即可完成，但也可能需要更长的时间。
此链接包含多条认证流程，使用该链接可以批量的对企业进行认证。
                 * @param req CreateBatchOrganizationAuthorizationUrlRequest
                 * @return CreateBatchOrganizationAuthorizationUrlOutcome
                 */
                CreateBatchOrganizationAuthorizationUrlOutcome CreateBatchOrganizationAuthorizationUrl(const Model::CreateBatchOrganizationAuthorizationUrlRequest &request);
                void CreateBatchOrganizationAuthorizationUrlAsync(const Model::CreateBatchOrganizationAuthorizationUrlRequest& request, const CreateBatchOrganizationAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchOrganizationAuthorizationUrlOutcomeCallable CreateBatchOrganizationAuthorizationUrlCallable(const Model::CreateBatchOrganizationAuthorizationUrlRequest& request);

                /**
                 *该接口用于批量创建企业认证链接， 可以支持PC浏览器，H5和小程序三种途径。
此接口为异步提交任务接口，需要与[查询子企业批量认证链接](https://qcloudimg.tencent-cloud.cn/raw/1d3737991b2a3be78002bd78a47d6917.png)配合使用，整体流程如下图。
![image](https://qcloudimg.tencent-cloud.cn/raw/654aa2a72ab7d42f06464ea33c50c3bb.png)



**注意**

1. 单次最多创建10个子企业。
2. 一天内，同一家企业最多创建8000个子企业。
3. 同一批创建的子客户不能重复，包括企业名称、企业统一信用代码和子客户经办人openId。
4. 跳转到小程序的实现，请参考微信官方文档（分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式）。如何配置跳转电子签小程序，可参考：<a href="https://qian.tencent.com/developers/company/openwxminiprogram">跳转电子签小程序配置</a>。



**腾讯电子签小程序的AppID 和 原始Id如下:**

| 小程序 | AppID | 原始ID |
| ------------ | ------------ | ------------ |
| 腾讯电子签（正式版） | wxa023b292fd19d41d | gh_da88f6188665 |
| 腾讯电子签Demo | wx371151823f6f3edf | gh_39a5d3de69fa |
                 * @param req CreateBatchOrganizationRegistrationTasksRequest
                 * @return CreateBatchOrganizationRegistrationTasksOutcome
                 */
                CreateBatchOrganizationRegistrationTasksOutcome CreateBatchOrganizationRegistrationTasks(const Model::CreateBatchOrganizationRegistrationTasksRequest &request);
                void CreateBatchOrganizationRegistrationTasksAsync(const Model::CreateBatchOrganizationRegistrationTasksRequest& request, const CreateBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchOrganizationRegistrationTasksOutcomeCallable CreateBatchOrganizationRegistrationTasksCallable(const Model::CreateBatchOrganizationRegistrationTasksRequest& request);

                /**
                 *提交申请出证报告任务并返回报告ID。

出证报告的示例样式可以参考 [出征报告.PDF](https://qcloudimg.tencent-cloud.cn/raw/a55214fcddaebbd1582cc9c57cc6cf1b.pdf)

注意：
- 使用此功能**需搭配出证套餐**  ，使用前请联系对接的客户经理沟通。
- 操作人必须是**发起方或者签署方企业的(非走授权书认证)法人或者超管**。
- 合同流程必须**所有参与方已经签署完成**。
- 出证过程需一定时间，建议在**提交出证任务后的24小时之后**，通过<a href="https://qian.tencent.com/developers/partnerApis/certificate/DescribeChannelFlowEvidenceReport" target="_blank">获取出证报告任务执行结果</a>接口进行查询执行结果和出证报告的下载URL。


![image](https://qcloudimg.tencent-cloud.cn/raw/1b4307ed143a992940c41d61192d3a0f/channel_CreateChannelFlowEvidenceReport.png)
                 * @param req CreateChannelFlowEvidenceReportRequest
                 * @return CreateChannelFlowEvidenceReportOutcome
                 */
                CreateChannelFlowEvidenceReportOutcome CreateChannelFlowEvidenceReport(const Model::CreateChannelFlowEvidenceReportRequest &request);
                void CreateChannelFlowEvidenceReportAsync(const Model::CreateChannelFlowEvidenceReportRequest& request, const CreateChannelFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelFlowEvidenceReportOutcomeCallable CreateChannelFlowEvidenceReportCallable(const Model::CreateChannelFlowEvidenceReportRequest& request);

                /**
                 *此接口（CreateChannelOrganizationInfoChangeUrl）用于创建子客企业信息变更链接。

<h3 id="1">支持变更链接类型，通过入参 Endpoint 指定，默认为WEIXINAPP。</h3>

<h4 id="WEIXINAPP">WEIXINAPP</h4>
<p>创建变更短链。需要在移动端打开，会跳转到微信腾讯电子签小程序进行更换。</p>

<h4 id="APP">APP</h4>
<p>创建变更小程序链接，可从第三方App跳转到微信腾讯电子签小程序进行更换。</p>


<h3 id="2">支持创建企业超管变更链接或企业基础信息变更链接，通过入参 ChangeType 指定。</h3>

<h4 id="1-企业超管变更">1. 企业超管变更</h4>

<p>换成企业的其他员工来当超管</p>

<h4 id="2-企业基础信息变更">2. 企业基础信息变更</h4>

<h5 id="可以变动">可以变动</h5>

<ul>
<li>企业名称<br>
</li>
<li>法定代表人姓名(新法人有邀请链接)<br>
</li>
<li>企业地址和所在地</li>
</ul>

<h5 id="不可变动">不可变动</h5>

<ul>
<li>统一社会信用代码<br>
</li>
<li>企业主体类型</li>
</ul>

<p>如果企业名称变动会引起下面的变动</p>

<ul>
<li>合同:   老合同不做任何处理,   新发起的合同需要用新的企业名字作为签署方, 否则无法签署</li>
<li>印章:   会删除所有的印章所有的机构公章，合同专用章，财务专用章和人事专用章,  然后用新企业名称生成新的机构公章，合同专用章，财务专用章和人事专用章,  而法人章不会处理</li>
<li>证书:   企业证书会重新请求CA机构用新企业名称生成新的证书</li>
</ul>


注意： 
1. 生成的电子签小程序链接<font color='red'>只能由企业的法人或者超管</font>点击后进行操作， 其他员工打开后会提示“无权查看该内容”
2. 法人可以无需生成链接，直接在电子签小程序中更换本企业的超管
                 * @param req CreateChannelOrganizationInfoChangeUrlRequest
                 * @return CreateChannelOrganizationInfoChangeUrlOutcome
                 */
                CreateChannelOrganizationInfoChangeUrlOutcome CreateChannelOrganizationInfoChangeUrl(const Model::CreateChannelOrganizationInfoChangeUrlRequest &request);
                void CreateChannelOrganizationInfoChangeUrlAsync(const Model::CreateChannelOrganizationInfoChangeUrlRequest& request, const CreateChannelOrganizationInfoChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelOrganizationInfoChangeUrlOutcomeCallable CreateChannelOrganizationInfoChangeUrlCallable(const Model::CreateChannelOrganizationInfoChangeUrlRequest& request);

                /**
                 *激活或续期子客企业， 在激活状态下，企业可以正常发起合同；在非激活状态下，企业仅能查看和签署合同。

**1. 激活**：使用一个许可证将子客企业从未激活状态转变为激活状态。**激活状态的有效期为一年，一年后将自动回到未激活状态**。

**2. 续期**：使用一个许可证将已激活的子客企业的有效期延长一年。只有处于激活状态的子企业才能进行续期操作（**若处于非激活状态，则需先激活**）。您可以使用多个许可证对同一子客企业进行多次续费。


该接口的效果同：**【企业应用管理】 -> 【子客企业管理】 -> 【激活】或者【续期】**

![image](https://qcloudimg.tencent-cloud.cn/raw/cd63761ca6e814c64b4ecf131555b74e.png)


如果不想调用此接口或者页面点击进行激活或续期，可以在【应用扩展服务】中打开自动激活或续期，在许可证充足的情况下会自动激活或续期子客企业

![image](https://qcloudimg.tencent-cloud.cn/raw/2ccb37ef6bde463c15c39fdda789216f.png)
                 * @param req CreateChannelSubOrganizationActiveRequest
                 * @return CreateChannelSubOrganizationActiveOutcome
                 */
                CreateChannelSubOrganizationActiveOutcome CreateChannelSubOrganizationActive(const Model::CreateChannelSubOrganizationActiveRequest &request);
                void CreateChannelSubOrganizationActiveAsync(const Model::CreateChannelSubOrganizationActiveRequest& request, const CreateChannelSubOrganizationActiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelSubOrganizationActiveOutcomeCallable CreateChannelSubOrganizationActiveCallable(const Model::CreateChannelSubOrganizationActiveRequest& request);

                /**
                 *创建企业注销链接

系统将返回操作链接。贵方需要主动联系并通知企业的超级管理员（超管）或法人。由他们点击该链接，完成企业的注销操作。

注意： `在调用此接口以管理企业扩展服务时，操作者（ Agent.ProxyOperator.OpenId）必须是企业的超级管理员（超管）或法人。`
                 * @param req CreateCloseOrganizationUrlRequest
                 * @return CreateCloseOrganizationUrlOutcome
                 */
                CreateCloseOrganizationUrlOutcome CreateCloseOrganizationUrl(const Model::CreateCloseOrganizationUrlRequest &request);
                void CreateCloseOrganizationUrlAsync(const Model::CreateCloseOrganizationUrlRequest& request, const CreateCloseOrganizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloseOrganizationUrlOutcomeCallable CreateCloseOrganizationUrlCallable(const Model::CreateCloseOrganizationUrlRequest& request);

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
<td>进入员工认证并加入企业流程</td>
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

系统的渠道企业, 应用, 子客企业, 子客员工的组织形式
![image](https://qcloudimg.tencent-cloud.cn/raw/77677faeea26c9d7f37474597c81fe01.png)


<font color="red">相关视频指引</font> <br>
1. <a href="https://dyn.ess.tencent.cn/guide/apivideo/essbasic-createconsoleloginin.mp4" target="_blank">【生成子客登录链接】代码编写 &  子企业认证示例</a><br>
                 * @param req CreateConsoleLoginUrlRequest
                 * @return CreateConsoleLoginUrlOutcome
                 */
                CreateConsoleLoginUrlOutcome CreateConsoleLoginUrl(const Model::CreateConsoleLoginUrlRequest &request);
                void CreateConsoleLoginUrlAsync(const Model::CreateConsoleLoginUrlRequest& request, const CreateConsoleLoginUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConsoleLoginUrlOutcomeCallable CreateConsoleLoginUrlCallable(const Model::CreateConsoleLoginUrlRequest& request);

                /**
                 *生成员工信息变更链接，当前仅支持变更手机号

注: 
1. 目前仅支持修改员工手机号，待修改员工必须已经实名且在职
2. 仅支持返回小程序链接
                 * @param req CreateEmployeeChangeUrlRequest
                 * @return CreateEmployeeChangeUrlOutcome
                 */
                CreateEmployeeChangeUrlOutcome CreateEmployeeChangeUrl(const Model::CreateEmployeeChangeUrlRequest &request);
                void CreateEmployeeChangeUrlAsync(const Model::CreateEmployeeChangeUrlRequest& request, const CreateEmployeeChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmployeeChangeUrlOutcomeCallable CreateEmployeeChangeUrlCallable(const Model::CreateEmployeeChangeUrlRequest& request);

                /**
                 *该接口用于获取个人授权执业章给企业的二维码，需要个人用户通过微信扫码。

扫描后将跳转到腾讯电子签小程序，进入到授权执业章的流程。

个人用户授权成功后，企业印章管理员需对印章进行审核，审核通过后，即可使用个人授权的执业章进行盖章操作。

**注意**
1. 该二维码**有效期为7天**，过期后将失效，可重新创建。
 

整体流程入下图

![image](https://qcloudimg.tencent-cloud.cn/raw/21b6b56dbc796c9d6f402d6ce6febb07.png)
                 * @param req CreateEmployeeQualificationSealQrCodeRequest
                 * @return CreateEmployeeQualificationSealQrCodeOutcome
                 */
                CreateEmployeeQualificationSealQrCodeOutcome CreateEmployeeQualificationSealQrCode(const Model::CreateEmployeeQualificationSealQrCodeRequest &request);
                void CreateEmployeeQualificationSealQrCodeAsync(const Model::CreateEmployeeQualificationSealQrCodeRequest& request, const CreateEmployeeQualificationSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmployeeQualificationSealQrCodeOutcomeCallable CreateEmployeeQualificationSealQrCodeCallable(const Model::CreateEmployeeQualificationSealQrCodeRequest& request);

                /**
                 *获取区块链存证证书查看链接/二维码接口

适用场景：企业员工可以通过此接口生成合同区块链存证证书的查看链接/二维码，以供他人扫码打开腾讯电子签小程序查看。

[点击查看区块链存证证书样式](https://qcloudimg.tencent-cloud.cn/raw/47d5e9c2ffa90ad4e27b3cd14095aa08.jpg)

注：
<ul><li>1. 二维码下载链接过期时间为5分钟，请尽快下载保存。二维码/短链的过期时间为<font color="red">7天</font>，超过有效期则不可用。</li>
<li>2. 合同状态需为<font color="red">签署完成</font> 、<font color="red">已解除</font>才能生成证书查看二维码/短链。</li>
<li>3. 调用接口时，需确保接口调用身份拥有此合同的访问数据权限或为合同参与方。</li>
<li>4. 通过扫码或者点击链接，用户无需登录或者鉴权即可查看对应合同的区块链存证证书，请妥善保管好二维码或链接。</li></ul>
                 * @param req CreateFlowBlockchainEvidenceUrlRequest
                 * @return CreateFlowBlockchainEvidenceUrlOutcome
                 */
                CreateFlowBlockchainEvidenceUrlOutcome CreateFlowBlockchainEvidenceUrl(const Model::CreateFlowBlockchainEvidenceUrlRequest &request);
                void CreateFlowBlockchainEvidenceUrlAsync(const Model::CreateFlowBlockchainEvidenceUrlRequest& request, const CreateFlowBlockchainEvidenceUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowBlockchainEvidenceUrlOutcomeCallable CreateFlowBlockchainEvidenceUrlCallable(const Model::CreateFlowBlockchainEvidenceUrlRequest& request);

                /**
                 *该接口用于将合同中本企业当前经办人转为本企业其他员工进行操作。

注意：
1. 转交的目标经办人需要已经加入企业，且完成实名。
2. 仅企业拥有`超管`或`法人角色`的员工才有调用本接口的权限。
3. 仅支持当前经办人为待签署或待填写状态时进行转交操作。
4. 若原合同有填写控件，且当前经办人已经完成填写，则不支持进行转交。
5. 若当前经办人已签署完成，或者处于签署流程中，则不支持进行转交。
                 * @param req CreateFlowForwardsRequest
                 * @return CreateFlowForwardsOutcome
                 */
                CreateFlowForwardsOutcome CreateFlowForwards(const Model::CreateFlowForwardsRequest &request);
                void CreateFlowForwardsAsync(const Model::CreateFlowForwardsRequest& request, const CreateFlowForwardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowForwardsOutcomeCallable CreateFlowForwardsCallable(const Model::CreateFlowForwardsRequest& request);

                /**
                 *1. 在使用[通过多文件创建合同组签署流程](https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByFiles)或[通过多模板创建合同组签署流程](https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByTemplates)创建合同组签署流程时，若指定了参数以下参数为true,则可以调用此接口提交企业内部签署审批结果,即使是自动签署也需要进行审核通过才会进行签署。
  - [FlowInfo.NeedSignReview](https://qian.tencent.com/developers/partnerApis/dataTypes/#flowinfo)
  - [FlowFileInfo.NeedSignReview](https://qian.tencent.com/developers/partnerApis/dataTypes/#flowfileinfo)
  - [FlowApproverInfo.ApproverNeedSignReview](https://qian.tencent.com/developers/partnerApis/dataTypes/#flowapproverinfo) 

2. 同一合同组，同一签署人可以多次提交签署审批结果，签署时的最后一个“审批结果”有效。
                 * @param req CreateFlowGroupSignReviewRequest
                 * @return CreateFlowGroupSignReviewOutcome
                 */
                CreateFlowGroupSignReviewOutcome CreateFlowGroupSignReview(const Model::CreateFlowGroupSignReviewRequest &request);
                void CreateFlowGroupSignReviewAsync(const Model::CreateFlowGroupSignReviewRequest& request, const CreateFlowGroupSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowGroupSignReviewOutcomeCallable CreateFlowGroupSignReviewCallable(const Model::CreateFlowGroupSignReviewRequest& request);

                /**
                 *接口（CreateFlowsByTemplates）用于使用模板批量创建签署流程。当前可批量发起合同（签署流程）数量为1-20个。
如若在模板中配置了动态表格, 上传的附件必须为A4大小 
合同发起人必须在电子签已经进行实名。

### 一. 整体的逻辑如下

![image](https://qcloudimg.tencent-cloud.cn/raw/e193519d4383fa74782a9e19147ef01a/CreateFlowsByTemplates.png)

###  二. 可以作为发起方和签署方的角色列表

<table>     <thead>     <tr>         <th>场景编号</th>         <th>发起方</th>         <th>签署方</th>         <th>补充</th>     </tr>     </thead>     <tbody>     <tr>         <td>场景一</td>         <td>子企业A的员工</td>         <td>子企业A的员工</td>         <td>子企业是通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">CreateConsoleLoginUrl</a>生成子客登录链接注册的企业</td>     </tr>     <tr>         <td>场景二</td>         <td>子企业A的员工</td>         <td>子企业B(不指定经办人走领取逻辑)</td>         <td>领取的逻辑可以参考文档<a href="https://qian.tencent.com/developers/partner/dynamic_signer" target="_blank">动态签署方</a> </td>     </tr>     <tr>         <td>场景三</td>         <td>子企业A的员工</td>         <td>子企业B的员工</td>         <td>-</td>     </tr>     <tr>         <td>场景四</td>         <td>子企业A的员工</td>         <td>个人</td>         <td>就是自然人，不是企业员工</td>     </tr>     <tr>         <td>场景五</td>         <td>子企业A的员工</td>         <td>SaaS平台企业员工</td>         <td>SaaS平台企业是通过<a href="https://qian.tencent.cn/console/company-register" target="_blank">https://qian.tencent.cn/console/company-register</a>链接注册的企业</td>     </tr>     </tbody> </table>




### 三. 填充模板中定义的填写控件
模板中配置的<font color="red">发起人填充控件</font>可以通过本接口的**FormFields数组**字段填充

![image](https://qcloudimg.tencent-cloud.cn/raw/37457e0e450fc221effddfcb8b1bad55.png)
填充的传参示例如下

```
    request.FormFields = [{
            "ComponentName": "项目的名字",
            "ComponentValue": "休闲山庄"
        }, {
            "ComponentName": "项目的地址",
            "ComponentValue": "凤凰山北侧",
        }, {
            "ComponentName": "范围",
            "ComponentValue": "凤凰山至107国道",
        }, {
            "ComponentName": "面积",
            "ComponentValue": "100亩",
        }, {
            "ComponentName": "基本情况",
            "ComponentValue": "完好",
        }, , {
            "ComponentName": "用途",
            "ComponentValue": "经营农家乐",
        }
    ]
```
合成后合同样子示例

![image](https://qcloudimg.tencent-cloud.cn/raw/140a2fb771ac66a185d0a000d37485f6.png)



### 四. 注意 
1. 发起合同时候,  作为<font color="red">发起方的第三方子企业A员工的企业和员工必须经过实名</font>, 而作为签署方的第三方子企业A员工/个人/自然人/SaaS平台企业员工/第三方子企业B员工企业中的企业和个人/员工可以未实名

2. 不同类型的签署方传参不同, 可以参考开发者中心的FlowApproverInfo结构体说明

3. <font color="red">调用接口发起合同成功就会扣减合同的额度</font>, 只有撤销没有参与方签署过或只有自动签署签署过的合同，才会返还合同额度。（过期，拒签，签署完成，解除完成等状态不会返还额度）

4. <font color="red">静默（自动）签署不支持合同签署方存在填写</font>

5.  <font color="red">在下一步创建签署链接前，建议等待DocumentFill </font> <a href="https://qian.tencent.com/developers/partner/callback_types_file_resources">PDF合成完成的回调</a>或者睡眠几秒，尤其是当模板中存在动态表格等复杂填写控件时，因为合成过程可能会耗费秒级别的时间。


<font color="red">相关视频指引</font> <br>
1. <a href="https://dyn.ess.tencent.cn/guide/apivideo/essbasic-CreateTemplates.mp4" target="_blank">创建模板&设置成本企业自动签署</a><br>
2. <a href="https://dyn.ess.tencent.cn/guide/apivideo/essbasic-CreateFlowsByTemplates.mp4" target="_blank">【用模板创建签署流程】编写示例视频教程</a><br>
                 * @param req CreateFlowsByTemplatesRequest
                 * @return CreateFlowsByTemplatesOutcome
                 */
                CreateFlowsByTemplatesOutcome CreateFlowsByTemplates(const Model::CreateFlowsByTemplatesRequest &request);
                void CreateFlowsByTemplatesAsync(const Model::CreateFlowsByTemplatesRequest& request, const CreateFlowsByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowsByTemplatesOutcomeCallable CreateFlowsByTemplatesCallable(const Model::CreateFlowsByTemplatesRequest& request);

                /**
                 *该接口用于获取创建法人章的二维码，需要通过微信扫描。扫描后将跳转到腾讯电子签署，进入到创建法人章的流程。

**注意**
1. 该二维码**有效期为7天**，过期后将失效，可重新创建 。
2. 每个公司**只能有1个法人章**，无法重复创建或者创建多个

法人章的样式可以参考下图索引（也可以自己上传法人印章图片）：

![image](https://qcloudimg.tencent-cloud.cn/raw/36a0a090750c45bb5cac5047ac461b2c.png)
                 * @param req CreateLegalSealQrCodeRequest
                 * @return CreateLegalSealQrCodeOutcome
                 */
                CreateLegalSealQrCodeOutcome CreateLegalSealQrCode(const Model::CreateLegalSealQrCodeRequest &request);
                void CreateLegalSealQrCodeAsync(const Model::CreateLegalSealQrCodeRequest& request, const CreateLegalSealQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLegalSealQrCodeOutcomeCallable CreateLegalSealQrCodeCallable(const Model::CreateLegalSealQrCodeRequest& request);

                /**
                 *本接口（CreateModifyAdminAuthorizationUrl）用于重新上传超管授权书。

注意:
1. 重新上传超管授权书，必须是审核失败的情况下才能重新上传,可以通过回调[!授权书审核结果回调](https://qian.tencent.com/developers/partner/callback_types_staffs#%E5%9B%9B-%E6%8E%88%E6%9D%83%E4%B9%A6%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)得到
                 * @param req CreateModifyAdminAuthorizationUrlRequest
                 * @return CreateModifyAdminAuthorizationUrlOutcome
                 */
                CreateModifyAdminAuthorizationUrlOutcome CreateModifyAdminAuthorizationUrl(const Model::CreateModifyAdminAuthorizationUrlRequest &request);
                void CreateModifyAdminAuthorizationUrlAsync(const Model::CreateModifyAdminAuthorizationUrlRequest& request, const CreateModifyAdminAuthorizationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModifyAdminAuthorizationUrlOutcomeCallable CreateModifyAdminAuthorizationUrlCallable(const Model::CreateModifyAdminAuthorizationUrlRequest& request);

                /**
                 *生成合成后的各类企业授权书，包括：
- 企业认证超管授权书
- 超管变更授权书
- 企业注销授权书

注: 需自行保证传入真实的企业/法人/超管信息，否则后续的审核将会拒绝。
                 * @param req CreateOrganizationAuthFileRequest
                 * @return CreateOrganizationAuthFileOutcome
                 */
                CreateOrganizationAuthFileOutcome CreateOrganizationAuthFile(const Model::CreateOrganizationAuthFileRequest &request);
                void CreateOrganizationAuthFileAsync(const Model::CreateOrganizationAuthFileRequest& request, const CreateOrganizationAuthFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationAuthFileOutcomeCallable CreateOrganizationAuthFileCallable(const Model::CreateOrganizationAuthFileRequest& request);

                /**
                 *创建一个用于他方自动签授权的链接（可选择他方授权或我方授权）。通过这个链接，合作方企业可以直接进入小程序，进行自动签授权操作。

如果授权企业尚未开通企业自动签功能，该链接还将引导他们首先开通本企业的自动签服务


注: 
1. <font color='red'>所在企业的超管、法人才有权限调用此接口</font>(Agent.ProxyOperator.OpenId 需要传递超管或者法人的OpenId)
2. 已经在授权中或者授权成功的企业，无法重复授权
3. 授权企业和被授权企业必须都是已认证企业
4. <font color='red'>需要授权企业或被授权企业的超管或者法人打开链接</font>走开通逻辑。

**该接口效果同控制台： 企业设置-> 扩展服务 -> 企业自动签署 -> 合作企业方授权**
![image](https://qcloudimg.tencent-cloud.cn/raw/091823fd4f02af7dda416fa10ca65f2d.png)
                 * @param req CreatePartnerAutoSignAuthUrlRequest
                 * @return CreatePartnerAutoSignAuthUrlOutcome
                 */
                CreatePartnerAutoSignAuthUrlOutcome CreatePartnerAutoSignAuthUrl(const Model::CreatePartnerAutoSignAuthUrlRequest &request);
                void CreatePartnerAutoSignAuthUrlAsync(const Model::CreatePartnerAutoSignAuthUrlRequest& request, const CreatePartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePartnerAutoSignAuthUrlOutcomeCallable CreatePartnerAutoSignAuthUrlCallable(const Model::CreatePartnerAutoSignAuthUrlRequest& request);

                /**
                 *获取个人用户认证证书图片下载URL

个人用户认证证书图片样式如下图

![image](https://qcloudimg.tencent-cloud.cn/raw/d568bc0f101bef582f7af2cb5ab7a715.png)

注:  
<ul>
<li>只能获取个人用户证明图片, 企业员工的暂不支持</li>
<li>专为电子处方单（医疗自动签）特定场景使用。在使用前，请务必与您的客户经理联系以确认已经开通电子处方单功能 </li>
</ul>
                 * @param req CreatePersonAuthCertificateImageRequest
                 * @return CreatePersonAuthCertificateImageOutcome
                 */
                CreatePersonAuthCertificateImageOutcome CreatePersonAuthCertificateImage(const Model::CreatePersonAuthCertificateImageRequest &request);
                void CreatePersonAuthCertificateImageAsync(const Model::CreatePersonAuthCertificateImageRequest& request, const CreatePersonAuthCertificateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonAuthCertificateImageOutcomeCallable CreatePersonAuthCertificateImageCallable(const Model::CreatePersonAuthCertificateImageRequest& request);

                /**
                 *1. 可以**通过图片**为子客企业代创建印章，图片最大5MB

2. 可以使用**系统生成印章**为子客企业代创建印章, 系统创建的印章样子下图(样式可以调整)

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

**主要使用场景EndPoint分类**

|EndPoint| 场景| 说明和示例|
|  ----  | ----  | --- |
|  WEIXINAPP  | 短链跳转腾讯电子签小程序签署场景  |  点击链接打开电子签小程序（与腾讯电子签官方短信提醒用户签署形式一样）<br> 示例: https://essurl.cn/x9nvWU8fTg|
|  LONGURL2WEIXINAPP  | 长链跳转腾讯电子签小程序签署场景  |  点击链接打开电子签小程序, 是WEIXINAPP生成短链代表的那个长链|
|  CHANNEL  | 带有H5引导页的跳转腾讯电子签小程序签署场景 |  点击链接打开一个H5引导页面, 页面中有个"前往小程序"的按钮, 点击后会跳转到腾讯电子签小程序签署场景;  签署完成会回到H5引导页面, 然后跳转到指定创建链接指定的JumpUrl<br>示例: https://res.ess.tencent.cn/cdn/h5-activity-beta/jump-mp.html?use=channel-guide&type=warning&token=uIFKIU8fTd |
|APP| <font color="red">贵方APP</font>跳转腾讯电子签小程序签署场景|  贵方App直接跳转到小程序后, 在腾讯电子签小程序签署完成后返回贵方App的场景<br>跳转到腾讯电子签小程序的实现可以参考微信的官方文档:<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/launchApp.html" target="_blank">开放能力/打开 App</a> <br> 示例: pages/guide?from=default&where=mini& to=CONTRACT_DETAIL& id=yDwiBUUc*duRvquCSX8wd& shortKey=yDwivUA**W1yRsTre3 |
|APP| <font color="red">贵方小程序</font>跳转腾讯电子签小程序签署场景|  贵方小程序直接跳转到小程序后, 在腾讯电子签小程序签署完成后返回贵方小程序的场景<br>跳转到腾讯电子签小程序的实现可以参考微信官方文档<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html" target="_blank">全屏方式</a>和<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html " target="_blank">半屏方式</a><br>此时返回的SignUrl就是官方文档中的path<br> 示例:pages/guide?from=default&where=mini& to=CONTRACT_DETAIL& id=yDwiBUUc*duRvquCSX8wd& shortKey=yDwivUA**W1yRsTre3  |
                 * @param req CreateSignUrlsRequest
                 * @return CreateSignUrlsOutcome
                 */
                CreateSignUrlsOutcome CreateSignUrls(const Model::CreateSignUrlsRequest &request);
                void CreateSignUrlsAsync(const Model::CreateSignUrlsRequest& request, const CreateSignUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSignUrlsOutcomeCallable CreateSignUrlsCallable(const Model::CreateSignUrlsRequest& request);

                /**
                 *批量清理未认证的企业认证流程。

此接口用来清除企业方认证信息填写错误，批量清理认证中的认证流信息。
为接口[提交子企业批量认证链接创建任务](https://qian.tencent.com/developers/partnerApis/accounts/CreateBatchOrganizationRegistrationTasks) 和[查询子企业批量认证链接](https://qian.tencent.com/developers/partnerApis/accounts/DescribeBatchOrganizationRegistrationUrls) 接口的扩展接口。即在批量认证过程中，当发起认证企业发现超管信息错误的时候，可以将当前超管下的所有认证流企业清除。

注意：
**这个接口的操作人必须跟生成批量认证链接接口的应用号一致，才可以调用，否则会返回当前操作人没有认证中的企业认证流**
                 * @param req DeleteOrganizationAuthorizationsRequest
                 * @return DeleteOrganizationAuthorizationsOutcome
                 */
                DeleteOrganizationAuthorizationsOutcome DeleteOrganizationAuthorizations(const Model::DeleteOrganizationAuthorizationsRequest &request);
                void DeleteOrganizationAuthorizationsAsync(const Model::DeleteOrganizationAuthorizationsRequest& request, const DeleteOrganizationAuthorizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOrganizationAuthorizationsOutcomeCallable DeleteOrganizationAuthorizationsCallable(const Model::DeleteOrganizationAuthorizationsRequest& request);

                /**
                 *本接口（DescribeBatchOrganizationRegistrationTasks）用于查询企业批量认证任务状态。
                 * @param req DescribeBatchOrganizationRegistrationTasksRequest
                 * @return DescribeBatchOrganizationRegistrationTasksOutcome
                 */
                DescribeBatchOrganizationRegistrationTasksOutcome DescribeBatchOrganizationRegistrationTasks(const Model::DescribeBatchOrganizationRegistrationTasksRequest &request);
                void DescribeBatchOrganizationRegistrationTasksAsync(const Model::DescribeBatchOrganizationRegistrationTasksRequest& request, const DescribeBatchOrganizationRegistrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchOrganizationRegistrationTasksOutcomeCallable DescribeBatchOrganizationRegistrationTasksCallable(const Model::DescribeBatchOrganizationRegistrationTasksRequest& request);

                /**
                 *此接口用于获取企业批量认证异步任务的状态及结果。需要先调用接口<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateBatchOrganizationRegistrationTasks" target="_blank">提交子企业批量认证链接创建任务</a>获取到任务ID，然后再调用此接口获取到各个子企业的注册认证链接。整体流程如下图。
![image](https://qcloudimg.tencent-cloud.cn/raw/654aa2a72ab7d42f06464ea33c50c3bb.png)


注：
`异步任务的处理完成时间视当前已提交的任务量、任务的复杂程度等因素决定，正常情况下 3~5 秒即可完成，但也可能需要更长的时间`
                 * @param req DescribeBatchOrganizationRegistrationUrlsRequest
                 * @return DescribeBatchOrganizationRegistrationUrlsOutcome
                 */
                DescribeBatchOrganizationRegistrationUrlsOutcome DescribeBatchOrganizationRegistrationUrls(const Model::DescribeBatchOrganizationRegistrationUrlsRequest &request);
                void DescribeBatchOrganizationRegistrationUrlsAsync(const Model::DescribeBatchOrganizationRegistrationUrlsRequest& request, const DescribeBatchOrganizationRegistrationUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchOrganizationRegistrationUrlsOutcomeCallable DescribeBatchOrganizationRegistrationUrlsCallable(const Model::DescribeBatchOrganizationRegistrationUrlsRequest& request);

                /**
                 *通过接口[批量撤销合同流程](https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelBatchCancelFlows)或者[获取批量撤销签署流程腾讯电子签小程序链接](https://qian.tencent.com/developers/partnerApis/operateFlows/ChannelCreateBatchCancelFlowUrl)发起批量撤销任务后，可通过此接口查询批量撤销任务的结果。
                 * @param req DescribeCancelFlowsTaskRequest
                 * @return DescribeCancelFlowsTaskOutcome
                 */
                DescribeCancelFlowsTaskOutcome DescribeCancelFlowsTask(const Model::DescribeCancelFlowsTaskRequest &request);
                void DescribeCancelFlowsTaskAsync(const Model::DescribeCancelFlowsTaskRequest& request, const DescribeCancelFlowsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCancelFlowsTaskOutcomeCallable DescribeCancelFlowsTaskCallable(const Model::DescribeCancelFlowsTaskRequest& request);

                /**
                 *获取出证报告任务执行结果，返回报告 URL。

注意：

- 使用此功能`需搭配出证套餐` ，使用前请联系对接的客户经理沟通。
- 需调用创建并返回出证报告接口<a href="https://qian.tencent.com/developers/partnerApis/certificate/CreateChannelFlowEvidenceReport" target="_blank">提交申请出证报告任务</a>获取报告编号后调用当前接口获取报告链接。

![image](https://qcloudimg.tencent-cloud.cn/raw/1b4307ed143a992940c41d61192d3a0f/channel_CreateChannelFlowEvidenceReport.png)
                 * @param req DescribeChannelFlowEvidenceReportRequest
                 * @return DescribeChannelFlowEvidenceReportOutcome
                 */
                DescribeChannelFlowEvidenceReportOutcome DescribeChannelFlowEvidenceReport(const Model::DescribeChannelFlowEvidenceReportRequest &request);
                void DescribeChannelFlowEvidenceReportAsync(const Model::DescribeChannelFlowEvidenceReportRequest& request, const DescribeChannelFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelFlowEvidenceReportOutcomeCallable DescribeChannelFlowEvidenceReportCallable(const Model::DescribeChannelFlowEvidenceReportRequest& request);

                /**
                 *查询渠道子客企业信息时，可以支持单个子客和整个应用下所有子客的查询。返回的信息包括超管、法人的信息以及当前企业的认证状态等信息。

- 对于单个企业的查询，通过**指定子客的唯一标识**来查询该子客的企业信息
- 对于整个应用下所有企业的查询，**不需要指定子客的唯一标识**，直接查询整个应用下所有子客企业的企业信息
                 * @param req DescribeChannelOrganizationsRequest
                 * @return DescribeChannelOrganizationsOutcome
                 */
                DescribeChannelOrganizationsOutcome DescribeChannelOrganizations(const Model::DescribeChannelOrganizationsRequest &request);
                void DescribeChannelOrganizationsAsync(const Model::DescribeChannelOrganizationsRequest& request, const DescribeChannelOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelOrganizationsOutcomeCallable DescribeChannelOrganizationsCallable(const Model::DescribeChannelOrganizationsRequest& request);

                /**
                 *生成用印申请审批链接，审批人可以通过此链接进入小程序进行审批。
 p.s.
Agent参数中的OpenId 必须为审批者的openId，且链接必须由审批人打开。
                 * @param req DescribeChannelSealPolicyWorkflowUrlRequest
                 * @return DescribeChannelSealPolicyWorkflowUrlOutcome
                 */
                DescribeChannelSealPolicyWorkflowUrlOutcome DescribeChannelSealPolicyWorkflowUrl(const Model::DescribeChannelSealPolicyWorkflowUrlRequest &request);
                void DescribeChannelSealPolicyWorkflowUrlAsync(const Model::DescribeChannelSealPolicyWorkflowUrlRequest& request, const DescribeChannelSealPolicyWorkflowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChannelSealPolicyWorkflowUrlOutcomeCallable DescribeChannelSealPolicyWorkflowUrlCallable(const Model::DescribeChannelSealPolicyWorkflowUrlRequest& request);

                /**
                 *查询企业扩展服务的授权详情（列表），当前支持查询以下内容：

1. **企业自动签**
2. **批量签署**


注: <font color='red'>所在企业的超管、法人才有权限调用此接口</font>(Agent.ProxyOperator.OpenId 需要传递超管或者法人的OpenId)
                 * @param req DescribeExtendedServiceAuthDetailRequest
                 * @return DescribeExtendedServiceAuthDetailOutcome
                 */
                DescribeExtendedServiceAuthDetailOutcome DescribeExtendedServiceAuthDetail(const Model::DescribeExtendedServiceAuthDetailRequest &request);
                void DescribeExtendedServiceAuthDetailAsync(const Model::DescribeExtendedServiceAuthDetailRequest& request, const DescribeExtendedServiceAuthDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtendedServiceAuthDetailOutcomeCallable DescribeExtendedServiceAuthDetailCallable(const Model::DescribeExtendedServiceAuthDetailRequest& request);

                /**
                 *查询企业扩展服务的开通和授权情况，当前支持查询以下内容：

1. **企业自动签**
2. **企业与港澳台居民签署合同**
3. **使用手机号验证签署方身份**
4. **拓宽签署方年龄限制**
5. **下载企业合同/文件**
6. **隐藏合同经办人姓名**

对应能力开通页面在子客控制台-企业中心-拓展服务，如下图所示:

![image](https://qcloudimg.tencent-cloud.cn/raw/931a1e02955ab36e5cc69a489af10352.jpg)

注: <font color='red'>所在企业的超管、法人才有权限调用此接口</font>(Agent.ProxyOperator.OpenId 需要传递超管或者法人的OpenId)
                 * @param req DescribeExtendedServiceAuthInfoRequest
                 * @return DescribeExtendedServiceAuthInfoOutcome
                 */
                DescribeExtendedServiceAuthInfoOutcome DescribeExtendedServiceAuthInfo(const Model::DescribeExtendedServiceAuthInfoRequest &request);
                void DescribeExtendedServiceAuthInfoAsync(const Model::DescribeExtendedServiceAuthInfoRequest& request, const DescribeExtendedServiceAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtendedServiceAuthInfoOutcomeCallable DescribeExtendedServiceAuthInfoCallable(const Model::DescribeExtendedServiceAuthInfoRequest& request);

                /**
                 *此接口用于查询合同或者合同组的详情信息，支持查询多个（数量不能超过100）。

适用场景：可用于主动查询某个合同或者合同组的详情信息。

注:  `只能查询本企业创建的合同(创建合同用的Agent和此接口用的Agent数据最好一致) `
                 * @param req DescribeFlowDetailInfoRequest
                 * @return DescribeFlowDetailInfoOutcome
                 */
                DescribeFlowDetailInfoOutcome DescribeFlowDetailInfo(const Model::DescribeFlowDetailInfoRequest &request);
                void DescribeFlowDetailInfoAsync(const Model::DescribeFlowDetailInfoRequest& request, const DescribeFlowDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowDetailInfoOutcomeCallable DescribeFlowDetailInfoCallable(const Model::DescribeFlowDetailInfoRequest& request);

                /**
                 *获取合同流程PDF的下载链接，可以下载签署中、签署完的此子企业创建的合同。




### 2. 确保合同的PDF已经合成后，再调用本接口。
 用户创建合同或者提交签署动作后，后台需要1~3秒的时间就进行合同PDF合成或者签名，为了确保您下载的是签署完成的完整合同文件，我们建议采取下面两种方式的一种来<font color="red"><b>确保PDF已经合成完成，然后在调用本接口</b></font>。

**第一种**：请确保您的系统配置了[接收合同完成通知的回调](https://qian.tencent.com/developers/partner/callback_types_contracts_sign)功能。一旦所有参与方签署完毕，我们的系统将自动向您提供的回调地址发送完成通知。

**第二种**：通过调用我们的[获取合同信息](https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo)接口来主动检查合同的签署状态。请仅在确认合同状态为“全部签署完成”后，进行文件的下载操作。

### 3.  链接具有有效期限
<font color="red"><b>生成的链接是有时间限制的，过期后将无法访问</b></font>。您可以在接口返回的信息中查看具体的过期时间。为避免错误，请确保在链接过期之前进行下载操作。

### 4. 有两种开通下载权限的途径。

**第一种**:   需第三方应用的子企业登录控制台进行授权,  授权在**企业中心**的**授权管理**区域,  界面如下图。
授权过程需要**子企业超管**扫描跳转到电子签小程序签署<<渠道端下载渠道子客合同功能授权委托书>>

![image](https://qcloudimg.tencent-cloud.cn/raw/8b483dfebdeafac85051279406944048.png)

**第二种**: 渠道方企业在**企业应用管理**的配置界面打开需要配置的应用，点击**应用扩展服务**开通此功能，需要**渠道方企业的超管**扫描二维码跳转到电子签小程序签署 <<渠道端下载渠道子客合同功能开通知情同意书>>
注: 
1. `请注意如果第三方应用的子客主动关闭了渠道端下载渠道子客合同功能开关，那么渠道方开通了此功能也无法下载子客的合同文件`

![image](https://qcloudimg.tencent-cloud.cn/raw/238979ef51dd381ccbdbc755a593debc/channel_DescribeResourceUrlsByFlows_appilications2.png)
                 * @param req DescribeResourceUrlsByFlowsRequest
                 * @return DescribeResourceUrlsByFlowsOutcome
                 */
                DescribeResourceUrlsByFlowsOutcome DescribeResourceUrlsByFlows(const Model::DescribeResourceUrlsByFlowsRequest &request);
                void DescribeResourceUrlsByFlowsAsync(const Model::DescribeResourceUrlsByFlowsRequest& request, const DescribeResourceUrlsByFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUrlsByFlowsOutcomeCallable DescribeResourceUrlsByFlowsCallable(const Model::DescribeResourceUrlsByFlowsRequest& request);

                /**
                 *通过此接口（DescribeTemplates）查询该第三方平台子客企业在电子签拥有的有效模板，不包括第三方平台模板。

**适用场景**
 该接口常用来配合<a href="https://qian.tencent.com/developers/partnerApis/startFlows/CreateFlowsByTemplates" target="_blank">用模板创建签署流程</a>和<a href="https://qian.tencent.com/developers/partnerApis/startFlows/ChannelCreateFlowGroupByTemplates" target="_blank">通过多模板创建合同组签署流程</a>接口，作为创建合同的前置接口使用。 
通过此接口查询到模板信息后，再通过调用创建合同的接口，指定模板ID，指定模板中需要的填写控件内容等，完成合同文档的创建。

**模板的来源**
子客企业的模板有两种途径获取
- 渠道方(平台方)配置完成后, 分发给同应用的各个子企业
- 子客企业通过CreateConsoleLoginUrl创建的链接登录子客控制台自己创建

**一个模板通常会包含以下结构信息** 

- 模板ID, 模板名字等基本信息
- 发起方参与信息Promoter、签署参与方 Recipients，后者会在模板发起合同时用于指定参与方
- 发起方和签署方的填写控件 Components
- 签署方的签署控件 SignComponents

![image](https://qcloudimg.tencent-cloud.cn/raw/ab81fa948a0a6fea14f48cac91d0e36a/channel_DescribeTemplates.png)

模板中各元素的层级关系, 所有的填写控件和签署控件都归属某一个角色(通过控件的ComponentRecipientId来关联)

![image](https://qcloudimg.tencent-cloud.cn/raw/45c638bd93f9c8024763add9ab47c27f.png)


**注意**

>1. 查询条件TemplateId、TemplateName与ChannelTemplateId可同时存在，即可查询同时满足这些条件的模板。
>2. TemplateId 和TemplateIds互为独立，若两个参数都传入，则以TemplateId为准

<font color="red">相关视频指引</font> <br>
1. <a href="https://dyn.ess.tencent.cn/guide/apivideo/essbasic-CreateTemplates.mp4" target="_blank">创建模板&设置成本企业自动签署</a><br>
                 * @param req DescribeTemplatesRequest
                 * @return DescribeTemplatesOutcome
                 */
                DescribeTemplatesOutcome DescribeTemplates(const Model::DescribeTemplatesRequest &request);
                void DescribeTemplatesAsync(const Model::DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTemplatesOutcomeCallable DescribeTemplatesCallable(const Model::DescribeTemplatesRequest& request);

                /**
                 *此接口（DescribeUsage）用于获取此应用下子客企业的合同消耗数量。

<font color="red">此接口即将下线， 请使用新接口</font>  [查询渠道计费消耗情况](https://qian.tencent.com/developers/partnerApis/fee/ChannelDescribeBillUsageDetail)

注: 此接口**每日限频50次**，若要扩大限制次数,请提前与客服经理或邮件至e-contract@tencent.com进行联系。
                 * @param req DescribeUsageRequest
                 * @return DescribeUsageOutcome
                 */
                DescribeUsageOutcome DescribeUsage(const Model::DescribeUsageRequest &request);
                void DescribeUsageAsync(const Model::DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsageOutcomeCallable DescribeUsageCallable(const Model::DescribeUsageRequest& request);

                /**
                 *查询用户模版类型，分为两种模式：
<ul>
<li>QueryBindTemplate:false，查询用户合同模版类型，返回用户合同模版类型ID，用户合同模版类型名称，用户合同模版类型描述信息</li>
<li>QueryBindTemplate:false，查询用户合同模版类型，返回用户合同模版类型ID，用户合同模版类型名称，用户合同模版类型描述信息，被绑定的模版数量</li>
</ul>
                 * @param req DescribeUserFlowTypeRequest
                 * @return DescribeUserFlowTypeOutcome
                 */
                DescribeUserFlowTypeOutcome DescribeUserFlowType(const Model::DescribeUserFlowTypeRequest &request);
                void DescribeUserFlowTypeAsync(const Model::DescribeUserFlowTypeRequest& request, const DescribeUserFlowTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserFlowTypeOutcomeCallable DescribeUserFlowTypeCallable(const Model::DescribeUserFlowTypeRequest& request);

                /**
                 *此接口（GetDownloadFlowUrl）用户获取合同控制台下载页面链接,  点击链接后会跳转至本企业合同管理控制台(会筛选出传入的合同列表), 点击**下载**按钮后就会下载传入的合同列表, 下载页面如下图
![image](https://dyn.ess.tencent.cn/guide/capi/channel_GetDownloadFlowUrl.png)

注:
<ul>
<li>仅支持下载 <b>本企业</b> 下合同，链接会 <b>登录企业控制台</b> </li>
<li> <b>链接仅可使用一次</b>，不可重复使用</li>
</ul>
                 * @param req GetDownloadFlowUrlRequest
                 * @return GetDownloadFlowUrlOutcome
                 */
                GetDownloadFlowUrlOutcome GetDownloadFlowUrl(const Model::GetDownloadFlowUrlRequest &request);
                void GetDownloadFlowUrlAsync(const Model::GetDownloadFlowUrlRequest& request, const GetDownloadFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDownloadFlowUrlOutcomeCallable GetDownloadFlowUrlCallable(const Model::GetDownloadFlowUrlRequest& request);

                /**
                 *管理企业扩展服务

- **直接开通的情形：** 若在操作过程中接口没有返回跳转链接，这表明无需进行任何跳转操作。此时，相应的企业拓展服务将会直接被开通或关闭。

- **需要法人或者超管签署开通协议的情形：** 当需要开通以下企业拓展服务时， 系统将返回一个操作链接。贵方需要主动联系并通知企业的超级管理员（超管）或法人。由他们点击该链接，完成服务的开通操作。
  - **AUTO_SIGN（企业自动签）**
  - **DOWNLOAD_FLOW（授权渠道下载合同）**

注意： `在调用此接口以管理企业扩展服务时，操作者（ Agent.ProxyOperator.OpenId）必须是企业的超级管理员（超管）或法人`


对应的扩展服务能力可以在控制台的【扩展服务】中找到
![image](https://qcloudimg.tencent-cloud.cn/raw/99eebd37883ec55ed1f1df3a57aee60a.png)
                 * @param req ModifyExtendedServiceRequest
                 * @return ModifyExtendedServiceOutcome
                 */
                ModifyExtendedServiceOutcome ModifyExtendedService(const Model::ModifyExtendedServiceRequest &request);
                void ModifyExtendedServiceAsync(const Model::ModifyExtendedServiceRequest& request, const ModifyExtendedServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyExtendedServiceOutcomeCallable ModifyExtendedServiceCallable(const Model::ModifyExtendedServiceRequest& request);

                /**
                 *在已启动的签署流程中，可对签署截止日期进行延期操作，主要分为以下两个层面：
1. <b> 合同（流程）层面</b>：仅需提供签署流程ID。此操作将对整个签署流程以及未单独设置签署截止时间的签署人进行延期。
2. <b> 签署人层面</b>  ：需提供流程ID和签署人ID。此操作针对特定签署人进行延期，特别是对于有序合同（流程），签署截止时间不得超过后续签署人的流程截止时间。

此接口存在以下限制：
1. 执行操作的员工须为<font  color="red">发起方企业的超级管理员、法定代表人或签署流程发起人</font>。
2. 延长整个签署流程时，<font  color="red">应至少有一方尚未签署</font>（即签署流程不能处于已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等状态）。
3. 延长整个签署流程时，新的签署截止日期应晚于已设定的签署截止日期和当前日期。
4. 延长签署方截止时间时，<font  color="red">签署方不能处于流程完结或已终止状态</font>（即签署人不能处于已签署、已拒签、已过期、已撤回、拒绝填写、已解除等状态）。
5. 延长签署方截止时间时，新的签署截止日期应晚于当前日期和已设定的截止日期。若为有序合同，还需早于或等于下一签署人的截止日期，且早于签署流程整体的截止日期。
6. <font  color="red">不支持操作合同组合同</font>。

合同（流程）层面截止时间子企业控制台展示的位置：
![image](https://qcloudimg.tencent-cloud.cn/raw/f0f88c0eb49a926da9a86e5a6e9efa8b.png)
                 * @param req ModifyFlowDeadlineRequest
                 * @return ModifyFlowDeadlineOutcome
                 */
                ModifyFlowDeadlineOutcome ModifyFlowDeadline(const Model::ModifyFlowDeadlineRequest &request);
                void ModifyFlowDeadlineAsync(const Model::ModifyFlowDeadlineRequest& request, const ModifyFlowDeadlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFlowDeadlineOutcomeCallable ModifyFlowDeadlineCallable(const Model::ModifyFlowDeadlineRequest& request);

                /**
                 *创建一个用于更新他方自动签授权的链接（可选择他方授权或我方授权）。通过这个链接，合作方企业可以直接进入小程序，进行自动签更新授权（印章）操作。

如果授权企业尚未开通企业自动签功能，该链接还将引导他们首先开通本企业的自动签服务


注: 
1. <font color='red'>所在企业的超管、法人才有权限调用此接口</font>(Agent.ProxyOperator.OpenId 需要传递超管或者法人的OpenId)
2. 2. 只能更新授权的印章，被授权的企业无法更新
3. 授权企业和被授权企业必须都是已认证企业
4. <font color='red'>需要授权企业或被授权企业的超管或者法人打开链接</font>走开通逻辑。
                 * @param req ModifyPartnerAutoSignAuthUrlRequest
                 * @return ModifyPartnerAutoSignAuthUrlOutcome
                 */
                ModifyPartnerAutoSignAuthUrlOutcome ModifyPartnerAutoSignAuthUrl(const Model::ModifyPartnerAutoSignAuthUrlRequest &request);
                void ModifyPartnerAutoSignAuthUrlAsync(const Model::ModifyPartnerAutoSignAuthUrlRequest& request, const ModifyPartnerAutoSignAuthUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPartnerAutoSignAuthUrlOutcomeCallable ModifyPartnerAutoSignAuthUrlCallable(const Model::ModifyPartnerAutoSignAuthUrlRequest& request);

                /**
                 *此接口（OperateChannelTemplate）用于针对第三方应用平台模板库中的模板对子客企业发布授权的查询和设置。
平台模板库中的模板的位置在控制台 企业应用管理 中下面的应用模板库管理目录, 可以参照下图位置
![image](https://qcloudimg.tencent-cloud.cn/raw/7f2b6c94164b3e931efc9a037e0400f7.png)

# 支持的操作

## 1. 查询模板的子客企业授权 (OperateType=SELECT)
- 查询模板的授权子企业列表

## 2. 修改模板的子客企业授权 (OperateType=UPDATE)
- 当模板未发布时，可以修改模板的模板授权范围是**所有第三方应用合作企业**(AuthTag设置为all)或者**指定第三方应用合作企业**(AuthTag设置为part)，**当模板发布后，不可做此修改**
- 如果模板是部分授权,  可通过ProxyOrganizationOpenIds增加子客的授权范围。

## 3. 取消模板的子客企业授权 (OperateType=DELETE)
- 对子客企业进行模板库中模板授权范围的进行删除操作。
- 主要对于手动领取的模板，去除授权后子客在模板库中看不到，就无法再领取了。但是**已经领取过成为自有模板的不会同步删除**。
- 对于自动领取的模板，由于已经下发，更改授权不会影响。
- 如果要同步删除子客自有模板库中的模板，请使用OperateType=UPDATE+Available参数处理。
                 * @param req OperateChannelTemplateRequest
                 * @return OperateChannelTemplateOutcome
                 */
                OperateChannelTemplateOutcome OperateChannelTemplate(const Model::OperateChannelTemplateRequest &request);
                void OperateChannelTemplateAsync(const Model::OperateChannelTemplateRequest& request, const OperateChannelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateChannelTemplateOutcomeCallable OperateChannelTemplateCallable(const Model::OperateChannelTemplateRequest& request);

                /**
                 *此接口（OperateTemplate）用于对企业自有模板进行管理操作，所有操作都会有对应的回调触发，具体参考回调文档 <a href="https://qian.tencent.com/developers/partner/callback_types_templates" target="_blank">模板操作相关回调</a>

# 支持的操作
## 1. 删除模板 (OperateType=DELETE)
此操作会将模板从企业自有模板中彻底删除，若要保留模板而不删除，可将模板停用。

## 2. 启用模板 (OperateType=ENABLE)
此操作是将已停用的模板启用，操作幂等，若模板已启用，接口不报错。

## 3. 停用模板 (OperateType=DISABLE)
此操作是将已启用的模板停用，操作幂等，若模板已停用，接口不报错，停用后，无法通过此模板发起合同，已发起的合同不受影响。

## 4. 复制模板 (OperateType=COPY)
此操作将复制一个完全一样的模板，仅支持修改模板名称，若要修改其他模板内容，需到腾讯电子签控制台操作。
                 * @param req OperateTemplateRequest
                 * @return OperateTemplateOutcome
                 */
                OperateTemplateOutcome OperateTemplate(const Model::OperateTemplateRequest &request);
                void OperateTemplateAsync(const Model::OperateTemplateRequest& request, const OperateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OperateTemplateOutcomeCallable OperateTemplateCallable(const Model::OperateTemplateRequest& request);

                /**
                 *已经不再使用

该接口 (PrepareFlows) 用于创建待发起文件
用户通过该接口进入签署流程发起的确认页面，进行发起信息二次确认， 如果确认则进行正常发起。
目前该接口只支持B2C，<font color='red'> **不建议使用**</font>。
                 * @param req PrepareFlowsRequest
                 * @return PrepareFlowsOutcome
                 */
                PrepareFlowsOutcome PrepareFlows(const Model::PrepareFlowsRequest &request);
                void PrepareFlowsAsync(const Model::PrepareFlowsRequest& request, const PrepareFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PrepareFlowsOutcomeCallable PrepareFlowsCallable(const Model::PrepareFlowsRequest& request);

                /**
                 *此接口（SyncProxyOrganization）用于同步第三方平台子客企业信息，包括企业名称、企业营业执照、企业统一社会信用代码和法人姓名等，便于子客企业在企业激活过程中无需手动上传营业执照或补充企业信息。

注意：

- **需要在<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>前同步的企业信息**, 否则会出现信息同步没有用的情形
- **企业信息需要和营业执照信息对应**,  否则会出现激活过程验证不通过的问题

![image](https://qcloudimg.tencent-cloud.cn/raw/7ec91b79a0a4860e77c9ff9f4a5f13ad/channel_SyncProxyOrganization2.png)


- **企业统一社会信用代码**: 对应上图中的**1**
- **第三方平台子客企业名称**: 对应上图中的**2**
- **企业法定代表人的名字**:对应上图中的**3**
- **企业详细住所**:对应上图中的**4**
                 * @param req SyncProxyOrganizationRequest
                 * @return SyncProxyOrganizationOutcome
                 */
                SyncProxyOrganizationOutcome SyncProxyOrganization(const Model::SyncProxyOrganizationRequest &request);
                void SyncProxyOrganizationAsync(const Model::SyncProxyOrganizationRequest& request, const SyncProxyOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncProxyOrganizationOutcomeCallable SyncProxyOrganizationCallable(const Model::SyncProxyOrganizationRequest& request);

                /**
                 *此接口（SyncProxyOrganizationOperators）用于同步 第三方平台子客企业经办人列表，主要是同步经办人的离职状态。
子客Web控制台的组织架构管理，依赖于第三方应用平台的，无法在页面针对员工做新增/更新/离职等操作， 必须通过 API 来操作。 

- **新增员工的场景**:    通过本接口提前导入员工列表, 然后调用<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>分享给对应的员工进行实名, 新增员工后员工的状态为**未实名**, 通过链接实名后状态变为**已实名**, 已实名员工就可以参与合同的发起。

- **员工离职的场景**: 通过本接口将员工置为离职, 员工无法登录控制台和腾讯电子签小程序进行操作了,   同时给此员工分配的openid会被回收可以给其他新员工使用 (离职后员工数据会被置空,  再次加入公司会从零开始) ,  若员工信息有误可通过离职后在新增来解决,  离职员工状态为**离职**。

![image](https://qcloudimg.tencent-cloud.cn/raw/7a27a6bb0e4d39c2f6aa2a0b39946181/channel_SyncProxyOrganizationOperators.png)

**注**:    
-  新增员工可以配置白名单限制注册使用对应openid的员工必须满足SyncProxyOrganizationOperators导入的(默认生成子客登录链接生成的链接可以任意员工点击注册绑定对应的openid), 此白名单需要咨询接入经理
-  <font color='red'>超管和法人无法通过此接口离职</font>,  需要超管和法人将权限转移给其他人后才可通过此接口离职
- 新增员工的场景同ID不同员工会覆盖掉上一个同ID的员工, 如果上一个员工已经实名则不会被覆盖
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
1. 图片类型(png/jpg/jpeg)限制大小为5M以下, PDF/word/excel等其他格式限制大小为60M以下
2. <font color='red'>此接口调用时需要单独设置Domain请求域名 </font>,  联调开发环境为 <font color='red'>file.test.ess.tencent.cn</font>，正式环境需要设置为<font color='red'>file.ess.tencent.cn</font>，代码示例
```
HttpProfile httpProfile = new HttpProfile();
httpProfile.setEndpoint("file.test.ess.tencent.cn");
```

<font color="red">相关视频指引</font> <br>
1. <a href="https://dyn.ess.tencent.cn/guide/apivideo/essbasic-UploadFiles.mp4" target="_blank">【上传文件代码】编写示例</a><br>
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
