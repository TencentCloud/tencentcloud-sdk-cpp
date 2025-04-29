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

#ifndef TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_
#define TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdn/v20180606/model/AddCLSTopicDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/AddCLSTopicDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/AddCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/AddCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateDiagnoseUrlRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateDiagnoseUrlResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateEdgePackTaskRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateEdgePackTaskResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateScdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateScdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateScdnFailedLogTaskRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateScdnFailedLogTaskResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateScdnLogTaskRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateScdnLogTaskResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateVerifyRecordRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateVerifyRecordResponse.h>
#include <tencentcloud/cdn/v20180606/model/DeleteCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/DeleteCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/DeleteClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/DeleteClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/DeleteScdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/DeleteScdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeBillingDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeBillingDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCcDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCcDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDomainLogsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDomainLogsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnIpRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnIpResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnOriginIpRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnOriginIpResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCertDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCertDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDDoSDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDDoSDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDiagnoseReportRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDiagnoseReportResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDistrictIspDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDistrictIspDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeEdgePackTaskStatusRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeEdgePackTaskStatusResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeEventLogDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeEventLogDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeHttpsPackagesRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeHttpsPackagesResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeImageConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeImageConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpStatusRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpStatusResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpVisitRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpVisitResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeMapInfoRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeMapInfoResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePayTypeRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePayTypeResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeQuotaRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeQuotaResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushQuotaRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushQuotaResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushTasksRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushTasksResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeReportDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeReportDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnBotDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnBotDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnBotRecordsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnBotRecordsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnIpStrategyRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnIpStrategyResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnTopDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeScdnTopDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeTopDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeTopDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeTrafficPackagesRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeTrafficPackagesResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeUrlViolationsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeUrlViolationsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeWafDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeWafDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DisableCachesRequest.h>
#include <tencentcloud/cdn/v20180606/model/DisableCachesResponse.h>
#include <tencentcloud/cdn/v20180606/model/DisableClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/DisableClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/DuplicateDomainConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/DuplicateDomainConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/EnableCachesRequest.h>
#include <tencentcloud/cdn/v20180606/model/EnableCachesResponse.h>
#include <tencentcloud/cdn/v20180606/model/EnableClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/EnableClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/GetDisableRecordsRequest.h>
#include <tencentcloud/cdn/v20180606/model/GetDisableRecordsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListClsLogTopicsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListClsLogTopicsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListClsTopicDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListClsTopicDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListDiagnoseReportRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListDiagnoseReportResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListScdnDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListScdnDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListScdnLogTasksRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListScdnLogTasksResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListScdnTopBotDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListScdnTopBotDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListTopBotDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListTopBotDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListTopCcDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListTopCcDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListTopClsLogDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListTopClsLogDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDDoSDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDDoSDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListTopWafDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListTopWafDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/ManageClsTopicDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ManageClsTopicDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ModifyDomainConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/ModifyDomainConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/ModifyPurgeFetchTaskStatusRequest.h>
#include <tencentcloud/cdn/v20180606/model/ModifyPurgeFetchTaskStatusResponse.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/PurgeUrlsCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PurgeUrlsCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/SearchClsLogRequest.h>
#include <tencentcloud/cdn/v20180606/model/SearchClsLogResponse.h>
#include <tencentcloud/cdn/v20180606/model/StartCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/StartCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/StartScdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/StartScdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/StopCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/StopCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/StopScdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/StopScdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdateDomainConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdateDomainConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdateImageConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdateImageConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdatePayTypeRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdatePayTypeResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdateScdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdateScdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/VerifyDomainRecordRequest.h>
#include <tencentcloud/cdn/v20180606/model/VerifyDomainRecordResponse.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            class CdnClient : public AbstractClient
            {
            public:
                CdnClient(const Credential &credential, const std::string &region);
                CdnClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddCLSTopicDomainsResponse> AddCLSTopicDomainsOutcome;
                typedef std::future<AddCLSTopicDomainsOutcome> AddCLSTopicDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::AddCLSTopicDomainsRequest&, AddCLSTopicDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCLSTopicDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCdnDomainResponse> AddCdnDomainOutcome;
                typedef std::future<AddCdnDomainOutcome> AddCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::AddCdnDomainRequest&, AddCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClsLogTopicResponse> CreateClsLogTopicOutcome;
                typedef std::future<CreateClsLogTopicOutcome> CreateClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateClsLogTopicRequest&, CreateClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClsLogTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDiagnoseUrlResponse> CreateDiagnoseUrlOutcome;
                typedef std::future<CreateDiagnoseUrlOutcome> CreateDiagnoseUrlOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateDiagnoseUrlRequest&, CreateDiagnoseUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiagnoseUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgePackTaskResponse> CreateEdgePackTaskOutcome;
                typedef std::future<CreateEdgePackTaskOutcome> CreateEdgePackTaskOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateEdgePackTaskRequest&, CreateEdgePackTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgePackTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScdnDomainResponse> CreateScdnDomainOutcome;
                typedef std::future<CreateScdnDomainOutcome> CreateScdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateScdnDomainRequest&, CreateScdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScdnFailedLogTaskResponse> CreateScdnFailedLogTaskOutcome;
                typedef std::future<CreateScdnFailedLogTaskOutcome> CreateScdnFailedLogTaskOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateScdnFailedLogTaskRequest&, CreateScdnFailedLogTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScdnFailedLogTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateScdnLogTaskResponse> CreateScdnLogTaskOutcome;
                typedef std::future<CreateScdnLogTaskOutcome> CreateScdnLogTaskOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateScdnLogTaskRequest&, CreateScdnLogTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateScdnLogTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVerifyRecordResponse> CreateVerifyRecordOutcome;
                typedef std::future<CreateVerifyRecordOutcome> CreateVerifyRecordOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateVerifyRecordRequest&, CreateVerifyRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifyRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCdnDomainResponse> DeleteCdnDomainOutcome;
                typedef std::future<DeleteCdnDomainOutcome> DeleteCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DeleteCdnDomainRequest&, DeleteCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClsLogTopicResponse> DeleteClsLogTopicOutcome;
                typedef std::future<DeleteClsLogTopicOutcome> DeleteClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DeleteClsLogTopicRequest&, DeleteClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClsLogTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteScdnDomainResponse> DeleteScdnDomainOutcome;
                typedef std::future<DeleteScdnDomainOutcome> DeleteScdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DeleteScdnDomainRequest&, DeleteScdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingDataResponse> DescribeBillingDataOutcome;
                typedef std::future<DescribeBillingDataOutcome> DescribeBillingDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeBillingDataRequest&, DescribeBillingDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcDataResponse> DescribeCcDataOutcome;
                typedef std::future<DescribeCcDataOutcome> DescribeCcDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCcDataRequest&, DescribeCcDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnDataResponse> DescribeCdnDataOutcome;
                typedef std::future<DescribeCdnDataOutcome> DescribeCdnDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnDataRequest&, DescribeCdnDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnDomainLogsResponse> DescribeCdnDomainLogsOutcome;
                typedef std::future<DescribeCdnDomainLogsOutcome> DescribeCdnDomainLogsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainLogsRequest&, DescribeCdnDomainLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnIpResponse> DescribeCdnIpOutcome;
                typedef std::future<DescribeCdnIpOutcome> DescribeCdnIpOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnIpRequest&, DescribeCdnIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCdnOriginIpResponse> DescribeCdnOriginIpOutcome;
                typedef std::future<DescribeCdnOriginIpOutcome> DescribeCdnOriginIpOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnOriginIpRequest&, DescribeCdnOriginIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnOriginIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertDomainsResponse> DescribeCertDomainsOutcome;
                typedef std::future<DescribeCertDomainsOutcome> DescribeCertDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCertDomainsRequest&, DescribeCertDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSDataResponse> DescribeDDoSDataOutcome;
                typedef std::future<DescribeDDoSDataOutcome> DescribeDDoSDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeDDoSDataRequest&, DescribeDDoSDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiagnoseReportResponse> DescribeDiagnoseReportOutcome;
                typedef std::future<DescribeDiagnoseReportOutcome> DescribeDiagnoseReportOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeDiagnoseReportRequest&, DescribeDiagnoseReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiagnoseReportAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDistrictIspDataResponse> DescribeDistrictIspDataOutcome;
                typedef std::future<DescribeDistrictIspDataOutcome> DescribeDistrictIspDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeDistrictIspDataRequest&, DescribeDistrictIspDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDistrictIspDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsConfigResponse> DescribeDomainsConfigOutcome;
                typedef std::future<DescribeDomainsConfigOutcome> DescribeDomainsConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeDomainsConfigRequest&, DescribeDomainsConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgePackTaskStatusResponse> DescribeEdgePackTaskStatusOutcome;
                typedef std::future<DescribeEdgePackTaskStatusOutcome> DescribeEdgePackTaskStatusOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeEdgePackTaskStatusRequest&, DescribeEdgePackTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgePackTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventLogDataResponse> DescribeEventLogDataOutcome;
                typedef std::future<DescribeEventLogDataOutcome> DescribeEventLogDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeEventLogDataRequest&, DescribeEventLogDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventLogDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHttpsPackagesResponse> DescribeHttpsPackagesOutcome;
                typedef std::future<DescribeHttpsPackagesOutcome> DescribeHttpsPackagesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeHttpsPackagesRequest&, DescribeHttpsPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHttpsPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageConfigResponse> DescribeImageConfigOutcome;
                typedef std::future<DescribeImageConfigOutcome> DescribeImageConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeImageConfigRequest&, DescribeImageConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpStatusResponse> DescribeIpStatusOutcome;
                typedef std::future<DescribeIpStatusOutcome> DescribeIpStatusOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeIpStatusRequest&, DescribeIpStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpVisitResponse> DescribeIpVisitOutcome;
                typedef std::future<DescribeIpVisitOutcome> DescribeIpVisitOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeIpVisitRequest&, DescribeIpVisitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpVisitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMapInfoResponse> DescribeMapInfoOutcome;
                typedef std::future<DescribeMapInfoOutcome> DescribeMapInfoOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeMapInfoRequest&, DescribeMapInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMapInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginDataResponse> DescribeOriginDataOutcome;
                typedef std::future<DescribeOriginDataOutcome> DescribeOriginDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeOriginDataRequest&, DescribeOriginDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePayTypeResponse> DescribePayTypeOutcome;
                typedef std::future<DescribePayTypeOutcome> DescribePayTypeOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePayTypeRequest&, DescribePayTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePayTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeQuotaResponse> DescribePurgeQuotaOutcome;
                typedef std::future<DescribePurgeQuotaOutcome> DescribePurgeQuotaOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePurgeQuotaRequest&, DescribePurgeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePushQuotaResponse> DescribePushQuotaOutcome;
                typedef std::future<DescribePushQuotaOutcome> DescribePushQuotaOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePushQuotaRequest&, DescribePushQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePushTasksResponse> DescribePushTasksOutcome;
                typedef std::future<DescribePushTasksOutcome> DescribePushTasksOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePushTasksRequest&, DescribePushTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReportDataResponse> DescribeReportDataOutcome;
                typedef std::future<DescribeReportDataOutcome> DescribeReportDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeReportDataRequest&, DescribeReportDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScdnBotDataResponse> DescribeScdnBotDataOutcome;
                typedef std::future<DescribeScdnBotDataOutcome> DescribeScdnBotDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeScdnBotDataRequest&, DescribeScdnBotDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnBotDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScdnBotRecordsResponse> DescribeScdnBotRecordsOutcome;
                typedef std::future<DescribeScdnBotRecordsOutcome> DescribeScdnBotRecordsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeScdnBotRecordsRequest&, DescribeScdnBotRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnBotRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScdnConfigResponse> DescribeScdnConfigOutcome;
                typedef std::future<DescribeScdnConfigOutcome> DescribeScdnConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeScdnConfigRequest&, DescribeScdnConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScdnIpStrategyResponse> DescribeScdnIpStrategyOutcome;
                typedef std::future<DescribeScdnIpStrategyOutcome> DescribeScdnIpStrategyOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeScdnIpStrategyRequest&, DescribeScdnIpStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnIpStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScdnTopDataResponse> DescribeScdnTopDataOutcome;
                typedef std::future<DescribeScdnTopDataOutcome> DescribeScdnTopDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeScdnTopDataRequest&, DescribeScdnTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScdnTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopDataResponse> DescribeTopDataOutcome;
                typedef std::future<DescribeTopDataOutcome> DescribeTopDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeTopDataRequest&, DescribeTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficPackagesResponse> DescribeTrafficPackagesOutcome;
                typedef std::future<DescribeTrafficPackagesOutcome> DescribeTrafficPackagesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeTrafficPackagesRequest&, DescribeTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUrlViolationsResponse> DescribeUrlViolationsOutcome;
                typedef std::future<DescribeUrlViolationsOutcome> DescribeUrlViolationsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeUrlViolationsRequest&, DescribeUrlViolationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUrlViolationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWafDataResponse> DescribeWafDataOutcome;
                typedef std::future<DescribeWafDataOutcome> DescribeWafDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeWafDataRequest&, DescribeWafDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableCachesResponse> DisableCachesOutcome;
                typedef std::future<DisableCachesOutcome> DisableCachesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DisableCachesRequest&, DisableCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCachesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableClsLogTopicResponse> DisableClsLogTopicOutcome;
                typedef std::future<DisableClsLogTopicOutcome> DisableClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DisableClsLogTopicRequest&, DisableClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableClsLogTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DuplicateDomainConfigResponse> DuplicateDomainConfigOutcome;
                typedef std::future<DuplicateDomainConfigOutcome> DuplicateDomainConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DuplicateDomainConfigRequest&, DuplicateDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DuplicateDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableCachesResponse> EnableCachesOutcome;
                typedef std::future<EnableCachesOutcome> EnableCachesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::EnableCachesRequest&, EnableCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableCachesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableClsLogTopicResponse> EnableClsLogTopicOutcome;
                typedef std::future<EnableClsLogTopicOutcome> EnableClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::EnableClsLogTopicRequest&, EnableClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableClsLogTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDisableRecordsResponse> GetDisableRecordsOutcome;
                typedef std::future<GetDisableRecordsOutcome> GetDisableRecordsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::GetDisableRecordsRequest&, GetDisableRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDisableRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListClsLogTopicsResponse> ListClsLogTopicsOutcome;
                typedef std::future<ListClsLogTopicsOutcome> ListClsLogTopicsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListClsLogTopicsRequest&, ListClsLogTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListClsLogTopicsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListClsTopicDomainsResponse> ListClsTopicDomainsOutcome;
                typedef std::future<ListClsTopicDomainsOutcome> ListClsTopicDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListClsTopicDomainsRequest&, ListClsTopicDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListClsTopicDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListDiagnoseReportResponse> ListDiagnoseReportOutcome;
                typedef std::future<ListDiagnoseReportOutcome> ListDiagnoseReportOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListDiagnoseReportRequest&, ListDiagnoseReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListDiagnoseReportAsyncHandler;
                typedef Outcome<Core::Error, Model::ListScdnDomainsResponse> ListScdnDomainsOutcome;
                typedef std::future<ListScdnDomainsOutcome> ListScdnDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListScdnDomainsRequest&, ListScdnDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListScdnDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListScdnLogTasksResponse> ListScdnLogTasksOutcome;
                typedef std::future<ListScdnLogTasksOutcome> ListScdnLogTasksOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListScdnLogTasksRequest&, ListScdnLogTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListScdnLogTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ListScdnTopBotDataResponse> ListScdnTopBotDataOutcome;
                typedef std::future<ListScdnTopBotDataOutcome> ListScdnTopBotDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListScdnTopBotDataRequest&, ListScdnTopBotDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListScdnTopBotDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTopBotDataResponse> ListTopBotDataOutcome;
                typedef std::future<ListTopBotDataOutcome> ListTopBotDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListTopBotDataRequest&, ListTopBotDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopBotDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTopCcDataResponse> ListTopCcDataOutcome;
                typedef std::future<ListTopCcDataOutcome> ListTopCcDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListTopCcDataRequest&, ListTopCcDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopCcDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTopClsLogDataResponse> ListTopClsLogDataOutcome;
                typedef std::future<ListTopClsLogDataOutcome> ListTopClsLogDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListTopClsLogDataRequest&, ListTopClsLogDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopClsLogDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTopDDoSDataResponse> ListTopDDoSDataOutcome;
                typedef std::future<ListTopDDoSDataOutcome> ListTopDDoSDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListTopDDoSDataRequest&, ListTopDDoSDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopDDoSDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTopDataResponse> ListTopDataOutcome;
                typedef std::future<ListTopDataOutcome> ListTopDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListTopDataRequest&, ListTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTopWafDataResponse> ListTopWafDataOutcome;
                typedef std::future<ListTopWafDataOutcome> ListTopWafDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListTopWafDataRequest&, ListTopWafDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopWafDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ManageClsTopicDomainsResponse> ManageClsTopicDomainsOutcome;
                typedef std::future<ManageClsTopicDomainsOutcome> ManageClsTopicDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ManageClsTopicDomainsRequest&, ManageClsTopicDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageClsTopicDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainConfigResponse> ModifyDomainConfigOutcome;
                typedef std::future<ModifyDomainConfigOutcome> ModifyDomainConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ModifyDomainConfigRequest&, ModifyDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPurgeFetchTaskStatusResponse> ModifyPurgeFetchTaskStatusOutcome;
                typedef std::future<ModifyPurgeFetchTaskStatusOutcome> ModifyPurgeFetchTaskStatusOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ModifyPurgeFetchTaskStatusRequest&, ModifyPurgeFetchTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPurgeFetchTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::PurgePathCacheResponse> PurgePathCacheOutcome;
                typedef std::future<PurgePathCacheOutcome> PurgePathCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PurgePathCacheRequest&, PurgePathCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgePathCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::PurgeUrlsCacheResponse> PurgeUrlsCacheOutcome;
                typedef std::future<PurgeUrlsCacheOutcome> PurgeUrlsCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PurgeUrlsCacheRequest&, PurgeUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgeUrlsCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::PushUrlsCacheResponse> PushUrlsCacheOutcome;
                typedef std::future<PushUrlsCacheOutcome> PushUrlsCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PushUrlsCacheRequest&, PushUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushUrlsCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchClsLogResponse> SearchClsLogOutcome;
                typedef std::future<SearchClsLogOutcome> SearchClsLogOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::SearchClsLogRequest&, SearchClsLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchClsLogAsyncHandler;
                typedef Outcome<Core::Error, Model::StartCdnDomainResponse> StartCdnDomainOutcome;
                typedef std::future<StartCdnDomainOutcome> StartCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::StartCdnDomainRequest&, StartCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartCdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::StartScdnDomainResponse> StartScdnDomainOutcome;
                typedef std::future<StartScdnDomainOutcome> StartScdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::StartScdnDomainRequest&, StartScdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartScdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::StopCdnDomainResponse> StopCdnDomainOutcome;
                typedef std::future<StopCdnDomainOutcome> StopCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::StopCdnDomainRequest&, StopCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::StopScdnDomainResponse> StopScdnDomainOutcome;
                typedef std::future<StopScdnDomainOutcome> StopScdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::StopScdnDomainRequest&, StopScdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopScdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDomainConfigResponse> UpdateDomainConfigOutcome;
                typedef std::future<UpdateDomainConfigOutcome> UpdateDomainConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdateDomainConfigRequest&, UpdateDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateImageConfigResponse> UpdateImageConfigOutcome;
                typedef std::future<UpdateImageConfigOutcome> UpdateImageConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdateImageConfigRequest&, UpdateImageConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePayTypeResponse> UpdatePayTypeOutcome;
                typedef std::future<UpdatePayTypeOutcome> UpdatePayTypeOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdatePayTypeRequest&, UpdatePayTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePayTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateScdnDomainResponse> UpdateScdnDomainOutcome;
                typedef std::future<UpdateScdnDomainOutcome> UpdateScdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdateScdnDomainRequest&, UpdateScdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateScdnDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyDomainRecordResponse> VerifyDomainRecordOutcome;
                typedef std::future<VerifyDomainRecordOutcome> VerifyDomainRecordOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::VerifyDomainRecordRequest&, VerifyDomainRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDomainRecordAsyncHandler;



                /**
                 *AddCLSTopicDomains 用于新增域名到某日志主题下
                 * @param req AddCLSTopicDomainsRequest
                 * @return AddCLSTopicDomainsOutcome
                 */
                AddCLSTopicDomainsOutcome AddCLSTopicDomains(const Model::AddCLSTopicDomainsRequest &request);
                void AddCLSTopicDomainsAsync(const Model::AddCLSTopicDomainsRequest& request, const AddCLSTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCLSTopicDomainsOutcomeCallable AddCLSTopicDomainsCallable(const Model::AddCLSTopicDomainsRequest& request);

                /**
                 *AddCdnDomain 用于新增内容分发网络加速域名。1分钟内最多可新增100个域名。
                 * @param req AddCdnDomainRequest
                 * @return AddCdnDomainOutcome
                 */
                AddCdnDomainOutcome AddCdnDomain(const Model::AddCdnDomainRequest &request);
                void AddCdnDomainAsync(const Model::AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCdnDomainOutcomeCallable AddCdnDomainCallable(const Model::AddCdnDomainRequest& request);

                /**
                 *CreateClsLogTopic 用于创建日志主题。注意：一个日志集下至多可创建10个日志主题。
                 * @param req CreateClsLogTopicRequest
                 * @return CreateClsLogTopicOutcome
                 */
                CreateClsLogTopicOutcome CreateClsLogTopic(const Model::CreateClsLogTopicRequest &request);
                void CreateClsLogTopicAsync(const Model::CreateClsLogTopicRequest& request, const CreateClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClsLogTopicOutcomeCallable CreateClsLogTopicCallable(const Model::CreateClsLogTopicRequest& request);

                /**
                 *### <font color=red>**该接口已废弃** </font><br>
CreateDiagnoseUrl 用于添加域名诊断任务URL。
                 * @param req CreateDiagnoseUrlRequest
                 * @return CreateDiagnoseUrlOutcome
                 */
                CreateDiagnoseUrlOutcome CreateDiagnoseUrl(const Model::CreateDiagnoseUrlRequest &request);
                void CreateDiagnoseUrlAsync(const Model::CreateDiagnoseUrlRequest& request, const CreateDiagnoseUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDiagnoseUrlOutcomeCallable CreateDiagnoseUrlCallable(const Model::CreateDiagnoseUrlRequest& request);

                /**
                 *动态打包任务提交接口
                 * @param req CreateEdgePackTaskRequest
                 * @return CreateEdgePackTaskOutcome
                 */
                CreateEdgePackTaskOutcome CreateEdgePackTask(const Model::CreateEdgePackTaskRequest &request);
                void CreateEdgePackTaskAsync(const Model::CreateEdgePackTaskRequest& request, const CreateEdgePackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgePackTaskOutcomeCallable CreateEdgePackTaskCallable(const Model::CreateEdgePackTaskRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

CreateScdnDomain 用于创建 SCDN 加速域名
                 * @param req CreateScdnDomainRequest
                 * @return CreateScdnDomainOutcome
                 */
                CreateScdnDomainOutcome CreateScdnDomain(const Model::CreateScdnDomainRequest &request);
                void CreateScdnDomainAsync(const Model::CreateScdnDomainRequest& request, const CreateScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScdnDomainOutcomeCallable CreateScdnDomainCallable(const Model::CreateScdnDomainRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

CreateScdnFailedLogTask 用于重试创建失败的事件日志任务
                 * @param req CreateScdnFailedLogTaskRequest
                 * @return CreateScdnFailedLogTaskOutcome
                 */
                CreateScdnFailedLogTaskOutcome CreateScdnFailedLogTask(const Model::CreateScdnFailedLogTaskRequest &request);
                void CreateScdnFailedLogTaskAsync(const Model::CreateScdnFailedLogTaskRequest& request, const CreateScdnFailedLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScdnFailedLogTaskOutcomeCallable CreateScdnFailedLogTaskCallable(const Model::CreateScdnFailedLogTaskRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

CreateScdnLogTask 用于创建事件日志任务
                 * @param req CreateScdnLogTaskRequest
                 * @return CreateScdnLogTaskOutcome
                 */
                CreateScdnLogTaskOutcome CreateScdnLogTask(const Model::CreateScdnLogTaskRequest &request);
                void CreateScdnLogTaskAsync(const Model::CreateScdnLogTaskRequest& request, const CreateScdnLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateScdnLogTaskOutcomeCallable CreateScdnLogTaskCallable(const Model::CreateScdnLogTaskRequest& request);

                /**
                 *CreateVerifyRecord 用于生成一条子域名解析，提示客户添加到域名解析上，用于泛域名及域名取回校验归属权。
生成的解析记录可通过 [VerifyDomainRecord](https://cloud.tencent.com/document/product/228/48117) 完成归属权校验。
注意：生成的解析记录有效期为24小时，超过24小时后，需重新生成。
具体流程可参考：[使用API接口进行域名归属校验](https://cloud.tencent.com/document/product/228/61702#.E6.96.B9.E6.B3.95.E4.B8.89.EF.BC.9Aapi-.E6.8E.A5.E5.8F.A3.E6.93.8D.E4.BD.9C)
                 * @param req CreateVerifyRecordRequest
                 * @return CreateVerifyRecordOutcome
                 */
                CreateVerifyRecordOutcome CreateVerifyRecord(const Model::CreateVerifyRecordRequest &request);
                void CreateVerifyRecordAsync(const Model::CreateVerifyRecordRequest& request, const CreateVerifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVerifyRecordOutcomeCallable CreateVerifyRecordCallable(const Model::CreateVerifyRecordRequest& request);

                /**
                 *DeleteCdnDomain 用于删除指定加速域名
                 * @param req DeleteCdnDomainRequest
                 * @return DeleteCdnDomainOutcome
                 */
                DeleteCdnDomainOutcome DeleteCdnDomain(const Model::DeleteCdnDomainRequest &request);
                void DeleteCdnDomainAsync(const Model::DeleteCdnDomainRequest& request, const DeleteCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCdnDomainOutcomeCallable DeleteCdnDomainCallable(const Model::DeleteCdnDomainRequest& request);

                /**
                 *DeleteClsLogTopic 用于删除日志主题。注意：删除后，所有该日志主题下绑定域名的日志将不再继续投递至该主题，已经投递的日志将会被全部清空。生效时间约为 5~15 分钟。
                 * @param req DeleteClsLogTopicRequest
                 * @return DeleteClsLogTopicOutcome
                 */
                DeleteClsLogTopicOutcome DeleteClsLogTopic(const Model::DeleteClsLogTopicRequest &request);
                void DeleteClsLogTopicAsync(const Model::DeleteClsLogTopicRequest& request, const DeleteClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClsLogTopicOutcomeCallable DeleteClsLogTopicCallable(const Model::DeleteClsLogTopicRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

删除SCDN域名
                 * @param req DeleteScdnDomainRequest
                 * @return DeleteScdnDomainOutcome
                 */
                DeleteScdnDomainOutcome DeleteScdnDomain(const Model::DeleteScdnDomainRequest &request);
                void DeleteScdnDomainAsync(const Model::DeleteScdnDomainRequest& request, const DeleteScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteScdnDomainOutcomeCallable DeleteScdnDomainCallable(const Model::DeleteScdnDomainRequest& request);

                /**
                 *DescribeBillingData 用于查询实际计费数据明细。
                 * @param req DescribeBillingDataRequest
                 * @return DescribeBillingDataOutcome
                 */
                DescribeBillingDataOutcome DescribeBillingData(const Model::DescribeBillingDataRequest &request);
                void DescribeBillingDataAsync(const Model::DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingDataOutcomeCallable DescribeBillingDataCallable(const Model::DescribeBillingDataRequest& request);

                /**
                 *SCDN平台下线，接口开始预下线处理

CC统计数据查询
                 * @param req DescribeCcDataRequest
                 * @return DescribeCcDataOutcome
                 */
                DescribeCcDataOutcome DescribeCcData(const Model::DescribeCcDataRequest &request);
                void DescribeCcDataAsync(const Model::DescribeCcDataRequest& request, const DescribeCcDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcDataOutcomeCallable DescribeCcDataCallable(const Model::DescribeCcDataRequest& request);

                /**
                 *DescribeCdnData 用于查询 CDN 实时访问监控数据，支持以下指标查询：

+ 流量（单位为 byte）
+ 带宽（单位为 bps）
+ 请求数（单位为 次）
+ 命中请求数（单位为 次）
+ 请求命中率（单位为 %）
+ 命中流量（单位为 byte）
+ 流量命中率（单位为 %）
+ 状态码 2xx 汇总及各 2 开头状态码明细（单位为 个）
+ 状态码 3xx 汇总及各 3 开头状态码明细（单位为 个）
+ 状态码 4xx 汇总及各 4 开头状态码明细（单位为 个）
+ 状态码 5xx 汇总及各 5 开头状态码明细（单位为 个）
                 * @param req DescribeCdnDataRequest
                 * @return DescribeCdnDataOutcome
                 */
                DescribeCdnDataOutcome DescribeCdnData(const Model::DescribeCdnDataRequest &request);
                void DescribeCdnDataAsync(const Model::DescribeCdnDataRequest& request, const DescribeCdnDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnDataOutcomeCallable DescribeCdnDataCallable(const Model::DescribeCdnDataRequest& request);

                /**
                 *DescribeCdnDomainLogs 用于查询访问日志下载地址，仅支持 30 天以内的境内、境外访问日志下载链接查询。
                 * @param req DescribeCdnDomainLogsRequest
                 * @return DescribeCdnDomainLogsOutcome
                 */
                DescribeCdnDomainLogsOutcome DescribeCdnDomainLogs(const Model::DescribeCdnDomainLogsRequest &request);
                void DescribeCdnDomainLogsAsync(const Model::DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnDomainLogsOutcomeCallable DescribeCdnDomainLogsCallable(const Model::DescribeCdnDomainLogsRequest& request);

                /**
                 *DescribeCdnIp 用于查询 CDN IP 归属。
（注意：此接口请求频率限制以 CDN 侧限制为准：200次/10分钟）
                 * @param req DescribeCdnIpRequest
                 * @return DescribeCdnIpOutcome
                 */
                DescribeCdnIpOutcome DescribeCdnIp(const Model::DescribeCdnIpRequest &request);
                void DescribeCdnIpAsync(const Model::DescribeCdnIpRequest& request, const DescribeCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnIpOutcomeCallable DescribeCdnIpCallable(const Model::DescribeCdnIpRequest& request);

                /**
                 *### <font color=red>**该接口已废弃** </font><br>
本接口（DescribeCdnOriginIp）用于查询 CDN 回源节点的IP信息。（注：替换接口为DescribeIpStatus）
                 * @param req DescribeCdnOriginIpRequest
                 * @return DescribeCdnOriginIpOutcome
                 */
                DescribeCdnOriginIpOutcome DescribeCdnOriginIp(const Model::DescribeCdnOriginIpRequest &request);
                void DescribeCdnOriginIpAsync(const Model::DescribeCdnOriginIpRequest& request, const DescribeCdnOriginIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnOriginIpOutcomeCallable DescribeCdnOriginIpCallable(const Model::DescribeCdnOriginIpRequest& request);

                /**
                 *DescribeCertDomains 用于校验SSL证书并提取证书中包含的域名。
                 * @param req DescribeCertDomainsRequest
                 * @return DescribeCertDomainsOutcome
                 */
                DescribeCertDomainsOutcome DescribeCertDomains(const Model::DescribeCertDomainsRequest &request);
                void DescribeCertDomainsAsync(const Model::DescribeCertDomainsRequest& request, const DescribeCertDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertDomainsOutcomeCallable DescribeCertDomainsCallable(const Model::DescribeCertDomainsRequest& request);

                /**
                 *SCDN平台下线，接口开始预下线处理

DDoS统计数据查询
                 * @param req DescribeDDoSDataRequest
                 * @return DescribeDDoSDataOutcome
                 */
                DescribeDDoSDataOutcome DescribeDDoSData(const Model::DescribeDDoSDataRequest &request);
                void DescribeDDoSDataAsync(const Model::DescribeDDoSDataRequest& request, const DescribeDDoSDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSDataOutcomeCallable DescribeDDoSDataCallable(const Model::DescribeDDoSDataRequest& request);

                /**
                 *### <font color=red>**该接口已废弃** </font><br>
DescribeDiagnoseReport 用于获取指定报告id的内容。
                 * @param req DescribeDiagnoseReportRequest
                 * @return DescribeDiagnoseReportOutcome
                 */
                DescribeDiagnoseReportOutcome DescribeDiagnoseReport(const Model::DescribeDiagnoseReportRequest &request);
                void DescribeDiagnoseReportAsync(const Model::DescribeDiagnoseReportRequest& request, const DescribeDiagnoseReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiagnoseReportOutcomeCallable DescribeDiagnoseReportCallable(const Model::DescribeDiagnoseReportRequest& request);

                /**
                 *查询指定域名的区域、运营商明细数据
注意事项：接口尚未全面开放，未在内测名单中的账号不支持调用
                 * @param req DescribeDistrictIspDataRequest
                 * @return DescribeDistrictIspDataOutcome
                 */
                DescribeDistrictIspDataOutcome DescribeDistrictIspData(const Model::DescribeDistrictIspDataRequest &request);
                void DescribeDistrictIspDataAsync(const Model::DescribeDistrictIspDataRequest& request, const DescribeDistrictIspDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDistrictIspDataOutcomeCallable DescribeDistrictIspDataCallable(const Model::DescribeDistrictIspDataRequest& request);

                /**
                 *DescribeDomains 用于查询内容分发网络加速域名（含境内、境外）基本配置信息，包括项目ID、服务状态，业务类型、创建时间、更新时间等信息。
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *DescribeDomainsConfig 用于查询内容分发网络加速域名（含境内、境外）的所有配置信息。
                 * @param req DescribeDomainsConfigRequest
                 * @return DescribeDomainsConfigOutcome
                 */
                DescribeDomainsConfigOutcome DescribeDomainsConfig(const Model::DescribeDomainsConfigRequest &request);
                void DescribeDomainsConfigAsync(const Model::DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsConfigOutcomeCallable DescribeDomainsConfigCallable(const Model::DescribeDomainsConfigRequest& request);

                /**
                 *DescribeEdgePackTaskStatus 用于查询动态打包任务状态列表
                 * @param req DescribeEdgePackTaskStatusRequest
                 * @return DescribeEdgePackTaskStatusOutcome
                 */
                DescribeEdgePackTaskStatusOutcome DescribeEdgePackTaskStatus(const Model::DescribeEdgePackTaskStatusRequest &request);
                void DescribeEdgePackTaskStatusAsync(const Model::DescribeEdgePackTaskStatusRequest& request, const DescribeEdgePackTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgePackTaskStatusOutcomeCallable DescribeEdgePackTaskStatusCallable(const Model::DescribeEdgePackTaskStatusRequest& request);

                /**
                 *SCDN平台下线，接口开始预下线处理

DescribeEventLogData 用于查询事件日志统计曲线
                 * @param req DescribeEventLogDataRequest
                 * @return DescribeEventLogDataOutcome
                 */
                DescribeEventLogDataOutcome DescribeEventLogData(const Model::DescribeEventLogDataRequest &request);
                void DescribeEventLogDataAsync(const Model::DescribeEventLogDataRequest& request, const DescribeEventLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventLogDataOutcomeCallable DescribeEventLogDataCallable(const Model::DescribeEventLogDataRequest& request);

                /**
                 *DescribeHttpsPackages 用于查询 CDN HTTPS请求包详情。
                 * @param req DescribeHttpsPackagesRequest
                 * @return DescribeHttpsPackagesOutcome
                 */
                DescribeHttpsPackagesOutcome DescribeHttpsPackages(const Model::DescribeHttpsPackagesRequest &request);
                void DescribeHttpsPackagesAsync(const Model::DescribeHttpsPackagesRequest& request, const DescribeHttpsPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHttpsPackagesOutcomeCallable DescribeHttpsPackagesCallable(const Model::DescribeHttpsPackagesRequest& request);

                /**
                 *DescribeImageConfig 用于获取域名图片优化的当前配置，支持Webp、TPG、 Guetzli 和 Avif。
                 * @param req DescribeImageConfigRequest
                 * @return DescribeImageConfigOutcome
                 */
                DescribeImageConfigOutcome DescribeImageConfig(const Model::DescribeImageConfigRequest &request);
                void DescribeImageConfigAsync(const Model::DescribeImageConfigRequest& request, const DescribeImageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageConfigOutcomeCallable DescribeImageConfigCallable(const Model::DescribeImageConfigRequest& request);

                /**
                 *DescribeIpStatus 用于查询域名所在加速平台的边缘节点、回源节点明细。注意事项：暂不支持查询边缘节点信息并且数据会存在一定延迟。

>?  若您的业务已迁移至 CDN 控制台，请参考<a href="https://cloud.tencent.com/document/api/228/41954"> CDN 接口文档</a>，使用  CDN 相关API 进行操作。
                 * @param req DescribeIpStatusRequest
                 * @return DescribeIpStatusOutcome
                 */
                DescribeIpStatusOutcome DescribeIpStatus(const Model::DescribeIpStatusRequest &request);
                void DescribeIpStatusAsync(const Model::DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpStatusOutcomeCallable DescribeIpStatusCallable(const Model::DescribeIpStatusRequest& request);

                /**
                 *DescribeIpVisit 用于查询 5 分钟活跃用户数，及日活跃用户数明细

+ 5 分钟活跃用户数：根据日志中客户端 IP，5 分钟粒度去重统计
+ 日活跃用户数：根据日志中客户端 IP，按天粒度去重统计
                 * @param req DescribeIpVisitRequest
                 * @return DescribeIpVisitOutcome
                 */
                DescribeIpVisitOutcome DescribeIpVisit(const Model::DescribeIpVisitRequest &request);
                void DescribeIpVisitAsync(const Model::DescribeIpVisitRequest& request, const DescribeIpVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpVisitOutcomeCallable DescribeIpVisitCallable(const Model::DescribeIpVisitRequest& request);

                /**
                 *DescribeMapInfo 用于查询省份对应的 ID，运营商对应的 ID 信息。
                 * @param req DescribeMapInfoRequest
                 * @return DescribeMapInfoOutcome
                 */
                DescribeMapInfoOutcome DescribeMapInfo(const Model::DescribeMapInfoRequest &request);
                void DescribeMapInfoAsync(const Model::DescribeMapInfoRequest& request, const DescribeMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMapInfoOutcomeCallable DescribeMapInfoCallable(const Model::DescribeMapInfoRequest& request);

                /**
                 *DescribeOriginData 用于查询 CDN 实时回源监控数据，支持以下指标查询：

+ 回源流量（单位为 byte）
+ 回源带宽（单位为 bps）
+ 回源请求数（单位为 次）
+ 回源失败请求数（单位为 次）
+ 回源失败率（单位为 %，小数点后保留两位）
+ 回源状态码 2xx 汇总及各 2 开头回源状态码明细（单位为 个）
+ 回源状态码 3xx 汇总及各 3 开头回源状态码明细（单位为 个）
+ 回源状态码 4xx 汇总及各 4 开头回源状态码明细（单位为 个）
+ 回源状态码 5xx 汇总及各 5 开头回源状态码明细（单位为 个）
                 * @param req DescribeOriginDataRequest
                 * @return DescribeOriginDataOutcome
                 */
                DescribeOriginDataOutcome DescribeOriginData(const Model::DescribeOriginDataRequest &request);
                void DescribeOriginDataAsync(const Model::DescribeOriginDataRequest& request, const DescribeOriginDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginDataOutcomeCallable DescribeOriginDataCallable(const Model::DescribeOriginDataRequest& request);

                /**
                 *DescribePayType 用于查询用户的计费类型，计费周期等信息。
                 * @param req DescribePayTypeRequest
                 * @return DescribePayTypeOutcome
                 */
                DescribePayTypeOutcome DescribePayType(const Model::DescribePayTypeRequest &request);
                void DescribePayTypeAsync(const Model::DescribePayTypeRequest& request, const DescribePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePayTypeOutcomeCallable DescribePayTypeCallable(const Model::DescribePayTypeRequest& request);

                /**
                 *DescribePurgeQuota 用于查询账户刷新配额和每日可用量。
                 * @param req DescribePurgeQuotaRequest
                 * @return DescribePurgeQuotaOutcome
                 */
                DescribePurgeQuotaOutcome DescribePurgeQuota(const Model::DescribePurgeQuotaRequest &request);
                void DescribePurgeQuotaAsync(const Model::DescribePurgeQuotaRequest& request, const DescribePurgeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeQuotaOutcomeCallable DescribePurgeQuotaCallable(const Model::DescribePurgeQuotaRequest& request);

                /**
                 *DescribePurgeTasks 用于查询提交的 URL 刷新、目录刷新记录及执行进度，通过 PurgePathCache 与 PurgeUrlsCache 接口提交的任务均可通过此接口进行查询。
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *DescribePushQuota  用于查询预热配额和每日可用量。
                 * @param req DescribePushQuotaRequest
                 * @return DescribePushQuotaOutcome
                 */
                DescribePushQuotaOutcome DescribePushQuota(const Model::DescribePushQuotaRequest &request);
                void DescribePushQuotaAsync(const Model::DescribePushQuotaRequest& request, const DescribePushQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePushQuotaOutcomeCallable DescribePushQuotaCallable(const Model::DescribePushQuotaRequest& request);

                /**
                 *DescribePushTasks  用于查询预热任务提交历史记录及执行进度。
                 * @param req DescribePushTasksRequest
                 * @return DescribePushTasksOutcome
                 */
                DescribePushTasksOutcome DescribePushTasks(const Model::DescribePushTasksRequest &request);
                void DescribePushTasksAsync(const Model::DescribePushTasksRequest& request, const DescribePushTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePushTasksOutcomeCallable DescribePushTasksCallable(const Model::DescribePushTasksRequest& request);

                /**
                 *DescribeReportData 用于查询域名/项目维度的日/周/月报表数据。
                 * @param req DescribeReportDataRequest
                 * @return DescribeReportDataOutcome
                 */
                DescribeReportDataOutcome DescribeReportData(const Model::DescribeReportDataRequest &request);
                void DescribeReportDataAsync(const Model::DescribeReportDataRequest& request, const DescribeReportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportDataOutcomeCallable DescribeReportDataCallable(const Model::DescribeReportDataRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

获取BOT统计数据列表
                 * @param req DescribeScdnBotDataRequest
                 * @return DescribeScdnBotDataOutcome
                 */
                DescribeScdnBotDataOutcome DescribeScdnBotData(const Model::DescribeScdnBotDataRequest &request);
                void DescribeScdnBotDataAsync(const Model::DescribeScdnBotDataRequest& request, const DescribeScdnBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScdnBotDataOutcomeCallable DescribeScdnBotDataCallable(const Model::DescribeScdnBotDataRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

查询BOT会话记录列表
                 * @param req DescribeScdnBotRecordsRequest
                 * @return DescribeScdnBotRecordsOutcome
                 */
                DescribeScdnBotRecordsOutcome DescribeScdnBotRecords(const Model::DescribeScdnBotRecordsRequest &request);
                void DescribeScdnBotRecordsAsync(const Model::DescribeScdnBotRecordsRequest& request, const DescribeScdnBotRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScdnBotRecordsOutcomeCallable DescribeScdnBotRecordsCallable(const Model::DescribeScdnBotRecordsRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

DescribeScdnConfig 用于查询指定 SCDN 加速域名的安全相关配置
                 * @param req DescribeScdnConfigRequest
                 * @return DescribeScdnConfigOutcome
                 */
                DescribeScdnConfigOutcome DescribeScdnConfig(const Model::DescribeScdnConfigRequest &request);
                void DescribeScdnConfigAsync(const Model::DescribeScdnConfigRequest& request, const DescribeScdnConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScdnConfigOutcomeCallable DescribeScdnConfigCallable(const Model::DescribeScdnConfigRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

查询在SCDN IP安全策略
                 * @param req DescribeScdnIpStrategyRequest
                 * @return DescribeScdnIpStrategyOutcome
                 */
                DescribeScdnIpStrategyOutcome DescribeScdnIpStrategy(const Model::DescribeScdnIpStrategyRequest &request);
                void DescribeScdnIpStrategyAsync(const Model::DescribeScdnIpStrategyRequest& request, const DescribeScdnIpStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScdnIpStrategyOutcomeCallable DescribeScdnIpStrategyCallable(const Model::DescribeScdnIpStrategyRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

获取SCDN的Top数据
                 * @param req DescribeScdnTopDataRequest
                 * @return DescribeScdnTopDataOutcome
                 */
                DescribeScdnTopDataOutcome DescribeScdnTopData(const Model::DescribeScdnTopDataRequest &request);
                void DescribeScdnTopDataAsync(const Model::DescribeScdnTopDataRequest& request, const DescribeScdnTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScdnTopDataOutcomeCallable DescribeScdnTopDataCallable(const Model::DescribeScdnTopDataRequest& request);

                /**
                 *DescribeTopData 通过入参 Metric 和 Filter 组合不同，可以查询以下排序数据：

+ 依据总流量、总请求数对访问 IP 排序，从大至小返回 TOP 100 IP
+ 依据总流量、总请求数对访问 Refer 排序，从大至小返回 TOP 100 Refer
+ 依据总流量、总请求数对访问 设备 排序，从大至小返回 设备类型
+ 依据总流量、总请求数对访问 操作系统 排序，从大至小返回 操作系统
+ 依据总流量、总请求数对访问 浏览器 排序，从大至小返回 浏览器

注意：
+ 仅支持 90 天内数据查询，且从2021年09月20日开始有数据
                 * @param req DescribeTopDataRequest
                 * @return DescribeTopDataOutcome
                 */
                DescribeTopDataOutcome DescribeTopData(const Model::DescribeTopDataRequest &request);
                void DescribeTopDataAsync(const Model::DescribeTopDataRequest& request, const DescribeTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopDataOutcomeCallable DescribeTopDataCallable(const Model::DescribeTopDataRequest& request);

                /**
                 *DescribeTrafficPackages 用于查询 CDN 流量包详情。
                 * @param req DescribeTrafficPackagesRequest
                 * @return DescribeTrafficPackagesOutcome
                 */
                DescribeTrafficPackagesOutcome DescribeTrafficPackages(const Model::DescribeTrafficPackagesRequest &request);
                void DescribeTrafficPackagesAsync(const Model::DescribeTrafficPackagesRequest& request, const DescribeTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficPackagesOutcomeCallable DescribeTrafficPackagesCallable(const Model::DescribeTrafficPackagesRequest& request);

                /**
                 *DescribeUrlViolations 用于查询被 CDN 系统扫描到的域名违规 URL 列表及当前状态。
对应内容分发网络控制台【内容合规】页面。
                 * @param req DescribeUrlViolationsRequest
                 * @return DescribeUrlViolationsOutcome
                 */
                DescribeUrlViolationsOutcome DescribeUrlViolations(const Model::DescribeUrlViolationsRequest &request);
                void DescribeUrlViolationsAsync(const Model::DescribeUrlViolationsRequest& request, const DescribeUrlViolationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUrlViolationsOutcomeCallable DescribeUrlViolationsCallable(const Model::DescribeUrlViolationsRequest& request);

                /**
                 *SCDN平台下线，接口开始预下线处理

Waf统计数据查询
                 * @param req DescribeWafDataRequest
                 * @return DescribeWafDataOutcome
                 */
                DescribeWafDataOutcome DescribeWafData(const Model::DescribeWafDataRequest &request);
                void DescribeWafDataAsync(const Model::DescribeWafDataRequest& request, const DescribeWafDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWafDataOutcomeCallable DescribeWafDataCallable(const Model::DescribeWafDataRequest& request);

                /**
                 *### <font color=red>**该接口已废弃** </font><br>
DisableCaches 用于禁用 CDN 上指定 URL 的访问，禁用完成后，中国境内访问会直接返回 403。
                 * @param req DisableCachesRequest
                 * @return DisableCachesOutcome
                 */
                DisableCachesOutcome DisableCaches(const Model::DisableCachesRequest &request);
                void DisableCachesAsync(const Model::DisableCachesRequest& request, const DisableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCachesOutcomeCallable DisableCachesCallable(const Model::DisableCachesRequest& request);

                /**
                 *DisableClsLogTopic 用于停止日志主题投递。注意：停止后，所有绑定该日志主题域名的日志将不再继续投递至该主题，已经投递的日志将会继续保留。生效时间约为 5~15 分钟。

                 * @param req DisableClsLogTopicRequest
                 * @return DisableClsLogTopicOutcome
                 */
                DisableClsLogTopicOutcome DisableClsLogTopic(const Model::DisableClsLogTopicRequest &request);
                void DisableClsLogTopicAsync(const Model::DisableClsLogTopicRequest& request, const DisableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableClsLogTopicOutcomeCallable DisableClsLogTopicCallable(const Model::DisableClsLogTopicRequest& request);

                /**
                 *拷贝参考域名的配置至新域名。暂不支持自有证书以及定制化配置
                 * @param req DuplicateDomainConfigRequest
                 * @return DuplicateDomainConfigOutcome
                 */
                DuplicateDomainConfigOutcome DuplicateDomainConfig(const Model::DuplicateDomainConfigRequest &request);
                void DuplicateDomainConfigAsync(const Model::DuplicateDomainConfigRequest& request, const DuplicateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DuplicateDomainConfigOutcomeCallable DuplicateDomainConfigCallable(const Model::DuplicateDomainConfigRequest& request);

                /**
                 *### <font color=red>**该接口已废弃** </font><br>
EnableCaches 用于解禁手工封禁的 URL，解禁成功后，全网生效时间约 5~10 分钟。
                 * @param req EnableCachesRequest
                 * @return EnableCachesOutcome
                 */
                EnableCachesOutcome EnableCaches(const Model::EnableCachesRequest &request);
                void EnableCachesAsync(const Model::EnableCachesRequest& request, const EnableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableCachesOutcomeCallable EnableCachesCallable(const Model::EnableCachesRequest& request);

                /**
                 *EnableClsLogTopic 用于启动日志主题投递。注意：启动后，所有绑定该日志主题域名的日志将继续投递至该主题。生效时间约为 5~15 分钟。
                 * @param req EnableClsLogTopicRequest
                 * @return EnableClsLogTopicOutcome
                 */
                EnableClsLogTopicOutcome EnableClsLogTopic(const Model::EnableClsLogTopicRequest &request);
                void EnableClsLogTopicAsync(const Model::EnableClsLogTopicRequest& request, const EnableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableClsLogTopicOutcomeCallable EnableClsLogTopicCallable(const Model::EnableClsLogTopicRequest& request);

                /**
                 *### <font color=red>**该接口已废弃** </font><br>
GetDisableRecords 用于查询资源禁用历史，及 URL 当前状态。
                 * @param req GetDisableRecordsRequest
                 * @return GetDisableRecordsOutcome
                 */
                GetDisableRecordsOutcome GetDisableRecords(const Model::GetDisableRecordsRequest &request);
                void GetDisableRecordsAsync(const Model::GetDisableRecordsRequest& request, const GetDisableRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDisableRecordsOutcomeCallable GetDisableRecordsCallable(const Model::GetDisableRecordsRequest& request);

                /**
                 *ListClsLogTopics 用于显示日志主题列表。注意：一个日志集下至多含10个日志主题。
                 * @param req ListClsLogTopicsRequest
                 * @return ListClsLogTopicsOutcome
                 */
                ListClsLogTopicsOutcome ListClsLogTopics(const Model::ListClsLogTopicsRequest &request);
                void ListClsLogTopicsAsync(const Model::ListClsLogTopicsRequest& request, const ListClsLogTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListClsLogTopicsOutcomeCallable ListClsLogTopicsCallable(const Model::ListClsLogTopicsRequest& request);

                /**
                 *ListClsTopicDomains 用于获取某日志主题下绑定的域名列表。
                 * @param req ListClsTopicDomainsRequest
                 * @return ListClsTopicDomainsOutcome
                 */
                ListClsTopicDomainsOutcome ListClsTopicDomains(const Model::ListClsTopicDomainsRequest &request);
                void ListClsTopicDomainsAsync(const Model::ListClsTopicDomainsRequest& request, const ListClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListClsTopicDomainsOutcomeCallable ListClsTopicDomainsCallable(const Model::ListClsTopicDomainsRequest& request);

                /**
                 *### <font color=red>**该接口已废弃** </font><br>
ListDiagnoseReport 用于获取用户诊断URL访问后各个子任务的简要详情。
                 * @param req ListDiagnoseReportRequest
                 * @return ListDiagnoseReportOutcome
                 */
                ListDiagnoseReportOutcome ListDiagnoseReport(const Model::ListDiagnoseReportRequest &request);
                void ListDiagnoseReportAsync(const Model::ListDiagnoseReportRequest& request, const ListDiagnoseReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListDiagnoseReportOutcomeCallable ListDiagnoseReportCallable(const Model::ListDiagnoseReportRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

ListScdnDomains 用于查询 SCDN 安全加速域名列表，及域名基本配置信息
                 * @param req ListScdnDomainsRequest
                 * @return ListScdnDomainsOutcome
                 */
                ListScdnDomainsOutcome ListScdnDomains(const Model::ListScdnDomainsRequest &request);
                void ListScdnDomainsAsync(const Model::ListScdnDomainsRequest& request, const ListScdnDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListScdnDomainsOutcomeCallable ListScdnDomainsCallable(const Model::ListScdnDomainsRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

ListScdnLogTasks 用于查询SCDN日志下载任务列表,以及展示下载任务基本信息
                 * @param req ListScdnLogTasksRequest
                 * @return ListScdnLogTasksOutcome
                 */
                ListScdnLogTasksOutcome ListScdnLogTasks(const Model::ListScdnLogTasksRequest &request);
                void ListScdnLogTasksAsync(const Model::ListScdnLogTasksRequest& request, const ListScdnLogTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListScdnLogTasksOutcomeCallable ListScdnLogTasksCallable(const Model::ListScdnLogTasksRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

获取Bot攻击的Top数据列表
                 * @param req ListScdnTopBotDataRequest
                 * @return ListScdnTopBotDataOutcome
                 */
                ListScdnTopBotDataOutcome ListScdnTopBotData(const Model::ListScdnTopBotDataRequest &request);
                void ListScdnTopBotDataAsync(const Model::ListScdnTopBotDataRequest& request, const ListScdnTopBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListScdnTopBotDataOutcomeCallable ListScdnTopBotDataCallable(const Model::ListScdnTopBotDataRequest& request);

                /**
                 *SCDN平台下线，接口开始预下线处理

获取Bot攻击的Top信息
                 * @param req ListTopBotDataRequest
                 * @return ListTopBotDataOutcome
                 */
                ListTopBotDataOutcome ListTopBotData(const Model::ListTopBotDataRequest &request);
                void ListTopBotDataAsync(const Model::ListTopBotDataRequest& request, const ListTopBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopBotDataOutcomeCallable ListTopBotDataCallable(const Model::ListTopBotDataRequest& request);

                /**
                 *SCDN平台下线，接口开始预下线处理

获取CC攻击Top数据
                 * @param req ListTopCcDataRequest
                 * @return ListTopCcDataOutcome
                 */
                ListTopCcDataOutcome ListTopCcData(const Model::ListTopCcDataRequest &request);
                void ListTopCcDataAsync(const Model::ListTopCcDataRequest& request, const ListTopCcDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopCcDataOutcomeCallable ListTopCcDataCallable(const Model::ListTopCcDataRequest& request);

                /**
                 *通过CLS日志计算Top信息。支持近7天的日志数据。
                 * @param req ListTopClsLogDataRequest
                 * @return ListTopClsLogDataOutcome
                 */
                ListTopClsLogDataOutcome ListTopClsLogData(const Model::ListTopClsLogDataRequest &request);
                void ListTopClsLogDataAsync(const Model::ListTopClsLogDataRequest& request, const ListTopClsLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopClsLogDataOutcomeCallable ListTopClsLogDataCallable(const Model::ListTopClsLogDataRequest& request);

                /**
                 *SCDN平台下线，接口开始预下线处理

获取DDoS攻击Top数据
                 * @param req ListTopDDoSDataRequest
                 * @return ListTopDDoSDataOutcome
                 */
                ListTopDDoSDataOutcome ListTopDDoSData(const Model::ListTopDDoSDataRequest &request);
                void ListTopDDoSDataAsync(const Model::ListTopDDoSDataRequest& request, const ListTopDDoSDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopDDoSDataOutcomeCallable ListTopDDoSDataCallable(const Model::ListTopDDoSDataRequest& request);

                /**
                 *ListTopData 通过入参 Metric 和 Filter 组合不同，可以查询以下排序数据：

+ 依据总流量、总请求数对访问 URL 排序，从大至小返回 TOP 1000 URL
+ 依据总流量、总请求数对客户端省份排序，从大至小返回省份列表
+ 依据总流量、总请求数对客户端运营商排序，从大至小返回运营商列表
+ 依据总流量、峰值带宽、总请求数、平均命中率、2XX/3XX/4XX/5XX 状态码对域名排序，从大至小返回域名列表
+ 依据总回源流量、回源峰值带宽、总回源请求数、平均回源失败率、2XX/3XX/4XX/5XX 回源状态码对域名排序，从大至小返回域名列表

注意：仅支持 90 天内数据查询
                 * @param req ListTopDataRequest
                 * @return ListTopDataOutcome
                 */
                ListTopDataOutcome ListTopData(const Model::ListTopDataRequest &request);
                void ListTopDataAsync(const Model::ListTopDataRequest& request, const ListTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopDataOutcomeCallable ListTopDataCallable(const Model::ListTopDataRequest& request);

                /**
                 *SCDN平台下线，接口开始预下线处理

获取Waf攻击Top数据
                 * @param req ListTopWafDataRequest
                 * @return ListTopWafDataOutcome
                 */
                ListTopWafDataOutcome ListTopWafData(const Model::ListTopWafDataRequest &request);
                void ListTopWafDataAsync(const Model::ListTopWafDataRequest& request, const ListTopWafDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopWafDataOutcomeCallable ListTopWafDataCallable(const Model::ListTopWafDataRequest& request);

                /**
                 *ManageClsTopicDomains 用于管理某日志主题下绑定的域名列表。
                 * @param req ManageClsTopicDomainsRequest
                 * @return ManageClsTopicDomainsOutcome
                 */
                ManageClsTopicDomainsOutcome ManageClsTopicDomains(const Model::ManageClsTopicDomainsRequest &request);
                void ManageClsTopicDomainsAsync(const Model::ManageClsTopicDomainsRequest& request, const ManageClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageClsTopicDomainsOutcomeCallable ManageClsTopicDomainsCallable(const Model::ManageClsTopicDomainsRequest& request);

                /**
                 *ModifyDomainConfig 用于修改内容分发网络加速域名配置信息
注意：
Route 字段，使用点分隔，最后一段称为叶子节点，非叶子节点配置保持不变；
Value 字段，使用 json 进行序列化，其中固定 update 作为 key，配置路径值参考 https://cloud.tencent.com/document/product/228/41116 接口各配置项复杂类型，为配置路径对应复杂类型下的节点。
操作审计相关：接口的入参可能包含密钥等敏感信息，所以此接口的入参不会上报到操作审计。
                 * @param req ModifyDomainConfigRequest
                 * @return ModifyDomainConfigOutcome
                 */
                ModifyDomainConfigOutcome ModifyDomainConfig(const Model::ModifyDomainConfigRequest &request);
                void ModifyDomainConfigAsync(const Model::ModifyDomainConfigRequest& request, const ModifyDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainConfigOutcomeCallable ModifyDomainConfigCallable(const Model::ModifyDomainConfigRequest& request);

                /**
                 *ModifyPurgeFetchTaskStatus 用于上报定时刷新预热任务执行状态
                 * @param req ModifyPurgeFetchTaskStatusRequest
                 * @return ModifyPurgeFetchTaskStatusOutcome
                 */
                ModifyPurgeFetchTaskStatusOutcome ModifyPurgeFetchTaskStatus(const Model::ModifyPurgeFetchTaskStatusRequest &request);
                void ModifyPurgeFetchTaskStatusAsync(const Model::ModifyPurgeFetchTaskStatusRequest& request, const ModifyPurgeFetchTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPurgeFetchTaskStatusOutcomeCallable ModifyPurgeFetchTaskStatusCallable(const Model::ModifyPurgeFetchTaskStatusRequest& request);

                /**
                 *PurgePathCache 用于批量提交目录刷新，根据域名的加速区域进行对应区域的刷新。
默认情况下境内、境外加速区域每日目录刷新额度为各 100 条，每次最多可提交 500 条。
                 * @param req PurgePathCacheRequest
                 * @return PurgePathCacheOutcome
                 */
                PurgePathCacheOutcome PurgePathCache(const Model::PurgePathCacheRequest &request);
                void PurgePathCacheAsync(const Model::PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgePathCacheOutcomeCallable PurgePathCacheCallable(const Model::PurgePathCacheRequest& request);

                /**
                 *PurgeUrlsCache 用于批量提交 URL 进行刷新，根据 URL 中域名的当前加速区域进行对应区域的刷新。
默认情况下境内、境外加速区域每日 URL 刷新额度各为 10000 条，每次最多可提交 1000 条。
                 * @param req PurgeUrlsCacheRequest
                 * @return PurgeUrlsCacheOutcome
                 */
                PurgeUrlsCacheOutcome PurgeUrlsCache(const Model::PurgeUrlsCacheRequest &request);
                void PurgeUrlsCacheAsync(const Model::PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgeUrlsCacheOutcomeCallable PurgeUrlsCacheCallable(const Model::PurgeUrlsCacheRequest& request);

                /**
                 *PushUrlsCache 用于将指定 URL 资源列表加载至 CDN 节点，支持指定加速区域预热。
默认情况下境内、境外每日预热 URL 限额为各 1000 条，每次最多可提交 500 条 URL，每次提交的数量会消耗配额总数。如：1次提交500条URL全球预热，此时境内、境外预热 URL 各剩余 500条。注意：中国境外区域预热，资源默认加载至中国境外边缘节点。
                 * @param req PushUrlsCacheRequest
                 * @return PushUrlsCacheOutcome
                 */
                PushUrlsCacheOutcome PushUrlsCache(const Model::PushUrlsCacheRequest &request);
                void PushUrlsCacheAsync(const Model::PushUrlsCacheRequest& request, const PushUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushUrlsCacheOutcomeCallable PushUrlsCacheCallable(const Model::PushUrlsCacheRequest& request);

                /**
                 *SearchClsLog 用于 CLS 日志检索。支持检索今天，24小时（可选近7中的某一天），近7天的日志数据。
                 * @param req SearchClsLogRequest
                 * @return SearchClsLogOutcome
                 */
                SearchClsLogOutcome SearchClsLog(const Model::SearchClsLogRequest &request);
                void SearchClsLogAsync(const Model::SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchClsLogOutcomeCallable SearchClsLogCallable(const Model::SearchClsLogRequest& request);

                /**
                 *StartCdnDomain 用于启用已停用域名的加速服务
                 * @param req StartCdnDomainRequest
                 * @return StartCdnDomainOutcome
                 */
                StartCdnDomainOutcome StartCdnDomain(const Model::StartCdnDomainRequest &request);
                void StartCdnDomainAsync(const Model::StartCdnDomainRequest& request, const StartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartCdnDomainOutcomeCallable StartCdnDomainCallable(const Model::StartCdnDomainRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

StartScdnDomain 用于开启域名的安全防护配置
                 * @param req StartScdnDomainRequest
                 * @return StartScdnDomainOutcome
                 */
                StartScdnDomainOutcome StartScdnDomain(const Model::StartScdnDomainRequest &request);
                void StartScdnDomainAsync(const Model::StartScdnDomainRequest& request, const StartScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartScdnDomainOutcomeCallable StartScdnDomainCallable(const Model::StartScdnDomainRequest& request);

                /**
                 *StopCdnDomain 用于停止域名的加速服务。
注意：停止加速服务后，访问至加速节点的请求将会直接返回 404。为避免对您的业务造成影响，请在停止加速服务前将解析切走。
                 * @param req StopCdnDomainRequest
                 * @return StopCdnDomainOutcome
                 */
                StopCdnDomainOutcome StopCdnDomain(const Model::StopCdnDomainRequest &request);
                void StopCdnDomainAsync(const Model::StopCdnDomainRequest& request, const StopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCdnDomainOutcomeCallable StopCdnDomainCallable(const Model::StopCdnDomainRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

StopScdnDomain 用于关闭域名的安全防护配置
                 * @param req StopScdnDomainRequest
                 * @return StopScdnDomainOutcome
                 */
                StopScdnDomainOutcome StopScdnDomain(const Model::StopScdnDomainRequest &request);
                void StopScdnDomainAsync(const Model::StopScdnDomainRequest& request, const StopScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopScdnDomainOutcomeCallable StopScdnDomainCallable(const Model::StopScdnDomainRequest& request);

                /**
                 *UpdateDomainConfig 用于修改内容分发网络加速域名配置信息。
注意：如果需要更新复杂类型的配置项，必须传递整个对象的所有属性，未传递的属性将使用默认值，建议通过查询接口获取配置属性后，直接修改后传递给本接口。
操作审计相关：接口的入参可能包含密钥等敏感信息，所以此接口的入参不会上报到操作审计。
                 * @param req UpdateDomainConfigRequest
                 * @return UpdateDomainConfigOutcome
                 */
                UpdateDomainConfigOutcome UpdateDomainConfig(const Model::UpdateDomainConfigRequest &request);
                void UpdateDomainConfigAsync(const Model::UpdateDomainConfigRequest& request, const UpdateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDomainConfigOutcomeCallable UpdateDomainConfigCallable(const Model::UpdateDomainConfigRequest& request);

                /**
                 *UpdateImageConfig 用于更新控制台图片优化的相关配置，支持Webp、TPG、 Guetzli 和 Avif。 
                 * @param req UpdateImageConfigRequest
                 * @return UpdateImageConfigOutcome
                 */
                UpdateImageConfigOutcome UpdateImageConfig(const Model::UpdateImageConfigRequest &request);
                void UpdateImageConfigAsync(const Model::UpdateImageConfigRequest& request, const UpdateImageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateImageConfigOutcomeCallable UpdateImageConfigCallable(const Model::UpdateImageConfigRequest& request);

                /**
                 *本接口(UpdatePayType)用于修改账号计费类型，暂不支持月结用户或子账号修改。
                 * @param req UpdatePayTypeRequest
                 * @return UpdatePayTypeOutcome
                 */
                UpdatePayTypeOutcome UpdatePayType(const Model::UpdatePayTypeRequest &request);
                void UpdatePayTypeAsync(const Model::UpdatePayTypeRequest& request, const UpdatePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePayTypeOutcomeCallable UpdatePayTypeCallable(const Model::UpdatePayTypeRequest& request);

                /**
                 *SCDN平台已经正式下线，接口开始预下线处理

UpdateScdnDomain 用于修改 SCDN 加速域名安全相关配置
                 * @param req UpdateScdnDomainRequest
                 * @return UpdateScdnDomainOutcome
                 */
                UpdateScdnDomainOutcome UpdateScdnDomain(const Model::UpdateScdnDomainRequest &request);
                void UpdateScdnDomainAsync(const Model::UpdateScdnDomainRequest& request, const UpdateScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateScdnDomainOutcomeCallable UpdateScdnDomainCallable(const Model::UpdateScdnDomainRequest& request);

                /**
                 *VerifyDomainRecord 用于验证域名解析值。
验证域名解析记录值前，您需要通过 [CreateVerifyRecord](https://cloud.tencent.com/document/product/228/48118) 生成校验解析值，验证通过后，24小时有效。
具体流程可参考：[使用API接口进行域名归属校验](https://cloud.tencent.com/document/product/228/61702#.E6.96.B9.E6.B3.95.E4.B8.89.EF.BC.9Aapi-.E6.8E.A5.E5.8F.A3.E6.93.8D.E4.BD.9C)
                 * @param req VerifyDomainRecordRequest
                 * @return VerifyDomainRecordOutcome
                 */
                VerifyDomainRecordOutcome VerifyDomainRecord(const Model::VerifyDomainRecordRequest &request);
                void VerifyDomainRecordAsync(const Model::VerifyDomainRecordRequest& request, const VerifyDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyDomainRecordOutcomeCallable VerifyDomainRecordCallable(const Model::VerifyDomainRecordRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_
