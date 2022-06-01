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

#ifndef TENCENTCLOUD_TEO_V20220106_TEOCLIENT_H_
#define TENCENTCLOUD_TEO_V20220106_TEOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/teo/v20220106/model/CheckCertificateRequest.h>
#include <tencentcloud/teo/v20220106/model/CheckCertificateResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRulesRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateApplicationProxyRulesResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateDnsRecordRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateDnsRecordResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220106/model/CreatePrefetchTaskRequest.h>
#include <tencentcloud/teo/v20220106/model/CreatePrefetchTaskResponse.h>
#include <tencentcloud/teo/v20220106/model/CreatePurgeTaskRequest.h>
#include <tencentcloud/teo/v20220106/model/CreatePurgeTaskResponse.h>
#include <tencentcloud/teo/v20220106/model/CreateZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/CreateZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220106/model/DeleteZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/DeleteZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyDetailRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyDetailResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeCnameStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeCnameStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDefaultCertificatesRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDefaultCertificatesResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnsDataRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnsDataResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnssecRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeDnssecResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeHostsCertificateRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeHostsCertificateResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeHostsSettingRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeHostsSettingResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeIdentificationRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeIdentificationResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingDetailRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingDetailResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribePrefetchTasksRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribePrefetchTasksResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneDetailsRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneDetailsResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneSettingRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeZoneSettingResponse.h>
#include <tencentcloud/teo/v20220106/model/DescribeZonesRequest.h>
#include <tencentcloud/teo/v20220106/model/DescribeZonesResponse.h>
#include <tencentcloud/teo/v20220106/model/DownloadL7LogsRequest.h>
#include <tencentcloud/teo/v20220106/model/DownloadL7LogsResponse.h>
#include <tencentcloud/teo/v20220106/model/IdentifyZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/IdentifyZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/ImportDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220106/model/ImportDnsRecordsResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyRuleStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyApplicationProxyStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyDefaultCertificateRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyDefaultCertificateResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyDnsRecordRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyDnsRecordResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyDnssecRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyDnssecResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyHostsCertificateRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyHostsCertificateResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyLoadBalancingRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyLoadBalancingResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyLoadBalancingStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyLoadBalancingStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneCnameSpeedUpRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneCnameSpeedUpResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneSettingRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneSettingResponse.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneStatusRequest.h>
#include <tencentcloud/teo/v20220106/model/ModifyZoneStatusResponse.h>
#include <tencentcloud/teo/v20220106/model/ReclaimZoneRequest.h>
#include <tencentcloud/teo/v20220106/model/ReclaimZoneResponse.h>
#include <tencentcloud/teo/v20220106/model/ScanDnsRecordsRequest.h>
#include <tencentcloud/teo/v20220106/model/ScanDnsRecordsResponse.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            class TeoClient : public AbstractClient
            {
            public:
                TeoClient(const Credential &credential, const std::string &region);
                TeoClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CheckCertificateResponse> CheckCertificateOutcome;
                typedef std::future<CheckCertificateOutcome> CheckCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CheckCertificateRequest&, CheckCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyResponse> CreateApplicationProxyOutcome;
                typedef std::future<CreateApplicationProxyOutcome> CreateApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRequest&, CreateApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyRuleResponse> CreateApplicationProxyRuleOutcome;
                typedef std::future<CreateApplicationProxyRuleOutcome> CreateApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRuleRequest&, CreateApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyRulesResponse> CreateApplicationProxyRulesOutcome;
                typedef std::future<CreateApplicationProxyRulesOutcome> CreateApplicationProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRulesRequest&, CreateApplicationProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDnsRecordResponse> CreateDnsRecordOutcome;
                typedef std::future<CreateDnsRecordOutcome> CreateDnsRecordOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateDnsRecordRequest&, CreateDnsRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDnsRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancingResponse> CreateLoadBalancingOutcome;
                typedef std::future<CreateLoadBalancingOutcome> CreateLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateLoadBalancingRequest&, CreateLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrefetchTaskResponse> CreatePrefetchTaskOutcome;
                typedef std::future<CreatePrefetchTaskOutcome> CreatePrefetchTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePrefetchTaskRequest&, CreatePrefetchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrefetchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePurgeTaskResponse> CreatePurgeTaskOutcome;
                typedef std::future<CreatePurgeTaskOutcome> CreatePurgeTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePurgeTaskRequest&, CreatePurgeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePurgeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateZoneResponse> CreateZoneOutcome;
                typedef std::future<CreateZoneOutcome> CreateZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateZoneRequest&, CreateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationProxyResponse> DeleteApplicationProxyOutcome;
                typedef std::future<DeleteApplicationProxyOutcome> DeleteApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteApplicationProxyRequest&, DeleteApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationProxyRuleResponse> DeleteApplicationProxyRuleOutcome;
                typedef std::future<DeleteApplicationProxyRuleOutcome> DeleteApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteApplicationProxyRuleRequest&, DeleteApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDnsRecordsResponse> DeleteDnsRecordsOutcome;
                typedef std::future<DeleteDnsRecordsOutcome> DeleteDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteDnsRecordsRequest&, DeleteDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancingResponse> DeleteLoadBalancingOutcome;
                typedef std::future<DeleteLoadBalancingOutcome> DeleteLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteLoadBalancingRequest&, DeleteLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteZoneResponse> DeleteZoneOutcome;
                typedef std::future<DeleteZoneOutcome> DeleteZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteZoneRequest&, DeleteZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationProxyResponse> DescribeApplicationProxyOutcome;
                typedef std::future<DescribeApplicationProxyOutcome> DescribeApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeApplicationProxyRequest&, DescribeApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationProxyDetailResponse> DescribeApplicationProxyDetailOutcome;
                typedef std::future<DescribeApplicationProxyDetailOutcome> DescribeApplicationProxyDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeApplicationProxyDetailRequest&, DescribeApplicationProxyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationProxyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCnameStatusResponse> DescribeCnameStatusOutcome;
                typedef std::future<DescribeCnameStatusOutcome> DescribeCnameStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeCnameStatusRequest&, DescribeCnameStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCnameStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultCertificatesResponse> DescribeDefaultCertificatesOutcome;
                typedef std::future<DescribeDefaultCertificatesOutcome> DescribeDefaultCertificatesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDefaultCertificatesRequest&, DescribeDefaultCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnsDataResponse> DescribeDnsDataOutcome;
                typedef std::future<DescribeDnsDataOutcome> DescribeDnsDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnsDataRequest&, DescribeDnsDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnsRecordsResponse> DescribeDnsRecordsOutcome;
                typedef std::future<DescribeDnsRecordsOutcome> DescribeDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnsRecordsRequest&, DescribeDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDnssecResponse> DescribeDnssecOutcome;
                typedef std::future<DescribeDnssecOutcome> DescribeDnssecOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDnssecRequest&, DescribeDnssecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnssecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsCertificateResponse> DescribeHostsCertificateOutcome;
                typedef std::future<DescribeHostsCertificateOutcome> DescribeHostsCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeHostsCertificateRequest&, DescribeHostsCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsSettingResponse> DescribeHostsSettingOutcome;
                typedef std::future<DescribeHostsSettingOutcome> DescribeHostsSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeHostsSettingRequest&, DescribeHostsSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdentificationResponse> DescribeIdentificationOutcome;
                typedef std::future<DescribeIdentificationOutcome> DescribeIdentificationOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeIdentificationRequest&, DescribeIdentificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdentificationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancingResponse> DescribeLoadBalancingOutcome;
                typedef std::future<DescribeLoadBalancingOutcome> DescribeLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLoadBalancingRequest&, DescribeLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancingDetailResponse> DescribeLoadBalancingDetailOutcome;
                typedef std::future<DescribeLoadBalancingDetailOutcome> DescribeLoadBalancingDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeLoadBalancingDetailRequest&, DescribeLoadBalancingDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancingDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrefetchTasksResponse> DescribePrefetchTasksOutcome;
                typedef std::future<DescribePrefetchTasksOutcome> DescribePrefetchTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePrefetchTasksRequest&, DescribePrefetchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrefetchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneDetailsResponse> DescribeZoneDetailsOutcome;
                typedef std::future<DescribeZoneDetailsOutcome> DescribeZoneDetailsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneDetailsRequest&, DescribeZoneDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneSettingResponse> DescribeZoneSettingOutcome;
                typedef std::future<DescribeZoneSettingOutcome> DescribeZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneSettingRequest&, DescribeZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL7LogsResponse> DownloadL7LogsOutcome;
                typedef std::future<DownloadL7LogsOutcome> DownloadL7LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL7LogsRequest&, DownloadL7LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL7LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::IdentifyZoneResponse> IdentifyZoneOutcome;
                typedef std::future<IdentifyZoneOutcome> IdentifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::IdentifyZoneRequest&, IdentifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdentifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportDnsRecordsResponse> ImportDnsRecordsOutcome;
                typedef std::future<ImportDnsRecordsOutcome> ImportDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ImportDnsRecordsRequest&, ImportDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportDnsRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyResponse> ModifyApplicationProxyOutcome;
                typedef std::future<ModifyApplicationProxyOutcome> ModifyApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyRequest&, ModifyApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyRuleResponse> ModifyApplicationProxyRuleOutcome;
                typedef std::future<ModifyApplicationProxyRuleOutcome> ModifyApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyRuleRequest&, ModifyApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyRuleStatusResponse> ModifyApplicationProxyRuleStatusOutcome;
                typedef std::future<ModifyApplicationProxyRuleStatusOutcome> ModifyApplicationProxyRuleStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyRuleStatusRequest&, ModifyApplicationProxyRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyStatusResponse> ModifyApplicationProxyStatusOutcome;
                typedef std::future<ModifyApplicationProxyStatusOutcome> ModifyApplicationProxyStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyStatusRequest&, ModifyApplicationProxyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDefaultCertificateResponse> ModifyDefaultCertificateOutcome;
                typedef std::future<ModifyDefaultCertificateOutcome> ModifyDefaultCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDefaultCertificateRequest&, ModifyDefaultCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDnsRecordResponse> ModifyDnsRecordOutcome;
                typedef std::future<ModifyDnsRecordOutcome> ModifyDnsRecordOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDnsRecordRequest&, ModifyDnsRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDnsRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDnssecResponse> ModifyDnssecOutcome;
                typedef std::future<ModifyDnssecOutcome> ModifyDnssecOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyDnssecRequest&, ModifyDnssecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDnssecAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostsCertificateResponse> ModifyHostsCertificateOutcome;
                typedef std::future<ModifyHostsCertificateOutcome> ModifyHostsCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyHostsCertificateRequest&, ModifyHostsCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostsCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancingResponse> ModifyLoadBalancingOutcome;
                typedef std::future<ModifyLoadBalancingOutcome> ModifyLoadBalancingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyLoadBalancingRequest&, ModifyLoadBalancingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancingStatusResponse> ModifyLoadBalancingStatusOutcome;
                typedef std::future<ModifyLoadBalancingStatusOutcome> ModifyLoadBalancingStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyLoadBalancingStatusRequest&, ModifyLoadBalancingStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancingStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneResponse> ModifyZoneOutcome;
                typedef std::future<ModifyZoneOutcome> ModifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneRequest&, ModifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneCnameSpeedUpResponse> ModifyZoneCnameSpeedUpOutcome;
                typedef std::future<ModifyZoneCnameSpeedUpOutcome> ModifyZoneCnameSpeedUpOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneCnameSpeedUpRequest&, ModifyZoneCnameSpeedUpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneCnameSpeedUpAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneSettingResponse> ModifyZoneSettingOutcome;
                typedef std::future<ModifyZoneSettingOutcome> ModifyZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneSettingRequest&, ModifyZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneStatusResponse> ModifyZoneStatusOutcome;
                typedef std::future<ModifyZoneStatusOutcome> ModifyZoneStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneStatusRequest&, ModifyZoneStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ReclaimZoneResponse> ReclaimZoneOutcome;
                typedef std::future<ReclaimZoneOutcome> ReclaimZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ReclaimZoneRequest&, ReclaimZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReclaimZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanDnsRecordsResponse> ScanDnsRecordsOutcome;
                typedef std::future<ScanDnsRecordsOutcome> ScanDnsRecordsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ScanDnsRecordsRequest&, ScanDnsRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanDnsRecordsAsyncHandler;



                /**
                 *校验证书
                 * @param req CheckCertificateRequest
                 * @return CheckCertificateOutcome
                 */
                CheckCertificateOutcome CheckCertificate(const Model::CheckCertificateRequest &request);
                void CheckCertificateAsync(const Model::CheckCertificateRequest& request, const CheckCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCertificateOutcomeCallable CheckCertificateCallable(const Model::CheckCertificateRequest& request);

                /**
                 *创建应用代理
                 * @param req CreateApplicationProxyRequest
                 * @return CreateApplicationProxyOutcome
                 */
                CreateApplicationProxyOutcome CreateApplicationProxy(const Model::CreateApplicationProxyRequest &request);
                void CreateApplicationProxyAsync(const Model::CreateApplicationProxyRequest& request, const CreateApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyOutcomeCallable CreateApplicationProxyCallable(const Model::CreateApplicationProxyRequest& request);

                /**
                 *创建应用代理规则
                 * @param req CreateApplicationProxyRuleRequest
                 * @return CreateApplicationProxyRuleOutcome
                 */
                CreateApplicationProxyRuleOutcome CreateApplicationProxyRule(const Model::CreateApplicationProxyRuleRequest &request);
                void CreateApplicationProxyRuleAsync(const Model::CreateApplicationProxyRuleRequest& request, const CreateApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyRuleOutcomeCallable CreateApplicationProxyRuleCallable(const Model::CreateApplicationProxyRuleRequest& request);

                /**
                 *批量创建应用代理规则
                 * @param req CreateApplicationProxyRulesRequest
                 * @return CreateApplicationProxyRulesOutcome
                 */
                CreateApplicationProxyRulesOutcome CreateApplicationProxyRules(const Model::CreateApplicationProxyRulesRequest &request);
                void CreateApplicationProxyRulesAsync(const Model::CreateApplicationProxyRulesRequest& request, const CreateApplicationProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyRulesOutcomeCallable CreateApplicationProxyRulesCallable(const Model::CreateApplicationProxyRulesRequest& request);

                /**
                 *创建 DNS 记录
                 * @param req CreateDnsRecordRequest
                 * @return CreateDnsRecordOutcome
                 */
                CreateDnsRecordOutcome CreateDnsRecord(const Model::CreateDnsRecordRequest &request);
                void CreateDnsRecordAsync(const Model::CreateDnsRecordRequest& request, const CreateDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDnsRecordOutcomeCallable CreateDnsRecordCallable(const Model::CreateDnsRecordRequest& request);

                /**
                 *创建负载均衡
                 * @param req CreateLoadBalancingRequest
                 * @return CreateLoadBalancingOutcome
                 */
                CreateLoadBalancingOutcome CreateLoadBalancing(const Model::CreateLoadBalancingRequest &request);
                void CreateLoadBalancingAsync(const Model::CreateLoadBalancingRequest& request, const CreateLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancingOutcomeCallable CreateLoadBalancingCallable(const Model::CreateLoadBalancingRequest& request);

                /**
                 *创建预热任务
                 * @param req CreatePrefetchTaskRequest
                 * @return CreatePrefetchTaskOutcome
                 */
                CreatePrefetchTaskOutcome CreatePrefetchTask(const Model::CreatePrefetchTaskRequest &request);
                void CreatePrefetchTaskAsync(const Model::CreatePrefetchTaskRequest& request, const CreatePrefetchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrefetchTaskOutcomeCallable CreatePrefetchTaskCallable(const Model::CreatePrefetchTaskRequest& request);

                /**
                 *创建清除缓存任务
                 * @param req CreatePurgeTaskRequest
                 * @return CreatePurgeTaskOutcome
                 */
                CreatePurgeTaskOutcome CreatePurgeTask(const Model::CreatePurgeTaskRequest &request);
                void CreatePurgeTaskAsync(const Model::CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePurgeTaskOutcomeCallable CreatePurgeTaskCallable(const Model::CreatePurgeTaskRequest& request);

                /**
                 *用于用户接入新的站点
                 * @param req CreateZoneRequest
                 * @return CreateZoneOutcome
                 */
                CreateZoneOutcome CreateZone(const Model::CreateZoneRequest &request);
                void CreateZoneAsync(const Model::CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateZoneOutcomeCallable CreateZoneCallable(const Model::CreateZoneRequest& request);

                /**
                 *删除应用代理
                 * @param req DeleteApplicationProxyRequest
                 * @return DeleteApplicationProxyOutcome
                 */
                DeleteApplicationProxyOutcome DeleteApplicationProxy(const Model::DeleteApplicationProxyRequest &request);
                void DeleteApplicationProxyAsync(const Model::DeleteApplicationProxyRequest& request, const DeleteApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationProxyOutcomeCallable DeleteApplicationProxyCallable(const Model::DeleteApplicationProxyRequest& request);

                /**
                 *删除应用代理规则
                 * @param req DeleteApplicationProxyRuleRequest
                 * @return DeleteApplicationProxyRuleOutcome
                 */
                DeleteApplicationProxyRuleOutcome DeleteApplicationProxyRule(const Model::DeleteApplicationProxyRuleRequest &request);
                void DeleteApplicationProxyRuleAsync(const Model::DeleteApplicationProxyRuleRequest& request, const DeleteApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationProxyRuleOutcomeCallable DeleteApplicationProxyRuleCallable(const Model::DeleteApplicationProxyRuleRequest& request);

                /**
                 *批量删除 DNS 记录
                 * @param req DeleteDnsRecordsRequest
                 * @return DeleteDnsRecordsOutcome
                 */
                DeleteDnsRecordsOutcome DeleteDnsRecords(const Model::DeleteDnsRecordsRequest &request);
                void DeleteDnsRecordsAsync(const Model::DeleteDnsRecordsRequest& request, const DeleteDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDnsRecordsOutcomeCallable DeleteDnsRecordsCallable(const Model::DeleteDnsRecordsRequest& request);

                /**
                 *删除负载均衡
                 * @param req DeleteLoadBalancingRequest
                 * @return DeleteLoadBalancingOutcome
                 */
                DeleteLoadBalancingOutcome DeleteLoadBalancing(const Model::DeleteLoadBalancingRequest &request);
                void DeleteLoadBalancingAsync(const Model::DeleteLoadBalancingRequest& request, const DeleteLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancingOutcomeCallable DeleteLoadBalancingCallable(const Model::DeleteLoadBalancingRequest& request);

                /**
                 *删除站点
                 * @param req DeleteZoneRequest
                 * @return DeleteZoneOutcome
                 */
                DeleteZoneOutcome DeleteZone(const Model::DeleteZoneRequest &request);
                void DeleteZoneAsync(const Model::DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteZoneOutcomeCallable DeleteZoneCallable(const Model::DeleteZoneRequest& request);

                /**
                 *获取应用代理列表
                 * @param req DescribeApplicationProxyRequest
                 * @return DescribeApplicationProxyOutcome
                 */
                DescribeApplicationProxyOutcome DescribeApplicationProxy(const Model::DescribeApplicationProxyRequest &request);
                void DescribeApplicationProxyAsync(const Model::DescribeApplicationProxyRequest& request, const DescribeApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationProxyOutcomeCallable DescribeApplicationProxyCallable(const Model::DescribeApplicationProxyRequest& request);

                /**
                 *获取应用代理详细信息
                 * @param req DescribeApplicationProxyDetailRequest
                 * @return DescribeApplicationProxyDetailOutcome
                 */
                DescribeApplicationProxyDetailOutcome DescribeApplicationProxyDetail(const Model::DescribeApplicationProxyDetailRequest &request);
                void DescribeApplicationProxyDetailAsync(const Model::DescribeApplicationProxyDetailRequest& request, const DescribeApplicationProxyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationProxyDetailOutcomeCallable DescribeApplicationProxyDetailCallable(const Model::DescribeApplicationProxyDetailRequest& request);

                /**
                 *查询域名 CNAME 状态
                 * @param req DescribeCnameStatusRequest
                 * @return DescribeCnameStatusOutcome
                 */
                DescribeCnameStatusOutcome DescribeCnameStatus(const Model::DescribeCnameStatusRequest &request);
                void DescribeCnameStatusAsync(const Model::DescribeCnameStatusRequest& request, const DescribeCnameStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCnameStatusOutcomeCallable DescribeCnameStatusCallable(const Model::DescribeCnameStatusRequest& request);

                /**
                 *查询默认证书列表
                 * @param req DescribeDefaultCertificatesRequest
                 * @return DescribeDefaultCertificatesOutcome
                 */
                DescribeDefaultCertificatesOutcome DescribeDefaultCertificates(const Model::DescribeDefaultCertificatesRequest &request);
                void DescribeDefaultCertificatesAsync(const Model::DescribeDefaultCertificatesRequest& request, const DescribeDefaultCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultCertificatesOutcomeCallable DescribeDefaultCertificatesCallable(const Model::DescribeDefaultCertificatesRequest& request);

                /**
                 *获取DNS请求数统计曲线
                 * @param req DescribeDnsDataRequest
                 * @return DescribeDnsDataOutcome
                 */
                DescribeDnsDataOutcome DescribeDnsData(const Model::DescribeDnsDataRequest &request);
                void DescribeDnsDataAsync(const Model::DescribeDnsDataRequest& request, const DescribeDnsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnsDataOutcomeCallable DescribeDnsDataCallable(const Model::DescribeDnsDataRequest& request);

                /**
                 *查询 DNS 记录列表，支持搜索、分页、排序、过滤。
                 * @param req DescribeDnsRecordsRequest
                 * @return DescribeDnsRecordsOutcome
                 */
                DescribeDnsRecordsOutcome DescribeDnsRecords(const Model::DescribeDnsRecordsRequest &request);
                void DescribeDnsRecordsAsync(const Model::DescribeDnsRecordsRequest& request, const DescribeDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnsRecordsOutcomeCallable DescribeDnsRecordsCallable(const Model::DescribeDnsRecordsRequest& request);

                /**
                 *用于查询 DNSSEC 相关信息
                 * @param req DescribeDnssecRequest
                 * @return DescribeDnssecOutcome
                 */
                DescribeDnssecOutcome DescribeDnssec(const Model::DescribeDnssecRequest &request);
                void DescribeDnssecAsync(const Model::DescribeDnssecRequest& request, const DescribeDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDnssecOutcomeCallable DescribeDnssecCallable(const Model::DescribeDnssecRequest& request);

                /**
                 *查询域名证书列表，支持搜索、分页、排序、过滤。
                 * @param req DescribeHostsCertificateRequest
                 * @return DescribeHostsCertificateOutcome
                 */
                DescribeHostsCertificateOutcome DescribeHostsCertificate(const Model::DescribeHostsCertificateRequest &request);
                void DescribeHostsCertificateAsync(const Model::DescribeHostsCertificateRequest& request, const DescribeHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsCertificateOutcomeCallable DescribeHostsCertificateCallable(const Model::DescribeHostsCertificateRequest& request);

                /**
                 *用于查询域名配置信息
                 * @param req DescribeHostsSettingRequest
                 * @return DescribeHostsSettingOutcome
                 */
                DescribeHostsSettingOutcome DescribeHostsSetting(const Model::DescribeHostsSettingRequest &request);
                void DescribeHostsSettingAsync(const Model::DescribeHostsSettingRequest& request, const DescribeHostsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsSettingOutcomeCallable DescribeHostsSettingCallable(const Model::DescribeHostsSettingRequest& request);

                /**
                 *查询验证结果
                 * @param req DescribeIdentificationRequest
                 * @return DescribeIdentificationOutcome
                 */
                DescribeIdentificationOutcome DescribeIdentification(const Model::DescribeIdentificationRequest &request);
                void DescribeIdentificationAsync(const Model::DescribeIdentificationRequest& request, const DescribeIdentificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdentificationOutcomeCallable DescribeIdentificationCallable(const Model::DescribeIdentificationRequest& request);

                /**
                 *获取负载均衡列表
                 * @param req DescribeLoadBalancingRequest
                 * @return DescribeLoadBalancingOutcome
                 */
                DescribeLoadBalancingOutcome DescribeLoadBalancing(const Model::DescribeLoadBalancingRequest &request);
                void DescribeLoadBalancingAsync(const Model::DescribeLoadBalancingRequest& request, const DescribeLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancingOutcomeCallable DescribeLoadBalancingCallable(const Model::DescribeLoadBalancingRequest& request);

                /**
                 *获取负载均衡详细信息
                 * @param req DescribeLoadBalancingDetailRequest
                 * @return DescribeLoadBalancingDetailOutcome
                 */
                DescribeLoadBalancingDetailOutcome DescribeLoadBalancingDetail(const Model::DescribeLoadBalancingDetailRequest &request);
                void DescribeLoadBalancingDetailAsync(const Model::DescribeLoadBalancingDetailRequest& request, const DescribeLoadBalancingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancingDetailOutcomeCallable DescribeLoadBalancingDetailCallable(const Model::DescribeLoadBalancingDetailRequest& request);

                /**
                 *查询预热任务状态
                 * @param req DescribePrefetchTasksRequest
                 * @return DescribePrefetchTasksOutcome
                 */
                DescribePrefetchTasksOutcome DescribePrefetchTasks(const Model::DescribePrefetchTasksRequest &request);
                void DescribePrefetchTasksAsync(const Model::DescribePrefetchTasksRequest& request, const DescribePrefetchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrefetchTasksOutcomeCallable DescribePrefetchTasksCallable(const Model::DescribePrefetchTasksRequest& request);

                /**
                 *查询清除缓存历史记录
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *根据站点 ID 查询站点的详细信息
                 * @param req DescribeZoneDetailsRequest
                 * @return DescribeZoneDetailsOutcome
                 */
                DescribeZoneDetailsOutcome DescribeZoneDetails(const Model::DescribeZoneDetailsRequest &request);
                void DescribeZoneDetailsAsync(const Model::DescribeZoneDetailsRequest& request, const DescribeZoneDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneDetailsOutcomeCallable DescribeZoneDetailsCallable(const Model::DescribeZoneDetailsRequest& request);

                /**
                 *用于查询站点的所有配置信息。
                 * @param req DescribeZoneSettingRequest
                 * @return DescribeZoneSettingOutcome
                 */
                DescribeZoneSettingOutcome DescribeZoneSetting(const Model::DescribeZoneSettingRequest &request);
                void DescribeZoneSettingAsync(const Model::DescribeZoneSettingRequest& request, const DescribeZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneSettingOutcomeCallable DescribeZoneSettingCallable(const Model::DescribeZoneSettingRequest& request);

                /**
                 *用户查询用户站点信息列表，支持分页
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *查询七层离线日志
                 * @param req DownloadL7LogsRequest
                 * @return DownloadL7LogsOutcome
                 */
                DownloadL7LogsOutcome DownloadL7Logs(const Model::DownloadL7LogsRequest &request);
                void DownloadL7LogsAsync(const Model::DownloadL7LogsRequest& request, const DownloadL7LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadL7LogsOutcomeCallable DownloadL7LogsCallable(const Model::DownloadL7LogsRequest& request);

                /**
                 *用于验证站点所有权
                 * @param req IdentifyZoneRequest
                 * @return IdentifyZoneOutcome
                 */
                IdentifyZoneOutcome IdentifyZone(const Model::IdentifyZoneRequest &request);
                void IdentifyZoneAsync(const Model::IdentifyZoneRequest& request, const IdentifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdentifyZoneOutcomeCallable IdentifyZoneCallable(const Model::IdentifyZoneRequest& request);

                /**
                 *导入 DNS 记录
                 * @param req ImportDnsRecordsRequest
                 * @return ImportDnsRecordsOutcome
                 */
                ImportDnsRecordsOutcome ImportDnsRecords(const Model::ImportDnsRecordsRequest &request);
                void ImportDnsRecordsAsync(const Model::ImportDnsRecordsRequest& request, const ImportDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportDnsRecordsOutcomeCallable ImportDnsRecordsCallable(const Model::ImportDnsRecordsRequest& request);

                /**
                 *修改应用代理
                 * @param req ModifyApplicationProxyRequest
                 * @return ModifyApplicationProxyOutcome
                 */
                ModifyApplicationProxyOutcome ModifyApplicationProxy(const Model::ModifyApplicationProxyRequest &request);
                void ModifyApplicationProxyAsync(const Model::ModifyApplicationProxyRequest& request, const ModifyApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyOutcomeCallable ModifyApplicationProxyCallable(const Model::ModifyApplicationProxyRequest& request);

                /**
                 *修改应用代理规则
                 * @param req ModifyApplicationProxyRuleRequest
                 * @return ModifyApplicationProxyRuleOutcome
                 */
                ModifyApplicationProxyRuleOutcome ModifyApplicationProxyRule(const Model::ModifyApplicationProxyRuleRequest &request);
                void ModifyApplicationProxyRuleAsync(const Model::ModifyApplicationProxyRuleRequest& request, const ModifyApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyRuleOutcomeCallable ModifyApplicationProxyRuleCallable(const Model::ModifyApplicationProxyRuleRequest& request);

                /**
                 *修改应用代理规则的状态
                 * @param req ModifyApplicationProxyRuleStatusRequest
                 * @return ModifyApplicationProxyRuleStatusOutcome
                 */
                ModifyApplicationProxyRuleStatusOutcome ModifyApplicationProxyRuleStatus(const Model::ModifyApplicationProxyRuleStatusRequest &request);
                void ModifyApplicationProxyRuleStatusAsync(const Model::ModifyApplicationProxyRuleStatusRequest& request, const ModifyApplicationProxyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyRuleStatusOutcomeCallable ModifyApplicationProxyRuleStatusCallable(const Model::ModifyApplicationProxyRuleStatusRequest& request);

                /**
                 *修改应用代理的状态
                 * @param req ModifyApplicationProxyStatusRequest
                 * @return ModifyApplicationProxyStatusOutcome
                 */
                ModifyApplicationProxyStatusOutcome ModifyApplicationProxyStatus(const Model::ModifyApplicationProxyStatusRequest &request);
                void ModifyApplicationProxyStatusAsync(const Model::ModifyApplicationProxyStatusRequest& request, const ModifyApplicationProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyStatusOutcomeCallable ModifyApplicationProxyStatusCallable(const Model::ModifyApplicationProxyStatusRequest& request);

                /**
                 *修改默认证书状态
                 * @param req ModifyDefaultCertificateRequest
                 * @return ModifyDefaultCertificateOutcome
                 */
                ModifyDefaultCertificateOutcome ModifyDefaultCertificate(const Model::ModifyDefaultCertificateRequest &request);
                void ModifyDefaultCertificateAsync(const Model::ModifyDefaultCertificateRequest& request, const ModifyDefaultCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultCertificateOutcomeCallable ModifyDefaultCertificateCallable(const Model::ModifyDefaultCertificateRequest& request);

                /**
                 *修改 DNS 记录
                 * @param req ModifyDnsRecordRequest
                 * @return ModifyDnsRecordOutcome
                 */
                ModifyDnsRecordOutcome ModifyDnsRecord(const Model::ModifyDnsRecordRequest &request);
                void ModifyDnsRecordAsync(const Model::ModifyDnsRecordRequest& request, const ModifyDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDnsRecordOutcomeCallable ModifyDnsRecordCallable(const Model::ModifyDnsRecordRequest& request);

                /**
                 *修改 DNSSEC 状态
                 * @param req ModifyDnssecRequest
                 * @return ModifyDnssecOutcome
                 */
                ModifyDnssecOutcome ModifyDnssec(const Model::ModifyDnssecRequest &request);
                void ModifyDnssecAsync(const Model::ModifyDnssecRequest& request, const ModifyDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDnssecOutcomeCallable ModifyDnssecCallable(const Model::ModifyDnssecRequest& request);

                /**
                 *用于修改域名证书
                 * @param req ModifyHostsCertificateRequest
                 * @return ModifyHostsCertificateOutcome
                 */
                ModifyHostsCertificateOutcome ModifyHostsCertificate(const Model::ModifyHostsCertificateRequest &request);
                void ModifyHostsCertificateAsync(const Model::ModifyHostsCertificateRequest& request, const ModifyHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostsCertificateOutcomeCallable ModifyHostsCertificateCallable(const Model::ModifyHostsCertificateRequest& request);

                /**
                 *修改负载均衡
                 * @param req ModifyLoadBalancingRequest
                 * @return ModifyLoadBalancingOutcome
                 */
                ModifyLoadBalancingOutcome ModifyLoadBalancing(const Model::ModifyLoadBalancingRequest &request);
                void ModifyLoadBalancingAsync(const Model::ModifyLoadBalancingRequest& request, const ModifyLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancingOutcomeCallable ModifyLoadBalancingCallable(const Model::ModifyLoadBalancingRequest& request);

                /**
                 *修改负载均衡状态
                 * @param req ModifyLoadBalancingStatusRequest
                 * @return ModifyLoadBalancingStatusOutcome
                 */
                ModifyLoadBalancingStatusOutcome ModifyLoadBalancingStatus(const Model::ModifyLoadBalancingStatusRequest &request);
                void ModifyLoadBalancingStatusAsync(const Model::ModifyLoadBalancingStatusRequest& request, const ModifyLoadBalancingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancingStatusOutcomeCallable ModifyLoadBalancingStatusCallable(const Model::ModifyLoadBalancingStatusRequest& request);

                /**
                 *用该站点信息
                 * @param req ModifyZoneRequest
                 * @return ModifyZoneOutcome
                 */
                ModifyZoneOutcome ModifyZone(const Model::ModifyZoneRequest &request);
                void ModifyZoneAsync(const Model::ModifyZoneRequest& request, const ModifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneOutcomeCallable ModifyZoneCallable(const Model::ModifyZoneRequest& request);

                /**
                 *开启，关闭 CNAME 加速
                 * @param req ModifyZoneCnameSpeedUpRequest
                 * @return ModifyZoneCnameSpeedUpOutcome
                 */
                ModifyZoneCnameSpeedUpOutcome ModifyZoneCnameSpeedUp(const Model::ModifyZoneCnameSpeedUpRequest &request);
                void ModifyZoneCnameSpeedUpAsync(const Model::ModifyZoneCnameSpeedUpRequest& request, const ModifyZoneCnameSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneCnameSpeedUpOutcomeCallable ModifyZoneCnameSpeedUpCallable(const Model::ModifyZoneCnameSpeedUpRequest& request);

                /**
                 *用于修改站点配置
                 * @param req ModifyZoneSettingRequest
                 * @return ModifyZoneSettingOutcome
                 */
                ModifyZoneSettingOutcome ModifyZoneSetting(const Model::ModifyZoneSettingRequest &request);
                void ModifyZoneSettingAsync(const Model::ModifyZoneSettingRequest& request, const ModifyZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneSettingOutcomeCallable ModifyZoneSettingCallable(const Model::ModifyZoneSettingRequest& request);

                /**
                 *用于开启，关闭站点
                 * @param req ModifyZoneStatusRequest
                 * @return ModifyZoneStatusOutcome
                 */
                ModifyZoneStatusOutcome ModifyZoneStatus(const Model::ModifyZoneStatusRequest &request);
                void ModifyZoneStatusAsync(const Model::ModifyZoneStatusRequest& request, const ModifyZoneStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneStatusOutcomeCallable ModifyZoneStatusCallable(const Model::ModifyZoneStatusRequest& request);

                /**
                 *站点被其他用户接入后，验证了站点所有权之后，可以找回该站点
                 * @param req ReclaimZoneRequest
                 * @return ReclaimZoneOutcome
                 */
                ReclaimZoneOutcome ReclaimZone(const Model::ReclaimZoneRequest &request);
                void ReclaimZoneAsync(const Model::ReclaimZoneRequest& request, const ReclaimZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReclaimZoneOutcomeCallable ReclaimZoneCallable(const Model::ReclaimZoneRequest& request);

                /**
                 *扫描站点历史解析记录
                 * @param req ScanDnsRecordsRequest
                 * @return ScanDnsRecordsOutcome
                 */
                ScanDnsRecordsOutcome ScanDnsRecords(const Model::ScanDnsRecordsRequest &request);
                void ScanDnsRecordsAsync(const Model::ScanDnsRecordsRequest& request, const ScanDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanDnsRecordsOutcomeCallable ScanDnsRecordsCallable(const Model::ScanDnsRecordsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_TEOCLIENT_H_
