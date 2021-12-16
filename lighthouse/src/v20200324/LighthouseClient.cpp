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

#include <tencentcloud/lighthouse/v20200324/LighthouseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lighthouse::V20200324;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-24";
    const string ENDPOINT = "lighthouse.tencentcloudapi.com";
}

LighthouseClient::LighthouseClient(const Credential &credential, const string &region) :
    LighthouseClient(credential, region, ClientProfile())
{
}

LighthouseClient::LighthouseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LighthouseClient::ApplyInstanceSnapshotOutcome LighthouseClient::ApplyInstanceSnapshot(const ApplyInstanceSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyInstanceSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyInstanceSnapshotResponse rsp = ApplyInstanceSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyInstanceSnapshotOutcome(rsp);
        else
            return ApplyInstanceSnapshotOutcome(o.GetError());
    }
    else
    {
        return ApplyInstanceSnapshotOutcome(outcome.GetError());
    }
}

void LighthouseClient::ApplyInstanceSnapshotAsync(const ApplyInstanceSnapshotRequest& request, const ApplyInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyInstanceSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ApplyInstanceSnapshotOutcomeCallable LighthouseClient::ApplyInstanceSnapshotCallable(const ApplyInstanceSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyInstanceSnapshotOutcome()>>(
        [this, request]()
        {
            return this->ApplyInstanceSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::AssociateInstancesKeyPairsOutcome LighthouseClient::AssociateInstancesKeyPairs(const AssociateInstancesKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateInstancesKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateInstancesKeyPairsResponse rsp = AssociateInstancesKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateInstancesKeyPairsOutcome(rsp);
        else
            return AssociateInstancesKeyPairsOutcome(o.GetError());
    }
    else
    {
        return AssociateInstancesKeyPairsOutcome(outcome.GetError());
    }
}

void LighthouseClient::AssociateInstancesKeyPairsAsync(const AssociateInstancesKeyPairsRequest& request, const AssociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateInstancesKeyPairs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::AssociateInstancesKeyPairsOutcomeCallable LighthouseClient::AssociateInstancesKeyPairsCallable(const AssociateInstancesKeyPairsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateInstancesKeyPairsOutcome()>>(
        [this, request]()
        {
            return this->AssociateInstancesKeyPairs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::AttachCcnOutcome LighthouseClient::AttachCcn(const AttachCcnRequest &request)
{
    auto outcome = MakeRequest(request, "AttachCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachCcnResponse rsp = AttachCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachCcnOutcome(rsp);
        else
            return AttachCcnOutcome(o.GetError());
    }
    else
    {
        return AttachCcnOutcome(outcome.GetError());
    }
}

void LighthouseClient::AttachCcnAsync(const AttachCcnRequest& request, const AttachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachCcn(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::AttachCcnOutcomeCallable LighthouseClient::AttachCcnCallable(const AttachCcnRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachCcnOutcome()>>(
        [this, request]()
        {
            return this->AttachCcn(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::AttachDisksOutcome LighthouseClient::AttachDisks(const AttachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "AttachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachDisksResponse rsp = AttachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachDisksOutcome(rsp);
        else
            return AttachDisksOutcome(o.GetError());
    }
    else
    {
        return AttachDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::AttachDisksAsync(const AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::AttachDisksOutcomeCallable LighthouseClient::AttachDisksCallable(const AttachDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachDisksOutcome()>>(
        [this, request]()
        {
            return this->AttachDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::CreateBlueprintOutcome LighthouseClient::CreateBlueprint(const CreateBlueprintRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBlueprint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBlueprintResponse rsp = CreateBlueprintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBlueprintOutcome(rsp);
        else
            return CreateBlueprintOutcome(o.GetError());
    }
    else
    {
        return CreateBlueprintOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateBlueprintAsync(const CreateBlueprintRequest& request, const CreateBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBlueprint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::CreateBlueprintOutcomeCallable LighthouseClient::CreateBlueprintCallable(const CreateBlueprintRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBlueprintOutcome()>>(
        [this, request]()
        {
            return this->CreateBlueprint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::CreateFirewallRulesOutcome LighthouseClient::CreateFirewallRules(const CreateFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFirewallRulesResponse rsp = CreateFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFirewallRulesOutcome(rsp);
        else
            return CreateFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return CreateFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateFirewallRulesAsync(const CreateFirewallRulesRequest& request, const CreateFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFirewallRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::CreateFirewallRulesOutcomeCallable LighthouseClient::CreateFirewallRulesCallable(const CreateFirewallRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFirewallRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateFirewallRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::CreateInstanceSnapshotOutcome LighthouseClient::CreateInstanceSnapshot(const CreateInstanceSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceSnapshotResponse rsp = CreateInstanceSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceSnapshotOutcome(rsp);
        else
            return CreateInstanceSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceSnapshotOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateInstanceSnapshotAsync(const CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::CreateInstanceSnapshotOutcomeCallable LighthouseClient::CreateInstanceSnapshotCallable(const CreateInstanceSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceSnapshotOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::CreateKeyPairOutcome LighthouseClient::CreateKeyPair(const CreateKeyPairRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKeyPair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKeyPairResponse rsp = CreateKeyPairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKeyPairOutcome(rsp);
        else
            return CreateKeyPairOutcome(o.GetError());
    }
    else
    {
        return CreateKeyPairOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKeyPair(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::CreateKeyPairOutcomeCallable LighthouseClient::CreateKeyPairCallable(const CreateKeyPairRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKeyPairOutcome()>>(
        [this, request]()
        {
            return this->CreateKeyPair(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DeleteBlueprintsOutcome LighthouseClient::DeleteBlueprints(const DeleteBlueprintsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBlueprints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBlueprintsResponse rsp = DeleteBlueprintsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBlueprintsOutcome(rsp);
        else
            return DeleteBlueprintsOutcome(o.GetError());
    }
    else
    {
        return DeleteBlueprintsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteBlueprintsAsync(const DeleteBlueprintsRequest& request, const DeleteBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBlueprints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DeleteBlueprintsOutcomeCallable LighthouseClient::DeleteBlueprintsCallable(const DeleteBlueprintsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBlueprintsOutcome()>>(
        [this, request]()
        {
            return this->DeleteBlueprints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DeleteFirewallRulesOutcome LighthouseClient::DeleteFirewallRules(const DeleteFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFirewallRulesResponse rsp = DeleteFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFirewallRulesOutcome(rsp);
        else
            return DeleteFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteFirewallRulesAsync(const DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFirewallRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DeleteFirewallRulesOutcomeCallable LighthouseClient::DeleteFirewallRulesCallable(const DeleteFirewallRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFirewallRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteFirewallRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DeleteKeyPairsOutcome LighthouseClient::DeleteKeyPairs(const DeleteKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKeyPairsResponse rsp = DeleteKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKeyPairsOutcome(rsp);
        else
            return DeleteKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DeleteKeyPairsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteKeyPairsAsync(const DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteKeyPairs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DeleteKeyPairsOutcomeCallable LighthouseClient::DeleteKeyPairsCallable(const DeleteKeyPairsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteKeyPairsOutcome()>>(
        [this, request]()
        {
            return this->DeleteKeyPairs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DeleteSnapshotsOutcome LighthouseClient::DeleteSnapshots(const DeleteSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotsResponse rsp = DeleteSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotsOutcome(rsp);
        else
            return DeleteSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteSnapshotsAsync(const DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DeleteSnapshotsOutcomeCallable LighthouseClient::DeleteSnapshotsCallable(const DeleteSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->DeleteSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeBlueprintInstancesOutcome LighthouseClient::DescribeBlueprintInstances(const DescribeBlueprintInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlueprintInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlueprintInstancesResponse rsp = DescribeBlueprintInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlueprintInstancesOutcome(rsp);
        else
            return DescribeBlueprintInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeBlueprintInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBlueprintInstancesAsync(const DescribeBlueprintInstancesRequest& request, const DescribeBlueprintInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlueprintInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeBlueprintInstancesOutcomeCallable LighthouseClient::DescribeBlueprintInstancesCallable(const DescribeBlueprintInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlueprintInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlueprintInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeBlueprintsOutcome LighthouseClient::DescribeBlueprints(const DescribeBlueprintsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlueprints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlueprintsResponse rsp = DescribeBlueprintsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlueprintsOutcome(rsp);
        else
            return DescribeBlueprintsOutcome(o.GetError());
    }
    else
    {
        return DescribeBlueprintsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBlueprintsAsync(const DescribeBlueprintsRequest& request, const DescribeBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlueprints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeBlueprintsOutcomeCallable LighthouseClient::DescribeBlueprintsCallable(const DescribeBlueprintsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlueprintsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlueprints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeBundleDiscountOutcome LighthouseClient::DescribeBundleDiscount(const DescribeBundleDiscountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBundleDiscount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBundleDiscountResponse rsp = DescribeBundleDiscountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBundleDiscountOutcome(rsp);
        else
            return DescribeBundleDiscountOutcome(o.GetError());
    }
    else
    {
        return DescribeBundleDiscountOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBundleDiscountAsync(const DescribeBundleDiscountRequest& request, const DescribeBundleDiscountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBundleDiscount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeBundleDiscountOutcomeCallable LighthouseClient::DescribeBundleDiscountCallable(const DescribeBundleDiscountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBundleDiscountOutcome()>>(
        [this, request]()
        {
            return this->DescribeBundleDiscount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeBundlesOutcome LighthouseClient::DescribeBundles(const DescribeBundlesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBundles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBundlesResponse rsp = DescribeBundlesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBundlesOutcome(rsp);
        else
            return DescribeBundlesOutcome(o.GetError());
    }
    else
    {
        return DescribeBundlesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBundlesAsync(const DescribeBundlesRequest& request, const DescribeBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBundles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeBundlesOutcomeCallable LighthouseClient::DescribeBundlesCallable(const DescribeBundlesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBundlesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBundles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeCcnAttachedInstancesOutcome LighthouseClient::DescribeCcnAttachedInstances(const DescribeCcnAttachedInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcnAttachedInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcnAttachedInstancesResponse rsp = DescribeCcnAttachedInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcnAttachedInstancesOutcome(rsp);
        else
            return DescribeCcnAttachedInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeCcnAttachedInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeCcnAttachedInstancesAsync(const DescribeCcnAttachedInstancesRequest& request, const DescribeCcnAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCcnAttachedInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeCcnAttachedInstancesOutcomeCallable LighthouseClient::DescribeCcnAttachedInstancesCallable(const DescribeCcnAttachedInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCcnAttachedInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCcnAttachedInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeDiskConfigsOutcome LighthouseClient::DescribeDiskConfigs(const DescribeDiskConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskConfigsResponse rsp = DescribeDiskConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskConfigsOutcome(rsp);
        else
            return DescribeDiskConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskConfigsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDiskConfigsAsync(const DescribeDiskConfigsRequest& request, const DescribeDiskConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiskConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeDiskConfigsOutcomeCallable LighthouseClient::DescribeDiskConfigsCallable(const DescribeDiskConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiskConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiskConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeDiskDiscountOutcome LighthouseClient::DescribeDiskDiscount(const DescribeDiskDiscountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskDiscount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskDiscountResponse rsp = DescribeDiskDiscountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskDiscountOutcome(rsp);
        else
            return DescribeDiskDiscountOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskDiscountOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDiskDiscountAsync(const DescribeDiskDiscountRequest& request, const DescribeDiskDiscountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiskDiscount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeDiskDiscountOutcomeCallable LighthouseClient::DescribeDiskDiscountCallable(const DescribeDiskDiscountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiskDiscountOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiskDiscount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeDisksOutcome LighthouseClient::DescribeDisks(const DescribeDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksResponse rsp = DescribeDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksOutcome(rsp);
        else
            return DescribeDisksOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeDisksOutcomeCallable LighthouseClient::DescribeDisksCallable(const DescribeDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDisksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeDisksDeniedActionsOutcome LighthouseClient::DescribeDisksDeniedActions(const DescribeDisksDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisksDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksDeniedActionsResponse rsp = DescribeDisksDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksDeniedActionsOutcome(rsp);
        else
            return DescribeDisksDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksDeniedActionsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDisksDeniedActionsAsync(const DescribeDisksDeniedActionsRequest& request, const DescribeDisksDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDisksDeniedActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeDisksDeniedActionsOutcomeCallable LighthouseClient::DescribeDisksDeniedActionsCallable(const DescribeDisksDeniedActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDisksDeniedActionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDisksDeniedActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeDisksReturnableOutcome LighthouseClient::DescribeDisksReturnable(const DescribeDisksReturnableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisksReturnable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksReturnableResponse rsp = DescribeDisksReturnableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksReturnableOutcome(rsp);
        else
            return DescribeDisksReturnableOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksReturnableOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeDisksReturnableAsync(const DescribeDisksReturnableRequest& request, const DescribeDisksReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDisksReturnable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeDisksReturnableOutcomeCallable LighthouseClient::DescribeDisksReturnableCallable(const DescribeDisksReturnableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDisksReturnableOutcome()>>(
        [this, request]()
        {
            return this->DescribeDisksReturnable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeFirewallRulesOutcome LighthouseClient::DescribeFirewallRules(const DescribeFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallRulesResponse rsp = DescribeFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallRulesOutcome(rsp);
        else
            return DescribeFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallRulesAsync(const DescribeFirewallRulesRequest& request, const DescribeFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirewallRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeFirewallRulesOutcomeCallable LighthouseClient::DescribeFirewallRulesCallable(const DescribeFirewallRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFirewallRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFirewallRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeFirewallRulesTemplateOutcome LighthouseClient::DescribeFirewallRulesTemplate(const DescribeFirewallRulesTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallRulesTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallRulesTemplateResponse rsp = DescribeFirewallRulesTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallRulesTemplateOutcome(rsp);
        else
            return DescribeFirewallRulesTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallRulesTemplateOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallRulesTemplateAsync(const DescribeFirewallRulesTemplateRequest& request, const DescribeFirewallRulesTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirewallRulesTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeFirewallRulesTemplateOutcomeCallable LighthouseClient::DescribeFirewallRulesTemplateCallable(const DescribeFirewallRulesTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFirewallRulesTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeFirewallRulesTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeGeneralResourceQuotasOutcome LighthouseClient::DescribeGeneralResourceQuotas(const DescribeGeneralResourceQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGeneralResourceQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGeneralResourceQuotasResponse rsp = DescribeGeneralResourceQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGeneralResourceQuotasOutcome(rsp);
        else
            return DescribeGeneralResourceQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribeGeneralResourceQuotasOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeGeneralResourceQuotasAsync(const DescribeGeneralResourceQuotasRequest& request, const DescribeGeneralResourceQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGeneralResourceQuotas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeGeneralResourceQuotasOutcomeCallable LighthouseClient::DescribeGeneralResourceQuotasCallable(const DescribeGeneralResourceQuotasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGeneralResourceQuotasOutcome()>>(
        [this, request]()
        {
            return this->DescribeGeneralResourceQuotas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeInstanceLoginKeyPairAttributeOutcome LighthouseClient::DescribeInstanceLoginKeyPairAttribute(const DescribeInstanceLoginKeyPairAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLoginKeyPairAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLoginKeyPairAttributeResponse rsp = DescribeInstanceLoginKeyPairAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLoginKeyPairAttributeOutcome(rsp);
        else
            return DescribeInstanceLoginKeyPairAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLoginKeyPairAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstanceLoginKeyPairAttributeAsync(const DescribeInstanceLoginKeyPairAttributeRequest& request, const DescribeInstanceLoginKeyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceLoginKeyPairAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeInstanceLoginKeyPairAttributeOutcomeCallable LighthouseClient::DescribeInstanceLoginKeyPairAttributeCallable(const DescribeInstanceLoginKeyPairAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceLoginKeyPairAttributeOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceLoginKeyPairAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeInstanceVncUrlOutcome LighthouseClient::DescribeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceVncUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceVncUrlResponse rsp = DescribeInstanceVncUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceVncUrlOutcome(rsp);
        else
            return DescribeInstanceVncUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceVncUrlOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstanceVncUrlAsync(const DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceVncUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeInstanceVncUrlOutcomeCallable LighthouseClient::DescribeInstanceVncUrlCallable(const DescribeInstanceVncUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceVncUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceVncUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeInstancesOutcome LighthouseClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void LighthouseClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeInstancesOutcomeCallable LighthouseClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

LighthouseClient::DescribeInstancesDeniedActionsOutcome LighthouseClient::DescribeInstancesDeniedActions(const DescribeInstancesDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDeniedActionsResponse rsp = DescribeInstancesDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDeniedActionsOutcome(rsp);
        else
            return DescribeInstancesDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDeniedActionsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesDeniedActionsAsync(const DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesDeniedActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeInstancesDeniedActionsOutcomeCallable LighthouseClient::DescribeInstancesDeniedActionsCallable(const DescribeInstancesDeniedActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesDeniedActionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesDeniedActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeInstancesDiskNumOutcome LighthouseClient::DescribeInstancesDiskNum(const DescribeInstancesDiskNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDiskNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDiskNumResponse rsp = DescribeInstancesDiskNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDiskNumOutcome(rsp);
        else
            return DescribeInstancesDiskNumOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDiskNumOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesDiskNumAsync(const DescribeInstancesDiskNumRequest& request, const DescribeInstancesDiskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesDiskNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeInstancesDiskNumOutcomeCallable LighthouseClient::DescribeInstancesDiskNumCallable(const DescribeInstancesDiskNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesDiskNumOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesDiskNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeInstancesReturnableOutcome LighthouseClient::DescribeInstancesReturnable(const DescribeInstancesReturnableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesReturnable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesReturnableResponse rsp = DescribeInstancesReturnableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesReturnableOutcome(rsp);
        else
            return DescribeInstancesReturnableOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesReturnableOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesReturnableAsync(const DescribeInstancesReturnableRequest& request, const DescribeInstancesReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesReturnable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeInstancesReturnableOutcomeCallable LighthouseClient::DescribeInstancesReturnableCallable(const DescribeInstancesReturnableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesReturnableOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesReturnable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeInstancesTrafficPackagesOutcome LighthouseClient::DescribeInstancesTrafficPackages(const DescribeInstancesTrafficPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesTrafficPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesTrafficPackagesResponse rsp = DescribeInstancesTrafficPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesTrafficPackagesOutcome(rsp);
        else
            return DescribeInstancesTrafficPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesTrafficPackagesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesTrafficPackagesAsync(const DescribeInstancesTrafficPackagesRequest& request, const DescribeInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesTrafficPackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeInstancesTrafficPackagesOutcomeCallable LighthouseClient::DescribeInstancesTrafficPackagesCallable(const DescribeInstancesTrafficPackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesTrafficPackagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesTrafficPackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeKeyPairsOutcome LighthouseClient::DescribeKeyPairs(const DescribeKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeyPairsResponse rsp = DescribeKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeyPairsOutcome(rsp);
        else
            return DescribeKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DescribeKeyPairsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeKeyPairsAsync(const DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKeyPairs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeKeyPairsOutcomeCallable LighthouseClient::DescribeKeyPairsCallable(const DescribeKeyPairsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKeyPairsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKeyPairs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeModifyInstanceBundlesOutcome LighthouseClient::DescribeModifyInstanceBundles(const DescribeModifyInstanceBundlesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModifyInstanceBundles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModifyInstanceBundlesResponse rsp = DescribeModifyInstanceBundlesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModifyInstanceBundlesOutcome(rsp);
        else
            return DescribeModifyInstanceBundlesOutcome(o.GetError());
    }
    else
    {
        return DescribeModifyInstanceBundlesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeModifyInstanceBundlesAsync(const DescribeModifyInstanceBundlesRequest& request, const DescribeModifyInstanceBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModifyInstanceBundles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeModifyInstanceBundlesOutcomeCallable LighthouseClient::DescribeModifyInstanceBundlesCallable(const DescribeModifyInstanceBundlesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModifyInstanceBundlesOutcome()>>(
        [this, request]()
        {
            return this->DescribeModifyInstanceBundles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeRegionsOutcome LighthouseClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeRegionsOutcomeCallable LighthouseClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeResetInstanceBlueprintsOutcome LighthouseClient::DescribeResetInstanceBlueprints(const DescribeResetInstanceBlueprintsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResetInstanceBlueprints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResetInstanceBlueprintsResponse rsp = DescribeResetInstanceBlueprintsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResetInstanceBlueprintsOutcome(rsp);
        else
            return DescribeResetInstanceBlueprintsOutcome(o.GetError());
    }
    else
    {
        return DescribeResetInstanceBlueprintsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeResetInstanceBlueprintsAsync(const DescribeResetInstanceBlueprintsRequest& request, const DescribeResetInstanceBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResetInstanceBlueprints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeResetInstanceBlueprintsOutcomeCallable LighthouseClient::DescribeResetInstanceBlueprintsCallable(const DescribeResetInstanceBlueprintsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResetInstanceBlueprintsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResetInstanceBlueprints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeSnapshotsOutcome LighthouseClient::DescribeSnapshots(const DescribeSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotsResponse rsp = DescribeSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotsOutcome(rsp);
        else
            return DescribeSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeSnapshotsOutcomeCallable LighthouseClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeSnapshotsDeniedActionsOutcome LighthouseClient::DescribeSnapshotsDeniedActions(const DescribeSnapshotsDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotsDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotsDeniedActionsResponse rsp = DescribeSnapshotsDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotsDeniedActionsOutcome(rsp);
        else
            return DescribeSnapshotsDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotsDeniedActionsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeSnapshotsDeniedActionsAsync(const DescribeSnapshotsDeniedActionsRequest& request, const DescribeSnapshotsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotsDeniedActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeSnapshotsDeniedActionsOutcomeCallable LighthouseClient::DescribeSnapshotsDeniedActionsCallable(const DescribeSnapshotsDeniedActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotsDeniedActionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotsDeniedActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeZonesOutcome LighthouseClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeZonesOutcomeCallable LighthouseClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DetachCcnOutcome LighthouseClient::DetachCcn(const DetachCcnRequest &request)
{
    auto outcome = MakeRequest(request, "DetachCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachCcnResponse rsp = DetachCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachCcnOutcome(rsp);
        else
            return DetachCcnOutcome(o.GetError());
    }
    else
    {
        return DetachCcnOutcome(outcome.GetError());
    }
}

void LighthouseClient::DetachCcnAsync(const DetachCcnRequest& request, const DetachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachCcn(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DetachCcnOutcomeCallable LighthouseClient::DetachCcnCallable(const DetachCcnRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachCcnOutcome()>>(
        [this, request]()
        {
            return this->DetachCcn(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DetachDisksOutcome LighthouseClient::DetachDisks(const DetachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DetachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachDisksResponse rsp = DetachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachDisksOutcome(rsp);
        else
            return DetachDisksOutcome(o.GetError());
    }
    else
    {
        return DetachDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::DetachDisksAsync(const DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DetachDisksOutcomeCallable LighthouseClient::DetachDisksCallable(const DetachDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachDisksOutcome()>>(
        [this, request]()
        {
            return this->DetachDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DisassociateInstancesKeyPairsOutcome LighthouseClient::DisassociateInstancesKeyPairs(const DisassociateInstancesKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateInstancesKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateInstancesKeyPairsResponse rsp = DisassociateInstancesKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateInstancesKeyPairsOutcome(rsp);
        else
            return DisassociateInstancesKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DisassociateInstancesKeyPairsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DisassociateInstancesKeyPairsAsync(const DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateInstancesKeyPairs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DisassociateInstancesKeyPairsOutcomeCallable LighthouseClient::DisassociateInstancesKeyPairsCallable(const DisassociateInstancesKeyPairsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateInstancesKeyPairsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateInstancesKeyPairs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ImportKeyPairOutcome LighthouseClient::ImportKeyPair(const ImportKeyPairRequest &request)
{
    auto outcome = MakeRequest(request, "ImportKeyPair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportKeyPairResponse rsp = ImportKeyPairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportKeyPairOutcome(rsp);
        else
            return ImportKeyPairOutcome(o.GetError());
    }
    else
    {
        return ImportKeyPairOutcome(outcome.GetError());
    }
}

void LighthouseClient::ImportKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportKeyPair(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ImportKeyPairOutcomeCallable LighthouseClient::ImportKeyPairCallable(const ImportKeyPairRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportKeyPairOutcome()>>(
        [this, request]()
        {
            return this->ImportKeyPair(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::InquirePriceCreateBlueprintOutcome LighthouseClient::InquirePriceCreateBlueprint(const InquirePriceCreateBlueprintRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateBlueprint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateBlueprintResponse rsp = InquirePriceCreateBlueprintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateBlueprintOutcome(rsp);
        else
            return InquirePriceCreateBlueprintOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateBlueprintOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceCreateBlueprintAsync(const InquirePriceCreateBlueprintRequest& request, const InquirePriceCreateBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceCreateBlueprint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::InquirePriceCreateBlueprintOutcomeCallable LighthouseClient::InquirePriceCreateBlueprintCallable(const InquirePriceCreateBlueprintRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceCreateBlueprintOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceCreateBlueprint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::InquirePriceCreateDisksOutcome LighthouseClient::InquirePriceCreateDisks(const InquirePriceCreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateDisksResponse rsp = InquirePriceCreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateDisksOutcome(rsp);
        else
            return InquirePriceCreateDisksOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceCreateDisksAsync(const InquirePriceCreateDisksRequest& request, const InquirePriceCreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceCreateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::InquirePriceCreateDisksOutcomeCallable LighthouseClient::InquirePriceCreateDisksCallable(const InquirePriceCreateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceCreateDisksOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceCreateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::InquirePriceCreateInstancesOutcome LighthouseClient::InquirePriceCreateInstances(const InquirePriceCreateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateInstancesResponse rsp = InquirePriceCreateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateInstancesOutcome(rsp);
        else
            return InquirePriceCreateInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceCreateInstancesAsync(const InquirePriceCreateInstancesRequest& request, const InquirePriceCreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceCreateInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::InquirePriceCreateInstancesOutcomeCallable LighthouseClient::InquirePriceCreateInstancesCallable(const InquirePriceCreateInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceCreateInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceCreateInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::InquirePriceRenewDisksOutcome LighthouseClient::InquirePriceRenewDisks(const InquirePriceRenewDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewDisksResponse rsp = InquirePriceRenewDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewDisksOutcome(rsp);
        else
            return InquirePriceRenewDisksOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceRenewDisksAsync(const InquirePriceRenewDisksRequest& request, const InquirePriceRenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceRenewDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::InquirePriceRenewDisksOutcomeCallable LighthouseClient::InquirePriceRenewDisksCallable(const InquirePriceRenewDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceRenewDisksOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceRenewDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::InquirePriceRenewInstancesOutcome LighthouseClient::InquirePriceRenewInstances(const InquirePriceRenewInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewInstancesResponse rsp = InquirePriceRenewInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewInstancesOutcome(rsp);
        else
            return InquirePriceRenewInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::InquirePriceRenewInstancesAsync(const InquirePriceRenewInstancesRequest& request, const InquirePriceRenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceRenewInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::InquirePriceRenewInstancesOutcomeCallable LighthouseClient::InquirePriceRenewInstancesCallable(const InquirePriceRenewInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceRenewInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceRenewInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ModifyBlueprintAttributeOutcome LighthouseClient::ModifyBlueprintAttribute(const ModifyBlueprintAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlueprintAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlueprintAttributeResponse rsp = ModifyBlueprintAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlueprintAttributeOutcome(rsp);
        else
            return ModifyBlueprintAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyBlueprintAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyBlueprintAttributeAsync(const ModifyBlueprintAttributeRequest& request, const ModifyBlueprintAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBlueprintAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ModifyBlueprintAttributeOutcomeCallable LighthouseClient::ModifyBlueprintAttributeCallable(const ModifyBlueprintAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBlueprintAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyBlueprintAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ModifyDisksAttributeOutcome LighthouseClient::ModifyDisksAttribute(const ModifyDisksAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisksAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisksAttributeResponse rsp = ModifyDisksAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisksAttributeOutcome(rsp);
        else
            return ModifyDisksAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDisksAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyDisksAttributeAsync(const ModifyDisksAttributeRequest& request, const ModifyDisksAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDisksAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ModifyDisksAttributeOutcomeCallable LighthouseClient::ModifyDisksAttributeCallable(const ModifyDisksAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDisksAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDisksAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ModifyDisksRenewFlagOutcome LighthouseClient::ModifyDisksRenewFlag(const ModifyDisksRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisksRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisksRenewFlagResponse rsp = ModifyDisksRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisksRenewFlagOutcome(rsp);
        else
            return ModifyDisksRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyDisksRenewFlagOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyDisksRenewFlagAsync(const ModifyDisksRenewFlagRequest& request, const ModifyDisksRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDisksRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ModifyDisksRenewFlagOutcomeCallable LighthouseClient::ModifyDisksRenewFlagCallable(const ModifyDisksRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDisksRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyDisksRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ModifyFirewallRuleDescriptionOutcome LighthouseClient::ModifyFirewallRuleDescription(const ModifyFirewallRuleDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFirewallRuleDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFirewallRuleDescriptionResponse rsp = ModifyFirewallRuleDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFirewallRuleDescriptionOutcome(rsp);
        else
            return ModifyFirewallRuleDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyFirewallRuleDescriptionOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyFirewallRuleDescriptionAsync(const ModifyFirewallRuleDescriptionRequest& request, const ModifyFirewallRuleDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFirewallRuleDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ModifyFirewallRuleDescriptionOutcomeCallable LighthouseClient::ModifyFirewallRuleDescriptionCallable(const ModifyFirewallRuleDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFirewallRuleDescriptionOutcome()>>(
        [this, request]()
        {
            return this->ModifyFirewallRuleDescription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ModifyFirewallRulesOutcome LighthouseClient::ModifyFirewallRules(const ModifyFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFirewallRulesResponse rsp = ModifyFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFirewallRulesOutcome(rsp);
        else
            return ModifyFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyFirewallRulesAsync(const ModifyFirewallRulesRequest& request, const ModifyFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFirewallRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ModifyFirewallRulesOutcomeCallable LighthouseClient::ModifyFirewallRulesCallable(const ModifyFirewallRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFirewallRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyFirewallRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ModifyInstancesAttributeOutcome LighthouseClient::ModifyInstancesAttribute(const ModifyInstancesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesAttributeResponse rsp = ModifyInstancesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesAttributeOutcome(rsp);
        else
            return ModifyInstancesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyInstancesAttributeAsync(const ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ModifyInstancesAttributeOutcomeCallable LighthouseClient::ModifyInstancesAttributeCallable(const ModifyInstancesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ModifyInstancesLoginKeyPairAttributeOutcome LighthouseClient::ModifyInstancesLoginKeyPairAttribute(const ModifyInstancesLoginKeyPairAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesLoginKeyPairAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesLoginKeyPairAttributeResponse rsp = ModifyInstancesLoginKeyPairAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesLoginKeyPairAttributeOutcome(rsp);
        else
            return ModifyInstancesLoginKeyPairAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesLoginKeyPairAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyInstancesLoginKeyPairAttributeAsync(const ModifyInstancesLoginKeyPairAttributeRequest& request, const ModifyInstancesLoginKeyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesLoginKeyPairAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ModifyInstancesLoginKeyPairAttributeOutcomeCallable LighthouseClient::ModifyInstancesLoginKeyPairAttributeCallable(const ModifyInstancesLoginKeyPairAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesLoginKeyPairAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesLoginKeyPairAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ModifyInstancesRenewFlagOutcome LighthouseClient::ModifyInstancesRenewFlag(const ModifyInstancesRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesRenewFlagResponse rsp = ModifyInstancesRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesRenewFlagOutcome(rsp);
        else
            return ModifyInstancesRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesRenewFlagOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifyInstancesRenewFlagAsync(const ModifyInstancesRenewFlagRequest& request, const ModifyInstancesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ModifyInstancesRenewFlagOutcomeCallable LighthouseClient::ModifyInstancesRenewFlagCallable(const ModifyInstancesRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ModifySnapshotAttributeOutcome LighthouseClient::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotAttributeResponse rsp = ModifySnapshotAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotAttributeOutcome(rsp);
        else
            return ModifySnapshotAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotAttributeOutcome(outcome.GetError());
    }
}

void LighthouseClient::ModifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySnapshotAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ModifySnapshotAttributeOutcomeCallable LighthouseClient::ModifySnapshotAttributeCallable(const ModifySnapshotAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySnapshotAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySnapshotAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::RebootInstancesOutcome LighthouseClient::RebootInstances(const RebootInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootInstancesResponse rsp = RebootInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootInstancesOutcome(rsp);
        else
            return RebootInstancesOutcome(o.GetError());
    }
    else
    {
        return RebootInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebootInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::RebootInstancesOutcomeCallable LighthouseClient::RebootInstancesCallable(const RebootInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebootInstancesOutcome()>>(
        [this, request]()
        {
            return this->RebootInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ResetAttachCcnOutcome LighthouseClient::ResetAttachCcn(const ResetAttachCcnRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAttachCcn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAttachCcnResponse rsp = ResetAttachCcnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAttachCcnOutcome(rsp);
        else
            return ResetAttachCcnOutcome(o.GetError());
    }
    else
    {
        return ResetAttachCcnOutcome(outcome.GetError());
    }
}

void LighthouseClient::ResetAttachCcnAsync(const ResetAttachCcnRequest& request, const ResetAttachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAttachCcn(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ResetAttachCcnOutcomeCallable LighthouseClient::ResetAttachCcnCallable(const ResetAttachCcnRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetAttachCcnOutcome()>>(
        [this, request]()
        {
            return this->ResetAttachCcn(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ResetInstanceOutcome LighthouseClient::ResetInstance(const ResetInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstanceResponse rsp = ResetInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstanceOutcome(rsp);
        else
            return ResetInstanceOutcome(o.GetError());
    }
    else
    {
        return ResetInstanceOutcome(outcome.GetError());
    }
}

void LighthouseClient::ResetInstanceAsync(const ResetInstanceRequest& request, const ResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ResetInstanceOutcomeCallable LighthouseClient::ResetInstanceCallable(const ResetInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstanceOutcome()>>(
        [this, request]()
        {
            return this->ResetInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ResetInstancesPasswordOutcome LighthouseClient::ResetInstancesPassword(const ResetInstancesPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesPasswordResponse rsp = ResetInstancesPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesPasswordOutcome(rsp);
        else
            return ResetInstancesPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesPasswordOutcome(outcome.GetError());
    }
}

void LighthouseClient::ResetInstancesPasswordAsync(const ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstancesPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ResetInstancesPasswordOutcomeCallable LighthouseClient::ResetInstancesPasswordCallable(const ResetInstancesPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetInstancesPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::StartInstancesOutcome LighthouseClient::StartInstances(const StartInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstancesResponse rsp = StartInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstancesOutcome(rsp);
        else
            return StartInstancesOutcome(o.GetError());
    }
    else
    {
        return StartInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::StartInstancesOutcomeCallable LighthouseClient::StartInstancesCallable(const StartInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartInstancesOutcome()>>(
        [this, request]()
        {
            return this->StartInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::StopInstancesOutcome LighthouseClient::StopInstances(const StopInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstancesResponse rsp = StopInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstancesOutcome(rsp);
        else
            return StopInstancesOutcome(o.GetError());
    }
    else
    {
        return StopInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::StopInstancesOutcomeCallable LighthouseClient::StopInstancesCallable(const StopInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopInstancesOutcome()>>(
        [this, request]()
        {
            return this->StopInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::TerminateDisksOutcome LighthouseClient::TerminateDisks(const TerminateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDisksResponse rsp = TerminateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDisksOutcome(rsp);
        else
            return TerminateDisksOutcome(o.GetError());
    }
    else
    {
        return TerminateDisksOutcome(outcome.GetError());
    }
}

void LighthouseClient::TerminateDisksAsync(const TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::TerminateDisksOutcomeCallable LighthouseClient::TerminateDisksCallable(const TerminateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateDisksOutcome()>>(
        [this, request]()
        {
            return this->TerminateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::TerminateInstancesOutcome LighthouseClient::TerminateInstances(const TerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstancesResponse rsp = TerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstancesOutcome(rsp);
        else
            return TerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::TerminateInstancesOutcomeCallable LighthouseClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateInstancesOutcome()>>(
        [this, request]()
        {
            return this->TerminateInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

