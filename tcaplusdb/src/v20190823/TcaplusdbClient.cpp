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

#include <tencentcloud/tcaplusdb/v20190823/TcaplusdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcaplusdb::V20190823;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-08-23";
    const string ENDPOINT = "tcaplusdb.tencentcloudapi.com";
}

TcaplusdbClient::TcaplusdbClient(const Credential &credential, const string &region) :
    TcaplusdbClient(credential, region, ClientProfile())
{
}

TcaplusdbClient::TcaplusdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcaplusdbClient::ClearTablesOutcome TcaplusdbClient::ClearTables(const ClearTablesRequest &request)
{
    auto outcome = MakeRequest(request, "ClearTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearTablesResponse rsp = ClearTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearTablesOutcome(rsp);
        else
            return ClearTablesOutcome(o.GetError());
    }
    else
    {
        return ClearTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ClearTablesAsync(const ClearTablesRequest& request, const ClearTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ClearTablesOutcomeCallable TcaplusdbClient::ClearTablesCallable(const ClearTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearTablesOutcome()>>(
        [this, request]()
        {
            return this->ClearTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::CompareIdlFilesOutcome TcaplusdbClient::CompareIdlFiles(const CompareIdlFilesRequest &request)
{
    auto outcome = MakeRequest(request, "CompareIdlFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompareIdlFilesResponse rsp = CompareIdlFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompareIdlFilesOutcome(rsp);
        else
            return CompareIdlFilesOutcome(o.GetError());
    }
    else
    {
        return CompareIdlFilesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CompareIdlFilesAsync(const CompareIdlFilesRequest& request, const CompareIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CompareIdlFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::CompareIdlFilesOutcomeCallable TcaplusdbClient::CompareIdlFilesCallable(const CompareIdlFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CompareIdlFilesOutcome()>>(
        [this, request]()
        {
            return this->CompareIdlFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::CreateAppOutcome TcaplusdbClient::CreateApp(const CreateAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppResponse rsp = CreateAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppOutcome(rsp);
        else
            return CreateAppOutcome(o.GetError());
    }
    else
    {
        return CreateAppOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::CreateAppOutcomeCallable TcaplusdbClient::CreateAppCallable(const CreateAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
        [this, request]()
        {
            return this->CreateApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::CreateTablesOutcome TcaplusdbClient::CreateTables(const CreateTablesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTablesResponse rsp = CreateTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTablesOutcome(rsp);
        else
            return CreateTablesOutcome(o.GetError());
    }
    else
    {
        return CreateTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateTablesAsync(const CreateTablesRequest& request, const CreateTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::CreateTablesOutcomeCallable TcaplusdbClient::CreateTablesCallable(const CreateTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTablesOutcome()>>(
        [this, request]()
        {
            return this->CreateTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::CreateZoneOutcome TcaplusdbClient::CreateZone(const CreateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "CreateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateZoneResponse rsp = CreateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateZoneOutcome(rsp);
        else
            return CreateZoneOutcome(o.GetError());
    }
    else
    {
        return CreateZoneOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateZoneAsync(const CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::CreateZoneOutcomeCallable TcaplusdbClient::CreateZoneCallable(const CreateZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateZoneOutcome()>>(
        [this, request]()
        {
            return this->CreateZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DeleteAppOutcome TcaplusdbClient::DeleteApp(const DeleteAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppResponse rsp = DeleteAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppOutcome(rsp);
        else
            return DeleteAppOutcome(o.GetError());
    }
    else
    {
        return DeleteAppOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DeleteAppOutcomeCallable TcaplusdbClient::DeleteAppCallable(const DeleteAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAppOutcome()>>(
        [this, request]()
        {
            return this->DeleteApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DeleteIdlFilesOutcome TcaplusdbClient::DeleteIdlFiles(const DeleteIdlFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIdlFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIdlFilesResponse rsp = DeleteIdlFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIdlFilesOutcome(rsp);
        else
            return DeleteIdlFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteIdlFilesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteIdlFilesAsync(const DeleteIdlFilesRequest& request, const DeleteIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIdlFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DeleteIdlFilesOutcomeCallable TcaplusdbClient::DeleteIdlFilesCallable(const DeleteIdlFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIdlFilesOutcome()>>(
        [this, request]()
        {
            return this->DeleteIdlFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DeleteTablesOutcome TcaplusdbClient::DeleteTables(const DeleteTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTablesResponse rsp = DeleteTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTablesOutcome(rsp);
        else
            return DeleteTablesOutcome(o.GetError());
    }
    else
    {
        return DeleteTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteTablesAsync(const DeleteTablesRequest& request, const DeleteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DeleteTablesOutcomeCallable TcaplusdbClient::DeleteTablesCallable(const DeleteTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTablesOutcome()>>(
        [this, request]()
        {
            return this->DeleteTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DeleteZoneOutcome TcaplusdbClient::DeleteZone(const DeleteZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteZoneResponse rsp = DeleteZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteZoneOutcome(rsp);
        else
            return DeleteZoneOutcome(o.GetError());
    }
    else
    {
        return DeleteZoneOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteZoneAsync(const DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DeleteZoneOutcomeCallable TcaplusdbClient::DeleteZoneCallable(const DeleteZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteZoneOutcome()>>(
        [this, request]()
        {
            return this->DeleteZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeAppsOutcome TcaplusdbClient::DescribeApps(const DescribeAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppsResponse rsp = DescribeAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppsOutcome(rsp);
        else
            return DescribeAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAppsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeAppsOutcomeCallable TcaplusdbClient::DescribeAppsCallable(const DescribeAppsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAppsOutcome()>>(
        [this, request]()
        {
            return this->DescribeApps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeIdlFileInfosOutcome TcaplusdbClient::DescribeIdlFileInfos(const DescribeIdlFileInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdlFileInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdlFileInfosResponse rsp = DescribeIdlFileInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdlFileInfosOutcome(rsp);
        else
            return DescribeIdlFileInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeIdlFileInfosOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeIdlFileInfosAsync(const DescribeIdlFileInfosRequest& request, const DescribeIdlFileInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdlFileInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeIdlFileInfosOutcomeCallable TcaplusdbClient::DescribeIdlFileInfosCallable(const DescribeIdlFileInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdlFileInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdlFileInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeRegionsOutcome TcaplusdbClient::DescribeRegions(const DescribeRegionsRequest &request)
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

void TcaplusdbClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeRegionsOutcomeCallable TcaplusdbClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
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

TcaplusdbClient::DescribeTablesOutcome TcaplusdbClient::DescribeTables(const DescribeTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesResponse rsp = DescribeTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesOutcome(rsp);
        else
            return DescribeTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeTablesOutcomeCallable TcaplusdbClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeTablesInRecycleOutcome TcaplusdbClient::DescribeTablesInRecycle(const DescribeTablesInRecycleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablesInRecycle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesInRecycleResponse rsp = DescribeTablesInRecycleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesInRecycleOutcome(rsp);
        else
            return DescribeTablesInRecycleOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesInRecycleOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTablesInRecycleAsync(const DescribeTablesInRecycleRequest& request, const DescribeTablesInRecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTablesInRecycle(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeTablesInRecycleOutcomeCallable TcaplusdbClient::DescribeTablesInRecycleCallable(const DescribeTablesInRecycleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablesInRecycleOutcome()>>(
        [this, request]()
        {
            return this->DescribeTablesInRecycle(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeTasksOutcome TcaplusdbClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeTasksOutcomeCallable TcaplusdbClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeUinInWhitelistOutcome TcaplusdbClient::DescribeUinInWhitelist(const DescribeUinInWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUinInWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUinInWhitelistResponse rsp = DescribeUinInWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUinInWhitelistOutcome(rsp);
        else
            return DescribeUinInWhitelistOutcome(o.GetError());
    }
    else
    {
        return DescribeUinInWhitelistOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeUinInWhitelistAsync(const DescribeUinInWhitelistRequest& request, const DescribeUinInWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUinInWhitelist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeUinInWhitelistOutcomeCallable TcaplusdbClient::DescribeUinInWhitelistCallable(const DescribeUinInWhitelistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUinInWhitelistOutcome()>>(
        [this, request]()
        {
            return this->DescribeUinInWhitelist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeZonesOutcome TcaplusdbClient::DescribeZones(const DescribeZonesRequest &request)
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

void TcaplusdbClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeZonesOutcomeCallable TcaplusdbClient::DescribeZonesCallable(const DescribeZonesRequest &request)
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

TcaplusdbClient::ModifyAppNameOutcome TcaplusdbClient::ModifyAppName(const ModifyAppNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAppName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppNameResponse rsp = ModifyAppNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppNameOutcome(rsp);
        else
            return ModifyAppNameOutcome(o.GetError());
    }
    else
    {
        return ModifyAppNameOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyAppNameAsync(const ModifyAppNameRequest& request, const ModifyAppNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAppName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyAppNameOutcomeCallable TcaplusdbClient::ModifyAppNameCallable(const ModifyAppNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAppNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyAppName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::ModifyAppPasswordOutcome TcaplusdbClient::ModifyAppPassword(const ModifyAppPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAppPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppPasswordResponse rsp = ModifyAppPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppPasswordOutcome(rsp);
        else
            return ModifyAppPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyAppPasswordOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyAppPasswordAsync(const ModifyAppPasswordRequest& request, const ModifyAppPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAppPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyAppPasswordOutcomeCallable TcaplusdbClient::ModifyAppPasswordCallable(const ModifyAppPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAppPasswordOutcome()>>(
        [this, request]()
        {
            return this->ModifyAppPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::ModifyTableMemosOutcome TcaplusdbClient::ModifyTableMemos(const ModifyTableMemosRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableMemos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableMemosResponse rsp = ModifyTableMemosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableMemosOutcome(rsp);
        else
            return ModifyTableMemosOutcome(o.GetError());
    }
    else
    {
        return ModifyTableMemosOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableMemosAsync(const ModifyTableMemosRequest& request, const ModifyTableMemosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTableMemos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyTableMemosOutcomeCallable TcaplusdbClient::ModifyTableMemosCallable(const ModifyTableMemosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTableMemosOutcome()>>(
        [this, request]()
        {
            return this->ModifyTableMemos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::ModifyTableQuotasOutcome TcaplusdbClient::ModifyTableQuotas(const ModifyTableQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableQuotasResponse rsp = ModifyTableQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableQuotasOutcome(rsp);
        else
            return ModifyTableQuotasOutcome(o.GetError());
    }
    else
    {
        return ModifyTableQuotasOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableQuotasAsync(const ModifyTableQuotasRequest& request, const ModifyTableQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTableQuotas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyTableQuotasOutcomeCallable TcaplusdbClient::ModifyTableQuotasCallable(const ModifyTableQuotasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTableQuotasOutcome()>>(
        [this, request]()
        {
            return this->ModifyTableQuotas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::ModifyTablesOutcome TcaplusdbClient::ModifyTables(const ModifyTablesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTablesResponse rsp = ModifyTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTablesOutcome(rsp);
        else
            return ModifyTablesOutcome(o.GetError());
    }
    else
    {
        return ModifyTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTablesAsync(const ModifyTablesRequest& request, const ModifyTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyTablesOutcomeCallable TcaplusdbClient::ModifyTablesCallable(const ModifyTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTablesOutcome()>>(
        [this, request]()
        {
            return this->ModifyTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::ModifyZoneNameOutcome TcaplusdbClient::ModifyZoneName(const ModifyZoneNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneNameResponse rsp = ModifyZoneNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneNameOutcome(rsp);
        else
            return ModifyZoneNameOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneNameOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyZoneNameAsync(const ModifyZoneNameRequest& request, const ModifyZoneNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyZoneNameOutcomeCallable TcaplusdbClient::ModifyZoneNameCallable(const ModifyZoneNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::RecoverRecycleTablesOutcome TcaplusdbClient::RecoverRecycleTables(const RecoverRecycleTablesRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverRecycleTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverRecycleTablesResponse rsp = RecoverRecycleTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverRecycleTablesOutcome(rsp);
        else
            return RecoverRecycleTablesOutcome(o.GetError());
    }
    else
    {
        return RecoverRecycleTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::RecoverRecycleTablesAsync(const RecoverRecycleTablesRequest& request, const RecoverRecycleTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecoverRecycleTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::RecoverRecycleTablesOutcomeCallable TcaplusdbClient::RecoverRecycleTablesCallable(const RecoverRecycleTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecoverRecycleTablesOutcome()>>(
        [this, request]()
        {
            return this->RecoverRecycleTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::RollbackTablesOutcome TcaplusdbClient::RollbackTables(const RollbackTablesRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackTablesResponse rsp = RollbackTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackTablesOutcome(rsp);
        else
            return RollbackTablesOutcome(o.GetError());
    }
    else
    {
        return RollbackTablesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::RollbackTablesAsync(const RollbackTablesRequest& request, const RollbackTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::RollbackTablesOutcomeCallable TcaplusdbClient::RollbackTablesCallable(const RollbackTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackTablesOutcome()>>(
        [this, request]()
        {
            return this->RollbackTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::VerifyIdlFilesOutcome TcaplusdbClient::VerifyIdlFiles(const VerifyIdlFilesRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyIdlFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyIdlFilesResponse rsp = VerifyIdlFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyIdlFilesOutcome(rsp);
        else
            return VerifyIdlFilesOutcome(o.GetError());
    }
    else
    {
        return VerifyIdlFilesOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::VerifyIdlFilesAsync(const VerifyIdlFilesRequest& request, const VerifyIdlFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyIdlFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::VerifyIdlFilesOutcomeCallable TcaplusdbClient::VerifyIdlFilesCallable(const VerifyIdlFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyIdlFilesOutcome()>>(
        [this, request]()
        {
            return this->VerifyIdlFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

