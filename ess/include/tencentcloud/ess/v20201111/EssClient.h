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
#include <tencentcloud/ess/v20201111/model/CreateChannelSubOrganizationModifyQrCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateChannelSubOrganizationModifyQrCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateConvertTaskApiRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateConvertTaskApiResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateDocumentRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateDocumentResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateEmbedWebUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateEmbedWebUrlResponse.h>
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
#include <tencentcloud/ess/v20201111/model/CreateWebThemeConfigRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateWebThemeConfigResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationDepartmentRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationDepartmentResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationEmployeesRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationEmployeesResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationRoleUsersRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationRoleUsersResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteSealPoliciesRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteSealPoliciesResponse.h>
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
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationMainOrganizationUserRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationMainOrganizationUserResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationRolesRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationRolesResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationSealsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationSealsResponse.h>
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
#include <tencentcloud/ess/v20201111/model/ModifyIntegrationDepartmentRequest.h>
#include <tencentcloud/ess/v20201111/model/ModifyIntegrationDepartmentResponse.h>
#include <tencentcloud/ess/v20201111/model/ModifyIntegrationRoleRequest.h>
#include <tencentcloud/ess/v20201111/model/ModifyIntegrationRoleResponse.h>
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
                typedef Outcome<Core::Error, Model::CreateChannelSubOrganizationModifyQrCodeResponse> CreateChannelSubOrganizationModifyQrCodeOutcome;
                typedef std::future<CreateChannelSubOrganizationModifyQrCodeOutcome> CreateChannelSubOrganizationModifyQrCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateChannelSubOrganizationModifyQrCodeRequest&, CreateChannelSubOrganizationModifyQrCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelSubOrganizationModifyQrCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConvertTaskApiResponse> CreateConvertTaskApiOutcome;
                typedef std::future<CreateConvertTaskApiOutcome> CreateConvertTaskApiOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateConvertTaskApiRequest&, CreateConvertTaskApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConvertTaskApiAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocumentResponse> CreateDocumentOutcome;
                typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateDocumentRequest&, CreateDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmbedWebUrlResponse> CreateEmbedWebUrlOutcome;
                typedef std::future<CreateEmbedWebUrlOutcome> CreateEmbedWebUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateEmbedWebUrlRequest&, CreateEmbedWebUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmbedWebUrlAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateWebThemeConfigResponse> CreateWebThemeConfigOutcome;
                typedef std::future<CreateWebThemeConfigOutcome> CreateWebThemeConfigOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateWebThemeConfigRequest&, CreateWebThemeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebThemeConfigAsyncHandler;
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
                typedef Outcome<Core::Error, Model::DescribeIntegrationMainOrganizationUserResponse> DescribeIntegrationMainOrganizationUserOutcome;
                typedef std::future<DescribeIntegrationMainOrganizationUserOutcome> DescribeIntegrationMainOrganizationUserOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeIntegrationMainOrganizationUserRequest&, DescribeIntegrationMainOrganizationUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationMainOrganizationUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationRolesResponse> DescribeIntegrationRolesOutcome;
                typedef std::future<DescribeIntegrationRolesOutcome> DescribeIntegrationRolesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeIntegrationRolesRequest&, DescribeIntegrationRolesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationRolesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationGroupOrganizationsResponse> DescribeOrganizationGroupOrganizationsOutcome;
                typedef std::future<DescribeOrganizationGroupOrganizationsOutcome> DescribeOrganizationGroupOrganizationsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeOrganizationGroupOrganizationsRequest&, DescribeOrganizationGroupOrganizationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationGroupOrganizationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationSealsResponse> DescribeOrganizationSealsOutcome;
                typedef std::future<DescribeOrganizationSealsOutcome> DescribeOrganizationSealsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeOrganizationSealsRequest&, DescribeOrganizationSealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationSealsAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyIntegrationDepartmentResponse> ModifyIntegrationDepartmentOutcome;
                typedef std::future<ModifyIntegrationDepartmentOutcome> ModifyIntegrationDepartmentOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::ModifyIntegrationDepartmentRequest&, ModifyIntegrationDepartmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationDepartmentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIntegrationRoleResponse> ModifyIntegrationRoleOutcome;
                typedef std::future<ModifyIntegrationRoleOutcome> ModifyIntegrationRoleOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::ModifyIntegrationRoleRequest&, ModifyIntegrationRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntegrationRoleAsyncHandler;
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
                 *将电子签系统员工userId与客户系统员工openId进行绑定
                 * @param req BindEmployeeUserIdWithClientOpenIdRequest
                 * @return BindEmployeeUserIdWithClientOpenIdOutcome
                 */
                BindEmployeeUserIdWithClientOpenIdOutcome BindEmployeeUserIdWithClientOpenId(const Model::BindEmployeeUserIdWithClientOpenIdRequest &request);
                void BindEmployeeUserIdWithClientOpenIdAsync(const Model::BindEmployeeUserIdWithClientOpenIdRequest& request, const BindEmployeeUserIdWithClientOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindEmployeeUserIdWithClientOpenIdOutcomeCallable BindEmployeeUserIdWithClientOpenIdCallable(const Model::BindEmployeeUserIdWithClientOpenIdRequest& request);

                /**
                 *用于撤销签署流程<br/>
适用场景：如果某个合同流程当前至少还有一方没有签署，则可通过该接口取消该合同流程。常用于合同发错、内容填错，需要及时撤销的场景。<br/>
`注意：如果合同流程中的参与方均已签署完毕，则无法通过该接口撤销合同。`
                 * @param req CancelFlowRequest
                 * @return CancelFlowOutcome
                 */
                CancelFlowOutcome CancelFlow(const Model::CancelFlowRequest &request);
                void CancelFlowAsync(const Model::CancelFlowRequest& request, const CancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelFlowOutcomeCallable CancelFlowCallable(const Model::CancelFlowRequest& request);

                /**
                 *此接口（CancelMultiFlowSignQRCode）用于废除一码多扫流程签署二维码。
该接口所需的二维码ID，源自[创建一码多扫流程签署二维码](https://qian.tencent.com/developers/companyApis/startFlows/CreateMultiFlowSignQRCode)生成的。
如果该二维码尚处于有效期内，可通过本接口将其设置为失效状态。
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
                 *注：此接口将会废弃，请使用撤销单个签署流程（CancelFlow）接口。
指定需要批量撤回的签署流程Id，获取批量撤销链接。
客户指定需要撤回的签署流程Id，最多100个，超过100不处理；接口调用成功返回批量撤回合同的链接，通过链接跳转到电子签小程序完成批量撤回。
                 * @param req CreateBatchCancelFlowUrlRequest
                 * @return CreateBatchCancelFlowUrlOutcome
                 */
                CreateBatchCancelFlowUrlOutcome CreateBatchCancelFlowUrl(const Model::CreateBatchCancelFlowUrlRequest &request);
                void CreateBatchCancelFlowUrlAsync(const Model::CreateBatchCancelFlowUrlRequest& request, const CreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchCancelFlowUrlOutcomeCallable CreateBatchCancelFlowUrlCallable(const Model::CreateBatchCancelFlowUrlRequest& request);

                /**
                 *根据产品要求，调整接口目录

新接口：ChannelCreateOrganizationModifyQrCode 

老接口目前无线上流量，测试用例已下线处理

生成子客编辑企业信息二维码
                 * @param req CreateChannelSubOrganizationModifyQrCodeRequest
                 * @return CreateChannelSubOrganizationModifyQrCodeOutcome
                 */
                CreateChannelSubOrganizationModifyQrCodeOutcome CreateChannelSubOrganizationModifyQrCode(const Model::CreateChannelSubOrganizationModifyQrCodeRequest &request);
                void CreateChannelSubOrganizationModifyQrCodeAsync(const Model::CreateChannelSubOrganizationModifyQrCodeRequest& request, const CreateChannelSubOrganizationModifyQrCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelSubOrganizationModifyQrCodeOutcomeCallable CreateChannelSubOrganizationModifyQrCodeCallable(const Model::CreateChannelSubOrganizationModifyQrCodeRequest& request);

                /**
                 *此接口（CreateConvertTaskApi）用来将word、excel、图片、txt类型文件转换为PDF文件。<br />
前提条件：源文件已经通过 <a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">文件上传接口</a>完成上传，并得到了源文件的资源Id。<br />
适用场景1：已经上传了一个word文件，希望将该word文件转换成pdf文件后发起合同
适用场景2：已经上传了一个jpg图片文件，希望将该图片文件转换成pdf文件后发起合同<br />
转换文件是一个耗时操作，若想查看转换任务是否完成，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/GetTaskResultApi" target="_blank">查询转换任务状态</a>接口获取任务状态。<br />
注: 
1. `支持的文件类型有doc\docx\xls\xlsx\jpg\jpeg\png\bmp\txt`
2. `可通过发起合同时设置预览来检查转换文件是否达到预期效果`
                 * @param req CreateConvertTaskApiRequest
                 * @return CreateConvertTaskApiOutcome
                 */
                CreateConvertTaskApiOutcome CreateConvertTaskApi(const Model::CreateConvertTaskApiRequest &request);
                void CreateConvertTaskApiAsync(const Model::CreateConvertTaskApiRequest& request, const CreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConvertTaskApiOutcomeCallable CreateConvertTaskApiCallable(const Model::CreateConvertTaskApiRequest& request);

                /**
                 *创建签署流程电子文档
适用场景：见创建签署流程接口。
注：该接口需要给对应的流程指定一个模板id，并且填充该模板中需要补充的信息。需要配置<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlow" target="_blank">创建签署流程</a>和<a href="https://qian.tencent.com/developers/companyApis/startFlows/StartFlow" target="_blank">发起签署流程</a>接口使用, 具体逻辑可以参考下图:

<svg id="SvgjsSvg1077" width="304" height="505" xmlns="http://www.w3.org/2000/svg" version="1.1" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:svgjs="http://svgjs.com/svgjs"><defs id="SvgjsDefs1078"><pattern patternUnits="userSpaceOnUse" id="pattern_mark_0" width="300" height="300"><text x="150" y="100" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><pattern patternUnits="userSpaceOnUse" id="pattern_mark_1" width="300" height="300"><text x="150" y="200" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><marker id="SvgjsMarker1096" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1097" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker><marker id="SvgjsMarker1108" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1109" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker><marker id="SvgjsMarker1120" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1121" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker><marker id="SvgjsMarker1140" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1141" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker></defs><rect id="svgbackgroundid" width="304" height="505" fill="transparent"></rect><rect id="SvgjsRect1080" width="304" height="505" fill="url(#pattern_mark_0)"></rect><rect id="SvgjsRect1081" width="304" height="505" fill="url(#pattern_mark_1)"></rect><g id="SvgjsG1082" transform="translate(58,121)"><path id="SvgjsPath1083" d="M 0 0L 221 0L 221 262L 0 262Z" stroke-dasharray="3,4" stroke="rgba(33,41,48,1)" stroke-width="1" fill-opacity="1" fill="#ffffff"></path><g id="SvgjsG1084"><text id="SvgjsText1085" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="201px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="120.375" transform="rotate(0)"></text></g></g><g id="SvgjsG1086" transform="translate(88,140.00000000000006)"><path id="SvgjsPath1087" d="M 0 0L 161 0L 161 48L 0 48Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1088"><text id="SvgjsText1089" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="141px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="4.875" transform="rotate(0)"><tspan id="SvgjsTspan1090" dy="16" x="80.5"><tspan id="SvgjsTspan1091" style="text-decoration:;fill: rgb(28, 30, 33);">CreateFlow</tspan></tspan><tspan id="SvgjsTspan1092" dy="16" x="80.5"><tspan id="SvgjsTspan1093" style="text-decoration:;">创建签署流程</tspan></tspan></text></g></g><g id="SvgjsG1094"><path id="SvgjsPath1095" d="M168.5 188.50000000000006L168.5 200.83333333333337L168.5 200.83333333333337L168.5 211.86666666666667" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1096)"></path></g><g id="SvgjsG1098" transform="translate(104.25,213.66666666666669)"><path id="SvgjsPath1099" d="M 0 0L 128.5 0L 128.5 55L 0 55Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1100"><text id="SvgjsText1101" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="109px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="8.375" transform="rotate(0)"><tspan id="SvgjsTspan1102" dy="16" x="64.5"><tspan id="SvgjsTspan1103" style="text-decoration:;fill: rgb(28, 30, 33);">CreateDocument</tspan></tspan><tspan id="SvgjsTspan1104" dy="16" x="64.5"><tspan id="SvgjsTspan1105" style="text-decoration:;">创建电子文档</tspan></tspan></text></g></g><g id="SvgjsG1106"><path id="SvgjsPath1107" d="M168.5 269.16666666666674L168.5 281.5L168.5 281.5L168.5 292.5333333333334" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1108)"></path></g><g id="SvgjsG1110" transform="translate(96.75,294.33333333333337)"><path id="SvgjsPath1111" d="M 0 0L 143.5 0L 143.5 65L 0 65Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1112"><text id="SvgjsText1113" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="124px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="13.375" transform="rotate(0)"><tspan id="SvgjsTspan1114" dy="16" x="72"><tspan id="SvgjsTspan1115" style="text-decoration:;fill: rgb(28, 30, 33);">StartFlow</tspan></tspan><tspan id="SvgjsTspan1116" dy="16" x="72"><tspan id="SvgjsTspan1117" style="text-decoration:;">发起签署流程</tspan></tspan></text></g></g><g id="SvgjsG1118"><path id="SvgjsPath1119" d="M168.5 359.83333333333337L168.5 392.16666666666674L168.5 392.16666666666674L168.5 423.20000000000005" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1120)"></path></g><g id="SvgjsG1122" transform="translate(106.25,425)"><path id="SvgjsPath1123" d="M 0 0L 124.5 0L 124.5 55L 0 55Z" stroke="rgba(33,41,48,1)" stroke-width="1" fill-opacity="1" fill="#ffffff"></path><g id="SvgjsG1124"><text id="SvgjsText1125" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="105px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="8.375" transform="rotate(0)"><tspan id="SvgjsTspan1126" dy="16" x="62.5"><tspan id="SvgjsTspan1127" style="text-decoration:;">开始签署</tspan></tspan><tspan id="SvgjsTspan1128" dy="16" x="62.5"><tspan id="SvgjsTspan1129" style="text-decoration:;">(小程序/H5等)</tspan></tspan></text></g></g><g id="SvgjsG1130" transform="translate(120.5,25)"><path id="SvgjsPath1131" d="M 0 0L 96 0L 96 54L 0 54Z" stroke="rgba(33,41,48,1)" stroke-width="1" fill-opacity="1" fill="#ffffff"></path><g id="SvgjsG1132"><text id="SvgjsText1133" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="76px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="7.875" transform="rotate(0)"><tspan id="SvgjsTspan1134" dy="16" x="48"><tspan id="SvgjsTspan1135" style="text-decoration:;">控制台创建</tspan></tspan><tspan id="SvgjsTspan1136" dy="16" x="48"><tspan id="SvgjsTspan1137" style="text-decoration:;">模板</tspan></tspan></text></g></g><g id="SvgjsG1138"><path id="SvgjsPath1139" d="M168.5 79.5L168.5 109.5L168.5 109.5L168.5 138.20000000000005" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1140)"></path></g><g id="SvgjsG1142" transform="translate(25,114)"><path id="SvgjsPath1143" d="M 0 0L 100 0L 100 40L 0 40Z" stroke="none" fill="none"></path><g id="SvgjsG1144"><text id="SvgjsText1145" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="100px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="9.375" transform="rotate(0)"><tspan id="SvgjsTspan1146" dy="16" x="50"><tspan id="SvgjsTspan1147" style="text-decoration:;">API</tspan></tspan></text></g></g></svg>
                 * @param req CreateDocumentRequest
                 * @return CreateDocumentOutcome
                 */
                CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest &request);
                void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request);

                /**
                 *本接口（CreateEmbedWebUrl）用于创建嵌入web的链接 本接口支持创建：创建印章，创建模板，修改模板，预览模板，预览合同流程的web链接 进入web连接后与当前控制台操作保持一致
                 * @param req CreateEmbedWebUrlRequest
                 * @return CreateEmbedWebUrlOutcome
                 */
                CreateEmbedWebUrlOutcome CreateEmbedWebUrl(const Model::CreateEmbedWebUrlRequest &request);
                void CreateEmbedWebUrlAsync(const Model::CreateEmbedWebUrlRequest& request, const CreateEmbedWebUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmbedWebUrlOutcomeCallable CreateEmbedWebUrlCallable(const Model::CreateEmbedWebUrlRequest& request);

                /**
                 *通过模板创建签署流程<br/>
适用场景：在标准制式的合同场景中，可通过提前预制好模板文件，每次调用模板文件的id，补充合同内容信息及签署信息生成电子合同。

注：配合<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument" target="_blank">创建电子文档</a>和<a href="https://qian.tencent.com/developers/companyApis/startFlows/StartFlow" target="_blank">发起签署流程</a>接口使用。整体的逻辑如下图

<svg id="SvgjsSvg1077" width="304" height="505" xmlns="http://www.w3.org/2000/svg" version="1.1" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:svgjs="http://svgjs.com/svgjs"><defs id="SvgjsDefs1078"><pattern patternUnits="userSpaceOnUse" id="pattern_mark_0" width="300" height="300"><text x="150" y="100" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><pattern patternUnits="userSpaceOnUse" id="pattern_mark_1" width="300" height="300"><text x="150" y="200" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><marker id="SvgjsMarker1096" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1097" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker><marker id="SvgjsMarker1108" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1109" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker><marker id="SvgjsMarker1120" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1121" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker><marker id="SvgjsMarker1140" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1141" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker></defs><rect id="svgbackgroundid" width="304" height="505" fill="transparent"></rect><rect id="SvgjsRect1080" width="304" height="505" fill="url(#pattern_mark_0)"></rect><rect id="SvgjsRect1081" width="304" height="505" fill="url(#pattern_mark_1)"></rect><g id="SvgjsG1082" transform="translate(58,121)"><path id="SvgjsPath1083" d="M 0 0L 221 0L 221 262L 0 262Z" stroke-dasharray="3,4" stroke="rgba(33,41,48,1)" stroke-width="1" fill-opacity="1" fill="#ffffff"></path><g id="SvgjsG1084"><text id="SvgjsText1085" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="201px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="120.375" transform="rotate(0)"></text></g></g><g id="SvgjsG1086" transform="translate(88,140.00000000000006)"><path id="SvgjsPath1087" d="M 0 0L 161 0L 161 48L 0 48Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1088"><text id="SvgjsText1089" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="141px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="4.875" transform="rotate(0)"><tspan id="SvgjsTspan1090" dy="16" x="80.5"><tspan id="SvgjsTspan1091" style="text-decoration:;fill: rgb(28, 30, 33);">CreateFlow</tspan></tspan><tspan id="SvgjsTspan1092" dy="16" x="80.5"><tspan id="SvgjsTspan1093" style="text-decoration:;">创建签署流程</tspan></tspan></text></g></g><g id="SvgjsG1094"><path id="SvgjsPath1095" d="M168.5 188.50000000000006L168.5 200.83333333333337L168.5 200.83333333333337L168.5 211.86666666666667" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1096)"></path></g><g id="SvgjsG1098" transform="translate(104.25,213.66666666666669)"><path id="SvgjsPath1099" d="M 0 0L 128.5 0L 128.5 55L 0 55Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1100"><text id="SvgjsText1101" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="109px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="8.375" transform="rotate(0)"><tspan id="SvgjsTspan1102" dy="16" x="64.5"><tspan id="SvgjsTspan1103" style="text-decoration:;fill: rgb(28, 30, 33);">CreateDocument</tspan></tspan><tspan id="SvgjsTspan1104" dy="16" x="64.5"><tspan id="SvgjsTspan1105" style="text-decoration:;">创建电子文档</tspan></tspan></text></g></g><g id="SvgjsG1106"><path id="SvgjsPath1107" d="M168.5 269.16666666666674L168.5 281.5L168.5 281.5L168.5 292.5333333333334" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1108)"></path></g><g id="SvgjsG1110" transform="translate(96.75,294.33333333333337)"><path id="SvgjsPath1111" d="M 0 0L 143.5 0L 143.5 65L 0 65Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1112"><text id="SvgjsText1113" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="124px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="13.375" transform="rotate(0)"><tspan id="SvgjsTspan1114" dy="16" x="72"><tspan id="SvgjsTspan1115" style="text-decoration:;fill: rgb(28, 30, 33);">StartFlow</tspan></tspan><tspan id="SvgjsTspan1116" dy="16" x="72"><tspan id="SvgjsTspan1117" style="text-decoration:;">发起签署流程</tspan></tspan></text></g></g><g id="SvgjsG1118"><path id="SvgjsPath1119" d="M168.5 359.83333333333337L168.5 392.16666666666674L168.5 392.16666666666674L168.5 423.20000000000005" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1120)"></path></g><g id="SvgjsG1122" transform="translate(106.25,425)"><path id="SvgjsPath1123" d="M 0 0L 124.5 0L 124.5 55L 0 55Z" stroke="rgba(33,41,48,1)" stroke-width="1" fill-opacity="1" fill="#ffffff"></path><g id="SvgjsG1124"><text id="SvgjsText1125" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="105px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="8.375" transform="rotate(0)"><tspan id="SvgjsTspan1126" dy="16" x="62.5"><tspan id="SvgjsTspan1127" style="text-decoration:;">开始签署</tspan></tspan><tspan id="SvgjsTspan1128" dy="16" x="62.5"><tspan id="SvgjsTspan1129" style="text-decoration:;">(小程序/H5等)</tspan></tspan></text></g></g><g id="SvgjsG1130" transform="translate(120.5,25)"><path id="SvgjsPath1131" d="M 0 0L 96 0L 96 54L 0 54Z" stroke="rgba(33,41,48,1)" stroke-width="1" fill-opacity="1" fill="#ffffff"></path><g id="SvgjsG1132"><text id="SvgjsText1133" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="76px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="7.875" transform="rotate(0)"><tspan id="SvgjsTspan1134" dy="16" x="48"><tspan id="SvgjsTspan1135" style="text-decoration:;">控制台创建</tspan></tspan><tspan id="SvgjsTspan1136" dy="16" x="48"><tspan id="SvgjsTspan1137" style="text-decoration:;">模板</tspan></tspan></text></g></g><g id="SvgjsG1138"><path id="SvgjsPath1139" d="M168.5 79.5L168.5 109.5L168.5 109.5L168.5 138.20000000000005" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1140)"></path></g><g id="SvgjsG1142" transform="translate(25,114)"><path id="SvgjsPath1143" d="M 0 0L 100 0L 100 40L 0 40Z" stroke="none" fill="none"></path><g id="SvgjsG1144"><text id="SvgjsText1145" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="100px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="9.375" transform="rotate(0)"><tspan id="SvgjsTspan1146" dy="16" x="50"><tspan id="SvgjsTspan1147" style="text-decoration:;">API</tspan></tspan></text></g></g></svg>
                 * @param req CreateFlowRequest
                 * @return CreateFlowOutcome
                 */
                CreateFlowOutcome CreateFlow(const Model::CreateFlowRequest &request);
                void CreateFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowOutcomeCallable CreateFlowCallable(const Model::CreateFlowRequest& request);

                /**
                 *### 适用场景
在通过模板或者文件发起合同时，若未指定企业签署人信息，则流程发起后，可以调用此接口补充或签签署人。
同一签署人可以补充多个员工作为或签签署人,最终实际签署人取决于谁先领取合同完成签署。
### 限制条件
-  本企业(发起方企业)支持通过企业微信UserId 或者 姓名+手机号补充
- 他方企业仅支持通过姓名+手机号补充
                 * @param req CreateFlowApproversRequest
                 * @return CreateFlowApproversOutcome
                 */
                CreateFlowApproversOutcome CreateFlowApprovers(const Model::CreateFlowApproversRequest &request);
                void CreateFlowApproversAsync(const Model::CreateFlowApproversRequest& request, const CreateFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowApproversOutcomeCallable CreateFlowApproversCallable(const Model::CreateFlowApproversRequest& request);

                /**
                 *此接口（CreateFlowByFiles）用来通过上传后的pdf资源编号来创建待签署的合同流程。<br/>
适用场景1：适用非制式的合同文件签署。一般开发者自己有完整的签署文件，可以通过该接口传入完整的PDF文件及流程信息生成待签署的合同流程。<br/>
适用场景2：可通过该接口传入制式合同文件，同时在指定位置添加签署控件。可以起到接口创建临时模板的效果。如果是标准的制式文件，建议使用模板功能生成模板ID进行合同流程的生成。<br/>
注意事项：该接口需要依赖“多文件上传”接口生成pdf资源编号（FileIds）进行使用。<br/>
                 * @param req CreateFlowByFilesRequest
                 * @return CreateFlowByFilesOutcome
                 */
                CreateFlowByFilesOutcome CreateFlowByFiles(const Model::CreateFlowByFilesRequest &request);
                void CreateFlowByFilesAsync(const Model::CreateFlowByFilesRequest& request, const CreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowByFilesOutcomeCallable CreateFlowByFilesCallable(const Model::CreateFlowByFilesRequest& request);

                /**
                 *创建出证报告并返回报告ID。
使用此功能需搭配出证套餐。
注意：出证过程需一定时间，建议在调用创建出证后的24小时之后，通过DescribeFlowEvidenceReport接口进行查询。
                 * @param req CreateFlowEvidenceReportRequest
                 * @return CreateFlowEvidenceReportOutcome
                 */
                CreateFlowEvidenceReportOutcome CreateFlowEvidenceReport(const Model::CreateFlowEvidenceReportRequest &request);
                void CreateFlowEvidenceReportAsync(const Model::CreateFlowEvidenceReportRequest& request, const CreateFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowEvidenceReportOutcomeCallable CreateFlowEvidenceReportCallable(const Model::CreateFlowEvidenceReportRequest& request);

                /**
                 *此接口（CreateFlowGroupByFiles）通过多文件创建合同组签署流程。<br/>
PDF资源Id 通过上传文件接口获取
此接口合同组中的子合同必须都是文件发起的合同
                 * @param req CreateFlowGroupByFilesRequest
                 * @return CreateFlowGroupByFilesOutcome
                 */
                CreateFlowGroupByFilesOutcome CreateFlowGroupByFiles(const Model::CreateFlowGroupByFilesRequest &request);
                void CreateFlowGroupByFilesAsync(const Model::CreateFlowGroupByFilesRequest& request, const CreateFlowGroupByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowGroupByFilesOutcomeCallable CreateFlowGroupByFilesCallable(const Model::CreateFlowGroupByFilesRequest& request);

                /**
                 *此接口（CreateFlowGroupByTemplates）通过多模板创建合同组签署流程。<br/>
此接口合同组中的子合同必须都是模板发起的合同。 <br/>目前最大仅支持50个子合同
                 * @param req CreateFlowGroupByTemplatesRequest
                 * @return CreateFlowGroupByTemplatesOutcome
                 */
                CreateFlowGroupByTemplatesOutcome CreateFlowGroupByTemplates(const Model::CreateFlowGroupByTemplatesRequest &request);
                void CreateFlowGroupByTemplatesAsync(const Model::CreateFlowGroupByTemplatesRequest& request, const CreateFlowGroupByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowGroupByTemplatesOutcomeCallable CreateFlowGroupByTemplatesCallable(const Model::CreateFlowGroupByTemplatesRequest& request);

                /**
                 *指定需要批量催办的签署流程ID，批量催办合同，最多100个。需要符合以下条件的合同才可被催办：

1. 发起合同时，签署人的NotifyType需设置为sms
2. 合同中当前状态为“待签署”的签署人是催办的对象
3. 每个合同只能催办一次

注意：该接口无法直接调用，请联系客户经理申请使用。
                 * @param req CreateFlowRemindsRequest
                 * @return CreateFlowRemindsOutcome
                 */
                CreateFlowRemindsOutcome CreateFlowReminds(const Model::CreateFlowRemindsRequest &request);
                void CreateFlowRemindsAsync(const Model::CreateFlowRemindsRequest& request, const CreateFlowRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowRemindsOutcomeCallable CreateFlowRemindsCallable(const Model::CreateFlowRemindsRequest& request);

                /**
                 *提交企业签署流程审批结果
适用场景: 
在通过接口(CreateFlow 或者CreateFlowByFiles)创建签署流程时，若指定了参数 NeedSignReview 为true，且发起方企业作为签署方参与了流程签署，则可以调用此接口提交企业内部签署审批结果。
若签署流程状态正常，且本企业存在签署方未签署，同一签署流程可以多次提交签署审批结果，签署时的最后一个“审批结果”有效。
                 * @param req CreateFlowSignReviewRequest
                 * @return CreateFlowSignReviewOutcome
                 */
                CreateFlowSignReviewOutcome CreateFlowSignReview(const Model::CreateFlowSignReviewRequest &request);
                void CreateFlowSignReviewAsync(const Model::CreateFlowSignReviewRequest& request, const CreateFlowSignReviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowSignReviewOutcomeCallable CreateFlowSignReviewCallable(const Model::CreateFlowSignReviewRequest& request);

                /**
                 *该接口用于发起合同后，生成个人用户的签署链接, 暂时不支持企业端签署 <br/>

注：
`1. 该接口目前仅支持签署人类型是个人签署方的场景（PERSON）` 
`2. 该接口可生成签署链接的C端签署人必须仅有手写签名和时间类型的签署控件，不支持填写控件 `
`3. 该接口返回的签署链接是用于APP集成的场景，支持APP打开或浏览器直接打开，不支持微信小程序嵌入`。跳转到小程序的实现，参考微信官方文档（分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式），如何配置也可以请参考: <a href="https://qian.tencent.com/developers/company/openwxminiprogram">跳转电子签小程序配置</a>
                 * @param req CreateFlowSignUrlRequest
                 * @return CreateFlowSignUrlOutcome
                 */
                CreateFlowSignUrlOutcome CreateFlowSignUrl(const Model::CreateFlowSignUrlRequest &request);
                void CreateFlowSignUrlAsync(const Model::CreateFlowSignUrlRequest& request, const CreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowSignUrlOutcomeCallable CreateFlowSignUrlCallable(const Model::CreateFlowSignUrlRequest& request);

                /**
                 *通过此接口，创建企业的部门，支持绑定客户系统部门ID。
                 * @param req CreateIntegrationDepartmentRequest
                 * @return CreateIntegrationDepartmentOutcome
                 */
                CreateIntegrationDepartmentOutcome CreateIntegrationDepartment(const Model::CreateIntegrationDepartmentRequest &request);
                void CreateIntegrationDepartmentAsync(const Model::CreateIntegrationDepartmentRequest& request, const CreateIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationDepartmentOutcomeCallable CreateIntegrationDepartmentCallable(const Model::CreateIntegrationDepartmentRequest& request);

                /**
                 *创建员工,此接口会发送提醒员工实名的短信，如果通过手机号发现员工已经创建，则不会重新创建，会发送短信提醒员工实名
注意：此接口支持企微组织架构的 openid 创建员工，这种场景下传递明文的企微 openid 到WeworkOpenId字段即可（企微明文的 openid 一定要在应用的可见范围内才行），通过企微创建的员工，会发送企微消息去提醒实名
                 * @param req CreateIntegrationEmployeesRequest
                 * @return CreateIntegrationEmployeesOutcome
                 */
                CreateIntegrationEmployeesOutcome CreateIntegrationEmployees(const Model::CreateIntegrationEmployeesRequest &request);
                void CreateIntegrationEmployeesAsync(const Model::CreateIntegrationEmployeesRequest& request, const CreateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationEmployeesOutcomeCallable CreateIntegrationEmployeesCallable(const Model::CreateIntegrationEmployeesRequest& request);

                /**
                 *此接口（CreateIntegrationRole）用来创建企业自定义的SaaS角色或集团角色。

适用场景1：创建当前企业的自定义SaaS角色或集团角色，并且创建时不进行权限的设置（PermissionGroups 参数不传），角色中的权限内容可通过控制台编辑角色或通过接口 ModifyIntegrationRole 完成更新。

适用场景2：创建当前企业的自定义SaaS角色或集团角色，并且创建时进行权限的设置（PermissionGroups 参数要传），权限树内容 PermissionGroups 可参考接口 DescribeIntegrationRoles 的输出。
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
                 *绑定员工与对应角色
                 * @param req CreateIntegrationUserRolesRequest
                 * @return CreateIntegrationUserRolesOutcome
                 */
                CreateIntegrationUserRolesOutcome CreateIntegrationUserRoles(const Model::CreateIntegrationUserRolesRequest &request);
                void CreateIntegrationUserRolesAsync(const Model::CreateIntegrationUserRolesRequest& request, const CreateIntegrationUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationUserRolesOutcomeCallable CreateIntegrationUserRolesCallable(const Model::CreateIntegrationUserRolesRequest& request);

                /**
                 *此接口（CreateMultiFlowSignQRCode）用于创建一码多扫流程签署二维码。
适用场景：无需填写签署人信息，可通过模板id生成签署二维码，签署人可通过扫描二维码补充签署信息进行实名签署。
常用于提前不知道签署人的身份信息场景，例如：劳务工招工、大批量员工入职等场景。

**本接口适用于发起方没有填写控件的 B2C或者单C模板**

**若是B2C模板,还要满足以下任意一个条件**
- 模板中配置的签署顺序是无序
- B端企业的签署方式是静默签署
- B端企业是非首位签署

 通过一码多扫二维码发起的合同，涉及到的合同回调消息可参考文档[合同发起以及签署相关回调](https://qian.tencent.com/developers/company/callback_types_contracts_sign)

用户通过签署二维码发起合同时，因企业额度不足导致失败 会触发签署二维码相关回调,具体参考文档[签署二维码相关回调](https://qian.tencent.com/developers/company/callback_types_commons#%E7%AD%BE%E7%BD%B2%E4%BA%8C%E7%BB%B4%E7%A0%81%E7%9B%B8%E5%85%B3%E5%9B%9E%E8%B0%83)
                 * @param req CreateMultiFlowSignQRCodeRequest
                 * @return CreateMultiFlowSignQRCodeOutcome
                 */
                CreateMultiFlowSignQRCodeOutcome CreateMultiFlowSignQRCode(const Model::CreateMultiFlowSignQRCodeRequest &request);
                void CreateMultiFlowSignQRCodeAsync(const Model::CreateMultiFlowSignQRCodeRequest& request, const CreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultiFlowSignQRCodeOutcomeCallable CreateMultiFlowSignQRCodeCallable(const Model::CreateMultiFlowSignQRCodeRequest& request);

                /**
                 *通过此接口，创建企业批量签署链接，企业员工点击链接即可跳转控制台进行批量签署。
如果没有UserId，Name和Mobile必填，对应的员工必须在企业下已经实名，且该员工为批量签署合同中的签署方。
                 * @param req CreateOrganizationBatchSignUrlRequest
                 * @return CreateOrganizationBatchSignUrlOutcome
                 */
                CreateOrganizationBatchSignUrlOutcome CreateOrganizationBatchSignUrl(const Model::CreateOrganizationBatchSignUrlRequest &request);
                void CreateOrganizationBatchSignUrlAsync(const Model::CreateOrganizationBatchSignUrlRequest& request, const CreateOrganizationBatchSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrganizationBatchSignUrlOutcomeCallable CreateOrganizationBatchSignUrlCallable(const Model::CreateOrganizationBatchSignUrlRequest& request);

                /**
                 *本接口（CreatePersonAuthCertificateImage）用于创建个人用户证书证明图片
                 * @param req CreatePersonAuthCertificateImageRequest
                 * @return CreatePersonAuthCertificateImageOutcome
                 */
                CreatePersonAuthCertificateImageOutcome CreatePersonAuthCertificateImage(const Model::CreatePersonAuthCertificateImageRequest &request);
                void CreatePersonAuthCertificateImageAsync(const Model::CreatePersonAuthCertificateImageRequest& request, const CreatePersonAuthCertificateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonAuthCertificateImageOutcomeCallable CreatePersonAuthCertificateImageCallable(const Model::CreatePersonAuthCertificateImageRequest& request);

                /**
                 *创建快速发起流程
<br/>适用场景：用户通过API 合同文件及签署信息，并可通过我们返回的URL在页面完成签署控件等信息的编辑与确认，快速发起合同.
<br/>注：该接口文件的resourceId 是通过上传文件之后获取的。
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
                 *发起解除协议，主要应用场景为：基于一份已经签署的合同(签署流程)，进行解除操作。

`注意：原合同必须签署完成后，才能发起解除协议。` <br/>
`注意：只有原合同企业类型的参与人才能发起解除协议，个人不能发起解除协议。`<br/>
`注意：原合同个人类型参与人必须是解除协议的参与人，不能更换其他第三方个人参与解除协议。`<br/>
`注意：如果原合同企业参与人无法参与解除协议，可以指定同企业具有同等权限的企业员工代为处理。`<br/>
`注意：发起解除协议同发起其他企业合同一样，也会参与合同扣费，扣费标准同其他类型合同。`<br/>
`注意：在解除协议发起之后，原合同的状态将转变为解除中。一旦解除协议签署完毕，原合同及解除协议均会转变为已解除状态。`<br/>
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
`1. 如果签署人是在PC端扫码签署，可以通过生成跳转链接自主转换成二维码，让签署人在PC端扫码签署`
`2. 签署链接的有效期为90天，超过有效期链接不可用`

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
                 * @param req CreateSealRequest
                 * @return CreateSealOutcome
                 */
                CreateSealOutcome CreateSeal(const Model::CreateSealRequest &request);
                void CreateSealAsync(const Model::CreateSealRequest& request, const CreateSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSealOutcomeCallable CreateSealCallable(const Model::CreateSealRequest& request);

                /**
                 *对企业员工进行印章授权
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
                 *用来创建页面主题配置
                 * @param req CreateWebThemeConfigRequest
                 * @return CreateWebThemeConfigOutcome
                 */
                CreateWebThemeConfigOutcome CreateWebThemeConfig(const Model::CreateWebThemeConfigRequest &request);
                void CreateWebThemeConfigAsync(const Model::CreateWebThemeConfigRequest& request, const CreateWebThemeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWebThemeConfigOutcomeCallable CreateWebThemeConfigCallable(const Model::CreateWebThemeConfigRequest& request);

                /**
                 *通过此接口，删除企业的部门。
                 * @param req DeleteIntegrationDepartmentRequest
                 * @return DeleteIntegrationDepartmentOutcome
                 */
                DeleteIntegrationDepartmentOutcome DeleteIntegrationDepartment(const Model::DeleteIntegrationDepartmentRequest &request);
                void DeleteIntegrationDepartmentAsync(const Model::DeleteIntegrationDepartmentRequest& request, const DeleteIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntegrationDepartmentOutcomeCallable DeleteIntegrationDepartmentCallable(const Model::DeleteIntegrationDepartmentRequest& request);

                /**
                 *移除员工
这里分两个场景
如果不传交接人的ReceiveUserId或者ReceiveOpenId，则会直接把这个人进行离职
如果传了交接人，会把离职人未处理完的合同交接给交接人后再离职
                 * @param req DeleteIntegrationEmployeesRequest
                 * @return DeleteIntegrationEmployeesOutcome
                 */
                DeleteIntegrationEmployeesOutcome DeleteIntegrationEmployees(const Model::DeleteIntegrationEmployeesRequest &request);
                void DeleteIntegrationEmployeesAsync(const Model::DeleteIntegrationEmployeesRequest& request, const DeleteIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntegrationEmployeesOutcomeCallable DeleteIntegrationEmployeesCallable(const Model::DeleteIntegrationEmployeesRequest& request);

                /**
                 *解绑员工与对应角色关系
                 * @param req DeleteIntegrationRoleUsersRequest
                 * @return DeleteIntegrationRoleUsersOutcome
                 */
                DeleteIntegrationRoleUsersOutcome DeleteIntegrationRoleUsers(const Model::DeleteIntegrationRoleUsersRequest &request);
                void DeleteIntegrationRoleUsersAsync(const Model::DeleteIntegrationRoleUsersRequest& request, const DeleteIntegrationRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntegrationRoleUsersOutcomeCallable DeleteIntegrationRoleUsersCallable(const Model::DeleteIntegrationRoleUsersRequest& request);

                /**
                 *撤销员工持有的印章权限
                 * @param req DeleteSealPoliciesRequest
                 * @return DeleteSealPoliciesOutcome
                 */
                DeleteSealPoliciesOutcome DeleteSealPolicies(const Model::DeleteSealPoliciesRequest &request);
                void DeleteSealPoliciesAsync(const Model::DeleteSealPoliciesRequest& request, const DeleteSealPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSealPoliciesOutcomeCallable DeleteSealPoliciesCallable(const Model::DeleteSealPoliciesRequest& request);

                /**
                 *查询企业扩展服务的开通和授权情况，当前支持查询以下内容：
1. 企业静默签
2. 企业与港澳台居民签署合同
3. 使用手机号验证签署方身份
4. 骑缝章
5. 批量签署能力
                 * @param req DescribeExtendedServiceAuthInfosRequest
                 * @return DescribeExtendedServiceAuthInfosOutcome
                 */
                DescribeExtendedServiceAuthInfosOutcome DescribeExtendedServiceAuthInfos(const Model::DescribeExtendedServiceAuthInfosRequest &request);
                void DescribeExtendedServiceAuthInfosAsync(const Model::DescribeExtendedServiceAuthInfosRequest& request, const DescribeExtendedServiceAuthInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExtendedServiceAuthInfosOutcomeCallable DescribeExtendedServiceAuthInfosCallable(const Model::DescribeExtendedServiceAuthInfosRequest& request);

                /**
                 *查询文件下载URL。
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
每个企业限制日调用量限制：100W，当日超过此限制后再调用接口返回错误
                 * @param req DescribeFlowBriefsRequest
                 * @return DescribeFlowBriefsOutcome
                 */
                DescribeFlowBriefsOutcome DescribeFlowBriefs(const Model::DescribeFlowBriefsRequest &request);
                void DescribeFlowBriefsAsync(const Model::DescribeFlowBriefsRequest& request, const DescribeFlowBriefsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowBriefsOutcomeCallable DescribeFlowBriefsCallable(const Model::DescribeFlowBriefsRequest& request);

                /**
                 *查询流程填写控件内容，可以根据流程Id查询该流程相关联的填写控件信息和填写内容。
                 * @param req DescribeFlowComponentsRequest
                 * @return DescribeFlowComponentsOutcome
                 */
                DescribeFlowComponentsOutcome DescribeFlowComponents(const Model::DescribeFlowComponentsRequest &request);
                void DescribeFlowComponentsAsync(const Model::DescribeFlowComponentsRequest& request, const DescribeFlowComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowComponentsOutcomeCallable DescribeFlowComponentsCallable(const Model::DescribeFlowComponentsRequest& request);

                /**
                 *查询签署报告，返回报告 URL。需调用创建并返回出证报告接口（CreateFlowEvidenceReport）获取报告编号后调用当前接口获取报告链接。
                 * @param req DescribeFlowEvidenceReportRequest
                 * @return DescribeFlowEvidenceReportOutcome
                 */
                DescribeFlowEvidenceReportOutcome DescribeFlowEvidenceReport(const Model::DescribeFlowEvidenceReportRequest &request);
                void DescribeFlowEvidenceReportAsync(const Model::DescribeFlowEvidenceReportRequest& request, const DescribeFlowEvidenceReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowEvidenceReportOutcomeCallable DescribeFlowEvidenceReportCallable(const Model::DescribeFlowEvidenceReportRequest& request);

                /**
                 *查询合同详情
适用场景：可用于主动查询某个合同详情信息。
                 * @param req DescribeFlowInfoRequest
                 * @return DescribeFlowInfoOutcome
                 */
                DescribeFlowInfoOutcome DescribeFlowInfo(const Model::DescribeFlowInfoRequest &request);
                void DescribeFlowInfoAsync(const Model::DescribeFlowInfoRequest& request, const DescribeFlowInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowInfoOutcomeCallable DescribeFlowInfoCallable(const Model::DescribeFlowInfoRequest& request);

                /**
                 *本接口用于查询本企业模板列表。

当模板较多或模板中的控件较多时，可以通过查询模板接口更方便的获取模板列表，以及每个模板内的控件信息。

> **适用场景** 
>
>  该接口常用来配合“模板发起合同-创建电子文档”接口作为前置的接口使用。 
>  一个模板通常会包含以下结构信息
>- 模板基本信息
>- 发起方参与信息Promoter、签署参与方 Recipients，后者会在模板发起合同时用于指定参与方
>- 填写控件 Components
>- 签署控件 SignComponents
>- 生成模板的文件基础信息 FileInfos
                 * @param req DescribeFlowTemplatesRequest
                 * @return DescribeFlowTemplatesOutcome
                 */
                DescribeFlowTemplatesOutcome DescribeFlowTemplates(const Model::DescribeFlowTemplatesRequest &request);
                void DescribeFlowTemplatesAsync(const Model::DescribeFlowTemplatesRequest& request, const DescribeFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowTemplatesOutcomeCallable DescribeFlowTemplatesCallable(const Model::DescribeFlowTemplatesRequest& request);

                /**
                 *通过此接口，查询企业的部门，支持查询单个部门节点或单个部门节点及一级子节点部门列表。
                 * @param req DescribeIntegrationDepartmentsRequest
                 * @return DescribeIntegrationDepartmentsOutcome
                 */
                DescribeIntegrationDepartmentsOutcome DescribeIntegrationDepartments(const Model::DescribeIntegrationDepartmentsRequest &request);
                void DescribeIntegrationDepartmentsAsync(const Model::DescribeIntegrationDepartmentsRequest& request, const DescribeIntegrationDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationDepartmentsOutcomeCallable DescribeIntegrationDepartmentsCallable(const Model::DescribeIntegrationDepartmentsRequest& request);

                /**
                 *查询企业员工列表，每次返回的数据量最大为20
                 * @param req DescribeIntegrationEmployeesRequest
                 * @return DescribeIntegrationEmployeesOutcome
                 */
                DescribeIntegrationEmployeesOutcome DescribeIntegrationEmployees(const Model::DescribeIntegrationEmployeesRequest &request);
                void DescribeIntegrationEmployeesAsync(const Model::DescribeIntegrationEmployeesRequest& request, const DescribeIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationEmployeesOutcomeCallable DescribeIntegrationEmployeesCallable(const Model::DescribeIntegrationEmployeesRequest& request);

                /**
                 *集团企业统一使用主代子进行操作，无需根据子企业账号进行转化查询，该接口需要屏蔽下线

通过子企业影子账号查询主企业员工账号
                 * @param req DescribeIntegrationMainOrganizationUserRequest
                 * @return DescribeIntegrationMainOrganizationUserOutcome
                 */
                DescribeIntegrationMainOrganizationUserOutcome DescribeIntegrationMainOrganizationUser(const Model::DescribeIntegrationMainOrganizationUserRequest &request);
                void DescribeIntegrationMainOrganizationUserAsync(const Model::DescribeIntegrationMainOrganizationUserRequest& request, const DescribeIntegrationMainOrganizationUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationMainOrganizationUserOutcomeCallable DescribeIntegrationMainOrganizationUserCallable(const Model::DescribeIntegrationMainOrganizationUserRequest& request);

                /**
                 *分页查询企业角色列表，法人的角色是系统保留角色，不会返回，按照角色创建时间升序排列
                 * @param req DescribeIntegrationRolesRequest
                 * @return DescribeIntegrationRolesOutcome
                 */
                DescribeIntegrationRolesOutcome DescribeIntegrationRoles(const Model::DescribeIntegrationRolesRequest &request);
                void DescribeIntegrationRolesAsync(const Model::DescribeIntegrationRolesRequest& request, const DescribeIntegrationRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationRolesOutcomeCallable DescribeIntegrationRolesCallable(const Model::DescribeIntegrationRolesRequest& request);

                /**
                 *此API接口用户查询加入集团的成员企业
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
                 *通过AuthCode查询用户是否实名
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
                 *查询转换任务的状态。转换任务Id通过发起转换任务接口（CreateConvertTaskApi）获取。
注意：大文件转换所需的时间可能会比较长。
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
                 *通过此接口，更新企业的部门信息，支持更新部门名、客户系统部门ID、部门序列号。
                 * @param req ModifyIntegrationDepartmentRequest
                 * @return ModifyIntegrationDepartmentOutcome
                 */
                ModifyIntegrationDepartmentOutcome ModifyIntegrationDepartment(const Model::ModifyIntegrationDepartmentRequest &request);
                void ModifyIntegrationDepartmentAsync(const Model::ModifyIntegrationDepartmentRequest& request, const ModifyIntegrationDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIntegrationDepartmentOutcomeCallable ModifyIntegrationDepartmentCallable(const Model::ModifyIntegrationDepartmentRequest& request);

                /**
                 *此接口（ModifyIntegrationRole）用来更新企业自定义的SaaS角色或集团角色。

适用场景1：更新当前企业的自定义SaaS角色或集团角色，并且更新时不进行角色中权限的更新（PermissionGroups 参数不传）。

适用场景2：更新当前企业的自定义SaaS角色或集团角色，并且更新时进行角色中权限的设置（PermissionGroups 参数要传），权限树内容 PermissionGroups 可参考接口 DescribeIntegrationRoles 的输出。
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
                 *此接口用于启动流程。它是模板发起合同的最后一步。
在[创建签署流程](https://qian.tencent.com/developers/companyApis/startFlows/CreateFlow)和[创建电子文档](https://qian.tencent.com/developers/companyApis/startFlows/CreateDocument)之后，用于开始整个合同流程,  推进流程进入到签署环节。

<svg id="SvgjsSvg1077" width="304" height="505" xmlns="http://www.w3.org/2000/svg" version="1.1" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:svgjs="http://svgjs.com/svgjs"><defs id="SvgjsDefs1078"><pattern patternUnits="userSpaceOnUse" id="pattern_mark_0" width="300" height="300"><text x="150" y="100" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><pattern patternUnits="userSpaceOnUse" id="pattern_mark_1" width="300" height="300"><text x="150" y="200" fill="rgba(229,229,229,0.8)" font-size="18" transform="rotate(-45, 150, 150)" style="dominant-baseline: middle; text-anchor: middle;"></text></pattern><marker id="SvgjsMarker1096" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1097" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker><marker id="SvgjsMarker1108" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1109" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker><marker id="SvgjsMarker1120" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1121" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker><marker id="SvgjsMarker1140" markerWidth="12" markerHeight="8" refX="9" refY="4" viewBox="0 0 12 8" orient="auto" markerUnits="userSpaceOnUse" stroke-dasharray="0,0"><path id="SvgjsPath1141" d="M0,0 L12,4 L0,8 L0,0" fill="#323232" stroke="#323232" stroke-width="1"></path></marker></defs><rect id="svgbackgroundid" width="304" height="505" fill="transparent"></rect><rect id="SvgjsRect1080" width="304" height="505" fill="url(#pattern_mark_0)"></rect><rect id="SvgjsRect1081" width="304" height="505" fill="url(#pattern_mark_1)"></rect><g id="SvgjsG1082" transform="translate(58,121)"><path id="SvgjsPath1083" d="M 0 0L 221 0L 221 262L 0 262Z" stroke-dasharray="3,4" stroke="rgba(33,41,48,1)" stroke-width="1" fill-opacity="1" fill="#ffffff"></path><g id="SvgjsG1084"><text id="SvgjsText1085" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="201px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="120.375" transform="rotate(0)"></text></g></g><g id="SvgjsG1086" transform="translate(88,140.00000000000006)"><path id="SvgjsPath1087" d="M 0 0L 161 0L 161 48L 0 48Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1088"><text id="SvgjsText1089" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="141px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="4.875" transform="rotate(0)"><tspan id="SvgjsTspan1090" dy="16" x="80.5"><tspan id="SvgjsTspan1091" style="text-decoration:;fill: rgb(28, 30, 33);">CreateFlow</tspan></tspan><tspan id="SvgjsTspan1092" dy="16" x="80.5"><tspan id="SvgjsTspan1093" style="text-decoration:;">创建签署流程</tspan></tspan></text></g></g><g id="SvgjsG1094"><path id="SvgjsPath1095" d="M168.5 188.50000000000006L168.5 200.83333333333337L168.5 200.83333333333337L168.5 211.86666666666667" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1096)"></path></g><g id="SvgjsG1098" transform="translate(104.25,213.66666666666669)"><path id="SvgjsPath1099" d="M 0 0L 128.5 0L 128.5 55L 0 55Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1100"><text id="SvgjsText1101" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="109px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="8.375" transform="rotate(0)"><tspan id="SvgjsTspan1102" dy="16" x="64.5"><tspan id="SvgjsTspan1103" style="text-decoration:;fill: rgb(28, 30, 33);">CreateDocument</tspan></tspan><tspan id="SvgjsTspan1104" dy="16" x="64.5"><tspan id="SvgjsTspan1105" style="text-decoration:;">创建电子文档</tspan></tspan></text></g></g><g id="SvgjsG1106"><path id="SvgjsPath1107" d="M168.5 269.16666666666674L168.5 281.5L168.5 281.5L168.5 292.5333333333334" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1108)"></path></g><g id="SvgjsG1110" transform="translate(96.75,294.33333333333337)"><path id="SvgjsPath1111" d="M 0 0L 143.5 0L 143.5 65L 0 65Z" stroke="rgba(86,146,48,1)" stroke-width="1" fill-opacity="1" fill="#e7ebed"></path><g id="SvgjsG1112"><text id="SvgjsText1113" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="124px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="13.375" transform="rotate(0)"><tspan id="SvgjsTspan1114" dy="16" x="72"><tspan id="SvgjsTspan1115" style="text-decoration:;fill: rgb(28, 30, 33);">StartFlow</tspan></tspan><tspan id="SvgjsTspan1116" dy="16" x="72"><tspan id="SvgjsTspan1117" style="text-decoration:;">发起签署流程</tspan></tspan></text></g></g><g id="SvgjsG1118"><path id="SvgjsPath1119" d="M168.5 359.83333333333337L168.5 392.16666666666674L168.5 392.16666666666674L168.5 423.20000000000005" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1120)"></path></g><g id="SvgjsG1122" transform="translate(106.25,425)"><path id="SvgjsPath1123" d="M 0 0L 124.5 0L 124.5 55L 0 55Z" stroke="rgba(33,41,48,1)" stroke-width="1" fill-opacity="1" fill="#ffffff"></path><g id="SvgjsG1124"><text id="SvgjsText1125" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="105px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="8.375" transform="rotate(0)"><tspan id="SvgjsTspan1126" dy="16" x="62.5"><tspan id="SvgjsTspan1127" style="text-decoration:;">开始签署</tspan></tspan><tspan id="SvgjsTspan1128" dy="16" x="62.5"><tspan id="SvgjsTspan1129" style="text-decoration:;">(小程序/H5等)</tspan></tspan></text></g></g><g id="SvgjsG1130" transform="translate(120.5,25)"><path id="SvgjsPath1131" d="M 0 0L 96 0L 96 54L 0 54Z" stroke="rgba(33,41,48,1)" stroke-width="1" fill-opacity="1" fill="#ffffff"></path><g id="SvgjsG1132"><text id="SvgjsText1133" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="76px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="7.875" transform="rotate(0)"><tspan id="SvgjsTspan1134" dy="16" x="48"><tspan id="SvgjsTspan1135" style="text-decoration:;">控制台创建</tspan></tspan><tspan id="SvgjsTspan1136" dy="16" x="48"><tspan id="SvgjsTspan1137" style="text-decoration:;">模板</tspan></tspan></text></g></g><g id="SvgjsG1138"><path id="SvgjsPath1139" d="M168.5 79.5L168.5 109.5L168.5 109.5L168.5 138.20000000000005" stroke="#323232" stroke-width="1" fill="none" marker-end="url(#SvgjsMarker1140)"></path></g><g id="SvgjsG1142" transform="translate(25,114)"><path id="SvgjsPath1143" d="M 0 0L 100 0L 100 40L 0 40Z" stroke="none" fill="none"></path><g id="SvgjsG1144"><text id="SvgjsText1145" font-family="微软雅黑" text-anchor="middle" font-size="13px" width="100px" fill="#323232" font-weight="400" align="middle" lineHeight="125%" anchor="middle" family="微软雅黑" size="13px" weight="400" font-style="" opacity="1" y="9.375" transform="rotate(0)"><tspan id="SvgjsTspan1146" dy="16" x="50"><tspan id="SvgjsTspan1147" style="text-decoration:;">API</tspan></tspan></text></g></g></svg>
                 * @param req StartFlowRequest
                 * @return StartFlowOutcome
                 */
                StartFlowOutcome StartFlow(const Model::StartFlowRequest &request);
                void StartFlowAsync(const Model::StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartFlowOutcomeCallable StartFlowCallable(const Model::StartFlowRequest& request);

                /**
                 *将存在绑定关系的电子签系统员工userId与客户系统员工openId进行解绑
                 * @param req UnbindEmployeeUserIdWithClientOpenIdRequest
                 * @return UnbindEmployeeUserIdWithClientOpenIdOutcome
                 */
                UnbindEmployeeUserIdWithClientOpenIdOutcome UnbindEmployeeUserIdWithClientOpenId(const Model::UnbindEmployeeUserIdWithClientOpenIdRequest &request);
                void UnbindEmployeeUserIdWithClientOpenIdAsync(const Model::UnbindEmployeeUserIdWithClientOpenIdRequest& request, const UnbindEmployeeUserIdWithClientOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindEmployeeUserIdWithClientOpenIdOutcomeCallable UnbindEmployeeUserIdWithClientOpenIdCallable(const Model::UnbindEmployeeUserIdWithClientOpenIdRequest& request);

                /**
                 *更新员工信息(姓名，手机号，邮件、部门)，用户实名后无法更改姓名与手机号。
可进行批量操作，Employees中的userID与openID二选一必填
                 * @param req UpdateIntegrationEmployeesRequest
                 * @return UpdateIntegrationEmployeesOutcome
                 */
                UpdateIntegrationEmployeesOutcome UpdateIntegrationEmployees(const Model::UpdateIntegrationEmployeesRequest &request);
                void UpdateIntegrationEmployeesAsync(const Model::UpdateIntegrationEmployeesRequest& request, const UpdateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateIntegrationEmployeesOutcomeCallable UpdateIntegrationEmployeesCallable(const Model::UpdateIntegrationEmployeesRequest& request);

                /**
                 *此接口（UploadFiles）用于文件上传。<br/>
适用场景：用于生成pdf资源编号（FileIds）来配合“用PDF创建流程”接口使用，使用场景可详见“用PDF创建流程”接口说明。<br/>

其中上传的文件，图片类型(png/jpg/jpeg)大小限制为5M，其他大小限制为60M。<br/>
调用时需要设置Domain/接口请求域名为 file.ess.tencent.cn,代码示例：<br/>
HttpProfile httpProfile = new HttpProfile();<br/>
httpProfile.setEndpoint("file.test.ess.tencent.cn");<br/>
                 * @param req UploadFilesRequest
                 * @return UploadFilesOutcome
                 */
                UploadFilesOutcome UploadFiles(const Model::UploadFilesRequest &request);
                void UploadFilesAsync(const Model::UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFilesOutcomeCallable UploadFilesCallable(const Model::UploadFilesRequest& request);

                /**
                 *对流程的合同文件进行数字签名验证，判断文件是否被篡改。
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
