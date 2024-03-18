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

#ifndef TENCENTCLOUD_ESS_V20201111_ESSCLIENT_H_
#define TENCENTCLOUD_ESS_V20201111_ESSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ess/v20201111/model/BindEmployeeUserIdWithClientOpenIdRequest.h>
#include <tencentcloud/ess/v20201111/model/BindEmployeeUserIdWithClientOpenIdResponse.h>
#include <tencentcloud/ess/v20201111/model/CancelFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/CancelFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/CancelMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/CancelMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/CancelUserAutoSignEnableUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CancelUserAutoSignEnableUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateBatchCancelFlowUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateBatchCancelFlowUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateBatchQuickSignUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateBatchQuickSignUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateBatchSignUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateBatchSignUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateConvertTaskApiRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateConvertTaskApiResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateDocumentRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateDocumentResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateEmbedWebUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateEmbedWebUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateExtendedServiceAuthInfosRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateExtendedServiceAuthInfosResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowApproversRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowApproversResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowByFilesRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowByFilesResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowEvidenceReportRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowEvidenceReportResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowGroupByFilesRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowGroupByFilesResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowGroupByTemplatesRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowGroupByTemplatesResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowGroupSignReviewRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowGroupSignReviewResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowRemindsRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowRemindsResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowSignReviewRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowSignReviewResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowSignUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowSignUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationDepartmentRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationDepartmentResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationEmployeesRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationEmployeesResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationRoleRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationRoleResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationUserRolesRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationUserRolesResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateOrganizationBatchSignUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateOrganizationBatchSignUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateOrganizationInfoChangeUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateOrganizationInfoChangeUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreatePersonAuthCertificateImageRequest.h>
#include <tencentcloud/ess/v20201111/model/CreatePersonAuthCertificateImageResponse.h>
#include <tencentcloud/ess/v20201111/model/CreatePrepareFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/CreatePrepareFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/CreatePreparedPersonalEsignRequest.h>
#include <tencentcloud/ess/v20201111/model/CreatePreparedPersonalEsignResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateReleaseFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateReleaseFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateSchemeUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateSchemeUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateSealRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateSealResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateSealPolicyRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateSealPolicyResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateUserAutoSignEnableUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateUserAutoSignEnableUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateUserAutoSignSealUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateUserAutoSignSealUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateWebThemeConfigRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateWebThemeConfigResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteExtendedServiceAuthInfosRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteExtendedServiceAuthInfosResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationDepartmentRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationDepartmentResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationEmployeesRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationEmployeesResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationRoleUsersRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationRoleUsersResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteSealPoliciesRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteSealPoliciesResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeBillUsageDetailRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeBillUsageDetailResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeExtendedServiceAuthDetailRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeExtendedServiceAuthDetailResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeExtendedServiceAuthInfosRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeExtendedServiceAuthInfosResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFileUrlsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFileUrlsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowBriefsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowBriefsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowComponentsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowComponentsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowEvidenceReportRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowEvidenceReportResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowInfoRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowInfoResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowTemplatesRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowTemplatesResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationDepartmentsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationDepartmentsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationEmployeesRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationEmployeesResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationRolesRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationRolesResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationSealsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationSealsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribePersonCertificateRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribePersonCertificateResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeSignFaceVideoRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeSignFaceVideoResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeUserAutoSignStatusRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeUserAutoSignStatusResponse.h>
#include <tencentcloud/ess/v20201111/model/DisableUserAutoSignRequest.h>
#include <tencentcloud/ess/v20201111/model/DisableUserAutoSignResponse.h>
#include <tencentcloud/ess/v20201111/model/GetTaskResultApiRequest.h>
#include <tencentcloud/ess/v20201111/model/GetTaskResultApiResponse.h>
#include <tencentcloud/ess/v20201111/model/ModifyApplicationCallbackInfoRequest.h>
#include <tencentcloud/ess/v20201111/model/ModifyApplicationCallbackInfoResponse.h>
#include <tencentcloud/ess/v20201111/model/ModifyExtendedServiceRequest.h>
#include <tencentcloud/ess/v20201111/model/ModifyExtendedServiceResponse.h>
#include <tencentcloud/ess/v20201111/model/ModifyFlowDeadlineRequest.h>
#include <tencentcloud/ess/v20201111/model/ModifyFlowDeadlineResponse.h>
#include <tencentcloud/ess/v20201111/model/ModifyIntegrationDepartmentRequest.h>
#include <tencentcloud/ess/v20201111/model/ModifyIntegrationDepartmentResponse.h>
#include <tencentcloud/ess/v20201111/model/ModifyIntegrationRoleRequest.h>
#include <tencentcloud/ess/v20201111/model/ModifyIntegrationRoleResponse.h>
#include <tencentcloud/ess/v20201111/model/RenewAutoSignLicenseRequest.h>
#include <tencentcloud/ess/v20201111/model/RenewAutoSignLicenseResponse.h>
#include <tencentcloud/ess/v20201111/model/StartFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/StartFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/UnbindEmployeeUserIdWithClientOpenIdRequest.h>
#include <tencentcloud/ess/v20201111/model/UnbindEmployeeUserIdWithClientOpenIdResponse.h>
#include <tencentcloud/ess/v20201111/model/UpdateIntegrationEmployeesRequest.h>
#include <tencentcloud/ess/v20201111/model/UpdateIntegrationEmployeesResponse.h>
#include <tencentcloud/ess/v20201111/model/UploadFilesRequest.h>
#include <tencentcloud/ess/v20201111/model/UploadFilesResponse.h>
#include <tencentcloud/ess/v20201111/model/VerifyPdfRequest.h>
#include <tencentcloud/ess/v20201111/model/VerifyPdfResponse.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            class EssClient : public AbstractClient
            {
            public:
                EssClient(const Credential &credential, const std::string &region);
                EssClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindEmployeeUserIdWithClientOpenIdResponse> BindEmployeeUserIdWithClientOpenIdOutcome;
                typedef std::future<BindEmployeeUserIdWithClientOpenIdOutcome> BindEmployeeUserIdWithClientOpenIdOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::BindEmployeeUserIdWithClientOpenIdRequest&, BindEmployeeUserIdWithClientOpenIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindEmployeeUserIdWithClientOpenIdAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelFlowResponse> CancelFlowOutcome;
                typedef std::future<CancelFlowOutcome> CancelFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CancelFlowRequest&, CancelFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelMultiFlowSignQRCodeResponse> CancelMultiFlowSignQRCodeOutcome;
                typedef std::future<CancelMultiFlowSignQRCodeOutcome> CancelMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CancelMultiFlowSignQRCodeRequest&, CancelMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelUserAutoSignEnableUrlResponse> CancelUserAutoSignEnableUrlOutcome;
                typedef std::future<CancelUserAutoSignEnableUrlOutcome> CancelUserAutoSignEnableUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CancelUserAutoSignEnableUrlRequest&, CancelUserAutoSignEnableUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelUserAutoSignEnableUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchCancelFlowUrlResponse> CreateBatchCancelFlowUrlOutcome;
                typedef std::future<CreateBatchCancelFlowUrlOutcome> CreateBatchCancelFlowUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateBatchCancelFlowUrlRequest&, CreateBatchCancelFlowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchCancelFlowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchQuickSignUrlResponse> CreateBatchQuickSignUrlOutcome;
                typedef std::future<CreateBatchQuickSignUrlOutcome> CreateBatchQuickSignUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateBatchQuickSignUrlRequest&, CreateBatchQuickSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchQuickSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchSignUrlResponse> CreateBatchSignUrlOutcome;
                typedef std::future<CreateBatchSignUrlOutcome> CreateBatchSignUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateBatchSignUrlRequest&, CreateBatchSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConvertTaskApiResponse> CreateConvertTaskApiOutcome;
                typedef std::future<CreateConvertTaskApiOutcome> CreateConvertTaskApiOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateConvertTaskApiRequest&, CreateConvertTaskApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConvertTaskApiAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocumentResponse> CreateDocumentOutcome;
                typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateDocumentRequest&, CreateDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmbedWebUrlResponse> CreateEmbedWebUrlOutcome;
                typedef std::future<CreateEmbedWebUrlOutcome> CreateEmbedWebUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateEmbedWebUrlRequest&, CreateEmbedWebUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmbedWebUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExtendedServiceAuthInfosResponse> CreateExtendedServiceAuthInfosOutcome;
                typedef std::future<CreateExtendedServiceAuthInfosOutcome> CreateExtendedServiceAuthInfosOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateExtendedServiceAuthInfosRequest&, CreateExtendedServiceAuthInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExtendedServiceAuthInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowResponse> CreateFlowOutcome;
                typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowRequest&, CreateFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowApproversResponse> CreateFlowApproversOutcome;
                typedef std::future<CreateFlowApproversOutcome> CreateFlowApproversOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowApproversRequest&, CreateFlowApproversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowApproversAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowByFilesResponse> CreateFlowByFilesOutcome;
                typedef std::future<CreateFlowByFilesOutcome> CreateFlowByFilesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowByFilesRequest&, CreateFlowByFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowByFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowEvidenceReportResponse> CreateFlowEvidenceReportOutcome;
                typedef std::future<CreateFlowEvidenceReportOutcome> CreateFlowEvidenceReportOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowEvidenceReportRequest&, CreateFlowEvidenceReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowEvidenceReportAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowGroupByFilesResponse> CreateFlowGroupByFilesOutcome;
                typedef std::future<CreateFlowGroupByFilesOutcome> CreateFlowGroupByFilesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowGroupByFilesRequest&, CreateFlowGroupByFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowGroupByFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowGroupByTemplatesResponse> CreateFlowGroupByTemplatesOutcome;
                typedef std::future<CreateFlowGroupByTemplatesOutcome> CreateFlowGroupByTemplatesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowGroupByTemplatesRequest&, CreateFlowGroupByTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowGroupByTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowGroupSignReviewResponse> CreateFlowGroupSignReviewOutcome;
                typedef std::future<CreateFlowGroupSignReviewOutcome> CreateFlowGroupSignReviewOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowGroupSignReviewRequest&, CreateFlowGroupSignReviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowGroupSignReviewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowRemindsResponse> CreateFlowRemindsOutcome;
                typedef std::future<CreateFlowRemindsOutcome> CreateFlowRemindsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowRemindsRequest&, CreateFlowRemindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowRemindsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowSignReviewResponse> CreateFlowSignReviewOutcome;
                typedef std::future<CreateFlowSignReviewOutcome> CreateFlowSignReviewOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowSignReviewRequest&, CreateFlowSignReviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowSignReviewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowSignUrlResponse> CreateFlowSignUrlOutcome;
                typedef std::future<CreateFlowSignUrlOutcome> CreateFlowSignUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowSignUrlRequest&, CreateFlowSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntegrationDepartmentResponse> CreateIntegrationDepartmentOutcome;
                typedef std::future<CreateIntegrationDepartmentOutcome> CreateIntegrationDepartmentOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateIntegrationDepartmentRequest&, CreateIntegrationDepartmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntegrationDepartmentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntegrationEmployeesResponse> CreateIntegrationEmployeesOutcome;
                typedef std::future<CreateIntegrationEmployeesOutcome> CreateIntegrationEmployeesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateIntegrationEmployeesRequest&, CreateIntegrationEmployeesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntegrationEmployeesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntegrationRoleResponse> CreateIntegrationRoleOutcome;
                typedef std::future<CreateIntegrationRoleOutcome> CreateIntegrationRoleOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateIntegrationRoleRequest&, CreateIntegrationRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntegrationRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntegrationUserRolesResponse> CreateIntegrationUserRolesOutcome;
                typedef std::future<CreateIntegrationUserRolesOutcome> CreateIntegrationUserRolesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateIntegrationUserRolesRequest&, CreateIntegrationUserRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntegrationUserRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMultiFlowSignQRCodeResponse> CreateMultiFlowSignQRCodeOutcome;
                typedef std::future<CreateMultiFlowSignQRCodeOutcome> CreateMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateMultiFlowSignQRCodeRequest&, CreateMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationBatchSignUrlResponse> CreateOrganizationBatchSignUrlOutcome;
                typedef std::future<CreateOrganizationBatchSignUrlOutcome> CreateOrganizationBatchSignUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateOrganizationBatchSignUrlRequest&, CreateOrganizationBatchSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationBatchSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrganizationInfoChangeUrlResponse> CreateOrganizationInfoChangeUrlOutcome;
                typedef std::future<CreateOrganizationInfoChangeUrlOutcome> CreateOrganizationInfoChangeUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateOrganizationInfoChangeUrlRequest&, CreateOrganizationInfoChangeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrganizationInfoChangeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonAuthCertificateImageResponse> CreatePersonAuthCertificateImageOutcome;
                typedef std::future<CreatePersonAuthCertificateImageOutcome> CreatePersonAuthCertificateImageOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreatePersonAuthCertificateImageRequest&, CreatePersonAuthCertificateImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonAuthCertificateImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrepareFlowResponse> CreatePrepareFlowOutcome;
                typedef std::future<CreatePrepareFlowOutcome> CreatePrepareFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreatePrepareFlowRequest&, CreatePrepareFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrepareFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePreparedPersonalEsignResponse> CreatePreparedPersonalEsignOutcome;
                typedef std::future<CreatePreparedPersonalEsignOutcome> CreatePreparedPersonalEsignOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreatePreparedPersonalEsignRequest&, CreatePreparedPersonalEsignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePreparedPersonalEsignAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReleaseFlowResponse> CreateReleaseFlowOutcome;
                typedef std::future<CreateReleaseFlowOutcome> CreateReleaseFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateReleaseFlowRequest&, CreateReleaseFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReleaseFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchemeUrlResponse> CreateSchemeUrlOutcome;
                typedef std::future<CreateSchemeUrlOutcome> CreateSchemeUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateSchemeUrlRequest&, CreateSchemeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchemeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSealResponse> CreateSealOutcome;
                typedef std::future<CreateSealOutcome> CreateSealOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateSealRequest&, CreateSealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSealAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSealPolicyResponse> CreateSealPolicyOutcome;
                typedef std::future<CreateSealPolicyOutcome> CreateSealPolicyOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateSealPolicyRequest&, CreateSealPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSealPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserAutoSignEnableUrlResponse> CreateUserAutoSignEnableUrlOutcome;
                typedef std::future<CreateUserAutoSignEnableUrlOutcome> CreateUserAutoSignEnableUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateUserAutoSignEnableUrlRequest&, CreateUserAutoSignEnableUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAutoSignEnableUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserAutoSignSealUrlResponse> CreateUserAutoSignSealUrlOutcome;
                typedef std::future<CreateUserAutoSignSealUrlOutcome> CreateUserAutoSignSealUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateUserAutoSignSealUrlRequest&, CreateUserAutoSignSealUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAutoSignSealUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWebThemeConfigResponse> CreateWebThemeConfigOutcome;
                typedef std::future<CreateWebThemeConfigOutcome> CreateWebThemeConfigOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateWebThemeConfigRequest&, CreateWebThemeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebThemeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExtendedServiceAuthInfosResponse> DeleteExtendedServiceAuthInfosOutcome;
                typedef std::future<DeleteExtendedServiceAuthInfosOutcome> DeleteExtendedServiceAuthInfosOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DeleteExtendedServiceAuthInfosRequest&, DeleteExtendedServiceAuthInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExtendedServiceAuthInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIntegrationDepartmentResponse> DeleteIntegrationDepartmentOutcome;
                typedef std::future<DeleteIntegrationDepartmentOutcome> DeleteIntegrationDepartmentOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DeleteIntegrationDepartmentRequest&, DeleteIntegrationDepartmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntegrationDepartmentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIntegrationEmployeesResponse> DeleteIntegrationEmployeesOutcome;
                typedef std::future<DeleteIntegrationEmployeesOutcome> DeleteIntegrationEmployeesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DeleteIntegrationEmployeesRequest&, DeleteIntegrationEmployeesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntegrationEmployeesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIntegrationRoleUsersResponse> DeleteIntegrationRoleUsersOutcome;
                typedef std::future<DeleteIntegrationRoleUsersOutcome> DeleteIntegrationRoleUsersOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DeleteIntegrationRoleUsersRequest&, DeleteIntegrationRoleUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntegrationRoleUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSealPoliciesResponse> DeleteSealPoliciesOutcome;
                typedef std::future<DeleteSealPoliciesOutcome> DeleteSealPoliciesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DeleteSealPoliciesRequest&, DeleteSealPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSealPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillUsageDetailResponse> DescribeBillUsageDetailOutcome;
                typedef std::future<DescribeBillUsageDetailOutcome> DescribeBillUsageDetailOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeBillUsageDetailRequest&, DescribeBillUsageDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillUsageDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtendedServiceAuthDetailResponse> DescribeExtendedServiceAuthDetailOutcome;
                typedef std::future<DescribeExtendedServiceAuthDetailOutcome> DescribeExtendedServiceAuthDetailOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeExtendedServiceAuthDetailRequest&, DescribeExtendedServiceAuthDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtendedServiceAuthDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExtendedServiceAuthInfosResponse> DescribeExtendedServiceAuthInfosOutcome;
                typedef std::future<DescribeExtendedServiceAuthInfosOutcome> DescribeExtendedServiceAuthInfosOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeExtendedServiceAuthInfosRequest&, DescribeExtendedServiceAuthInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExtendedServiceAuthInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileUrlsResponse> DescribeFileUrlsOutcome;
                typedef std::future<DescribeFileUrlsOutcome> DescribeFileUrlsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFileUrlsRequest&, DescribeFileUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowBriefsResponse> DescribeFlowBriefsOutcome;
                typedef std::future<DescribeFlowBriefsOutcome> DescribeFlowBriefsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowBriefsRequest&, DescribeFlowBriefsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowBriefsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowComponentsResponse> DescribeFlowComponentsOutcome;
                typedef std::future<DescribeFlowComponentsOutcome> DescribeFlowComponentsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowComponentsRequest&, DescribeFlowComponentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowComponentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowEvidenceReportResponse> DescribeFlowEvidenceReportOutcome;
                typedef std::future<DescribeFlowEvidenceReportOutcome> DescribeFlowEvidenceReportOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowEvidenceReportRequest&, DescribeFlowEvidenceReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowEvidenceReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowInfoResponse> DescribeFlowInfoOutcome;
                typedef std::future<DescribeFlowInfoOutcome> DescribeFlowInfoOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowInfoRequest&, DescribeFlowInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowTemplatesResponse> DescribeFlowTemplatesOutcome;
                typedef std::future<DescribeFlowTemplatesOutcome> DescribeFlowTemplatesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowTemplatesRequest&, DescribeFlowTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationDepartmentsResponse> DescribeIntegrationDepartmentsOutcome;
                typedef std::future<DescribeIntegrationDepartmentsOutcome> DescribeIntegrationDepartmentsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeIntegrationDepartmentsRequest&, DescribeIntegrationDepartmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationDepartmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationEmployeesResponse> DescribeIntegrationEmployeesOutcome;
                typedef std::future<DescribeIntegrationEmployeesOutcome> DescribeIntegrationEmployeesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeIntegrationEmployeesRequest&, DescribeIntegrationEmployeesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationEmployeesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationRolesResponse> DescribeIntegrationRolesOutcome;
                typedef std::future<DescribeIntegrationRolesOutcome> DescribeIntegrationRolesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeIntegrationRolesRequest&, DescribeIntegrationRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationGroupOrganizationsResponse> DescribeOrganizationGroupOrganizationsOutcome;
                typedef std::future<DescribeOrganizationGroupOrganizationsOutcome> DescribeOrganizationGroupOrganizationsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeOrganizationGroupOrganizationsRequest&, DescribeOrganizationGroupOrganizationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationGroupOrganizationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationSealsResponse> DescribeOrganizationSealsOutcome;
                typedef std::future<DescribeOrganizationSealsOutcome> DescribeOrganizationSealsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeOrganizationSealsRequest&, DescribeOrganizationSealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationSealsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonCertificateResponse> DescribePersonCertificateOutcome;
                typedef std::future<DescribePersonCertificateOutcome> DescribePersonCertificateOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribePersonCertificateRequest&, DescribePersonCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSignFaceVideoResponse> DescribeSignFaceVideoOutcome;
                typedef std::future<DescribeSignFaceVideoOutcome> DescribeSignFaceVideoOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeSignFaceVideoRequest&, DescribeSignFaceVideoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSignFaceVideoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeThirdPartyAuthCodeResponse> DescribeThirdPartyAuthCodeOutcome;
                typedef std::future<DescribeThirdPartyAuthCodeOutcome> DescribeThirdPartyAuthCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeThirdPartyAuthCodeRequest&, DescribeThirdPartyAuthCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThirdPartyAuthCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserAutoSignStatusResponse> DescribeUserAutoSignStatusOutcome;
                typedef std::future<DescribeUserAutoSignStatusOutcome> DescribeUserAutoSignStatusOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeUserAutoSignStatusRequest&, DescribeUserAutoSignStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAutoSignStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableUserAutoSignResponse> DisableUserAutoSignOutcome;
                typedef std::future<DisableUserAutoSignOutcome> DisableUserAutoSignOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DisableUserAutoSignRequest&, DisableUserAutoSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableUserAutoSignAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskResultApiResponse> GetTaskResultApiOutcome;
                typedef std::future<GetTaskResultApiOutcome> GetTaskResultApiOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::GetTaskResultApiRequest&, GetTaskResultApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskResultApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationCallbackInfoResponse> ModifyApplicationCallbackInfoOutcome;
                typedef std::future<ModifyApplicationCallbackInfoOutcome> ModifyApplicationCallbackInfoOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::ModifyApplicationCallbackInfoRequest&, ModifyApplicationCallbackInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationCallbackInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyExtendedServiceResponse> ModifyExtendedServiceOutcome;
                typedef std::future<ModifyExtendedServiceOutcome> ModifyExtendedServiceOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::ModifyExtendedServiceRequest&, ModifyExtendedServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExtendedServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFlowDeadlineResponse> ModifyFlowDeadlineOutcome;
                typedef std::future<ModifyFlowDeadlineOutcome> ModifyFlowDeadlineOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::ModifyFlowDeadlineRequest&, ModifyFlowDeadlineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowDeadlineAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntegrationDepartmentResponse> ModifyIntegrationDepartmentOutcome;
                typedef std::future<ModifyIntegrationDepartmentOutcome> ModifyIntegrationDepartmentOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::ModifyIntegrationDepartmentRequest&, ModifyIntegrationDepartmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationDepartmentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntegrationRoleResponse> ModifyIntegrationRoleOutcome;
                typedef std::future<ModifyIntegrationRoleOutcome> ModifyIntegrationRoleOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::ModifyIntegrationRoleRequest&, ModifyIntegrationRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewAutoSignLicenseResponse> RenewAutoSignLicenseOutcome;
                typedef std::future<RenewAutoSignLicenseOutcome> RenewAutoSignLicenseOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::RenewAutoSignLicenseRequest&, RenewAutoSignLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewAutoSignLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::StartFlowResponse> StartFlowOutcome;
                typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::StartFlowRequest&, StartFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindEmployeeUserIdWithClientOpenIdResponse> UnbindEmployeeUserIdWithClientOpenIdOutcome;
                typedef std::future<UnbindEmployeeUserIdWithClientOpenIdOutcome> UnbindEmployeeUserIdWithClientOpenIdOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::UnbindEmployeeUserIdWithClientOpenIdRequest&, UnbindEmployeeUserIdWithClientOpenIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindEmployeeUserIdWithClientOpenIdAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateIntegrationEmployeesResponse> UpdateIntegrationEmployeesOutcome;
                typedef std::future<UpdateIntegrationEmployeesOutcome> UpdateIntegrationEmployeesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::UpdateIntegrationEmployeesRequest&, UpdateIntegrationEmployeesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIntegrationEmployeesAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFilesResponse> UploadFilesOutcome;
                typedef std::future<UploadFilesOutcome> UploadFilesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::UploadFilesRequest&, UploadFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyPdfResponse> VerifyPdfOutcome;
                typedef std::future<VerifyPdfOutcome> VerifyPdfOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::VerifyPdfRequest&, VerifyPdfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPdfAsyncHandler;



                /**
                 *此接口（BindEmployeeUserIdWithClientOpenId）用于将电子签系统员工UserId与客户系统员工OpenId进行绑定。

此OpenId只在 [更新企业员工信息 ](https://qian.tencent.com/developers/companyApis/staffs/UpdateIntegrationEmployees)、[移除企业员工](https://qian.tencent.com/developers/companyApis/staffs/DeleteIntegrationEmployees) 等场景下可以使用
                 * @param req BindEmployeeUserIdWithClientOpenIdRequest
                 * @return BindEmployeeUserIdWithClientOpenIdOutcome
                 */
                BindEmployeeUserIdWithClientOpenIdOutcome BindEmployeeUserIdWithClientOpenId(const Model::BindEmployeeUserIdWithClientOpenIdRequest &request);
                void BindEmployeeUserIdWithClientOpenIdAsync(const Model::BindEmployeeUserIdWithClientOpenIdRequest& request, const BindEmployeeUserIdWithClientOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindEmployeeUserIdWithClientOpenIdOutcomeCallable BindEmployeeUserIdWithClientOpenIdCallable(const Model::BindEmployeeUserIdWithClientOpenIdRequest& request);

                /**
                 *用于撤销合同流程<br/>
适用场景：如果某个合同流程当前至少还有一方没有签署，则可通过该接口取消该合同流程。常用于合同发错、内容填错，需要及时撤销的场景。<br/>
- **可撤回合同状态**：未全部签署完成
- **不撤回合同状态**：已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等合同状态。

注:
1. 如果合同流程中的参与方均已签署完毕，则无法通过该接口撤销合同，签署完毕的合同需要双方走解除流程将合同作废，可以参考<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateReleaseFlow" target="_blank">发起解除合同流程</a>接口。

2. 有对应合同撤销权限的人:  <font color='red'>合同的发起人（并已经授予撤销权限）或者发起人所在企业的超管、法人</font>
![image](https://qcloudimg.tencent-cloud.cn/raw/1f9f07fea6a70766cd286e0d58682ee2.png)

3. <font color='red'>只有撤销没有参与方签署过或只有自动签署签署过的合同，才会返还合同额度。</font>

4.  撤销后可以看合同PDF内容的人员： 发起方的超管， 发起方自己，发起方撤销合同的操作人员，已经签署合同、已经填写合同、邀请填写已经补充信息的参与人员
                 * @param req CancelFlowRequest
                 * @return CancelFlowOutcome
                 */
                CancelFlowOutcome CancelFlow(const Model::CancelFlowRequest &request);
                void CancelFlowAsync(const Model::CancelFlowRequest& request, const CancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelFlowOutcomeCallable CancelFlowCallable(const Model::CancelFlowRequest& request);

                /**
                 *此接口（CancelMultiFlowSignQRCode）用于废除一码多签签署码。
该接口所需的二维码ID，源自[创建一码多签签署码](https://qian.tencent.com/developers/companyApis/startFlows/CreateMultiFlowSignQRCode)生成的。
如果该签署码尚处于有效期内，可通过本接口将其设置为失效状态。
                 * @param req CancelMultiFlowSignQRCodeRequest
                 * @return CancelMultiFlowSignQRCodeOutcome
                 */
                CancelMultiFlowSignQRCodeOutcome CancelMultiFlowSignQRCode(const Model::CancelMultiFlowSignQRCodeRequest &request);
                void CancelMultiFlowSignQRCodeAsync(const Model::CancelMultiFlowSignQRCodeRequest& request, const CancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelMultiFlowSignQRCodeOutcomeCallable CancelMultiFlowSignQRCodeCallable(const Model::CancelMultiFlowSignQRCodeRequest& request);

                /**
                 *用来撤销<a href="https://qian.tencent.com/developers/companyApis/users/CreateUserAutoSignEnableUrl" target="_blank">获取个人用户自动签的开通状态</a>生成的开通链接，撤销生成的链接失效。

注:
<ul><li>若个人用户已经用生成的完成自动签署的开通，撤销链接无效不会对开通结果产生影响(此情况接口会报错)。</li>
<li>处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。</li></ul>
                 * @param req CancelUserAutoSignEnableUrlRequest
                 * @return CancelUserAutoSignEnableUrlOutcome
                 */
                CancelUserAutoSignEnableUrlOutcome CancelUserAutoSignEnableUrl(const Model::CancelUserAutoSignEnableUrlRequest &request);
                void CancelUserAutoSignEnableUrlAsync(const Model::CancelUserAutoSignEnableUrlRequest& request, const CancelUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelUserAutoSignEnableUrlOutcomeCallable CancelUserAutoSignEnableUrlCallable(const Model::CancelUserAutoSignEnableUrlRequest& request);

                /**
                 *指定需要批量撤回的签署流程Id，以获取批量撤销链接。
客户需指定要撤回的签署流程Id，最多可指定100个，超过100则不处理。
接口调用成功后，将返回批量撤回合同的链接。通过点击链接，可跳转至电子签小程序完成批量撤回操作。

- **可撤回合同状态**：未全部签署完成
- **不撤回合同状态**：已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等合同状态。

批量撤销结果可以通过接口返回的TaskId关联[批量撤销任务结果回调](https://qian.tencent.com/developers/company/callback_types_contracts_sign#%E4%B9%9D-%E6%89%B9%E9%87%8F%E6%92%A4%E9%94%80%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)或通过接口[查询批量撤销签署流程任务结果](https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl)


注：
1. 如果合同流程中的参与方均已签署完毕，则无法通过该接口撤销合同，签署完毕的合同需要双方走解除流程将合同作废，可以参考<a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateReleaseFlow" target="_blank">发起解除合同流程</a>接口。

2. 有对应合同撤销权限的人:  <font color='red'>合同的发起人（并已经授予撤销权限）或者发起人所在企业的超管、法人</font>
![image](https://qcloudimg.tencent-cloud.cn/raw/1f9f07fea6a70766cd286e0d58682ee2.png)

3. <font color='red'>只有撤销没有参与方签署过或只有自动签署签署过的合同，才会返还合同额度。</font>
                 * @param req CreateBatchCancelFlowUrlRequest
                 * @return CreateBatchCancelFlowUrlOutcome
                 */
                CreateBatchCancelFlowUrlOutcome CreateBatchCancelFlowUrl(const Model::CreateBatchCancelFlowUrlRequest &request);
                void CreateBatchCancelFlowUrlAsync(const Model::CreateBatchCancelFlowUrlRequest& request, const CreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchCancelFlowUrlOutcomeCallable CreateBatchCancelFlowUrlCallable(const Model::CreateBatchCancelFlowUrlRequest& request);

                /**
                 *该接口用于发起合同后，生成个人用户的批量签署链接, 暂时不支持企业端签署。
**注意：**
1. 该接口目前仅支持签署人类型是**个人签署方的批量签署场景**(ApproverType=1)。
2. 该接口可生成批量签署链接的C端签署人**必须仅有手写签名(控件类型为SIGN_SIGNATURE)和时间类型的签署控件**，**不支持填写控件** 。
3. 请确保C端签署人在批量签署合同中**为待签署状态**，如需顺序签署请待前一位参与人签署完成后，再创建该C端用户的签署链接。
4. 该签署链接**有效期为30分钟**，过期后将失效，如需签署可重新创建批量签署链接 。
5. 该接口返回的签署链接适用于APP集成的场景，支持APP打开或浏览器直接打开，**不支持微信小程序嵌入**。
跳转到小程序的实现，参考微信官方文档(分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式)，如何配置也可以请参考: <a href="https://qian.tencent.com/developers/company/openwxminiprogram">跳转电子签小程序配置</a>。
6. 因h5涉及人脸身份认证能力基于慧眼人脸核身，对Android和iOS系统均有一定要求， 因此<font color='red'>App嵌入H5签署合同需要按照慧眼提供的<a href="https://cloud.tencent.com/document/product/1007/61076">慧眼人脸核身兼容性文档</a>做兼容性适配</font>。
                 * @param req CreateBatchQuickSignUrlRequest
                 * @return CreateBatchQuickSignUrlOutcome
                 */
                CreateBatchQuickSignUrlOutcome CreateBatchQuickSignUrl(const Model::CreateBatchQuickSignUrlRequest &request);
                void CreateBatchQuickSignUrlAsync(const Model::CreateBatchQuickSignUrlRequest& request, const CreateBatchQuickSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchQuickSignUrlOutcomeCallable CreateBatchQuickSignUrlCallable(const Model::CreateBatchQuickSignUrlRequest& request);

                /**
                 *通过此接口，创建小程序批量签署链接，个人/企业员工点击此链接即可跳转小程序进行批量签署。
请确保生成链接时候的身份信息和签署合同参与方的信息保持一致。

注：
- 使用此接口生成链接，需要提前开通 `使用手机号验证签署方身份` 功能，在 `腾讯电子签网页端-企业设置-拓展服务` 中可以找到。
- 参与人点击链接后需短信验证码才能查看合同内容。
- 企业用户批量签署，需要传OrganizationName（参与方所在企业名称）参数生成签署链接，`请确保此企业已完成腾讯电子签企业认证`。
- 个人批量签署，签名区`仅支持手写签名`。
                 * @param req CreateBatchSignUrlRequest
                 * @return CreateBatchSignUrlOutcome
                 */
                CreateBatchSignUrlOutcome CreateBatchSignUrl(const Model::CreateBatchSignUrlRequest &request);
                void CreateBatchSignUrlAsync(const Model::CreateBatchSignUrlRequest& request, const CreateBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchSignUrlOutcomeCallable CreateBatchSignUrlCallable(const Model::CreateBatchSignUrlRequest& request);

                /**
                 *此接口（CreateConvertTaskApi）用来将word、excel、html、图片、txt类型文件转换为PDF文件。<br />
前提条件：源文件已经通过 <a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">文件上传接口</a>完成上传，并得到了源文件的资源Id。<br />
适用场景1：已经上传了一个word文件，希望将该word文件转换成pdf文件后发起合同
适用场景2：已经上传了一个jpg图片文件，希望将该图片文件转换成pdf文件后发起合同<br />
转换文件是一个耗时操作，若想查看转换任务是否完成，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/GetTaskResultApi" target="_blank">查询转换任务状态</a>接口获取任务状态。<br />
注: 
1. `支持的文件类型有doc、docx、xls、xlsx、html、jpg、jpeg、png、bmp、txt`
2. `可通过发起合同时设置预览来检查转换文件是否达到预期效果`
                 * @param req CreateConvertTaskApiRequest
                 * @return CreateConvertTaskApiOutcome
                 */
                CreateConvertTaskApiOutcome CreateConvertTaskApi(const Model::CreateConvertTaskApiRequest &request);
                void CreateConvertTaskApiAsync(const Model::CreateConvertTaskApiRequest& request, const CreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConvertTaskApiOutcomeCallable CreateConvertTaskApiCallable(const Model::CreateConvertTaskApiRequest& request);

                /**
                 *创建签署流程电子文档<br />

###  调用流程
该接口需要给对应的流程指定一个模板id，并且填充该模板中需要补充的信息。需要配置<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlow" target="_blank">创建签署流程</a>和<a href="https://qian.tencent.com/developers/companyApis/startFlows/StartFlow" target="_blank">发起签署流程</a>接口使用。具体逻辑可以参考下图:

![image](https://qcloudimg.tencent-cloud.cn/raw/06f2bc0f1772d8deac2f92b5df61a5ac.png)


### 填充模板中定义的填写控件
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
                 * @param req CreateDocumentRequest
                 * @return CreateDocumentOutcome
                 */
                CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest &request);
                void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request);

                /**
                 *本接口（CreateEmbedWebUrl）用于创建嵌入Web的链接，支持以下类型的Web链接创建：
1. 创建印章
2. 创建模板
3. 修改模板
4. 预览模板
5. 预览合同流程

用户可以通过这些链接快速将其集成到自己的系统中。
                 * @param req CreateEmbedWebUrlRequest
                 * @return CreateEmbedWebUrlOutcome
                 */
                CreateEmbedWebUrlOutcome CreateEmbedWebUrl(const Model::CreateEmbedWebUrlRequest &request);
                void CreateEmbedWebUrlAsync(const Model::CreateEmbedWebUrlRequest& request, const CreateEmbedWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmbedWebUrlOutcomeCallable CreateEmbedWebUrlCallable(const Model::CreateEmbedWebUrlRequest& request);

                /**
                 *创建企业扩展服务授权，当前仅支持授权 “企业自动签” 和 “批量签署” 给企业员工。
该接口作用和电子签控制台 企业设置-扩展服务-企业自动签署和批量签署授权 两个模块功能相同，可通过该接口授权给企业员工。

注：“企业自动签授权”支持集团代子企业操作，请联系运营开通此功能。
                 * @param req CreateExtendedServiceAuthInfosRequest
                 * @return CreateExtendedServiceAuthInfosOutcome
                 */
                CreateExtendedServiceAuthInfosOutcome CreateExtendedServiceAuthInfos(const Model::CreateExtendedServiceAuthInfosRequest &request);
                void CreateExtendedServiceAuthInfosAsync(const Model::CreateExtendedServiceAuthInfosRequest& request, const CreateExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExtendedServiceAuthInfosOutcomeCallable CreateExtendedServiceAuthInfosCallable(const Model::CreateExtendedServiceAuthInfosRequest& request);

                /**
                 *通过模板创建签署流程<br/>
适用场景：在标准制式的合同场景中，可通过提前预制好模板文件，每次调用模板文件的id，补充合同内容信息及签署信息生成电子合同。
<table>
	<thead>
		<tr>
			<th>签署人类别</th>
			<th>需要提前准备的信息</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>自己企业的员工签署（未认证加入或已认证加入）</td>
			<td>签署企业的名字、员工的真实名字、员工的触达手机号、员工的证件号（证件号非必传）</td>
		</tr>
		<tr>
			<td>自己企业的员工签署（已认证加入）</td>
			<td>签署企业的名字、员工在电子签平台的ID（UserId）</td>
		</tr>
		<tr>
			<td>其他企业的员工签署</td>
			<td>签署企业的名字、员工的真实名字、员工的触达手机号、员工的证件号（证件号非必传）</td>
		</tr>
		<tr>
			<td>个人（自然人）签署</td>
			<td>个人的真实名字、个人的触达手机号、个人的身份证（证件号非必传）</td>
		</tr>
	</tbody>
</table>


注：配合<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument" target="_blank">创建电子文档</a>和<a href="https://qian.tencent.com/developers/companyApis/startFlows/StartFlow" target="_blank">发起签署流程</a>接口使用。整体的逻辑如下图

![image](https://qcloudimg.tencent-cloud.cn/raw/06f2bc0f1772d8deac2f92b5df61a5ac.png)

注：**静默（自动）签署不支持合同签署方存在填写**功能
<br>

<font color="red">相关视频指引</font> <br>
1. <a href="https://dyn.ess.tencent.cn/guide/apivideo/createflow_seversign.mp4" target="_blank">创建静默（自动）签署模板和开通自动签署</a><br>
2. <a href="https://dyn.ess.tencent.cn/guide/apivideo/flow_document_start.mp4" target="_blank">用模板创建发起合同</a><br>
                 * @param req CreateFlowRequest
                 * @return CreateFlowOutcome
                 */
                CreateFlowOutcome CreateFlow(const Model::CreateFlowRequest &request);
                void CreateFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowOutcomeCallable CreateFlowCallable(const Model::CreateFlowRequest& request);

                /**
                 *适用场景： 当通过模板或文件发起合同时，若未指定企业签署人信息，则可调用此接口补充或添加签署人。同一签署人可补充多个员工作为或签署人，最终实际签署人取决于谁先领取合同完成签署。

限制条件：

1.本企业（发起方企业）企业微信签署人仅支持通过企业微信UserId或姓名+手机号进行补充。
2.本企业（发起方企业）非企业微信签署人仅支持通过姓名+手机号进行补充。
3.他方企业仅支持通过姓名+手机号进行补充。
4.个人签署人支持通过姓名+手机号进行补充，补充动态签署人时：若个人用户已完成实名，则可通过姓名+证件号码进行补充。
                 * @param req CreateFlowApproversRequest
                 * @return CreateFlowApproversOutcome
                 */
                CreateFlowApproversOutcome CreateFlowApprovers(const Model::CreateFlowApproversRequest &request);
                void CreateFlowApproversAsync(const Model::CreateFlowApproversRequest& request, const CreateFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowApproversOutcomeCallable CreateFlowApproversCallable(const Model::CreateFlowApproversRequest& request);

                /**
                 *此接口（CreateFlowByFiles）用来通过上传后的pdf资源编号来创建待签署的合同流程。<br/>
适用场景：适用非制式的合同文件签署。一般开发者自己有完整的签署文件，可以通过该接口传入完整的PDF文件及流程信息生成待签署的合同流程。<br/>

<table>
	<thead>
		<tr>
			<th>签署人类别</th>
			<th>需要提前准备的信息</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>自己企业的员工签署（未认证加入或已认证加入）</td>
			<td>签署企业的名字、员工的真实名字、员工的触达手机号、员工的证件号（证件号非必传）</td>
		</tr>
		<tr>
			<td>自己企业的员工签署（已认证加入）</td>
			<td>签署企业的名字、员工在电子签平台的ID（UserId）</td>
		</tr>
		<tr>
			<td>其他企业的员工签署</td>
			<td>签署企业的名字、员工的真实名字、员工的触达手机号、员工的证件号（证件号非必传）</td>
		</tr>
		<tr>
			<td>个人（自然人）签署</td>
			<td>个人的真实名字、个人的触达手机号、个人的身份证（证件号非必传）</td>
		</tr>
	</tbody>
</table>



该接口需要依赖[上传文件](https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles)接口生成pdf资源编号（FileIds）进行使用。（如果非pdf文件需要调用[创建文件转换任务](https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi)接口转换成pdf资源）<br/>


![image](https://qcloudimg.tencent-cloud.cn/raw/f097a74b289e3e1acd740936bdfe9843.png)

注：
-  合同**发起后就会扣减合同的额度**, 只有撤销没有参与方签署过或只有自动签署签署过的合同，才会返还合同额度。（**过期，拒签，签署完成，解除完成等状态不会返还额度**）
- **静默（自动）签署不支持合同签署方存在填写**功能
                 * @param req CreateFlowByFilesRequest
                 * @return CreateFlowByFilesOutcome
                 */
                CreateFlowByFilesOutcome CreateFlowByFiles(const Model::CreateFlowByFilesRequest &request);
                void CreateFlowByFilesAsync(const Model::CreateFlowByFilesRequest& request, const CreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowByFilesOutcomeCallable CreateFlowByFilesCallable(const Model::CreateFlowByFilesRequest& request);

                /**
                 *提交申请出证报告任务并返回报告ID。

注意：
<ul><li>使用此功能`需搭配出证套餐` ，使用前请联系对接的客户经理沟通。</li>
<li>操作人必须是`发起方或者签署方企业的(非走授权书认证)法人或者超管`。</li>
<li>合同流程必须所有参与方`已经签署完成`。</li>
<li>出证过程需一定时间，建议在`提交出证任务后的24小时之后`，通过<a href="https://qian.tencent.com/developers/companyApis/certificate/DescribeFlowEvidenceReport" target="_blank">获取出证报告任务执行结果</a>接口进行查询执行结果和出证报告的下载URL。</li></ul>

<svg id="SvgjsSvg1006" width="262" height="229" xmlns="http://www.w3.org/2000/svg" version="1.1" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:svgjs="http://svgjs.com/svgjs"><defs id="SvgjsDefs1007"><pattern patternUnits="userSpaceOnUse" id="pattern_mark_0" width="300" height="300"><text x="150" y="100" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><pattern patternUnits="userSpaceOnUse" id="pattern_mark_1" width="300" height="300"><text x="150" y="200" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><marker id="SvgjsMarker1021" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1022" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker></defs><rect id="svgbackgroundid" width="262" height="229" fill="transparent"></rect><rect id="SvgjsRect1009" width="262" height="229" fill="url(#pattern_mark_0)"></rect><rect id="SvgjsRect1010" width="262" height="229" fill="url(#pattern_mark_1)"></rect><g id="SvgjsG1011" transform="translate(31.75,25)"><path id="SvgjsPath1012" d="M 0 0L 198 0L 198 59L 0 59Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1013"><text id="SvgjsText1014" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="178px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="10.375" transform="rotate(0)"><tspan id="SvgjsTspan1015" dy="16" x="99"><tspan id="SvgjsTspan1016" style="text-decoration:;fill: rgb(28, 30, 33);">CreateFlowEvidenceReport</tspan></tspan><tspan id="SvgjsTspan1017" dy="16" x="99"><tspan id="SvgjsTspan1018" style="text-decoration:;fill: rgb(51, 51, 51);">提交申请出证报告任务</tspan></tspan></text></g></g><g id="SvgjsG1019"><path id="SvgjsPath1020" d="M130.75 84.5L130.75 114.5L130.75 114.5L130.75 143.2" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1021)"></path></g><g id="SvgjsG1023" transform="translate(25,145)"><path id="SvgjsPath1024" d="M 0 0L 211.5 0L 211.5 59L 0 59Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1025"><text id="SvgjsText1026" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="192px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="10.375" transform="rotate(0)"><tspan id="SvgjsTspan1027" dy="16" x="106"><tspan id="SvgjsTspan1028" style="text-decoration:;fill: rgb(28, 30, 33);">DescribeFlowEvidenceReport</tspan></tspan><tspan id="SvgjsTspan1029" dy="16" x="106"><tspan id="SvgjsTspan1030" style="text-decoration:;fill: rgb(51, 51, 51);">获取出证报告任务执行结果</tspan></tspan></text></g></g></svg>
                 * @param req CreateFlowEvidenceReportRequest
                 * @return CreateFlowEvidenceReportOutcome
                 */
                CreateFlowEvidenceReportOutcome CreateFlowEvidenceReport(const Model::CreateFlowEvidenceReportRequest &request);
                void CreateFlowEvidenceReportAsync(const Model::CreateFlowEvidenceReportRequest& request, const CreateFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowEvidenceReportOutcomeCallable CreateFlowEvidenceReportCallable(const Model::CreateFlowEvidenceReportRequest& request);

                /**
                 *此接口（CreateFlowGroupByFiles）可用于通过多个文件创建合同组签署流程。

适用场景：该接口适用于需要一次性完成多份合同签署的情况，多份合同一般具有关联性，用户以目录的形式查看合同。

注意事项：使用该接口需要先依赖[多文件上传](https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles)接口返回的FileIds。

注：`合同发起后就会扣减合同的额度, 如果未签署完成时撤销合同会返还此额度（过期，拒签，签署完成，解除完成等状态不会返还额度），合同组中每个合同会扣减一个合同额度`
                 * @param req CreateFlowGroupByFilesRequest
                 * @return CreateFlowGroupByFilesOutcome
                 */
                CreateFlowGroupByFilesOutcome CreateFlowGroupByFiles(const Model::CreateFlowGroupByFilesRequest &request);
                void CreateFlowGroupByFilesAsync(const Model::CreateFlowGroupByFilesRequest& request, const CreateFlowGroupByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowGroupByFilesOutcomeCallable CreateFlowGroupByFilesCallable(const Model::CreateFlowGroupByFilesRequest& request);

                /**
                 *此接口（CreateFlowGroupByTemplates）可用于通过多个模板创建合同组签署流程。

适用场景：该接口适用于需要一次性完成多份合同签署的情况，多份合同一般具有关联性，用户以目录的形式查看合同。

注：`合同发起后就会扣减合同的额度, 如果未签署完成时撤销合同会返还此额度（过期，拒签，签署完成，解除完成等状态不会返还额度），合同组中每个合同会扣减一个合同额度`
                 * @param req CreateFlowGroupByTemplatesRequest
                 * @return CreateFlowGroupByTemplatesOutcome
                 */
                CreateFlowGroupByTemplatesOutcome CreateFlowGroupByTemplates(const Model::CreateFlowGroupByTemplatesRequest &request);
                void CreateFlowGroupByTemplatesAsync(const Model::CreateFlowGroupByTemplatesRequest& request, const CreateFlowGroupByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowGroupByTemplatesOutcomeCallable CreateFlowGroupByTemplatesCallable(const Model::CreateFlowGroupByTemplatesRequest& request);

                /**
                 *提交合同组签署流程审批结果的适用场景包括：

1. 在使用[通过多文件创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByFiles)或[通过多模板创建合同组签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowGroupByTemplates)创建合同组签署流程时，若指定了以下参数 为true，则可以调用此接口提交企业内部签署审批结果。即使是自动签署也需要进行审核通过才会进行签署。
  - [FlowGroupInfo.NeedSignReview](https://qian.tencent.com/developers/companyApis/dataTypes/#flowgroupinfo)
  - [ApproverInfo.ApproverNeedSignReview](https://qian.tencent.com/developers/companyApis/dataTypes/#approverinfo)


2. 同一合同组，同一签署人可以多次提交签署审批结果，签署时的最后一个“审批结果”有效。
                 * @param req CreateFlowGroupSignReviewRequest
                 * @return CreateFlowGroupSignReviewOutcome
                 */
                CreateFlowGroupSignReviewOutcome CreateFlowGroupSignReview(const Model::CreateFlowGroupSignReviewRequest &request);
                void CreateFlowGroupSignReviewAsync(const Model::CreateFlowGroupSignReviewRequest& request, const CreateFlowGroupSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowGroupSignReviewOutcomeCallable CreateFlowGroupSignReviewCallable(const Model::CreateFlowGroupSignReviewRequest& request);

                /**
                 *指定需要批量催办的签署流程ID，批量催办合同，最多100个。需要符合以下条件的合同才可被催办：

1. 发起合同时，**签署人的NotifyType需设置为sms**
2. 合同中当前状态为 **待签署** 的签署人是催办的对象
3. **每个合同只能催办一次**

**催办的效果**: 对方会收到如下的短信通知

![image](https://qcloudimg.tencent-cloud.cn/raw/3caf94b7f540fa5736270d38528d3a7b.png)

注：`合同催办是白名单功能，请联系客户经理申请开白后使用`
                 * @param req CreateFlowRemindsRequest
                 * @return CreateFlowRemindsOutcome
                 */
                CreateFlowRemindsOutcome CreateFlowReminds(const Model::CreateFlowRemindsRequest &request);
                void CreateFlowRemindsAsync(const Model::CreateFlowRemindsRequest& request, const CreateFlowRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowRemindsOutcomeCallable CreateFlowRemindsCallable(const Model::CreateFlowRemindsRequest& request);

                /**
                 *提交企业流程审批结果 
**当前存在两种审核操作：**
<ul>
<li>签署审核
<ul>
<li>在通过接口<ul>
<li>CreateFlowByFiles</li>
<li>CreateFlow</li>
<li>CreateFlowGroupByTemplates</li>
<li>CreateFlowGroupByFiles</li>
<li>CreatePrepareFlow</li>
</ul> 
发起签署流程时，通过指定NeedSignReview为true，则可以调用此接口，并指定operate=SignReview，以提交企业内部签署审批结果</li>
<li>在通过接口
<ul>
<li>CreateFlowByFiles</li>
<li>CreateFlow</li>
<li>CreateFlowGroupByTemplates</li>
<li>CreateFlowGroupByFiles</li>
</ul>
发起签署流程时，通过指定签署人ApproverNeedSignReview为true，则可以调用此接口，并指定operate=SignReview，并指定RecipientId，以提交企业内部签署审批结果</li>
</ul>
</li>
<li>发起审核
 <ul>
<li>通过接口CreatePrepareFlow指定发起后需要审核，那么可以调用此接口，并指定operate=CreateReview，以提交企业内部审批结果。可以多次提交审批结果，但一旦审批通过，后续提交的结果将无效
</li>
</ul>
</li>
</ul>
                 * @param req CreateFlowSignReviewRequest
                 * @return CreateFlowSignReviewOutcome
                 */
                CreateFlowSignReviewOutcome CreateFlowSignReview(const Model::CreateFlowSignReviewRequest &request);
                void CreateFlowSignReviewAsync(const Model::CreateFlowSignReviewRequest& request, const CreateFlowSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowSignReviewOutcomeCallable CreateFlowSignReviewCallable(const Model::CreateFlowSignReviewRequest& request);

                /**
                 *该接口用于发起合同后，生成用户的签署链接 <br/>

**注意**
1. 该接口可生成签署链接的签署人必须仅有手写签名、时间类型和印章类型的签署控件，**不支持填写控件** 。
2. 该签署**链接有效期为30分钟**，过期后将失效，如需签署可重新创建签署链接 。
3. 该接口返回的签署链接适用于APP集成的场景，支持APP打开或浏览器直接打开，**不支持微信小程序嵌入**。
跳转到小程序的实现，参考微信官方文档（分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式），如何配置也可以请参考: <a href="https://qian.tencent.com/developers/company/openwxminiprogram">跳转电子签小程序配置</a>。
4. 因h5涉及人脸身份认证能力基于慧眼人脸核身，对Android和iOS系统均有一定要求， 因此<font color='red'>App嵌入H5签署合同需要按照慧眼提供的<a href="https://cloud.tencent.com/document/product/1007/61076">慧眼人脸核身兼容性文档</a>做兼容性适配</font>。
                 * @param req CreateFlowSignUrlRequest
                 * @return CreateFlowSignUrlOutcome
                 */
                CreateFlowSignUrlOutcome CreateFlowSignUrl(const Model::CreateFlowSignUrlRequest &request);
                void CreateFlowSignUrlAsync(const Model::CreateFlowSignUrlRequest& request, const CreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowSignUrlOutcomeCallable CreateFlowSignUrlCallable(const Model::CreateFlowSignUrlRequest& request);

                /**
                 *此接口（CreateIntegrationDepartment）用于创建企业的部门信息，支持绑定客户系统部门ID。
                 * @param req CreateIntegrationDepartmentRequest
                 * @return CreateIntegrationDepartmentOutcome
                 */
                CreateIntegrationDepartmentOutcome CreateIntegrationDepartment(const Model::CreateIntegrationDepartmentRequest &request);
                void CreateIntegrationDepartmentAsync(const Model::CreateIntegrationDepartmentRequest& request, const CreateIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationDepartmentOutcomeCallable CreateIntegrationDepartmentCallable(const Model::CreateIntegrationDepartmentRequest& request);

                /**
                 *此接口（CreateIntegrationEmployees）用于创建企业员工。创建的员工初始化为未实名，如下图所示。

![image](https://qcloudimg.tencent-cloud.cn/raw/2bdcc0d91ac3146b5e8c28811a78ffe9.png)

支持以下场景
<table>
<tbody>
<tr>
<td>生成端</td>
<td >入参</td>
<td>提醒方式</td>
</tr>
<tr>
<td>普通saas员工</td>
<td>将Employees中的DisplayName设置员工的名字，Mobile设置成员工的手机号</td>
<td>发送短信通知员工（短信中带有认证加入企业的链接）   ![image]() </td>
</tr>
<tr>
<td>企微员工</td>
<td>将Employees 中的WeworkOpenId字段设置为企微员工明文的openid，需<font color="red">确保该企微员工在应用的可见范围内</font></td>
<td>企微内部实名消息</td>
</tr>
<tr>
<td>H5端 saas员工</td>
<td>传递 InvitationNotifyType = H5，将Employees中的DisplayName设置员工的名字，Mobile设置成员工的手机号，<font color="red">此场景不支持企微</font></td>
<td>生成认证加入企业的H5链接，贵方可以通过自己的渠道触达到此员工</td>
</tr>
</tbody>
</table>
注意：

-  <b> 新增员工的手机号、OpenId不能与已加入员工重复</b>， 不管已加入员工的手机号、OpenId是否已经实名
- <b>若通过手机号发现员工已经创建且信息一致（名字，openId等），则不会重复创建，但会发送短信或者生成链接提醒员工实名。</b>
- jumpUrl 仅支持H5的邀请方式，回跳的url，使用前请联系对接的客户经理沟通，进行域名的配置。



短信的样式

![image](https://qcloudimg.tencent-cloud.cn/raw/b6ad1b79e0adaaa41d282456c72a1ee6.png)
                 * @param req CreateIntegrationEmployeesRequest
                 * @return CreateIntegrationEmployeesOutcome
                 */
                CreateIntegrationEmployeesOutcome CreateIntegrationEmployees(const Model::CreateIntegrationEmployeesRequest &request);
                void CreateIntegrationEmployeesAsync(const Model::CreateIntegrationEmployeesRequest& request, const CreateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationEmployeesOutcomeCallable CreateIntegrationEmployeesCallable(const Model::CreateIntegrationEmployeesRequest& request);

                /**
                 *此接口（CreateIntegrationRole）用来创建企业自定义的SaaS角色或集团角色。

适用场景1：创建当前企业的自定义SaaS角色或集团角色，并且创建时不进行权限的设置（PermissionGroups 参数不传），角色中的权限内容可通过控制台编辑角色或通过接口 ModifyIntegrationRole 完成更新。

适用场景2：创建当前企业的自定义SaaS角色或集团角色，并且创建时进行权限的设置（PermissionGroups 参数要传），权限树内容 PermissionGroups 可参考接口 DescribeIntegrationRoles 的输出。此处注意权限树内容可能会更新，需尽量拉取最新的权限树内容，并且权限树内容 PermissionGroups 必须是一颗完整的权限树。

适用场景3：创建集团角色时可同时设置角色管理的子企业列表，可通过设置 SubOrganizationIds 参数达到此效果。

适用场景4：主企业代理子企业操作的场景，需要设置Agent参数，并且ProxyOrganizationId设置为子企业的id即可。

注意事项：SaaS角色和集团角色对应的权限树是不一样的。
                 * @param req CreateIntegrationRoleRequest
                 * @return CreateIntegrationRoleOutcome
                 */
                CreateIntegrationRoleOutcome CreateIntegrationRole(const Model::CreateIntegrationRoleRequest &request);
                void CreateIntegrationRoleAsync(const Model::CreateIntegrationRoleRequest& request, const CreateIntegrationRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationRoleOutcomeCallable CreateIntegrationRoleCallable(const Model::CreateIntegrationRoleRequest& request);

                /**
                 *此接口用于赋予员工指定的角色权限，如需解绑请使用 DeleteIntegrationRoleUsers 接口。
                 * @param req CreateIntegrationUserRolesRequest
                 * @return CreateIntegrationUserRolesOutcome
                 */
                CreateIntegrationUserRolesOutcome CreateIntegrationUserRoles(const Model::CreateIntegrationUserRolesRequest &request);
                void CreateIntegrationUserRolesAsync(const Model::CreateIntegrationUserRolesRequest& request, const CreateIntegrationUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationUserRolesOutcomeCallable CreateIntegrationUserRolesCallable(const Model::CreateIntegrationUserRolesRequest& request);

                /**
                 *此接口（CreateMultiFlowSignQRCode）用于创建一码多签签署码。

**适用场景**:
签署人可通过扫描二维码补充签署信息进行实名签署。常用于提前不知道签署人的身份信息场景，例如：劳务工招工、大批量员工入职等场景。

**注意**:
1. 本接口适用于**发起方没有填写控件的 B2C或者单C模板**,  若是B2C模板,还要满足以下任意一个条件
    - 模板中配置的签署顺序是无序
    - B端企业的签署方式是静默签署
    - B端企业是非首位签署
2. 通过一码多签签署码发起的合同，合同涉及到的回调消息可参考文档[合同发起及签署相关回调
]( https://qian.tencent.com/developers/company/callback_types_contracts_sign)
3. 用户通过一码多签签署码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档[签署二维码相关回调](https://qian.tencent.com/developers/company/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83)

签署码的样式如下图:
![image](https://qcloudimg.tencent-cloud.cn/raw/27317cf5aacb094fb1dc6f94179a5148.png )
                 * @param req CreateMultiFlowSignQRCodeRequest
                 * @return CreateMultiFlowSignQRCodeOutcome
                 */
                CreateMultiFlowSignQRCodeOutcome CreateMultiFlowSignQRCode(const Model::CreateMultiFlowSignQRCodeRequest &request);
                void CreateMultiFlowSignQRCodeAsync(const Model::CreateMultiFlowSignQRCodeRequest& request, const CreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultiFlowSignQRCodeOutcomeCallable CreateMultiFlowSignQRCodeCallable(const Model::CreateMultiFlowSignQRCodeRequest& request);

                /**
                 *使用此接口，您可以创建企业批量签署链接，员工只需点击链接即可跳转至控制台进行批量签署。<br/>
附注：
- 员工必须在企业下完成实名认证，且需作为批量签署合同的签署方。
- 如有UserId，应以UserId为主要标识；如果没有UserId，则必须填写Name和Mobile信息。
- 仅支持待签署状态的合同生成签署链接。
                 * @param req CreateOrganizationBatchSignUrlRequest
                 * @return CreateOrganizationBatchSignUrlOutcome
                 */
                CreateOrganizationBatchSignUrlOutcome CreateOrganizationBatchSignUrl(const Model::CreateOrganizationBatchSignUrlRequest &request);
                void CreateOrganizationBatchSignUrlAsync(const Model::CreateOrganizationBatchSignUrlRequest& request, const CreateOrganizationBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationBatchSignUrlOutcomeCallable CreateOrganizationBatchSignUrlCallable(const Model::CreateOrganizationBatchSignUrlRequest& request);

                /**
                 *此接口（CreateOrganizationInfoChangeUrl）用于创建企业信息变更链接，支持创建企业超管变更链接或企业基础信息变更链接，通过入参ChangeType指定。


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
                 * @param req CreateOrganizationInfoChangeUrlRequest
                 * @return CreateOrganizationInfoChangeUrlOutcome
                 */
                CreateOrganizationInfoChangeUrlOutcome CreateOrganizationInfoChangeUrl(const Model::CreateOrganizationInfoChangeUrlRequest &request);
                void CreateOrganizationInfoChangeUrlAsync(const Model::CreateOrganizationInfoChangeUrlRequest& request, const CreateOrganizationInfoChangeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationInfoChangeUrlOutcomeCallable CreateOrganizationInfoChangeUrlCallable(const Model::CreateOrganizationInfoChangeUrlRequest& request);

                /**
                 *获取个人用户认证证书图片下载URL

个人用户认证证书图片样式如下图

![image](https://dyn.ess.tencent.cn/guide/capi/CreatePersonAuthCertificateImage.png)

注:  
<ul>
<li>只能获取个人用户证明图片, 企业员工的暂不支持</li>
<li>处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。  </li>
</ul>
                 * @param req CreatePersonAuthCertificateImageRequest
                 * @return CreatePersonAuthCertificateImageOutcome
                 */
                CreatePersonAuthCertificateImageOutcome CreatePersonAuthCertificateImage(const Model::CreatePersonAuthCertificateImageRequest &request);
                void CreatePersonAuthCertificateImageAsync(const Model::CreatePersonAuthCertificateImageRequest& request, const CreatePersonAuthCertificateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonAuthCertificateImageOutcomeCallable CreatePersonAuthCertificateImageCallable(const Model::CreatePersonAuthCertificateImageRequest& request);

                /**
                 *创建发起流程web页面
<br/>适用场景：通过该接口（CreatePrepareFlow）传入合同文件/模板编号及签署人信息，可获得发起流程的可嵌入页面，在页面完成签署控件等信息的编辑与确认后，快速发起流程。
<br/>注：该接口包含模板/文件发起流程的全部功能，调用接口后不会立即发起，需在可嵌入页面点击按钮进行发起流程。
                 * @param req CreatePrepareFlowRequest
                 * @return CreatePrepareFlowOutcome
                 */
                CreatePrepareFlowOutcome CreatePrepareFlow(const Model::CreatePrepareFlowRequest &request);
                void CreatePrepareFlowAsync(const Model::CreatePrepareFlowRequest& request, const CreatePrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrepareFlowOutcomeCallable CreatePrepareFlowCallable(const Model::CreatePrepareFlowRequest& request);

                /**
                 *本接口（CreatePreparedPersonalEsign）用于创建导入个人印章（处方单场景专用，使用此接口请与客户经理确认）。
                 * @param req CreatePreparedPersonalEsignRequest
                 * @return CreatePreparedPersonalEsignOutcome
                 */
                CreatePreparedPersonalEsignOutcome CreatePreparedPersonalEsign(const Model::CreatePreparedPersonalEsignRequest &request);
                void CreatePreparedPersonalEsignAsync(const Model::CreatePreparedPersonalEsignRequest& request, const CreatePreparedPersonalEsignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePreparedPersonalEsignOutcomeCallable CreatePreparedPersonalEsignCallable(const Model::CreatePreparedPersonalEsignRequest& request);

                /**
                 *发起解除协议的主要应用场景为：基于一份已经签署的合同（签署流程），进行解除操作。
解除协议的模板是官方提供 ，经过提供法务审核，暂不支持自定义。

注意：
<ul><li><code>原合同必须签署完</code>成后才能发起解除协议。</li>
<li>只有原合同企业类型的参与人才能发起解除协议，<code>个人参与方不能发起解除协议</code>。</li>
<li>原合同个人类型参与人必须是解除协议的参与人，<code>不能更换其他第三方个人</code>参与解除协议。</li>
<li>如果原合同企业参与人无法参与解除协议，可以指定同企业具有同等权限的<code>企业员工代为处理</code>。</li>
<li>发起解除协议同发起其他企业合同一样，也会参与合同<code>扣费</code>，扣费标准同其他类型合同。</li>
<li>在解除协议发起之后，原合同的状态将转变为解除中。一旦解除协议签署完毕，原合同及解除协议均变为已解除状态。</li></ul>
                 * @param req CreateReleaseFlowRequest
                 * @return CreateReleaseFlowOutcome
                 */
                CreateReleaseFlowOutcome CreateReleaseFlow(const Model::CreateReleaseFlowRequest &request);
                void CreateReleaseFlowAsync(const Model::CreateReleaseFlowRequest& request, const CreateReleaseFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReleaseFlowOutcomeCallable CreateReleaseFlowCallable(const Model::CreateReleaseFlowRequest& request);

                /**
                 *获取跳转至腾讯电子签小程序的签署链接

适用场景：如果需要签署人在自己的APP、小程序、H5应用中签署，可以通过此接口获取跳转腾讯电子签小程序的签署跳转链接。

跳转到小程序的实现，参考微信官方文档（分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式），如何配置也可以请参考: <a href="https://qian.tencent.com/developers/company/openwxminiprogram">跳转电子签小程序配置</a>

注：
<ul><li>1. 如果签署人是在PC端扫码签署，可以通过生成跳转链接自主转换成二维码，让签署人在PC端扫码签署</li>
<li>2. 签署链接的有效期为<font color="red">90天</font>，超过有效期链接不可用</li>
<li>3. 如果需跳转详情页（即PathType值为1）进行填写或签署合同，需指定签署方信息:姓名、手机号码、企业名称等，才能生成正确的跳转链接</li>
<li>4. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）</li></ul>

其中小程序的原始Id如下，或者查看小程序信息自助获取。

| 小程序 | AppID | 原始ID |
| ------------ | ------------ | ------------ |
| 腾讯电子签（正式版） | wxa023b292fd19d41d | gh_da88f6188665 |
| 腾讯电子签Demo | wx371151823f6f3edf | gh_39a5d3de69fa |
                 * @param req CreateSchemeUrlRequest
                 * @return CreateSchemeUrlOutcome
                 */
                CreateSchemeUrlOutcome CreateSchemeUrl(const Model::CreateSchemeUrlRequest &request);
                void CreateSchemeUrlAsync(const Model::CreateSchemeUrlRequest& request, const CreateSchemeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchemeUrlOutcomeCallable CreateSchemeUrlCallable(const Model::CreateSchemeUrlRequest& request);

                /**
                 *本接口（CreateSeal）用于创建企业电子印章，支持创建企业公章，合同章，财务专用章和人事专用章创建。

1. 可以**通过图片**创建印章，图片最大5MB
2. 可以**系统创建**创建印章, 系统创建的印章样子下图(样式可以调整)

![image](https://dyn.ess.tencent.cn/guide/capi/CreateSealByImage.png)
                 * @param req CreateSealRequest
                 * @return CreateSealOutcome
                 */
                CreateSealOutcome CreateSeal(const Model::CreateSealRequest &request);
                void CreateSealAsync(const Model::CreateSealRequest& request, const CreateSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSealOutcomeCallable CreateSealCallable(const Model::CreateSealRequest& request);

                /**
                 *本接口（CreateSealPolicy）用于对企业员工进行印章授权
                 * @param req CreateSealPolicyRequest
                 * @return CreateSealPolicyOutcome
                 */
                CreateSealPolicyOutcome CreateSealPolicy(const Model::CreateSealPolicyRequest &request);
                void CreateSealPolicyAsync(const Model::CreateSealPolicyRequest& request, const CreateSealPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSealPolicyOutcomeCallable CreateSealPolicyCallable(const Model::CreateSealPolicyRequest& request);

                /**
                 *获取个人用户自动签的开通链接。

注意: `处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。`
                 * @param req CreateUserAutoSignEnableUrlRequest
                 * @return CreateUserAutoSignEnableUrlOutcome
                 */
                CreateUserAutoSignEnableUrlOutcome CreateUserAutoSignEnableUrl(const Model::CreateUserAutoSignEnableUrlRequest &request);
                void CreateUserAutoSignEnableUrlAsync(const Model::CreateUserAutoSignEnableUrlRequest& request, const CreateUserAutoSignEnableUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserAutoSignEnableUrlOutcomeCallable CreateUserAutoSignEnableUrlCallable(const Model::CreateUserAutoSignEnableUrlRequest& request);

                /**
                 *获取设置自动签印章小程序链接。

注意：
<ul><li>需要<code>企业开通自动签</code>后使用。</li>
<li>仅支持<code>已经开通了自动签的个人</code>更换自动签印章。</li>
<li>链接有效期默认7天，<code>最多30天</code>。</li>
<li>该接口的链接适用于<code>小程序</code>端。</li>
<li>该接口不会扣除您的合同套餐，暂不参与计费。</li></ul>
                 * @param req CreateUserAutoSignSealUrlRequest
                 * @return CreateUserAutoSignSealUrlOutcome
                 */
                CreateUserAutoSignSealUrlOutcome CreateUserAutoSignSealUrl(const Model::CreateUserAutoSignSealUrlRequest &request);
                void CreateUserAutoSignSealUrlAsync(const Model::CreateUserAutoSignSealUrlRequest& request, const CreateUserAutoSignSealUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserAutoSignSealUrlOutcomeCallable CreateUserAutoSignSealUrlCallable(const Model::CreateUserAutoSignSealUrlRequest& request);

                /**
                 *用来设置本企业嵌入式页面个性化主题配置（例如是否展示电子签logo、定义主题色等），设置后获取的web签署界面都会使用此配置进行展示。

如果多次调用，会以最后一次的配置为准
                 * @param req CreateWebThemeConfigRequest
                 * @return CreateWebThemeConfigOutcome
                 */
                CreateWebThemeConfigOutcome CreateWebThemeConfig(const Model::CreateWebThemeConfigRequest &request);
                void CreateWebThemeConfigAsync(const Model::CreateWebThemeConfigRequest& request, const CreateWebThemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebThemeConfigOutcomeCallable CreateWebThemeConfigCallable(const Model::CreateWebThemeConfigRequest& request);

                /**
                 *删除企业扩展服务授权，当前仅支持 “企业自动签” 和“批量签署”  的取消授权。
该接口作用和电子签控制台 企业设置-扩展服务-企业自动签署和批量签署授权 两个模块功能相同，可通过该接口取消企业员工授权。

注：支持集团代子企业操作，请联系运营开通此功能。
                 * @param req DeleteExtendedServiceAuthInfosRequest
                 * @return DeleteExtendedServiceAuthInfosOutcome
                 */
                DeleteExtendedServiceAuthInfosOutcome DeleteExtendedServiceAuthInfos(const Model::DeleteExtendedServiceAuthInfosRequest &request);
                void DeleteExtendedServiceAuthInfosAsync(const Model::DeleteExtendedServiceAuthInfosRequest& request, const DeleteExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExtendedServiceAuthInfosOutcomeCallable DeleteExtendedServiceAuthInfosCallable(const Model::DeleteExtendedServiceAuthInfosRequest& request);

                /**
                 *此接口（DeleteIntegrationDepartment）用于删除企业的部门信息。
                 * @param req DeleteIntegrationDepartmentRequest
                 * @return DeleteIntegrationDepartmentOutcome
                 */
                DeleteIntegrationDepartmentOutcome DeleteIntegrationDepartment(const Model::DeleteIntegrationDepartmentRequest &request);
                void DeleteIntegrationDepartmentAsync(const Model::DeleteIntegrationDepartmentRequest& request, const DeleteIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntegrationDepartmentOutcomeCallable DeleteIntegrationDepartmentCallable(const Model::DeleteIntegrationDepartmentRequest& request);

                /**
                 *该接口（DeleteIntegrationEmployees）用于离职本企业员工，同时可选择是否进行离职交接。


- 如果该员工没有未处理的合同，可不设置交接人的ReceiveUserId或ReceiveOpenId进行离职操作。
- 如果该员工有未处理的合同，需要设置ReceiveUserId或ReceiveOpenId表示交接的负责人，交接后员工会进行离职操作。

未处理的合同包括以下：

- 待签署的合同（包括顺序签署还没有轮到的合同，此类合同某些情况可能不会出现在用户的列表中）。
- 待填写的合同。
- 待解除的合同等。

注：
1. <font color="red">超管或法人身份的员工不能被离职</font>， 需要在控制台或小程序更换法人和超管后进行离职删除。
2. <font color="red">员工存在待处理合同时必须交接</font>后才能离职无人交接时不能被离职删除。
3. 未实名的员工可以直接离职，不用交接合同
                 * @param req DeleteIntegrationEmployeesRequest
                 * @return DeleteIntegrationEmployeesOutcome
                 */
                DeleteIntegrationEmployeesOutcome DeleteIntegrationEmployees(const Model::DeleteIntegrationEmployeesRequest &request);
                void DeleteIntegrationEmployeesAsync(const Model::DeleteIntegrationEmployeesRequest& request, const DeleteIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntegrationEmployeesOutcomeCallable DeleteIntegrationEmployeesCallable(const Model::DeleteIntegrationEmployeesRequest& request);

                /**
                 *解绑员工与对应角色的关系，如需绑定请使用 CreateIntegrationUserRoles 接口。
                 * @param req DeleteIntegrationRoleUsersRequest
                 * @return DeleteIntegrationRoleUsersOutcome
                 */
                DeleteIntegrationRoleUsersOutcome DeleteIntegrationRoleUsers(const Model::DeleteIntegrationRoleUsersRequest &request);
                void DeleteIntegrationRoleUsersAsync(const Model::DeleteIntegrationRoleUsersRequest& request, const DeleteIntegrationRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntegrationRoleUsersOutcomeCallable DeleteIntegrationRoleUsersCallable(const Model::DeleteIntegrationRoleUsersRequest& request);

                /**
                 *本接口（DeleteSealPolicies）用于撤销企业员工持有的印章权限
                 * @param req DeleteSealPoliciesRequest
                 * @return DeleteSealPoliciesOutcome
                 */
                DeleteSealPoliciesOutcome DeleteSealPolicies(const Model::DeleteSealPoliciesRequest &request);
                void DeleteSealPoliciesAsync(const Model::DeleteSealPoliciesRequest& request, const DeleteSealPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSealPoliciesOutcomeCallable DeleteSealPoliciesCallable(const Model::DeleteSealPoliciesRequest& request);

                /**
                 *通过此接口（DescribeBillUsageDetail）查询该企业的套餐消耗详情。
                 * @param req DescribeBillUsageDetailRequest
                 * @return DescribeBillUsageDetailOutcome
                 */
                DescribeBillUsageDetailOutcome DescribeBillUsageDetail(const Model::DescribeBillUsageDetailRequest &request);
                void DescribeBillUsageDetailAsync(const Model::DescribeBillUsageDetailRequest& request, const DescribeBillUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillUsageDetailOutcomeCallable DescribeBillUsageDetailCallable(const Model::DescribeBillUsageDetailRequest& request);

                /**
                 *查询企业扩展服务的授权详情（列表），当前支持查询以下内容：
1. 企业自动签（本企业授权、集团企业授权、合作企业授权）
2. 批量签署能力


注: <font color='red'>所在企业的超管、法人才有权限调用此接口</font>(Agent.ProxyOperator.OpenId 需要传递超管或者法人的OpenId)
                 * @param req DescribeExtendedServiceAuthDetailRequest
                 * @return DescribeExtendedServiceAuthDetailOutcome
                 */
                DescribeExtendedServiceAuthDetailOutcome DescribeExtendedServiceAuthDetail(const Model::DescribeExtendedServiceAuthDetailRequest &request);
                void DescribeExtendedServiceAuthDetailAsync(const Model::DescribeExtendedServiceAuthDetailRequest& request, const DescribeExtendedServiceAuthDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtendedServiceAuthDetailOutcomeCallable DescribeExtendedServiceAuthDetailCallable(const Model::DescribeExtendedServiceAuthDetailRequest& request);

                /**
                 *查询企业扩展服务的开通和授权情况，当前支持查询以下内容：

1. **企业自动签署**
2. **批量签署授权**
3. **企业与港澳台居民签署合同**
4. **拓宽签署方年龄限制**
5. **个人签署方仅校验手机号**
6. **隐藏合同经办人姓名**
7. **正楷临摹签名失败后更换其他签名类型**
8. **短信通知签署方**
9. **个人签署方手动签字**
10. **骑缝章**
11. **签署密码开通引导**


对应能力开通页面在Web控制台-更多-企业设置-拓展服务，如下图所示:

![image](https://qcloudimg.tencent-cloud.cn/raw/7d79746ecca1c5fe878a2ec36ed69c23.jpg)

注: <font color='red'>所在企业的超管、法人才有权限调用此接口</font>(Operator.UserId需要传递超管或者法人的UserId)
                 * @param req DescribeExtendedServiceAuthInfosRequest
                 * @return DescribeExtendedServiceAuthInfosOutcome
                 */
                DescribeExtendedServiceAuthInfosOutcome DescribeExtendedServiceAuthInfos(const Model::DescribeExtendedServiceAuthInfosRequest &request);
                void DescribeExtendedServiceAuthInfosAsync(const Model::DescribeExtendedServiceAuthInfosRequest& request, const DescribeExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtendedServiceAuthInfosOutcomeCallable DescribeExtendedServiceAuthInfosCallable(const Model::DescribeExtendedServiceAuthInfosRequest& request);

                /**
                 *本接口（DescribeFileUrls）用于查询文件的下载URL。
适用场景：通过传参合同流程编号，下载对应的合同PDF文件流到本地。
                 * @param req DescribeFileUrlsRequest
                 * @return DescribeFileUrlsOutcome
                 */
                DescribeFileUrlsOutcome DescribeFileUrls(const Model::DescribeFileUrlsRequest &request);
                void DescribeFileUrlsAsync(const Model::DescribeFileUrlsRequest& request, const DescribeFileUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileUrlsOutcomeCallable DescribeFileUrlsCallable(const Model::DescribeFileUrlsRequest& request);

                /**
                 *查询流程基础信息
适用场景：可用于主动查询某个合同流程的签署状态信息。可以配合回调通知使用。

注: `每个企业限制日调用量限制：100W，当日超过此限制后再调用接口返回错误`
                 * @param req DescribeFlowBriefsRequest
                 * @return DescribeFlowBriefsOutcome
                 */
                DescribeFlowBriefsOutcome DescribeFlowBriefs(const Model::DescribeFlowBriefsRequest &request);
                void DescribeFlowBriefsAsync(const Model::DescribeFlowBriefsRequest& request, const DescribeFlowBriefsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowBriefsOutcomeCallable DescribeFlowBriefsCallable(const Model::DescribeFlowBriefsRequest& request);

                /**
                 *查询流程填写控件内容，可以根据合同流程ID查询该合同流程相关联的填写控件信息和填写内容。
                 * @param req DescribeFlowComponentsRequest
                 * @return DescribeFlowComponentsOutcome
                 */
                DescribeFlowComponentsOutcome DescribeFlowComponents(const Model::DescribeFlowComponentsRequest &request);
                void DescribeFlowComponentsAsync(const Model::DescribeFlowComponentsRequest& request, const DescribeFlowComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowComponentsOutcomeCallable DescribeFlowComponentsCallable(const Model::DescribeFlowComponentsRequest& request);

                /**
                 *获取出证报告任务执行结果，返回报告 URL。



注意：
<ul><li>使用此功能`需搭配出证套餐` ，使用前请联系对接的客户经理沟通。</li>
<li>需调用创建并返回出证报告接口<a href="https://qian.tencent.com/developers/companyApis/certificate/CreateFlowEvidenceReport" target="_blank">提交申请出证报告任务</a>获取报告编号后调用当前接口获取报告链接。</li></ul>

<svg id="SvgjsSvg1006" width="262" height="229" xmlns="http://www.w3.org/2000/svg" version="1.1" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:svgjs="http://svgjs.com/svgjs"><defs id="SvgjsDefs1007"><pattern patternUnits="userSpaceOnUse" id="pattern_mark_0" width="300" height="300"><text x="150" y="100" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><pattern patternUnits="userSpaceOnUse" id="pattern_mark_1" width="300" height="300"><text x="150" y="200" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><marker id="SvgjsMarker1021" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1022" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker></defs><rect id="svgbackgroundid" width="262" height="229" fill="transparent"></rect><rect id="SvgjsRect1009" width="262" height="229" fill="url(#pattern_mark_0)"></rect><rect id="SvgjsRect1010" width="262" height="229" fill="url(#pattern_mark_1)"></rect><g id="SvgjsG1011" transform="translate(31.75,25)"><path id="SvgjsPath1012" d="M 0 0L 198 0L 198 59L 0 59Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1013"><text id="SvgjsText1014" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="178px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="10.375" transform="rotate(0)"><tspan id="SvgjsTspan1015" dy="16" x="99"><tspan id="SvgjsTspan1016" style="text-decoration:;fill: rgb(28, 30, 33);">CreateFlowEvidenceReport</tspan></tspan><tspan id="SvgjsTspan1017" dy="16" x="99"><tspan id="SvgjsTspan1018" style="text-decoration:;fill: rgb(51, 51, 51);">提交申请出证报告任务</tspan></tspan></text></g></g><g id="SvgjsG1019"><path id="SvgjsPath1020" d="M130.75 84.5L130.75 114.5L130.75 114.5L130.75 143.2" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1021)"></path></g><g id="SvgjsG1023" transform="translate(25,145)"><path id="SvgjsPath1024" d="M 0 0L 211.5 0L 211.5 59L 0 59Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1025"><text id="SvgjsText1026" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="192px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="10.375" transform="rotate(0)"><tspan id="SvgjsTspan1027" dy="16" x="106"><tspan id="SvgjsTspan1028" style="text-decoration:;fill: rgb(28, 30, 33);">DescribeFlowEvidenceReport</tspan></tspan><tspan id="SvgjsTspan1029" dy="16" x="106"><tspan id="SvgjsTspan1030" style="text-decoration:;fill: rgb(51, 51, 51);">获取出证报告任务执行结果</tspan></tspan></text></g></g></svg>
                 * @param req DescribeFlowEvidenceReportRequest
                 * @return DescribeFlowEvidenceReportOutcome
                 */
                DescribeFlowEvidenceReportOutcome DescribeFlowEvidenceReport(const Model::DescribeFlowEvidenceReportRequest &request);
                void DescribeFlowEvidenceReportAsync(const Model::DescribeFlowEvidenceReportRequest& request, const DescribeFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowEvidenceReportOutcomeCallable DescribeFlowEvidenceReportCallable(const Model::DescribeFlowEvidenceReportRequest& request);

                /**
                 *此接口用于查询合同流程的详情信息，支持查询多个（数量不能超过100）。

适用场景：可用于主动查询某个合同详情信息。
                 * @param req DescribeFlowInfoRequest
                 * @return DescribeFlowInfoOutcome
                 */
                DescribeFlowInfoOutcome DescribeFlowInfo(const Model::DescribeFlowInfoRequest &request);
                void DescribeFlowInfoAsync(const Model::DescribeFlowInfoRequest& request, const DescribeFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowInfoOutcomeCallable DescribeFlowInfoCallable(const Model::DescribeFlowInfoRequest& request);

                /**
                 *此接口（DescribeFlowTemplates）用于查询本企业模板列表信息。


**适用场景**
该接口常用来配合<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument" target="_blank">模板发起合同-创建电子文档</a>接口，作为创建电子文档的前置接口使用。
通过此接口查询到模板信息后，再通过调用创建电子文档接口，指定模板ID，指定模板中需要的填写控件内容等，完成电子文档的创建。

**一个模板通常会包含以下结构信息** 

- 模板模板ID, 模板名字等基本信息
- 发起方参与信息Promoter、签署参与方 Recipients，后者会在模板发起合同时用于指定参与方
- 发起方和签署方的填写控件 Components
- 签署方的签署控件 SignComponents

![image](https://qcloudimg.tencent-cloud.cn/raw/ab81fa948a0a6fea14f48cac91d0e36a/channel_DescribeTemplates.png)

模板中各元素的层级关系, 所有的填写控件和签署控件都归属某一个角色(通过控件的ComponentRecipientId来关联)
![image](https://qcloudimg.tencent-cloud.cn/raw/45c638bd93f9c8024763add9ab47c27f.png)
                 * @param req DescribeFlowTemplatesRequest
                 * @return DescribeFlowTemplatesOutcome
                 */
                DescribeFlowTemplatesOutcome DescribeFlowTemplates(const Model::DescribeFlowTemplatesRequest &request);
                void DescribeFlowTemplatesAsync(const Model::DescribeFlowTemplatesRequest& request, const DescribeFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowTemplatesOutcomeCallable DescribeFlowTemplatesCallable(const Model::DescribeFlowTemplatesRequest& request);

                /**
                 *此接口（DescribeIntegrationDepartments）用于查询企业的部门信息列表，支持查询单个部门节点或单个部门节点及一级子节点部门列表。
                 * @param req DescribeIntegrationDepartmentsRequest
                 * @return DescribeIntegrationDepartmentsOutcome
                 */
                DescribeIntegrationDepartmentsOutcome DescribeIntegrationDepartments(const Model::DescribeIntegrationDepartmentsRequest &request);
                void DescribeIntegrationDepartmentsAsync(const Model::DescribeIntegrationDepartmentsRequest& request, const DescribeIntegrationDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationDepartmentsOutcomeCallable DescribeIntegrationDepartmentsCallable(const Model::DescribeIntegrationDepartmentsRequest& request);

                /**
                 *此接口（DescribeIntegrationEmployees）用于分页查询企业员工信息列表，支持设置过滤条件以筛选员工查询结果。
                 * @param req DescribeIntegrationEmployeesRequest
                 * @return DescribeIntegrationEmployeesOutcome
                 */
                DescribeIntegrationEmployeesOutcome DescribeIntegrationEmployees(const Model::DescribeIntegrationEmployeesRequest &request);
                void DescribeIntegrationEmployeesAsync(const Model::DescribeIntegrationEmployeesRequest& request, const DescribeIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationEmployeesOutcomeCallable DescribeIntegrationEmployeesCallable(const Model::DescribeIntegrationEmployeesRequest& request);

                /**
                 *此接口（DescribeIntegrationRoles）用于分页查询企业角色列表，列表按照角色创建时间升序排列。
                 * @param req DescribeIntegrationRolesRequest
                 * @return DescribeIntegrationRolesOutcome
                 */
                DescribeIntegrationRolesOutcome DescribeIntegrationRoles(const Model::DescribeIntegrationRolesRequest &request);
                void DescribeIntegrationRolesAsync(const Model::DescribeIntegrationRolesRequest& request, const DescribeIntegrationRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationRolesOutcomeCallable DescribeIntegrationRolesCallable(const Model::DescribeIntegrationRolesRequest& request);

                /**
                 *此API接口用来查询加入集团的成员企业信息
适用场景：子企业在加入集团后，主企业可能通过此接口获取到所有的子企业列表，方便进行展示和统计
                 * @param req DescribeOrganizationGroupOrganizationsRequest
                 * @return DescribeOrganizationGroupOrganizationsOutcome
                 */
                DescribeOrganizationGroupOrganizationsOutcome DescribeOrganizationGroupOrganizations(const Model::DescribeOrganizationGroupOrganizationsRequest &request);
                void DescribeOrganizationGroupOrganizationsAsync(const Model::DescribeOrganizationGroupOrganizationsRequest& request, const DescribeOrganizationGroupOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationGroupOrganizationsOutcomeCallable DescribeOrganizationGroupOrganizationsCallable(const Model::DescribeOrganizationGroupOrganizationsRequest& request);

                /**
                 *查询企业印章的列表，需要操作者具有查询印章权限
客户指定需要获取的印章数量和偏移量，数量最多100，超过100按100处理；入参InfoType控制印章是否携带授权人信息，为1则携带，为0则返回的授权人信息为空数组。接口调用成功返回印章的信息列表还有企业印章的总数。
                 * @param req DescribeOrganizationSealsRequest
                 * @return DescribeOrganizationSealsOutcome
                 */
                DescribeOrganizationSealsOutcome DescribeOrganizationSeals(const Model::DescribeOrganizationSealsRequest &request);
                void DescribeOrganizationSealsAsync(const Model::DescribeOrganizationSealsRequest& request, const DescribeOrganizationSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationSealsOutcomeCallable DescribeOrganizationSealsCallable(const Model::DescribeOrganizationSealsRequest& request);

                /**
                 *此接口（DescribePersonCertificate）用于查询个人数字证书信息。<br />注：`1.目前仅用于查询开通了医疗自动签署功能的个人数字证书。`<br />`2.调用此接口需要开通白名单，使用前请联系相关人员开通白名单。`
                 * @param req DescribePersonCertificateRequest
                 * @return DescribePersonCertificateOutcome
                 */
                DescribePersonCertificateOutcome DescribePersonCertificate(const Model::DescribePersonCertificateRequest &request);
                void DescribePersonCertificateAsync(const Model::DescribePersonCertificateRequest& request, const DescribePersonCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonCertificateOutcomeCallable DescribePersonCertificateCallable(const Model::DescribePersonCertificateRequest& request);

                /**
                 *该接口用于在使用视频认证方式签署合同后，获取用户的签署人脸认证视频。

1. 该接口**仅适用于在H5端签署**的合同，**在通过视频认证后**获取人脸图片。
2. 该接口**不支持小程序端**的签署人脸图片获取。
3. 请在**签署完成后的三天内**获取人脸图片，**过期后将无法获取**。

**注意：该接口需要开通白名单，请联系客户经理开通后使用。**
                 * @param req DescribeSignFaceVideoRequest
                 * @return DescribeSignFaceVideoOutcome
                 */
                DescribeSignFaceVideoOutcome DescribeSignFaceVideo(const Model::DescribeSignFaceVideoRequest &request);
                void DescribeSignFaceVideoAsync(const Model::DescribeSignFaceVideoRequest& request, const DescribeSignFaceVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSignFaceVideoOutcomeCallable DescribeSignFaceVideoCallable(const Model::DescribeSignFaceVideoRequest& request);

                /**
                 *通过AuthCode查询个人用户是否实名


注意: 
<ul>
<li>此接口为合作引流场景使用，使用`有白名单限制`，使用前请联系对接的客户经理沟通。</li>
<li>`AuthCode 只能使用一次`，查询一次再次查询会返回错误</li>
</ul>
                 * @param req DescribeThirdPartyAuthCodeRequest
                 * @return DescribeThirdPartyAuthCodeOutcome
                 */
                DescribeThirdPartyAuthCodeOutcome DescribeThirdPartyAuthCode(const Model::DescribeThirdPartyAuthCodeRequest &request);
                void DescribeThirdPartyAuthCodeAsync(const Model::DescribeThirdPartyAuthCodeRequest& request, const DescribeThirdPartyAuthCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeThirdPartyAuthCodeOutcomeCallable DescribeThirdPartyAuthCodeCallable(const Model::DescribeThirdPartyAuthCodeRequest& request);

                /**
                 *通过此接口获取个人用户自动签的开通状态。

注意: `处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。`
                 * @param req DescribeUserAutoSignStatusRequest
                 * @return DescribeUserAutoSignStatusOutcome
                 */
                DescribeUserAutoSignStatusOutcome DescribeUserAutoSignStatus(const Model::DescribeUserAutoSignStatusRequest &request);
                void DescribeUserAutoSignStatusAsync(const Model::DescribeUserAutoSignStatusRequest& request, const DescribeUserAutoSignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserAutoSignStatusOutcomeCallable DescribeUserAutoSignStatusCallable(const Model::DescribeUserAutoSignStatusRequest& request);

                /**
                 *通过此接口可以关闭个人用户自动签功能。
无需对应的用户刷脸等方式同意即可关闭。

注意: 

<ul><li>处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。</li>
<li>如果此用户在开通时候绑定过个人自动签账号许可,  关闭此用户的自动签不会归还个人自动签账号许可的额度。</li></ul>
                 * @param req DisableUserAutoSignRequest
                 * @return DisableUserAutoSignOutcome
                 */
                DisableUserAutoSignOutcome DisableUserAutoSign(const Model::DisableUserAutoSignRequest &request);
                void DisableUserAutoSignAsync(const Model::DisableUserAutoSignRequest& request, const DisableUserAutoSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableUserAutoSignOutcomeCallable DisableUserAutoSignCallable(const Model::DisableUserAutoSignRequest& request);

                /**
                 *此接口（GetTaskResultApi）用来查询转换任务的状态。如需发起转换任务，请使用<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务接口</a>进行资源文件的转换操作<br />
前提条件：已调用 <a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务接口</a>进行文件转换，并得到了返回的转换任务Id。<br />

适用场景：已创建一个文件转换任务，想查询该文件转换任务的状态，或获取转换后的文件资源Id。<br />
注：
1. `大文件转换所需的时间可能会比较长`
                 * @param req GetTaskResultApiRequest
                 * @return GetTaskResultApiOutcome
                 */
                GetTaskResultApiOutcome GetTaskResultApi(const Model::GetTaskResultApiRequest &request);
                void GetTaskResultApiAsync(const Model::GetTaskResultApiRequest& request, const GetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskResultApiOutcomeCallable GetTaskResultApiCallable(const Model::GetTaskResultApiRequest& request);

                /**
                 *新增/删除企业应用集成中的回调配置。
新增回调配置只会增加不存在的CallbackUrl；删除操作将针对找到的相同CallbackUrl的配置进行删除。
请确保回调地址能够接收并处理 HTTP POST 请求，并返回状态码 200 以表示处理正常。
更多回调相关的说明参考文档[回调通知能力](https://qian.tencent.com/developers/company/callback_types_v2)
                 * @param req ModifyApplicationCallbackInfoRequest
                 * @return ModifyApplicationCallbackInfoOutcome
                 */
                ModifyApplicationCallbackInfoOutcome ModifyApplicationCallbackInfo(const Model::ModifyApplicationCallbackInfoRequest &request);
                void ModifyApplicationCallbackInfoAsync(const Model::ModifyApplicationCallbackInfoRequest& request, const ModifyApplicationCallbackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationCallbackInfoOutcomeCallable ModifyApplicationCallbackInfoCallable(const Model::ModifyApplicationCallbackInfoRequest& request);

                /**
                 *管理企业扩展服务 ，企业经办人需要是企业超管或者法人。

跳转小程序的几种方式：主要是设置不同的EndPoint
1. 通过链接Url直接跳转到小程序，不需要返回
设置EndPoint为WEIXINAPP，得到链接打开即可。

2. 客户App直接跳转到小程序-->腾讯电子签小程序操作完成-->返回App
跳转到小程序的实现，参考官方文档<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/launchApp.html">打开 App</a>
设置EndPoint为APP，得到path。

3. 客户小程序直接跳到电子签小程序-->腾讯电子签小程序操作完成--->回到客户小程序
跳转到小程序的实现，参考官方文档（分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式），如何配置也可以请参考: <a href="https://qian.tencent.com/developers/company/openwxminiprogram">跳转电子签小程序配置</a>
设置EndPoint为APP，得到path。

4.其中小程序的原始Id如下，或者查看小程序信息自助获取。

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
                 *在已发起的签署流程中，支持对签署截止日期进行延期操作，主要涉及以下两个维度：
1. 合同（流程）维度：只需要传递签署流程ID。这将对签署流程和发起时未单独设定签署截止时间的签署人进行延期操作。
2. 签署人维度：需要传递流程ID和签署人ID。此操作将对签署人进行延期操作，尤其对于有序的合同（流程），签署截止时间不能超过后一位合同（流程）签署人的流程截止时间。

此接口有如下限制条件：
1. 执行操作的员工需为发起方企业的超级管理员、法定代表人或签署流程的发起人。
2. 在延长整个签署流程时，签署流程应至少还有一方未签署（即签署流程不能处于已全部签署完成、已拒签、已过期、已撤回、拒绝填写、已解除等合同状态）。
3. 在延长整个签署流程时，新的签署截止日期应晚于合同已设定的签署截止日期和当前日期。
4. 在延长签署方的截止时间时，签署方不能处于流程完结或已终止状态（即签署人不能处于已签署、已拒签、已过期、已撤回、拒绝填写、已解除等状态）。
5. 在延长签署方的截止时间时，签署方的新签署截止日期应晚于当前日期和签署方已设定的截止日期。若为有序合同，还应早于或等于下一签署人的截止日期，且早于签署流程整体的截止日期。
6. 不支持操作合同组合同。
                 * @param req ModifyFlowDeadlineRequest
                 * @return ModifyFlowDeadlineOutcome
                 */
                ModifyFlowDeadlineOutcome ModifyFlowDeadline(const Model::ModifyFlowDeadlineRequest &request);
                void ModifyFlowDeadlineAsync(const Model::ModifyFlowDeadlineRequest& request, const ModifyFlowDeadlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFlowDeadlineOutcomeCallable ModifyFlowDeadlineCallable(const Model::ModifyFlowDeadlineRequest& request);

                /**
                 *此接口（ModifyIntegrationDepartment）用于更新企业的部门信息，支持更新部门名称、客户系统部门ID和部门序号等信息。
                 * @param req ModifyIntegrationDepartmentRequest
                 * @return ModifyIntegrationDepartmentOutcome
                 */
                ModifyIntegrationDepartmentOutcome ModifyIntegrationDepartment(const Model::ModifyIntegrationDepartmentRequest &request);
                void ModifyIntegrationDepartmentAsync(const Model::ModifyIntegrationDepartmentRequest& request, const ModifyIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIntegrationDepartmentOutcomeCallable ModifyIntegrationDepartmentCallable(const Model::ModifyIntegrationDepartmentRequest& request);

                /**
                 *此接口（ModifyIntegrationRole）用来更新企业自定义的SaaS角色或集团角色。

适用场景1：更新当前企业的自定义SaaS角色或集团角色，并且更新时不进行角色中权限的更新（PermissionGroups 参数不传）。

适用场景2：更新当前企业的自定义SaaS角色或集团角色，并且更新时进行角色中权限的设置（PermissionGroups 参数要传），权限树内容 PermissionGroups 可参考接口 DescribeIntegrationRoles 的输出。此处注意权限树内容可能会更新，需尽量拉取最新的权限树内容，并且权限树内容 PermissionGroups 必须是一颗完整的权限树。

适用场景3：更新集团角色管理的子企业列表，可通过设置 SubOrganizationIds 参数达到此效果。

适用场景4：主企业代理子企业操作的场景，需要设置Agent参数，并且ProxyOrganizationId设置为子企业的id即可。

注意事项：SaaS角色和集团角色对应的权限树是不一样的。
                 * @param req ModifyIntegrationRoleRequest
                 * @return ModifyIntegrationRoleOutcome
                 */
                ModifyIntegrationRoleOutcome ModifyIntegrationRole(const Model::ModifyIntegrationRoleRequest &request);
                void ModifyIntegrationRoleAsync(const Model::ModifyIntegrationRoleRequest& request, const ModifyIntegrationRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIntegrationRoleOutcomeCallable ModifyIntegrationRoleCallable(const Model::ModifyIntegrationRoleRequest& request);

                /**
                 *给医疗个人自动签许可续期。续期成功后，可对医疗自动签许可追加一年有效期，只可续期一次。

注意: `处方单等特殊场景专用，此接口为白名单功能，使用前请联系对接的客户经理沟通。`
                 * @param req RenewAutoSignLicenseRequest
                 * @return RenewAutoSignLicenseOutcome
                 */
                RenewAutoSignLicenseOutcome RenewAutoSignLicense(const Model::RenewAutoSignLicenseRequest &request);
                void RenewAutoSignLicenseAsync(const Model::RenewAutoSignLicenseRequest& request, const RenewAutoSignLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewAutoSignLicenseOutcomeCallable RenewAutoSignLicenseCallable(const Model::RenewAutoSignLicenseRequest& request);

                /**
                 *此接口用于启动流程。它是模板发起合同的最后一步。
在[创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlow)和[创建电子文档](https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument)之后，用于开始整个合同流程,  推进流程进入到签署环节。

![image](https://qcloudimg.tencent-cloud.cn/raw/06f2bc0f1772d8deac2f92b5df61a5ac.png)

注：
1.<font color="red">合同发起后就会扣减合同的额度</font>, 只有撤销没有参与方签署过或只有自动签署签署过的合同，才会返还合同额度。（过期，拒签，签署完成，解除完成等状态不会返还额度）

2.<font color="red">静默（自动）签署不支持合同签署方存在填写</font>功能

3.<font color="red">在发起签署流程之前，建议等待 [PDF合成完成的回调](https://qian.tencent.com/developers/company/callback_types_file_resources)</font>，尤其是当模板中存在动态表格等复杂填写控件时，因为合成过程可能会耗费秒级别的时间。
                 * @param req StartFlowRequest
                 * @return StartFlowOutcome
                 */
                StartFlowOutcome StartFlow(const Model::StartFlowRequest &request);
                void StartFlowAsync(const Model::StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartFlowOutcomeCallable StartFlowCallable(const Model::StartFlowRequest& request);

                /**
                 *此接口（UnbindEmployeeUserIdWithClientOpenId）用于解除电子签系统员工UserId与客户系统员工OpenId之间的绑定关系。

注：`在调用此接口时，需确保OpenId已通过调用`<a href="https://qian.tencent.com/developers/companyApis/staffs/BindEmployeeUserIdWithClientOpenId" target="_blank">BindEmployeeUserIdWithClientOpenId</a>`接口与电子签系统的UserId绑定过。若OpenId未经过绑定，则无法使用此接口进行解绑操作。`
                 * @param req UnbindEmployeeUserIdWithClientOpenIdRequest
                 * @return UnbindEmployeeUserIdWithClientOpenIdOutcome
                 */
                UnbindEmployeeUserIdWithClientOpenIdOutcome UnbindEmployeeUserIdWithClientOpenId(const Model::UnbindEmployeeUserIdWithClientOpenIdRequest &request);
                void UnbindEmployeeUserIdWithClientOpenIdAsync(const Model::UnbindEmployeeUserIdWithClientOpenIdRequest& request, const UnbindEmployeeUserIdWithClientOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindEmployeeUserIdWithClientOpenIdOutcomeCallable UnbindEmployeeUserIdWithClientOpenIdCallable(const Model::UnbindEmployeeUserIdWithClientOpenIdRequest& request);

                /**
                 *此接口（UpdateIntegrationEmployees）<font color="red"><b>用于修改未实名企业员工信息(姓名，手机号，邮件、部门)</b></font>。
如果企业员工已经实名， 姓名，手机号，邮件等需要企业员工到小程序或者控制台自己修改， 部门则需要超管到控制台分配

修改手机号的时候,支持以下场景进行提醒通知
<table>
<tbody>
<tr>
<td>生成端</td>
<td >入参</td>
<td>提醒方式</td>
</tr>
<tr>
<td>普通saas员工</td>
<td>将Employees中的DisplayName设置员工的名字，Mobile设置成员工的手机号</td>
<td>发送短信通知员工（短信中带有认证加入企业的链接）</td>
</tr>
<tr>
<td>企微员工</td>
<td>将Employees 中的WeworkOpenId字段设置为企微员工明文的openid，需<font color="red">确保该企微员工在应用的可见范围内</font></td>
<td>企微内部实名消息</td>
</tr>
<tr>
<td>H5端 saas员工</td>
<td>传递 InvitationNotifyType = H5，将Employees中的DisplayName设置员工的名字，Mobile设置成员工的手机号，<font color="red">此场景不支持企微</font></td>
<td>生成认证加入企业的H5链接，贵方可以通过自己的渠道触达到此员工</td>
</tr>
</tbody>
</table>
注意：

- <b>若通过手机号发现员工已经创建，则不会重复创建，但会发送短信或者生成链接提醒员工实名。</b>
- jumpUrl 仅支持H5的邀请方式，回跳的url，使用前请联系对接的客户经理沟通，进行域名的配置。
                 * @param req UpdateIntegrationEmployeesRequest
                 * @return UpdateIntegrationEmployeesOutcome
                 */
                UpdateIntegrationEmployeesOutcome UpdateIntegrationEmployees(const Model::UpdateIntegrationEmployeesRequest &request);
                void UpdateIntegrationEmployeesAsync(const Model::UpdateIntegrationEmployeesRequest& request, const UpdateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateIntegrationEmployeesOutcomeCallable UpdateIntegrationEmployeesCallable(const Model::UpdateIntegrationEmployeesRequest& request);

                /**
                 *此接口（UploadFiles）文件上传。<br/>

适用场景：用于合同，印章的文件上传。文件上传以后，
如果是PDF格式文件可配合<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowByFiles" target="_blank">用PDF文件创建签署流程</a>接口进行合同流程的发起
如果是其他类型可以配合<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>接口转换成PDF文件

注: 
1. 图片类型(png/jpg/jpeg)限制大小为5M以下, PDF/word/excel等其他格式限制大小为60M以下
2. 调用此接口时需要设置单独的Domain请求域名，<font color="red">联调开发环境为: file.test.ess.tencent.cn，正式环境需要设置为:file.ess.tencent.cn</font>，代码示例
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

                /**
                 *对合同流程文件进行数字签名验证，判断数字签名是否有效，合同文件内容是否被篡改。
                 * @param req VerifyPdfRequest
                 * @return VerifyPdfOutcome
                 */
                VerifyPdfOutcome VerifyPdf(const Model::VerifyPdfRequest &request);
                void VerifyPdfAsync(const Model::VerifyPdfRequest& request, const VerifyPdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyPdfOutcomeCallable VerifyPdfCallable(const Model::VerifyPdfRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_ESSCLIENT_H_
