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
#include <tencentcloud/ssl/v20191205/model/CancelAuditCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/CancelAuditCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/CancelCertificateOrderRequest.h>
#include <tencentcloud/ssl/v20191205/model/CancelCertificateOrderResponse.h>
#include <tencentcloud/ssl/v20191205/model/CertificateInfoSubmitRequest.h>
#include <tencentcloud/ssl/v20191205/model/CertificateInfoSubmitResponse.h>
#include <tencentcloud/ssl/v20191205/model/CertificateOrderSubmitRequest.h>
#include <tencentcloud/ssl/v20191205/model/CertificateOrderSubmitResponse.h>
#include <tencentcloud/ssl/v20191205/model/CheckCertificateChainRequest.h>
#include <tencentcloud/ssl/v20191205/model/CheckCertificateChainResponse.h>
#include <tencentcloud/ssl/v20191205/model/CheckCertificateDomainVerificationRequest.h>
#include <tencentcloud/ssl/v20191205/model/CheckCertificateDomainVerificationResponse.h>
#include <tencentcloud/ssl/v20191205/model/CheckCertificateExistRequest.h>
#include <tencentcloud/ssl/v20191205/model/CheckCertificateExistResponse.h>
#include <tencentcloud/ssl/v20191205/model/CommitCertificateInformationRequest.h>
#include <tencentcloud/ssl/v20191205/model/CommitCertificateInformationResponse.h>
#include <tencentcloud/ssl/v20191205/model/CompleteCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/CompleteCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateBindResourceSyncTaskRequest.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateBindResourceSyncTaskResponse.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateByPackageRequest.h>
#include <tencentcloud/ssl/v20191205/model/CreateCertificateByPackageResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificatesRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeleteCertificatesResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeleteManagerRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeleteManagerResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeployCertificateInstanceRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeployCertificateInstanceResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeployCertificateRecordRetryRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeployCertificateRecordRetryResponse.h>
#include <tencentcloud/ssl/v20191205/model/DeployCertificateRecordRollbackRequest.h>
#include <tencentcloud/ssl/v20191205/model/DeployCertificateRecordRollbackResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskResultRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskResultResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificatesRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCertificatesResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCompaniesRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeCompaniesResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeDeleteCertificatesTaskResultRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeDeleteCertificatesTaskResultResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeDeployedResourcesRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeDeployedResourcesResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeDownloadCertificateUrlRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeDownloadCertificateUrlResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostApiGatewayInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostApiGatewayInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostCdnInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostCdnInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostClbInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostClbInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostCosInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostCosInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostDdosInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostDdosInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostDeployRecordRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostDeployRecordResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostDeployRecordDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostDeployRecordDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostLighthouseInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostLighthouseInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostLiveInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostLiveInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostTeoInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostTeoInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostTkeInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostTkeInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUploadUpdateRecordRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUploadUpdateRecordResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUploadUpdateRecordDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostUploadUpdateRecordDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostVodInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostVodInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostWafInstanceListRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeHostWafInstanceListResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeManagerDetailRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeManagerDetailResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribeManagersRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribeManagersResponse.h>
#include <tencentcloud/ssl/v20191205/model/DescribePackagesRequest.h>
#include <tencentcloud/ssl/v20191205/model/DescribePackagesResponse.h>
#include <tencentcloud/ssl/v20191205/model/DownloadCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/DownloadCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateAliasRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateAliasResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateProjectRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateProjectResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateResubmitRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificateResubmitResponse.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificatesExpiringNotificationSwitchRequest.h>
#include <tencentcloud/ssl/v20191205/model/ModifyCertificatesExpiringNotificationSwitchResponse.h>
#include <tencentcloud/ssl/v20191205/model/ReplaceCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/ReplaceCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/RevokeCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/RevokeCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/SubmitAuditManagerRequest.h>
#include <tencentcloud/ssl/v20191205/model/SubmitAuditManagerResponse.h>
#include <tencentcloud/ssl/v20191205/model/SubmitCertificateInformationRequest.h>
#include <tencentcloud/ssl/v20191205/model/SubmitCertificateInformationResponse.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateInstanceRequest.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateInstanceResponse.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRetryRequest.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRetryResponse.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRollbackRequest.h>
#include <tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRollbackResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadCertificateRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadCertificateResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadConfirmLetterRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadConfirmLetterResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadRevokeLetterRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadRevokeLetterResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadUpdateCertificateInstanceRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadUpdateCertificateInstanceResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadUpdateCertificateRecordRetryRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadUpdateCertificateRecordRetryResponse.h>
#include <tencentcloud/ssl/v20191205/model/UploadUpdateCertificateRecordRollbackRequest.h>
#include <tencentcloud/ssl/v20191205/model/UploadUpdateCertificateRecordRollbackResponse.h>
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
                typedef Outcome<Core::Error, Model::CancelAuditCertificateResponse> CancelAuditCertificateOutcome;
                typedef std::future<CancelAuditCertificateOutcome> CancelAuditCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CancelAuditCertificateRequest&, CancelAuditCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelAuditCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelCertificateOrderResponse> CancelCertificateOrderOutcome;
                typedef std::future<CancelCertificateOrderOutcome> CancelCertificateOrderOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CancelCertificateOrderRequest&, CancelCertificateOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelCertificateOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CertificateInfoSubmitResponse> CertificateInfoSubmitOutcome;
                typedef std::future<CertificateInfoSubmitOutcome> CertificateInfoSubmitOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CertificateInfoSubmitRequest&, CertificateInfoSubmitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CertificateInfoSubmitAsyncHandler;
                typedef Outcome<Core::Error, Model::CertificateOrderSubmitResponse> CertificateOrderSubmitOutcome;
                typedef std::future<CertificateOrderSubmitOutcome> CertificateOrderSubmitOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CertificateOrderSubmitRequest&, CertificateOrderSubmitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CertificateOrderSubmitAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCertificateChainResponse> CheckCertificateChainOutcome;
                typedef std::future<CheckCertificateChainOutcome> CheckCertificateChainOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CheckCertificateChainRequest&, CheckCertificateChainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCertificateChainAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCertificateDomainVerificationResponse> CheckCertificateDomainVerificationOutcome;
                typedef std::future<CheckCertificateDomainVerificationOutcome> CheckCertificateDomainVerificationOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CheckCertificateDomainVerificationRequest&, CheckCertificateDomainVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCertificateDomainVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCertificateExistResponse> CheckCertificateExistOutcome;
                typedef std::future<CheckCertificateExistOutcome> CheckCertificateExistOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CheckCertificateExistRequest&, CheckCertificateExistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCertificateExistAsyncHandler;
                typedef Outcome<Core::Error, Model::CommitCertificateInformationResponse> CommitCertificateInformationOutcome;
                typedef std::future<CommitCertificateInformationOutcome> CommitCertificateInformationOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CommitCertificateInformationRequest&, CommitCertificateInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CommitCertificateInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::CompleteCertificateResponse> CompleteCertificateOutcome;
                typedef std::future<CompleteCertificateOutcome> CompleteCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CompleteCertificateRequest&, CompleteCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompleteCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCertificateResponse> CreateCertificateOutcome;
                typedef std::future<CreateCertificateOutcome> CreateCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CreateCertificateRequest&, CreateCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCertificateBindResourceSyncTaskResponse> CreateCertificateBindResourceSyncTaskOutcome;
                typedef std::future<CreateCertificateBindResourceSyncTaskOutcome> CreateCertificateBindResourceSyncTaskOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CreateCertificateBindResourceSyncTaskRequest&, CreateCertificateBindResourceSyncTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateBindResourceSyncTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCertificateByPackageResponse> CreateCertificateByPackageOutcome;
                typedef std::future<CreateCertificateByPackageOutcome> CreateCertificateByPackageOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::CreateCertificateByPackageRequest&, CreateCertificateByPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateByPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCertificateResponse> DeleteCertificateOutcome;
                typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeleteCertificateRequest&, DeleteCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCertificatesResponse> DeleteCertificatesOutcome;
                typedef std::future<DeleteCertificatesOutcome> DeleteCertificatesOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeleteCertificatesRequest&, DeleteCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteManagerResponse> DeleteManagerOutcome;
                typedef std::future<DeleteManagerOutcome> DeleteManagerOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeleteManagerRequest&, DeleteManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployCertificateInstanceResponse> DeployCertificateInstanceOutcome;
                typedef std::future<DeployCertificateInstanceOutcome> DeployCertificateInstanceOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeployCertificateInstanceRequest&, DeployCertificateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployCertificateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployCertificateRecordRetryResponse> DeployCertificateRecordRetryOutcome;
                typedef std::future<DeployCertificateRecordRetryOutcome> DeployCertificateRecordRetryOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeployCertificateRecordRetryRequest&, DeployCertificateRecordRetryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployCertificateRecordRetryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployCertificateRecordRollbackResponse> DeployCertificateRecordRollbackOutcome;
                typedef std::future<DeployCertificateRecordRollbackOutcome> DeployCertificateRecordRollbackOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DeployCertificateRecordRollbackRequest&, DeployCertificateRecordRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployCertificateRecordRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateResponse> DescribeCertificateOutcome;
                typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateRequest&, DescribeCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateBindResourceTaskDetailResponse> DescribeCertificateBindResourceTaskDetailOutcome;
                typedef std::future<DescribeCertificateBindResourceTaskDetailOutcome> DescribeCertificateBindResourceTaskDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateBindResourceTaskDetailRequest&, DescribeCertificateBindResourceTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateBindResourceTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateBindResourceTaskResultResponse> DescribeCertificateBindResourceTaskResultOutcome;
                typedef std::future<DescribeCertificateBindResourceTaskResultOutcome> DescribeCertificateBindResourceTaskResultOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateBindResourceTaskResultRequest&, DescribeCertificateBindResourceTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateBindResourceTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateDetailResponse> DescribeCertificateDetailOutcome;
                typedef std::future<DescribeCertificateDetailOutcome> DescribeCertificateDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateDetailRequest&, DescribeCertificateDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateOperateLogsResponse> DescribeCertificateOperateLogsOutcome;
                typedef std::future<DescribeCertificateOperateLogsOutcome> DescribeCertificateOperateLogsOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificateOperateLogsRequest&, DescribeCertificateOperateLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateOperateLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificatesResponse> DescribeCertificatesOutcome;
                typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCertificatesRequest&, DescribeCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCompaniesResponse> DescribeCompaniesOutcome;
                typedef std::future<DescribeCompaniesOutcome> DescribeCompaniesOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeCompaniesRequest&, DescribeCompaniesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompaniesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeleteCertificatesTaskResultResponse> DescribeDeleteCertificatesTaskResultOutcome;
                typedef std::future<DescribeDeleteCertificatesTaskResultOutcome> DescribeDeleteCertificatesTaskResultOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeDeleteCertificatesTaskResultRequest&, DescribeDeleteCertificatesTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeleteCertificatesTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeployedResourcesResponse> DescribeDeployedResourcesOutcome;
                typedef std::future<DescribeDeployedResourcesOutcome> DescribeDeployedResourcesOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeDeployedResourcesRequest&, DescribeDeployedResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployedResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDownloadCertificateUrlResponse> DescribeDownloadCertificateUrlOutcome;
                typedef std::future<DescribeDownloadCertificateUrlOutcome> DescribeDownloadCertificateUrlOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeDownloadCertificateUrlRequest&, DescribeDownloadCertificateUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadCertificateUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostApiGatewayInstanceListResponse> DescribeHostApiGatewayInstanceListOutcome;
                typedef std::future<DescribeHostApiGatewayInstanceListOutcome> DescribeHostApiGatewayInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostApiGatewayInstanceListRequest&, DescribeHostApiGatewayInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostApiGatewayInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostCdnInstanceListResponse> DescribeHostCdnInstanceListOutcome;
                typedef std::future<DescribeHostCdnInstanceListOutcome> DescribeHostCdnInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostCdnInstanceListRequest&, DescribeHostCdnInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostCdnInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostClbInstanceListResponse> DescribeHostClbInstanceListOutcome;
                typedef std::future<DescribeHostClbInstanceListOutcome> DescribeHostClbInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostClbInstanceListRequest&, DescribeHostClbInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostClbInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostCosInstanceListResponse> DescribeHostCosInstanceListOutcome;
                typedef std::future<DescribeHostCosInstanceListOutcome> DescribeHostCosInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostCosInstanceListRequest&, DescribeHostCosInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostCosInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostDdosInstanceListResponse> DescribeHostDdosInstanceListOutcome;
                typedef std::future<DescribeHostDdosInstanceListOutcome> DescribeHostDdosInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostDdosInstanceListRequest&, DescribeHostDdosInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostDdosInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostDeployRecordResponse> DescribeHostDeployRecordOutcome;
                typedef std::future<DescribeHostDeployRecordOutcome> DescribeHostDeployRecordOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostDeployRecordRequest&, DescribeHostDeployRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostDeployRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostDeployRecordDetailResponse> DescribeHostDeployRecordDetailOutcome;
                typedef std::future<DescribeHostDeployRecordDetailOutcome> DescribeHostDeployRecordDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostDeployRecordDetailRequest&, DescribeHostDeployRecordDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostDeployRecordDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostLighthouseInstanceListResponse> DescribeHostLighthouseInstanceListOutcome;
                typedef std::future<DescribeHostLighthouseInstanceListOutcome> DescribeHostLighthouseInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostLighthouseInstanceListRequest&, DescribeHostLighthouseInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostLighthouseInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostLiveInstanceListResponse> DescribeHostLiveInstanceListOutcome;
                typedef std::future<DescribeHostLiveInstanceListOutcome> DescribeHostLiveInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostLiveInstanceListRequest&, DescribeHostLiveInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostLiveInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostTeoInstanceListResponse> DescribeHostTeoInstanceListOutcome;
                typedef std::future<DescribeHostTeoInstanceListOutcome> DescribeHostTeoInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostTeoInstanceListRequest&, DescribeHostTeoInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostTeoInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostTkeInstanceListResponse> DescribeHostTkeInstanceListOutcome;
                typedef std::future<DescribeHostTkeInstanceListOutcome> DescribeHostTkeInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostTkeInstanceListRequest&, DescribeHostTkeInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostTkeInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostUpdateRecordResponse> DescribeHostUpdateRecordOutcome;
                typedef std::future<DescribeHostUpdateRecordOutcome> DescribeHostUpdateRecordOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostUpdateRecordRequest&, DescribeHostUpdateRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostUpdateRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostUpdateRecordDetailResponse> DescribeHostUpdateRecordDetailOutcome;
                typedef std::future<DescribeHostUpdateRecordDetailOutcome> DescribeHostUpdateRecordDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostUpdateRecordDetailRequest&, DescribeHostUpdateRecordDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostUpdateRecordDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostUploadUpdateRecordResponse> DescribeHostUploadUpdateRecordOutcome;
                typedef std::future<DescribeHostUploadUpdateRecordOutcome> DescribeHostUploadUpdateRecordOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostUploadUpdateRecordRequest&, DescribeHostUploadUpdateRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostUploadUpdateRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostUploadUpdateRecordDetailResponse> DescribeHostUploadUpdateRecordDetailOutcome;
                typedef std::future<DescribeHostUploadUpdateRecordDetailOutcome> DescribeHostUploadUpdateRecordDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostUploadUpdateRecordDetailRequest&, DescribeHostUploadUpdateRecordDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostUploadUpdateRecordDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostVodInstanceListResponse> DescribeHostVodInstanceListOutcome;
                typedef std::future<DescribeHostVodInstanceListOutcome> DescribeHostVodInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostVodInstanceListRequest&, DescribeHostVodInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostVodInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostWafInstanceListResponse> DescribeHostWafInstanceListOutcome;
                typedef std::future<DescribeHostWafInstanceListOutcome> DescribeHostWafInstanceListOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeHostWafInstanceListRequest&, DescribeHostWafInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostWafInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeManagerDetailResponse> DescribeManagerDetailOutcome;
                typedef std::future<DescribeManagerDetailOutcome> DescribeManagerDetailOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeManagerDetailRequest&, DescribeManagerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeManagerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeManagersResponse> DescribeManagersOutcome;
                typedef std::future<DescribeManagersOutcome> DescribeManagersOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribeManagersRequest&, DescribeManagersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeManagersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePackagesResponse> DescribePackagesOutcome;
                typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DescribePackagesRequest&, DescribePackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadCertificateResponse> DownloadCertificateOutcome;
                typedef std::future<DownloadCertificateOutcome> DownloadCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::DownloadCertificateRequest&, DownloadCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateAliasResponse> ModifyCertificateAliasOutcome;
                typedef std::future<ModifyCertificateAliasOutcome> ModifyCertificateAliasOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateAliasRequest&, ModifyCertificateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateProjectResponse> ModifyCertificateProjectOutcome;
                typedef std::future<ModifyCertificateProjectOutcome> ModifyCertificateProjectOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateProjectRequest&, ModifyCertificateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateResubmitResponse> ModifyCertificateResubmitOutcome;
                typedef std::future<ModifyCertificateResubmitOutcome> ModifyCertificateResubmitOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificateResubmitRequest&, ModifyCertificateResubmitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateResubmitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificatesExpiringNotificationSwitchResponse> ModifyCertificatesExpiringNotificationSwitchOutcome;
                typedef std::future<ModifyCertificatesExpiringNotificationSwitchOutcome> ModifyCertificatesExpiringNotificationSwitchOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::ModifyCertificatesExpiringNotificationSwitchRequest&, ModifyCertificatesExpiringNotificationSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificatesExpiringNotificationSwitchAsyncHandler;
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
                typedef Outcome<Core::Error, Model::UpdateCertificateInstanceResponse> UpdateCertificateInstanceOutcome;
                typedef std::future<UpdateCertificateInstanceOutcome> UpdateCertificateInstanceOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UpdateCertificateInstanceRequest&, UpdateCertificateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCertificateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCertificateRecordRetryResponse> UpdateCertificateRecordRetryOutcome;
                typedef std::future<UpdateCertificateRecordRetryOutcome> UpdateCertificateRecordRetryOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UpdateCertificateRecordRetryRequest&, UpdateCertificateRecordRetryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCertificateRecordRetryAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCertificateRecordRollbackResponse> UpdateCertificateRecordRollbackOutcome;
                typedef std::future<UpdateCertificateRecordRollbackOutcome> UpdateCertificateRecordRollbackOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UpdateCertificateRecordRollbackRequest&, UpdateCertificateRecordRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCertificateRecordRollbackAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadCertificateResponse> UploadCertificateOutcome;
                typedef std::future<UploadCertificateOutcome> UploadCertificateOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadCertificateRequest&, UploadCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadConfirmLetterResponse> UploadConfirmLetterOutcome;
                typedef std::future<UploadConfirmLetterOutcome> UploadConfirmLetterOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadConfirmLetterRequest&, UploadConfirmLetterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadConfirmLetterAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadRevokeLetterResponse> UploadRevokeLetterOutcome;
                typedef std::future<UploadRevokeLetterOutcome> UploadRevokeLetterOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadRevokeLetterRequest&, UploadRevokeLetterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadRevokeLetterAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadUpdateCertificateInstanceResponse> UploadUpdateCertificateInstanceOutcome;
                typedef std::future<UploadUpdateCertificateInstanceOutcome> UploadUpdateCertificateInstanceOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadUpdateCertificateInstanceRequest&, UploadUpdateCertificateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadUpdateCertificateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadUpdateCertificateRecordRetryResponse> UploadUpdateCertificateRecordRetryOutcome;
                typedef std::future<UploadUpdateCertificateRecordRetryOutcome> UploadUpdateCertificateRecordRetryOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadUpdateCertificateRecordRetryRequest&, UploadUpdateCertificateRecordRetryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadUpdateCertificateRecordRetryAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadUpdateCertificateRecordRollbackResponse> UploadUpdateCertificateRecordRollbackOutcome;
                typedef std::future<UploadUpdateCertificateRecordRollbackOutcome> UploadUpdateCertificateRecordRollbackOutcomeCallable;
                typedef std::function<void(const SslClient*, const Model::UploadUpdateCertificateRecordRollbackRequest&, UploadUpdateCertificateRecordRollbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadUpdateCertificateRecordRollbackAsyncHandler;
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
                 *取消证书审核
                 * @param req CancelAuditCertificateRequest
                 * @return CancelAuditCertificateOutcome
                 */
                CancelAuditCertificateOutcome CancelAuditCertificate(const Model::CancelAuditCertificateRequest &request);
                void CancelAuditCertificateAsync(const Model::CancelAuditCertificateRequest& request, const CancelAuditCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelAuditCertificateOutcomeCallable CancelAuditCertificateCallable(const Model::CancelAuditCertificateRequest& request);

                /**
                 *取消证书订单。
                 * @param req CancelCertificateOrderRequest
                 * @return CancelCertificateOrderOutcome
                 */
                CancelCertificateOrderOutcome CancelCertificateOrder(const Model::CancelCertificateOrderRequest &request);
                void CancelCertificateOrderAsync(const Model::CancelCertificateOrderRequest& request, const CancelCertificateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelCertificateOrderOutcomeCallable CancelCertificateOrderCallable(const Model::CancelCertificateOrderRequest& request);

                /**
                 *付费提交证书资料
                 * @param req CertificateInfoSubmitRequest
                 * @return CertificateInfoSubmitOutcome
                 */
                CertificateInfoSubmitOutcome CertificateInfoSubmit(const Model::CertificateInfoSubmitRequest &request);
                void CertificateInfoSubmitAsync(const Model::CertificateInfoSubmitRequest& request, const CertificateInfoSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CertificateInfoSubmitOutcomeCallable CertificateInfoSubmitCallable(const Model::CertificateInfoSubmitRequest& request);

                /**
                 *提交付费证书订单
                 * @param req CertificateOrderSubmitRequest
                 * @return CertificateOrderSubmitOutcome
                 */
                CertificateOrderSubmitOutcome CertificateOrderSubmit(const Model::CertificateOrderSubmitRequest &request);
                void CertificateOrderSubmitAsync(const Model::CertificateOrderSubmitRequest& request, const CertificateOrderSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CertificateOrderSubmitOutcomeCallable CertificateOrderSubmitCallable(const Model::CertificateOrderSubmitRequest& request);

                /**
                 *本接口（CheckCertificateChain）用于检查证书链是否完整。
                 * @param req CheckCertificateChainRequest
                 * @return CheckCertificateChainOutcome
                 */
                CheckCertificateChainOutcome CheckCertificateChain(const Model::CheckCertificateChainRequest &request);
                void CheckCertificateChainAsync(const Model::CheckCertificateChainRequest& request, const CheckCertificateChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCertificateChainOutcomeCallable CheckCertificateChainCallable(const Model::CheckCertificateChainRequest& request);

                /**
                 *检查证书域名验证结果
                 * @param req CheckCertificateDomainVerificationRequest
                 * @return CheckCertificateDomainVerificationOutcome
                 */
                CheckCertificateDomainVerificationOutcome CheckCertificateDomainVerification(const Model::CheckCertificateDomainVerificationRequest &request);
                void CheckCertificateDomainVerificationAsync(const Model::CheckCertificateDomainVerificationRequest& request, const CheckCertificateDomainVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCertificateDomainVerificationOutcomeCallable CheckCertificateDomainVerificationCallable(const Model::CheckCertificateDomainVerificationRequest& request);

                /**
                 *根据证书内容检测当前账号下是否存在一致的证书， 存在则返回证书ID， 不存在则返回空
                 * @param req CheckCertificateExistRequest
                 * @return CheckCertificateExistOutcome
                 */
                CheckCertificateExistOutcome CheckCertificateExist(const Model::CheckCertificateExistRequest &request);
                void CheckCertificateExistAsync(const Model::CheckCertificateExistRequest& request, const CheckCertificateExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCertificateExistOutcomeCallable CheckCertificateExistCallable(const Model::CheckCertificateExistRequest& request);

                /**
                 *付费证书提交订单； 本接口不维护新功能， 可使用新接口进行提交， [CertificateOrderSubmit](https://cloud.tencent.com/document/product/400/116032)
                 * @param req CommitCertificateInformationRequest
                 * @return CommitCertificateInformationOutcome
                 */
                CommitCertificateInformationOutcome CommitCertificateInformation(const Model::CommitCertificateInformationRequest &request);
                void CommitCertificateInformationAsync(const Model::CommitCertificateInformationRequest& request, const CommitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CommitCertificateInformationOutcomeCallable CommitCertificateInformationCallable(const Model::CommitCertificateInformationRequest& request);

                /**
                 *本接口（CompleteCertificate）用于主动触发证书验证。DNSPod和Wotrus品牌的证书不支持使用此接口。
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
                 *创建证书绑定关联云资源异步任务， 该接口用于查询证书关联云资源。 若证书ID已存在查询云资源任务，则结果返回该任务ID。关联云资源类型，支持以下云资源：clb、cdn、waf、live、vod、ddos、tke、apigateway、tcb、teo（edgeOne）、cos。查询关联云资源结果使用DescribeCertificateBindResourceTaskResult接口
                 * @param req CreateCertificateBindResourceSyncTaskRequest
                 * @return CreateCertificateBindResourceSyncTaskOutcome
                 */
                CreateCertificateBindResourceSyncTaskOutcome CreateCertificateBindResourceSyncTask(const Model::CreateCertificateBindResourceSyncTaskRequest &request);
                void CreateCertificateBindResourceSyncTaskAsync(const Model::CreateCertificateBindResourceSyncTaskRequest& request, const CreateCertificateBindResourceSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCertificateBindResourceSyncTaskOutcomeCallable CreateCertificateBindResourceSyncTaskCallable(const Model::CreateCertificateBindResourceSyncTaskRequest& request);

                /**
                 *使用权益点创建证书
                 * @param req CreateCertificateByPackageRequest
                 * @return CreateCertificateByPackageOutcome
                 */
                CreateCertificateByPackageOutcome CreateCertificateByPackage(const Model::CreateCertificateByPackageRequest &request);
                void CreateCertificateByPackageAsync(const Model::CreateCertificateByPackageRequest& request, const CreateCertificateByPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCertificateByPackageOutcomeCallable CreateCertificateByPackageCallable(const Model::CreateCertificateByPackageRequest& request);

                /**
                 *本接口（DeleteCertificate）用于删除证书。
                 * @param req DeleteCertificateRequest
                 * @return DeleteCertificateOutcome
                 */
                DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest &request);
                void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request);

                /**
                 *批量删除证书，删除证书前支持查询证书是否关联了腾讯云云资源 （需自定义配置参数，参数名称：IsSync）
                 * @param req DeleteCertificatesRequest
                 * @return DeleteCertificatesOutcome
                 */
                DeleteCertificatesOutcome DeleteCertificates(const Model::DeleteCertificatesRequest &request);
                void DeleteCertificatesAsync(const Model::DeleteCertificatesRequest& request, const DeleteCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCertificatesOutcomeCallable DeleteCertificatesCallable(const Model::DeleteCertificatesRequest& request);

                /**
                 *删除管理人
                 * @param req DeleteManagerRequest
                 * @return DeleteManagerOutcome
                 */
                DeleteManagerOutcome DeleteManager(const Model::DeleteManagerRequest &request);
                void DeleteManagerAsync(const Model::DeleteManagerRequest& request, const DeleteManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteManagerOutcomeCallable DeleteManagerCallable(const Model::DeleteManagerRequest& request);

                /**
                 *证书部署到云资源实例列表，本接口只会创建部署任务， 部署任务结果可通过DescribeHostDeployRecordDetail查询。本接口创建部署任务时，会校验证书和部署实例的匹配关系，存在不匹配的则会创建部署任务失败。以下为匹配关系校验规则：
- 若待部署的证书和传入实例域名的当前绑定的证书一致， 则不会创建成功
- 若待部署的证书和传入域名不匹配， 则不会创建成功
- 若部署clb实例时， 7层监听器下无规则，则不会创建成功
- 若部署clb实例时， 7层监听器未开启SNI，该监听器下存在任一域名和证书不匹配， 则不会创建成功
- 若部署clb实例时，监听器规则为正则表示式， 则不会创建成功

<dx-alert infotype="explain" title="">一个证书ID，相同的资源类型，只能创建一个部署任务，必须等部署任务执行完成，才能创建新的部署任务</dx-alert>
                 * @param req DeployCertificateInstanceRequest
                 * @return DeployCertificateInstanceOutcome
                 */
                DeployCertificateInstanceOutcome DeployCertificateInstance(const Model::DeployCertificateInstanceRequest &request);
                void DeployCertificateInstanceAsync(const Model::DeployCertificateInstanceRequest& request, const DeployCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployCertificateInstanceOutcomeCallable DeployCertificateInstanceCallable(const Model::DeployCertificateInstanceRequest& request);

                /**
                 *云资源部署重试部署记录
                 * @param req DeployCertificateRecordRetryRequest
                 * @return DeployCertificateRecordRetryOutcome
                 */
                DeployCertificateRecordRetryOutcome DeployCertificateRecordRetry(const Model::DeployCertificateRecordRetryRequest &request);
                void DeployCertificateRecordRetryAsync(const Model::DeployCertificateRecordRetryRequest& request, const DeployCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployCertificateRecordRetryOutcomeCallable DeployCertificateRecordRetryCallable(const Model::DeployCertificateRecordRetryRequest& request);

                /**
                 *云资源部署成功记录回滚， 部署失败的记录不会回滚； 接口调用成功后， 会创建一个用于回滚的部署任务， 并返回该任务的ID
                 * @param req DeployCertificateRecordRollbackRequest
                 * @return DeployCertificateRecordRollbackOutcome
                 */
                DeployCertificateRecordRollbackOutcome DeployCertificateRecordRollback(const Model::DeployCertificateRecordRollbackRequest &request);
                void DeployCertificateRecordRollbackAsync(const Model::DeployCertificateRecordRollbackRequest& request, const DeployCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployCertificateRecordRollbackOutcomeCallable DeployCertificateRecordRollbackCallable(const Model::DeployCertificateRecordRollbackRequest& request);

                /**
                 *本接口（DescribeCertificate）用于获取证书信息。
                 * @param req DescribeCertificateRequest
                 * @return DescribeCertificateOutcome
                 */
                DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest &request);
                void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request);

                /**
                 *查询CreateCertificateBindResourceSyncTask任务结果， 返回证书关联云资源异步任务结果， 支持以下云资源：clb、cdn、waf、live、vod、ddos、tke、apigateway、tcb、teo（edgeOne）、cos
                 * @param req DescribeCertificateBindResourceTaskDetailRequest
                 * @return DescribeCertificateBindResourceTaskDetailOutcome
                 */
                DescribeCertificateBindResourceTaskDetailOutcome DescribeCertificateBindResourceTaskDetail(const Model::DescribeCertificateBindResourceTaskDetailRequest &request);
                void DescribeCertificateBindResourceTaskDetailAsync(const Model::DescribeCertificateBindResourceTaskDetailRequest& request, const DescribeCertificateBindResourceTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateBindResourceTaskDetailOutcomeCallable DescribeCertificateBindResourceTaskDetailCallable(const Model::DescribeCertificateBindResourceTaskDetailRequest& request);

                /**
                 *查询CreateCertificateBindResourceSyncTask任务结果， 返回证书关联云资源异步任务结果， 支持以下云资源：clb、cdn、waf、live、vod、ddos、tke、apigateway、tcb、teo（edgeOne）、cos
                 * @param req DescribeCertificateBindResourceTaskResultRequest
                 * @return DescribeCertificateBindResourceTaskResultOutcome
                 */
                DescribeCertificateBindResourceTaskResultOutcome DescribeCertificateBindResourceTaskResult(const Model::DescribeCertificateBindResourceTaskResultRequest &request);
                void DescribeCertificateBindResourceTaskResultAsync(const Model::DescribeCertificateBindResourceTaskResultRequest& request, const DescribeCertificateBindResourceTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateBindResourceTaskResultOutcomeCallable DescribeCertificateBindResourceTaskResultCallable(const Model::DescribeCertificateBindResourceTaskResultRequest& request);

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
                 *查询公司列表
                 * @param req DescribeCompaniesRequest
                 * @return DescribeCompaniesOutcome
                 */
                DescribeCompaniesOutcome DescribeCompanies(const Model::DescribeCompaniesRequest &request);
                void DescribeCompaniesAsync(const Model::DescribeCompaniesRequest& request, const DescribeCompaniesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCompaniesOutcomeCallable DescribeCompaniesCallable(const Model::DescribeCompaniesRequest& request);

                /**
                 *查询批量删除任务结果
                 * @param req DescribeDeleteCertificatesTaskResultRequest
                 * @return DescribeDeleteCertificatesTaskResultOutcome
                 */
                DescribeDeleteCertificatesTaskResultOutcome DescribeDeleteCertificatesTaskResult(const Model::DescribeDeleteCertificatesTaskResultRequest &request);
                void DescribeDeleteCertificatesTaskResultAsync(const Model::DescribeDeleteCertificatesTaskResultRequest& request, const DescribeDeleteCertificatesTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeleteCertificatesTaskResultOutcomeCallable DescribeDeleteCertificatesTaskResultCallable(const Model::DescribeDeleteCertificatesTaskResultRequest& request);

                /**
                 *证书查询关联资源， 最新查询接口请使用CreateCertificateBindResourceSyncTask， 可以查询更多支持的云资源
                 * @param req DescribeDeployedResourcesRequest
                 * @return DescribeDeployedResourcesOutcome
                 */
                DescribeDeployedResourcesOutcome DescribeDeployedResources(const Model::DescribeDeployedResourcesRequest &request);
                void DescribeDeployedResourcesAsync(const Model::DescribeDeployedResourcesRequest& request, const DescribeDeployedResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeployedResourcesOutcomeCallable DescribeDeployedResourcesCallable(const Model::DescribeDeployedResourcesRequest& request);

                /**
                 *获取下载证书链接
                 * @param req DescribeDownloadCertificateUrlRequest
                 * @return DescribeDownloadCertificateUrlOutcome
                 */
                DescribeDownloadCertificateUrlOutcome DescribeDownloadCertificateUrl(const Model::DescribeDownloadCertificateUrlRequest &request);
                void DescribeDownloadCertificateUrlAsync(const Model::DescribeDownloadCertificateUrlRequest& request, const DescribeDownloadCertificateUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDownloadCertificateUrlOutcomeCallable DescribeDownloadCertificateUrlCallable(const Model::DescribeDownloadCertificateUrlRequest& request);

                /**
                 *查询证书apiGateway云资源部署实例列表
                 * @param req DescribeHostApiGatewayInstanceListRequest
                 * @return DescribeHostApiGatewayInstanceListOutcome
                 */
                DescribeHostApiGatewayInstanceListOutcome DescribeHostApiGatewayInstanceList(const Model::DescribeHostApiGatewayInstanceListRequest &request);
                void DescribeHostApiGatewayInstanceListAsync(const Model::DescribeHostApiGatewayInstanceListRequest& request, const DescribeHostApiGatewayInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostApiGatewayInstanceListOutcomeCallable DescribeHostApiGatewayInstanceListCallable(const Model::DescribeHostApiGatewayInstanceListRequest& request);

                /**
                 *查询证书cdn云资源部署实例列表
                 * @param req DescribeHostCdnInstanceListRequest
                 * @return DescribeHostCdnInstanceListOutcome
                 */
                DescribeHostCdnInstanceListOutcome DescribeHostCdnInstanceList(const Model::DescribeHostCdnInstanceListRequest &request);
                void DescribeHostCdnInstanceListAsync(const Model::DescribeHostCdnInstanceListRequest& request, const DescribeHostCdnInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostCdnInstanceListOutcomeCallable DescribeHostCdnInstanceListCallable(const Model::DescribeHostCdnInstanceListRequest& request);

                /**
                 *查询证书clb云资源部署实例列表
                 * @param req DescribeHostClbInstanceListRequest
                 * @return DescribeHostClbInstanceListOutcome
                 */
                DescribeHostClbInstanceListOutcome DescribeHostClbInstanceList(const Model::DescribeHostClbInstanceListRequest &request);
                void DescribeHostClbInstanceListAsync(const Model::DescribeHostClbInstanceListRequest& request, const DescribeHostClbInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostClbInstanceListOutcomeCallable DescribeHostClbInstanceListCallable(const Model::DescribeHostClbInstanceListRequest& request);

                /**
                 *查询证书cos云资源部署实例列表
                 * @param req DescribeHostCosInstanceListRequest
                 * @return DescribeHostCosInstanceListOutcome
                 */
                DescribeHostCosInstanceListOutcome DescribeHostCosInstanceList(const Model::DescribeHostCosInstanceListRequest &request);
                void DescribeHostCosInstanceListAsync(const Model::DescribeHostCosInstanceListRequest& request, const DescribeHostCosInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostCosInstanceListOutcomeCallable DescribeHostCosInstanceListCallable(const Model::DescribeHostCosInstanceListRequest& request);

                /**
                 *查询证书ddos云资源部署实例列表
                 * @param req DescribeHostDdosInstanceListRequest
                 * @return DescribeHostDdosInstanceListOutcome
                 */
                DescribeHostDdosInstanceListOutcome DescribeHostDdosInstanceList(const Model::DescribeHostDdosInstanceListRequest &request);
                void DescribeHostDdosInstanceListAsync(const Model::DescribeHostDdosInstanceListRequest& request, const DescribeHostDdosInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostDdosInstanceListOutcomeCallable DescribeHostDdosInstanceListCallable(const Model::DescribeHostDdosInstanceListRequest& request);

                /**
                 *查询证书云资源部署记录列表
                 * @param req DescribeHostDeployRecordRequest
                 * @return DescribeHostDeployRecordOutcome
                 */
                DescribeHostDeployRecordOutcome DescribeHostDeployRecord(const Model::DescribeHostDeployRecordRequest &request);
                void DescribeHostDeployRecordAsync(const Model::DescribeHostDeployRecordRequest& request, const DescribeHostDeployRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostDeployRecordOutcomeCallable DescribeHostDeployRecordCallable(const Model::DescribeHostDeployRecordRequest& request);

                /**
                 *查询证书云资源部署记录详情列表
                 * @param req DescribeHostDeployRecordDetailRequest
                 * @return DescribeHostDeployRecordDetailOutcome
                 */
                DescribeHostDeployRecordDetailOutcome DescribeHostDeployRecordDetail(const Model::DescribeHostDeployRecordDetailRequest &request);
                void DescribeHostDeployRecordDetailAsync(const Model::DescribeHostDeployRecordDetailRequest& request, const DescribeHostDeployRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostDeployRecordDetailOutcomeCallable DescribeHostDeployRecordDetailCallable(const Model::DescribeHostDeployRecordDetailRequest& request);

                /**
                 *查询证书Lighthouse云资源部署实例列表
                 * @param req DescribeHostLighthouseInstanceListRequest
                 * @return DescribeHostLighthouseInstanceListOutcome
                 */
                DescribeHostLighthouseInstanceListOutcome DescribeHostLighthouseInstanceList(const Model::DescribeHostLighthouseInstanceListRequest &request);
                void DescribeHostLighthouseInstanceListAsync(const Model::DescribeHostLighthouseInstanceListRequest& request, const DescribeHostLighthouseInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostLighthouseInstanceListOutcomeCallable DescribeHostLighthouseInstanceListCallable(const Model::DescribeHostLighthouseInstanceListRequest& request);

                /**
                 *查询证书live云资源部署实例列表
                 * @param req DescribeHostLiveInstanceListRequest
                 * @return DescribeHostLiveInstanceListOutcome
                 */
                DescribeHostLiveInstanceListOutcome DescribeHostLiveInstanceList(const Model::DescribeHostLiveInstanceListRequest &request);
                void DescribeHostLiveInstanceListAsync(const Model::DescribeHostLiveInstanceListRequest& request, const DescribeHostLiveInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostLiveInstanceListOutcomeCallable DescribeHostLiveInstanceListCallable(const Model::DescribeHostLiveInstanceListRequest& request);

                /**
                 *查询证书EdgeOne云资源部署实例列表
                 * @param req DescribeHostTeoInstanceListRequest
                 * @return DescribeHostTeoInstanceListOutcome
                 */
                DescribeHostTeoInstanceListOutcome DescribeHostTeoInstanceList(const Model::DescribeHostTeoInstanceListRequest &request);
                void DescribeHostTeoInstanceListAsync(const Model::DescribeHostTeoInstanceListRequest& request, const DescribeHostTeoInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostTeoInstanceListOutcomeCallable DescribeHostTeoInstanceListCallable(const Model::DescribeHostTeoInstanceListRequest& request);

                /**
                 *查询证书tke云资源部署实例列表
                 * @param req DescribeHostTkeInstanceListRequest
                 * @return DescribeHostTkeInstanceListOutcome
                 */
                DescribeHostTkeInstanceListOutcome DescribeHostTkeInstanceList(const Model::DescribeHostTkeInstanceListRequest &request);
                void DescribeHostTkeInstanceListAsync(const Model::DescribeHostTkeInstanceListRequest& request, const DescribeHostTkeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostTkeInstanceListOutcomeCallable DescribeHostTkeInstanceListCallable(const Model::DescribeHostTkeInstanceListRequest& request);

                /**
                 *查询证书云资源更新记录列表
                 * @param req DescribeHostUpdateRecordRequest
                 * @return DescribeHostUpdateRecordOutcome
                 */
                DescribeHostUpdateRecordOutcome DescribeHostUpdateRecord(const Model::DescribeHostUpdateRecordRequest &request);
                void DescribeHostUpdateRecordAsync(const Model::DescribeHostUpdateRecordRequest& request, const DescribeHostUpdateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostUpdateRecordOutcomeCallable DescribeHostUpdateRecordCallable(const Model::DescribeHostUpdateRecordRequest& request);

                /**
                 *查询证书云资源更新记录详情
                 * @param req DescribeHostUpdateRecordDetailRequest
                 * @return DescribeHostUpdateRecordDetailOutcome
                 */
                DescribeHostUpdateRecordDetailOutcome DescribeHostUpdateRecordDetail(const Model::DescribeHostUpdateRecordDetailRequest &request);
                void DescribeHostUpdateRecordDetailAsync(const Model::DescribeHostUpdateRecordDetailRequest& request, const DescribeHostUpdateRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostUpdateRecordDetailOutcomeCallable DescribeHostUpdateRecordDetailCallable(const Model::DescribeHostUpdateRecordDetailRequest& request);

                /**
                 *查询证书云资源更新（证书ID不变）记录列表
                 * @param req DescribeHostUploadUpdateRecordRequest
                 * @return DescribeHostUploadUpdateRecordOutcome
                 */
                DescribeHostUploadUpdateRecordOutcome DescribeHostUploadUpdateRecord(const Model::DescribeHostUploadUpdateRecordRequest &request);
                void DescribeHostUploadUpdateRecordAsync(const Model::DescribeHostUploadUpdateRecordRequest& request, const DescribeHostUploadUpdateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostUploadUpdateRecordOutcomeCallable DescribeHostUploadUpdateRecordCallable(const Model::DescribeHostUploadUpdateRecordRequest& request);

                /**
                 *查询证书更新（证书ID不变）部署记录详情
                 * @param req DescribeHostUploadUpdateRecordDetailRequest
                 * @return DescribeHostUploadUpdateRecordDetailOutcome
                 */
                DescribeHostUploadUpdateRecordDetailOutcome DescribeHostUploadUpdateRecordDetail(const Model::DescribeHostUploadUpdateRecordDetailRequest &request);
                void DescribeHostUploadUpdateRecordDetailAsync(const Model::DescribeHostUploadUpdateRecordDetailRequest& request, const DescribeHostUploadUpdateRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostUploadUpdateRecordDetailOutcomeCallable DescribeHostUploadUpdateRecordDetailCallable(const Model::DescribeHostUploadUpdateRecordDetailRequest& request);

                /**
                 *查询证书Vod云资源部署实例列表
                 * @param req DescribeHostVodInstanceListRequest
                 * @return DescribeHostVodInstanceListOutcome
                 */
                DescribeHostVodInstanceListOutcome DescribeHostVodInstanceList(const Model::DescribeHostVodInstanceListRequest &request);
                void DescribeHostVodInstanceListAsync(const Model::DescribeHostVodInstanceListRequest& request, const DescribeHostVodInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostVodInstanceListOutcomeCallable DescribeHostVodInstanceListCallable(const Model::DescribeHostVodInstanceListRequest& request);

                /**
                 *查询证书waf云资源部署实例列表
                 * @param req DescribeHostWafInstanceListRequest
                 * @return DescribeHostWafInstanceListOutcome
                 */
                DescribeHostWafInstanceListOutcome DescribeHostWafInstanceList(const Model::DescribeHostWafInstanceListRequest &request);
                void DescribeHostWafInstanceListAsync(const Model::DescribeHostWafInstanceListRequest& request, const DescribeHostWafInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostWafInstanceListOutcomeCallable DescribeHostWafInstanceListCallable(const Model::DescribeHostWafInstanceListRequest& request);

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
                 *获得权益包列表
                 * @param req DescribePackagesRequest
                 * @return DescribePackagesOutcome
                 */
                DescribePackagesOutcome DescribePackages(const Model::DescribePackagesRequest &request);
                void DescribePackagesAsync(const Model::DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePackagesOutcomeCallable DescribePackagesCallable(const Model::DescribePackagesRequest& request);

                /**
                 *本接口（DownloadCertificate）用于下载证书。
                 * @param req DownloadCertificateRequest
                 * @return DownloadCertificateOutcome
                 */
                DownloadCertificateOutcome DownloadCertificate(const Model::DownloadCertificateRequest &request);
                void DownloadCertificateAsync(const Model::DownloadCertificateRequest& request, const DownloadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadCertificateOutcomeCallable DownloadCertificateCallable(const Model::DownloadCertificateRequest& request);

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
                 *针对审核失败或审核取消的付费证书，重新发起审核
                 * @param req ModifyCertificateResubmitRequest
                 * @return ModifyCertificateResubmitOutcome
                 */
                ModifyCertificateResubmitOutcome ModifyCertificateResubmit(const Model::ModifyCertificateResubmitRequest &request);
                void ModifyCertificateResubmitAsync(const Model::ModifyCertificateResubmitRequest& request, const ModifyCertificateResubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateResubmitOutcomeCallable ModifyCertificateResubmitCallable(const Model::ModifyCertificateResubmitRequest& request);

                /**
                 *修改忽略证书到期通知。打开或关闭证书到期通知。
                 * @param req ModifyCertificatesExpiringNotificationSwitchRequest
                 * @return ModifyCertificatesExpiringNotificationSwitchOutcome
                 */
                ModifyCertificatesExpiringNotificationSwitchOutcome ModifyCertificatesExpiringNotificationSwitch(const Model::ModifyCertificatesExpiringNotificationSwitchRequest &request);
                void ModifyCertificatesExpiringNotificationSwitchAsync(const Model::ModifyCertificatesExpiringNotificationSwitchRequest& request, const ModifyCertificatesExpiringNotificationSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificatesExpiringNotificationSwitchOutcomeCallable ModifyCertificatesExpiringNotificationSwitchCallable(const Model::ModifyCertificatesExpiringNotificationSwitchRequest& request);

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
                 *付费证书提交资料； 本接口不维护新功能， 可使用新接口进行资料提交， [CertificateInfoSubmit](https://cloud.tencent.com/document/product/400/116033)
                 * @param req SubmitCertificateInformationRequest
                 * @return SubmitCertificateInformationOutcome
                 */
                SubmitCertificateInformationOutcome SubmitCertificateInformation(const Model::SubmitCertificateInformationRequest &request);
                void SubmitCertificateInformationAsync(const Model::SubmitCertificateInformationRequest& request, const SubmitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitCertificateInformationOutcomeCallable SubmitCertificateInformationCallable(const Model::SubmitCertificateInformationRequest& request);

                /**
                 *一键更新旧证书资源，本接口为异步接口， 调用之后DeployRecordId为0表示任务进行中， 重复请求这个接口， 当返回DeployRecordId大于0则表示任务创建成功。 未创建成功则会抛出异常
                 * @param req UpdateCertificateInstanceRequest
                 * @return UpdateCertificateInstanceOutcome
                 */
                UpdateCertificateInstanceOutcome UpdateCertificateInstance(const Model::UpdateCertificateInstanceRequest &request);
                void UpdateCertificateInstanceAsync(const Model::UpdateCertificateInstanceRequest& request, const UpdateCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCertificateInstanceOutcomeCallable UpdateCertificateInstanceCallable(const Model::UpdateCertificateInstanceRequest& request);

                /**
                 *云资源更新重试部署记录
                 * @param req UpdateCertificateRecordRetryRequest
                 * @return UpdateCertificateRecordRetryOutcome
                 */
                UpdateCertificateRecordRetryOutcome UpdateCertificateRecordRetry(const Model::UpdateCertificateRecordRetryRequest &request);
                void UpdateCertificateRecordRetryAsync(const Model::UpdateCertificateRecordRetryRequest& request, const UpdateCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCertificateRecordRetryOutcomeCallable UpdateCertificateRecordRetryCallable(const Model::UpdateCertificateRecordRetryRequest& request);

                /**
                 *云资源更新成功记录回滚， 只对更新已成功的记录回滚
                 * @param req UpdateCertificateRecordRollbackRequest
                 * @return UpdateCertificateRecordRollbackOutcome
                 */
                UpdateCertificateRecordRollbackOutcome UpdateCertificateRecordRollback(const Model::UpdateCertificateRecordRollbackRequest &request);
                void UpdateCertificateRecordRollbackAsync(const Model::UpdateCertificateRecordRollbackRequest& request, const UpdateCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCertificateRecordRollbackOutcomeCallable UpdateCertificateRecordRollbackCallable(const Model::UpdateCertificateRecordRollbackRequest& request);

                /**
                 *本接口（UploadCertificate）用于上传证书。
                 * @param req UploadCertificateRequest
                 * @return UploadCertificateOutcome
                 */
                UploadCertificateOutcome UploadCertificate(const Model::UploadCertificateRequest &request);
                void UploadCertificateAsync(const Model::UploadCertificateRequest& request, const UploadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadCertificateOutcomeCallable UploadCertificateCallable(const Model::UploadCertificateRequest& request);

                /**
                 *本接口（UploadConfirmLetter）上传证书确认函，不再维护其功能，请用户前往腾讯云证书控制台上传证书确认函
                 * @param req UploadConfirmLetterRequest
                 * @return UploadConfirmLetterOutcome
                 */
                UploadConfirmLetterOutcome UploadConfirmLetter(const Model::UploadConfirmLetterRequest &request);
                void UploadConfirmLetterAsync(const Model::UploadConfirmLetterRequest& request, const UploadConfirmLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadConfirmLetterOutcomeCallable UploadConfirmLetterCallable(const Model::UploadConfirmLetterRequest& request);

                /**
                 *本接口（UploadRevokeLetter）上传证书吊销确认函，不再维护其功能，请用户前往腾讯云证书控制台上传证书吊销确认函
                 * @param req UploadRevokeLetterRequest
                 * @return UploadRevokeLetterOutcome
                 */
                UploadRevokeLetterOutcome UploadRevokeLetter(const Model::UploadRevokeLetterRequest &request);
                void UploadRevokeLetterAsync(const Model::UploadRevokeLetterRequest& request, const UploadRevokeLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadRevokeLetterOutcomeCallable UploadRevokeLetterCallable(const Model::UploadRevokeLetterRequest& request);

                /**
                 *更新证书内容（证书ID不变）并更新关联的云资源，本接口为异步接口， 调用之后DeployRecordId为0表示任务进行中， 重复请求这个接口， 当返回DeployRecordId大于0则表示任务创建成功。 未创建成功则会抛出异常
                 * @param req UploadUpdateCertificateInstanceRequest
                 * @return UploadUpdateCertificateInstanceOutcome
                 */
                UploadUpdateCertificateInstanceOutcome UploadUpdateCertificateInstance(const Model::UploadUpdateCertificateInstanceRequest &request);
                void UploadUpdateCertificateInstanceAsync(const Model::UploadUpdateCertificateInstanceRequest& request, const UploadUpdateCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadUpdateCertificateInstanceOutcomeCallable UploadUpdateCertificateInstanceCallable(const Model::UploadUpdateCertificateInstanceRequest& request);

                /**
                 *云资源更新（证书ID不变）重试部署记录
                 * @param req UploadUpdateCertificateRecordRetryRequest
                 * @return UploadUpdateCertificateRecordRetryOutcome
                 */
                UploadUpdateCertificateRecordRetryOutcome UploadUpdateCertificateRecordRetry(const Model::UploadUpdateCertificateRecordRetryRequest &request);
                void UploadUpdateCertificateRecordRetryAsync(const Model::UploadUpdateCertificateRecordRetryRequest& request, const UploadUpdateCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadUpdateCertificateRecordRetryOutcomeCallable UploadUpdateCertificateRecordRetryCallable(const Model::UploadUpdateCertificateRecordRetryRequest& request);

                /**
                 *云资源更新成功（证书ID不变）记录回滚， 会对全量任务进行回滚
                 * @param req UploadUpdateCertificateRecordRollbackRequest
                 * @return UploadUpdateCertificateRecordRollbackOutcome
                 */
                UploadUpdateCertificateRecordRollbackOutcome UploadUpdateCertificateRecordRollback(const Model::UploadUpdateCertificateRecordRollbackRequest &request);
                void UploadUpdateCertificateRecordRollbackAsync(const Model::UploadUpdateCertificateRecordRollbackRequest& request, const UploadUpdateCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadUpdateCertificateRecordRollbackOutcomeCallable UploadUpdateCertificateRecordRollbackCallable(const Model::UploadUpdateCertificateRecordRollbackRequest& request);

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
