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


RedisClient::AssociateSecurityGroupsOutcome RedisClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateSecurityGroupsResponse rsp = AssociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateSecurityGroupsOutcome(rsp);
        else
            return AssociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void RedisClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::AssociateSecurityGroupsOutcomeCallable RedisClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->AssociateSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

RedisClient::CreateInstanceAccountOutcome RedisClient::CreateInstanceAccount(const CreateInstanceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceAccountResponse rsp = CreateInstanceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceAccountOutcome(rsp);
        else
            return CreateInstanceAccountOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceAccountOutcome(outcome.GetError());
    }
}

void RedisClient::CreateInstanceAccountAsync(const CreateInstanceAccountRequest& request, const CreateInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::CreateInstanceAccountOutcomeCallable RedisClient::CreateInstanceAccountCallable(const CreateInstanceAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceAccount(request);
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

RedisClient::DeleteInstanceAccountOutcome RedisClient::DeleteInstanceAccount(const DeleteInstanceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstanceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceAccountResponse rsp = DeleteInstanceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceAccountOutcome(rsp);
        else
            return DeleteInstanceAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceAccountOutcome(outcome.GetError());
    }
}

void RedisClient::DeleteInstanceAccountAsync(const DeleteInstanceAccountRequest& request, const DeleteInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstanceAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DeleteInstanceAccountOutcomeCallable RedisClient::DeleteInstanceAccountCallable(const DeleteInstanceAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceAccountOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstanceAccount(request);
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

RedisClient::DescribeCommonDBInstancesOutcome RedisClient::DescribeCommonDBInstances(const DescribeCommonDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCommonDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCommonDBInstancesResponse rsp = DescribeCommonDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCommonDBInstancesOutcome(rsp);
        else
            return DescribeCommonDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeCommonDBInstancesOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeCommonDBInstancesAsync(const DescribeCommonDBInstancesRequest& request, const DescribeCommonDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCommonDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeCommonDBInstancesOutcomeCallable RedisClient::DescribeCommonDBInstancesCallable(const DescribeCommonDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCommonDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCommonDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeDBSecurityGroupsOutcome RedisClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSecurityGroupsResponse rsp = DescribeDBSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSecurityGroupsOutcome(rsp);
        else
            return DescribeDBSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSecurityGroupsOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeDBSecurityGroupsOutcomeCallable RedisClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceAccountOutcome RedisClient::DescribeInstanceAccount(const DescribeInstanceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceAccountResponse rsp = DescribeInstanceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceAccountOutcome(rsp);
        else
            return DescribeInstanceAccountOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceAccountOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceAccountAsync(const DescribeInstanceAccountRequest& request, const DescribeInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceAccountOutcomeCallable RedisClient::DescribeInstanceAccountCallable(const DescribeInstanceAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceAccountOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceAccount(request);
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

RedisClient::DescribeInstanceDTSInfoOutcome RedisClient::DescribeInstanceDTSInfo(const DescribeInstanceDTSInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDTSInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDTSInfoResponse rsp = DescribeInstanceDTSInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDTSInfoOutcome(rsp);
        else
            return DescribeInstanceDTSInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDTSInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceDTSInfoAsync(const DescribeInstanceDTSInfoRequest& request, const DescribeInstanceDTSInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceDTSInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceDTSInfoOutcomeCallable RedisClient::DescribeInstanceDTSInfoCallable(const DescribeInstanceDTSInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceDTSInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceDTSInfo(request);
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

RedisClient::DescribeInstanceMonitorBigKeyOutcome RedisClient::DescribeInstanceMonitorBigKey(const DescribeInstanceMonitorBigKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorBigKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorBigKeyResponse rsp = DescribeInstanceMonitorBigKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorBigKeyOutcome(rsp);
        else
            return DescribeInstanceMonitorBigKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorBigKeyOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorBigKeyAsync(const DescribeInstanceMonitorBigKeyRequest& request, const DescribeInstanceMonitorBigKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorBigKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorBigKeyOutcomeCallable RedisClient::DescribeInstanceMonitorBigKeyCallable(const DescribeInstanceMonitorBigKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorBigKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorBigKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorBigKeySizeDistOutcome RedisClient::DescribeInstanceMonitorBigKeySizeDist(const DescribeInstanceMonitorBigKeySizeDistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorBigKeySizeDist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorBigKeySizeDistResponse rsp = DescribeInstanceMonitorBigKeySizeDistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorBigKeySizeDistOutcome(rsp);
        else
            return DescribeInstanceMonitorBigKeySizeDistOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorBigKeySizeDistOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorBigKeySizeDistAsync(const DescribeInstanceMonitorBigKeySizeDistRequest& request, const DescribeInstanceMonitorBigKeySizeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorBigKeySizeDist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorBigKeySizeDistOutcomeCallable RedisClient::DescribeInstanceMonitorBigKeySizeDistCallable(const DescribeInstanceMonitorBigKeySizeDistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorBigKeySizeDistOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorBigKeySizeDist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorBigKeyTypeDistOutcome RedisClient::DescribeInstanceMonitorBigKeyTypeDist(const DescribeInstanceMonitorBigKeyTypeDistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorBigKeyTypeDist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorBigKeyTypeDistResponse rsp = DescribeInstanceMonitorBigKeyTypeDistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorBigKeyTypeDistOutcome(rsp);
        else
            return DescribeInstanceMonitorBigKeyTypeDistOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorBigKeyTypeDistOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorBigKeyTypeDistAsync(const DescribeInstanceMonitorBigKeyTypeDistRequest& request, const DescribeInstanceMonitorBigKeyTypeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorBigKeyTypeDist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorBigKeyTypeDistOutcomeCallable RedisClient::DescribeInstanceMonitorBigKeyTypeDistCallable(const DescribeInstanceMonitorBigKeyTypeDistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorBigKeyTypeDistOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorBigKeyTypeDist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorHotKeyOutcome RedisClient::DescribeInstanceMonitorHotKey(const DescribeInstanceMonitorHotKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorHotKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorHotKeyResponse rsp = DescribeInstanceMonitorHotKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorHotKeyOutcome(rsp);
        else
            return DescribeInstanceMonitorHotKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorHotKeyOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorHotKeyAsync(const DescribeInstanceMonitorHotKeyRequest& request, const DescribeInstanceMonitorHotKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorHotKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorHotKeyOutcomeCallable RedisClient::DescribeInstanceMonitorHotKeyCallable(const DescribeInstanceMonitorHotKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorHotKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorHotKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorSIPOutcome RedisClient::DescribeInstanceMonitorSIP(const DescribeInstanceMonitorSIPRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorSIP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorSIPResponse rsp = DescribeInstanceMonitorSIPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorSIPOutcome(rsp);
        else
            return DescribeInstanceMonitorSIPOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorSIPOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorSIPAsync(const DescribeInstanceMonitorSIPRequest& request, const DescribeInstanceMonitorSIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorSIP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorSIPOutcomeCallable RedisClient::DescribeInstanceMonitorSIPCallable(const DescribeInstanceMonitorSIPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorSIPOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorSIP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorTookDistOutcome RedisClient::DescribeInstanceMonitorTookDist(const DescribeInstanceMonitorTookDistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorTookDist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorTookDistResponse rsp = DescribeInstanceMonitorTookDistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorTookDistOutcome(rsp);
        else
            return DescribeInstanceMonitorTookDistOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorTookDistOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorTookDistAsync(const DescribeInstanceMonitorTookDistRequest& request, const DescribeInstanceMonitorTookDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorTookDist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorTookDistOutcomeCallable RedisClient::DescribeInstanceMonitorTookDistCallable(const DescribeInstanceMonitorTookDistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorTookDistOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorTookDist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorTopNCmdOutcome RedisClient::DescribeInstanceMonitorTopNCmd(const DescribeInstanceMonitorTopNCmdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorTopNCmd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorTopNCmdResponse rsp = DescribeInstanceMonitorTopNCmdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorTopNCmdOutcome(rsp);
        else
            return DescribeInstanceMonitorTopNCmdOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorTopNCmdOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorTopNCmdAsync(const DescribeInstanceMonitorTopNCmdRequest& request, const DescribeInstanceMonitorTopNCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorTopNCmd(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorTopNCmdOutcomeCallable RedisClient::DescribeInstanceMonitorTopNCmdCallable(const DescribeInstanceMonitorTopNCmdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorTopNCmdOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorTopNCmd(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceMonitorTopNCmdTookOutcome RedisClient::DescribeInstanceMonitorTopNCmdTook(const DescribeInstanceMonitorTopNCmdTookRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorTopNCmdTook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorTopNCmdTookResponse rsp = DescribeInstanceMonitorTopNCmdTookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorTopNCmdTookOutcome(rsp);
        else
            return DescribeInstanceMonitorTopNCmdTookOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorTopNCmdTookOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorTopNCmdTookAsync(const DescribeInstanceMonitorTopNCmdTookRequest& request, const DescribeInstanceMonitorTopNCmdTookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceMonitorTopNCmdTook(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceMonitorTopNCmdTookOutcomeCallable RedisClient::DescribeInstanceMonitorTopNCmdTookCallable(const DescribeInstanceMonitorTopNCmdTookRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceMonitorTopNCmdTookOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceMonitorTopNCmdTook(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeInstanceNodeInfoOutcome RedisClient::DescribeInstanceNodeInfo(const DescribeInstanceNodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodeInfoResponse rsp = DescribeInstanceNodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodeInfoOutcome(rsp);
        else
            return DescribeInstanceNodeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodeInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceNodeInfoAsync(const DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNodeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeInstanceNodeInfoOutcomeCallable RedisClient::DescribeInstanceNodeInfoCallable(const DescribeInstanceNodeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceNodeInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceNodeInfo(request);
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

RedisClient::DescribeMaintenanceWindowOutcome RedisClient::DescribeMaintenanceWindow(const DescribeMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintenanceWindowResponse rsp = DescribeMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintenanceWindowOutcome(rsp);
        else
            return DescribeMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintenanceWindowOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeMaintenanceWindowAsync(const DescribeMaintenanceWindowRequest& request, const DescribeMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMaintenanceWindow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeMaintenanceWindowOutcomeCallable RedisClient::DescribeMaintenanceWindowCallable(const DescribeMaintenanceWindowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMaintenanceWindowOutcome()>>(
        [this, request]()
        {
            return this->DescribeMaintenanceWindow(request);
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

RedisClient::DescribeProjectSecurityGroupsOutcome RedisClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectSecurityGroupsResponse rsp = DescribeProjectSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectSecurityGroupsOutcome(rsp);
        else
            return DescribeProjectSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectSecurityGroupsOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeProjectSecurityGroupsOutcomeCallable RedisClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeProxySlowLogOutcome RedisClient::DescribeProxySlowLog(const DescribeProxySlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySlowLogResponse rsp = DescribeProxySlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySlowLogOutcome(rsp);
        else
            return DescribeProxySlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySlowLogOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeProxySlowLogAsync(const DescribeProxySlowLogRequest& request, const DescribeProxySlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxySlowLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeProxySlowLogOutcomeCallable RedisClient::DescribeProxySlowLogCallable(const DescribeProxySlowLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxySlowLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxySlowLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::DescribeSlowLogOutcome RedisClient::DescribeSlowLog(const DescribeSlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogResponse rsp = DescribeSlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogOutcome(rsp);
        else
            return DescribeSlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeSlowLogAsync(const DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeSlowLogOutcomeCallable RedisClient::DescribeSlowLogCallable(const DescribeSlowLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLog(request);
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

RedisClient::DescribeTaskListOutcome RedisClient::DescribeTaskList(const DescribeTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskListResponse rsp = DescribeTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskListOutcome(rsp);
        else
            return DescribeTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskListOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeTaskListAsync(const DescribeTaskListRequest& request, const DescribeTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DescribeTaskListOutcomeCallable RedisClient::DescribeTaskListCallable(const DescribeTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskList(request);
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

RedisClient::DisassociateSecurityGroupsOutcome RedisClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateSecurityGroupsResponse rsp = DisassociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateSecurityGroupsOutcome(rsp);
        else
            return DisassociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void RedisClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::DisassociateSecurityGroupsOutcomeCallable RedisClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateSecurityGroups(request);
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

RedisClient::InquiryPriceCreateInstanceOutcome RedisClient::InquiryPriceCreateInstance(const InquiryPriceCreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateInstanceResponse rsp = InquiryPriceCreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateInstanceOutcome(rsp);
        else
            return InquiryPriceCreateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::InquiryPriceCreateInstanceAsync(const InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::InquiryPriceCreateInstanceOutcomeCallable RedisClient::InquiryPriceCreateInstanceCallable(const InquiryPriceCreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::InquiryPriceRenewInstanceOutcome RedisClient::InquiryPriceRenewInstance(const InquiryPriceRenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewInstanceResponse rsp = InquiryPriceRenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewInstanceOutcome(rsp);
        else
            return InquiryPriceRenewInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::InquiryPriceRenewInstanceAsync(const InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::InquiryPriceRenewInstanceOutcomeCallable RedisClient::InquiryPriceRenewInstanceCallable(const InquiryPriceRenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::InquiryPriceUpgradeInstanceOutcome RedisClient::InquiryPriceUpgradeInstance(const InquiryPriceUpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpgradeInstanceResponse rsp = InquiryPriceUpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpgradeInstanceOutcome(rsp);
        else
            return InquiryPriceUpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpgradeInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::InquiryPriceUpgradeInstanceAsync(const InquiryPriceUpgradeInstanceRequest& request, const InquiryPriceUpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpgradeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::InquiryPriceUpgradeInstanceOutcomeCallable RedisClient::InquiryPriceUpgradeInstanceCallable(const InquiryPriceUpgradeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpgradeInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpgradeInstance(request);
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

RedisClient::ModifyDBInstanceSecurityGroupsOutcome RedisClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSecurityGroupsResponse rsp = ModifyDBInstanceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSecurityGroupsOutcome(rsp);
        else
            return ModifyDBInstanceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSecurityGroupsOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ModifyDBInstanceSecurityGroupsOutcomeCallable RedisClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceSecurityGroups(request);
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

RedisClient::ModifyInstanceAccountOutcome RedisClient::ModifyInstanceAccount(const ModifyInstanceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceAccountResponse rsp = ModifyInstanceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceAccountOutcome(rsp);
        else
            return ModifyInstanceAccountOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceAccountOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstanceAccountAsync(const ModifyInstanceAccountRequest& request, const ModifyInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ModifyInstanceAccountOutcomeCallable RedisClient::ModifyInstanceAccountCallable(const ModifyInstanceAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceAccountOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceAccount(request);
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

RedisClient::ModifyMaintenanceWindowOutcome RedisClient::ModifyMaintenanceWindow(const ModifyMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintenanceWindowResponse rsp = ModifyMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintenanceWindowOutcome(rsp);
        else
            return ModifyMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintenanceWindowOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyMaintenanceWindowAsync(const ModifyMaintenanceWindowRequest& request, const ModifyMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMaintenanceWindow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::ModifyMaintenanceWindowOutcomeCallable RedisClient::ModifyMaintenanceWindowCallable(const ModifyMaintenanceWindowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMaintenanceWindowOutcome()>>(
        [this, request]()
        {
            return this->ModifyMaintenanceWindow(request);
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

RedisClient::StartupInstanceOutcome RedisClient::StartupInstance(const StartupInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StartupInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartupInstanceResponse rsp = StartupInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartupInstanceOutcome(rsp);
        else
            return StartupInstanceOutcome(o.GetError());
    }
    else
    {
        return StartupInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::StartupInstanceAsync(const StartupInstanceRequest& request, const StartupInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartupInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::StartupInstanceOutcomeCallable RedisClient::StartupInstanceCallable(const StartupInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartupInstanceOutcome()>>(
        [this, request]()
        {
            return this->StartupInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RedisClient::SwitchInstanceVipOutcome RedisClient::SwitchInstanceVip(const SwitchInstanceVipRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchInstanceVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchInstanceVipResponse rsp = SwitchInstanceVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchInstanceVipOutcome(rsp);
        else
            return SwitchInstanceVipOutcome(o.GetError());
    }
    else
    {
        return SwitchInstanceVipOutcome(outcome.GetError());
    }
}

void RedisClient::SwitchInstanceVipAsync(const SwitchInstanceVipRequest& request, const SwitchInstanceVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchInstanceVip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::SwitchInstanceVipOutcomeCallable RedisClient::SwitchInstanceVipCallable(const SwitchInstanceVipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchInstanceVipOutcome()>>(
        [this, request]()
        {
            return this->SwitchInstanceVip(request);
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

RedisClient::UpgradeInstanceVersionOutcome RedisClient::UpgradeInstanceVersion(const UpgradeInstanceVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstanceVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceVersionResponse rsp = UpgradeInstanceVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceVersionOutcome(rsp);
        else
            return UpgradeInstanceVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceVersionOutcome(outcome.GetError());
    }
}

void RedisClient::UpgradeInstanceVersionAsync(const UpgradeInstanceVersionRequest& request, const UpgradeInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeInstanceVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RedisClient::UpgradeInstanceVersionOutcomeCallable RedisClient::UpgradeInstanceVersionCallable(const UpgradeInstanceVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeInstanceVersionOutcome()>>(
        [this, request]()
        {
            return this->UpgradeInstanceVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

