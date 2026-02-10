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
    using Req = const AddCrossVpcSubnetSupportForClientNodeRequest&;
    using Resp = AddCrossVpcSubnetSupportForClientNodeResponse;

    DoRequestAsync<Req, Resp>(
        "AddCrossVpcSubnetSupportForClientNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::AddCrossVpcSubnetSupportForClientNodeOutcomeCallable GoosefsClient::AddCrossVpcSubnetSupportForClientNodeCallable(const AddCrossVpcSubnetSupportForClientNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCrossVpcSubnetSupportForClientNodeOutcome>>();
    AddCrossVpcSubnetSupportForClientNodeAsync(
    request,
    [prom](
        const GoosefsClient*,
        const AddCrossVpcSubnetSupportForClientNodeRequest&,
        AddCrossVpcSubnetSupportForClientNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AttachFileSystemBucketRequest&;
    using Resp = AttachFileSystemBucketResponse;

    DoRequestAsync<Req, Resp>(
        "AttachFileSystemBucket", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::AttachFileSystemBucketOutcomeCallable GoosefsClient::AttachFileSystemBucketCallable(const AttachFileSystemBucketRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachFileSystemBucketOutcome>>();
    AttachFileSystemBucketAsync(
    request,
    [prom](
        const GoosefsClient*,
        const AttachFileSystemBucketRequest&,
        AttachFileSystemBucketOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BatchAddClientNodesRequest&;
    using Resp = BatchAddClientNodesResponse;

    DoRequestAsync<Req, Resp>(
        "BatchAddClientNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::BatchAddClientNodesOutcomeCallable GoosefsClient::BatchAddClientNodesCallable(const BatchAddClientNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchAddClientNodesOutcome>>();
    BatchAddClientNodesAsync(
    request,
    [prom](
        const GoosefsClient*,
        const BatchAddClientNodesRequest&,
        BatchAddClientNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BatchDeleteClientNodesRequest&;
    using Resp = BatchDeleteClientNodesResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteClientNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::BatchDeleteClientNodesOutcomeCallable GoosefsClient::BatchDeleteClientNodesCallable(const BatchDeleteClientNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteClientNodesOutcome>>();
    BatchDeleteClientNodesAsync(
    request,
    [prom](
        const GoosefsClient*,
        const BatchDeleteClientNodesRequest&,
        BatchDeleteClientNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BuildClientNodeMountCommandRequest&;
    using Resp = BuildClientNodeMountCommandResponse;

    DoRequestAsync<Req, Resp>(
        "BuildClientNodeMountCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::BuildClientNodeMountCommandOutcomeCallable GoosefsClient::BuildClientNodeMountCommandCallable(const BuildClientNodeMountCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<BuildClientNodeMountCommandOutcome>>();
    BuildClientNodeMountCommandAsync(
    request,
    [prom](
        const GoosefsClient*,
        const BuildClientNodeMountCommandRequest&,
        BuildClientNodeMountCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GoosefsClient::CancelLoadTaskOutcome GoosefsClient::CancelLoadTask(const CancelLoadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelLoadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelLoadTaskResponse rsp = CancelLoadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelLoadTaskOutcome(rsp);
        else
            return CancelLoadTaskOutcome(o.GetError());
    }
    else
    {
        return CancelLoadTaskOutcome(outcome.GetError());
    }
}

void GoosefsClient::CancelLoadTaskAsync(const CancelLoadTaskRequest& request, const CancelLoadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelLoadTaskRequest&;
    using Resp = CancelLoadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelLoadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::CancelLoadTaskOutcomeCallable GoosefsClient::CancelLoadTaskCallable(const CancelLoadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelLoadTaskOutcome>>();
    CancelLoadTaskAsync(
    request,
    [prom](
        const GoosefsClient*,
        const CancelLoadTaskRequest&,
        CancelLoadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDataRepositoryTaskRequest&;
    using Resp = CreateDataRepositoryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataRepositoryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::CreateDataRepositoryTaskOutcomeCallable GoosefsClient::CreateDataRepositoryTaskCallable(const CreateDataRepositoryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataRepositoryTaskOutcome>>();
    CreateDataRepositoryTaskAsync(
    request,
    [prom](
        const GoosefsClient*,
        const CreateDataRepositoryTaskRequest&,
        CreateDataRepositoryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateFileSystemRequest&;
    using Resp = CreateFileSystemResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFileSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::CreateFileSystemOutcomeCallable GoosefsClient::CreateFileSystemCallable(const CreateFileSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileSystemOutcome>>();
    CreateFileSystemAsync(
    request,
    [prom](
        const GoosefsClient*,
        const CreateFileSystemRequest&,
        CreateFileSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateFilesetRequest&;
    using Resp = CreateFilesetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFileset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::CreateFilesetOutcomeCallable GoosefsClient::CreateFilesetCallable(const CreateFilesetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFilesetOutcome>>();
    CreateFilesetAsync(
    request,
    [prom](
        const GoosefsClient*,
        const CreateFilesetRequest&,
        CreateFilesetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GoosefsClient::CreateLoadTaskOutcome GoosefsClient::CreateLoadTask(const CreateLoadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadTaskResponse rsp = CreateLoadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadTaskOutcome(rsp);
        else
            return CreateLoadTaskOutcome(o.GetError());
    }
    else
    {
        return CreateLoadTaskOutcome(outcome.GetError());
    }
}

void GoosefsClient::CreateLoadTaskAsync(const CreateLoadTaskRequest& request, const CreateLoadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLoadTaskRequest&;
    using Resp = CreateLoadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLoadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::CreateLoadTaskOutcomeCallable GoosefsClient::CreateLoadTaskCallable(const CreateLoadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoadTaskOutcome>>();
    CreateLoadTaskAsync(
    request,
    [prom](
        const GoosefsClient*,
        const CreateLoadTaskRequest&,
        CreateLoadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCrossVpcSubnetSupportForClientNodeRequest&;
    using Resp = DeleteCrossVpcSubnetSupportForClientNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCrossVpcSubnetSupportForClientNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DeleteCrossVpcSubnetSupportForClientNodeOutcomeCallable GoosefsClient::DeleteCrossVpcSubnetSupportForClientNodeCallable(const DeleteCrossVpcSubnetSupportForClientNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCrossVpcSubnetSupportForClientNodeOutcome>>();
    DeleteCrossVpcSubnetSupportForClientNodeAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DeleteCrossVpcSubnetSupportForClientNodeRequest&,
        DeleteCrossVpcSubnetSupportForClientNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteFileSystemRequest&;
    using Resp = DeleteFileSystemResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFileSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DeleteFileSystemOutcomeCallable GoosefsClient::DeleteFileSystemCallable(const DeleteFileSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFileSystemOutcome>>();
    DeleteFileSystemAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DeleteFileSystemRequest&,
        DeleteFileSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteFilesetRequest&;
    using Resp = DeleteFilesetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFileset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DeleteFilesetOutcomeCallable GoosefsClient::DeleteFilesetCallable(const DeleteFilesetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFilesetOutcome>>();
    DeleteFilesetAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DeleteFilesetRequest&,
        DeleteFilesetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeClientNodesRequest&;
    using Resp = DescribeClientNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DescribeClientNodesOutcomeCallable GoosefsClient::DescribeClientNodesCallable(const DescribeClientNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientNodesOutcome>>();
    DescribeClientNodesAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DescribeClientNodesRequest&,
        DescribeClientNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeClusterClientTokenRequest&;
    using Resp = DescribeClusterClientTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterClientToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DescribeClusterClientTokenOutcomeCallable GoosefsClient::DescribeClusterClientTokenCallable(const DescribeClusterClientTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterClientTokenOutcome>>();
    DescribeClusterClientTokenAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DescribeClusterClientTokenRequest&,
        DescribeClusterClientTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeClusterRoleTokenRequest&;
    using Resp = DescribeClusterRoleTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterRoleToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DescribeClusterRoleTokenOutcomeCallable GoosefsClient::DescribeClusterRoleTokenCallable(const DescribeClusterRoleTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterRoleTokenOutcome>>();
    DescribeClusterRoleTokenAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DescribeClusterRoleTokenRequest&,
        DescribeClusterRoleTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDataRepositoryTaskStatusRequest&;
    using Resp = DescribeDataRepositoryTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataRepositoryTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DescribeDataRepositoryTaskStatusOutcomeCallable GoosefsClient::DescribeDataRepositoryTaskStatusCallable(const DescribeDataRepositoryTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataRepositoryTaskStatusOutcome>>();
    DescribeDataRepositoryTaskStatusAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DescribeDataRepositoryTaskStatusRequest&,
        DescribeDataRepositoryTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFileSystemBucketsRequest&;
    using Resp = DescribeFileSystemBucketsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileSystemBuckets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DescribeFileSystemBucketsOutcomeCallable GoosefsClient::DescribeFileSystemBucketsCallable(const DescribeFileSystemBucketsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileSystemBucketsOutcome>>();
    DescribeFileSystemBucketsAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DescribeFileSystemBucketsRequest&,
        DescribeFileSystemBucketsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFileSystemsRequest&;
    using Resp = DescribeFileSystemsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileSystems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DescribeFileSystemsOutcomeCallable GoosefsClient::DescribeFileSystemsCallable(const DescribeFileSystemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileSystemsOutcome>>();
    DescribeFileSystemsAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DescribeFileSystemsRequest&,
        DescribeFileSystemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFilesetGeneralConfigRequest&;
    using Resp = DescribeFilesetGeneralConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFilesetGeneralConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DescribeFilesetGeneralConfigOutcomeCallable GoosefsClient::DescribeFilesetGeneralConfigCallable(const DescribeFilesetGeneralConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFilesetGeneralConfigOutcome>>();
    DescribeFilesetGeneralConfigAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DescribeFilesetGeneralConfigRequest&,
        DescribeFilesetGeneralConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFilesetsRequest&;
    using Resp = DescribeFilesetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFilesets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DescribeFilesetsOutcomeCallable GoosefsClient::DescribeFilesetsCallable(const DescribeFilesetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFilesetsOutcome>>();
    DescribeFilesetsAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DescribeFilesetsRequest&,
        DescribeFilesetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GoosefsClient::DescribeLoadTaskOutcome GoosefsClient::DescribeLoadTask(const DescribeLoadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadTaskResponse rsp = DescribeLoadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadTaskOutcome(rsp);
        else
            return DescribeLoadTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadTaskOutcome(outcome.GetError());
    }
}

void GoosefsClient::DescribeLoadTaskAsync(const DescribeLoadTaskRequest& request, const DescribeLoadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadTaskRequest&;
    using Resp = DescribeLoadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DescribeLoadTaskOutcomeCallable GoosefsClient::DescribeLoadTaskCallable(const DescribeLoadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadTaskOutcome>>();
    DescribeLoadTaskAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DescribeLoadTaskRequest&,
        DescribeLoadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DetachFileSystemBucketRequest&;
    using Resp = DetachFileSystemBucketResponse;

    DoRequestAsync<Req, Resp>(
        "DetachFileSystemBucket", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::DetachFileSystemBucketOutcomeCallable GoosefsClient::DetachFileSystemBucketCallable(const DetachFileSystemBucketRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachFileSystemBucketOutcome>>();
    DetachFileSystemBucketAsync(
    request,
    [prom](
        const GoosefsClient*,
        const DetachFileSystemBucketRequest&,
        DetachFileSystemBucketOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExpandCapacityRequest&;
    using Resp = ExpandCapacityResponse;

    DoRequestAsync<Req, Resp>(
        "ExpandCapacity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::ExpandCapacityOutcomeCallable GoosefsClient::ExpandCapacityCallable(const ExpandCapacityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExpandCapacityOutcome>>();
    ExpandCapacityAsync(
    request,
    [prom](
        const GoosefsClient*,
        const ExpandCapacityRequest&,
        ExpandCapacityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GoosefsClient::ListLoadTasksOutcome GoosefsClient::ListLoadTasks(const ListLoadTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListLoadTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLoadTasksResponse rsp = ListLoadTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLoadTasksOutcome(rsp);
        else
            return ListLoadTasksOutcome(o.GetError());
    }
    else
    {
        return ListLoadTasksOutcome(outcome.GetError());
    }
}

void GoosefsClient::ListLoadTasksAsync(const ListLoadTasksRequest& request, const ListLoadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListLoadTasksRequest&;
    using Resp = ListLoadTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ListLoadTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::ListLoadTasksOutcomeCallable GoosefsClient::ListLoadTasksCallable(const ListLoadTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListLoadTasksOutcome>>();
    ListLoadTasksAsync(
    request,
    [prom](
        const GoosefsClient*,
        const ListLoadTasksRequest&,
        ListLoadTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDataRepositoryBandwidthRequest&;
    using Resp = ModifyDataRepositoryBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDataRepositoryBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::ModifyDataRepositoryBandwidthOutcomeCallable GoosefsClient::ModifyDataRepositoryBandwidthCallable(const ModifyDataRepositoryBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDataRepositoryBandwidthOutcome>>();
    ModifyDataRepositoryBandwidthAsync(
    request,
    [prom](
        const GoosefsClient*,
        const ModifyDataRepositoryBandwidthRequest&,
        ModifyDataRepositoryBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryCrossVpcSubnetSupportForClientNodeRequest&;
    using Resp = QueryCrossVpcSubnetSupportForClientNodeResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCrossVpcSubnetSupportForClientNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::QueryCrossVpcSubnetSupportForClientNodeOutcomeCallable GoosefsClient::QueryCrossVpcSubnetSupportForClientNodeCallable(const QueryCrossVpcSubnetSupportForClientNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCrossVpcSubnetSupportForClientNodeOutcome>>();
    QueryCrossVpcSubnetSupportForClientNodeAsync(
    request,
    [prom](
        const GoosefsClient*,
        const QueryCrossVpcSubnetSupportForClientNodeRequest&,
        QueryCrossVpcSubnetSupportForClientNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const QueryDataRepositoryBandwidthRequest&;
    using Resp = QueryDataRepositoryBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "QueryDataRepositoryBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::QueryDataRepositoryBandwidthOutcomeCallable GoosefsClient::QueryDataRepositoryBandwidthCallable(const QueryDataRepositoryBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryDataRepositoryBandwidthOutcome>>();
    QueryDataRepositoryBandwidthAsync(
    request,
    [prom](
        const GoosefsClient*,
        const QueryDataRepositoryBandwidthRequest&,
        QueryDataRepositoryBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateFilesetRequest&;
    using Resp = UpdateFilesetResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFileset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::UpdateFilesetOutcomeCallable GoosefsClient::UpdateFilesetCallable(const UpdateFilesetRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFilesetOutcome>>();
    UpdateFilesetAsync(
    request,
    [prom](
        const GoosefsClient*,
        const UpdateFilesetRequest&,
        UpdateFilesetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateFilesetGeneralConfigRequest&;
    using Resp = UpdateFilesetGeneralConfigResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFilesetGeneralConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::UpdateFilesetGeneralConfigOutcomeCallable GoosefsClient::UpdateFilesetGeneralConfigCallable(const UpdateFilesetGeneralConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFilesetGeneralConfigOutcome>>();
    UpdateFilesetGeneralConfigAsync(
    request,
    [prom](
        const GoosefsClient*,
        const UpdateFilesetGeneralConfigRequest&,
        UpdateFilesetGeneralConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GoosefsClient::UpdateLoadTaskPriorityOutcome GoosefsClient::UpdateLoadTaskPriority(const UpdateLoadTaskPriorityRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLoadTaskPriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLoadTaskPriorityResponse rsp = UpdateLoadTaskPriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLoadTaskPriorityOutcome(rsp);
        else
            return UpdateLoadTaskPriorityOutcome(o.GetError());
    }
    else
    {
        return UpdateLoadTaskPriorityOutcome(outcome.GetError());
    }
}

void GoosefsClient::UpdateLoadTaskPriorityAsync(const UpdateLoadTaskPriorityRequest& request, const UpdateLoadTaskPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateLoadTaskPriorityRequest&;
    using Resp = UpdateLoadTaskPriorityResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateLoadTaskPriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GoosefsClient::UpdateLoadTaskPriorityOutcomeCallable GoosefsClient::UpdateLoadTaskPriorityCallable(const UpdateLoadTaskPriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateLoadTaskPriorityOutcome>>();
    UpdateLoadTaskPriorityAsync(
    request,
    [prom](
        const GoosefsClient*,
        const UpdateLoadTaskPriorityRequest&,
        UpdateLoadTaskPriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

