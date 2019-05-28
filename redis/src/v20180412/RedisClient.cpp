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

#include <tencentcloud/redis/v20180412/RedisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Redis::V20180412;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-12";
    const string ENDPOINT = "redis.tencentcloudapi.com";
}

RedisClient::RedisClient(const Credential &credential, const string &region) :
    RedisClient(credential, region, ClientProfile())
{
}

RedisClient::RedisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RedisClient::CleanUpInstanceOutcome RedisClient::CleanUpInstance(const CleanUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CleanUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CleanUpInstanceResponse rsp = CleanUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CleanUpInstanceOutcome(rsp);
        else
            return CleanUpInstanceOutcome(o.GetError());
    }
    else
    {
        return CleanUpInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::CleanUpInstanceAsync(const CleanUpInstanceRequest& request, const CleanUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CleanUpInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::CleanUpInstanceOutcomeCallable RedisClient::CleanUpInstanceCallable(const CleanUpInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CleanUpInstanceOutcome()>>(
        [this, request]()
        {
            return this->CleanUpInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::ClearInstanceOutcome RedisClient::ClearInstance(const ClearInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ClearInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearInstanceResponse rsp = ClearInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearInstanceOutcome(rsp);
        else
            return ClearInstanceOutcome(o.GetError());
    }
    else
    {
        return ClearInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::ClearInstanceAsync(const ClearInstanceRequest& request, const ClearInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ClearInstanceOutcomeCallable RedisClient::ClearInstanceCallable(const ClearInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearInstanceOutcome()>>(
        [this, request]()
        {
            return this->ClearInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::CreateInstancesOutcome RedisClient::CreateInstances(const CreateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstancesResponse rsp = CreateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstancesOutcome(rsp);
        else
            return CreateInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateInstancesOutcome(outcome.GetError());
    }
}

void RedisClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::CreateInstancesOutcomeCallable RedisClient::CreateInstancesCallable(const CreateInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeAutoBackupConfigOutcome RedisClient::DescribeAutoBackupConfig(const DescribeAutoBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoBackupConfigResponse rsp = DescribeAutoBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoBackupConfigOutcome(rsp);
        else
            return DescribeAutoBackupConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoBackupConfigOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeAutoBackupConfigAsync(const DescribeAutoBackupConfigRequest& request, const DescribeAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeAutoBackupConfigOutcomeCallable RedisClient::DescribeAutoBackupConfigCallable(const DescribeAutoBackupConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoBackupConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoBackupConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeBackupUrlOutcome RedisClient::DescribeBackupUrl(const DescribeBackupUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupUrlResponse rsp = DescribeBackupUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupUrlOutcome(rsp);
        else
            return DescribeBackupUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupUrlOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeBackupUrlAsync(const DescribeBackupUrlRequest& request, const DescribeBackupUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeBackupUrlOutcomeCallable RedisClient::DescribeBackupUrlCallable(const DescribeBackupUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceBackupsOutcome RedisClient::DescribeInstanceBackups(const DescribeInstanceBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceBackupsResponse rsp = DescribeInstanceBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceBackupsOutcome(rsp);
        else
            return DescribeInstanceBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceBackupsOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceBackupsAsync(const DescribeInstanceBackupsRequest& request, const DescribeInstanceBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceBackupsOutcomeCallable RedisClient::DescribeInstanceBackupsCallable(const DescribeInstanceBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceDealDetailOutcome RedisClient::DescribeInstanceDealDetail(const DescribeInstanceDealDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDealDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDealDetailResponse rsp = DescribeInstanceDealDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDealDetailOutcome(rsp);
        else
            return DescribeInstanceDealDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDealDetailOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceDealDetailAsync(const DescribeInstanceDealDetailRequest& request, const DescribeInstanceDealDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceDealDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceDealDetailOutcomeCallable RedisClient::DescribeInstanceDealDetailCallable(const DescribeInstanceDealDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceDealDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceDealDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceParamRecordsOutcome RedisClient::DescribeInstanceParamRecords(const DescribeInstanceParamRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParamRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamRecordsResponse rsp = DescribeInstanceParamRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamRecordsOutcome(rsp);
        else
            return DescribeInstanceParamRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamRecordsOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceParamRecordsAsync(const DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceParamRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceParamRecordsOutcomeCallable RedisClient::DescribeInstanceParamRecordsCallable(const DescribeInstanceParamRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceParamRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceParamRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceParamsOutcome RedisClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamsResponse rsp = DescribeInstanceParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamsOutcome(rsp);
        else
            return DescribeInstanceParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamsOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceParamsOutcomeCallable RedisClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceParamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceSecurityGroupOutcome RedisClient::DescribeInstanceSecurityGroup(const DescribeInstanceSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSecurityGroupResponse rsp = DescribeInstanceSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSecurityGroupOutcome(rsp);
        else
            return DescribeInstanceSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSecurityGroupOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceSecurityGroupAsync(const DescribeInstanceSecurityGroupRequest& request, const DescribeInstanceSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceSecurityGroupOutcomeCallable RedisClient::DescribeInstanceSecurityGroupCallable(const DescribeInstanceSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceShardsOutcome RedisClient::DescribeInstanceShards(const DescribeInstanceShardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceShards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceShardsResponse rsp = DescribeInstanceShardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceShardsOutcome(rsp);
        else
            return DescribeInstanceShardsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceShardsOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceShardsAsync(const DescribeInstanceShardsRequest& request, const DescribeInstanceShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceShards(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceShardsOutcomeCallable RedisClient::DescribeInstanceShardsCallable(const DescribeInstanceShardsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceShardsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceShards(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstancesOutcome RedisClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void RedisClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstancesOutcomeCallable RedisClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

RedisClient::DescribeProductInfoOutcome RedisClient::DescribeProductInfo(const DescribeProductInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductInfoResponse rsp = DescribeProductInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductInfoOutcome(rsp);
        else
            return DescribeProductInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProductInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeProductInfoAsync(const DescribeProductInfoRequest& request, const DescribeProductInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeProductInfoOutcomeCallable RedisClient::DescribeProductInfoCallable(const DescribeProductInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeProjectSecurityGroupOutcome RedisClient::DescribeProjectSecurityGroup(const DescribeProjectSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectSecurityGroupResponse rsp = DescribeProjectSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectSecurityGroupOutcome(rsp);
        else
            return DescribeProjectSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectSecurityGroupOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeProjectSecurityGroupAsync(const DescribeProjectSecurityGroupRequest& request, const DescribeProjectSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeProjectSecurityGroupOutcomeCallable RedisClient::DescribeProjectSecurityGroupCallable(const DescribeProjectSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeTaskInfoOutcome RedisClient::DescribeTaskInfo(const DescribeTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInfoResponse rsp = DescribeTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInfoOutcome(rsp);
        else
            return DescribeTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeTaskInfoOutcomeCallable RedisClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DestroyPostpaidInstanceOutcome RedisClient::DestroyPostpaidInstance(const DestroyPostpaidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyPostpaidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyPostpaidInstanceResponse rsp = DestroyPostpaidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyPostpaidInstanceOutcome(rsp);
        else
            return DestroyPostpaidInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyPostpaidInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::DestroyPostpaidInstanceAsync(const DestroyPostpaidInstanceRequest& request, const DestroyPostpaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyPostpaidInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DestroyPostpaidInstanceOutcomeCallable RedisClient::DestroyPostpaidInstanceCallable(const DestroyPostpaidInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyPostpaidInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyPostpaidInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DestroyPrepaidInstanceOutcome RedisClient::DestroyPrepaidInstance(const DestroyPrepaidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyPrepaidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyPrepaidInstanceResponse rsp = DestroyPrepaidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyPrepaidInstanceOutcome(rsp);
        else
            return DestroyPrepaidInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyPrepaidInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::DestroyPrepaidInstanceAsync(const DestroyPrepaidInstanceRequest& request, const DestroyPrepaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyPrepaidInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DestroyPrepaidInstanceOutcomeCallable RedisClient::DestroyPrepaidInstanceCallable(const DestroyPrepaidInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyPrepaidInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyPrepaidInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DisableReplicaReadonlyOutcome RedisClient::DisableReplicaReadonly(const DisableReplicaReadonlyRequest &request)
{
    auto outcome = MakeRequest(request, "DisableReplicaReadonly");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableReplicaReadonlyResponse rsp = DisableReplicaReadonlyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableReplicaReadonlyOutcome(rsp);
        else
            return DisableReplicaReadonlyOutcome(o.GetError());
    }
    else
    {
        return DisableReplicaReadonlyOutcome(outcome.GetError());
    }
}

void RedisClient::DisableReplicaReadonlyAsync(const DisableReplicaReadonlyRequest& request, const DisableReplicaReadonlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableReplicaReadonly(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DisableReplicaReadonlyOutcomeCallable RedisClient::DisableReplicaReadonlyCallable(const DisableReplicaReadonlyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableReplicaReadonlyOutcome()>>(
        [this, request]()
        {
            return this->DisableReplicaReadonly(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::EnableReplicaReadonlyOutcome RedisClient::EnableReplicaReadonly(const EnableReplicaReadonlyRequest &request)
{
    auto outcome = MakeRequest(request, "EnableReplicaReadonly");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableReplicaReadonlyResponse rsp = EnableReplicaReadonlyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableReplicaReadonlyOutcome(rsp);
        else
            return EnableReplicaReadonlyOutcome(o.GetError());
    }
    else
    {
        return EnableReplicaReadonlyOutcome(outcome.GetError());
    }
}

void RedisClient::EnableReplicaReadonlyAsync(const EnableReplicaReadonlyRequest& request, const EnableReplicaReadonlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableReplicaReadonly(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::EnableReplicaReadonlyOutcomeCallable RedisClient::EnableReplicaReadonlyCallable(const EnableReplicaReadonlyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableReplicaReadonlyOutcome()>>(
        [this, request]()
        {
            return this->EnableReplicaReadonly(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::ManualBackupInstanceOutcome RedisClient::ManualBackupInstance(const ManualBackupInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ManualBackupInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManualBackupInstanceResponse rsp = ManualBackupInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManualBackupInstanceOutcome(rsp);
        else
            return ManualBackupInstanceOutcome(o.GetError());
    }
    else
    {
        return ManualBackupInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::ManualBackupInstanceAsync(const ManualBackupInstanceRequest& request, const ManualBackupInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManualBackupInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ManualBackupInstanceOutcomeCallable RedisClient::ManualBackupInstanceCallable(const ManualBackupInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManualBackupInstanceOutcome()>>(
        [this, request]()
        {
            return this->ManualBackupInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::ModfiyInstancePasswordOutcome RedisClient::ModfiyInstancePassword(const ModfiyInstancePasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModfiyInstancePassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModfiyInstancePasswordResponse rsp = ModfiyInstancePasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModfiyInstancePasswordOutcome(rsp);
        else
            return ModfiyInstancePasswordOutcome(o.GetError());
    }
    else
    {
        return ModfiyInstancePasswordOutcome(outcome.GetError());
    }
}

void RedisClient::ModfiyInstancePasswordAsync(const ModfiyInstancePasswordRequest& request, const ModfiyInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModfiyInstancePassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ModfiyInstancePasswordOutcomeCallable RedisClient::ModfiyInstancePasswordCallable(const ModfiyInstancePasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModfiyInstancePasswordOutcome()>>(
        [this, request]()
        {
            return this->ModfiyInstancePassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::ModifyAutoBackupConfigOutcome RedisClient::ModifyAutoBackupConfig(const ModifyAutoBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoBackupConfigResponse rsp = ModifyAutoBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoBackupConfigOutcome(rsp);
        else
            return ModifyAutoBackupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoBackupConfigOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyAutoBackupConfigAsync(const ModifyAutoBackupConfigRequest& request, const ModifyAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoBackupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ModifyAutoBackupConfigOutcomeCallable RedisClient::ModifyAutoBackupConfigCallable(const ModifyAutoBackupConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoBackupConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoBackupConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::ModifyInstanceOutcome RedisClient::ModifyInstance(const ModifyInstanceRequest &request)
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

void RedisClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ModifyInstanceOutcomeCallable RedisClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
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

RedisClient::ModifyInstanceParamsOutcome RedisClient::ModifyInstanceParams(const ModifyInstanceParamsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceParamsResponse rsp = ModifyInstanceParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceParamsOutcome(rsp);
        else
            return ModifyInstanceParamsOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceParamsOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstanceParamsAsync(const ModifyInstanceParamsRequest& request, const ModifyInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ModifyInstanceParamsOutcomeCallable RedisClient::ModifyInstanceParamsCallable(const ModifyInstanceParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceParamsOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::ModifyNetworkConfigOutcome RedisClient::ModifyNetworkConfig(const ModifyNetworkConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkConfigResponse rsp = ModifyNetworkConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkConfigOutcome(rsp);
        else
            return ModifyNetworkConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkConfigOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyNetworkConfigAsync(const ModifyNetworkConfigRequest& request, const ModifyNetworkConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetworkConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ModifyNetworkConfigOutcomeCallable RedisClient::ModifyNetworkConfigCallable(const ModifyNetworkConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetworkConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetworkConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::RenewInstanceOutcome RedisClient::RenewInstance(const RenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstanceResponse rsp = RenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstanceOutcome(rsp);
        else
            return RenewInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::RenewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::RenewInstanceOutcomeCallable RedisClient::RenewInstanceCallable(const RenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::ResetPasswordOutcome RedisClient::ResetPassword(const ResetPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetPasswordResponse rsp = ResetPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetPasswordOutcome(rsp);
        else
            return ResetPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetPasswordOutcome(outcome.GetError());
    }
}

void RedisClient::ResetPasswordAsync(const ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ResetPasswordOutcomeCallable RedisClient::ResetPasswordCallable(const ResetPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::RestoreInstanceOutcome RedisClient::RestoreInstance(const RestoreInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreInstanceResponse rsp = RestoreInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreInstanceOutcome(rsp);
        else
            return RestoreInstanceOutcome(o.GetError());
    }
    else
    {
        return RestoreInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::RestoreInstanceAsync(const RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestoreInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::RestoreInstanceOutcomeCallable RedisClient::RestoreInstanceCallable(const RestoreInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestoreInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestoreInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::UpgradeInstanceOutcome RedisClient::UpgradeInstance(const UpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceResponse rsp = UpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceOutcome(rsp);
        else
            return UpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::UpgradeInstanceOutcomeCallable RedisClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

