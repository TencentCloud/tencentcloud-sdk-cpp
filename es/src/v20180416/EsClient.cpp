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

#include <tencentcloud/es/v20180416/EsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Es::V20180416;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "es.tencentcloudapi.com";
}

EsClient::EsClient(const Credential &credential, const string &region) :
    EsClient(credential, region, ClientProfile())
{
}

EsClient::EsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EsClient::CheckMigrateIndexMetaDataOutcome EsClient::CheckMigrateIndexMetaData(const CheckMigrateIndexMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "CheckMigrateIndexMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckMigrateIndexMetaDataResponse rsp = CheckMigrateIndexMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckMigrateIndexMetaDataOutcome(rsp);
        else
            return CheckMigrateIndexMetaDataOutcome(o.GetError());
    }
    else
    {
        return CheckMigrateIndexMetaDataOutcome(outcome.GetError());
    }
}

void EsClient::CheckMigrateIndexMetaDataAsync(const CheckMigrateIndexMetaDataRequest& request, const CheckMigrateIndexMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckMigrateIndexMetaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CheckMigrateIndexMetaDataOutcomeCallable EsClient::CheckMigrateIndexMetaDataCallable(const CheckMigrateIndexMetaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckMigrateIndexMetaDataOutcome()>>(
        [this, request]()
        {
            return this->CheckMigrateIndexMetaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::CreateClusterSnapshotOutcome EsClient::CreateClusterSnapshot(const CreateClusterSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterSnapshotResponse rsp = CreateClusterSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterSnapshotOutcome(rsp);
        else
            return CreateClusterSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateClusterSnapshotOutcome(outcome.GetError());
    }
}

void EsClient::CreateClusterSnapshotAsync(const CreateClusterSnapshotRequest& request, const CreateClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateClusterSnapshotOutcomeCallable EsClient::CreateClusterSnapshotCallable(const CreateClusterSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterSnapshotOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::CreateCosMigrateToServerlessInstanceOutcome EsClient::CreateCosMigrateToServerlessInstance(const CreateCosMigrateToServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosMigrateToServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosMigrateToServerlessInstanceResponse rsp = CreateCosMigrateToServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosMigrateToServerlessInstanceOutcome(rsp);
        else
            return CreateCosMigrateToServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateCosMigrateToServerlessInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateCosMigrateToServerlessInstanceAsync(const CreateCosMigrateToServerlessInstanceRequest& request, const CreateCosMigrateToServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCosMigrateToServerlessInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateCosMigrateToServerlessInstanceOutcomeCallable EsClient::CreateCosMigrateToServerlessInstanceCallable(const CreateCosMigrateToServerlessInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCosMigrateToServerlessInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateCosMigrateToServerlessInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::CreateIndexOutcome EsClient::CreateIndex(const CreateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIndexResponse rsp = CreateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIndexOutcome(rsp);
        else
            return CreateIndexOutcome(o.GetError());
    }
    else
    {
        return CreateIndexOutcome(outcome.GetError());
    }
}

void EsClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateIndexOutcomeCallable EsClient::CreateIndexCallable(const CreateIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIndexOutcome()>>(
        [this, request]()
        {
            return this->CreateIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::CreateInstanceOutcome EsClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateInstanceOutcomeCallable EsClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::CreateLogstashInstanceOutcome EsClient::CreateLogstashInstance(const CreateLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogstashInstanceResponse rsp = CreateLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogstashInstanceOutcome(rsp);
        else
            return CreateLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateLogstashInstanceAsync(const CreateLogstashInstanceRequest& request, const CreateLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogstashInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateLogstashInstanceOutcomeCallable EsClient::CreateLogstashInstanceCallable(const CreateLogstashInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogstashInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateLogstashInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::CreateServerlessInstanceOutcome EsClient::CreateServerlessInstance(const CreateServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerlessInstanceResponse rsp = CreateServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerlessInstanceOutcome(rsp);
        else
            return CreateServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateServerlessInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateServerlessInstanceAsync(const CreateServerlessInstanceRequest& request, const CreateServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServerlessInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateServerlessInstanceOutcomeCallable EsClient::CreateServerlessInstanceCallable(const CreateServerlessInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServerlessInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateServerlessInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::CreateServerlessSpaceV2Outcome EsClient::CreateServerlessSpaceV2(const CreateServerlessSpaceV2Request &request)
{
    auto outcome = MakeRequest(request, "CreateServerlessSpaceV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerlessSpaceV2Response rsp = CreateServerlessSpaceV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerlessSpaceV2Outcome(rsp);
        else
            return CreateServerlessSpaceV2Outcome(o.GetError());
    }
    else
    {
        return CreateServerlessSpaceV2Outcome(outcome.GetError());
    }
}

void EsClient::CreateServerlessSpaceV2Async(const CreateServerlessSpaceV2Request& request, const CreateServerlessSpaceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServerlessSpaceV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::CreateServerlessSpaceV2OutcomeCallable EsClient::CreateServerlessSpaceV2Callable(const CreateServerlessSpaceV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServerlessSpaceV2Outcome()>>(
        [this, request]()
        {
            return this->CreateServerlessSpaceV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteClusterSnapshotOutcome EsClient::DeleteClusterSnapshot(const DeleteClusterSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterSnapshotResponse rsp = DeleteClusterSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterSnapshotOutcome(rsp);
        else
            return DeleteClusterSnapshotOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterSnapshotOutcome(outcome.GetError());
    }
}

void EsClient::DeleteClusterSnapshotAsync(const DeleteClusterSnapshotRequest& request, const DeleteClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteClusterSnapshotOutcomeCallable EsClient::DeleteClusterSnapshotCallable(const DeleteClusterSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterSnapshotOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteIndexOutcome EsClient::DeleteIndex(const DeleteIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIndexResponse rsp = DeleteIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIndexOutcome(rsp);
        else
            return DeleteIndexOutcome(o.GetError());
    }
    else
    {
        return DeleteIndexOutcome(outcome.GetError());
    }
}

void EsClient::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteIndexOutcomeCallable EsClient::DeleteIndexCallable(const DeleteIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIndexOutcome()>>(
        [this, request]()
        {
            return this->DeleteIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteInstanceOutcome EsClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteInstanceOutcomeCallable EsClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteLogstashInstanceOutcome EsClient::DeleteLogstashInstance(const DeleteLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogstashInstanceResponse rsp = DeleteLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogstashInstanceOutcome(rsp);
        else
            return DeleteLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DeleteLogstashInstanceAsync(const DeleteLogstashInstanceRequest& request, const DeleteLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogstashInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteLogstashInstanceOutcomeCallable EsClient::DeleteLogstashInstanceCallable(const DeleteLogstashInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogstashInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogstashInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteLogstashPipelinesOutcome EsClient::DeleteLogstashPipelines(const DeleteLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogstashPipelinesResponse rsp = DeleteLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogstashPipelinesOutcome(rsp);
        else
            return DeleteLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return DeleteLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::DeleteLogstashPipelinesAsync(const DeleteLogstashPipelinesRequest& request, const DeleteLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogstashPipelines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteLogstashPipelinesOutcomeCallable EsClient::DeleteLogstashPipelinesCallable(const DeleteLogstashPipelinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogstashPipelinesOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogstashPipelines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteServerlessInstanceOutcome EsClient::DeleteServerlessInstance(const DeleteServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServerlessInstanceResponse rsp = DeleteServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServerlessInstanceOutcome(rsp);
        else
            return DeleteServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteServerlessInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DeleteServerlessInstanceAsync(const DeleteServerlessInstanceRequest& request, const DeleteServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServerlessInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteServerlessInstanceOutcomeCallable EsClient::DeleteServerlessInstanceCallable(const DeleteServerlessInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServerlessInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteServerlessInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DeleteServerlessSpaceUserOutcome EsClient::DeleteServerlessSpaceUser(const DeleteServerlessSpaceUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServerlessSpaceUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServerlessSpaceUserResponse rsp = DeleteServerlessSpaceUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServerlessSpaceUserOutcome(rsp);
        else
            return DeleteServerlessSpaceUserOutcome(o.GetError());
    }
    else
    {
        return DeleteServerlessSpaceUserOutcome(outcome.GetError());
    }
}

void EsClient::DeleteServerlessSpaceUserAsync(const DeleteServerlessSpaceUserRequest& request, const DeleteServerlessSpaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServerlessSpaceUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DeleteServerlessSpaceUserOutcomeCallable EsClient::DeleteServerlessSpaceUserCallable(const DeleteServerlessSpaceUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServerlessSpaceUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteServerlessSpaceUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeClusterSnapshotOutcome EsClient::DescribeClusterSnapshot(const DescribeClusterSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterSnapshotResponse rsp = DescribeClusterSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterSnapshotOutcome(rsp);
        else
            return DescribeClusterSnapshotOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterSnapshotOutcome(outcome.GetError());
    }
}

void EsClient::DescribeClusterSnapshotAsync(const DescribeClusterSnapshotRequest& request, const DescribeClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeClusterSnapshotOutcomeCallable EsClient::DescribeClusterSnapshotCallable(const DescribeClusterSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterSnapshotOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeDiagnoseOutcome EsClient::DescribeDiagnose(const DescribeDiagnoseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiagnose");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiagnoseResponse rsp = DescribeDiagnoseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiagnoseOutcome(rsp);
        else
            return DescribeDiagnoseOutcome(o.GetError());
    }
    else
    {
        return DescribeDiagnoseOutcome(outcome.GetError());
    }
}

void EsClient::DescribeDiagnoseAsync(const DescribeDiagnoseRequest& request, const DescribeDiagnoseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiagnose(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeDiagnoseOutcomeCallable EsClient::DescribeDiagnoseCallable(const DescribeDiagnoseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiagnoseOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiagnose(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeIndexListOutcome EsClient::DescribeIndexList(const DescribeIndexListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexListResponse rsp = DescribeIndexListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexListOutcome(rsp);
        else
            return DescribeIndexListOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexListOutcome(outcome.GetError());
    }
}

void EsClient::DescribeIndexListAsync(const DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndexList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeIndexListOutcomeCallable EsClient::DescribeIndexListCallable(const DescribeIndexListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndexList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeIndexMetaOutcome EsClient::DescribeIndexMeta(const DescribeIndexMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexMetaResponse rsp = DescribeIndexMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexMetaOutcome(rsp);
        else
            return DescribeIndexMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexMetaOutcome(outcome.GetError());
    }
}

void EsClient::DescribeIndexMetaAsync(const DescribeIndexMetaRequest& request, const DescribeIndexMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndexMeta(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeIndexMetaOutcomeCallable EsClient::DescribeIndexMetaCallable(const DescribeIndexMetaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexMetaOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndexMeta(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeInstanceLogsOutcome EsClient::DescribeInstanceLogs(const DescribeInstanceLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogsResponse rsp = DescribeInstanceLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogsOutcome(rsp);
        else
            return DescribeInstanceLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstanceLogsAsync(const DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeInstanceLogsOutcomeCallable EsClient::DescribeInstanceLogsCallable(const DescribeInstanceLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeInstanceOperationsOutcome EsClient::DescribeInstanceOperations(const DescribeInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceOperationsResponse rsp = DescribeInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOperationsOutcome(rsp);
        else
            return DescribeInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOperationsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstanceOperationsAsync(const DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceOperations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeInstanceOperationsOutcomeCallable EsClient::DescribeInstanceOperationsCallable(const DescribeInstanceOperationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOperationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceOperations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeInstancePluginListOutcome EsClient::DescribeInstancePluginList(const DescribeInstancePluginListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancePluginList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancePluginListResponse rsp = DescribeInstancePluginListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancePluginListOutcome(rsp);
        else
            return DescribeInstancePluginListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancePluginListOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstancePluginListAsync(const DescribeInstancePluginListRequest& request, const DescribeInstancePluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancePluginList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeInstancePluginListOutcomeCallable EsClient::DescribeInstancePluginListCallable(const DescribeInstancePluginListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancePluginListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancePluginList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeInstancesOutcome EsClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void EsClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeInstancesOutcomeCallable EsClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

EsClient::DescribeLogstashInstanceLogsOutcome EsClient::DescribeLogstashInstanceLogs(const DescribeLogstashInstanceLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashInstanceLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashInstanceLogsResponse rsp = DescribeLogstashInstanceLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashInstanceLogsOutcome(rsp);
        else
            return DescribeLogstashInstanceLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashInstanceLogsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashInstanceLogsAsync(const DescribeLogstashInstanceLogsRequest& request, const DescribeLogstashInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogstashInstanceLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeLogstashInstanceLogsOutcomeCallable EsClient::DescribeLogstashInstanceLogsCallable(const DescribeLogstashInstanceLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogstashInstanceLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogstashInstanceLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeLogstashInstanceOperationsOutcome EsClient::DescribeLogstashInstanceOperations(const DescribeLogstashInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashInstanceOperationsResponse rsp = DescribeLogstashInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashInstanceOperationsOutcome(rsp);
        else
            return DescribeLogstashInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashInstanceOperationsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashInstanceOperationsAsync(const DescribeLogstashInstanceOperationsRequest& request, const DescribeLogstashInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogstashInstanceOperations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeLogstashInstanceOperationsOutcomeCallable EsClient::DescribeLogstashInstanceOperationsCallable(const DescribeLogstashInstanceOperationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogstashInstanceOperationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogstashInstanceOperations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeLogstashInstancesOutcome EsClient::DescribeLogstashInstances(const DescribeLogstashInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashInstancesResponse rsp = DescribeLogstashInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashInstancesOutcome(rsp);
        else
            return DescribeLogstashInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashInstancesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashInstancesAsync(const DescribeLogstashInstancesRequest& request, const DescribeLogstashInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogstashInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeLogstashInstancesOutcomeCallable EsClient::DescribeLogstashInstancesCallable(const DescribeLogstashInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogstashInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogstashInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeLogstashPipelinesOutcome EsClient::DescribeLogstashPipelines(const DescribeLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashPipelinesResponse rsp = DescribeLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashPipelinesOutcome(rsp);
        else
            return DescribeLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashPipelinesAsync(const DescribeLogstashPipelinesRequest& request, const DescribeLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogstashPipelines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeLogstashPipelinesOutcomeCallable EsClient::DescribeLogstashPipelinesCallable(const DescribeLogstashPipelinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogstashPipelinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogstashPipelines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeServerlessInstancesOutcome EsClient::DescribeServerlessInstances(const DescribeServerlessInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessInstancesResponse rsp = DescribeServerlessInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessInstancesOutcome(rsp);
        else
            return DescribeServerlessInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessInstancesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeServerlessInstancesAsync(const DescribeServerlessInstancesRequest& request, const DescribeServerlessInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerlessInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeServerlessInstancesOutcomeCallable EsClient::DescribeServerlessInstancesCallable(const DescribeServerlessInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerlessInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerlessInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeServerlessMetricsOutcome EsClient::DescribeServerlessMetrics(const DescribeServerlessMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessMetricsResponse rsp = DescribeServerlessMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessMetricsOutcome(rsp);
        else
            return DescribeServerlessMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessMetricsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeServerlessMetricsAsync(const DescribeServerlessMetricsRequest& request, const DescribeServerlessMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerlessMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeServerlessMetricsOutcomeCallable EsClient::DescribeServerlessMetricsCallable(const DescribeServerlessMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerlessMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerlessMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeServerlessSpaceUserOutcome EsClient::DescribeServerlessSpaceUser(const DescribeServerlessSpaceUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessSpaceUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessSpaceUserResponse rsp = DescribeServerlessSpaceUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessSpaceUserOutcome(rsp);
        else
            return DescribeServerlessSpaceUserOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessSpaceUserOutcome(outcome.GetError());
    }
}

void EsClient::DescribeServerlessSpaceUserAsync(const DescribeServerlessSpaceUserRequest& request, const DescribeServerlessSpaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerlessSpaceUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeServerlessSpaceUserOutcomeCallable EsClient::DescribeServerlessSpaceUserCallable(const DescribeServerlessSpaceUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerlessSpaceUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerlessSpaceUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeServerlessSpacesOutcome EsClient::DescribeServerlessSpaces(const DescribeServerlessSpacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessSpaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessSpacesResponse rsp = DescribeServerlessSpacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessSpacesOutcome(rsp);
        else
            return DescribeServerlessSpacesOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessSpacesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeServerlessSpacesAsync(const DescribeServerlessSpacesRequest& request, const DescribeServerlessSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerlessSpaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeServerlessSpacesOutcomeCallable EsClient::DescribeServerlessSpacesCallable(const DescribeServerlessSpacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerlessSpacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerlessSpaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeSpaceKibanaToolsOutcome EsClient::DescribeSpaceKibanaTools(const DescribeSpaceKibanaToolsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceKibanaTools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceKibanaToolsResponse rsp = DescribeSpaceKibanaToolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceKibanaToolsOutcome(rsp);
        else
            return DescribeSpaceKibanaToolsOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceKibanaToolsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeSpaceKibanaToolsAsync(const DescribeSpaceKibanaToolsRequest& request, const DescribeSpaceKibanaToolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpaceKibanaTools(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeSpaceKibanaToolsOutcomeCallable EsClient::DescribeSpaceKibanaToolsCallable(const DescribeSpaceKibanaToolsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpaceKibanaToolsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpaceKibanaTools(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeUserCosSnapshotListOutcome EsClient::DescribeUserCosSnapshotList(const DescribeUserCosSnapshotListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserCosSnapshotList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserCosSnapshotListResponse rsp = DescribeUserCosSnapshotListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserCosSnapshotListOutcome(rsp);
        else
            return DescribeUserCosSnapshotListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserCosSnapshotListOutcome(outcome.GetError());
    }
}

void EsClient::DescribeUserCosSnapshotListAsync(const DescribeUserCosSnapshotListRequest& request, const DescribeUserCosSnapshotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserCosSnapshotList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeUserCosSnapshotListOutcomeCallable EsClient::DescribeUserCosSnapshotListCallable(const DescribeUserCosSnapshotListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserCosSnapshotListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserCosSnapshotList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DescribeViewsOutcome EsClient::DescribeViews(const DescribeViewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeViews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeViewsResponse rsp = DescribeViewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeViewsOutcome(rsp);
        else
            return DescribeViewsOutcome(o.GetError());
    }
    else
    {
        return DescribeViewsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeViewsAsync(const DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeViews(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DescribeViewsOutcomeCallable EsClient::DescribeViewsCallable(const DescribeViewsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeViewsOutcome()>>(
        [this, request]()
        {
            return this->DescribeViews(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::DiagnoseInstanceOutcome EsClient::DiagnoseInstance(const DiagnoseInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DiagnoseInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DiagnoseInstanceResponse rsp = DiagnoseInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DiagnoseInstanceOutcome(rsp);
        else
            return DiagnoseInstanceOutcome(o.GetError());
    }
    else
    {
        return DiagnoseInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DiagnoseInstanceAsync(const DiagnoseInstanceRequest& request, const DiagnoseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DiagnoseInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::DiagnoseInstanceOutcomeCallable EsClient::DiagnoseInstanceCallable(const DiagnoseInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DiagnoseInstanceOutcome()>>(
        [this, request]()
        {
            return this->DiagnoseInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::GetDiagnoseSettingsOutcome EsClient::GetDiagnoseSettings(const GetDiagnoseSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDiagnoseSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDiagnoseSettingsResponse rsp = GetDiagnoseSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDiagnoseSettingsOutcome(rsp);
        else
            return GetDiagnoseSettingsOutcome(o.GetError());
    }
    else
    {
        return GetDiagnoseSettingsOutcome(outcome.GetError());
    }
}

void EsClient::GetDiagnoseSettingsAsync(const GetDiagnoseSettingsRequest& request, const GetDiagnoseSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDiagnoseSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::GetDiagnoseSettingsOutcomeCallable EsClient::GetDiagnoseSettingsCallable(const GetDiagnoseSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDiagnoseSettingsOutcome()>>(
        [this, request]()
        {
            return this->GetDiagnoseSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::GetRequestTargetNodeTypesOutcome EsClient::GetRequestTargetNodeTypes(const GetRequestTargetNodeTypesRequest &request)
{
    auto outcome = MakeRequest(request, "GetRequestTargetNodeTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRequestTargetNodeTypesResponse rsp = GetRequestTargetNodeTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRequestTargetNodeTypesOutcome(rsp);
        else
            return GetRequestTargetNodeTypesOutcome(o.GetError());
    }
    else
    {
        return GetRequestTargetNodeTypesOutcome(outcome.GetError());
    }
}

void EsClient::GetRequestTargetNodeTypesAsync(const GetRequestTargetNodeTypesRequest& request, const GetRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRequestTargetNodeTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::GetRequestTargetNodeTypesOutcomeCallable EsClient::GetRequestTargetNodeTypesCallable(const GetRequestTargetNodeTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRequestTargetNodeTypesOutcome()>>(
        [this, request]()
        {
            return this->GetRequestTargetNodeTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::InquirePriceRenewInstanceOutcome EsClient::InquirePriceRenewInstance(const InquirePriceRenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewInstanceResponse rsp = InquirePriceRenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewInstanceOutcome(rsp);
        else
            return InquirePriceRenewInstanceOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewInstanceOutcome(outcome.GetError());
    }
}

void EsClient::InquirePriceRenewInstanceAsync(const InquirePriceRenewInstanceRequest& request, const InquirePriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceRenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::InquirePriceRenewInstanceOutcomeCallable EsClient::InquirePriceRenewInstanceCallable(const InquirePriceRenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceRenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceRenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::InstallInstanceModelOutcome EsClient::InstallInstanceModel(const InstallInstanceModelRequest &request)
{
    auto outcome = MakeRequest(request, "InstallInstanceModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallInstanceModelResponse rsp = InstallInstanceModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallInstanceModelOutcome(rsp);
        else
            return InstallInstanceModelOutcome(o.GetError());
    }
    else
    {
        return InstallInstanceModelOutcome(outcome.GetError());
    }
}

void EsClient::InstallInstanceModelAsync(const InstallInstanceModelRequest& request, const InstallInstanceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InstallInstanceModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::InstallInstanceModelOutcomeCallable EsClient::InstallInstanceModelCallable(const InstallInstanceModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InstallInstanceModelOutcome()>>(
        [this, request]()
        {
            return this->InstallInstanceModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::ModifyEsVipSecurityGroupOutcome EsClient::ModifyEsVipSecurityGroup(const ModifyEsVipSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEsVipSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEsVipSecurityGroupResponse rsp = ModifyEsVipSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEsVipSecurityGroupOutcome(rsp);
        else
            return ModifyEsVipSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyEsVipSecurityGroupOutcome(outcome.GetError());
    }
}

void EsClient::ModifyEsVipSecurityGroupAsync(const ModifyEsVipSecurityGroupRequest& request, const ModifyEsVipSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEsVipSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::ModifyEsVipSecurityGroupOutcomeCallable EsClient::ModifyEsVipSecurityGroupCallable(const ModifyEsVipSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEsVipSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyEsVipSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RestartInstanceOutcome EsClient::RestartInstance(const RestartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInstanceResponse rsp = RestartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInstanceOutcome(rsp);
        else
            return RestartInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartInstanceOutcome(outcome.GetError());
    }
}

void EsClient::RestartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RestartInstanceOutcomeCallable EsClient::RestartInstanceCallable(const RestartInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RestartKibanaOutcome EsClient::RestartKibana(const RestartKibanaRequest &request)
{
    auto outcome = MakeRequest(request, "RestartKibana");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartKibanaResponse rsp = RestartKibanaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartKibanaOutcome(rsp);
        else
            return RestartKibanaOutcome(o.GetError());
    }
    else
    {
        return RestartKibanaOutcome(outcome.GetError());
    }
}

void EsClient::RestartKibanaAsync(const RestartKibanaRequest& request, const RestartKibanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartKibana(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RestartKibanaOutcomeCallable EsClient::RestartKibanaCallable(const RestartKibanaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartKibanaOutcome()>>(
        [this, request]()
        {
            return this->RestartKibana(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RestartLogstashInstanceOutcome EsClient::RestartLogstashInstance(const RestartLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartLogstashInstanceResponse rsp = RestartLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartLogstashInstanceOutcome(rsp);
        else
            return RestartLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::RestartLogstashInstanceAsync(const RestartLogstashInstanceRequest& request, const RestartLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartLogstashInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RestartLogstashInstanceOutcomeCallable EsClient::RestartLogstashInstanceCallable(const RestartLogstashInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartLogstashInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartLogstashInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RestartNodesOutcome EsClient::RestartNodes(const RestartNodesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartNodesResponse rsp = RestartNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartNodesOutcome(rsp);
        else
            return RestartNodesOutcome(o.GetError());
    }
    else
    {
        return RestartNodesOutcome(outcome.GetError());
    }
}

void EsClient::RestartNodesAsync(const RestartNodesRequest& request, const RestartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RestartNodesOutcomeCallable EsClient::RestartNodesCallable(const RestartNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartNodesOutcome()>>(
        [this, request]()
        {
            return this->RestartNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RestoreClusterSnapshotOutcome EsClient::RestoreClusterSnapshot(const RestoreClusterSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreClusterSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreClusterSnapshotResponse rsp = RestoreClusterSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreClusterSnapshotOutcome(rsp);
        else
            return RestoreClusterSnapshotOutcome(o.GetError());
    }
    else
    {
        return RestoreClusterSnapshotOutcome(outcome.GetError());
    }
}

void EsClient::RestoreClusterSnapshotAsync(const RestoreClusterSnapshotRequest& request, const RestoreClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestoreClusterSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RestoreClusterSnapshotOutcomeCallable EsClient::RestoreClusterSnapshotCallable(const RestoreClusterSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestoreClusterSnapshotOutcome()>>(
        [this, request]()
        {
            return this->RestoreClusterSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::SaveAndDeployLogstashPipelineOutcome EsClient::SaveAndDeployLogstashPipeline(const SaveAndDeployLogstashPipelineRequest &request)
{
    auto outcome = MakeRequest(request, "SaveAndDeployLogstashPipeline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveAndDeployLogstashPipelineResponse rsp = SaveAndDeployLogstashPipelineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveAndDeployLogstashPipelineOutcome(rsp);
        else
            return SaveAndDeployLogstashPipelineOutcome(o.GetError());
    }
    else
    {
        return SaveAndDeployLogstashPipelineOutcome(outcome.GetError());
    }
}

void EsClient::SaveAndDeployLogstashPipelineAsync(const SaveAndDeployLogstashPipelineRequest& request, const SaveAndDeployLogstashPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SaveAndDeployLogstashPipeline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::SaveAndDeployLogstashPipelineOutcomeCallable EsClient::SaveAndDeployLogstashPipelineCallable(const SaveAndDeployLogstashPipelineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SaveAndDeployLogstashPipelineOutcome()>>(
        [this, request]()
        {
            return this->SaveAndDeployLogstashPipeline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::StartLogstashPipelinesOutcome EsClient::StartLogstashPipelines(const StartLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "StartLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLogstashPipelinesResponse rsp = StartLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLogstashPipelinesOutcome(rsp);
        else
            return StartLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return StartLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::StartLogstashPipelinesAsync(const StartLogstashPipelinesRequest& request, const StartLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartLogstashPipelines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::StartLogstashPipelinesOutcomeCallable EsClient::StartLogstashPipelinesCallable(const StartLogstashPipelinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartLogstashPipelinesOutcome()>>(
        [this, request]()
        {
            return this->StartLogstashPipelines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::StopLogstashPipelinesOutcome EsClient::StopLogstashPipelines(const StopLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "StopLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLogstashPipelinesResponse rsp = StopLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLogstashPipelinesOutcome(rsp);
        else
            return StopLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return StopLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::StopLogstashPipelinesAsync(const StopLogstashPipelinesRequest& request, const StopLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopLogstashPipelines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::StopLogstashPipelinesOutcomeCallable EsClient::StopLogstashPipelinesCallable(const StopLogstashPipelinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopLogstashPipelinesOutcome()>>(
        [this, request]()
        {
            return this->StopLogstashPipelines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateDiagnoseSettingsOutcome EsClient::UpdateDiagnoseSettings(const UpdateDiagnoseSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDiagnoseSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDiagnoseSettingsResponse rsp = UpdateDiagnoseSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDiagnoseSettingsOutcome(rsp);
        else
            return UpdateDiagnoseSettingsOutcome(o.GetError());
    }
    else
    {
        return UpdateDiagnoseSettingsOutcome(outcome.GetError());
    }
}

void EsClient::UpdateDiagnoseSettingsAsync(const UpdateDiagnoseSettingsRequest& request, const UpdateDiagnoseSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDiagnoseSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateDiagnoseSettingsOutcomeCallable EsClient::UpdateDiagnoseSettingsCallable(const UpdateDiagnoseSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDiagnoseSettingsOutcome()>>(
        [this, request]()
        {
            return this->UpdateDiagnoseSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateDictionariesOutcome EsClient::UpdateDictionaries(const UpdateDictionariesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDictionaries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDictionariesResponse rsp = UpdateDictionariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDictionariesOutcome(rsp);
        else
            return UpdateDictionariesOutcome(o.GetError());
    }
    else
    {
        return UpdateDictionariesOutcome(outcome.GetError());
    }
}

void EsClient::UpdateDictionariesAsync(const UpdateDictionariesRequest& request, const UpdateDictionariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDictionaries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateDictionariesOutcomeCallable EsClient::UpdateDictionariesCallable(const UpdateDictionariesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDictionariesOutcome()>>(
        [this, request]()
        {
            return this->UpdateDictionaries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateIndexOutcome EsClient::UpdateIndex(const UpdateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateIndexResponse rsp = UpdateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateIndexOutcome(rsp);
        else
            return UpdateIndexOutcome(o.GetError());
    }
    else
    {
        return UpdateIndexOutcome(outcome.GetError());
    }
}

void EsClient::UpdateIndexAsync(const UpdateIndexRequest& request, const UpdateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateIndexOutcomeCallable EsClient::UpdateIndexCallable(const UpdateIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateIndexOutcome()>>(
        [this, request]()
        {
            return this->UpdateIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateInstanceOutcome EsClient::UpdateInstance(const UpdateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateInstanceResponse rsp = UpdateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateInstanceOutcome(rsp);
        else
            return UpdateInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateInstanceOutcomeCallable EsClient::UpdateInstanceCallable(const UpdateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpdateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateJdkOutcome EsClient::UpdateJdk(const UpdateJdkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateJdk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateJdkResponse rsp = UpdateJdkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateJdkOutcome(rsp);
        else
            return UpdateJdkOutcome(o.GetError());
    }
    else
    {
        return UpdateJdkOutcome(outcome.GetError());
    }
}

void EsClient::UpdateJdkAsync(const UpdateJdkRequest& request, const UpdateJdkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateJdk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateJdkOutcomeCallable EsClient::UpdateJdkCallable(const UpdateJdkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateJdkOutcome()>>(
        [this, request]()
        {
            return this->UpdateJdk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateLogstashInstanceOutcome EsClient::UpdateLogstashInstance(const UpdateLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLogstashInstanceResponse rsp = UpdateLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLogstashInstanceOutcome(rsp);
        else
            return UpdateLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateLogstashInstanceAsync(const UpdateLogstashInstanceRequest& request, const UpdateLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateLogstashInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateLogstashInstanceOutcomeCallable EsClient::UpdateLogstashInstanceCallable(const UpdateLogstashInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateLogstashInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpdateLogstashInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateLogstashPipelineDescOutcome EsClient::UpdateLogstashPipelineDesc(const UpdateLogstashPipelineDescRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLogstashPipelineDesc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLogstashPipelineDescResponse rsp = UpdateLogstashPipelineDescResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLogstashPipelineDescOutcome(rsp);
        else
            return UpdateLogstashPipelineDescOutcome(o.GetError());
    }
    else
    {
        return UpdateLogstashPipelineDescOutcome(outcome.GetError());
    }
}

void EsClient::UpdateLogstashPipelineDescAsync(const UpdateLogstashPipelineDescRequest& request, const UpdateLogstashPipelineDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateLogstashPipelineDesc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateLogstashPipelineDescOutcomeCallable EsClient::UpdateLogstashPipelineDescCallable(const UpdateLogstashPipelineDescRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateLogstashPipelineDescOutcome()>>(
        [this, request]()
        {
            return this->UpdateLogstashPipelineDesc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdatePluginsOutcome EsClient::UpdatePlugins(const UpdatePluginsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePluginsResponse rsp = UpdatePluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePluginsOutcome(rsp);
        else
            return UpdatePluginsOutcome(o.GetError());
    }
    else
    {
        return UpdatePluginsOutcome(outcome.GetError());
    }
}

void EsClient::UpdatePluginsAsync(const UpdatePluginsRequest& request, const UpdatePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePlugins(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdatePluginsOutcomeCallable EsClient::UpdatePluginsCallable(const UpdatePluginsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePluginsOutcome()>>(
        [this, request]()
        {
            return this->UpdatePlugins(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateRequestTargetNodeTypesOutcome EsClient::UpdateRequestTargetNodeTypes(const UpdateRequestTargetNodeTypesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRequestTargetNodeTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRequestTargetNodeTypesResponse rsp = UpdateRequestTargetNodeTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRequestTargetNodeTypesOutcome(rsp);
        else
            return UpdateRequestTargetNodeTypesOutcome(o.GetError());
    }
    else
    {
        return UpdateRequestTargetNodeTypesOutcome(outcome.GetError());
    }
}

void EsClient::UpdateRequestTargetNodeTypesAsync(const UpdateRequestTargetNodeTypesRequest& request, const UpdateRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRequestTargetNodeTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateRequestTargetNodeTypesOutcomeCallable EsClient::UpdateRequestTargetNodeTypesCallable(const UpdateRequestTargetNodeTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRequestTargetNodeTypesOutcome()>>(
        [this, request]()
        {
            return this->UpdateRequestTargetNodeTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateServerlessInstanceOutcome EsClient::UpdateServerlessInstance(const UpdateServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServerlessInstanceResponse rsp = UpdateServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServerlessInstanceOutcome(rsp);
        else
            return UpdateServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateServerlessInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateServerlessInstanceAsync(const UpdateServerlessInstanceRequest& request, const UpdateServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateServerlessInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateServerlessInstanceOutcomeCallable EsClient::UpdateServerlessInstanceCallable(const UpdateServerlessInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateServerlessInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpdateServerlessInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpdateServerlessSpaceOutcome EsClient::UpdateServerlessSpace(const UpdateServerlessSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateServerlessSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServerlessSpaceResponse rsp = UpdateServerlessSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServerlessSpaceOutcome(rsp);
        else
            return UpdateServerlessSpaceOutcome(o.GetError());
    }
    else
    {
        return UpdateServerlessSpaceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateServerlessSpaceAsync(const UpdateServerlessSpaceRequest& request, const UpdateServerlessSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateServerlessSpace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpdateServerlessSpaceOutcomeCallable EsClient::UpdateServerlessSpaceCallable(const UpdateServerlessSpaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateServerlessSpaceOutcome()>>(
        [this, request]()
        {
            return this->UpdateServerlessSpace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::UpgradeInstanceOutcome EsClient::UpgradeInstance(const UpgradeInstanceRequest &request)
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

void EsClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpgradeInstanceOutcomeCallable EsClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
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

EsClient::UpgradeLicenseOutcome EsClient::UpgradeLicense(const UpgradeLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeLicenseResponse rsp = UpgradeLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeLicenseOutcome(rsp);
        else
            return UpgradeLicenseOutcome(o.GetError());
    }
    else
    {
        return UpgradeLicenseOutcome(outcome.GetError());
    }
}

void EsClient::UpgradeLicenseAsync(const UpgradeLicenseRequest& request, const UpgradeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::UpgradeLicenseOutcomeCallable EsClient::UpgradeLicenseCallable(const UpgradeLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeLicenseOutcome()>>(
        [this, request]()
        {
            return this->UpgradeLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

