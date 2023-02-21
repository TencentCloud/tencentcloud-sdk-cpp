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
#include <tencentcloud/ess/v20201111/model/CancelFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/CancelFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/CancelMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/CancelMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateBatchCancelFlowUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateBatchCancelFlowUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateConvertTaskApiRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateConvertTaskApiResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateDocumentRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateDocumentResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowApproversRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowApproversResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowByFilesRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowByFilesResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowEvidenceReportRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowEvidenceReportResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowRemindsRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowRemindsResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowSignReviewRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowSignReviewResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowSignUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateFlowSignUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationEmployeesRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateIntegrationEmployeesResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateMultiFlowSignQRCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateMultiFlowSignQRCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/CreatePrepareFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/CreatePrepareFlowResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateSchemeUrlRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateSchemeUrlResponse.h>
#include <tencentcloud/ess/v20201111/model/CreateSealPolicyRequest.h>
#include <tencentcloud/ess/v20201111/model/CreateSealPolicyResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationEmployeesRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteIntegrationEmployeesResponse.h>
#include <tencentcloud/ess/v20201111/model/DeleteSealPoliciesRequest.h>
#include <tencentcloud/ess/v20201111/model/DeleteSealPoliciesResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFileUrlsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFileUrlsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowBriefsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowBriefsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowEvidenceReportRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowEvidenceReportResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowInfoRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowInfoResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowTemplatesRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeFlowTemplatesResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationEmployeesRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationEmployeesResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationMainOrganizationUserRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeIntegrationMainOrganizationUserResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationSealsRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeOrganizationSealsResponse.h>
#include <tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeRequest.h>
#include <tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeResponse.h>
#include <tencentcloud/ess/v20201111/model/GetTaskResultApiRequest.h>
#include <tencentcloud/ess/v20201111/model/GetTaskResultApiResponse.h>
#include <tencentcloud/ess/v20201111/model/StartFlowRequest.h>
#include <tencentcloud/ess/v20201111/model/StartFlowResponse.h>
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

                typedef Outcome<Core::Error, Model::CancelFlowResponse> CancelFlowOutcome;
                typedef std::future<CancelFlowOutcome> CancelFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CancelFlowRequest&, CancelFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelMultiFlowSignQRCodeResponse> CancelMultiFlowSignQRCodeOutcome;
                typedef std::future<CancelMultiFlowSignQRCodeOutcome> CancelMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CancelMultiFlowSignQRCodeRequest&, CancelMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchCancelFlowUrlResponse> CreateBatchCancelFlowUrlOutcome;
                typedef std::future<CreateBatchCancelFlowUrlOutcome> CreateBatchCancelFlowUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateBatchCancelFlowUrlRequest&, CreateBatchCancelFlowUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchCancelFlowUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConvertTaskApiResponse> CreateConvertTaskApiOutcome;
                typedef std::future<CreateConvertTaskApiOutcome> CreateConvertTaskApiOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateConvertTaskApiRequest&, CreateConvertTaskApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConvertTaskApiAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocumentResponse> CreateDocumentOutcome;
                typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateDocumentRequest&, CreateDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocumentAsyncHandler;
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
                typedef Outcome<Core::Error, Model::CreateFlowRemindsResponse> CreateFlowRemindsOutcome;
                typedef std::future<CreateFlowRemindsOutcome> CreateFlowRemindsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowRemindsRequest&, CreateFlowRemindsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowRemindsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowSignReviewResponse> CreateFlowSignReviewOutcome;
                typedef std::future<CreateFlowSignReviewOutcome> CreateFlowSignReviewOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowSignReviewRequest&, CreateFlowSignReviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowSignReviewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowSignUrlResponse> CreateFlowSignUrlOutcome;
                typedef std::future<CreateFlowSignUrlOutcome> CreateFlowSignUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateFlowSignUrlRequest&, CreateFlowSignUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowSignUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIntegrationEmployeesResponse> CreateIntegrationEmployeesOutcome;
                typedef std::future<CreateIntegrationEmployeesOutcome> CreateIntegrationEmployeesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateIntegrationEmployeesRequest&, CreateIntegrationEmployeesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntegrationEmployeesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMultiFlowSignQRCodeResponse> CreateMultiFlowSignQRCodeOutcome;
                typedef std::future<CreateMultiFlowSignQRCodeOutcome> CreateMultiFlowSignQRCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateMultiFlowSignQRCodeRequest&, CreateMultiFlowSignQRCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMultiFlowSignQRCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrepareFlowResponse> CreatePrepareFlowOutcome;
                typedef std::future<CreatePrepareFlowOutcome> CreatePrepareFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreatePrepareFlowRequest&, CreatePrepareFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrepareFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchemeUrlResponse> CreateSchemeUrlOutcome;
                typedef std::future<CreateSchemeUrlOutcome> CreateSchemeUrlOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateSchemeUrlRequest&, CreateSchemeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchemeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSealPolicyResponse> CreateSealPolicyOutcome;
                typedef std::future<CreateSealPolicyOutcome> CreateSealPolicyOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::CreateSealPolicyRequest&, CreateSealPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSealPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIntegrationEmployeesResponse> DeleteIntegrationEmployeesOutcome;
                typedef std::future<DeleteIntegrationEmployeesOutcome> DeleteIntegrationEmployeesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DeleteIntegrationEmployeesRequest&, DeleteIntegrationEmployeesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntegrationEmployeesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSealPoliciesResponse> DeleteSealPoliciesOutcome;
                typedef std::future<DeleteSealPoliciesOutcome> DeleteSealPoliciesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DeleteSealPoliciesRequest&, DeleteSealPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSealPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileUrlsResponse> DescribeFileUrlsOutcome;
                typedef std::future<DescribeFileUrlsOutcome> DescribeFileUrlsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFileUrlsRequest&, DescribeFileUrlsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileUrlsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowBriefsResponse> DescribeFlowBriefsOutcome;
                typedef std::future<DescribeFlowBriefsOutcome> DescribeFlowBriefsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowBriefsRequest&, DescribeFlowBriefsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowBriefsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowEvidenceReportResponse> DescribeFlowEvidenceReportOutcome;
                typedef std::future<DescribeFlowEvidenceReportOutcome> DescribeFlowEvidenceReportOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowEvidenceReportRequest&, DescribeFlowEvidenceReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowEvidenceReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowInfoResponse> DescribeFlowInfoOutcome;
                typedef std::future<DescribeFlowInfoOutcome> DescribeFlowInfoOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowInfoRequest&, DescribeFlowInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowTemplatesResponse> DescribeFlowTemplatesOutcome;
                typedef std::future<DescribeFlowTemplatesOutcome> DescribeFlowTemplatesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeFlowTemplatesRequest&, DescribeFlowTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationEmployeesResponse> DescribeIntegrationEmployeesOutcome;
                typedef std::future<DescribeIntegrationEmployeesOutcome> DescribeIntegrationEmployeesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeIntegrationEmployeesRequest&, DescribeIntegrationEmployeesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationEmployeesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIntegrationMainOrganizationUserResponse> DescribeIntegrationMainOrganizationUserOutcome;
                typedef std::future<DescribeIntegrationMainOrganizationUserOutcome> DescribeIntegrationMainOrganizationUserOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeIntegrationMainOrganizationUserRequest&, DescribeIntegrationMainOrganizationUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIntegrationMainOrganizationUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationGroupOrganizationsResponse> DescribeOrganizationGroupOrganizationsOutcome;
                typedef std::future<DescribeOrganizationGroupOrganizationsOutcome> DescribeOrganizationGroupOrganizationsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeOrganizationGroupOrganizationsRequest&, DescribeOrganizationGroupOrganizationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationGroupOrganizationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationSealsResponse> DescribeOrganizationSealsOutcome;
                typedef std::future<DescribeOrganizationSealsOutcome> DescribeOrganizationSealsOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeOrganizationSealsRequest&, DescribeOrganizationSealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationSealsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeThirdPartyAuthCodeResponse> DescribeThirdPartyAuthCodeOutcome;
                typedef std::future<DescribeThirdPartyAuthCodeOutcome> DescribeThirdPartyAuthCodeOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::DescribeThirdPartyAuthCodeRequest&, DescribeThirdPartyAuthCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThirdPartyAuthCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskResultApiResponse> GetTaskResultApiOutcome;
                typedef std::future<GetTaskResultApiOutcome> GetTaskResultApiOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::GetTaskResultApiRequest&, GetTaskResultApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskResultApiAsyncHandler;
                typedef Outcome<Core::Error, Model::StartFlowResponse> StartFlowOutcome;
                typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::StartFlowRequest&, StartFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFilesResponse> UploadFilesOutcome;
                typedef std::future<UploadFilesOutcome> UploadFilesOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::UploadFilesRequest&, UploadFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyPdfResponse> VerifyPdfOutcome;
                typedef std::future<VerifyPdfOutcome> VerifyPdfOutcomeCallable;
                typedef std::function<void(const EssClient*, const Model::VerifyPdfRequest&, VerifyPdfOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPdfAsyncHandler;



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
                 *电子签企业版：指定需要批量撤回的签署流程Id，获取批量撤销链接
客户指定需要撤回的签署流程Id，最多100个，超过100不处理；接口调用成功返回批量撤回合同的链接，通过链接跳转到电子签小程序完成批量撤回
                 * @param req CreateBatchCancelFlowUrlRequest
                 * @return CreateBatchCancelFlowUrlOutcome
                 */
                CreateBatchCancelFlowUrlOutcome CreateBatchCancelFlowUrl(const Model::CreateBatchCancelFlowUrlRequest &request);
                void CreateBatchCancelFlowUrlAsync(const Model::CreateBatchCancelFlowUrlRequest& request, const CreateBatchCancelFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchCancelFlowUrlOutcomeCallable CreateBatchCancelFlowUrlCallable(const Model::CreateBatchCancelFlowUrlRequest& request);

                /**
                 *创建文件转换任务
                 * @param req CreateConvertTaskApiRequest
                 * @return CreateConvertTaskApiOutcome
                 */
                CreateConvertTaskApiOutcome CreateConvertTaskApi(const Model::CreateConvertTaskApiRequest &request);
                void CreateConvertTaskApiAsync(const Model::CreateConvertTaskApiRequest& request, const CreateConvertTaskApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConvertTaskApiOutcomeCallable CreateConvertTaskApiCallable(const Model::CreateConvertTaskApiRequest& request);

                /**
                 *创建签署流程电子文档
适用场景：见创建签署流程接口。x0b
注：该接口需要给对应的流程指定一个模板id，并且填充该模板中需要补充的信息。是“发起流程”接口的前置接口。
                 * @param req CreateDocumentRequest
                 * @return CreateDocumentOutcome
                 */
                CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest &request);
                void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request);

                /**
                 *创建签署流程
适用场景：在标准制式的合同场景中，可通过提前预制好模板文件，每次调用模板文件的id，补充合同内容信息及签署信息生成电子合同。
注：该接口是通过模板生成合同流程的前置接口，先创建一个不包含签署文件的流程。配合“创建电子文档”接口和“发起流程”接口使用。
                 * @param req CreateFlowRequest
                 * @return CreateFlowOutcome
                 */
                CreateFlowOutcome CreateFlow(const Model::CreateFlowRequest &request);
                void CreateFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowOutcomeCallable CreateFlowCallable(const Model::CreateFlowRequest& request);

                /**
                 *补充签署流程本企业签署人信息
适用场景：在通过模板或者文件发起合同时，若未指定本企业签署人信息，则流程发起后，可以调用此接口补充签署人。
同一签署人可以补充多个员工作为候选签署人,最终签署人取决于谁先领取合同完成签署。

注：目前暂时只支持补充来源于企业微信的员工作为候选签署人
                 * @param req CreateFlowApproversRequest
                 * @return CreateFlowApproversOutcome
                 */
                CreateFlowApproversOutcome CreateFlowApprovers(const Model::CreateFlowApproversRequest &request);
                void CreateFlowApproversAsync(const Model::CreateFlowApproversRequest& request, const CreateFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowApproversOutcomeCallable CreateFlowApproversCallable(const Model::CreateFlowApproversRequest& request);

                /**
                 *此接口（CreateFlowByFiles）用来通过上传后的pdf资源编号来创建待签署的合同流程。
适用场景1：适用非制式的合同文件签署。一般开发者自己有完整的签署文件，可以通过该接口传入完整的PDF文件及流程信息生成待签署的合同流程。
适用场景2：可通过该接口传入制式合同文件，同时在指定位置添加签署控件。可以起到接口创建临时模板的效果。如果是标准的制式文件，建议使用模板功能生成模板ID进行合同流程的生成。
注意事项：该接口需要依赖“多文件上传”接口生成pdf资源编号（FileIds）进行使用。
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
                 *指定需要批量催办的签署流程Id，批量催办合同，最多100个; 接口失败后返回错误信息
注意:
该接口不可直接调用，需要联系运营开通后方可调用。
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
                 *创建签署链接，需要联系运营人员开白后才可使用
                 * @param req CreateFlowSignUrlRequest
                 * @return CreateFlowSignUrlOutcome
                 */
                CreateFlowSignUrlOutcome CreateFlowSignUrl(const Model::CreateFlowSignUrlRequest &request);
                void CreateFlowSignUrlAsync(const Model::CreateFlowSignUrlRequest& request, const CreateFlowSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowSignUrlOutcomeCallable CreateFlowSignUrlCallable(const Model::CreateFlowSignUrlRequest& request);

                /**
                 *创建员工
                 * @param req CreateIntegrationEmployeesRequest
                 * @return CreateIntegrationEmployeesOutcome
                 */
                CreateIntegrationEmployeesOutcome CreateIntegrationEmployees(const Model::CreateIntegrationEmployeesRequest &request);
                void CreateIntegrationEmployeesAsync(const Model::CreateIntegrationEmployeesRequest& request, const CreateIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIntegrationEmployeesOutcomeCallable CreateIntegrationEmployeesCallable(const Model::CreateIntegrationEmployeesRequest& request);

                /**
                 *此接口（CreateMultiFlowSignQRCode）用于创建一码多扫流程签署二维码。
适用场景：无需填写签署人信息，可通过模板id生成签署二维码，签署人可通过扫描二维码补充签署信息进行实名签署。常用于提前不知道签署人的身份信息场景，例如：劳务工招工、大批量员工入职等场景。
适用的模板仅限于B2C（1、无序签署，2、顺序签署时B静默签署，3、顺序签署时B非首位签署）、单C的模板，且模板中发起方没有填写控件。
                 * @param req CreateMultiFlowSignQRCodeRequest
                 * @return CreateMultiFlowSignQRCodeOutcome
                 */
                CreateMultiFlowSignQRCodeOutcome CreateMultiFlowSignQRCode(const Model::CreateMultiFlowSignQRCodeRequest &request);
                void CreateMultiFlowSignQRCodeAsync(const Model::CreateMultiFlowSignQRCodeRequest& request, const CreateMultiFlowSignQRCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMultiFlowSignQRCodeOutcomeCallable CreateMultiFlowSignQRCodeCallable(const Model::CreateMultiFlowSignQRCodeRequest& request);

                /**
                 *创建快速发起流程
适用场景：用户通过API 合同文件及签署信息，并可通过我们返回的URL在页面完成签署控件等信息的编辑与确认，快速发起合同.
注：该接口文件的resourceId 是通过上传文件之后获取的。
                 * @param req CreatePrepareFlowRequest
                 * @return CreatePrepareFlowOutcome
                 */
                CreatePrepareFlowOutcome CreatePrepareFlow(const Model::CreatePrepareFlowRequest &request);
                void CreatePrepareFlowAsync(const Model::CreatePrepareFlowRequest& request, const CreatePrepareFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrepareFlowOutcomeCallable CreatePrepareFlowCallable(const Model::CreatePrepareFlowRequest& request);

                /**
                 *获取小程序跳转链接

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
                 *对企业员工进行印章授权
                 * @param req CreateSealPolicyRequest
                 * @return CreateSealPolicyOutcome
                 */
                CreateSealPolicyOutcome CreateSealPolicy(const Model::CreateSealPolicyRequest &request);
                void CreateSealPolicyAsync(const Model::CreateSealPolicyRequest& request, const CreateSealPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSealPolicyOutcomeCallable CreateSealPolicyCallable(const Model::CreateSealPolicyRequest& request);

                /**
                 *移除员工
                 * @param req DeleteIntegrationEmployeesRequest
                 * @return DeleteIntegrationEmployeesOutcome
                 */
                DeleteIntegrationEmployeesOutcome DeleteIntegrationEmployees(const Model::DeleteIntegrationEmployeesRequest &request);
                void DeleteIntegrationEmployeesAsync(const Model::DeleteIntegrationEmployeesRequest& request, const DeleteIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIntegrationEmployeesOutcomeCallable DeleteIntegrationEmployeesCallable(const Model::DeleteIntegrationEmployeesRequest& request);

                /**
                 *撤销员工持有的印章权限
                 * @param req DeleteSealPoliciesRequest
                 * @return DeleteSealPoliciesOutcome
                 */
                DeleteSealPoliciesOutcome DeleteSealPolicies(const Model::DeleteSealPoliciesRequest &request);
                void DeleteSealPoliciesAsync(const Model::DeleteSealPoliciesRequest& request, const DeleteSealPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSealPoliciesOutcomeCallable DeleteSealPoliciesCallable(const Model::DeleteSealPoliciesRequest& request);

                /**
                 *查询文件下载URL
适用场景：通过传参合同流程编号，下载对应的合同PDF文件流到本地。
                 * @param req DescribeFileUrlsRequest
                 * @return DescribeFileUrlsOutcome
                 */
                DescribeFileUrlsOutcome DescribeFileUrls(const Model::DescribeFileUrlsRequest &request);
                void DescribeFileUrlsAsync(const Model::DescribeFileUrlsRequest& request, const DescribeFileUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileUrlsOutcomeCallable DescribeFileUrlsCallable(const Model::DescribeFileUrlsRequest& request);

                /**
                 *查询流程摘要
适用场景：可用于主动查询某个合同流程的签署状态信息。可以配合回调通知使用。
日调用量默认10W
                 * @param req DescribeFlowBriefsRequest
                 * @return DescribeFlowBriefsOutcome
                 */
                DescribeFlowBriefsOutcome DescribeFlowBriefs(const Model::DescribeFlowBriefsRequest &request);
                void DescribeFlowBriefsAsync(const Model::DescribeFlowBriefsRequest& request, const DescribeFlowBriefsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowBriefsOutcomeCallable DescribeFlowBriefsCallable(const Model::DescribeFlowBriefsRequest& request);

                /**
                 *查询出证报告，返回报告 URL。
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
                 *当模板较多或模板中的控件较多时，可以通过查询模板接口更方便的获取模板列表，以及每个模板内的控件信息。该接口常用来配合“创建电子文档”接口作为前置的接口使用。
                 * @param req DescribeFlowTemplatesRequest
                 * @return DescribeFlowTemplatesOutcome
                 */
                DescribeFlowTemplatesOutcome DescribeFlowTemplates(const Model::DescribeFlowTemplatesRequest &request);
                void DescribeFlowTemplatesAsync(const Model::DescribeFlowTemplatesRequest& request, const DescribeFlowTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowTemplatesOutcomeCallable DescribeFlowTemplatesCallable(const Model::DescribeFlowTemplatesRequest& request);

                /**
                 *查询员工信息，每次返回的数据量最大为20
                 * @param req DescribeIntegrationEmployeesRequest
                 * @return DescribeIntegrationEmployeesOutcome
                 */
                DescribeIntegrationEmployeesOutcome DescribeIntegrationEmployees(const Model::DescribeIntegrationEmployeesRequest &request);
                void DescribeIntegrationEmployeesAsync(const Model::DescribeIntegrationEmployeesRequest& request, const DescribeIntegrationEmployeesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationEmployeesOutcomeCallable DescribeIntegrationEmployeesCallable(const Model::DescribeIntegrationEmployeesRequest& request);

                /**
                 *通过子企业影子账号查询主企业员工账号
                 * @param req DescribeIntegrationMainOrganizationUserRequest
                 * @return DescribeIntegrationMainOrganizationUserOutcome
                 */
                DescribeIntegrationMainOrganizationUserOutcome DescribeIntegrationMainOrganizationUser(const Model::DescribeIntegrationMainOrganizationUserRequest &request);
                void DescribeIntegrationMainOrganizationUserAsync(const Model::DescribeIntegrationMainOrganizationUserRequest& request, const DescribeIntegrationMainOrganizationUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIntegrationMainOrganizationUserOutcomeCallable DescribeIntegrationMainOrganizationUserCallable(const Model::DescribeIntegrationMainOrganizationUserRequest& request);

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
                 *查询转换任务状态
                 * @param req GetTaskResultApiRequest
                 * @return GetTaskResultApiOutcome
                 */
                GetTaskResultApiOutcome GetTaskResultApi(const Model::GetTaskResultApiRequest &request);
                void GetTaskResultApiAsync(const Model::GetTaskResultApiRequest& request, const GetTaskResultApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskResultApiOutcomeCallable GetTaskResultApiCallable(const Model::GetTaskResultApiRequest& request);

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
                 *此接口（UploadFiles）用于文件上传。
适用场景：用于生成pdf资源编号（FileIds）来配合“用PDF创建流程”接口使用，使用场景可详见“用PDF创建流程”接口说明。
调用时需要设置Domain/接口请求域名为 file.ess.tencent.cn，并设置参数Version/版本号为2020-12-22
                 * @param req UploadFilesRequest
                 * @return UploadFilesOutcome
                 */
                UploadFilesOutcome UploadFiles(const Model::UploadFilesRequest &request);
                void UploadFilesAsync(const Model::UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFilesOutcomeCallable UploadFilesCallable(const Model::UploadFilesRequest& request);

                /**
                 *验证合同文件
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
