/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CNGW_V20230418_CNGWCLIENT_H_
#define TENCENTCLOUD_CNGW_V20230418_CNGWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cngw/v20230418/model/AddCloudNativeAPIGatewayConsumerGroupAuthRequest.h>
#include <tencentcloud/cngw/v20230418/model/AddCloudNativeAPIGatewayConsumerGroupAuthResponse.h>
#include <tencentcloud/cngw/v20230418/model/AddCloudNativeAPIGatewayConsumerInGroupRequest.h>
#include <tencentcloud/cngw/v20230418/model/AddCloudNativeAPIGatewayConsumerInGroupResponse.h>
#include <tencentcloud/cngw/v20230418/model/BindCloudNativeAPIGatewaySecretKeyRequest.h>
#include <tencentcloud/cngw/v20230418/model/BindCloudNativeAPIGatewaySecretKeyResponse.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayConsumerRequest.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayConsumerResponse.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayConsumerGroupRequest.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayConsumerGroupResponse.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayLLMModelAPIRequest.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayLLMModelAPIResponse.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayLLMModelServiceRequest.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayLLMModelServiceResponse.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPServerRequest.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPServerResponse.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPToolRequest.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewayMCPToolResponse.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewaySecretKeyRequest.h>
#include <tencentcloud/cngw/v20230418/model/CreateCloudNativeAPIGatewaySecretKeyResponse.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayConsumerRequest.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayConsumerResponse.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayConsumerGroupRequest.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayConsumerGroupResponse.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelAPIRequest.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelAPIResponse.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelServiceRequest.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayLLMModelServiceResponse.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayMCPServerRequest.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayMCPServerResponse.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayMCPToolRequest.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewayMCPToolResponse.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewaySecretKeyRequest.h>
#include <tencentcloud/cngw/v20230418/model/DeleteCloudNativeAPIGatewaySecretKeyResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayConsumerRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayConsumerResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayConsumerGroupRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayConsumerGroupResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIsRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelAPIsResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServiceRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServiceResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServicesRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMModelServicesResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageListResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerACLRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerACLResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerAuthRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerAuthResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerListRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPServerListResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolACLListRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolACLListResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolListRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewayMCPToolListResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyResponse.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyValueRequest.h>
#include <tencentcloud/cngw/v20230418/model/DescribeCloudNativeAPIGatewaySecretKeyValueResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayConsumerRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayConsumerResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayConsumerGroupRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayConsumerGroupResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelAPIRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelAPIResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelServiceRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayLLMModelServiceResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerACLRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerACLResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerAuthRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerAuthResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerStatusRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPServerStatusResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolACLRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolACLResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolStatusRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewayMCPToolStatusResponse.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewaySecretKeyRequest.h>
#include <tencentcloud/cngw/v20230418/model/ModifyCloudNativeAPIGatewaySecretKeyResponse.h>
#include <tencentcloud/cngw/v20230418/model/RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest.h>
#include <tencentcloud/cngw/v20230418/model/RemoveCloudNativeAPIGatewayConsumerGroupAuthResponse.h>
#include <tencentcloud/cngw/v20230418/model/RemoveCloudNativeAPIGatewayConsumerInGroupRequest.h>
#include <tencentcloud/cngw/v20230418/model/RemoveCloudNativeAPIGatewayConsumerInGroupResponse.h>
#include <tencentcloud/cngw/v20230418/model/UnbindCloudNativeAPIGatewaySecretKeyRequest.h>
#include <tencentcloud/cngw/v20230418/model/UnbindCloudNativeAPIGatewaySecretKeyResponse.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            class CngwClient : public AbstractClient
            {
            public:
                CngwClient(const Credential &credential, const std::string &region);
                CngwClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddCloudNativeAPIGatewayConsumerGroupAuthResponse> AddCloudNativeAPIGatewayConsumerGroupAuthOutcome;
                typedef std::future<AddCloudNativeAPIGatewayConsumerGroupAuthOutcome> AddCloudNativeAPIGatewayConsumerGroupAuthOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::AddCloudNativeAPIGatewayConsumerGroupAuthRequest&, AddCloudNativeAPIGatewayConsumerGroupAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCloudNativeAPIGatewayConsumerGroupAuthAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCloudNativeAPIGatewayConsumerInGroupResponse> AddCloudNativeAPIGatewayConsumerInGroupOutcome;
                typedef std::future<AddCloudNativeAPIGatewayConsumerInGroupOutcome> AddCloudNativeAPIGatewayConsumerInGroupOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::AddCloudNativeAPIGatewayConsumerInGroupRequest&, AddCloudNativeAPIGatewayConsumerInGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCloudNativeAPIGatewayConsumerInGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::BindCloudNativeAPIGatewaySecretKeyResponse> BindCloudNativeAPIGatewaySecretKeyOutcome;
                typedef std::future<BindCloudNativeAPIGatewaySecretKeyOutcome> BindCloudNativeAPIGatewaySecretKeyOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::BindCloudNativeAPIGatewaySecretKeyRequest&, BindCloudNativeAPIGatewaySecretKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindCloudNativeAPIGatewaySecretKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayConsumerResponse> CreateCloudNativeAPIGatewayConsumerOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayConsumerOutcome> CreateCloudNativeAPIGatewayConsumerOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::CreateCloudNativeAPIGatewayConsumerRequest&, CreateCloudNativeAPIGatewayConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayConsumerGroupResponse> CreateCloudNativeAPIGatewayConsumerGroupOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayConsumerGroupOutcome> CreateCloudNativeAPIGatewayConsumerGroupOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::CreateCloudNativeAPIGatewayConsumerGroupRequest&, CreateCloudNativeAPIGatewayConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayLLMModelAPIResponse> CreateCloudNativeAPIGatewayLLMModelAPIOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayLLMModelAPIOutcome> CreateCloudNativeAPIGatewayLLMModelAPIOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::CreateCloudNativeAPIGatewayLLMModelAPIRequest&, CreateCloudNativeAPIGatewayLLMModelAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayLLMModelAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayLLMModelServiceResponse> CreateCloudNativeAPIGatewayLLMModelServiceOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayLLMModelServiceOutcome> CreateCloudNativeAPIGatewayLLMModelServiceOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::CreateCloudNativeAPIGatewayLLMModelServiceRequest&, CreateCloudNativeAPIGatewayLLMModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayLLMModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayMCPServerResponse> CreateCloudNativeAPIGatewayMCPServerOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayMCPServerOutcome> CreateCloudNativeAPIGatewayMCPServerOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::CreateCloudNativeAPIGatewayMCPServerRequest&, CreateCloudNativeAPIGatewayMCPServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayMCPServerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewayMCPToolResponse> CreateCloudNativeAPIGatewayMCPToolOutcome;
                typedef std::future<CreateCloudNativeAPIGatewayMCPToolOutcome> CreateCloudNativeAPIGatewayMCPToolOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::CreateCloudNativeAPIGatewayMCPToolRequest&, CreateCloudNativeAPIGatewayMCPToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewayMCPToolAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudNativeAPIGatewaySecretKeyResponse> CreateCloudNativeAPIGatewaySecretKeyOutcome;
                typedef std::future<CreateCloudNativeAPIGatewaySecretKeyOutcome> CreateCloudNativeAPIGatewaySecretKeyOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::CreateCloudNativeAPIGatewaySecretKeyRequest&, CreateCloudNativeAPIGatewaySecretKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudNativeAPIGatewaySecretKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayConsumerResponse> DeleteCloudNativeAPIGatewayConsumerOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayConsumerOutcome> DeleteCloudNativeAPIGatewayConsumerOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DeleteCloudNativeAPIGatewayConsumerRequest&, DeleteCloudNativeAPIGatewayConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayConsumerGroupResponse> DeleteCloudNativeAPIGatewayConsumerGroupOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayConsumerGroupOutcome> DeleteCloudNativeAPIGatewayConsumerGroupOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DeleteCloudNativeAPIGatewayConsumerGroupRequest&, DeleteCloudNativeAPIGatewayConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayLLMModelAPIResponse> DeleteCloudNativeAPIGatewayLLMModelAPIOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayLLMModelAPIOutcome> DeleteCloudNativeAPIGatewayLLMModelAPIOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DeleteCloudNativeAPIGatewayLLMModelAPIRequest&, DeleteCloudNativeAPIGatewayLLMModelAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayLLMModelAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayLLMModelServiceResponse> DeleteCloudNativeAPIGatewayLLMModelServiceOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayLLMModelServiceOutcome> DeleteCloudNativeAPIGatewayLLMModelServiceOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DeleteCloudNativeAPIGatewayLLMModelServiceRequest&, DeleteCloudNativeAPIGatewayLLMModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayLLMModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayMCPServerResponse> DeleteCloudNativeAPIGatewayMCPServerOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayMCPServerOutcome> DeleteCloudNativeAPIGatewayMCPServerOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DeleteCloudNativeAPIGatewayMCPServerRequest&, DeleteCloudNativeAPIGatewayMCPServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayMCPServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewayMCPToolResponse> DeleteCloudNativeAPIGatewayMCPToolOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewayMCPToolOutcome> DeleteCloudNativeAPIGatewayMCPToolOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DeleteCloudNativeAPIGatewayMCPToolRequest&, DeleteCloudNativeAPIGatewayMCPToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewayMCPToolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudNativeAPIGatewaySecretKeyResponse> DeleteCloudNativeAPIGatewaySecretKeyOutcome;
                typedef std::future<DeleteCloudNativeAPIGatewaySecretKeyOutcome> DeleteCloudNativeAPIGatewaySecretKeyOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DeleteCloudNativeAPIGatewaySecretKeyRequest&, DeleteCloudNativeAPIGatewaySecretKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudNativeAPIGatewaySecretKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayConsumerResponse> DescribeCloudNativeAPIGatewayConsumerOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayConsumerOutcome> DescribeCloudNativeAPIGatewayConsumerOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayConsumerRequest&, DescribeCloudNativeAPIGatewayConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayConsumerGroupResponse> DescribeCloudNativeAPIGatewayConsumerGroupOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayConsumerGroupOutcome> DescribeCloudNativeAPIGatewayConsumerGroupOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayConsumerGroupRequest&, DescribeCloudNativeAPIGatewayConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayLLMModelAPIResponse> DescribeCloudNativeAPIGatewayLLMModelAPIOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayLLMModelAPIOutcome> DescribeCloudNativeAPIGatewayLLMModelAPIOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayLLMModelAPIRequest&, DescribeCloudNativeAPIGatewayLLMModelAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayLLMModelAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayLLMModelAPIsResponse> DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome> DescribeCloudNativeAPIGatewayLLMModelAPIsOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayLLMModelAPIsRequest&, DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayLLMModelAPIsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayLLMModelServiceResponse> DescribeCloudNativeAPIGatewayLLMModelServiceOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayLLMModelServiceOutcome> DescribeCloudNativeAPIGatewayLLMModelServiceOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayLLMModelServiceRequest&, DescribeCloudNativeAPIGatewayLLMModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayLLMModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayLLMModelServicesResponse> DescribeCloudNativeAPIGatewayLLMModelServicesOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayLLMModelServicesOutcome> DescribeCloudNativeAPIGatewayLLMModelServicesOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayLLMModelServicesRequest&, DescribeCloudNativeAPIGatewayLLMModelServicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayLLMModelServicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayLLMTokenUsageListResponse> DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome> DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest&, DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayLLMTokenUsageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsResponse> DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome> DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest&, DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayMCPServerResponse> DescribeCloudNativeAPIGatewayMCPServerOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayMCPServerOutcome> DescribeCloudNativeAPIGatewayMCPServerOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayMCPServerRequest&, DescribeCloudNativeAPIGatewayMCPServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayMCPServerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayMCPServerACLResponse> DescribeCloudNativeAPIGatewayMCPServerACLOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayMCPServerACLOutcome> DescribeCloudNativeAPIGatewayMCPServerACLOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayMCPServerACLRequest&, DescribeCloudNativeAPIGatewayMCPServerACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayMCPServerACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayMCPServerAuthResponse> DescribeCloudNativeAPIGatewayMCPServerAuthOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayMCPServerAuthOutcome> DescribeCloudNativeAPIGatewayMCPServerAuthOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayMCPServerAuthRequest&, DescribeCloudNativeAPIGatewayMCPServerAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayMCPServerAuthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayMCPServerListResponse> DescribeCloudNativeAPIGatewayMCPServerListOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayMCPServerListOutcome> DescribeCloudNativeAPIGatewayMCPServerListOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayMCPServerListRequest&, DescribeCloudNativeAPIGatewayMCPServerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayMCPServerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayMCPToolResponse> DescribeCloudNativeAPIGatewayMCPToolOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayMCPToolOutcome> DescribeCloudNativeAPIGatewayMCPToolOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayMCPToolRequest&, DescribeCloudNativeAPIGatewayMCPToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayMCPToolAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayMCPToolACLListResponse> DescribeCloudNativeAPIGatewayMCPToolACLListOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayMCPToolACLListOutcome> DescribeCloudNativeAPIGatewayMCPToolACLListOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayMCPToolACLListRequest&, DescribeCloudNativeAPIGatewayMCPToolACLListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayMCPToolACLListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewayMCPToolListResponse> DescribeCloudNativeAPIGatewayMCPToolListOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewayMCPToolListOutcome> DescribeCloudNativeAPIGatewayMCPToolListOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewayMCPToolListRequest&, DescribeCloudNativeAPIGatewayMCPToolListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewayMCPToolListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewaySecretKeyResponse> DescribeCloudNativeAPIGatewaySecretKeyOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewaySecretKeyOutcome> DescribeCloudNativeAPIGatewaySecretKeyOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewaySecretKeyRequest&, DescribeCloudNativeAPIGatewaySecretKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewaySecretKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudNativeAPIGatewaySecretKeyValueResponse> DescribeCloudNativeAPIGatewaySecretKeyValueOutcome;
                typedef std::future<DescribeCloudNativeAPIGatewaySecretKeyValueOutcome> DescribeCloudNativeAPIGatewaySecretKeyValueOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::DescribeCloudNativeAPIGatewaySecretKeyValueRequest&, DescribeCloudNativeAPIGatewaySecretKeyValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudNativeAPIGatewaySecretKeyValueAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayConsumerResponse> ModifyCloudNativeAPIGatewayConsumerOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayConsumerOutcome> ModifyCloudNativeAPIGatewayConsumerOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayConsumerRequest&, ModifyCloudNativeAPIGatewayConsumerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayConsumerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayConsumerGroupResponse> ModifyCloudNativeAPIGatewayConsumerGroupOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayConsumerGroupOutcome> ModifyCloudNativeAPIGatewayConsumerGroupOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayConsumerGroupRequest&, ModifyCloudNativeAPIGatewayConsumerGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayConsumerGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayLLMModelAPIResponse> ModifyCloudNativeAPIGatewayLLMModelAPIOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayLLMModelAPIOutcome> ModifyCloudNativeAPIGatewayLLMModelAPIOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayLLMModelAPIRequest&, ModifyCloudNativeAPIGatewayLLMModelAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayLLMModelAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayLLMModelServiceResponse> ModifyCloudNativeAPIGatewayLLMModelServiceOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayLLMModelServiceOutcome> ModifyCloudNativeAPIGatewayLLMModelServiceOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayLLMModelServiceRequest&, ModifyCloudNativeAPIGatewayLLMModelServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayLLMModelServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayMCPServerResponse> ModifyCloudNativeAPIGatewayMCPServerOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayMCPServerOutcome> ModifyCloudNativeAPIGatewayMCPServerOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayMCPServerRequest&, ModifyCloudNativeAPIGatewayMCPServerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayMCPServerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayMCPServerACLResponse> ModifyCloudNativeAPIGatewayMCPServerACLOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayMCPServerACLOutcome> ModifyCloudNativeAPIGatewayMCPServerACLOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayMCPServerACLRequest&, ModifyCloudNativeAPIGatewayMCPServerACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayMCPServerACLAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayMCPServerAuthResponse> ModifyCloudNativeAPIGatewayMCPServerAuthOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayMCPServerAuthOutcome> ModifyCloudNativeAPIGatewayMCPServerAuthOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayMCPServerAuthRequest&, ModifyCloudNativeAPIGatewayMCPServerAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayMCPServerAuthAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayMCPServerStatusResponse> ModifyCloudNativeAPIGatewayMCPServerStatusOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayMCPServerStatusOutcome> ModifyCloudNativeAPIGatewayMCPServerStatusOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayMCPServerStatusRequest&, ModifyCloudNativeAPIGatewayMCPServerStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayMCPServerStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayMCPToolResponse> ModifyCloudNativeAPIGatewayMCPToolOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayMCPToolOutcome> ModifyCloudNativeAPIGatewayMCPToolOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayMCPToolRequest&, ModifyCloudNativeAPIGatewayMCPToolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayMCPToolAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayMCPToolACLResponse> ModifyCloudNativeAPIGatewayMCPToolACLOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayMCPToolACLOutcome> ModifyCloudNativeAPIGatewayMCPToolACLOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayMCPToolACLRequest&, ModifyCloudNativeAPIGatewayMCPToolACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayMCPToolACLAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewayMCPToolStatusResponse> ModifyCloudNativeAPIGatewayMCPToolStatusOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewayMCPToolStatusOutcome> ModifyCloudNativeAPIGatewayMCPToolStatusOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewayMCPToolStatusRequest&, ModifyCloudNativeAPIGatewayMCPToolStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewayMCPToolStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudNativeAPIGatewaySecretKeyResponse> ModifyCloudNativeAPIGatewaySecretKeyOutcome;
                typedef std::future<ModifyCloudNativeAPIGatewaySecretKeyOutcome> ModifyCloudNativeAPIGatewaySecretKeyOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::ModifyCloudNativeAPIGatewaySecretKeyRequest&, ModifyCloudNativeAPIGatewaySecretKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudNativeAPIGatewaySecretKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveCloudNativeAPIGatewayConsumerGroupAuthResponse> RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome;
                typedef std::future<RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome> RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest&, RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveCloudNativeAPIGatewayConsumerGroupAuthAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveCloudNativeAPIGatewayConsumerInGroupResponse> RemoveCloudNativeAPIGatewayConsumerInGroupOutcome;
                typedef std::future<RemoveCloudNativeAPIGatewayConsumerInGroupOutcome> RemoveCloudNativeAPIGatewayConsumerInGroupOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::RemoveCloudNativeAPIGatewayConsumerInGroupRequest&, RemoveCloudNativeAPIGatewayConsumerInGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveCloudNativeAPIGatewayConsumerInGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindCloudNativeAPIGatewaySecretKeyResponse> UnbindCloudNativeAPIGatewaySecretKeyOutcome;
                typedef std::future<UnbindCloudNativeAPIGatewaySecretKeyOutcome> UnbindCloudNativeAPIGatewaySecretKeyOutcomeCallable;
                typedef std::function<void(const CngwClient*, const Model::UnbindCloudNativeAPIGatewaySecretKeyRequest&, UnbindCloudNativeAPIGatewaySecretKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindCloudNativeAPIGatewaySecretKeyAsyncHandler;



                /**
                 *为资源（模型 API / MCP Server）添加消费者组授权。
                 * @param req AddCloudNativeAPIGatewayConsumerGroupAuthRequest
                 * @return AddCloudNativeAPIGatewayConsumerGroupAuthOutcome
                 */
                AddCloudNativeAPIGatewayConsumerGroupAuthOutcome AddCloudNativeAPIGatewayConsumerGroupAuth(const Model::AddCloudNativeAPIGatewayConsumerGroupAuthRequest &request);
                void AddCloudNativeAPIGatewayConsumerGroupAuthAsync(const Model::AddCloudNativeAPIGatewayConsumerGroupAuthRequest& request, const AddCloudNativeAPIGatewayConsumerGroupAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCloudNativeAPIGatewayConsumerGroupAuthOutcomeCallable AddCloudNativeAPIGatewayConsumerGroupAuthCallable(const Model::AddCloudNativeAPIGatewayConsumerGroupAuthRequest& request);

                /**
                 *将消费者添加到消费者组。
                 * @param req AddCloudNativeAPIGatewayConsumerInGroupRequest
                 * @return AddCloudNativeAPIGatewayConsumerInGroupOutcome
                 */
                AddCloudNativeAPIGatewayConsumerInGroupOutcome AddCloudNativeAPIGatewayConsumerInGroup(const Model::AddCloudNativeAPIGatewayConsumerInGroupRequest &request);
                void AddCloudNativeAPIGatewayConsumerInGroupAsync(const Model::AddCloudNativeAPIGatewayConsumerInGroupRequest& request, const AddCloudNativeAPIGatewayConsumerInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCloudNativeAPIGatewayConsumerInGroupOutcomeCallable AddCloudNativeAPIGatewayConsumerInGroupCallable(const Model::AddCloudNativeAPIGatewayConsumerInGroupRequest& request);

                /**
                 *添加密钥与资源的引用关系接口
                 * @param req BindCloudNativeAPIGatewaySecretKeyRequest
                 * @return BindCloudNativeAPIGatewaySecretKeyOutcome
                 */
                BindCloudNativeAPIGatewaySecretKeyOutcome BindCloudNativeAPIGatewaySecretKey(const Model::BindCloudNativeAPIGatewaySecretKeyRequest &request);
                void BindCloudNativeAPIGatewaySecretKeyAsync(const Model::BindCloudNativeAPIGatewaySecretKeyRequest& request, const BindCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindCloudNativeAPIGatewaySecretKeyOutcomeCallable BindCloudNativeAPIGatewaySecretKeyCallable(const Model::BindCloudNativeAPIGatewaySecretKeyRequest& request);

                /**
                 *创建AI网关消费者。
                 * @param req CreateCloudNativeAPIGatewayConsumerRequest
                 * @return CreateCloudNativeAPIGatewayConsumerOutcome
                 */
                CreateCloudNativeAPIGatewayConsumerOutcome CreateCloudNativeAPIGatewayConsumer(const Model::CreateCloudNativeAPIGatewayConsumerRequest &request);
                void CreateCloudNativeAPIGatewayConsumerAsync(const Model::CreateCloudNativeAPIGatewayConsumerRequest& request, const CreateCloudNativeAPIGatewayConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayConsumerOutcomeCallable CreateCloudNativeAPIGatewayConsumerCallable(const Model::CreateCloudNativeAPIGatewayConsumerRequest& request);

                /**
                 *创建AI 网关消费者组
                 * @param req CreateCloudNativeAPIGatewayConsumerGroupRequest
                 * @return CreateCloudNativeAPIGatewayConsumerGroupOutcome
                 */
                CreateCloudNativeAPIGatewayConsumerGroupOutcome CreateCloudNativeAPIGatewayConsumerGroup(const Model::CreateCloudNativeAPIGatewayConsumerGroupRequest &request);
                void CreateCloudNativeAPIGatewayConsumerGroupAsync(const Model::CreateCloudNativeAPIGatewayConsumerGroupRequest& request, const CreateCloudNativeAPIGatewayConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayConsumerGroupOutcomeCallable CreateCloudNativeAPIGatewayConsumerGroupCallable(const Model::CreateCloudNativeAPIGatewayConsumerGroupRequest& request);

                /**
                 *创建 LLM 模型 API。
                 * @param req CreateCloudNativeAPIGatewayLLMModelAPIRequest
                 * @return CreateCloudNativeAPIGatewayLLMModelAPIOutcome
                 */
                CreateCloudNativeAPIGatewayLLMModelAPIOutcome CreateCloudNativeAPIGatewayLLMModelAPI(const Model::CreateCloudNativeAPIGatewayLLMModelAPIRequest &request);
                void CreateCloudNativeAPIGatewayLLMModelAPIAsync(const Model::CreateCloudNativeAPIGatewayLLMModelAPIRequest& request, const CreateCloudNativeAPIGatewayLLMModelAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayLLMModelAPIOutcomeCallable CreateCloudNativeAPIGatewayLLMModelAPICallable(const Model::CreateCloudNativeAPIGatewayLLMModelAPIRequest& request);

                /**
                 *创建 LLM 模型服务。同一网关下 Name 唯一。
                 * @param req CreateCloudNativeAPIGatewayLLMModelServiceRequest
                 * @return CreateCloudNativeAPIGatewayLLMModelServiceOutcome
                 */
                CreateCloudNativeAPIGatewayLLMModelServiceOutcome CreateCloudNativeAPIGatewayLLMModelService(const Model::CreateCloudNativeAPIGatewayLLMModelServiceRequest &request);
                void CreateCloudNativeAPIGatewayLLMModelServiceAsync(const Model::CreateCloudNativeAPIGatewayLLMModelServiceRequest& request, const CreateCloudNativeAPIGatewayLLMModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayLLMModelServiceOutcomeCallable CreateCloudNativeAPIGatewayLLMModelServiceCallable(const Model::CreateCloudNativeAPIGatewayLLMModelServiceRequest& request);

                /**
                 *创建AI网关MCP Server
                 * @param req CreateCloudNativeAPIGatewayMCPServerRequest
                 * @return CreateCloudNativeAPIGatewayMCPServerOutcome
                 */
                CreateCloudNativeAPIGatewayMCPServerOutcome CreateCloudNativeAPIGatewayMCPServer(const Model::CreateCloudNativeAPIGatewayMCPServerRequest &request);
                void CreateCloudNativeAPIGatewayMCPServerAsync(const Model::CreateCloudNativeAPIGatewayMCPServerRequest& request, const CreateCloudNativeAPIGatewayMCPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayMCPServerOutcomeCallable CreateCloudNativeAPIGatewayMCPServerCallable(const Model::CreateCloudNativeAPIGatewayMCPServerRequest& request);

                /**
                 *创建AI网关MCP Tool
                 * @param req CreateCloudNativeAPIGatewayMCPToolRequest
                 * @return CreateCloudNativeAPIGatewayMCPToolOutcome
                 */
                CreateCloudNativeAPIGatewayMCPToolOutcome CreateCloudNativeAPIGatewayMCPTool(const Model::CreateCloudNativeAPIGatewayMCPToolRequest &request);
                void CreateCloudNativeAPIGatewayMCPToolAsync(const Model::CreateCloudNativeAPIGatewayMCPToolRequest& request, const CreateCloudNativeAPIGatewayMCPToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewayMCPToolOutcomeCallable CreateCloudNativeAPIGatewayMCPToolCallable(const Model::CreateCloudNativeAPIGatewayMCPToolRequest& request);

                /**
                 *创建消费者密钥。
                 * @param req CreateCloudNativeAPIGatewaySecretKeyRequest
                 * @return CreateCloudNativeAPIGatewaySecretKeyOutcome
                 */
                CreateCloudNativeAPIGatewaySecretKeyOutcome CreateCloudNativeAPIGatewaySecretKey(const Model::CreateCloudNativeAPIGatewaySecretKeyRequest &request);
                void CreateCloudNativeAPIGatewaySecretKeyAsync(const Model::CreateCloudNativeAPIGatewaySecretKeyRequest& request, const CreateCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudNativeAPIGatewaySecretKeyOutcomeCallable CreateCloudNativeAPIGatewaySecretKeyCallable(const Model::CreateCloudNativeAPIGatewaySecretKeyRequest& request);

                /**
                 *删除AI 网关消费者（被绑定到消费者组/密钥时需先解绑）。
                 * @param req DeleteCloudNativeAPIGatewayConsumerRequest
                 * @return DeleteCloudNativeAPIGatewayConsumerOutcome
                 */
                DeleteCloudNativeAPIGatewayConsumerOutcome DeleteCloudNativeAPIGatewayConsumer(const Model::DeleteCloudNativeAPIGatewayConsumerRequest &request);
                void DeleteCloudNativeAPIGatewayConsumerAsync(const Model::DeleteCloudNativeAPIGatewayConsumerRequest& request, const DeleteCloudNativeAPIGatewayConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayConsumerOutcomeCallable DeleteCloudNativeAPIGatewayConsumerCallable(const Model::DeleteCloudNativeAPIGatewayConsumerRequest& request);

                /**
                 *删除AI网关消费者组
                 * @param req DeleteCloudNativeAPIGatewayConsumerGroupRequest
                 * @return DeleteCloudNativeAPIGatewayConsumerGroupOutcome
                 */
                DeleteCloudNativeAPIGatewayConsumerGroupOutcome DeleteCloudNativeAPIGatewayConsumerGroup(const Model::DeleteCloudNativeAPIGatewayConsumerGroupRequest &request);
                void DeleteCloudNativeAPIGatewayConsumerGroupAsync(const Model::DeleteCloudNativeAPIGatewayConsumerGroupRequest& request, const DeleteCloudNativeAPIGatewayConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayConsumerGroupOutcomeCallable DeleteCloudNativeAPIGatewayConsumerGroupCallable(const Model::DeleteCloudNativeAPIGatewayConsumerGroupRequest& request);

                /**
                 *删除 LLM 模型 API。
                 * @param req DeleteCloudNativeAPIGatewayLLMModelAPIRequest
                 * @return DeleteCloudNativeAPIGatewayLLMModelAPIOutcome
                 */
                DeleteCloudNativeAPIGatewayLLMModelAPIOutcome DeleteCloudNativeAPIGatewayLLMModelAPI(const Model::DeleteCloudNativeAPIGatewayLLMModelAPIRequest &request);
                void DeleteCloudNativeAPIGatewayLLMModelAPIAsync(const Model::DeleteCloudNativeAPIGatewayLLMModelAPIRequest& request, const DeleteCloudNativeAPIGatewayLLMModelAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayLLMModelAPIOutcomeCallable DeleteCloudNativeAPIGatewayLLMModelAPICallable(const Model::DeleteCloudNativeAPIGatewayLLMModelAPIRequest& request);

                /**
                 *删除 LLM 模型服务（被模型 API 绑定时需先解绑）。
                 * @param req DeleteCloudNativeAPIGatewayLLMModelServiceRequest
                 * @return DeleteCloudNativeAPIGatewayLLMModelServiceOutcome
                 */
                DeleteCloudNativeAPIGatewayLLMModelServiceOutcome DeleteCloudNativeAPIGatewayLLMModelService(const Model::DeleteCloudNativeAPIGatewayLLMModelServiceRequest &request);
                void DeleteCloudNativeAPIGatewayLLMModelServiceAsync(const Model::DeleteCloudNativeAPIGatewayLLMModelServiceRequest& request, const DeleteCloudNativeAPIGatewayLLMModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayLLMModelServiceOutcomeCallable DeleteCloudNativeAPIGatewayLLMModelServiceCallable(const Model::DeleteCloudNativeAPIGatewayLLMModelServiceRequest& request);

                /**
                 *删除AI网关MCP服务
                 * @param req DeleteCloudNativeAPIGatewayMCPServerRequest
                 * @return DeleteCloudNativeAPIGatewayMCPServerOutcome
                 */
                DeleteCloudNativeAPIGatewayMCPServerOutcome DeleteCloudNativeAPIGatewayMCPServer(const Model::DeleteCloudNativeAPIGatewayMCPServerRequest &request);
                void DeleteCloudNativeAPIGatewayMCPServerAsync(const Model::DeleteCloudNativeAPIGatewayMCPServerRequest& request, const DeleteCloudNativeAPIGatewayMCPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayMCPServerOutcomeCallable DeleteCloudNativeAPIGatewayMCPServerCallable(const Model::DeleteCloudNativeAPIGatewayMCPServerRequest& request);

                /**
                 *删除AI网关MCP Tool
                 * @param req DeleteCloudNativeAPIGatewayMCPToolRequest
                 * @return DeleteCloudNativeAPIGatewayMCPToolOutcome
                 */
                DeleteCloudNativeAPIGatewayMCPToolOutcome DeleteCloudNativeAPIGatewayMCPTool(const Model::DeleteCloudNativeAPIGatewayMCPToolRequest &request);
                void DeleteCloudNativeAPIGatewayMCPToolAsync(const Model::DeleteCloudNativeAPIGatewayMCPToolRequest& request, const DeleteCloudNativeAPIGatewayMCPToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewayMCPToolOutcomeCallable DeleteCloudNativeAPIGatewayMCPToolCallable(const Model::DeleteCloudNativeAPIGatewayMCPToolRequest& request);

                /**
                 *删除消费者密钥（被绑定时需先解绑）。
                 * @param req DeleteCloudNativeAPIGatewaySecretKeyRequest
                 * @return DeleteCloudNativeAPIGatewaySecretKeyOutcome
                 */
                DeleteCloudNativeAPIGatewaySecretKeyOutcome DeleteCloudNativeAPIGatewaySecretKey(const Model::DeleteCloudNativeAPIGatewaySecretKeyRequest &request);
                void DeleteCloudNativeAPIGatewaySecretKeyAsync(const Model::DeleteCloudNativeAPIGatewaySecretKeyRequest& request, const DeleteCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudNativeAPIGatewaySecretKeyOutcomeCallable DeleteCloudNativeAPIGatewaySecretKeyCallable(const Model::DeleteCloudNativeAPIGatewaySecretKeyRequest& request);

                /**
                 *查询云原生消费者详情
                 * @param req DescribeCloudNativeAPIGatewayConsumerRequest
                 * @return DescribeCloudNativeAPIGatewayConsumerOutcome
                 */
                DescribeCloudNativeAPIGatewayConsumerOutcome DescribeCloudNativeAPIGatewayConsumer(const Model::DescribeCloudNativeAPIGatewayConsumerRequest &request);
                void DescribeCloudNativeAPIGatewayConsumerAsync(const Model::DescribeCloudNativeAPIGatewayConsumerRequest& request, const DescribeCloudNativeAPIGatewayConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayConsumerOutcomeCallable DescribeCloudNativeAPIGatewayConsumerCallable(const Model::DescribeCloudNativeAPIGatewayConsumerRequest& request);

                /**
                 *查询消费者组详情。
                 * @param req DescribeCloudNativeAPIGatewayConsumerGroupRequest
                 * @return DescribeCloudNativeAPIGatewayConsumerGroupOutcome
                 */
                DescribeCloudNativeAPIGatewayConsumerGroupOutcome DescribeCloudNativeAPIGatewayConsumerGroup(const Model::DescribeCloudNativeAPIGatewayConsumerGroupRequest &request);
                void DescribeCloudNativeAPIGatewayConsumerGroupAsync(const Model::DescribeCloudNativeAPIGatewayConsumerGroupRequest& request, const DescribeCloudNativeAPIGatewayConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayConsumerGroupOutcomeCallable DescribeCloudNativeAPIGatewayConsumerGroupCallable(const Model::DescribeCloudNativeAPIGatewayConsumerGroupRequest& request);

                /**
                 *查询单个 LLM 模型 API 详情。
                 * @param req DescribeCloudNativeAPIGatewayLLMModelAPIRequest
                 * @return DescribeCloudNativeAPIGatewayLLMModelAPIOutcome
                 */
                DescribeCloudNativeAPIGatewayLLMModelAPIOutcome DescribeCloudNativeAPIGatewayLLMModelAPI(const Model::DescribeCloudNativeAPIGatewayLLMModelAPIRequest &request);
                void DescribeCloudNativeAPIGatewayLLMModelAPIAsync(const Model::DescribeCloudNativeAPIGatewayLLMModelAPIRequest& request, const DescribeCloudNativeAPIGatewayLLMModelAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayLLMModelAPIOutcomeCallable DescribeCloudNativeAPIGatewayLLMModelAPICallable(const Model::DescribeCloudNativeAPIGatewayLLMModelAPIRequest& request);

                /**
                 *查询 LLM 模型 API 列表。
                 * @param req DescribeCloudNativeAPIGatewayLLMModelAPIsRequest
                 * @return DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome
                 */
                DescribeCloudNativeAPIGatewayLLMModelAPIsOutcome DescribeCloudNativeAPIGatewayLLMModelAPIs(const Model::DescribeCloudNativeAPIGatewayLLMModelAPIsRequest &request);
                void DescribeCloudNativeAPIGatewayLLMModelAPIsAsync(const Model::DescribeCloudNativeAPIGatewayLLMModelAPIsRequest& request, const DescribeCloudNativeAPIGatewayLLMModelAPIsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayLLMModelAPIsOutcomeCallable DescribeCloudNativeAPIGatewayLLMModelAPIsCallable(const Model::DescribeCloudNativeAPIGatewayLLMModelAPIsRequest& request);

                /**
                 *查询单个 LLM 模型服务详情。
                 * @param req DescribeCloudNativeAPIGatewayLLMModelServiceRequest
                 * @return DescribeCloudNativeAPIGatewayLLMModelServiceOutcome
                 */
                DescribeCloudNativeAPIGatewayLLMModelServiceOutcome DescribeCloudNativeAPIGatewayLLMModelService(const Model::DescribeCloudNativeAPIGatewayLLMModelServiceRequest &request);
                void DescribeCloudNativeAPIGatewayLLMModelServiceAsync(const Model::DescribeCloudNativeAPIGatewayLLMModelServiceRequest& request, const DescribeCloudNativeAPIGatewayLLMModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayLLMModelServiceOutcomeCallable DescribeCloudNativeAPIGatewayLLMModelServiceCallable(const Model::DescribeCloudNativeAPIGatewayLLMModelServiceRequest& request);

                /**
                 *查询 LLM 模型服务列表。
                 * @param req DescribeCloudNativeAPIGatewayLLMModelServicesRequest
                 * @return DescribeCloudNativeAPIGatewayLLMModelServicesOutcome
                 */
                DescribeCloudNativeAPIGatewayLLMModelServicesOutcome DescribeCloudNativeAPIGatewayLLMModelServices(const Model::DescribeCloudNativeAPIGatewayLLMModelServicesRequest &request);
                void DescribeCloudNativeAPIGatewayLLMModelServicesAsync(const Model::DescribeCloudNativeAPIGatewayLLMModelServicesRequest& request, const DescribeCloudNativeAPIGatewayLLMModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayLLMModelServicesOutcomeCallable DescribeCloudNativeAPIGatewayLLMModelServicesCallable(const Model::DescribeCloudNativeAPIGatewayLLMModelServicesRequest& request);

                /**
                 *查询 AI 网关Token 消耗统计
                 * @param req DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest
                 * @return DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome
                 */
                DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcome DescribeCloudNativeAPIGatewayLLMTokenUsageList(const Model::DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest &request);
                void DescribeCloudNativeAPIGatewayLLMTokenUsageListAsync(const Model::DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest& request, const DescribeCloudNativeAPIGatewayLLMTokenUsageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayLLMTokenUsageListOutcomeCallable DescribeCloudNativeAPIGatewayLLMTokenUsageListCallable(const Model::DescribeCloudNativeAPIGatewayLLMTokenUsageListRequest& request);

                /**
                 *查询 AI 网关Token 消耗统计汇总
                 * @param req DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest
                 * @return DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome
                 */
                DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcome DescribeCloudNativeAPIGatewayLLMTokenUsageStatistics(const Model::DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest &request);
                void DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsAsync(const Model::DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest& request, const DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsOutcomeCallable DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsCallable(const Model::DescribeCloudNativeAPIGatewayLLMTokenUsageStatisticsRequest& request);

                /**
                 *查询AI 网关MCP服务信息
                 * @param req DescribeCloudNativeAPIGatewayMCPServerRequest
                 * @return DescribeCloudNativeAPIGatewayMCPServerOutcome
                 */
                DescribeCloudNativeAPIGatewayMCPServerOutcome DescribeCloudNativeAPIGatewayMCPServer(const Model::DescribeCloudNativeAPIGatewayMCPServerRequest &request);
                void DescribeCloudNativeAPIGatewayMCPServerAsync(const Model::DescribeCloudNativeAPIGatewayMCPServerRequest& request, const DescribeCloudNativeAPIGatewayMCPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayMCPServerOutcomeCallable DescribeCloudNativeAPIGatewayMCPServerCallable(const Model::DescribeCloudNativeAPIGatewayMCPServerRequest& request);

                /**
                 *查看 MCP Server ACL
                 * @param req DescribeCloudNativeAPIGatewayMCPServerACLRequest
                 * @return DescribeCloudNativeAPIGatewayMCPServerACLOutcome
                 */
                DescribeCloudNativeAPIGatewayMCPServerACLOutcome DescribeCloudNativeAPIGatewayMCPServerACL(const Model::DescribeCloudNativeAPIGatewayMCPServerACLRequest &request);
                void DescribeCloudNativeAPIGatewayMCPServerACLAsync(const Model::DescribeCloudNativeAPIGatewayMCPServerACLRequest& request, const DescribeCloudNativeAPIGatewayMCPServerACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayMCPServerACLOutcomeCallable DescribeCloudNativeAPIGatewayMCPServerACLCallable(const Model::DescribeCloudNativeAPIGatewayMCPServerACLRequest& request);

                /**
                 *查询 MCP Server 的认证配置
                 * @param req DescribeCloudNativeAPIGatewayMCPServerAuthRequest
                 * @return DescribeCloudNativeAPIGatewayMCPServerAuthOutcome
                 */
                DescribeCloudNativeAPIGatewayMCPServerAuthOutcome DescribeCloudNativeAPIGatewayMCPServerAuth(const Model::DescribeCloudNativeAPIGatewayMCPServerAuthRequest &request);
                void DescribeCloudNativeAPIGatewayMCPServerAuthAsync(const Model::DescribeCloudNativeAPIGatewayMCPServerAuthRequest& request, const DescribeCloudNativeAPIGatewayMCPServerAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayMCPServerAuthOutcomeCallable DescribeCloudNativeAPIGatewayMCPServerAuthCallable(const Model::DescribeCloudNativeAPIGatewayMCPServerAuthRequest& request);

                /**
                 *AI网关查询MCP服务列表
                 * @param req DescribeCloudNativeAPIGatewayMCPServerListRequest
                 * @return DescribeCloudNativeAPIGatewayMCPServerListOutcome
                 */
                DescribeCloudNativeAPIGatewayMCPServerListOutcome DescribeCloudNativeAPIGatewayMCPServerList(const Model::DescribeCloudNativeAPIGatewayMCPServerListRequest &request);
                void DescribeCloudNativeAPIGatewayMCPServerListAsync(const Model::DescribeCloudNativeAPIGatewayMCPServerListRequest& request, const DescribeCloudNativeAPIGatewayMCPServerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayMCPServerListOutcomeCallable DescribeCloudNativeAPIGatewayMCPServerListCallable(const Model::DescribeCloudNativeAPIGatewayMCPServerListRequest& request);

                /**
                 *查看AI网关MCP Tool
                 * @param req DescribeCloudNativeAPIGatewayMCPToolRequest
                 * @return DescribeCloudNativeAPIGatewayMCPToolOutcome
                 */
                DescribeCloudNativeAPIGatewayMCPToolOutcome DescribeCloudNativeAPIGatewayMCPTool(const Model::DescribeCloudNativeAPIGatewayMCPToolRequest &request);
                void DescribeCloudNativeAPIGatewayMCPToolAsync(const Model::DescribeCloudNativeAPIGatewayMCPToolRequest& request, const DescribeCloudNativeAPIGatewayMCPToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayMCPToolOutcomeCallable DescribeCloudNativeAPIGatewayMCPToolCallable(const Model::DescribeCloudNativeAPIGatewayMCPToolRequest& request);

                /**
                 *查询云原生网关 MCP Server 下所有 Tool 的 ACL 状态一览（含 Server ACLType 回显）。
                 * @param req DescribeCloudNativeAPIGatewayMCPToolACLListRequest
                 * @return DescribeCloudNativeAPIGatewayMCPToolACLListOutcome
                 */
                DescribeCloudNativeAPIGatewayMCPToolACLListOutcome DescribeCloudNativeAPIGatewayMCPToolACLList(const Model::DescribeCloudNativeAPIGatewayMCPToolACLListRequest &request);
                void DescribeCloudNativeAPIGatewayMCPToolACLListAsync(const Model::DescribeCloudNativeAPIGatewayMCPToolACLListRequest& request, const DescribeCloudNativeAPIGatewayMCPToolACLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayMCPToolACLListOutcomeCallable DescribeCloudNativeAPIGatewayMCPToolACLListCallable(const Model::DescribeCloudNativeAPIGatewayMCPToolACLListRequest& request);

                /**
                 *查询 AI 网关MCP Tool 列表
                 * @param req DescribeCloudNativeAPIGatewayMCPToolListRequest
                 * @return DescribeCloudNativeAPIGatewayMCPToolListOutcome
                 */
                DescribeCloudNativeAPIGatewayMCPToolListOutcome DescribeCloudNativeAPIGatewayMCPToolList(const Model::DescribeCloudNativeAPIGatewayMCPToolListRequest &request);
                void DescribeCloudNativeAPIGatewayMCPToolListAsync(const Model::DescribeCloudNativeAPIGatewayMCPToolListRequest& request, const DescribeCloudNativeAPIGatewayMCPToolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewayMCPToolListOutcomeCallable DescribeCloudNativeAPIGatewayMCPToolListCallable(const Model::DescribeCloudNativeAPIGatewayMCPToolListRequest& request);

                /**
                 *查询密钥详情（SecretValue 字段会被掩码）。
                 * @param req DescribeCloudNativeAPIGatewaySecretKeyRequest
                 * @return DescribeCloudNativeAPIGatewaySecretKeyOutcome
                 */
                DescribeCloudNativeAPIGatewaySecretKeyOutcome DescribeCloudNativeAPIGatewaySecretKey(const Model::DescribeCloudNativeAPIGatewaySecretKeyRequest &request);
                void DescribeCloudNativeAPIGatewaySecretKeyAsync(const Model::DescribeCloudNativeAPIGatewaySecretKeyRequest& request, const DescribeCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewaySecretKeyOutcomeCallable DescribeCloudNativeAPIGatewaySecretKeyCallable(const Model::DescribeCloudNativeAPIGatewaySecretKeyRequest& request);

                /**
                 *查询密钥明文值（KMS 类型密钥不可获取）。
                 * @param req DescribeCloudNativeAPIGatewaySecretKeyValueRequest
                 * @return DescribeCloudNativeAPIGatewaySecretKeyValueOutcome
                 */
                DescribeCloudNativeAPIGatewaySecretKeyValueOutcome DescribeCloudNativeAPIGatewaySecretKeyValue(const Model::DescribeCloudNativeAPIGatewaySecretKeyValueRequest &request);
                void DescribeCloudNativeAPIGatewaySecretKeyValueAsync(const Model::DescribeCloudNativeAPIGatewaySecretKeyValueRequest& request, const DescribeCloudNativeAPIGatewaySecretKeyValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudNativeAPIGatewaySecretKeyValueOutcomeCallable DescribeCloudNativeAPIGatewaySecretKeyValueCallable(const Model::DescribeCloudNativeAPIGatewaySecretKeyValueRequest& request);

                /**
                 *修改AI网关消费者
                 * @param req ModifyCloudNativeAPIGatewayConsumerRequest
                 * @return ModifyCloudNativeAPIGatewayConsumerOutcome
                 */
                ModifyCloudNativeAPIGatewayConsumerOutcome ModifyCloudNativeAPIGatewayConsumer(const Model::ModifyCloudNativeAPIGatewayConsumerRequest &request);
                void ModifyCloudNativeAPIGatewayConsumerAsync(const Model::ModifyCloudNativeAPIGatewayConsumerRequest& request, const ModifyCloudNativeAPIGatewayConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayConsumerOutcomeCallable ModifyCloudNativeAPIGatewayConsumerCallable(const Model::ModifyCloudNativeAPIGatewayConsumerRequest& request);

                /**
                 *修改消费者组。
                 * @param req ModifyCloudNativeAPIGatewayConsumerGroupRequest
                 * @return ModifyCloudNativeAPIGatewayConsumerGroupOutcome
                 */
                ModifyCloudNativeAPIGatewayConsumerGroupOutcome ModifyCloudNativeAPIGatewayConsumerGroup(const Model::ModifyCloudNativeAPIGatewayConsumerGroupRequest &request);
                void ModifyCloudNativeAPIGatewayConsumerGroupAsync(const Model::ModifyCloudNativeAPIGatewayConsumerGroupRequest& request, const ModifyCloudNativeAPIGatewayConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayConsumerGroupOutcomeCallable ModifyCloudNativeAPIGatewayConsumerGroupCallable(const Model::ModifyCloudNativeAPIGatewayConsumerGroupRequest& request);

                /**
                 *修改 LLM 模型 API。
                 * @param req ModifyCloudNativeAPIGatewayLLMModelAPIRequest
                 * @return ModifyCloudNativeAPIGatewayLLMModelAPIOutcome
                 */
                ModifyCloudNativeAPIGatewayLLMModelAPIOutcome ModifyCloudNativeAPIGatewayLLMModelAPI(const Model::ModifyCloudNativeAPIGatewayLLMModelAPIRequest &request);
                void ModifyCloudNativeAPIGatewayLLMModelAPIAsync(const Model::ModifyCloudNativeAPIGatewayLLMModelAPIRequest& request, const ModifyCloudNativeAPIGatewayLLMModelAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayLLMModelAPIOutcomeCallable ModifyCloudNativeAPIGatewayLLMModelAPICallable(const Model::ModifyCloudNativeAPIGatewayLLMModelAPIRequest& request);

                /**
                 *修改 LLM 模型服务。
                 * @param req ModifyCloudNativeAPIGatewayLLMModelServiceRequest
                 * @return ModifyCloudNativeAPIGatewayLLMModelServiceOutcome
                 */
                ModifyCloudNativeAPIGatewayLLMModelServiceOutcome ModifyCloudNativeAPIGatewayLLMModelService(const Model::ModifyCloudNativeAPIGatewayLLMModelServiceRequest &request);
                void ModifyCloudNativeAPIGatewayLLMModelServiceAsync(const Model::ModifyCloudNativeAPIGatewayLLMModelServiceRequest& request, const ModifyCloudNativeAPIGatewayLLMModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayLLMModelServiceOutcomeCallable ModifyCloudNativeAPIGatewayLLMModelServiceCallable(const Model::ModifyCloudNativeAPIGatewayLLMModelServiceRequest& request);

                /**
                 *修改MCP服务配置
                 * @param req ModifyCloudNativeAPIGatewayMCPServerRequest
                 * @return ModifyCloudNativeAPIGatewayMCPServerOutcome
                 */
                ModifyCloudNativeAPIGatewayMCPServerOutcome ModifyCloudNativeAPIGatewayMCPServer(const Model::ModifyCloudNativeAPIGatewayMCPServerRequest &request);
                void ModifyCloudNativeAPIGatewayMCPServerAsync(const Model::ModifyCloudNativeAPIGatewayMCPServerRequest& request, const ModifyCloudNativeAPIGatewayMCPServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayMCPServerOutcomeCallable ModifyCloudNativeAPIGatewayMCPServerCallable(const Model::ModifyCloudNativeAPIGatewayMCPServerRequest& request);

                /**
                 *修改 MCP Server ACL
                 * @param req ModifyCloudNativeAPIGatewayMCPServerACLRequest
                 * @return ModifyCloudNativeAPIGatewayMCPServerACLOutcome
                 */
                ModifyCloudNativeAPIGatewayMCPServerACLOutcome ModifyCloudNativeAPIGatewayMCPServerACL(const Model::ModifyCloudNativeAPIGatewayMCPServerACLRequest &request);
                void ModifyCloudNativeAPIGatewayMCPServerACLAsync(const Model::ModifyCloudNativeAPIGatewayMCPServerACLRequest& request, const ModifyCloudNativeAPIGatewayMCPServerACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayMCPServerACLOutcomeCallable ModifyCloudNativeAPIGatewayMCPServerACLCallable(const Model::ModifyCloudNativeAPIGatewayMCPServerACLRequest& request);

                /**
                 *修改 MCP Server 的认证配置
                 * @param req ModifyCloudNativeAPIGatewayMCPServerAuthRequest
                 * @return ModifyCloudNativeAPIGatewayMCPServerAuthOutcome
                 */
                ModifyCloudNativeAPIGatewayMCPServerAuthOutcome ModifyCloudNativeAPIGatewayMCPServerAuth(const Model::ModifyCloudNativeAPIGatewayMCPServerAuthRequest &request);
                void ModifyCloudNativeAPIGatewayMCPServerAuthAsync(const Model::ModifyCloudNativeAPIGatewayMCPServerAuthRequest& request, const ModifyCloudNativeAPIGatewayMCPServerAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayMCPServerAuthOutcomeCallable ModifyCloudNativeAPIGatewayMCPServerAuthCallable(const Model::ModifyCloudNativeAPIGatewayMCPServerAuthRequest& request);

                /**
                 *创建AI 网关MCP Server
                 * @param req ModifyCloudNativeAPIGatewayMCPServerStatusRequest
                 * @return ModifyCloudNativeAPIGatewayMCPServerStatusOutcome
                 */
                ModifyCloudNativeAPIGatewayMCPServerStatusOutcome ModifyCloudNativeAPIGatewayMCPServerStatus(const Model::ModifyCloudNativeAPIGatewayMCPServerStatusRequest &request);
                void ModifyCloudNativeAPIGatewayMCPServerStatusAsync(const Model::ModifyCloudNativeAPIGatewayMCPServerStatusRequest& request, const ModifyCloudNativeAPIGatewayMCPServerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayMCPServerStatusOutcomeCallable ModifyCloudNativeAPIGatewayMCPServerStatusCallable(const Model::ModifyCloudNativeAPIGatewayMCPServerStatusRequest& request);

                /**
                 *修改AI网关MCP Tool
                 * @param req ModifyCloudNativeAPIGatewayMCPToolRequest
                 * @return ModifyCloudNativeAPIGatewayMCPToolOutcome
                 */
                ModifyCloudNativeAPIGatewayMCPToolOutcome ModifyCloudNativeAPIGatewayMCPTool(const Model::ModifyCloudNativeAPIGatewayMCPToolRequest &request);
                void ModifyCloudNativeAPIGatewayMCPToolAsync(const Model::ModifyCloudNativeAPIGatewayMCPToolRequest& request, const ModifyCloudNativeAPIGatewayMCPToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayMCPToolOutcomeCallable ModifyCloudNativeAPIGatewayMCPToolCallable(const Model::ModifyCloudNativeAPIGatewayMCPToolRequest& request);

                /**
                 *修改 MCP Server Tool ACL
                 * @param req ModifyCloudNativeAPIGatewayMCPToolACLRequest
                 * @return ModifyCloudNativeAPIGatewayMCPToolACLOutcome
                 */
                ModifyCloudNativeAPIGatewayMCPToolACLOutcome ModifyCloudNativeAPIGatewayMCPToolACL(const Model::ModifyCloudNativeAPIGatewayMCPToolACLRequest &request);
                void ModifyCloudNativeAPIGatewayMCPToolACLAsync(const Model::ModifyCloudNativeAPIGatewayMCPToolACLRequest& request, const ModifyCloudNativeAPIGatewayMCPToolACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayMCPToolACLOutcomeCallable ModifyCloudNativeAPIGatewayMCPToolACLCallable(const Model::ModifyCloudNativeAPIGatewayMCPToolACLRequest& request);

                /**
                 *AI网关修改MCP Tool上下线状态
                 * @param req ModifyCloudNativeAPIGatewayMCPToolStatusRequest
                 * @return ModifyCloudNativeAPIGatewayMCPToolStatusOutcome
                 */
                ModifyCloudNativeAPIGatewayMCPToolStatusOutcome ModifyCloudNativeAPIGatewayMCPToolStatus(const Model::ModifyCloudNativeAPIGatewayMCPToolStatusRequest &request);
                void ModifyCloudNativeAPIGatewayMCPToolStatusAsync(const Model::ModifyCloudNativeAPIGatewayMCPToolStatusRequest& request, const ModifyCloudNativeAPIGatewayMCPToolStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewayMCPToolStatusOutcomeCallable ModifyCloudNativeAPIGatewayMCPToolStatusCallable(const Model::ModifyCloudNativeAPIGatewayMCPToolStatusRequest& request);

                /**
                 *修改AI网关密钥
                 * @param req ModifyCloudNativeAPIGatewaySecretKeyRequest
                 * @return ModifyCloudNativeAPIGatewaySecretKeyOutcome
                 */
                ModifyCloudNativeAPIGatewaySecretKeyOutcome ModifyCloudNativeAPIGatewaySecretKey(const Model::ModifyCloudNativeAPIGatewaySecretKeyRequest &request);
                void ModifyCloudNativeAPIGatewaySecretKeyAsync(const Model::ModifyCloudNativeAPIGatewaySecretKeyRequest& request, const ModifyCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudNativeAPIGatewaySecretKeyOutcomeCallable ModifyCloudNativeAPIGatewaySecretKeyCallable(const Model::ModifyCloudNativeAPIGatewaySecretKeyRequest& request);

                /**
                 *从资源（模型 API / MCP Server）移除消费者组授权。
                 * @param req RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest
                 * @return RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome
                 */
                RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcome RemoveCloudNativeAPIGatewayConsumerGroupAuth(const Model::RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest &request);
                void RemoveCloudNativeAPIGatewayConsumerGroupAuthAsync(const Model::RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest& request, const RemoveCloudNativeAPIGatewayConsumerGroupAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveCloudNativeAPIGatewayConsumerGroupAuthOutcomeCallable RemoveCloudNativeAPIGatewayConsumerGroupAuthCallable(const Model::RemoveCloudNativeAPIGatewayConsumerGroupAuthRequest& request);

                /**
                 *将消费者从消费者组移除。
                 * @param req RemoveCloudNativeAPIGatewayConsumerInGroupRequest
                 * @return RemoveCloudNativeAPIGatewayConsumerInGroupOutcome
                 */
                RemoveCloudNativeAPIGatewayConsumerInGroupOutcome RemoveCloudNativeAPIGatewayConsumerInGroup(const Model::RemoveCloudNativeAPIGatewayConsumerInGroupRequest &request);
                void RemoveCloudNativeAPIGatewayConsumerInGroupAsync(const Model::RemoveCloudNativeAPIGatewayConsumerInGroupRequest& request, const RemoveCloudNativeAPIGatewayConsumerInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveCloudNativeAPIGatewayConsumerInGroupOutcomeCallable RemoveCloudNativeAPIGatewayConsumerInGroupCallable(const Model::RemoveCloudNativeAPIGatewayConsumerInGroupRequest& request);

                /**
                 *解绑密钥
                 * @param req UnbindCloudNativeAPIGatewaySecretKeyRequest
                 * @return UnbindCloudNativeAPIGatewaySecretKeyOutcome
                 */
                UnbindCloudNativeAPIGatewaySecretKeyOutcome UnbindCloudNativeAPIGatewaySecretKey(const Model::UnbindCloudNativeAPIGatewaySecretKeyRequest &request);
                void UnbindCloudNativeAPIGatewaySecretKeyAsync(const Model::UnbindCloudNativeAPIGatewaySecretKeyRequest& request, const UnbindCloudNativeAPIGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindCloudNativeAPIGatewaySecretKeyOutcomeCallable UnbindCloudNativeAPIGatewaySecretKeyCallable(const Model::UnbindCloudNativeAPIGatewaySecretKeyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_CNGWCLIENT_H_
