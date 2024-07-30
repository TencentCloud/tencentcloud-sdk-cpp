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

#include <tencentcloud/cdwdoris/v20211228/CdwdorisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdwdoris::V20211228;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-12-28";
    const string ENDPOINT = "cdwdoris.tencentcloudapi.com";
}

CdwdorisClient::CdwdorisClient(const Credential &credential, const string &region) :
    CdwdorisClient(credential, region, ClientProfile())
{
}

CdwdorisClient::CdwdorisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdwdorisClient::CreateInstanceNewOutcome CdwdorisClient::CreateInstanceNew(const CreateInstanceNewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceNewResponse rsp = CreateInstanceNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceNewOutcome(rsp);
        else
            return CreateInstanceNewOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceNewOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateInstanceNewAsync(const CreateInstanceNewRequest& request, const CreateInstanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceNew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::CreateInstanceNewOutcomeCallable CdwdorisClient::CreateInstanceNewCallable(const CreateInstanceNewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceNewOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceNew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::CreateWorkloadGroupOutcome CdwdorisClient::CreateWorkloadGroup(const CreateWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkloadGroupResponse rsp = CreateWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkloadGroupOutcome(rsp);
        else
            return CreateWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return CreateWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateWorkloadGroupAsync(const CreateWorkloadGroupRequest& request, const CreateWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::CreateWorkloadGroupOutcomeCallable CdwdorisClient::CreateWorkloadGroupCallable(const CreateWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DeleteWorkloadGroupOutcome CdwdorisClient::DeleteWorkloadGroup(const DeleteWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkloadGroupResponse rsp = DeleteWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkloadGroupOutcome(rsp);
        else
            return DeleteWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DeleteWorkloadGroupAsync(const DeleteWorkloadGroupRequest& request, const DeleteWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DeleteWorkloadGroupOutcomeCallable CdwdorisClient::DeleteWorkloadGroupCallable(const DeleteWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeClusterConfigsOutcome CdwdorisClient::DescribeClusterConfigs(const DescribeClusterConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterConfigsResponse rsp = DescribeClusterConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterConfigsOutcome(rsp);
        else
            return DescribeClusterConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterConfigsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeClusterConfigsAsync(const DescribeClusterConfigsRequest& request, const DescribeClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeClusterConfigsOutcomeCallable CdwdorisClient::DescribeClusterConfigsCallable(const DescribeClusterConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeDatabaseAuditDownloadOutcome CdwdorisClient::DescribeDatabaseAuditDownload(const DescribeDatabaseAuditDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseAuditDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseAuditDownloadResponse rsp = DescribeDatabaseAuditDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseAuditDownloadOutcome(rsp);
        else
            return DescribeDatabaseAuditDownloadOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseAuditDownloadOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeDatabaseAuditDownloadAsync(const DescribeDatabaseAuditDownloadRequest& request, const DescribeDatabaseAuditDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseAuditDownload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeDatabaseAuditDownloadOutcomeCallable CdwdorisClient::DescribeDatabaseAuditDownloadCallable(const DescribeDatabaseAuditDownloadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseAuditDownloadOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseAuditDownload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeDatabaseAuditRecordsOutcome CdwdorisClient::DescribeDatabaseAuditRecords(const DescribeDatabaseAuditRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseAuditRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseAuditRecordsResponse rsp = DescribeDatabaseAuditRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseAuditRecordsOutcome(rsp);
        else
            return DescribeDatabaseAuditRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseAuditRecordsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeDatabaseAuditRecordsAsync(const DescribeDatabaseAuditRecordsRequest& request, const DescribeDatabaseAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseAuditRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeDatabaseAuditRecordsOutcomeCallable CdwdorisClient::DescribeDatabaseAuditRecordsCallable(const DescribeDatabaseAuditRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseAuditRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseAuditRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeFederationTokenOutcome CdwdorisClient::DescribeFederationToken(const DescribeFederationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFederationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFederationTokenResponse rsp = DescribeFederationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFederationTokenOutcome(rsp);
        else
            return DescribeFederationTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeFederationTokenOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeFederationTokenAsync(const DescribeFederationTokenRequest& request, const DescribeFederationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFederationToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeFederationTokenOutcomeCallable CdwdorisClient::DescribeFederationTokenCallable(const DescribeFederationTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFederationTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeFederationToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeGoodsDetailOutcome CdwdorisClient::DescribeGoodsDetail(const DescribeGoodsDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGoodsDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGoodsDetailResponse rsp = DescribeGoodsDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGoodsDetailOutcome(rsp);
        else
            return DescribeGoodsDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeGoodsDetailOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeGoodsDetailAsync(const DescribeGoodsDetailRequest& request, const DescribeGoodsDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGoodsDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeGoodsDetailOutcomeCallable CdwdorisClient::DescribeGoodsDetailCallable(const DescribeGoodsDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGoodsDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeGoodsDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceOutcome CdwdorisClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceOutcomeCallable CdwdorisClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceNodesOutcome CdwdorisClient::DescribeInstanceNodes(const DescribeInstanceNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesResponse rsp = DescribeInstanceNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesOutcome(rsp);
        else
            return DescribeInstanceNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceNodesAsync(const DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceNodesOutcomeCallable CdwdorisClient::DescribeInstanceNodesCallable(const DescribeInstanceNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceNodesInfoOutcome CdwdorisClient::DescribeInstanceNodesInfo(const DescribeInstanceNodesInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodesInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesInfoResponse rsp = DescribeInstanceNodesInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesInfoOutcome(rsp);
        else
            return DescribeInstanceNodesInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesInfoOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceNodesInfoAsync(const DescribeInstanceNodesInfoRequest& request, const DescribeInstanceNodesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNodesInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceNodesInfoOutcomeCallable CdwdorisClient::DescribeInstanceNodesInfoCallable(const DescribeInstanceNodesInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceNodesInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceNodesInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceStateOutcome CdwdorisClient::DescribeInstanceState(const DescribeInstanceStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceStateResponse rsp = DescribeInstanceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceStateOutcome(rsp);
        else
            return DescribeInstanceStateOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceStateOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceStateAsync(const DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceStateOutcomeCallable CdwdorisClient::DescribeInstanceStateCallable(const DescribeInstanceStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstanceUsedSubnetsOutcome CdwdorisClient::DescribeInstanceUsedSubnets(const DescribeInstanceUsedSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceUsedSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceUsedSubnetsResponse rsp = DescribeInstanceUsedSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceUsedSubnetsOutcome(rsp);
        else
            return DescribeInstanceUsedSubnetsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceUsedSubnetsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceUsedSubnetsAsync(const DescribeInstanceUsedSubnetsRequest& request, const DescribeInstanceUsedSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceUsedSubnets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstanceUsedSubnetsOutcomeCallable CdwdorisClient::DescribeInstanceUsedSubnetsCallable(const DescribeInstanceUsedSubnetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceUsedSubnetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceUsedSubnets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeInstancesOutcome CdwdorisClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeInstancesOutcomeCallable CdwdorisClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeRegionZoneOutcome CdwdorisClient::DescribeRegionZone(const DescribeRegionZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegionZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionZoneResponse rsp = DescribeRegionZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionZoneOutcome(rsp);
        else
            return DescribeRegionZoneOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionZoneOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeRegionZoneAsync(const DescribeRegionZoneRequest& request, const DescribeRegionZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegionZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeRegionZoneOutcomeCallable CdwdorisClient::DescribeRegionZoneCallable(const DescribeRegionZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionZoneOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegionZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeReplicaVersionOutcome CdwdorisClient::DescribeReplicaVersion(const DescribeReplicaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicaVersionResponse rsp = DescribeReplicaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicaVersionOutcome(rsp);
        else
            return DescribeReplicaVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicaVersionOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeReplicaVersionAsync(const DescribeReplicaVersionRequest& request, const DescribeReplicaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReplicaVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeReplicaVersionOutcomeCallable CdwdorisClient::DescribeReplicaVersionCallable(const DescribeReplicaVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReplicaVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeReplicaVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeRestoreTaskDetailOutcome CdwdorisClient::DescribeRestoreTaskDetail(const DescribeRestoreTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRestoreTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRestoreTaskDetailResponse rsp = DescribeRestoreTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRestoreTaskDetailOutcome(rsp);
        else
            return DescribeRestoreTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRestoreTaskDetailOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeRestoreTaskDetailAsync(const DescribeRestoreTaskDetailRequest& request, const DescribeRestoreTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRestoreTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeRestoreTaskDetailOutcomeCallable CdwdorisClient::DescribeRestoreTaskDetailCallable(const DescribeRestoreTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRestoreTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRestoreTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeSlowQueryRecordsOutcome CdwdorisClient::DescribeSlowQueryRecords(const DescribeSlowQueryRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryRecordsResponse rsp = DescribeSlowQueryRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryRecordsOutcome(rsp);
        else
            return DescribeSlowQueryRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryRecordsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSlowQueryRecordsAsync(const DescribeSlowQueryRecordsRequest& request, const DescribeSlowQueryRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowQueryRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeSlowQueryRecordsOutcomeCallable CdwdorisClient::DescribeSlowQueryRecordsCallable(const DescribeSlowQueryRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowQueryRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowQueryRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeSlowQueryRecordsDownloadOutcome CdwdorisClient::DescribeSlowQueryRecordsDownload(const DescribeSlowQueryRecordsDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryRecordsDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryRecordsDownloadResponse rsp = DescribeSlowQueryRecordsDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryRecordsDownloadOutcome(rsp);
        else
            return DescribeSlowQueryRecordsDownloadOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryRecordsDownloadOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSlowQueryRecordsDownloadAsync(const DescribeSlowQueryRecordsDownloadRequest& request, const DescribeSlowQueryRecordsDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowQueryRecordsDownload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeSlowQueryRecordsDownloadOutcomeCallable CdwdorisClient::DescribeSlowQueryRecordsDownloadCallable(const DescribeSlowQueryRecordsDownloadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowQueryRecordsDownloadOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowQueryRecordsDownload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeSqlApisOutcome CdwdorisClient::DescribeSqlApis(const DescribeSqlApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSqlApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSqlApisResponse rsp = DescribeSqlApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSqlApisOutcome(rsp);
        else
            return DescribeSqlApisOutcome(o.GetError());
    }
    else
    {
        return DescribeSqlApisOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSqlApisAsync(const DescribeSqlApisRequest& request, const DescribeSqlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSqlApis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeSqlApisOutcomeCallable CdwdorisClient::DescribeSqlApisCallable(const DescribeSqlApisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSqlApisOutcome()>>(
        [this, request]()
        {
            return this->DescribeSqlApis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeUserBindWorkloadGroupOutcome CdwdorisClient::DescribeUserBindWorkloadGroup(const DescribeUserBindWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserBindWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserBindWorkloadGroupResponse rsp = DescribeUserBindWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserBindWorkloadGroupOutcome(rsp);
        else
            return DescribeUserBindWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeUserBindWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeUserBindWorkloadGroupAsync(const DescribeUserBindWorkloadGroupRequest& request, const DescribeUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserBindWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeUserBindWorkloadGroupOutcomeCallable CdwdorisClient::DescribeUserBindWorkloadGroupCallable(const DescribeUserBindWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserBindWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserBindWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DescribeWorkloadGroupOutcome CdwdorisClient::DescribeWorkloadGroup(const DescribeWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkloadGroupResponse rsp = DescribeWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkloadGroupOutcome(rsp);
        else
            return DescribeWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeWorkloadGroupAsync(const DescribeWorkloadGroupRequest& request, const DescribeWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DescribeWorkloadGroupOutcomeCallable CdwdorisClient::DescribeWorkloadGroupCallable(const DescribeWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::DestroyInstanceOutcome CdwdorisClient::DestroyInstance(const DestroyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstanceResponse rsp = DestroyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstanceOutcome(rsp);
        else
            return DestroyInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DestroyInstanceAsync(const DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::DestroyInstanceOutcomeCallable CdwdorisClient::DestroyInstanceCallable(const DestroyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::FitClsLogOutcome CdwdorisClient::FitClsLog(const FitClsLogRequest &request)
{
    auto outcome = MakeRequest(request, "FitClsLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FitClsLogResponse rsp = FitClsLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FitClsLogOutcome(rsp);
        else
            return FitClsLogOutcome(o.GetError());
    }
    else
    {
        return FitClsLogOutcome(outcome.GetError());
    }
}

void CdwdorisClient::FitClsLogAsync(const FitClsLogRequest& request, const FitClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FitClsLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::FitClsLogOutcomeCallable CdwdorisClient::FitClsLogCallable(const FitClsLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FitClsLogOutcome()>>(
        [this, request]()
        {
            return this->FitClsLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyInstanceOutcome CdwdorisClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyInstanceOutcomeCallable CdwdorisClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyInstanceKeyValConfigsOutcome CdwdorisClient::ModifyInstanceKeyValConfigs(const ModifyInstanceKeyValConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceKeyValConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceKeyValConfigsResponse rsp = ModifyInstanceKeyValConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceKeyValConfigsOutcome(rsp);
        else
            return ModifyInstanceKeyValConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceKeyValConfigsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyInstanceKeyValConfigsAsync(const ModifyInstanceKeyValConfigsRequest& request, const ModifyInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceKeyValConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyInstanceKeyValConfigsOutcomeCallable CdwdorisClient::ModifyInstanceKeyValConfigsCallable(const ModifyInstanceKeyValConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceKeyValConfigsOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceKeyValConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifySecurityGroupsOutcome CdwdorisClient::ModifySecurityGroups(const ModifySecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupsResponse rsp = ModifySecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupsOutcome(rsp);
        else
            return ModifySecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifySecurityGroupsAsync(const ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifySecurityGroupsOutcomeCallable CdwdorisClient::ModifySecurityGroupsCallable(const ModifySecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyUserBindWorkloadGroupOutcome CdwdorisClient::ModifyUserBindWorkloadGroup(const ModifyUserBindWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserBindWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserBindWorkloadGroupResponse rsp = ModifyUserBindWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserBindWorkloadGroupOutcome(rsp);
        else
            return ModifyUserBindWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyUserBindWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyUserBindWorkloadGroupAsync(const ModifyUserBindWorkloadGroupRequest& request, const ModifyUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserBindWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyUserBindWorkloadGroupOutcomeCallable CdwdorisClient::ModifyUserBindWorkloadGroupCallable(const ModifyUserBindWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserBindWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserBindWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyUserPrivilegesV3Outcome CdwdorisClient::ModifyUserPrivilegesV3(const ModifyUserPrivilegesV3Request &request)
{
    auto outcome = MakeRequest(request, "ModifyUserPrivilegesV3");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserPrivilegesV3Response rsp = ModifyUserPrivilegesV3Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserPrivilegesV3Outcome(rsp);
        else
            return ModifyUserPrivilegesV3Outcome(o.GetError());
    }
    else
    {
        return ModifyUserPrivilegesV3Outcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyUserPrivilegesV3Async(const ModifyUserPrivilegesV3Request& request, const ModifyUserPrivilegesV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserPrivilegesV3(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyUserPrivilegesV3OutcomeCallable CdwdorisClient::ModifyUserPrivilegesV3Callable(const ModifyUserPrivilegesV3Request &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserPrivilegesV3Outcome()>>(
        [this, request]()
        {
            return this->ModifyUserPrivilegesV3(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyWorkloadGroupOutcome CdwdorisClient::ModifyWorkloadGroup(const ModifyWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkloadGroupResponse rsp = ModifyWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkloadGroupOutcome(rsp);
        else
            return ModifyWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyWorkloadGroupAsync(const ModifyWorkloadGroupRequest& request, const ModifyWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkloadGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyWorkloadGroupOutcomeCallable CdwdorisClient::ModifyWorkloadGroupCallable(const ModifyWorkloadGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkloadGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkloadGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ModifyWorkloadGroupStatusOutcome CdwdorisClient::ModifyWorkloadGroupStatus(const ModifyWorkloadGroupStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkloadGroupStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkloadGroupStatusResponse rsp = ModifyWorkloadGroupStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkloadGroupStatusOutcome(rsp);
        else
            return ModifyWorkloadGroupStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkloadGroupStatusOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyWorkloadGroupStatusAsync(const ModifyWorkloadGroupStatusRequest& request, const ModifyWorkloadGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkloadGroupStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ModifyWorkloadGroupStatusOutcomeCallable CdwdorisClient::ModifyWorkloadGroupStatusCallable(const ModifyWorkloadGroupStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkloadGroupStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkloadGroupStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ReduceInstanceOutcome CdwdorisClient::ReduceInstance(const ReduceInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ReduceInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReduceInstanceResponse rsp = ReduceInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReduceInstanceOutcome(rsp);
        else
            return ReduceInstanceOutcome(o.GetError());
    }
    else
    {
        return ReduceInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ReduceInstanceAsync(const ReduceInstanceRequest& request, const ReduceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReduceInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ReduceInstanceOutcomeCallable CdwdorisClient::ReduceInstanceCallable(const ReduceInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReduceInstanceOutcome()>>(
        [this, request]()
        {
            return this->ReduceInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ResizeDiskOutcome CdwdorisClient::ResizeDisk(const ResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDiskResponse rsp = ResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDiskOutcome(rsp);
        else
            return ResizeDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeDiskOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ResizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResizeDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ResizeDiskOutcomeCallable CdwdorisClient::ResizeDiskCallable(const ResizeDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResizeDiskOutcome()>>(
        [this, request]()
        {
            return this->ResizeDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::RestartClusterForNodeOutcome CdwdorisClient::RestartClusterForNode(const RestartClusterForNodeRequest &request)
{
    auto outcome = MakeRequest(request, "RestartClusterForNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartClusterForNodeResponse rsp = RestartClusterForNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartClusterForNodeOutcome(rsp);
        else
            return RestartClusterForNodeOutcome(o.GetError());
    }
    else
    {
        return RestartClusterForNodeOutcome(outcome.GetError());
    }
}

void CdwdorisClient::RestartClusterForNodeAsync(const RestartClusterForNodeRequest& request, const RestartClusterForNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartClusterForNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::RestartClusterForNodeOutcomeCallable CdwdorisClient::RestartClusterForNodeCallable(const RestartClusterForNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartClusterForNodeOutcome()>>(
        [this, request]()
        {
            return this->RestartClusterForNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ScaleOutInstanceOutcome CdwdorisClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutInstanceResponse rsp = ScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutInstanceOutcome(rsp);
        else
            return ScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleOutInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ScaleOutInstanceOutcomeCallable CdwdorisClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleOutInstanceOutcome()>>(
        [this, request]()
        {
            return this->ScaleOutInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwdorisClient::ScaleUpInstanceOutcome CdwdorisClient::ScaleUpInstance(const ScaleUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleUpInstanceResponse rsp = ScaleUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleUpInstanceOutcome(rsp);
        else
            return ScaleUpInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleUpInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ScaleUpInstanceAsync(const ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleUpInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwdorisClient::ScaleUpInstanceOutcomeCallable CdwdorisClient::ScaleUpInstanceCallable(const ScaleUpInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleUpInstanceOutcome()>>(
        [this, request]()
        {
            return this->ScaleUpInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

