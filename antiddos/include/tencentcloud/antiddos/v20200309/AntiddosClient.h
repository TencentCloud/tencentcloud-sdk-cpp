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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_ANTIDDOSCLIENT_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_ANTIDDOSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipAddressRequest.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipAddressResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSAIRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSAIResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDefaultAlarmThresholdRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDefaultAlarmThresholdResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateIPAlarmThresholdConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateIPAlarmThresholdConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateProtocolBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateProtocolBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateSchedulingDomainRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateSchedulingDomainResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintKeyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintKeyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeletePacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeletePacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintKeyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintKeyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDefaultAlarmThresholdRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDefaultAlarmThresholdResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPIPInstancesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPIPInstancesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSAIRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSAIResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListIPAlarmConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListIPAlarmConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListListenerRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListListenerResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListPacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListPacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListProtectThresholdConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListProtectThresholdConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListProtocolBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListProtocolBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListSchedulingDomainRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListSchedulingDomainResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListWaterPrintConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DisassociateDDoSEipAddressRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DisassociateDDoSEipAddressResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDomainUsrNameRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDomainUsrNameResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyPacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyPacketFilterConfigResponse.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            class AntiddosClient : public AbstractClient
            {
            public:
                AntiddosClient(const Credential &credential, const std::string &region);
                AntiddosClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AssociateDDoSEipAddressResponse> AssociateDDoSEipAddressOutcome;
                typedef std::future<AssociateDDoSEipAddressOutcome> AssociateDDoSEipAddressOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::AssociateDDoSEipAddressRequest&, AssociateDDoSEipAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDDoSEipAddressAsyncHandler;
                typedef Outcome<Error, Model::CreateBlackWhiteIpListResponse> CreateBlackWhiteIpListOutcome;
                typedef std::future<CreateBlackWhiteIpListOutcome> CreateBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateBlackWhiteIpListRequest&, CreateBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlackWhiteIpListAsyncHandler;
                typedef Outcome<Error, Model::CreateDDoSAIResponse> CreateDDoSAIOutcome;
                typedef std::future<CreateDDoSAIOutcome> CreateDDoSAIOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSAIRequest&, CreateDDoSAIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSAIAsyncHandler;
                typedef Outcome<Error, Model::CreateDDoSGeoIPBlockConfigResponse> CreateDDoSGeoIPBlockConfigOutcome;
                typedef std::future<CreateDDoSGeoIPBlockConfigOutcome> CreateDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSGeoIPBlockConfigRequest&, CreateDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateDDoSSpeedLimitConfigResponse> CreateDDoSSpeedLimitConfigOutcome;
                typedef std::future<CreateDDoSSpeedLimitConfigOutcome> CreateDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSSpeedLimitConfigRequest&, CreateDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateDefaultAlarmThresholdResponse> CreateDefaultAlarmThresholdOutcome;
                typedef std::future<CreateDefaultAlarmThresholdOutcome> CreateDefaultAlarmThresholdOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDefaultAlarmThresholdRequest&, CreateDefaultAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultAlarmThresholdAsyncHandler;
                typedef Outcome<Error, Model::CreateIPAlarmThresholdConfigResponse> CreateIPAlarmThresholdConfigOutcome;
                typedef std::future<CreateIPAlarmThresholdConfigOutcome> CreateIPAlarmThresholdConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateIPAlarmThresholdConfigRequest&, CreateIPAlarmThresholdConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIPAlarmThresholdConfigAsyncHandler;
                typedef Outcome<Error, Model::CreatePacketFilterConfigResponse> CreatePacketFilterConfigOutcome;
                typedef std::future<CreatePacketFilterConfigOutcome> CreatePacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreatePacketFilterConfigRequest&, CreatePacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePacketFilterConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateProtocolBlockConfigResponse> CreateProtocolBlockConfigOutcome;
                typedef std::future<CreateProtocolBlockConfigOutcome> CreateProtocolBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateProtocolBlockConfigRequest&, CreateProtocolBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtocolBlockConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateSchedulingDomainResponse> CreateSchedulingDomainOutcome;
                typedef std::future<CreateSchedulingDomainOutcome> CreateSchedulingDomainOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateSchedulingDomainRequest&, CreateSchedulingDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchedulingDomainAsyncHandler;
                typedef Outcome<Error, Model::CreateWaterPrintConfigResponse> CreateWaterPrintConfigOutcome;
                typedef std::future<CreateWaterPrintConfigOutcome> CreateWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateWaterPrintConfigRequest&, CreateWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWaterPrintConfigAsyncHandler;
                typedef Outcome<Error, Model::CreateWaterPrintKeyResponse> CreateWaterPrintKeyOutcome;
                typedef std::future<CreateWaterPrintKeyOutcome> CreateWaterPrintKeyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateWaterPrintKeyRequest&, CreateWaterPrintKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWaterPrintKeyAsyncHandler;
                typedef Outcome<Error, Model::DeleteBlackWhiteIpListResponse> DeleteBlackWhiteIpListOutcome;
                typedef std::future<DeleteBlackWhiteIpListOutcome> DeleteBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteBlackWhiteIpListRequest&, DeleteBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlackWhiteIpListAsyncHandler;
                typedef Outcome<Error, Model::DeleteDDoSGeoIPBlockConfigResponse> DeleteDDoSGeoIPBlockConfigOutcome;
                typedef std::future<DeleteDDoSGeoIPBlockConfigOutcome> DeleteDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteDDoSGeoIPBlockConfigRequest&, DeleteDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Error, Model::DeleteDDoSSpeedLimitConfigResponse> DeleteDDoSSpeedLimitConfigOutcome;
                typedef std::future<DeleteDDoSSpeedLimitConfigOutcome> DeleteDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteDDoSSpeedLimitConfigRequest&, DeleteDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Error, Model::DeletePacketFilterConfigResponse> DeletePacketFilterConfigOutcome;
                typedef std::future<DeletePacketFilterConfigOutcome> DeletePacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeletePacketFilterConfigRequest&, DeletePacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePacketFilterConfigAsyncHandler;
                typedef Outcome<Error, Model::DeleteWaterPrintConfigResponse> DeleteWaterPrintConfigOutcome;
                typedef std::future<DeleteWaterPrintConfigOutcome> DeleteWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteWaterPrintConfigRequest&, DeleteWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWaterPrintConfigAsyncHandler;
                typedef Outcome<Error, Model::DeleteWaterPrintKeyResponse> DeleteWaterPrintKeyOutcome;
                typedef std::future<DeleteWaterPrintKeyOutcome> DeleteWaterPrintKeyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteWaterPrintKeyRequest&, DeleteWaterPrintKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWaterPrintKeyAsyncHandler;
                typedef Outcome<Error, Model::DescribeBlackWhiteIpListResponse> DescribeBlackWhiteIpListOutcome;
                typedef std::future<DescribeBlackWhiteIpListOutcome> DescribeBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBlackWhiteIpListRequest&, DescribeBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlackWhiteIpListAsyncHandler;
                typedef Outcome<Error, Model::DescribeDefaultAlarmThresholdResponse> DescribeDefaultAlarmThresholdOutcome;
                typedef std::future<DescribeDefaultAlarmThresholdOutcome> DescribeDefaultAlarmThresholdOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDefaultAlarmThresholdRequest&, DescribeDefaultAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultAlarmThresholdAsyncHandler;
                typedef Outcome<Error, Model::DescribeListBGPIPInstancesResponse> DescribeListBGPIPInstancesOutcome;
                typedef std::future<DescribeListBGPIPInstancesOutcome> DescribeListBGPIPInstancesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListBGPIPInstancesRequest&, DescribeListBGPIPInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListBGPIPInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeListBGPInstancesResponse> DescribeListBGPInstancesOutcome;
                typedef std::future<DescribeListBGPInstancesOutcome> DescribeListBGPInstancesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListBGPInstancesRequest&, DescribeListBGPInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListBGPInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeListBlackWhiteIpListResponse> DescribeListBlackWhiteIpListOutcome;
                typedef std::future<DescribeListBlackWhiteIpListOutcome> DescribeListBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListBlackWhiteIpListRequest&, DescribeListBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListBlackWhiteIpListAsyncHandler;
                typedef Outcome<Error, Model::DescribeListDDoSAIResponse> DescribeListDDoSAIOutcome;
                typedef std::future<DescribeListDDoSAIOutcome> DescribeListDDoSAIOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListDDoSAIRequest&, DescribeListDDoSAIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListDDoSAIAsyncHandler;
                typedef Outcome<Error, Model::DescribeListDDoSGeoIPBlockConfigResponse> DescribeListDDoSGeoIPBlockConfigOutcome;
                typedef std::future<DescribeListDDoSGeoIPBlockConfigOutcome> DescribeListDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListDDoSGeoIPBlockConfigRequest&, DescribeListDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeListDDoSSpeedLimitConfigResponse> DescribeListDDoSSpeedLimitConfigOutcome;
                typedef std::future<DescribeListDDoSSpeedLimitConfigOutcome> DescribeListDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListDDoSSpeedLimitConfigRequest&, DescribeListDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeListIPAlarmConfigResponse> DescribeListIPAlarmConfigOutcome;
                typedef std::future<DescribeListIPAlarmConfigOutcome> DescribeListIPAlarmConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListIPAlarmConfigRequest&, DescribeListIPAlarmConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListIPAlarmConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeListListenerResponse> DescribeListListenerOutcome;
                typedef std::future<DescribeListListenerOutcome> DescribeListListenerOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListListenerRequest&, DescribeListListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListListenerAsyncHandler;
                typedef Outcome<Error, Model::DescribeListPacketFilterConfigResponse> DescribeListPacketFilterConfigOutcome;
                typedef std::future<DescribeListPacketFilterConfigOutcome> DescribeListPacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListPacketFilterConfigRequest&, DescribeListPacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListPacketFilterConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeListProtectThresholdConfigResponse> DescribeListProtectThresholdConfigOutcome;
                typedef std::future<DescribeListProtectThresholdConfigOutcome> DescribeListProtectThresholdConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListProtectThresholdConfigRequest&, DescribeListProtectThresholdConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListProtectThresholdConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeListProtocolBlockConfigResponse> DescribeListProtocolBlockConfigOutcome;
                typedef std::future<DescribeListProtocolBlockConfigOutcome> DescribeListProtocolBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListProtocolBlockConfigRequest&, DescribeListProtocolBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListProtocolBlockConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeListSchedulingDomainResponse> DescribeListSchedulingDomainOutcome;
                typedef std::future<DescribeListSchedulingDomainOutcome> DescribeListSchedulingDomainOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListSchedulingDomainRequest&, DescribeListSchedulingDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListSchedulingDomainAsyncHandler;
                typedef Outcome<Error, Model::DescribeListWaterPrintConfigResponse> DescribeListWaterPrintConfigOutcome;
                typedef std::future<DescribeListWaterPrintConfigOutcome> DescribeListWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListWaterPrintConfigRequest&, DescribeListWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListWaterPrintConfigAsyncHandler;
                typedef Outcome<Error, Model::DisassociateDDoSEipAddressResponse> DisassociateDDoSEipAddressOutcome;
                typedef std::future<DisassociateDDoSEipAddressOutcome> DisassociateDDoSEipAddressOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DisassociateDDoSEipAddressRequest&, DisassociateDDoSEipAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateDDoSEipAddressAsyncHandler;
                typedef Outcome<Error, Model::ModifyDDoSGeoIPBlockConfigResponse> ModifyDDoSGeoIPBlockConfigOutcome;
                typedef std::future<ModifyDDoSGeoIPBlockConfigOutcome> ModifyDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSGeoIPBlockConfigRequest&, ModifyDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Error, Model::ModifyDDoSSpeedLimitConfigResponse> ModifyDDoSSpeedLimitConfigOutcome;
                typedef std::future<ModifyDDoSSpeedLimitConfigOutcome> ModifyDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSSpeedLimitConfigRequest&, ModifyDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Error, Model::ModifyDomainUsrNameResponse> ModifyDomainUsrNameOutcome;
                typedef std::future<ModifyDomainUsrNameOutcome> ModifyDomainUsrNameOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDomainUsrNameRequest&, ModifyDomainUsrNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainUsrNameAsyncHandler;
                typedef Outcome<Error, Model::ModifyPacketFilterConfigResponse> ModifyPacketFilterConfigOutcome;
                typedef std::future<ModifyPacketFilterConfigOutcome> ModifyPacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyPacketFilterConfigRequest&, ModifyPacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPacketFilterConfigAsyncHandler;



                /**
                 *本接口 (AssociateDDoSEipAddress) 用于将高防弹性公网IP绑定到实例或弹性网卡的指定内网 IP 上。
                 * @param req AssociateDDoSEipAddressRequest
                 * @return AssociateDDoSEipAddressOutcome
                 */
                AssociateDDoSEipAddressOutcome AssociateDDoSEipAddress(const Model::AssociateDDoSEipAddressRequest &request);
                void AssociateDDoSEipAddressAsync(const Model::AssociateDDoSEipAddressRequest& request, const AssociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateDDoSEipAddressOutcomeCallable AssociateDDoSEipAddressCallable(const Model::AssociateDDoSEipAddressRequest& request);

                /**
                 *添加DDoS防护的IP黑白名单
                 * @param req CreateBlackWhiteIpListRequest
                 * @return CreateBlackWhiteIpListOutcome
                 */
                CreateBlackWhiteIpListOutcome CreateBlackWhiteIpList(const Model::CreateBlackWhiteIpListRequest &request);
                void CreateBlackWhiteIpListAsync(const Model::CreateBlackWhiteIpListRequest& request, const CreateBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlackWhiteIpListOutcomeCallable CreateBlackWhiteIpListCallable(const Model::CreateBlackWhiteIpListRequest& request);

                /**
                 *设置DDoS防护的AI防护开关
                 * @param req CreateDDoSAIRequest
                 * @return CreateDDoSAIOutcome
                 */
                CreateDDoSAIOutcome CreateDDoSAI(const Model::CreateDDoSAIRequest &request);
                void CreateDDoSAIAsync(const Model::CreateDDoSAIRequest& request, const CreateDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSAIOutcomeCallable CreateDDoSAICallable(const Model::CreateDDoSAIRequest& request);

                /**
                 *添加DDoS防护的区域封禁配置
                 * @param req CreateDDoSGeoIPBlockConfigRequest
                 * @return CreateDDoSGeoIPBlockConfigOutcome
                 */
                CreateDDoSGeoIPBlockConfigOutcome CreateDDoSGeoIPBlockConfig(const Model::CreateDDoSGeoIPBlockConfigRequest &request);
                void CreateDDoSGeoIPBlockConfigAsync(const Model::CreateDDoSGeoIPBlockConfigRequest& request, const CreateDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSGeoIPBlockConfigOutcomeCallable CreateDDoSGeoIPBlockConfigCallable(const Model::CreateDDoSGeoIPBlockConfigRequest& request);

                /**
                 *添加DDoS防护的访问限速配置
                 * @param req CreateDDoSSpeedLimitConfigRequest
                 * @return CreateDDoSSpeedLimitConfigOutcome
                 */
                CreateDDoSSpeedLimitConfigOutcome CreateDDoSSpeedLimitConfig(const Model::CreateDDoSSpeedLimitConfigRequest &request);
                void CreateDDoSSpeedLimitConfigAsync(const Model::CreateDDoSSpeedLimitConfigRequest& request, const CreateDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSSpeedLimitConfigOutcomeCallable CreateDDoSSpeedLimitConfigCallable(const Model::CreateDDoSSpeedLimitConfigRequest& request);

                /**
                 *设置单IP默认告警阈值配置
                 * @param req CreateDefaultAlarmThresholdRequest
                 * @return CreateDefaultAlarmThresholdOutcome
                 */
                CreateDefaultAlarmThresholdOutcome CreateDefaultAlarmThreshold(const Model::CreateDefaultAlarmThresholdRequest &request);
                void CreateDefaultAlarmThresholdAsync(const Model::CreateDefaultAlarmThresholdRequest& request, const CreateDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDefaultAlarmThresholdOutcomeCallable CreateDefaultAlarmThresholdCallable(const Model::CreateDefaultAlarmThresholdRequest& request);

                /**
                 *设置单IP告警阈值配置
                 * @param req CreateIPAlarmThresholdConfigRequest
                 * @return CreateIPAlarmThresholdConfigOutcome
                 */
                CreateIPAlarmThresholdConfigOutcome CreateIPAlarmThresholdConfig(const Model::CreateIPAlarmThresholdConfigRequest &request);
                void CreateIPAlarmThresholdConfigAsync(const Model::CreateIPAlarmThresholdConfigRequest& request, const CreateIPAlarmThresholdConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIPAlarmThresholdConfigOutcomeCallable CreateIPAlarmThresholdConfigCallable(const Model::CreateIPAlarmThresholdConfigRequest& request);

                /**
                 *添加DDoS防护的特征过滤规则
                 * @param req CreatePacketFilterConfigRequest
                 * @return CreatePacketFilterConfigOutcome
                 */
                CreatePacketFilterConfigOutcome CreatePacketFilterConfig(const Model::CreatePacketFilterConfigRequest &request);
                void CreatePacketFilterConfigAsync(const Model::CreatePacketFilterConfigRequest& request, const CreatePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePacketFilterConfigOutcomeCallable CreatePacketFilterConfigCallable(const Model::CreatePacketFilterConfigRequest& request);

                /**
                 *设置DDoS防护的协议封禁配置
                 * @param req CreateProtocolBlockConfigRequest
                 * @return CreateProtocolBlockConfigOutcome
                 */
                CreateProtocolBlockConfigOutcome CreateProtocolBlockConfig(const Model::CreateProtocolBlockConfigRequest &request);
                void CreateProtocolBlockConfigAsync(const Model::CreateProtocolBlockConfigRequest& request, const CreateProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProtocolBlockConfigOutcomeCallable CreateProtocolBlockConfigCallable(const Model::CreateProtocolBlockConfigRequest& request);

                /**
                 *创建一个域名，可用于在封堵时调度切换IP
                 * @param req CreateSchedulingDomainRequest
                 * @return CreateSchedulingDomainOutcome
                 */
                CreateSchedulingDomainOutcome CreateSchedulingDomain(const Model::CreateSchedulingDomainRequest &request);
                void CreateSchedulingDomainAsync(const Model::CreateSchedulingDomainRequest& request, const CreateSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchedulingDomainOutcomeCallable CreateSchedulingDomainCallable(const Model::CreateSchedulingDomainRequest& request);

                /**
                 *添加DDoS防护的水印防护配置
                 * @param req CreateWaterPrintConfigRequest
                 * @return CreateWaterPrintConfigOutcome
                 */
                CreateWaterPrintConfigOutcome CreateWaterPrintConfig(const Model::CreateWaterPrintConfigRequest &request);
                void CreateWaterPrintConfigAsync(const Model::CreateWaterPrintConfigRequest& request, const CreateWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWaterPrintConfigOutcomeCallable CreateWaterPrintConfigCallable(const Model::CreateWaterPrintConfigRequest& request);

                /**
                 *添加DDoS防护的水印防护密钥
                 * @param req CreateWaterPrintKeyRequest
                 * @return CreateWaterPrintKeyOutcome
                 */
                CreateWaterPrintKeyOutcome CreateWaterPrintKey(const Model::CreateWaterPrintKeyRequest &request);
                void CreateWaterPrintKeyAsync(const Model::CreateWaterPrintKeyRequest& request, const CreateWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWaterPrintKeyOutcomeCallable CreateWaterPrintKeyCallable(const Model::CreateWaterPrintKeyRequest& request);

                /**
                 *删除DDoS防护的IP黑白名单
                 * @param req DeleteBlackWhiteIpListRequest
                 * @return DeleteBlackWhiteIpListOutcome
                 */
                DeleteBlackWhiteIpListOutcome DeleteBlackWhiteIpList(const Model::DeleteBlackWhiteIpListRequest &request);
                void DeleteBlackWhiteIpListAsync(const Model::DeleteBlackWhiteIpListRequest& request, const DeleteBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlackWhiteIpListOutcomeCallable DeleteBlackWhiteIpListCallable(const Model::DeleteBlackWhiteIpListRequest& request);

                /**
                 *删除DDoS防护的区域封禁配置
                 * @param req DeleteDDoSGeoIPBlockConfigRequest
                 * @return DeleteDDoSGeoIPBlockConfigOutcome
                 */
                DeleteDDoSGeoIPBlockConfigOutcome DeleteDDoSGeoIPBlockConfig(const Model::DeleteDDoSGeoIPBlockConfigRequest &request);
                void DeleteDDoSGeoIPBlockConfigAsync(const Model::DeleteDDoSGeoIPBlockConfigRequest& request, const DeleteDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDDoSGeoIPBlockConfigOutcomeCallable DeleteDDoSGeoIPBlockConfigCallable(const Model::DeleteDDoSGeoIPBlockConfigRequest& request);

                /**
                 *删除DDoS防护的访问限速配置
                 * @param req DeleteDDoSSpeedLimitConfigRequest
                 * @return DeleteDDoSSpeedLimitConfigOutcome
                 */
                DeleteDDoSSpeedLimitConfigOutcome DeleteDDoSSpeedLimitConfig(const Model::DeleteDDoSSpeedLimitConfigRequest &request);
                void DeleteDDoSSpeedLimitConfigAsync(const Model::DeleteDDoSSpeedLimitConfigRequest& request, const DeleteDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDDoSSpeedLimitConfigOutcomeCallable DeleteDDoSSpeedLimitConfigCallable(const Model::DeleteDDoSSpeedLimitConfigRequest& request);

                /**
                 *删除DDoS防护的特征过滤规则
                 * @param req DeletePacketFilterConfigRequest
                 * @return DeletePacketFilterConfigOutcome
                 */
                DeletePacketFilterConfigOutcome DeletePacketFilterConfig(const Model::DeletePacketFilterConfigRequest &request);
                void DeletePacketFilterConfigAsync(const Model::DeletePacketFilterConfigRequest& request, const DeletePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePacketFilterConfigOutcomeCallable DeletePacketFilterConfigCallable(const Model::DeletePacketFilterConfigRequest& request);

                /**
                 *删除DDoS防护的水印防护配置
                 * @param req DeleteWaterPrintConfigRequest
                 * @return DeleteWaterPrintConfigOutcome
                 */
                DeleteWaterPrintConfigOutcome DeleteWaterPrintConfig(const Model::DeleteWaterPrintConfigRequest &request);
                void DeleteWaterPrintConfigAsync(const Model::DeleteWaterPrintConfigRequest& request, const DeleteWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWaterPrintConfigOutcomeCallable DeleteWaterPrintConfigCallable(const Model::DeleteWaterPrintConfigRequest& request);

                /**
                 *删除DDoS防护的水印防护密钥
                 * @param req DeleteWaterPrintKeyRequest
                 * @return DeleteWaterPrintKeyOutcome
                 */
                DeleteWaterPrintKeyOutcome DeleteWaterPrintKey(const Model::DeleteWaterPrintKeyRequest &request);
                void DeleteWaterPrintKeyAsync(const Model::DeleteWaterPrintKeyRequest& request, const DeleteWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWaterPrintKeyOutcomeCallable DeleteWaterPrintKeyCallable(const Model::DeleteWaterPrintKeyRequest& request);

                /**
                 *获取DDoS防护的IP黑白名单
                 * @param req DescribeBlackWhiteIpListRequest
                 * @return DescribeBlackWhiteIpListOutcome
                 */
                DescribeBlackWhiteIpListOutcome DescribeBlackWhiteIpList(const Model::DescribeBlackWhiteIpListRequest &request);
                void DescribeBlackWhiteIpListAsync(const Model::DescribeBlackWhiteIpListRequest& request, const DescribeBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlackWhiteIpListOutcomeCallable DescribeBlackWhiteIpListCallable(const Model::DescribeBlackWhiteIpListRequest& request);

                /**
                 *获取单IP默认告警阈值配置
                 * @param req DescribeDefaultAlarmThresholdRequest
                 * @return DescribeDefaultAlarmThresholdOutcome
                 */
                DescribeDefaultAlarmThresholdOutcome DescribeDefaultAlarmThreshold(const Model::DescribeDefaultAlarmThresholdRequest &request);
                void DescribeDefaultAlarmThresholdAsync(const Model::DescribeDefaultAlarmThresholdRequest& request, const DescribeDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultAlarmThresholdOutcomeCallable DescribeDefaultAlarmThresholdCallable(const Model::DescribeDefaultAlarmThresholdRequest& request);

                /**
                 *获取高防IP资产实例列表

                 * @param req DescribeListBGPIPInstancesRequest
                 * @return DescribeListBGPIPInstancesOutcome
                 */
                DescribeListBGPIPInstancesOutcome DescribeListBGPIPInstances(const Model::DescribeListBGPIPInstancesRequest &request);
                void DescribeListBGPIPInstancesAsync(const Model::DescribeListBGPIPInstancesRequest& request, const DescribeListBGPIPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListBGPIPInstancesOutcomeCallable DescribeListBGPIPInstancesCallable(const Model::DescribeListBGPIPInstancesRequest& request);

                /**
                 *获取高防包资产实例列表

                 * @param req DescribeListBGPInstancesRequest
                 * @return DescribeListBGPInstancesOutcome
                 */
                DescribeListBGPInstancesOutcome DescribeListBGPInstances(const Model::DescribeListBGPInstancesRequest &request);
                void DescribeListBGPInstancesAsync(const Model::DescribeListBGPInstancesRequest& request, const DescribeListBGPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListBGPInstancesOutcomeCallable DescribeListBGPInstancesCallable(const Model::DescribeListBGPInstancesRequest& request);

                /**
                 *获取DDoS防护的IP黑白名单列表
                 * @param req DescribeListBlackWhiteIpListRequest
                 * @return DescribeListBlackWhiteIpListOutcome
                 */
                DescribeListBlackWhiteIpListOutcome DescribeListBlackWhiteIpList(const Model::DescribeListBlackWhiteIpListRequest &request);
                void DescribeListBlackWhiteIpListAsync(const Model::DescribeListBlackWhiteIpListRequest& request, const DescribeListBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListBlackWhiteIpListOutcomeCallable DescribeListBlackWhiteIpListCallable(const Model::DescribeListBlackWhiteIpListRequest& request);

                /**
                 *获取DDoS防护的AI防护开关列表
                 * @param req DescribeListDDoSAIRequest
                 * @return DescribeListDDoSAIOutcome
                 */
                DescribeListDDoSAIOutcome DescribeListDDoSAI(const Model::DescribeListDDoSAIRequest &request);
                void DescribeListDDoSAIAsync(const Model::DescribeListDDoSAIRequest& request, const DescribeListDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListDDoSAIOutcomeCallable DescribeListDDoSAICallable(const Model::DescribeListDDoSAIRequest& request);

                /**
                 *获取DDoS防护的区域封禁配置列表
                 * @param req DescribeListDDoSGeoIPBlockConfigRequest
                 * @return DescribeListDDoSGeoIPBlockConfigOutcome
                 */
                DescribeListDDoSGeoIPBlockConfigOutcome DescribeListDDoSGeoIPBlockConfig(const Model::DescribeListDDoSGeoIPBlockConfigRequest &request);
                void DescribeListDDoSGeoIPBlockConfigAsync(const Model::DescribeListDDoSGeoIPBlockConfigRequest& request, const DescribeListDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListDDoSGeoIPBlockConfigOutcomeCallable DescribeListDDoSGeoIPBlockConfigCallable(const Model::DescribeListDDoSGeoIPBlockConfigRequest& request);

                /**
                 *获取DDoS防护的访问限速配置列表
                 * @param req DescribeListDDoSSpeedLimitConfigRequest
                 * @return DescribeListDDoSSpeedLimitConfigOutcome
                 */
                DescribeListDDoSSpeedLimitConfigOutcome DescribeListDDoSSpeedLimitConfig(const Model::DescribeListDDoSSpeedLimitConfigRequest &request);
                void DescribeListDDoSSpeedLimitConfigAsync(const Model::DescribeListDDoSSpeedLimitConfigRequest& request, const DescribeListDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListDDoSSpeedLimitConfigOutcomeCallable DescribeListDDoSSpeedLimitConfigCallable(const Model::DescribeListDDoSSpeedLimitConfigRequest& request);

                /**
                 *获取单IP告警阈值配置列表
                 * @param req DescribeListIPAlarmConfigRequest
                 * @return DescribeListIPAlarmConfigOutcome
                 */
                DescribeListIPAlarmConfigOutcome DescribeListIPAlarmConfig(const Model::DescribeListIPAlarmConfigRequest &request);
                void DescribeListIPAlarmConfigAsync(const Model::DescribeListIPAlarmConfigRequest& request, const DescribeListIPAlarmConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListIPAlarmConfigOutcomeCallable DescribeListIPAlarmConfigCallable(const Model::DescribeListIPAlarmConfigRequest& request);

                /**
                 *获取转发监听器列表
                 * @param req DescribeListListenerRequest
                 * @return DescribeListListenerOutcome
                 */
                DescribeListListenerOutcome DescribeListListener(const Model::DescribeListListenerRequest &request);
                void DescribeListListenerAsync(const Model::DescribeListListenerRequest& request, const DescribeListListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListListenerOutcomeCallable DescribeListListenerCallable(const Model::DescribeListListenerRequest& request);

                /**
                 *获取DDoS防护的特征过滤规则列表
                 * @param req DescribeListPacketFilterConfigRequest
                 * @return DescribeListPacketFilterConfigOutcome
                 */
                DescribeListPacketFilterConfigOutcome DescribeListPacketFilterConfig(const Model::DescribeListPacketFilterConfigRequest &request);
                void DescribeListPacketFilterConfigAsync(const Model::DescribeListPacketFilterConfigRequest& request, const DescribeListPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListPacketFilterConfigOutcomeCallable DescribeListPacketFilterConfigCallable(const Model::DescribeListPacketFilterConfigRequest& request);

                /**
                 *获取防护阈值配置列表，包括DDoS的AI、等级、CC阈值开关等
                 * @param req DescribeListProtectThresholdConfigRequest
                 * @return DescribeListProtectThresholdConfigOutcome
                 */
                DescribeListProtectThresholdConfigOutcome DescribeListProtectThresholdConfig(const Model::DescribeListProtectThresholdConfigRequest &request);
                void DescribeListProtectThresholdConfigAsync(const Model::DescribeListProtectThresholdConfigRequest& request, const DescribeListProtectThresholdConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListProtectThresholdConfigOutcomeCallable DescribeListProtectThresholdConfigCallable(const Model::DescribeListProtectThresholdConfigRequest& request);

                /**
                 *获取DDoS防护的协议封禁配置列表
                 * @param req DescribeListProtocolBlockConfigRequest
                 * @return DescribeListProtocolBlockConfigOutcome
                 */
                DescribeListProtocolBlockConfigOutcome DescribeListProtocolBlockConfig(const Model::DescribeListProtocolBlockConfigRequest &request);
                void DescribeListProtocolBlockConfigAsync(const Model::DescribeListProtocolBlockConfigRequest& request, const DescribeListProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListProtocolBlockConfigOutcomeCallable DescribeListProtocolBlockConfigCallable(const Model::DescribeListProtocolBlockConfigRequest& request);

                /**
                 *获取智能调度域名列表
                 * @param req DescribeListSchedulingDomainRequest
                 * @return DescribeListSchedulingDomainOutcome
                 */
                DescribeListSchedulingDomainOutcome DescribeListSchedulingDomain(const Model::DescribeListSchedulingDomainRequest &request);
                void DescribeListSchedulingDomainAsync(const Model::DescribeListSchedulingDomainRequest& request, const DescribeListSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListSchedulingDomainOutcomeCallable DescribeListSchedulingDomainCallable(const Model::DescribeListSchedulingDomainRequest& request);

                /**
                 *获取DDoS防护的水印防护配置列表
                 * @param req DescribeListWaterPrintConfigRequest
                 * @return DescribeListWaterPrintConfigOutcome
                 */
                DescribeListWaterPrintConfigOutcome DescribeListWaterPrintConfig(const Model::DescribeListWaterPrintConfigRequest &request);
                void DescribeListWaterPrintConfigAsync(const Model::DescribeListWaterPrintConfigRequest& request, const DescribeListWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListWaterPrintConfigOutcomeCallable DescribeListWaterPrintConfigCallable(const Model::DescribeListWaterPrintConfigRequest& request);

                /**
                 *本接口 (DisassociateDDoSEipAddress) 用于解绑高防弹性公网IP。
                 * @param req DisassociateDDoSEipAddressRequest
                 * @return DisassociateDDoSEipAddressOutcome
                 */
                DisassociateDDoSEipAddressOutcome DisassociateDDoSEipAddress(const Model::DisassociateDDoSEipAddressRequest &request);
                void DisassociateDDoSEipAddressAsync(const Model::DisassociateDDoSEipAddressRequest& request, const DisassociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateDDoSEipAddressOutcomeCallable DisassociateDDoSEipAddressCallable(const Model::DisassociateDDoSEipAddressRequest& request);

                /**
                 *修改DDoS防护的区域封禁配置
                 * @param req ModifyDDoSGeoIPBlockConfigRequest
                 * @return ModifyDDoSGeoIPBlockConfigOutcome
                 */
                ModifyDDoSGeoIPBlockConfigOutcome ModifyDDoSGeoIPBlockConfig(const Model::ModifyDDoSGeoIPBlockConfigRequest &request);
                void ModifyDDoSGeoIPBlockConfigAsync(const Model::ModifyDDoSGeoIPBlockConfigRequest& request, const ModifyDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSGeoIPBlockConfigOutcomeCallable ModifyDDoSGeoIPBlockConfigCallable(const Model::ModifyDDoSGeoIPBlockConfigRequest& request);

                /**
                 *修改DDoS防护的访问限速配置
                 * @param req ModifyDDoSSpeedLimitConfigRequest
                 * @return ModifyDDoSSpeedLimitConfigOutcome
                 */
                ModifyDDoSSpeedLimitConfigOutcome ModifyDDoSSpeedLimitConfig(const Model::ModifyDDoSSpeedLimitConfigRequest &request);
                void ModifyDDoSSpeedLimitConfigAsync(const Model::ModifyDDoSSpeedLimitConfigRequest& request, const ModifyDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSSpeedLimitConfigOutcomeCallable ModifyDDoSSpeedLimitConfigCallable(const Model::ModifyDDoSSpeedLimitConfigRequest& request);

                /**
                 *修改智能解析域名名称
                 * @param req ModifyDomainUsrNameRequest
                 * @return ModifyDomainUsrNameOutcome
                 */
                ModifyDomainUsrNameOutcome ModifyDomainUsrName(const Model::ModifyDomainUsrNameRequest &request);
                void ModifyDomainUsrNameAsync(const Model::ModifyDomainUsrNameRequest& request, const ModifyDomainUsrNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainUsrNameOutcomeCallable ModifyDomainUsrNameCallable(const Model::ModifyDomainUsrNameRequest& request);

                /**
                 *修改DDoS防护的特征过滤规则
                 * @param req ModifyPacketFilterConfigRequest
                 * @return ModifyPacketFilterConfigOutcome
                 */
                ModifyPacketFilterConfigOutcome ModifyPacketFilterConfig(const Model::ModifyPacketFilterConfigRequest &request);
                void ModifyPacketFilterConfigAsync(const Model::ModifyPacketFilterConfigRequest& request, const ModifyPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPacketFilterConfigOutcomeCallable ModifyPacketFilterConfigCallable(const Model::ModifyPacketFilterConfigRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_ANTIDDOSCLIENT_H_
