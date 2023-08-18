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
                 *用于撤销签署流程
适用场景：如果某个合同流程当前至少还有一方没有签署，则可通过该接口取消该合同流程。常用于合同发错、内容填错，需要及时撤销的场景。
注：如果合同流程中的参与方均已签署完毕，则无法通过该接口撤销合同。
                 * @param req CancelFlowRequest
                 * @return CancelFlowOutcome
                 */
                CancelFlowOutcome CancelFlow(const Model::CancelFlowRequest &request);
                void CancelFlowAsync(const Model::CancelFlowRequest& request, const CancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelFlowOutcomeCallable CancelFlowCallable(const Model::CancelFlowRequest& request);

                /**
                 *此接口（CancelMultiFlowSignQRCode）用于取消一码多扫二维码。该接口对传入的二维码ID，若还在有效期内，可以提前失效。
                 * @param req CancelMultiFlowSignQRCodeRequest
                 * @return CancelMultiFlowSignQRCodeOutcome
                 */
                CancelMultiFlowSignQRCodeOutcome CancelMultiFlowSignQRCode(const Model::CancelMultiFlowSignQRCodeRequest &request);
                void CancelMultiFlowSignQRCodeAsync(const Model::CancelMultiFlowSignQRCodeRequest& request, const CancelMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelMultiFlowSignQRCodeOutcomeCallable CancelMultiFlowSignQRCodeCallable(const Model::CancelMultiFlowSignQRCodeRequest& request);

                /**
                 *此接口（CancelUserAutoSignEnableUrl）用来撤销发送给个人用户的自动签开通链接，撤销后对应的个人用户开通链接失效。若个人用户已经完成开通，将无法撤销。（处方单场景专用，使用此接口请与客户经理确认）
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
                 *上传了word、excel、图片文件后，通过该接口发起文件转换任务，将word、excel、图片文件转换为pdf文件。
注：如果是集团代子企业发起任务场景，可以通过对Agent参数（未列在入参列表）设置代理的相关应用信息来支持，Agent参数设置可以参考CreateFlow接口的Agent相关说明。
                 * @param req CreateConvertTaskApiRequest
                 * @return CreateConvertTaskApiOutcome
                 */
                CreateConvertTaskApiOutcome CreateConvertTaskApi(const Model::CreateConvertTaskApiRequest &request);
                void CreateConvertTaskApiAsync(const Model::CreateConvertTaskApiRequest& request, const CreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConvertTaskApiOutcomeCallable CreateConvertTaskApiCallable(const Model::CreateConvertTaskApiRequest& request);

                /**
                 *创建签署流程电子文档
适用场景：见创建签署流程接口。
注：该接口需要给对应的流程指定一个模板id，并且填充该模板中需要补充的信息。是“发起流程”接口的前置接口。
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
适用场景：在标准制式的合同场景中，可通过提前预制好模板文件，每次调用模板文件的id，补充合同内容信息及签署信息生成电子合同。<br/>
注：该接口是通过模板生成合同流程的前置接口，先创建一个不包含签署文件的流程。<br/>
配合“创建电子文档”接口和“发起流程”接口使用。<br/>
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
                 *创建出证报告，返回报告 ID。需要配合出证套餐才能调用。
出证需要一定时间，建议调用创建出证24小时之后再通过DescribeFlowEvidenceReport进行查询。
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
                 *指定需要批量催办的签署流程Id，批量催办合同，最多100个; 接口失败后返回错误信息
注意:
该接口不可直接调用，请联系客户经理申请使用
仅能催办当前状态为“待签署”的签署人，且只能催办一次
发起合同时，签署人的NotifyType需设置为sms，否则无法催办
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
                 *创建个人H5签署链接，请联系客户经理申请开通使用, 否则调用会返回失败 <br/>

该接口用于发起合同后，生成个人签署人的签署链接, 暂时不支持企业端签署 <br/>

注意：该接口目前签署人类型仅支持个人签署方（PERSON） <br/>
注意：该接口可生成签署链接的C端签署人必须仅有手写签名和时间类型的签署控件<br/>
注意：该接口返回的签署链接是用于APP集成的场景，支持APP打开或浏览器直接打开，不支持微信小程序嵌入。微信小程序请使用小程序跳转或半屏弹窗的方式<br/>
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
                 *绑定员工与对应角色
                 * @param req CreateIntegrationUserRolesRequest
                 * @return CreateIntegrationUserRolesOutcome
                 */
                CreateIntegrationUserRolesOutcome CreateIntegrationUserRoles(const Model::CreateIntegrationUserRolesRequest &request);
                void CreateIntegrationUserRolesAsync(const Model::CreateIntegrationUserRolesRequest& request, const CreateIntegrationUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationUserRolesOutcomeCallable CreateIntegrationUserRolesCallable(const Model::CreateIntegrationUserRolesRequest& request);

                /**
                 *此接口（CreateMultiFlowSignQRCode）用于创建一码多扫流程签署二维码。
适用场景：无需填写签署人信息，可通过模板id生成签署二维码，签署人可通过扫描二维码补充签署信息进行实名签署。常用于提前不知道签署人的身份信息场景，例如：劳务工招工、大批量员工入职等场景。

**本接口适用于发起方没有填写控件的 B2C或者单C模板**

**若是B2C模板,还要满足以下任意一个条件**
- 模板中配置的签署顺序是无序
- B端企业的签署方式是静默签署
- B端企业是非首位签署
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
                 * @param req CreateReleaseFlowRequest
                 * @return CreateReleaseFlowOutcome
                 */
                CreateReleaseFlowOutcome CreateReleaseFlow(const Model::CreateReleaseFlowRequest &request);
                void CreateReleaseFlowAsync(const Model::CreateReleaseFlowRequest& request, const CreateReleaseFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReleaseFlowOutcomeCallable CreateReleaseFlowCallable(const Model::CreateReleaseFlowRequest& request);

                /**
                 *获取小程序签署链接

适用场景：如果需要签署人在自己的APP、小程序、H5应用中签署，可以通过此接口获取跳转腾讯电子签小程序的签署跳转链接。

注：如果签署人是在PC端扫码签署，可以通过生成跳转链接自主转换成二维码，让签署人在PC端扫码签署。


跳转到小程序的实现，参考官方文档（分为<a href="https://developers.weixin.qq.com/miniprogram/dev/api/navigate/wx.navigateToMiniProgram.html">全屏</a>、<a href="https://developers.weixin.qq.com/miniprogram/dev/framework/open-ability/openEmbeddedMiniProgram.html">半屏</a>两种方式）


如您需要自主配置小程序跳转链接，请参考: <a href="https://cloud.tencent.com/document/product/1323/74774">跳转小程序链接配置说明</a>
                 * @param req CreateSchemeUrlRequest
                 * @return CreateSchemeUrlOutcome
                 */
                CreateSchemeUrlOutcome CreateSchemeUrl(const Model::CreateSchemeUrlRequest &request);
                void CreateSchemeUrlAsync(const Model::CreateSchemeUrlRequest& request, const CreateSchemeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchemeUrlOutcomeCallable CreateSchemeUrlCallable(const Model::CreateSchemeUrlRequest& request);

                /**
                 *创建电子印章
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
                 *企业方可以通过此接口获取个人用户开启自动签的跳转链接（处方单场景专用，使用此接口请与客户经理确认）
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
                 *查询企业扩展服务授权信息，目前支持查询：企业静默签，企业与港澳台居民签署合同，使用手机号验证签署方身份，骑缝章，批量签署能力是否已经开通
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
                 *查询出证报告，返回报告 URL。出证报告编号通过CreateFlowEvidenceReport接口获取。
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
                 *企业方可以通过此接口查询个人用户自动签开启状态。（处方单场景专用，使用此接口请与客户经理确认）
                 * @param req DescribeUserAutoSignStatusRequest
                 * @return DescribeUserAutoSignStatusOutcome
                 */
                DescribeUserAutoSignStatusOutcome DescribeUserAutoSignStatus(const Model::DescribeUserAutoSignStatusRequest &request);
                void DescribeUserAutoSignStatusAsync(const Model::DescribeUserAutoSignStatusRequest& request, const DescribeUserAutoSignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserAutoSignStatusOutcomeCallable DescribeUserAutoSignStatusCallable(const Model::DescribeUserAutoSignStatusRequest& request);

                /**
                 *企业方可以通过此接口关闭个人的自动签功能（处方单场景专用，使用此接口请与客户经理确认）
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
                 *新增/删除应用callbackinfo
callbackinfo包含： 回调地址和签名key
操作：新增/删除
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
                 *此接口用于发起流程
适用场景：见创建签署流程接口。
注：该接口是“创建电子文档”接口的后置接口，用于激活包含完整合同信息（模板及内容信息）的流程。激活后的流程就是一份待签署的电子合同。
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
                 *对流程的合同文件进行验证，判断文件是否合法。
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
