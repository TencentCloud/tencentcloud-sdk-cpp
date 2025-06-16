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

#include <tencentcloud/goosefs/v20220519/GoosefsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Goosefs::V20220519;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-05-19";
    const string ENDPOINT = "goosefs.tencentcloudapi.com";
}

GoosefsClient::GoosefsClient(const Credential &credential, const string &region) :
    GoosefsClient(credential, region, ClientProfile())
{
}

GoosefsClient::GoosefsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GoosefsClient::AddCrossVpcSubnetSupportForClientNodeOutcome GoosefsClient::AddCrossVpcSubnetSupportForClientNode(const AddCrossVpcSubnetSupportForClientNodeRequest &request)
{
    auto outcome = MakeRequest(request, "AddCrossVpcSubnetSupportForClientNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCrossVpcSubnetSupportForClientNodeResponse rsp = AddCrossVpcSubnetSupportForClientNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCrossVpcSubnetSupportForClientNodeOutcome(rsp);
        else
            return AddCrossVpcSubnetSupportForClientNodeOutcome(o.GetError());
    }
    else
    {
        return AddCrossVpcSubnetSupportForClientNodeOutcome(outcome.GetError());
    }
}

void GoosefsClient::AddCrossVpcSubnetSupportForClientNodeAsync(const AddCrossVpcSubnetSupportForClientNodeRequest& request, const AddCrossVpcSubnetSupportForClientNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCrossVpcSubnetSupportForClientNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::AddCrossVpcSubnetSupportForClientNodeOutcomeCallable GoosefsClient::AddCrossVpcSubnetSupportForClientNodeCallable(const AddCrossVpcSubnetSupportForClientNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCrossVpcSubnetSupportForClientNodeOutcome()>>(
        [this, request]()
        {
            return this->AddCrossVpcSubnetSupportForClientNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::AttachFileSystemBucketOutcome GoosefsClient::AttachFileSystemBucket(const AttachFileSystemBucketRequest &request)
{
    auto outcome = MakeRequest(request, "AttachFileSystemBucket");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachFileSystemBucketResponse rsp = AttachFileSystemBucketResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachFileSystemBucketOutcome(rsp);
        else
            return AttachFileSystemBucketOutcome(o.GetError());
    }
    else
    {
        return AttachFileSystemBucketOutcome(outcome.GetError());
    }
}

void GoosefsClient::AttachFileSystemBucketAsync(const AttachFileSystemBucketRequest& request, const AttachFileSystemBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachFileSystemBucket(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::AttachFileSystemBucketOutcomeCallable GoosefsClient::AttachFileSystemBucketCallable(const AttachFileSystemBucketRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachFileSystemBucketOutcome()>>(
        [this, request]()
        {
            return this->AttachFileSystemBucket(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::BatchAddClientNodesOutcome GoosefsClient::BatchAddClientNodes(const BatchAddClientNodesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchAddClientNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchAddClientNodesResponse rsp = BatchAddClientNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchAddClientNodesOutcome(rsp);
        else
            return BatchAddClientNodesOutcome(o.GetError());
    }
    else
    {
        return BatchAddClientNodesOutcome(outcome.GetError());
    }
}

void GoosefsClient::BatchAddClientNodesAsync(const BatchAddClientNodesRequest& request, const BatchAddClientNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchAddClientNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::BatchAddClientNodesOutcomeCallable GoosefsClient::BatchAddClientNodesCallable(const BatchAddClientNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchAddClientNodesOutcome()>>(
        [this, request]()
        {
            return this->BatchAddClientNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::BatchDeleteClientNodesOutcome GoosefsClient::BatchDeleteClientNodes(const BatchDeleteClientNodesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteClientNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteClientNodesResponse rsp = BatchDeleteClientNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteClientNodesOutcome(rsp);
        else
            return BatchDeleteClientNodesOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteClientNodesOutcome(outcome.GetError());
    }
}

void GoosefsClient::BatchDeleteClientNodesAsync(const BatchDeleteClientNodesRequest& request, const BatchDeleteClientNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteClientNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::BatchDeleteClientNodesOutcomeCallable GoosefsClient::BatchDeleteClientNodesCallable(const BatchDeleteClientNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteClientNodesOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteClientNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::BuildClientNodeMountCommandOutcome GoosefsClient::BuildClientNodeMountCommand(const BuildClientNodeMountCommandRequest &request)
{
    auto outcome = MakeRequest(request, "BuildClientNodeMountCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BuildClientNodeMountCommandResponse rsp = BuildClientNodeMountCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BuildClientNodeMountCommandOutcome(rsp);
        else
            return BuildClientNodeMountCommandOutcome(o.GetError());
    }
    else
    {
        return BuildClientNodeMountCommandOutcome(outcome.GetError());
    }
}

void GoosefsClient::BuildClientNodeMountCommandAsync(const BuildClientNodeMountCommandRequest& request, const BuildClientNodeMountCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BuildClientNodeMountCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::BuildClientNodeMountCommandOutcomeCallable GoosefsClient::BuildClientNodeMountCommandCallable(const BuildClientNodeMountCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BuildClientNodeMountCommandOutcome()>>(
        [this, request]()
        {
            return this->BuildClientNodeMountCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::CreateDataRepositoryTaskOutcome GoosefsClient::CreateDataRepositoryTask(const CreateDataRepositoryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataRepositoryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataRepositoryTaskResponse rsp = CreateDataRepositoryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataRepositoryTaskOutcome(rsp);
        else
            return CreateDataRepositoryTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDataRepositoryTaskOutcome(outcome.GetError());
    }
}

void GoosefsClient::CreateDataRepositoryTaskAsync(const CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataRepositoryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::CreateDataRepositoryTaskOutcomeCallable GoosefsClient::CreateDataRepositoryTaskCallable(const CreateDataRepositoryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataRepositoryTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDataRepositoryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::CreateFileSystemOutcome GoosefsClient::CreateFileSystem(const CreateFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileSystemResponse rsp = CreateFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileSystemOutcome(rsp);
        else
            return CreateFileSystemOutcome(o.GetError());
    }
    else
    {
        return CreateFileSystemOutcome(outcome.GetError());
    }
}

void GoosefsClient::CreateFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFileSystem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::CreateFileSystemOutcomeCallable GoosefsClient::CreateFileSystemCallable(const CreateFileSystemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFileSystemOutcome()>>(
        [this, request]()
        {
            return this->CreateFileSystem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::CreateFilesetOutcome GoosefsClient::CreateFileset(const CreateFilesetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFilesetResponse rsp = CreateFilesetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFilesetOutcome(rsp);
        else
            return CreateFilesetOutcome(o.GetError());
    }
    else
    {
        return CreateFilesetOutcome(outcome.GetError());
    }
}

void GoosefsClient::CreateFilesetAsync(const CreateFilesetRequest& request, const CreateFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFileset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::CreateFilesetOutcomeCallable GoosefsClient::CreateFilesetCallable(const CreateFilesetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFilesetOutcome()>>(
        [this, request]()
        {
            return this->CreateFileset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DeleteCrossVpcSubnetSupportForClientNodeOutcome GoosefsClient::DeleteCrossVpcSubnetSupportForClientNode(const DeleteCrossVpcSubnetSupportForClientNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCrossVpcSubnetSupportForClientNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCrossVpcSubnetSupportForClientNodeResponse rsp = DeleteCrossVpcSubnetSupportForClientNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCrossVpcSubnetSupportForClientNodeOutcome(rsp);
        else
            return DeleteCrossVpcSubnetSupportForClientNodeOutcome(o.GetError());
    }
    else
    {
        return DeleteCrossVpcSubnetSupportForClientNodeOutcome(outcome.GetError());
    }
}

void GoosefsClient::DeleteCrossVpcSubnetSupportForClientNodeAsync(const DeleteCrossVpcSubnetSupportForClientNodeRequest& request, const DeleteCrossVpcSubnetSupportForClientNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCrossVpcSubnetSupportForClientNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DeleteCrossVpcSubnetSupportForClientNodeOutcomeCallable GoosefsClient::DeleteCrossVpcSubnetSupportForClientNodeCallable(const DeleteCrossVpcSubnetSupportForClientNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCrossVpcSubnetSupportForClientNodeOutcome()>>(
        [this, request]()
        {
            return this->DeleteCrossVpcSubnetSupportForClientNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DeleteFileSystemOutcome GoosefsClient::DeleteFileSystem(const DeleteFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFileSystemResponse rsp = DeleteFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFileSystemOutcome(rsp);
        else
            return DeleteFileSystemOutcome(o.GetError());
    }
    else
    {
        return DeleteFileSystemOutcome(outcome.GetError());
    }
}

void GoosefsClient::DeleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFileSystem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DeleteFileSystemOutcomeCallable GoosefsClient::DeleteFileSystemCallable(const DeleteFileSystemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFileSystemOutcome()>>(
        [this, request]()
        {
            return this->DeleteFileSystem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DeleteFilesetOutcome GoosefsClient::DeleteFileset(const DeleteFilesetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFileset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFilesetResponse rsp = DeleteFilesetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFilesetOutcome(rsp);
        else
            return DeleteFilesetOutcome(o.GetError());
    }
    else
    {
        return DeleteFilesetOutcome(outcome.GetError());
    }
}

void GoosefsClient::DeleteFilesetAsync(const DeleteFilesetRequest& request, const DeleteFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFileset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DeleteFilesetOutcomeCallable GoosefsClient::DeleteFilesetCallable(const DeleteFilesetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFilesetOutcome()>>(
        [this, request]()
        {
            return this->DeleteFileset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeClientNodesOutcome GoosefsClient::DescribeClientNodes(const DescribeClientNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientNodesResponse rsp = DescribeClientNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientNodesOutcome(rsp);
        else
            return DescribeClientNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeClientNodesOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeClientNodesAsync(const DescribeClientNodesRequest& request, const DescribeClientNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeClientNodesOutcomeCallable GoosefsClient::DescribeClientNodesCallable(const DescribeClientNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeClusterClientTokenOutcome GoosefsClient::DescribeClusterClientToken(const DescribeClusterClientTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterClientToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterClientTokenResponse rsp = DescribeClusterClientTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterClientTokenOutcome(rsp);
        else
            return DescribeClusterClientTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterClientTokenOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeClusterClientTokenAsync(const DescribeClusterClientTokenRequest& request, const DescribeClusterClientTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterClientToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeClusterClientTokenOutcomeCallable GoosefsClient::DescribeClusterClientTokenCallable(const DescribeClusterClientTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterClientTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterClientToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeClusterRoleTokenOutcome GoosefsClient::DescribeClusterRoleToken(const DescribeClusterRoleTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRoleToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRoleTokenResponse rsp = DescribeClusterRoleTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRoleTokenOutcome(rsp);
        else
            return DescribeClusterRoleTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRoleTokenOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeClusterRoleTokenAsync(const DescribeClusterRoleTokenRequest& request, const DescribeClusterRoleTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterRoleToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeClusterRoleTokenOutcomeCallable GoosefsClient::DescribeClusterRoleTokenCallable(const DescribeClusterRoleTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterRoleTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterRoleToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeClusterRolesOutcome GoosefsClient::DescribeClusterRoles(const DescribeClusterRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterRolesResponse rsp = DescribeClusterRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterRolesOutcome(rsp);
        else
            return DescribeClusterRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterRolesOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeClusterRolesAsync(const DescribeClusterRolesRequest& request, const DescribeClusterRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeClusterRolesOutcomeCallable GoosefsClient::DescribeClusterRolesCallable(const DescribeClusterRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeDataRepositoryTaskStatusOutcome GoosefsClient::DescribeDataRepositoryTaskStatus(const DescribeDataRepositoryTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataRepositoryTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataRepositoryTaskStatusResponse rsp = DescribeDataRepositoryTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataRepositoryTaskStatusOutcome(rsp);
        else
            return DescribeDataRepositoryTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDataRepositoryTaskStatusOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeDataRepositoryTaskStatusAsync(const DescribeDataRepositoryTaskStatusRequest& request, const DescribeDataRepositoryTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataRepositoryTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeDataRepositoryTaskStatusOutcomeCallable GoosefsClient::DescribeDataRepositoryTaskStatusCallable(const DescribeDataRepositoryTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataRepositoryTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataRepositoryTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeFileSystemBucketsOutcome GoosefsClient::DescribeFileSystemBuckets(const DescribeFileSystemBucketsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileSystemBuckets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileSystemBucketsResponse rsp = DescribeFileSystemBucketsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileSystemBucketsOutcome(rsp);
        else
            return DescribeFileSystemBucketsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileSystemBucketsOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeFileSystemBucketsAsync(const DescribeFileSystemBucketsRequest& request, const DescribeFileSystemBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileSystemBuckets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeFileSystemBucketsOutcomeCallable GoosefsClient::DescribeFileSystemBucketsCallable(const DescribeFileSystemBucketsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileSystemBucketsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileSystemBuckets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeFileSystemsOutcome GoosefsClient::DescribeFileSystems(const DescribeFileSystemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileSystems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileSystemsResponse rsp = DescribeFileSystemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileSystemsOutcome(rsp);
        else
            return DescribeFileSystemsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileSystemsOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileSystems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeFileSystemsOutcomeCallable GoosefsClient::DescribeFileSystemsCallable(const DescribeFileSystemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileSystemsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileSystems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeFilesetGeneralConfigOutcome GoosefsClient::DescribeFilesetGeneralConfig(const DescribeFilesetGeneralConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFilesetGeneralConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFilesetGeneralConfigResponse rsp = DescribeFilesetGeneralConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFilesetGeneralConfigOutcome(rsp);
        else
            return DescribeFilesetGeneralConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeFilesetGeneralConfigOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeFilesetGeneralConfigAsync(const DescribeFilesetGeneralConfigRequest& request, const DescribeFilesetGeneralConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFilesetGeneralConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeFilesetGeneralConfigOutcomeCallable GoosefsClient::DescribeFilesetGeneralConfigCallable(const DescribeFilesetGeneralConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFilesetGeneralConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeFilesetGeneralConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DescribeFilesetsOutcome GoosefsClient::DescribeFilesets(const DescribeFilesetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFilesets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFilesetsResponse rsp = DescribeFilesetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFilesetsOutcome(rsp);
        else
            return DescribeFilesetsOutcome(o.GetError());
    }
    else
    {
        return DescribeFilesetsOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeFilesetsAsync(const DescribeFilesetsRequest& request, const DescribeFilesetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFilesets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DescribeFilesetsOutcomeCallable GoosefsClient::DescribeFilesetsCallable(const DescribeFilesetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFilesetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFilesets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::DetachFileSystemBucketOutcome GoosefsClient::DetachFileSystemBucket(const DetachFileSystemBucketRequest &request)
{
    auto outcome = MakeRequest(request, "DetachFileSystemBucket");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachFileSystemBucketResponse rsp = DetachFileSystemBucketResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachFileSystemBucketOutcome(rsp);
        else
            return DetachFileSystemBucketOutcome(o.GetError());
    }
    else
    {
        return DetachFileSystemBucketOutcome(outcome.GetError());
    }
}

void GoosefsClient::DetachFileSystemBucketAsync(const DetachFileSystemBucketRequest& request, const DetachFileSystemBucketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachFileSystemBucket(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::DetachFileSystemBucketOutcomeCallable GoosefsClient::DetachFileSystemBucketCallable(const DetachFileSystemBucketRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachFileSystemBucketOutcome()>>(
        [this, request]()
        {
            return this->DetachFileSystemBucket(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::ExpandCapacityOutcome GoosefsClient::ExpandCapacity(const ExpandCapacityRequest &request)
{
    auto outcome = MakeRequest(request, "ExpandCapacity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExpandCapacityResponse rsp = ExpandCapacityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExpandCapacityOutcome(rsp);
        else
            return ExpandCapacityOutcome(o.GetError());
    }
    else
    {
        return ExpandCapacityOutcome(outcome.GetError());
    }
}

void GoosefsClient::ExpandCapacityAsync(const ExpandCapacityRequest& request, const ExpandCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExpandCapacity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::ExpandCapacityOutcomeCallable GoosefsClient::ExpandCapacityCallable(const ExpandCapacityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExpandCapacityOutcome()>>(
        [this, request]()
        {
            return this->ExpandCapacity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::ModifyDataRepositoryBandwidthOutcome GoosefsClient::ModifyDataRepositoryBandwidth(const ModifyDataRepositoryBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataRepositoryBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataRepositoryBandwidthResponse rsp = ModifyDataRepositoryBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataRepositoryBandwidthOutcome(rsp);
        else
            return ModifyDataRepositoryBandwidthOutcome(o.GetError());
    }
    else
    {
        return ModifyDataRepositoryBandwidthOutcome(outcome.GetError());
    }
}

void GoosefsClient::ModifyDataRepositoryBandwidthAsync(const ModifyDataRepositoryBandwidthRequest& request, const ModifyDataRepositoryBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDataRepositoryBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::ModifyDataRepositoryBandwidthOutcomeCallable GoosefsClient::ModifyDataRepositoryBandwidthCallable(const ModifyDataRepositoryBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDataRepositoryBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ModifyDataRepositoryBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::QueryCrossVpcSubnetSupportForClientNodeOutcome GoosefsClient::QueryCrossVpcSubnetSupportForClientNode(const QueryCrossVpcSubnetSupportForClientNodeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCrossVpcSubnetSupportForClientNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCrossVpcSubnetSupportForClientNodeResponse rsp = QueryCrossVpcSubnetSupportForClientNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCrossVpcSubnetSupportForClientNodeOutcome(rsp);
        else
            return QueryCrossVpcSubnetSupportForClientNodeOutcome(o.GetError());
    }
    else
    {
        return QueryCrossVpcSubnetSupportForClientNodeOutcome(outcome.GetError());
    }
}

void GoosefsClient::QueryCrossVpcSubnetSupportForClientNodeAsync(const QueryCrossVpcSubnetSupportForClientNodeRequest& request, const QueryCrossVpcSubnetSupportForClientNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCrossVpcSubnetSupportForClientNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::QueryCrossVpcSubnetSupportForClientNodeOutcomeCallable GoosefsClient::QueryCrossVpcSubnetSupportForClientNodeCallable(const QueryCrossVpcSubnetSupportForClientNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCrossVpcSubnetSupportForClientNodeOutcome()>>(
        [this, request]()
        {
            return this->QueryCrossVpcSubnetSupportForClientNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::QueryDataRepositoryBandwidthOutcome GoosefsClient::QueryDataRepositoryBandwidth(const QueryDataRepositoryBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDataRepositoryBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDataRepositoryBandwidthResponse rsp = QueryDataRepositoryBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDataRepositoryBandwidthOutcome(rsp);
        else
            return QueryDataRepositoryBandwidthOutcome(o.GetError());
    }
    else
    {
        return QueryDataRepositoryBandwidthOutcome(outcome.GetError());
    }
}

void GoosefsClient::QueryDataRepositoryBandwidthAsync(const QueryDataRepositoryBandwidthRequest& request, const QueryDataRepositoryBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryDataRepositoryBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::QueryDataRepositoryBandwidthOutcomeCallable GoosefsClient::QueryDataRepositoryBandwidthCallable(const QueryDataRepositoryBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryDataRepositoryBandwidthOutcome()>>(
        [this, request]()
        {
            return this->QueryDataRepositoryBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::UpdateFilesetOutcome GoosefsClient::UpdateFileset(const UpdateFilesetRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFileset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFilesetResponse rsp = UpdateFilesetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFilesetOutcome(rsp);
        else
            return UpdateFilesetOutcome(o.GetError());
    }
    else
    {
        return UpdateFilesetOutcome(outcome.GetError());
    }
}

void GoosefsClient::UpdateFilesetAsync(const UpdateFilesetRequest& request, const UpdateFilesetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFileset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::UpdateFilesetOutcomeCallable GoosefsClient::UpdateFilesetCallable(const UpdateFilesetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFilesetOutcome()>>(
        [this, request]()
        {
            return this->UpdateFileset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GoosefsClient::UpdateFilesetGeneralConfigOutcome GoosefsClient::UpdateFilesetGeneralConfig(const UpdateFilesetGeneralConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFilesetGeneralConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFilesetGeneralConfigResponse rsp = UpdateFilesetGeneralConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFilesetGeneralConfigOutcome(rsp);
        else
            return UpdateFilesetGeneralConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateFilesetGeneralConfigOutcome(outcome.GetError());
    }
}

void GoosefsClient::UpdateFilesetGeneralConfigAsync(const UpdateFilesetGeneralConfigRequest& request, const UpdateFilesetGeneralConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFilesetGeneralConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GoosefsClient::UpdateFilesetGeneralConfigOutcomeCallable GoosefsClient::UpdateFilesetGeneralConfigCallable(const UpdateFilesetGeneralConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFilesetGeneralConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateFilesetGeneralConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

