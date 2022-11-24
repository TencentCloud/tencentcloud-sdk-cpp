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

#include <tencentcloud/tcm/v20210413/TcmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcm::V20210413;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-13";
    const string ENDPOINT = "tcm.tencentcloudapi.com";
}

TcmClient::TcmClient(const Credential &credential, const string &region) :
    TcmClient(credential, region, ClientProfile())
{
}

TcmClient::TcmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcmClient::CreateMeshOutcome TcmClient::CreateMesh(const CreateMeshRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMesh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMeshResponse rsp = CreateMeshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMeshOutcome(rsp);
        else
            return CreateMeshOutcome(o.GetError());
    }
    else
    {
        return CreateMeshOutcome(outcome.GetError());
    }
}

void TcmClient::CreateMeshAsync(const CreateMeshRequest& request, const CreateMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMesh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::CreateMeshOutcomeCallable TcmClient::CreateMeshCallable(const CreateMeshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMeshOutcome()>>(
        [this, request]()
        {
            return this->CreateMesh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::DeleteMeshOutcome TcmClient::DeleteMesh(const DeleteMeshRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMesh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMeshResponse rsp = DeleteMeshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMeshOutcome(rsp);
        else
            return DeleteMeshOutcome(o.GetError());
    }
    else
    {
        return DeleteMeshOutcome(outcome.GetError());
    }
}

void TcmClient::DeleteMeshAsync(const DeleteMeshRequest& request, const DeleteMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMesh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::DeleteMeshOutcomeCallable TcmClient::DeleteMeshCallable(const DeleteMeshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMeshOutcome()>>(
        [this, request]()
        {
            return this->DeleteMesh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::DescribeAccessLogConfigOutcome TcmClient::DescribeAccessLogConfig(const DescribeAccessLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessLogConfigResponse rsp = DescribeAccessLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessLogConfigOutcome(rsp);
        else
            return DescribeAccessLogConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessLogConfigOutcome(outcome.GetError());
    }
}

void TcmClient::DescribeAccessLogConfigAsync(const DescribeAccessLogConfigRequest& request, const DescribeAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessLogConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::DescribeAccessLogConfigOutcomeCallable TcmClient::DescribeAccessLogConfigCallable(const DescribeAccessLogConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessLogConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessLogConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::DescribeMeshOutcome TcmClient::DescribeMesh(const DescribeMeshRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMesh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMeshResponse rsp = DescribeMeshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMeshOutcome(rsp);
        else
            return DescribeMeshOutcome(o.GetError());
    }
    else
    {
        return DescribeMeshOutcome(outcome.GetError());
    }
}

void TcmClient::DescribeMeshAsync(const DescribeMeshRequest& request, const DescribeMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMesh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::DescribeMeshOutcomeCallable TcmClient::DescribeMeshCallable(const DescribeMeshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMeshOutcome()>>(
        [this, request]()
        {
            return this->DescribeMesh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::DescribeMeshListOutcome TcmClient::DescribeMeshList(const DescribeMeshListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMeshList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMeshListResponse rsp = DescribeMeshListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMeshListOutcome(rsp);
        else
            return DescribeMeshListOutcome(o.GetError());
    }
    else
    {
        return DescribeMeshListOutcome(outcome.GetError());
    }
}

void TcmClient::DescribeMeshListAsync(const DescribeMeshListRequest& request, const DescribeMeshListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMeshList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::DescribeMeshListOutcomeCallable TcmClient::DescribeMeshListCallable(const DescribeMeshListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMeshListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMeshList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::LinkClusterListOutcome TcmClient::LinkClusterList(const LinkClusterListRequest &request)
{
    auto outcome = MakeRequest(request, "LinkClusterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LinkClusterListResponse rsp = LinkClusterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LinkClusterListOutcome(rsp);
        else
            return LinkClusterListOutcome(o.GetError());
    }
    else
    {
        return LinkClusterListOutcome(outcome.GetError());
    }
}

void TcmClient::LinkClusterListAsync(const LinkClusterListRequest& request, const LinkClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LinkClusterList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::LinkClusterListOutcomeCallable TcmClient::LinkClusterListCallable(const LinkClusterListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LinkClusterListOutcome()>>(
        [this, request]()
        {
            return this->LinkClusterList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::LinkPrometheusOutcome TcmClient::LinkPrometheus(const LinkPrometheusRequest &request)
{
    auto outcome = MakeRequest(request, "LinkPrometheus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LinkPrometheusResponse rsp = LinkPrometheusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LinkPrometheusOutcome(rsp);
        else
            return LinkPrometheusOutcome(o.GetError());
    }
    else
    {
        return LinkPrometheusOutcome(outcome.GetError());
    }
}

void TcmClient::LinkPrometheusAsync(const LinkPrometheusRequest& request, const LinkPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LinkPrometheus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::LinkPrometheusOutcomeCallable TcmClient::LinkPrometheusCallable(const LinkPrometheusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LinkPrometheusOutcome()>>(
        [this, request]()
        {
            return this->LinkPrometheus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::ModifyAccessLogConfigOutcome TcmClient::ModifyAccessLogConfig(const ModifyAccessLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessLogConfigResponse rsp = ModifyAccessLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessLogConfigOutcome(rsp);
        else
            return ModifyAccessLogConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessLogConfigOutcome(outcome.GetError());
    }
}

void TcmClient::ModifyAccessLogConfigAsync(const ModifyAccessLogConfigRequest& request, const ModifyAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccessLogConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::ModifyAccessLogConfigOutcomeCallable TcmClient::ModifyAccessLogConfigCallable(const ModifyAccessLogConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccessLogConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccessLogConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::ModifyMeshOutcome TcmClient::ModifyMesh(const ModifyMeshRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMesh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMeshResponse rsp = ModifyMeshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMeshOutcome(rsp);
        else
            return ModifyMeshOutcome(o.GetError());
    }
    else
    {
        return ModifyMeshOutcome(outcome.GetError());
    }
}

void TcmClient::ModifyMeshAsync(const ModifyMeshRequest& request, const ModifyMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMesh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::ModifyMeshOutcomeCallable TcmClient::ModifyMeshCallable(const ModifyMeshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMeshOutcome()>>(
        [this, request]()
        {
            return this->ModifyMesh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::ModifyTracingConfigOutcome TcmClient::ModifyTracingConfig(const ModifyTracingConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTracingConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTracingConfigResponse rsp = ModifyTracingConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTracingConfigOutcome(rsp);
        else
            return ModifyTracingConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyTracingConfigOutcome(outcome.GetError());
    }
}

void TcmClient::ModifyTracingConfigAsync(const ModifyTracingConfigRequest& request, const ModifyTracingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTracingConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::ModifyTracingConfigOutcomeCallable TcmClient::ModifyTracingConfigCallable(const ModifyTracingConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTracingConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyTracingConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::UnlinkClusterOutcome TcmClient::UnlinkCluster(const UnlinkClusterRequest &request)
{
    auto outcome = MakeRequest(request, "UnlinkCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlinkClusterResponse rsp = UnlinkClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlinkClusterOutcome(rsp);
        else
            return UnlinkClusterOutcome(o.GetError());
    }
    else
    {
        return UnlinkClusterOutcome(outcome.GetError());
    }
}

void TcmClient::UnlinkClusterAsync(const UnlinkClusterRequest& request, const UnlinkClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnlinkCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::UnlinkClusterOutcomeCallable TcmClient::UnlinkClusterCallable(const UnlinkClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnlinkClusterOutcome()>>(
        [this, request]()
        {
            return this->UnlinkCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcmClient::UnlinkPrometheusOutcome TcmClient::UnlinkPrometheus(const UnlinkPrometheusRequest &request)
{
    auto outcome = MakeRequest(request, "UnlinkPrometheus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlinkPrometheusResponse rsp = UnlinkPrometheusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlinkPrometheusOutcome(rsp);
        else
            return UnlinkPrometheusOutcome(o.GetError());
    }
    else
    {
        return UnlinkPrometheusOutcome(outcome.GetError());
    }
}

void TcmClient::UnlinkPrometheusAsync(const UnlinkPrometheusRequest& request, const UnlinkPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnlinkPrometheus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcmClient::UnlinkPrometheusOutcomeCallable TcmClient::UnlinkPrometheusCallable(const UnlinkPrometheusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnlinkPrometheusOutcome()>>(
        [this, request]()
        {
            return this->UnlinkPrometheus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

