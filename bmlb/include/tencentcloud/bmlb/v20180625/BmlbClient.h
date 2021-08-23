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

#ifndef TENCENTCLOUD_BMLB_V20180625_BMLBCLIENT_H_
#define TENCENTCLOUD_BMLB_V20180625_BMLBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bmlb/v20180625/model/BindL4BackendsRequest.h>
#include <tencentcloud/bmlb/v20180625/model/BindL4BackendsResponse.h>
#include <tencentcloud/bmlb/v20180625/model/BindL7BackendsRequest.h>
#include <tencentcloud/bmlb/v20180625/model/BindL7BackendsResponse.h>
#include <tencentcloud/bmlb/v20180625/model/BindTrafficMirrorListenersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/BindTrafficMirrorListenersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/BindTrafficMirrorReceiversRequest.h>
#include <tencentcloud/bmlb/v20180625/model/BindTrafficMirrorReceiversResponse.h>
#include <tencentcloud/bmlb/v20180625/model/CreateL4ListenersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/CreateL4ListenersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/CreateL7ListenersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/CreateL7ListenersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/CreateL7RulesRequest.h>
#include <tencentcloud/bmlb/v20180625/model/CreateL7RulesResponse.h>
#include <tencentcloud/bmlb/v20180625/model/CreateLoadBalancersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/CreateLoadBalancersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/CreateTrafficMirrorRequest.h>
#include <tencentcloud/bmlb/v20180625/model/CreateTrafficMirrorResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteL7DomainsRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteL7DomainsResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteL7RulesRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteL7RulesResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteListenersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteListenersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteLoadBalancerRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteLoadBalancerResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteTrafficMirrorRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DeleteTrafficMirrorResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeCertDetailRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeCertDetailResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeDevicesBindInfoRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeDevicesBindInfoResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL4BackendsRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL4BackendsResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL4ListenerInfoRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL4ListenerInfoResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL4ListenersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL4ListenersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7BackendsRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7BackendsResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7ListenerInfoRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7ListenerInfoResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7ListenersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7ListenersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7ListenersExRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7ListenersExResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7RulesRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL7RulesResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeLoadBalancerPortInfoRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeLoadBalancerPortInfoResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeLoadBalancerTaskResultRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeLoadBalancerTaskResultResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorListenersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorListenersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiverHealthStatusRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiverHealthStatusResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiversRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorReceiversResponse.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorsRequest.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeTrafficMirrorsResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL4BackendPortRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL4BackendPortResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL4BackendProbePortRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL4BackendProbePortResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL4BackendWeightRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL4BackendWeightResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL4ListenerRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL4ListenerResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL7BackendPortRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL7BackendPortResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL7BackendWeightRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL7BackendWeightResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL7ListenerRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL7ListenerResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL7LocationsRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyL7LocationsResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerChargeModeRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ModifyLoadBalancerChargeModeResponse.h>
#include <tencentcloud/bmlb/v20180625/model/ReplaceCertRequest.h>
#include <tencentcloud/bmlb/v20180625/model/ReplaceCertResponse.h>
#include <tencentcloud/bmlb/v20180625/model/SetTrafficMirrorAliasRequest.h>
#include <tencentcloud/bmlb/v20180625/model/SetTrafficMirrorAliasResponse.h>
#include <tencentcloud/bmlb/v20180625/model/SetTrafficMirrorHealthSwitchRequest.h>
#include <tencentcloud/bmlb/v20180625/model/SetTrafficMirrorHealthSwitchResponse.h>
#include <tencentcloud/bmlb/v20180625/model/UnbindL4BackendsRequest.h>
#include <tencentcloud/bmlb/v20180625/model/UnbindL4BackendsResponse.h>
#include <tencentcloud/bmlb/v20180625/model/UnbindL7BackendsRequest.h>
#include <tencentcloud/bmlb/v20180625/model/UnbindL7BackendsResponse.h>
#include <tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorListenersRequest.h>
#include <tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorListenersResponse.h>
#include <tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorReceiversRequest.h>
#include <tencentcloud/bmlb/v20180625/model/UnbindTrafficMirrorReceiversResponse.h>
#include <tencentcloud/bmlb/v20180625/model/UploadCertRequest.h>
#include <tencentcloud/bmlb/v20180625/model/UploadCertResponse.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            class BmlbClient : public AbstractClient
            {
            public:
                BmlbClient(const Credential &credential, const std::string &region);
                BmlbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindL4BackendsResponse> BindL4BackendsOutcome;
                typedef std::future<BindL4BackendsOutcome> BindL4BackendsOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::BindL4BackendsRequest&, BindL4BackendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindL4BackendsAsyncHandler;
                typedef Outcome<Core::Error, Model::BindL7BackendsResponse> BindL7BackendsOutcome;
                typedef std::future<BindL7BackendsOutcome> BindL7BackendsOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::BindL7BackendsRequest&, BindL7BackendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindL7BackendsAsyncHandler;
                typedef Outcome<Core::Error, Model::BindTrafficMirrorListenersResponse> BindTrafficMirrorListenersOutcome;
                typedef std::future<BindTrafficMirrorListenersOutcome> BindTrafficMirrorListenersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::BindTrafficMirrorListenersRequest&, BindTrafficMirrorListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindTrafficMirrorListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::BindTrafficMirrorReceiversResponse> BindTrafficMirrorReceiversOutcome;
                typedef std::future<BindTrafficMirrorReceiversOutcome> BindTrafficMirrorReceiversOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::BindTrafficMirrorReceiversRequest&, BindTrafficMirrorReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindTrafficMirrorReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL4ListenersResponse> CreateL4ListenersOutcome;
                typedef std::future<CreateL4ListenersOutcome> CreateL4ListenersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::CreateL4ListenersRequest&, CreateL4ListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL4ListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7ListenersResponse> CreateL7ListenersOutcome;
                typedef std::future<CreateL7ListenersOutcome> CreateL7ListenersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::CreateL7ListenersRequest&, CreateL7ListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7ListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7RulesResponse> CreateL7RulesOutcome;
                typedef std::future<CreateL7RulesOutcome> CreateL7RulesOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::CreateL7RulesRequest&, CreateL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancersResponse> CreateLoadBalancersOutcome;
                typedef std::future<CreateLoadBalancersOutcome> CreateLoadBalancersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::CreateLoadBalancersRequest&, CreateLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTrafficMirrorResponse> CreateTrafficMirrorOutcome;
                typedef std::future<CreateTrafficMirrorOutcome> CreateTrafficMirrorOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::CreateTrafficMirrorRequest&, CreateTrafficMirrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrafficMirrorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL7DomainsResponse> DeleteL7DomainsOutcome;
                typedef std::future<DeleteL7DomainsOutcome> DeleteL7DomainsOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DeleteL7DomainsRequest&, DeleteL7DomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL7DomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL7RulesResponse> DeleteL7RulesOutcome;
                typedef std::future<DeleteL7RulesOutcome> DeleteL7RulesOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DeleteL7RulesRequest&, DeleteL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenersResponse> DeleteListenersOutcome;
                typedef std::future<DeleteListenersOutcome> DeleteListenersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DeleteListenersRequest&, DeleteListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerResponse> DeleteLoadBalancerOutcome;
                typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DeleteLoadBalancerRequest&, DeleteLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrafficMirrorResponse> DeleteTrafficMirrorOutcome;
                typedef std::future<DeleteTrafficMirrorOutcome> DeleteTrafficMirrorOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DeleteTrafficMirrorRequest&, DeleteTrafficMirrorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficMirrorAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertDetailResponse> DescribeCertDetailOutcome;
                typedef std::future<DescribeCertDetailOutcome> DescribeCertDetailOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeCertDetailRequest&, DescribeCertDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesBindInfoResponse> DescribeDevicesBindInfoOutcome;
                typedef std::future<DescribeDevicesBindInfoOutcome> DescribeDevicesBindInfoOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeDevicesBindInfoRequest&, DescribeDevicesBindInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesBindInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL4BackendsResponse> DescribeL4BackendsOutcome;
                typedef std::future<DescribeL4BackendsOutcome> DescribeL4BackendsOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeL4BackendsRequest&, DescribeL4BackendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL4BackendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL4ListenerInfoResponse> DescribeL4ListenerInfoOutcome;
                typedef std::future<DescribeL4ListenerInfoOutcome> DescribeL4ListenerInfoOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeL4ListenerInfoRequest&, DescribeL4ListenerInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL4ListenerInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL4ListenersResponse> DescribeL4ListenersOutcome;
                typedef std::future<DescribeL4ListenersOutcome> DescribeL4ListenersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeL4ListenersRequest&, DescribeL4ListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL4ListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7BackendsResponse> DescribeL7BackendsOutcome;
                typedef std::future<DescribeL7BackendsOutcome> DescribeL7BackendsOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeL7BackendsRequest&, DescribeL7BackendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7BackendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7ListenerInfoResponse> DescribeL7ListenerInfoOutcome;
                typedef std::future<DescribeL7ListenerInfoOutcome> DescribeL7ListenerInfoOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeL7ListenerInfoRequest&, DescribeL7ListenerInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7ListenerInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7ListenersResponse> DescribeL7ListenersOutcome;
                typedef std::future<DescribeL7ListenersOutcome> DescribeL7ListenersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeL7ListenersRequest&, DescribeL7ListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7ListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7ListenersExResponse> DescribeL7ListenersExOutcome;
                typedef std::future<DescribeL7ListenersExOutcome> DescribeL7ListenersExOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeL7ListenersExRequest&, DescribeL7ListenersExOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7ListenersExAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7RulesResponse> DescribeL7RulesOutcome;
                typedef std::future<DescribeL7RulesOutcome> DescribeL7RulesOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeL7RulesRequest&, DescribeL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerPortInfoResponse> DescribeLoadBalancerPortInfoOutcome;
                typedef std::future<DescribeLoadBalancerPortInfoOutcome> DescribeLoadBalancerPortInfoOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeLoadBalancerPortInfoRequest&, DescribeLoadBalancerPortInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerPortInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerTaskResultResponse> DescribeLoadBalancerTaskResultOutcome;
                typedef std::future<DescribeLoadBalancerTaskResultOutcome> DescribeLoadBalancerTaskResultOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeLoadBalancerTaskResultRequest&, DescribeLoadBalancerTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficMirrorListenersResponse> DescribeTrafficMirrorListenersOutcome;
                typedef std::future<DescribeTrafficMirrorListenersOutcome> DescribeTrafficMirrorListenersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeTrafficMirrorListenersRequest&, DescribeTrafficMirrorListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficMirrorListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficMirrorReceiverHealthStatusResponse> DescribeTrafficMirrorReceiverHealthStatusOutcome;
                typedef std::future<DescribeTrafficMirrorReceiverHealthStatusOutcome> DescribeTrafficMirrorReceiverHealthStatusOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeTrafficMirrorReceiverHealthStatusRequest&, DescribeTrafficMirrorReceiverHealthStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficMirrorReceiverHealthStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficMirrorReceiversResponse> DescribeTrafficMirrorReceiversOutcome;
                typedef std::future<DescribeTrafficMirrorReceiversOutcome> DescribeTrafficMirrorReceiversOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeTrafficMirrorReceiversRequest&, DescribeTrafficMirrorReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficMirrorReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficMirrorsResponse> DescribeTrafficMirrorsOutcome;
                typedef std::future<DescribeTrafficMirrorsOutcome> DescribeTrafficMirrorsOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::DescribeTrafficMirrorsRequest&, DescribeTrafficMirrorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficMirrorsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4BackendPortResponse> ModifyL4BackendPortOutcome;
                typedef std::future<ModifyL4BackendPortOutcome> ModifyL4BackendPortOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyL4BackendPortRequest&, ModifyL4BackendPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4BackendPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4BackendProbePortResponse> ModifyL4BackendProbePortOutcome;
                typedef std::future<ModifyL4BackendProbePortOutcome> ModifyL4BackendProbePortOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyL4BackendProbePortRequest&, ModifyL4BackendProbePortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4BackendProbePortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4BackendWeightResponse> ModifyL4BackendWeightOutcome;
                typedef std::future<ModifyL4BackendWeightOutcome> ModifyL4BackendWeightOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyL4BackendWeightRequest&, ModifyL4BackendWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4BackendWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4ListenerResponse> ModifyL4ListenerOutcome;
                typedef std::future<ModifyL4ListenerOutcome> ModifyL4ListenerOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyL4ListenerRequest&, ModifyL4ListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4ListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL7BackendPortResponse> ModifyL7BackendPortOutcome;
                typedef std::future<ModifyL7BackendPortOutcome> ModifyL7BackendPortOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyL7BackendPortRequest&, ModifyL7BackendPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL7BackendPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL7BackendWeightResponse> ModifyL7BackendWeightOutcome;
                typedef std::future<ModifyL7BackendWeightOutcome> ModifyL7BackendWeightOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyL7BackendWeightRequest&, ModifyL7BackendWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL7BackendWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL7ListenerResponse> ModifyL7ListenerOutcome;
                typedef std::future<ModifyL7ListenerOutcome> ModifyL7ListenerOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyL7ListenerRequest&, ModifyL7ListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL7ListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL7LocationsResponse> ModifyL7LocationsOutcome;
                typedef std::future<ModifyL7LocationsOutcome> ModifyL7LocationsOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyL7LocationsRequest&, ModifyL7LocationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL7LocationsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerResponse> ModifyLoadBalancerOutcome;
                typedef std::future<ModifyLoadBalancerOutcome> ModifyLoadBalancerOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyLoadBalancerRequest&, ModifyLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerChargeModeResponse> ModifyLoadBalancerChargeModeOutcome;
                typedef std::future<ModifyLoadBalancerChargeModeOutcome> ModifyLoadBalancerChargeModeOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ModifyLoadBalancerChargeModeRequest&, ModifyLoadBalancerChargeModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerChargeModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceCertResponse> ReplaceCertOutcome;
                typedef std::future<ReplaceCertOutcome> ReplaceCertOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::ReplaceCertRequest&, ReplaceCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceCertAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTrafficMirrorAliasResponse> SetTrafficMirrorAliasOutcome;
                typedef std::future<SetTrafficMirrorAliasOutcome> SetTrafficMirrorAliasOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::SetTrafficMirrorAliasRequest&, SetTrafficMirrorAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTrafficMirrorAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::SetTrafficMirrorHealthSwitchResponse> SetTrafficMirrorHealthSwitchOutcome;
                typedef std::future<SetTrafficMirrorHealthSwitchOutcome> SetTrafficMirrorHealthSwitchOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::SetTrafficMirrorHealthSwitchRequest&, SetTrafficMirrorHealthSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetTrafficMirrorHealthSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindL4BackendsResponse> UnbindL4BackendsOutcome;
                typedef std::future<UnbindL4BackendsOutcome> UnbindL4BackendsOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::UnbindL4BackendsRequest&, UnbindL4BackendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindL4BackendsAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindL7BackendsResponse> UnbindL7BackendsOutcome;
                typedef std::future<UnbindL7BackendsOutcome> UnbindL7BackendsOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::UnbindL7BackendsRequest&, UnbindL7BackendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindL7BackendsAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindTrafficMirrorListenersResponse> UnbindTrafficMirrorListenersOutcome;
                typedef std::future<UnbindTrafficMirrorListenersOutcome> UnbindTrafficMirrorListenersOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::UnbindTrafficMirrorListenersRequest&, UnbindTrafficMirrorListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindTrafficMirrorListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindTrafficMirrorReceiversResponse> UnbindTrafficMirrorReceiversOutcome;
                typedef std::future<UnbindTrafficMirrorReceiversOutcome> UnbindTrafficMirrorReceiversOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::UnbindTrafficMirrorReceiversRequest&, UnbindTrafficMirrorReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindTrafficMirrorReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadCertResponse> UploadCertOutcome;
                typedef std::future<UploadCertOutcome> UploadCertOutcomeCallable;
                typedef std::function<void(const BmlbClient*, const Model::UploadCertRequest&, UploadCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadCertAsyncHandler;



                /**
                 *绑定黑石服务器到四层监听器。服务器包括物理服务器、虚拟机以及半托管机器。
                 * @param req BindL4BackendsRequest
                 * @return BindL4BackendsOutcome
                 */
                BindL4BackendsOutcome BindL4Backends(const Model::BindL4BackendsRequest &request);
                void BindL4BackendsAsync(const Model::BindL4BackendsRequest& request, const BindL4BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindL4BackendsOutcomeCallable BindL4BackendsCallable(const Model::BindL4BackendsRequest& request);

                /**
                 *绑定黑石物理服务器或半托管服务器到七层转发路径。
                 * @param req BindL7BackendsRequest
                 * @return BindL7BackendsOutcome
                 */
                BindL7BackendsOutcome BindL7Backends(const Model::BindL7BackendsRequest &request);
                void BindL7BackendsAsync(const Model::BindL7BackendsRequest& request, const BindL7BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindL7BackendsOutcomeCallable BindL7BackendsCallable(const Model::BindL7BackendsRequest& request);

                /**
                 *绑定黑石服务器七层监听器到流量镜像实例。
                 * @param req BindTrafficMirrorListenersRequest
                 * @return BindTrafficMirrorListenersOutcome
                 */
                BindTrafficMirrorListenersOutcome BindTrafficMirrorListeners(const Model::BindTrafficMirrorListenersRequest &request);
                void BindTrafficMirrorListenersAsync(const Model::BindTrafficMirrorListenersRequest& request, const BindTrafficMirrorListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindTrafficMirrorListenersOutcomeCallable BindTrafficMirrorListenersCallable(const Model::BindTrafficMirrorListenersRequest& request);

                /**
                 *绑定黑石物理服务器成为流量镜像接收机。
                 * @param req BindTrafficMirrorReceiversRequest
                 * @return BindTrafficMirrorReceiversOutcome
                 */
                BindTrafficMirrorReceiversOutcome BindTrafficMirrorReceivers(const Model::BindTrafficMirrorReceiversRequest &request);
                void BindTrafficMirrorReceiversAsync(const Model::BindTrafficMirrorReceiversRequest& request, const BindTrafficMirrorReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindTrafficMirrorReceiversOutcomeCallable BindTrafficMirrorReceiversCallable(const Model::BindTrafficMirrorReceiversRequest& request);

                /**
                 *创建黑石四层负载均衡监听器功能。黑石负载均衡四层监听器提供了转发用户请求的具体规则，包括端口、协议、会话保持、健康检查等参数。
                 * @param req CreateL4ListenersRequest
                 * @return CreateL4ListenersOutcome
                 */
                CreateL4ListenersOutcome CreateL4Listeners(const Model::CreateL4ListenersRequest &request);
                void CreateL4ListenersAsync(const Model::CreateL4ListenersRequest& request, const CreateL4ListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL4ListenersOutcomeCallable CreateL4ListenersCallable(const Model::CreateL4ListenersRequest& request);

                /**
                 *创建黑石负载均衡七层监听器功能。负载均衡七层监听器提供了转发用户请求的具体规则，包括端口、协议等参数。
                 * @param req CreateL7ListenersRequest
                 * @return CreateL7ListenersOutcome
                 */
                CreateL7ListenersOutcome CreateL7Listeners(const Model::CreateL7ListenersRequest &request);
                void CreateL7ListenersAsync(const Model::CreateL7ListenersRequest& request, const CreateL7ListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7ListenersOutcomeCallable CreateL7ListenersCallable(const Model::CreateL7ListenersRequest& request);

                /**
                 *创建黑石负载均衡七层转发规则。
                 * @param req CreateL7RulesRequest
                 * @return CreateL7RulesOutcome
                 */
                CreateL7RulesOutcome CreateL7Rules(const Model::CreateL7RulesRequest &request);
                void CreateL7RulesAsync(const Model::CreateL7RulesRequest& request, const CreateL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7RulesOutcomeCallable CreateL7RulesCallable(const Model::CreateL7RulesRequest& request);

                /**
                 *用来创建黑石负载均衡。为了使用黑石负载均衡服务，您必须要创建一个或者多个负载均衡实例。通过成功调用该接口，会返回负载均衡实例的唯一ID。用户可以购买的黑石负载均衡实例类型分为：公网类型、内网类型。公网类型负载均衡对应一个BGP VIP，可用于快速访问公网负载均衡绑定的物理服务器；内网类型负载均衡对应一个腾讯云内部的VIP，不能通过Internet访问，可快速访问内网负载均衡绑定的物理服务器。
                 * @param req CreateLoadBalancersRequest
                 * @return CreateLoadBalancersOutcome
                 */
                CreateLoadBalancersOutcome CreateLoadBalancers(const Model::CreateLoadBalancersRequest &request);
                void CreateLoadBalancersAsync(const Model::CreateLoadBalancersRequest& request, const CreateLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancersOutcomeCallable CreateLoadBalancersCallable(const Model::CreateLoadBalancersRequest& request);

                /**
                 *创建流量镜像实例。
                 * @param req CreateTrafficMirrorRequest
                 * @return CreateTrafficMirrorOutcome
                 */
                CreateTrafficMirrorOutcome CreateTrafficMirror(const Model::CreateTrafficMirrorRequest &request);
                void CreateTrafficMirrorAsync(const Model::CreateTrafficMirrorRequest& request, const CreateTrafficMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTrafficMirrorOutcomeCallable CreateTrafficMirrorCallable(const Model::CreateTrafficMirrorRequest& request);

                /**
                 *删除黑石负载均衡七层转发域名。
                 * @param req DeleteL7DomainsRequest
                 * @return DeleteL7DomainsOutcome
                 */
                DeleteL7DomainsOutcome DeleteL7Domains(const Model::DeleteL7DomainsRequest &request);
                void DeleteL7DomainsAsync(const Model::DeleteL7DomainsRequest& request, const DeleteL7DomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL7DomainsOutcomeCallable DeleteL7DomainsCallable(const Model::DeleteL7DomainsRequest& request);

                /**
                 *删除黑石负载均衡七层转发规则。
                 * @param req DeleteL7RulesRequest
                 * @return DeleteL7RulesOutcome
                 */
                DeleteL7RulesOutcome DeleteL7Rules(const Model::DeleteL7RulesRequest &request);
                void DeleteL7RulesAsync(const Model::DeleteL7RulesRequest& request, const DeleteL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL7RulesOutcomeCallable DeleteL7RulesCallable(const Model::DeleteL7RulesRequest& request);

                /**
                 *删除黑石负载均衡监听器。
                 * @param req DeleteListenersRequest
                 * @return DeleteListenersOutcome
                 */
                DeleteListenersOutcome DeleteListeners(const Model::DeleteListenersRequest &request);
                void DeleteListenersAsync(const Model::DeleteListenersRequest& request, const DeleteListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenersOutcomeCallable DeleteListenersCallable(const Model::DeleteListenersRequest& request);

                /**
                 *删除用户指定的黑石负载均衡实例。
                 * @param req DeleteLoadBalancerRequest
                 * @return DeleteLoadBalancerOutcome
                 */
                DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request);
                void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request);

                /**
                 *删除已创建的黑石流量镜像实例，删除过程是异步执行的，因此需要使用查询任务接口获取删除的结果。
                 * @param req DeleteTrafficMirrorRequest
                 * @return DeleteTrafficMirrorOutcome
                 */
                DeleteTrafficMirrorOutcome DeleteTrafficMirror(const Model::DeleteTrafficMirrorRequest &request);
                void DeleteTrafficMirrorAsync(const Model::DeleteTrafficMirrorRequest& request, const DeleteTrafficMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTrafficMirrorOutcomeCallable DeleteTrafficMirrorCallable(const Model::DeleteTrafficMirrorRequest& request);

                /**
                 *获取黑石负载均衡证书详情。
                 * @param req DescribeCertDetailRequest
                 * @return DescribeCertDetailOutcome
                 */
                DescribeCertDetailOutcome DescribeCertDetail(const Model::DescribeCertDetailRequest &request);
                void DescribeCertDetailAsync(const Model::DescribeCertDetailRequest& request, const DescribeCertDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertDetailOutcomeCallable DescribeCertDetailCallable(const Model::DescribeCertDetailRequest& request);

                /**
                 *查询黑石物理机和虚机以及托管服务器绑定的黑石负载均衡详情。
                 * @param req DescribeDevicesBindInfoRequest
                 * @return DescribeDevicesBindInfoOutcome
                 */
                DescribeDevicesBindInfoOutcome DescribeDevicesBindInfo(const Model::DescribeDevicesBindInfoRequest &request);
                void DescribeDevicesBindInfoAsync(const Model::DescribeDevicesBindInfoRequest& request, const DescribeDevicesBindInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesBindInfoOutcomeCallable DescribeDevicesBindInfoCallable(const Model::DescribeDevicesBindInfoRequest& request);

                /**
                 *获取黑石负载均衡四层监听器绑定的主机列表。
                 * @param req DescribeL4BackendsRequest
                 * @return DescribeL4BackendsOutcome
                 */
                DescribeL4BackendsOutcome DescribeL4Backends(const Model::DescribeL4BackendsRequest &request);
                void DescribeL4BackendsAsync(const Model::DescribeL4BackendsRequest& request, const DescribeL4BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL4BackendsOutcomeCallable DescribeL4BackendsCallable(const Model::DescribeL4BackendsRequest& request);

                /**
                 *查找绑定了某主机或者指定监听器名称的黑石负载均衡四层监听器。
                 * @param req DescribeL4ListenerInfoRequest
                 * @return DescribeL4ListenerInfoOutcome
                 */
                DescribeL4ListenerInfoOutcome DescribeL4ListenerInfo(const Model::DescribeL4ListenerInfoRequest &request);
                void DescribeL4ListenerInfoAsync(const Model::DescribeL4ListenerInfoRequest& request, const DescribeL4ListenerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL4ListenerInfoOutcomeCallable DescribeL4ListenerInfoCallable(const Model::DescribeL4ListenerInfoRequest& request);

                /**
                 *获取黑石负载均衡四层监听器。
                 * @param req DescribeL4ListenersRequest
                 * @return DescribeL4ListenersOutcome
                 */
                DescribeL4ListenersOutcome DescribeL4Listeners(const Model::DescribeL4ListenersRequest &request);
                void DescribeL4ListenersAsync(const Model::DescribeL4ListenersRequest& request, const DescribeL4ListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL4ListenersOutcomeCallable DescribeL4ListenersCallable(const Model::DescribeL4ListenersRequest& request);

                /**
                 *获取黑石负载均衡七层监听器绑定的主机列表
                 * @param req DescribeL7BackendsRequest
                 * @return DescribeL7BackendsOutcome
                 */
                DescribeL7BackendsOutcome DescribeL7Backends(const Model::DescribeL7BackendsRequest &request);
                void DescribeL7BackendsAsync(const Model::DescribeL7BackendsRequest& request, const DescribeL7BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7BackendsOutcomeCallable DescribeL7BackendsCallable(const Model::DescribeL7BackendsRequest& request);

                /**
                 *查找绑定了某主机或者有某转发域名黑石负载均衡七层监听器。
                 * @param req DescribeL7ListenerInfoRequest
                 * @return DescribeL7ListenerInfoOutcome
                 */
                DescribeL7ListenerInfoOutcome DescribeL7ListenerInfo(const Model::DescribeL7ListenerInfoRequest &request);
                void DescribeL7ListenerInfoAsync(const Model::DescribeL7ListenerInfoRequest& request, const DescribeL7ListenerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7ListenerInfoOutcomeCallable DescribeL7ListenerInfoCallable(const Model::DescribeL7ListenerInfoRequest& request);

                /**
                 *获取黑石负载均衡七层监听器列表信息。
                 * @param req DescribeL7ListenersRequest
                 * @return DescribeL7ListenersOutcome
                 */
                DescribeL7ListenersOutcome DescribeL7Listeners(const Model::DescribeL7ListenersRequest &request);
                void DescribeL7ListenersAsync(const Model::DescribeL7ListenersRequest& request, const DescribeL7ListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7ListenersOutcomeCallable DescribeL7ListenersCallable(const Model::DescribeL7ListenersRequest& request);

                /**
                 *获取指定VPC下的7层监听器(支持模糊匹配)。
                 * @param req DescribeL7ListenersExRequest
                 * @return DescribeL7ListenersExOutcome
                 */
                DescribeL7ListenersExOutcome DescribeL7ListenersEx(const Model::DescribeL7ListenersExRequest &request);
                void DescribeL7ListenersExAsync(const Model::DescribeL7ListenersExRequest& request, const DescribeL7ListenersExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7ListenersExOutcomeCallable DescribeL7ListenersExCallable(const Model::DescribeL7ListenersExRequest& request);

                /**
                 *获取黑石负载均衡七层转发规则。
                 * @param req DescribeL7RulesRequest
                 * @return DescribeL7RulesOutcome
                 */
                DescribeL7RulesOutcome DescribeL7Rules(const Model::DescribeL7RulesRequest &request);
                void DescribeL7RulesAsync(const Model::DescribeL7RulesRequest& request, const DescribeL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7RulesOutcomeCallable DescribeL7RulesCallable(const Model::DescribeL7RulesRequest& request);

                /**
                 *获取黑石负载均衡端口相关信息。
                 * @param req DescribeLoadBalancerPortInfoRequest
                 * @return DescribeLoadBalancerPortInfoOutcome
                 */
                DescribeLoadBalancerPortInfoOutcome DescribeLoadBalancerPortInfo(const Model::DescribeLoadBalancerPortInfoRequest &request);
                void DescribeLoadBalancerPortInfoAsync(const Model::DescribeLoadBalancerPortInfoRequest& request, const DescribeLoadBalancerPortInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerPortInfoOutcomeCallable DescribeLoadBalancerPortInfoCallable(const Model::DescribeLoadBalancerPortInfoRequest& request);

                /**
                 *查询负载均衡实例异步任务的执行情况。
                 * @param req DescribeLoadBalancerTaskResultRequest
                 * @return DescribeLoadBalancerTaskResultOutcome
                 */
                DescribeLoadBalancerTaskResultOutcome DescribeLoadBalancerTaskResult(const Model::DescribeLoadBalancerTaskResultRequest &request);
                void DescribeLoadBalancerTaskResultAsync(const Model::DescribeLoadBalancerTaskResultRequest& request, const DescribeLoadBalancerTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerTaskResultOutcomeCallable DescribeLoadBalancerTaskResultCallable(const Model::DescribeLoadBalancerTaskResultRequest& request);

                /**
                 *获取黑石负载均衡实例列表
                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *获取流量镜像的监听器列表信息。
                 * @param req DescribeTrafficMirrorListenersRequest
                 * @return DescribeTrafficMirrorListenersOutcome
                 */
                DescribeTrafficMirrorListenersOutcome DescribeTrafficMirrorListeners(const Model::DescribeTrafficMirrorListenersRequest &request);
                void DescribeTrafficMirrorListenersAsync(const Model::DescribeTrafficMirrorListenersRequest& request, const DescribeTrafficMirrorListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficMirrorListenersOutcomeCallable DescribeTrafficMirrorListenersCallable(const Model::DescribeTrafficMirrorListenersRequest& request);

                /**
                 *获取流量镜像接收机健康状态。
                 * @param req DescribeTrafficMirrorReceiverHealthStatusRequest
                 * @return DescribeTrafficMirrorReceiverHealthStatusOutcome
                 */
                DescribeTrafficMirrorReceiverHealthStatusOutcome DescribeTrafficMirrorReceiverHealthStatus(const Model::DescribeTrafficMirrorReceiverHealthStatusRequest &request);
                void DescribeTrafficMirrorReceiverHealthStatusAsync(const Model::DescribeTrafficMirrorReceiverHealthStatusRequest& request, const DescribeTrafficMirrorReceiverHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficMirrorReceiverHealthStatusOutcomeCallable DescribeTrafficMirrorReceiverHealthStatusCallable(const Model::DescribeTrafficMirrorReceiverHealthStatusRequest& request);

                /**
                 *获取指定流量镜像实例的接收机信息。
                 * @param req DescribeTrafficMirrorReceiversRequest
                 * @return DescribeTrafficMirrorReceiversOutcome
                 */
                DescribeTrafficMirrorReceiversOutcome DescribeTrafficMirrorReceivers(const Model::DescribeTrafficMirrorReceiversRequest &request);
                void DescribeTrafficMirrorReceiversAsync(const Model::DescribeTrafficMirrorReceiversRequest& request, const DescribeTrafficMirrorReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficMirrorReceiversOutcomeCallable DescribeTrafficMirrorReceiversCallable(const Model::DescribeTrafficMirrorReceiversRequest& request);

                /**
                 *获取流量镜像实例的列表信息。
                 * @param req DescribeTrafficMirrorsRequest
                 * @return DescribeTrafficMirrorsOutcome
                 */
                DescribeTrafficMirrorsOutcome DescribeTrafficMirrors(const Model::DescribeTrafficMirrorsRequest &request);
                void DescribeTrafficMirrorsAsync(const Model::DescribeTrafficMirrorsRequest& request, const DescribeTrafficMirrorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficMirrorsOutcomeCallable DescribeTrafficMirrorsCallable(const Model::DescribeTrafficMirrorsRequest& request);

                /**
                 *修改黑石负载均衡四层监听器后端实例端口。
                 * @param req ModifyL4BackendPortRequest
                 * @return ModifyL4BackendPortOutcome
                 */
                ModifyL4BackendPortOutcome ModifyL4BackendPort(const Model::ModifyL4BackendPortRequest &request);
                void ModifyL4BackendPortAsync(const Model::ModifyL4BackendPortRequest& request, const ModifyL4BackendPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4BackendPortOutcomeCallable ModifyL4BackendPortCallable(const Model::ModifyL4BackendPortRequest& request);

                /**
                 *修改黑石负载均衡四层监听器后端探测端口。
                 * @param req ModifyL4BackendProbePortRequest
                 * @return ModifyL4BackendProbePortOutcome
                 */
                ModifyL4BackendProbePortOutcome ModifyL4BackendProbePort(const Model::ModifyL4BackendProbePortRequest &request);
                void ModifyL4BackendProbePortAsync(const Model::ModifyL4BackendProbePortRequest& request, const ModifyL4BackendProbePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4BackendProbePortOutcomeCallable ModifyL4BackendProbePortCallable(const Model::ModifyL4BackendProbePortRequest& request);

                /**
                 *修改黑石负载均衡四层监听器后端实例权重功能。
                 * @param req ModifyL4BackendWeightRequest
                 * @return ModifyL4BackendWeightOutcome
                 */
                ModifyL4BackendWeightOutcome ModifyL4BackendWeight(const Model::ModifyL4BackendWeightRequest &request);
                void ModifyL4BackendWeightAsync(const Model::ModifyL4BackendWeightRequest& request, const ModifyL4BackendWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4BackendWeightOutcomeCallable ModifyL4BackendWeightCallable(const Model::ModifyL4BackendWeightRequest& request);

                /**
                 *修改黑石负载均衡四层监听器。
                 * @param req ModifyL4ListenerRequest
                 * @return ModifyL4ListenerOutcome
                 */
                ModifyL4ListenerOutcome ModifyL4Listener(const Model::ModifyL4ListenerRequest &request);
                void ModifyL4ListenerAsync(const Model::ModifyL4ListenerRequest& request, const ModifyL4ListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4ListenerOutcomeCallable ModifyL4ListenerCallable(const Model::ModifyL4ListenerRequest& request);

                /**
                 *修改黑石负载均衡七层转发路径后端实例端口。
                 * @param req ModifyL7BackendPortRequest
                 * @return ModifyL7BackendPortOutcome
                 */
                ModifyL7BackendPortOutcome ModifyL7BackendPort(const Model::ModifyL7BackendPortRequest &request);
                void ModifyL7BackendPortAsync(const Model::ModifyL7BackendPortRequest& request, const ModifyL7BackendPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL7BackendPortOutcomeCallable ModifyL7BackendPortCallable(const Model::ModifyL7BackendPortRequest& request);

                /**
                 *修改黑石负载均衡七层转发路径后端实例权重。
                 * @param req ModifyL7BackendWeightRequest
                 * @return ModifyL7BackendWeightOutcome
                 */
                ModifyL7BackendWeightOutcome ModifyL7BackendWeight(const Model::ModifyL7BackendWeightRequest &request);
                void ModifyL7BackendWeightAsync(const Model::ModifyL7BackendWeightRequest& request, const ModifyL7BackendWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL7BackendWeightOutcomeCallable ModifyL7BackendWeightCallable(const Model::ModifyL7BackendWeightRequest& request);

                /**
                 *修改黑石负载均衡七层监听器。
                 * @param req ModifyL7ListenerRequest
                 * @return ModifyL7ListenerOutcome
                 */
                ModifyL7ListenerOutcome ModifyL7Listener(const Model::ModifyL7ListenerRequest &request);
                void ModifyL7ListenerAsync(const Model::ModifyL7ListenerRequest& request, const ModifyL7ListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL7ListenerOutcomeCallable ModifyL7ListenerCallable(const Model::ModifyL7ListenerRequest& request);

                /**
                 *修改黑石负载均衡七层转发路径。
                 * @param req ModifyL7LocationsRequest
                 * @return ModifyL7LocationsOutcome
                 */
                ModifyL7LocationsOutcome ModifyL7Locations(const Model::ModifyL7LocationsRequest &request);
                void ModifyL7LocationsAsync(const Model::ModifyL7LocationsRequest& request, const ModifyL7LocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL7LocationsOutcomeCallable ModifyL7LocationsCallable(const Model::ModifyL7LocationsRequest& request);

                /**
                 *根据输入参数来修改黑石负载均衡实例的基本配置信息。可能的信息包括负载均衡实例的名称，域名前缀。
                 * @param req ModifyLoadBalancerRequest
                 * @return ModifyLoadBalancerOutcome
                 */
                ModifyLoadBalancerOutcome ModifyLoadBalancer(const Model::ModifyLoadBalancerRequest &request);
                void ModifyLoadBalancerAsync(const Model::ModifyLoadBalancerRequest& request, const ModifyLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerOutcomeCallable ModifyLoadBalancerCallable(const Model::ModifyLoadBalancerRequest& request);

                /**
                 *更改黑石负载均衡的计费方式
                 * @param req ModifyLoadBalancerChargeModeRequest
                 * @return ModifyLoadBalancerChargeModeOutcome
                 */
                ModifyLoadBalancerChargeModeOutcome ModifyLoadBalancerChargeMode(const Model::ModifyLoadBalancerChargeModeRequest &request);
                void ModifyLoadBalancerChargeModeAsync(const Model::ModifyLoadBalancerChargeModeRequest& request, const ModifyLoadBalancerChargeModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerChargeModeOutcomeCallable ModifyLoadBalancerChargeModeCallable(const Model::ModifyLoadBalancerChargeModeRequest& request);

                /**
                 *更新黑石负载均衡证书。
                 * @param req ReplaceCertRequest
                 * @return ReplaceCertOutcome
                 */
                ReplaceCertOutcome ReplaceCert(const Model::ReplaceCertRequest &request);
                void ReplaceCertAsync(const Model::ReplaceCertRequest& request, const ReplaceCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceCertOutcomeCallable ReplaceCertCallable(const Model::ReplaceCertRequest& request);

                /**
                 *设置流量镜像的别名。
                 * @param req SetTrafficMirrorAliasRequest
                 * @return SetTrafficMirrorAliasOutcome
                 */
                SetTrafficMirrorAliasOutcome SetTrafficMirrorAlias(const Model::SetTrafficMirrorAliasRequest &request);
                void SetTrafficMirrorAliasAsync(const Model::SetTrafficMirrorAliasRequest& request, const SetTrafficMirrorAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTrafficMirrorAliasOutcomeCallable SetTrafficMirrorAliasCallable(const Model::SetTrafficMirrorAliasRequest& request);

                /**
                 *设置流量镜像的健康检查参数。
                 * @param req SetTrafficMirrorHealthSwitchRequest
                 * @return SetTrafficMirrorHealthSwitchOutcome
                 */
                SetTrafficMirrorHealthSwitchOutcome SetTrafficMirrorHealthSwitch(const Model::SetTrafficMirrorHealthSwitchRequest &request);
                void SetTrafficMirrorHealthSwitchAsync(const Model::SetTrafficMirrorHealthSwitchRequest& request, const SetTrafficMirrorHealthSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetTrafficMirrorHealthSwitchOutcomeCallable SetTrafficMirrorHealthSwitchCallable(const Model::SetTrafficMirrorHealthSwitchRequest& request);

                /**
                 *解绑黑石负载均衡四层监听器物理服务器。
                 * @param req UnbindL4BackendsRequest
                 * @return UnbindL4BackendsOutcome
                 */
                UnbindL4BackendsOutcome UnbindL4Backends(const Model::UnbindL4BackendsRequest &request);
                void UnbindL4BackendsAsync(const Model::UnbindL4BackendsRequest& request, const UnbindL4BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindL4BackendsOutcomeCallable UnbindL4BackendsCallable(const Model::UnbindL4BackendsRequest& request);

                /**
                 *解绑黑石物理服务器或者托管服务器到七层转发路径功能。
                 * @param req UnbindL7BackendsRequest
                 * @return UnbindL7BackendsOutcome
                 */
                UnbindL7BackendsOutcome UnbindL7Backends(const Model::UnbindL7BackendsRequest &request);
                void UnbindL7BackendsAsync(const Model::UnbindL7BackendsRequest& request, const UnbindL7BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindL7BackendsOutcomeCallable UnbindL7BackendsCallable(const Model::UnbindL7BackendsRequest& request);

                /**
                 *解绑流量镜像监听器。
                 * @param req UnbindTrafficMirrorListenersRequest
                 * @return UnbindTrafficMirrorListenersOutcome
                 */
                UnbindTrafficMirrorListenersOutcome UnbindTrafficMirrorListeners(const Model::UnbindTrafficMirrorListenersRequest &request);
                void UnbindTrafficMirrorListenersAsync(const Model::UnbindTrafficMirrorListenersRequest& request, const UnbindTrafficMirrorListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindTrafficMirrorListenersOutcomeCallable UnbindTrafficMirrorListenersCallable(const Model::UnbindTrafficMirrorListenersRequest& request);

                /**
                 *从流量镜像实例上解绑流量镜像接收机。
                 * @param req UnbindTrafficMirrorReceiversRequest
                 * @return UnbindTrafficMirrorReceiversOutcome
                 */
                UnbindTrafficMirrorReceiversOutcome UnbindTrafficMirrorReceivers(const Model::UnbindTrafficMirrorReceiversRequest &request);
                void UnbindTrafficMirrorReceiversAsync(const Model::UnbindTrafficMirrorReceiversRequest& request, const UnbindTrafficMirrorReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindTrafficMirrorReceiversOutcomeCallable UnbindTrafficMirrorReceiversCallable(const Model::UnbindTrafficMirrorReceiversRequest& request);

                /**
                 *创建黑石负载均衡证书。
                 * @param req UploadCertRequest
                 * @return UploadCertOutcome
                 */
                UploadCertOutcome UploadCert(const Model::UploadCertRequest &request);
                void UploadCertAsync(const Model::UploadCertRequest& request, const UploadCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadCertOutcomeCallable UploadCertCallable(const Model::UploadCertRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_BMLBCLIENT_H_
