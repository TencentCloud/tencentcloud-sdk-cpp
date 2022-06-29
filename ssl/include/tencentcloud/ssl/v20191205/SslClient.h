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

#ifndef TENCENTCLOUD_SSL_V20191205_SSLCLIENT_H_
#define TENCENTCLOUD_SSL_V20191205_SSLCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ssl/v20191205/model/ApplyCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/ApplyCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/CancelCertificateOrderRequest.h>
#include <tencentcloud/ssl/v20191205/model/CancelCertificateOrderResponse.h>
#include <tencentcloud/ssl/v20191205/model/CheckCertificateChainRequest.h>
#include <tencentcloud/ssl/v20191205/model/CheckCertificateChainResponse.h>
#include <tencentcloud/ssl/v20191205/model/CommitCertificateInformationRequest.h>
#include <tencentcloud/ssl/v20191205/model/CommitCertificateInformationResponse.h>
#include <tencentcloud/ssl/v20191205/model/CompleteCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/CompleteCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeleteManagerRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeleteManagerResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificatesRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificatesResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeDeployedResourcesRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeDeployedResourcesResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeManagerDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeManagerDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeManagersRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeManagersResponse.h>
#include <tencentcloud/ssl/v20191205/model/DownloadCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DownloadCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/HostCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/HostCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateAliasRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateAliasResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateProjectRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateProjectResponse.h>
#include <tencentcloud/ssl/v20191205/model/ReplaceCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/ReplaceCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/RevokeCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/RevokeCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/SubmitAuditManagerRequest.h>
#include <tencentcloud/ssl/v20191205/model/SubmitAuditManagerResponse.h>
#include <tencentcloud/ssl/v20191205/model/SubmitCertificateInformationRequest.h>
#include <tencentcloud/ssl/v20191205/model/SubmitCertificateInformationResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadConfirmLetterRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadConfirmLetterResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadRevokeLetterRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadRevokeLetterResponse.h>
#include <tencentcloud/ssl/v20191205/model/VerifyManagerRequest.h>
#include <tencentcloud/ssl/v20191205/model/VerifyManagerResponse.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            class SslClient : public AbstractClient
            {
            public:
                SslClient(const Credential &credential, const std::string &region);
                SslClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyCertificateResponse> ApplyCertificateOutcome;
                typedef std::future<ApplyCertificateOutcome> ApplyCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ApplyCertificateRequest&, ApplyCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelCertificateOrderResponse> CancelCertificateOrderOutcome;
                typedef std::future<CancelCertificateOrderOutcome> CancelCertificateOrderOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CancelCertificateOrderRequest&, CancelCertificateOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelCertificateOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCertificateChainResponse> CheckCertificateChainOutcome;
                typedef std::future<CheckCertificateChainOutcome> CheckCertificateChainOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CheckCertificateChainRequest&, CheckCertificateChainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCertificateChainAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitCertificateInformationResponse> CommitCertificateInformationOutcome;
                typedef std::future<CommitCertificateInformationOutcome> CommitCertificateInformationOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CommitCertificateInformationRequest&, CommitCertificateInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitCertificateInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::CompleteCertificateResponse> CompleteCertificateOutcome;
                typedef std::future<CompleteCertificateOutcome> CompleteCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CompleteCertificateRequest&, CompleteCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCertificateResponse> CreateCertificateOutcome;
                typedef std::future<CreateCertificateOutcome> CreateCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CreateCertificateRequest&, CreateCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCertificateResponse> DeleteCertificateOutcome;
                typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeleteCertificateRequest&, DeleteCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteManagerResponse> DeleteManagerOutcome;
                typedef std::future<DeleteManagerOutcome> DeleteManagerOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeleteManagerRequest&, DeleteManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateResponse> DescribeCertificateOutcome;
                typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateRequest&, DescribeCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateDetailResponse> DescribeCertificateDetailOutcome;
                typedef std::future<DescribeCertificateDetailOutcome> DescribeCertificateDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateDetailRequest&, DescribeCertificateDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateOperateLogsResponse> DescribeCertificateOperateLogsOutcome;
                typedef std::future<DescribeCertificateOperateLogsOutcome> DescribeCertificateOperateLogsOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateOperateLogsRequest&, DescribeCertificateOperateLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateOperateLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificatesResponse> DescribeCertificatesOutcome;
                typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificatesRequest&, DescribeCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeployedResourcesResponse> DescribeDeployedResourcesOutcome;
                typedef std::future<DescribeDeployedResourcesOutcome> DescribeDeployedResourcesOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeDeployedResourcesRequest&, DescribeDeployedResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployedResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeManagerDetailResponse> DescribeManagerDetailOutcome;
                typedef std::future<DescribeManagerDetailOutcome> DescribeManagerDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeManagerDetailRequest&, DescribeManagerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeManagerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeManagersResponse> DescribeManagersOutcome;
                typedef std::future<DescribeManagersOutcome> DescribeManagersOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeManagersRequest&, DescribeManagersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeManagersAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadCertificateResponse> DownloadCertificateOutcome;
                typedef std::future<DownloadCertificateOutcome> DownloadCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DownloadCertificateRequest&, DownloadCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::HostCertificateResponse> HostCertificateOutcome;
                typedef std::future<HostCertificateOutcome> HostCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::HostCertificateRequest&, HostCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HostCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateAliasResponse> ModifyCertificateAliasOutcome;
                typedef std::future<ModifyCertificateAliasOutcome> ModifyCertificateAliasOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateAliasRequest&, ModifyCertificateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateProjectResponse> ModifyCertificateProjectOutcome;
                typedef std::future<ModifyCertificateProjectOutcome> ModifyCertificateProjectOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateProjectRequest&, ModifyCertificateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceCertificateResponse> ReplaceCertificateOutcome;
                typedef std::future<ReplaceCertificateOutcome> ReplaceCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ReplaceCertificateRequest&, ReplaceCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::RevokeCertificateResponse> RevokeCertificateOutcome;
                typedef std::future<RevokeCertificateOutcome> RevokeCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::RevokeCertificateRequest&, RevokeCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokeCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitAuditManagerResponse> SubmitAuditManagerOutcome;
                typedef std::future<SubmitAuditManagerOutcome> SubmitAuditManagerOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::SubmitAuditManagerRequest&, SubmitAuditManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitAuditManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitCertificateInformationResponse> SubmitCertificateInformationOutcome;
                typedef std::future<SubmitCertificateInformationOutcome> SubmitCertificateInformationOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::SubmitCertificateInformationRequest&, SubmitCertificateInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitCertificateInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadCertificateResponse> UploadCertificateOutcome;
                typedef std::future<UploadCertificateOutcome> UploadCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadCertificateRequest&, UploadCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadConfirmLetterResponse> UploadConfirmLetterOutcome;
                typedef std::future<UploadConfirmLetterOutcome> UploadConfirmLetterOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadConfirmLetterRequest&, UploadConfirmLetterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadConfirmLetterAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadRevokeLetterResponse> UploadRevokeLetterOutcome;
                typedef std::future<UploadRevokeLetterOutcome> UploadRevokeLetterOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadRevokeLetterRequest&, UploadRevokeLetterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadRevokeLetterAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyManagerResponse> VerifyManagerOutcome;
                typedef std::future<VerifyManagerOutcome> VerifyManagerOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::VerifyManagerRequest&, VerifyManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyManagerAsyncHandler;



                /**
                 *本接口（ApplyCertificate）用于免费证书申请。
                 * @param req ApplyCertificateRequest
                 * @return ApplyCertificateOutcome
                 */
                ApplyCertificateOutcome ApplyCertificate(const Model::ApplyCertificateRequest &request);
                void ApplyCertificateAsync(const Model::ApplyCertificateRequest& request, const ApplyCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyCertificateOutcomeCallable ApplyCertificateCallable(const Model::ApplyCertificateRequest& request);

                /**
                 *取消证书订单。
                 * @param req CancelCertificateOrderRequest
                 * @return CancelCertificateOrderOutcome
                 */
                CancelCertificateOrderOutcome CancelCertificateOrder(const Model::CancelCertificateOrderRequest &request);
                void CancelCertificateOrderAsync(const Model::CancelCertificateOrderRequest& request, const CancelCertificateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelCertificateOrderOutcomeCallable CancelCertificateOrderCallable(const Model::CancelCertificateOrderRequest& request);

                /**
                 *本接口（CheckCertificateChain）用于检查证书链是否完整。
                 * @param req CheckCertificateChainRequest
                 * @return CheckCertificateChainOutcome
                 */
                CheckCertificateChainOutcome CheckCertificateChain(const Model::CheckCertificateChainRequest &request);
                void CheckCertificateChainAsync(const Model::CheckCertificateChainRequest& request, const CheckCertificateChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCertificateChainOutcomeCallable CheckCertificateChainCallable(const Model::CheckCertificateChainRequest& request);

                /**
                 *提交证书订单。
                 * @param req CommitCertificateInformationRequest
                 * @return CommitCertificateInformationOutcome
                 */
                CommitCertificateInformationOutcome CommitCertificateInformation(const Model::CommitCertificateInformationRequest &request);
                void CommitCertificateInformationAsync(const Model::CommitCertificateInformationRequest& request, const CommitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitCertificateInformationOutcomeCallable CommitCertificateInformationCallable(const Model::CommitCertificateInformationRequest& request);

                /**
                 *本接口（CompleteCertificate）用于主动触发证书验证。仅非DNSPod和Wotrus品牌证书支持使用此接口。
                 * @param req CompleteCertificateRequest
                 * @return CompleteCertificateOutcome
                 */
                CompleteCertificateOutcome CompleteCertificate(const Model::CompleteCertificateRequest &request);
                void CompleteCertificateAsync(const Model::CompleteCertificateRequest& request, const CompleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompleteCertificateOutcomeCallable CompleteCertificateCallable(const Model::CompleteCertificateRequest& request);

                /**
                 *本接口（CreateCertificate）用于创建付费证书。
                 * @param req CreateCertificateRequest
                 * @return CreateCertificateOutcome
                 */
                CreateCertificateOutcome CreateCertificate(const Model::CreateCertificateRequest &request);
                void CreateCertificateAsync(const Model::CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCertificateOutcomeCallable CreateCertificateCallable(const Model::CreateCertificateRequest& request);

                /**
                 *本接口（DeleteCertificate）用于删除证书。
                 * @param req DeleteCertificateRequest
                 * @return DeleteCertificateOutcome
                 */
                DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest &request);
                void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request);

                /**
                 *删除管理人
                 * @param req DeleteManagerRequest
                 * @return DeleteManagerOutcome
                 */
                DeleteManagerOutcome DeleteManager(const Model::DeleteManagerRequest &request);
                void DeleteManagerAsync(const Model::DeleteManagerRequest& request, const DeleteManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteManagerOutcomeCallable DeleteManagerCallable(const Model::DeleteManagerRequest& request);

                /**
                 *本接口（DescribeCertificate）用于获取证书信息。
                 * @param req DescribeCertificateRequest
                 * @return DescribeCertificateOutcome
                 */
                DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest &request);
                void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request);

                /**
                 *获取证书详情。
                 * @param req DescribeCertificateDetailRequest
                 * @return DescribeCertificateDetailOutcome
                 */
                DescribeCertificateDetailOutcome DescribeCertificateDetail(const Model::DescribeCertificateDetailRequest &request);
                void DescribeCertificateDetailAsync(const Model::DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateDetailOutcomeCallable DescribeCertificateDetailCallable(const Model::DescribeCertificateDetailRequest& request);

                /**
                 *获取用户账号下有关证书的操作日志。
                 * @param req DescribeCertificateOperateLogsRequest
                 * @return DescribeCertificateOperateLogsOutcome
                 */
                DescribeCertificateOperateLogsOutcome DescribeCertificateOperateLogs(const Model::DescribeCertificateOperateLogsRequest &request);
                void DescribeCertificateOperateLogsAsync(const Model::DescribeCertificateOperateLogsRequest& request, const DescribeCertificateOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateOperateLogsOutcomeCallable DescribeCertificateOperateLogsCallable(const Model::DescribeCertificateOperateLogsRequest& request);

                /**
                 *本接口（DescribeCertificates）用于获取证书列表。
                 * @param req DescribeCertificatesRequest
                 * @return DescribeCertificatesOutcome
                 */
                DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest &request);
                void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request);

                /**
                 *证书查询关联资源
                 * @param req DescribeDeployedResourcesRequest
                 * @return DescribeDeployedResourcesOutcome
                 */
                DescribeDeployedResourcesOutcome DescribeDeployedResources(const Model::DescribeDeployedResourcesRequest &request);
                void DescribeDeployedResourcesAsync(const Model::DescribeDeployedResourcesRequest& request, const DescribeDeployedResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeployedResourcesOutcomeCallable DescribeDeployedResourcesCallable(const Model::DescribeDeployedResourcesRequest& request);

                /**
                 *查询管理人详情
                 * @param req DescribeManagerDetailRequest
                 * @return DescribeManagerDetailOutcome
                 */
                DescribeManagerDetailOutcome DescribeManagerDetail(const Model::DescribeManagerDetailRequest &request);
                void DescribeManagerDetailAsync(const Model::DescribeManagerDetailRequest& request, const DescribeManagerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeManagerDetailOutcomeCallable DescribeManagerDetailCallable(const Model::DescribeManagerDetailRequest& request);

                /**
                 *查询管理人列表
                 * @param req DescribeManagersRequest
                 * @return DescribeManagersOutcome
                 */
                DescribeManagersOutcome DescribeManagers(const Model::DescribeManagersRequest &request);
                void DescribeManagersAsync(const Model::DescribeManagersRequest& request, const DescribeManagersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeManagersOutcomeCallable DescribeManagersCallable(const Model::DescribeManagersRequest& request);

                /**
                 *本接口（DownloadCertificate）用于下载证书。
                 * @param req DownloadCertificateRequest
                 * @return DownloadCertificateOutcome
                 */
                DownloadCertificateOutcome DownloadCertificate(const Model::DownloadCertificateRequest &request);
                void DownloadCertificateAsync(const Model::DownloadCertificateRequest& request, const DownloadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadCertificateOutcomeCallable DownloadCertificateCallable(const Model::DownloadCertificateRequest& request);

                /**
                 *云资源托管
                 * @param req HostCertificateRequest
                 * @return HostCertificateOutcome
                 */
                HostCertificateOutcome HostCertificate(const Model::HostCertificateRequest &request);
                void HostCertificateAsync(const Model::HostCertificateRequest& request, const HostCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HostCertificateOutcomeCallable HostCertificateCallable(const Model::HostCertificateRequest& request);

                /**
                 *用户传入证书id和备注来修改证书备注。
                 * @param req ModifyCertificateAliasRequest
                 * @return ModifyCertificateAliasOutcome
                 */
                ModifyCertificateAliasOutcome ModifyCertificateAlias(const Model::ModifyCertificateAliasRequest &request);
                void ModifyCertificateAliasAsync(const Model::ModifyCertificateAliasRequest& request, const ModifyCertificateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateAliasOutcomeCallable ModifyCertificateAliasCallable(const Model::ModifyCertificateAliasRequest& request);

                /**
                 *批量修改证书所属项目。
                 * @param req ModifyCertificateProjectRequest
                 * @return ModifyCertificateProjectOutcome
                 */
                ModifyCertificateProjectOutcome ModifyCertificateProject(const Model::ModifyCertificateProjectRequest &request);
                void ModifyCertificateProjectAsync(const Model::ModifyCertificateProjectRequest& request, const ModifyCertificateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateProjectOutcomeCallable ModifyCertificateProjectCallable(const Model::ModifyCertificateProjectRequest& request);

                /**
                 *本接口（ReplaceCertificate）用于重颁发证书。已申请的免费证书仅支持 RSA 算法、密钥对参数为2048的证书重颁发，并且目前仅支持1次重颁发。
                 * @param req ReplaceCertificateRequest
                 * @return ReplaceCertificateOutcome
                 */
                ReplaceCertificateOutcome ReplaceCertificate(const Model::ReplaceCertificateRequest &request);
                void ReplaceCertificateAsync(const Model::ReplaceCertificateRequest& request, const ReplaceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceCertificateOutcomeCallable ReplaceCertificateCallable(const Model::ReplaceCertificateRequest& request);

                /**
                 *本接口（RevokeCertificate）用于吊销证书。
                 * @param req RevokeCertificateRequest
                 * @return RevokeCertificateOutcome
                 */
                RevokeCertificateOutcome RevokeCertificate(const Model::RevokeCertificateRequest &request);
                void RevokeCertificateAsync(const Model::RevokeCertificateRequest& request, const RevokeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokeCertificateOutcomeCallable RevokeCertificateCallable(const Model::RevokeCertificateRequest& request);

                /**
                 *重新提交审核管理人
                 * @param req SubmitAuditManagerRequest
                 * @return SubmitAuditManagerOutcome
                 */
                SubmitAuditManagerOutcome SubmitAuditManager(const Model::SubmitAuditManagerRequest &request);
                void SubmitAuditManagerAsync(const Model::SubmitAuditManagerRequest& request, const SubmitAuditManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitAuditManagerOutcomeCallable SubmitAuditManagerCallable(const Model::SubmitAuditManagerRequest& request);

                /**
                 *提交证书资料。输入参数信息可以分多次提交，但提交的证书资料应最低限度保持完整。
                 * @param req SubmitCertificateInformationRequest
                 * @return SubmitCertificateInformationOutcome
                 */
                SubmitCertificateInformationOutcome SubmitCertificateInformation(const Model::SubmitCertificateInformationRequest &request);
                void SubmitCertificateInformationAsync(const Model::SubmitCertificateInformationRequest& request, const SubmitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitCertificateInformationOutcomeCallable SubmitCertificateInformationCallable(const Model::SubmitCertificateInformationRequest& request);

                /**
                 *本接口（UploadCertificate）用于上传证书。
                 * @param req UploadCertificateRequest
                 * @return UploadCertificateOutcome
                 */
                UploadCertificateOutcome UploadCertificate(const Model::UploadCertificateRequest &request);
                void UploadCertificateAsync(const Model::UploadCertificateRequest& request, const UploadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadCertificateOutcomeCallable UploadCertificateCallable(const Model::UploadCertificateRequest& request);

                /**
                 *本接口（UploadConfirmLetter）用于上传证书确认函。
                 * @param req UploadConfirmLetterRequest
                 * @return UploadConfirmLetterOutcome
                 */
                UploadConfirmLetterOutcome UploadConfirmLetter(const Model::UploadConfirmLetterRequest &request);
                void UploadConfirmLetterAsync(const Model::UploadConfirmLetterRequest& request, const UploadConfirmLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadConfirmLetterOutcomeCallable UploadConfirmLetterCallable(const Model::UploadConfirmLetterRequest& request);

                /**
                 *本接口（UploadRevokeLetter）用于上传证书吊销确认函。
                 * @param req UploadRevokeLetterRequest
                 * @return UploadRevokeLetterOutcome
                 */
                UploadRevokeLetterOutcome UploadRevokeLetter(const Model::UploadRevokeLetterRequest &request);
                void UploadRevokeLetterAsync(const Model::UploadRevokeLetterRequest& request, const UploadRevokeLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadRevokeLetterOutcomeCallable UploadRevokeLetterCallable(const Model::UploadRevokeLetterRequest& request);

                /**
                 *重新核验管理人
                 * @param req VerifyManagerRequest
                 * @return VerifyManagerOutcome
                 */
                VerifyManagerOutcome VerifyManager(const Model::VerifyManagerRequest &request);
                void VerifyManagerAsync(const Model::VerifyManagerRequest& request, const VerifyManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyManagerOutcomeCallable VerifyManagerCallable(const Model::VerifyManagerRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_SSLCLIENT_H_
