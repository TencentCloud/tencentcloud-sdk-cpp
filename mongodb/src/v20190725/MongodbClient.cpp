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

#include <tencentcloud/mongodb/v20190725/MongodbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mongodb::V20190725;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-25";
    const string ENDPOINT = "mongodb.tencentcloudapi.com";
}

MongodbClient::MongodbClient(const Credential &credential, const string &region) :
    MongodbClient(credential, region, ClientProfile())
{
}

MongodbClient::MongodbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MongodbClient::AssignProjectOutcome MongodbClient::AssignProject(const AssignProjectRequest &request)
{
    auto outcome = MakeRequest(request, "AssignProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignProjectResponse rsp = AssignProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignProjectOutcome(rsp);
        else
            return AssignProjectOutcome(o.GetError());
    }
    else
    {
        return AssignProjectOutcome(outcome.GetError());
    }
}

void MongodbClient::AssignProjectAsync(const AssignProjectRequest& request, const AssignProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::AssignProjectOutcomeCallable MongodbClient::AssignProjectCallable(const AssignProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignProjectOutcome()>>(
        [this, request]()
        {
            return this->AssignProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::CreateDBInstanceOutcome MongodbClient::CreateDBInstance(const CreateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceResponse rsp = CreateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceOutcome(rsp);
        else
            return CreateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::CreateDBInstanceOutcomeCallable MongodbClient::CreateDBInstanceCallable(const CreateDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::CreateDBInstanceHourOutcome MongodbClient::CreateDBInstanceHour(const CreateDBInstanceHourRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstanceHour");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceHourResponse rsp = CreateDBInstanceHourResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceHourOutcome(rsp);
        else
            return CreateDBInstanceHourOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceHourOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateDBInstanceHourAsync(const CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstanceHour(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::CreateDBInstanceHourOutcomeCallable MongodbClient::CreateDBInstanceHourCallable(const CreateDBInstanceHourRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstanceHourOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstanceHour(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::DescribeBackupAccessOutcome MongodbClient::DescribeBackupAccess(const DescribeBackupAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupAccessResponse rsp = DescribeBackupAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupAccessOutcome(rsp);
        else
            return DescribeBackupAccessOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupAccessOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeBackupAccessAsync(const DescribeBackupAccessRequest& request, const DescribeBackupAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::DescribeBackupAccessOutcomeCallable MongodbClient::DescribeBackupAccessCallable(const DescribeBackupAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupAccessOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::DescribeClientConnectionsOutcome MongodbClient::DescribeClientConnections(const DescribeClientConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientConnectionsResponse rsp = DescribeClientConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientConnectionsOutcome(rsp);
        else
            return DescribeClientConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeClientConnectionsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeClientConnectionsAsync(const DescribeClientConnectionsRequest& request, const DescribeClientConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientConnections(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::DescribeClientConnectionsOutcomeCallable MongodbClient::DescribeClientConnectionsCallable(const DescribeClientConnectionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientConnectionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientConnections(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::DescribeDBBackupsOutcome MongodbClient::DescribeDBBackups(const DescribeDBBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBBackupsResponse rsp = DescribeDBBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBBackupsOutcome(rsp);
        else
            return DescribeDBBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBBackupsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeDBBackupsAsync(const DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::DescribeDBBackupsOutcomeCallable MongodbClient::DescribeDBBackupsCallable(const DescribeDBBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::DescribeDBInstanceDealOutcome MongodbClient::DescribeDBInstanceDeal(const DescribeDBInstanceDealRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceDeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceDealResponse rsp = DescribeDBInstanceDealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceDealOutcome(rsp);
        else
            return DescribeDBInstanceDealOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceDealOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeDBInstanceDealAsync(const DescribeDBInstanceDealRequest& request, const DescribeDBInstanceDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceDeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::DescribeDBInstanceDealOutcomeCallable MongodbClient::DescribeDBInstanceDealCallable(const DescribeDBInstanceDealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceDealOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceDeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::DescribeDBInstancesOutcome MongodbClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesResponse rsp = DescribeDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesOutcome(rsp);
        else
            return DescribeDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::DescribeDBInstancesOutcomeCallable MongodbClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::DescribeSlowLogPatternsOutcome MongodbClient::DescribeSlowLogPatterns(const DescribeSlowLogPatternsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogPatterns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogPatternsResponse rsp = DescribeSlowLogPatternsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogPatternsOutcome(rsp);
        else
            return DescribeSlowLogPatternsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogPatternsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeSlowLogPatternsAsync(const DescribeSlowLogPatternsRequest& request, const DescribeSlowLogPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogPatterns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::DescribeSlowLogPatternsOutcomeCallable MongodbClient::DescribeSlowLogPatternsCallable(const DescribeSlowLogPatternsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogPatternsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogPatterns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::DescribeSlowLogsOutcome MongodbClient::DescribeSlowLogs(const DescribeSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogsResponse rsp = DescribeSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogsOutcome(rsp);
        else
            return DescribeSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::DescribeSlowLogsOutcomeCallable MongodbClient::DescribeSlowLogsCallable(const DescribeSlowLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::DescribeSpecInfoOutcome MongodbClient::DescribeSpecInfo(const DescribeSpecInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpecInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecInfoResponse rsp = DescribeSpecInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecInfoOutcome(rsp);
        else
            return DescribeSpecInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecInfoOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeSpecInfoAsync(const DescribeSpecInfoRequest& request, const DescribeSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpecInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::DescribeSpecInfoOutcomeCallable MongodbClient::DescribeSpecInfoCallable(const DescribeSpecInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpecInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpecInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::FlushInstanceRouterConfigOutcome MongodbClient::FlushInstanceRouterConfig(const FlushInstanceRouterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "FlushInstanceRouterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlushInstanceRouterConfigResponse rsp = FlushInstanceRouterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlushInstanceRouterConfigOutcome(rsp);
        else
            return FlushInstanceRouterConfigOutcome(o.GetError());
    }
    else
    {
        return FlushInstanceRouterConfigOutcome(outcome.GetError());
    }
}

void MongodbClient::FlushInstanceRouterConfigAsync(const FlushInstanceRouterConfigRequest& request, const FlushInstanceRouterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FlushInstanceRouterConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::FlushInstanceRouterConfigOutcomeCallable MongodbClient::FlushInstanceRouterConfigCallable(const FlushInstanceRouterConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FlushInstanceRouterConfigOutcome()>>(
        [this, request]()
        {
            return this->FlushInstanceRouterConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::InquirePriceCreateDBInstancesOutcome MongodbClient::InquirePriceCreateDBInstances(const InquirePriceCreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateDBInstancesResponse rsp = InquirePriceCreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateDBInstancesOutcome(rsp);
        else
            return InquirePriceCreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateDBInstancesOutcome(outcome.GetError());
    }
}

void MongodbClient::InquirePriceCreateDBInstancesAsync(const InquirePriceCreateDBInstancesRequest& request, const InquirePriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceCreateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::InquirePriceCreateDBInstancesOutcomeCallable MongodbClient::InquirePriceCreateDBInstancesCallable(const InquirePriceCreateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceCreateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceCreateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::InquirePriceModifyDBInstanceSpecOutcome MongodbClient::InquirePriceModifyDBInstanceSpec(const InquirePriceModifyDBInstanceSpecRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceModifyDBInstanceSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceModifyDBInstanceSpecResponse rsp = InquirePriceModifyDBInstanceSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceModifyDBInstanceSpecOutcome(rsp);
        else
            return InquirePriceModifyDBInstanceSpecOutcome(o.GetError());
    }
    else
    {
        return InquirePriceModifyDBInstanceSpecOutcome(outcome.GetError());
    }
}

void MongodbClient::InquirePriceModifyDBInstanceSpecAsync(const InquirePriceModifyDBInstanceSpecRequest& request, const InquirePriceModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceModifyDBInstanceSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::InquirePriceModifyDBInstanceSpecOutcomeCallable MongodbClient::InquirePriceModifyDBInstanceSpecCallable(const InquirePriceModifyDBInstanceSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceModifyDBInstanceSpecOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceModifyDBInstanceSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::InquirePriceRenewDBInstancesOutcome MongodbClient::InquirePriceRenewDBInstances(const InquirePriceRenewDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewDBInstancesResponse rsp = InquirePriceRenewDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewDBInstancesOutcome(rsp);
        else
            return InquirePriceRenewDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewDBInstancesOutcome(outcome.GetError());
    }
}

void MongodbClient::InquirePriceRenewDBInstancesAsync(const InquirePriceRenewDBInstancesRequest& request, const InquirePriceRenewDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceRenewDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::InquirePriceRenewDBInstancesOutcomeCallable MongodbClient::InquirePriceRenewDBInstancesCallable(const InquirePriceRenewDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceRenewDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceRenewDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::IsolateDBInstanceOutcome MongodbClient::IsolateDBInstance(const IsolateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDBInstanceResponse rsp = IsolateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDBInstanceOutcome(rsp);
        else
            return IsolateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::IsolateDBInstanceAsync(const IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::IsolateDBInstanceOutcomeCallable MongodbClient::IsolateDBInstanceCallable(const IsolateDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->IsolateDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::ModifyDBInstanceSpecOutcome MongodbClient::ModifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSpecResponse rsp = ModifyDBInstanceSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSpecOutcome(rsp);
        else
            return ModifyDBInstanceSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSpecOutcome(outcome.GetError());
    }
}

void MongodbClient::ModifyDBInstanceSpecAsync(const ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::ModifyDBInstanceSpecOutcomeCallable MongodbClient::ModifyDBInstanceSpecCallable(const ModifyDBInstanceSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSpecOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::OfflineIsolatedDBInstanceOutcome MongodbClient::OfflineIsolatedDBInstance(const OfflineIsolatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineIsolatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineIsolatedDBInstanceResponse rsp = OfflineIsolatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineIsolatedDBInstanceOutcome(rsp);
        else
            return OfflineIsolatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return OfflineIsolatedDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::OfflineIsolatedDBInstanceAsync(const OfflineIsolatedDBInstanceRequest& request, const OfflineIsolatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OfflineIsolatedDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::OfflineIsolatedDBInstanceOutcomeCallable MongodbClient::OfflineIsolatedDBInstanceCallable(const OfflineIsolatedDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OfflineIsolatedDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->OfflineIsolatedDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::RenameInstanceOutcome MongodbClient::RenameInstance(const RenameInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenameInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameInstanceResponse rsp = RenameInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameInstanceOutcome(rsp);
        else
            return RenameInstanceOutcome(o.GetError());
    }
    else
    {
        return RenameInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::RenameInstanceAsync(const RenameInstanceRequest& request, const RenameInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenameInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::RenameInstanceOutcomeCallable MongodbClient::RenameInstanceCallable(const RenameInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenameInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenameInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MongodbClient::RenewDBInstancesOutcome MongodbClient::RenewDBInstances(const RenewDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDBInstancesResponse rsp = RenewDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDBInstancesOutcome(rsp);
        else
            return RenewDBInstancesOutcome(o.GetError());
    }
    else
    {
        return RenewDBInstancesOutcome(outcome.GetError());
    }
}

void MongodbClient::RenewDBInstancesAsync(const RenewDBInstancesRequest& request, const RenewDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MongodbClient::RenewDBInstancesOutcomeCallable MongodbClient::RenewDBInstancesCallable(const RenewDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->RenewDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

