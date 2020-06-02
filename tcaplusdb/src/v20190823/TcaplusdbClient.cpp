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

TcaplusdbClient::CreateBackupOutcome TcaplusdbClient::CreateBackup(const CreateBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupResponse rsp = CreateBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupOutcome(rsp);
        else
            return CreateBackupOutcome(o.GetError());
    }
    else
    {
        return CreateBackupOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::CreateBackupOutcomeCallable TcaplusdbClient::CreateBackupCallable(const CreateBackupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
        [this, request]()
        {
            return this->CreateBackup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::CreateClusterOutcome TcaplusdbClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::CreateClusterOutcomeCallable TcaplusdbClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::CreateTableGroupOutcome TcaplusdbClient::CreateTableGroup(const CreateTableGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTableGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTableGroupResponse rsp = CreateTableGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTableGroupOutcome(rsp);
        else
            return CreateTableGroupOutcome(o.GetError());
    }
    else
    {
        return CreateTableGroupOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::CreateTableGroupAsync(const CreateTableGroupRequest& request, const CreateTableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTableGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::CreateTableGroupOutcomeCallable TcaplusdbClient::CreateTableGroupCallable(const CreateTableGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTableGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateTableGroup(request);
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

TcaplusdbClient::DeleteClusterOutcome TcaplusdbClient::DeleteCluster(const DeleteClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterResponse rsp = DeleteClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterOutcome(rsp);
        else
            return DeleteClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DeleteClusterOutcomeCallable TcaplusdbClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteCluster(request);
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

TcaplusdbClient::DeleteTableGroupOutcome TcaplusdbClient::DeleteTableGroup(const DeleteTableGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTableGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableGroupResponse rsp = DeleteTableGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableGroupOutcome(rsp);
        else
            return DeleteTableGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteTableGroupOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DeleteTableGroupAsync(const DeleteTableGroupRequest& request, const DeleteTableGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTableGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DeleteTableGroupOutcomeCallable TcaplusdbClient::DeleteTableGroupCallable(const DeleteTableGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTableGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteTableGroup(request);
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

TcaplusdbClient::DescribeClusterTagsOutcome TcaplusdbClient::DescribeClusterTags(const DescribeClusterTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterTagsResponse rsp = DescribeClusterTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterTagsOutcome(rsp);
        else
            return DescribeClusterTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeClusterTagsAsync(const DescribeClusterTagsRequest& request, const DescribeClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeClusterTagsOutcomeCallable TcaplusdbClient::DescribeClusterTagsCallable(const DescribeClusterTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeClustersOutcome TcaplusdbClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeClustersOutcomeCallable TcaplusdbClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusters(request);
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

TcaplusdbClient::DescribeTableGroupTagsOutcome TcaplusdbClient::DescribeTableGroupTags(const DescribeTableGroupTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableGroupTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableGroupTagsResponse rsp = DescribeTableGroupTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableGroupTagsOutcome(rsp);
        else
            return DescribeTableGroupTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableGroupTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTableGroupTagsAsync(const DescribeTableGroupTagsRequest& request, const DescribeTableGroupTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableGroupTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeTableGroupTagsOutcomeCallable TcaplusdbClient::DescribeTableGroupTagsCallable(const DescribeTableGroupTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableGroupTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableGroupTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeTableGroupsOutcome TcaplusdbClient::DescribeTableGroups(const DescribeTableGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableGroupsResponse rsp = DescribeTableGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableGroupsOutcome(rsp);
        else
            return DescribeTableGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableGroupsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTableGroupsAsync(const DescribeTableGroupsRequest& request, const DescribeTableGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeTableGroupsOutcomeCallable TcaplusdbClient::DescribeTableGroupsCallable(const DescribeTableGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::DescribeTableTagsOutcome TcaplusdbClient::DescribeTableTags(const DescribeTableTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableTagsResponse rsp = DescribeTableTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableTagsOutcome(rsp);
        else
            return DescribeTableTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTableTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::DescribeTableTagsAsync(const DescribeTableTagsRequest& request, const DescribeTableTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTableTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::DescribeTableTagsOutcomeCallable TcaplusdbClient::DescribeTableTagsCallable(const DescribeTableTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTableTags(request);
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

TcaplusdbClient::ModifyClusterNameOutcome TcaplusdbClient::ModifyClusterName(const ModifyClusterNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterNameResponse rsp = ModifyClusterNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterNameOutcome(rsp);
        else
            return ModifyClusterNameOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterNameOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyClusterNameAsync(const ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyClusterNameOutcomeCallable TcaplusdbClient::ModifyClusterNameCallable(const ModifyClusterNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::ModifyClusterPasswordOutcome TcaplusdbClient::ModifyClusterPassword(const ModifyClusterPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterPasswordResponse rsp = ModifyClusterPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterPasswordOutcome(rsp);
        else
            return ModifyClusterPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterPasswordOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyClusterPasswordAsync(const ModifyClusterPasswordRequest& request, const ModifyClusterPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyClusterPasswordOutcomeCallable TcaplusdbClient::ModifyClusterPasswordCallable(const ModifyClusterPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterPasswordOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::ModifyClusterTagsOutcome TcaplusdbClient::ModifyClusterTags(const ModifyClusterTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterTagsResponse rsp = ModifyClusterTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterTagsOutcome(rsp);
        else
            return ModifyClusterTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyClusterTagsAsync(const ModifyClusterTagsRequest& request, const ModifyClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClusterTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyClusterTagsOutcomeCallable TcaplusdbClient::ModifyClusterTagsCallable(const ModifyClusterTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterTagsOutcome()>>(
        [this, request]()
        {
            return this->ModifyClusterTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::ModifyTableGroupNameOutcome TcaplusdbClient::ModifyTableGroupName(const ModifyTableGroupNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableGroupName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableGroupNameResponse rsp = ModifyTableGroupNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableGroupNameOutcome(rsp);
        else
            return ModifyTableGroupNameOutcome(o.GetError());
    }
    else
    {
        return ModifyTableGroupNameOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableGroupNameAsync(const ModifyTableGroupNameRequest& request, const ModifyTableGroupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTableGroupName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyTableGroupNameOutcomeCallable TcaplusdbClient::ModifyTableGroupNameCallable(const ModifyTableGroupNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTableGroupNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyTableGroupName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcaplusdbClient::ModifyTableGroupTagsOutcome TcaplusdbClient::ModifyTableGroupTags(const ModifyTableGroupTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableGroupTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableGroupTagsResponse rsp = ModifyTableGroupTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableGroupTagsOutcome(rsp);
        else
            return ModifyTableGroupTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyTableGroupTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableGroupTagsAsync(const ModifyTableGroupTagsRequest& request, const ModifyTableGroupTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTableGroupTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyTableGroupTagsOutcomeCallable TcaplusdbClient::ModifyTableGroupTagsCallable(const ModifyTableGroupTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTableGroupTagsOutcome()>>(
        [this, request]()
        {
            return this->ModifyTableGroupTags(request);
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

TcaplusdbClient::ModifyTableTagsOutcome TcaplusdbClient::ModifyTableTags(const ModifyTableTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTableTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTableTagsResponse rsp = ModifyTableTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTableTagsOutcome(rsp);
        else
            return ModifyTableTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyTableTagsOutcome(outcome.GetError());
    }
}

void TcaplusdbClient::ModifyTableTagsAsync(const ModifyTableTagsRequest& request, const ModifyTableTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTableTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcaplusdbClient::ModifyTableTagsOutcomeCallable TcaplusdbClient::ModifyTableTagsCallable(const ModifyTableTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTableTagsOutcome()>>(
        [this, request]()
        {
            return this->ModifyTableTags(request);
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

