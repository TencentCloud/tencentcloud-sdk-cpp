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

#include <tencentcloud/ms/v20180408/MsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ms::V20180408;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-08";
    const string ENDPOINT = "ms.tencentcloudapi.com";
}

MsClient::MsClient(const Credential &credential, const string &region) :
    MsClient(credential, region, ClientProfile())
{
}

MsClient::MsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MsClient::CancelEncryptTaskOutcome MsClient::CancelEncryptTask(const CancelEncryptTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelEncryptTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelEncryptTaskResponse rsp = CancelEncryptTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelEncryptTaskOutcome(rsp);
        else
            return CancelEncryptTaskOutcome(o.GetError());
    }
    else
    {
        return CancelEncryptTaskOutcome(outcome.GetError());
    }
}

void MsClient::CancelEncryptTaskAsync(const CancelEncryptTaskRequest& request, const CancelEncryptTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelEncryptTaskRequest&;
    using Resp = CancelEncryptTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelEncryptTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::CancelEncryptTaskOutcomeCallable MsClient::CancelEncryptTaskCallable(const CancelEncryptTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelEncryptTaskOutcome>>();
    CancelEncryptTaskAsync(
    request,
    [prom](
        const MsClient*,
        const CancelEncryptTaskRequest&,
        CancelEncryptTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::CreateBindInstanceOutcome MsClient::CreateBindInstance(const CreateBindInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBindInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBindInstanceResponse rsp = CreateBindInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBindInstanceOutcome(rsp);
        else
            return CreateBindInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateBindInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateBindInstanceAsync(const CreateBindInstanceRequest& request, const CreateBindInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBindInstanceRequest&;
    using Resp = CreateBindInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBindInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::CreateBindInstanceOutcomeCallable MsClient::CreateBindInstanceCallable(const CreateBindInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBindInstanceOutcome>>();
    CreateBindInstanceAsync(
    request,
    [prom](
        const MsClient*,
        const CreateBindInstanceRequest&,
        CreateBindInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::CreateCosSecKeyInstanceOutcome MsClient::CreateCosSecKeyInstance(const CreateCosSecKeyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosSecKeyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosSecKeyInstanceResponse rsp = CreateCosSecKeyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosSecKeyInstanceOutcome(rsp);
        else
            return CreateCosSecKeyInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateCosSecKeyInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateCosSecKeyInstanceAsync(const CreateCosSecKeyInstanceRequest& request, const CreateCosSecKeyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCosSecKeyInstanceRequest&;
    using Resp = CreateCosSecKeyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCosSecKeyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::CreateCosSecKeyInstanceOutcomeCallable MsClient::CreateCosSecKeyInstanceCallable(const CreateCosSecKeyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCosSecKeyInstanceOutcome>>();
    CreateCosSecKeyInstanceAsync(
    request,
    [prom](
        const MsClient*,
        const CreateCosSecKeyInstanceRequest&,
        CreateCosSecKeyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::CreateEncryptInstanceOutcome MsClient::CreateEncryptInstance(const CreateEncryptInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEncryptInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEncryptInstanceResponse rsp = CreateEncryptInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEncryptInstanceOutcome(rsp);
        else
            return CreateEncryptInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateEncryptInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateEncryptInstanceAsync(const CreateEncryptInstanceRequest& request, const CreateEncryptInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEncryptInstanceRequest&;
    using Resp = CreateEncryptInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEncryptInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::CreateEncryptInstanceOutcomeCallable MsClient::CreateEncryptInstanceCallable(const CreateEncryptInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEncryptInstanceOutcome>>();
    CreateEncryptInstanceAsync(
    request,
    [prom](
        const MsClient*,
        const CreateEncryptInstanceRequest&,
        CreateEncryptInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::CreateOrderInstanceOutcome MsClient::CreateOrderInstance(const CreateOrderInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrderInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrderInstanceResponse rsp = CreateOrderInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrderInstanceOutcome(rsp);
        else
            return CreateOrderInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateOrderInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateOrderInstanceAsync(const CreateOrderInstanceRequest& request, const CreateOrderInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrderInstanceRequest&;
    using Resp = CreateOrderInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrderInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::CreateOrderInstanceOutcomeCallable MsClient::CreateOrderInstanceCallable(const CreateOrderInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrderInstanceOutcome>>();
    CreateOrderInstanceAsync(
    request,
    [prom](
        const MsClient*,
        const CreateOrderInstanceRequest&,
        CreateOrderInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::CreateResourceInstancesOutcome MsClient::CreateResourceInstances(const CreateResourceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceInstancesResponse rsp = CreateResourceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceInstancesOutcome(rsp);
        else
            return CreateResourceInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateResourceInstancesOutcome(outcome.GetError());
    }
}

void MsClient::CreateResourceInstancesAsync(const CreateResourceInstancesRequest& request, const CreateResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourceInstancesRequest&;
    using Resp = CreateResourceInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResourceInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::CreateResourceInstancesOutcomeCallable MsClient::CreateResourceInstancesCallable(const CreateResourceInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceInstancesOutcome>>();
    CreateResourceInstancesAsync(
    request,
    [prom](
        const MsClient*,
        const CreateResourceInstancesRequest&,
        CreateResourceInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::CreateShieldInstanceOutcome MsClient::CreateShieldInstance(const CreateShieldInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateShieldInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateShieldInstanceResponse rsp = CreateShieldInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateShieldInstanceOutcome(rsp);
        else
            return CreateShieldInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateShieldInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateShieldInstanceAsync(const CreateShieldInstanceRequest& request, const CreateShieldInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateShieldInstanceRequest&;
    using Resp = CreateShieldInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateShieldInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::CreateShieldInstanceOutcomeCallable MsClient::CreateShieldInstanceCallable(const CreateShieldInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateShieldInstanceOutcome>>();
    CreateShieldInstanceAsync(
    request,
    [prom](
        const MsClient*,
        const CreateShieldInstanceRequest&,
        CreateShieldInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::CreateShieldPlanInstanceOutcome MsClient::CreateShieldPlanInstance(const CreateShieldPlanInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateShieldPlanInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateShieldPlanInstanceResponse rsp = CreateShieldPlanInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateShieldPlanInstanceOutcome(rsp);
        else
            return CreateShieldPlanInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateShieldPlanInstanceOutcome(outcome.GetError());
    }
}

void MsClient::CreateShieldPlanInstanceAsync(const CreateShieldPlanInstanceRequest& request, const CreateShieldPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateShieldPlanInstanceRequest&;
    using Resp = CreateShieldPlanInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateShieldPlanInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::CreateShieldPlanInstanceOutcomeCallable MsClient::CreateShieldPlanInstanceCallable(const CreateShieldPlanInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateShieldPlanInstanceOutcome>>();
    CreateShieldPlanInstanceAsync(
    request,
    [prom](
        const MsClient*,
        const CreateShieldPlanInstanceRequest&,
        CreateShieldPlanInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DeleteShieldInstancesOutcome MsClient::DeleteShieldInstances(const DeleteShieldInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShieldInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShieldInstancesResponse rsp = DeleteShieldInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShieldInstancesOutcome(rsp);
        else
            return DeleteShieldInstancesOutcome(o.GetError());
    }
    else
    {
        return DeleteShieldInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DeleteShieldInstancesAsync(const DeleteShieldInstancesRequest& request, const DeleteShieldInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteShieldInstancesRequest&;
    using Resp = DeleteShieldInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteShieldInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DeleteShieldInstancesOutcomeCallable MsClient::DeleteShieldInstancesCallable(const DeleteShieldInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteShieldInstancesOutcome>>();
    DeleteShieldInstancesAsync(
    request,
    [prom](
        const MsClient*,
        const DeleteShieldInstancesRequest&,
        DeleteShieldInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeApkDetectionResultOutcome MsClient::DescribeApkDetectionResult(const DescribeApkDetectionResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApkDetectionResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApkDetectionResultResponse rsp = DescribeApkDetectionResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApkDetectionResultOutcome(rsp);
        else
            return DescribeApkDetectionResultOutcome(o.GetError());
    }
    else
    {
        return DescribeApkDetectionResultOutcome(outcome.GetError());
    }
}

void MsClient::DescribeApkDetectionResultAsync(const DescribeApkDetectionResultRequest& request, const DescribeApkDetectionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApkDetectionResultRequest&;
    using Resp = DescribeApkDetectionResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApkDetectionResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeApkDetectionResultOutcomeCallable MsClient::DescribeApkDetectionResultCallable(const DescribeApkDetectionResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApkDetectionResultOutcome>>();
    DescribeApkDetectionResultAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeApkDetectionResultRequest&,
        DescribeApkDetectionResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeEncryptInstancesOutcome MsClient::DescribeEncryptInstances(const DescribeEncryptInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEncryptInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEncryptInstancesResponse rsp = DescribeEncryptInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEncryptInstancesOutcome(rsp);
        else
            return DescribeEncryptInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeEncryptInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DescribeEncryptInstancesAsync(const DescribeEncryptInstancesRequest& request, const DescribeEncryptInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEncryptInstancesRequest&;
    using Resp = DescribeEncryptInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEncryptInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeEncryptInstancesOutcomeCallable MsClient::DescribeEncryptInstancesCallable(const DescribeEncryptInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEncryptInstancesOutcome>>();
    DescribeEncryptInstancesAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeEncryptInstancesRequest&,
        DescribeEncryptInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeEncryptPlanOutcome MsClient::DescribeEncryptPlan(const DescribeEncryptPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEncryptPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEncryptPlanResponse rsp = DescribeEncryptPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEncryptPlanOutcome(rsp);
        else
            return DescribeEncryptPlanOutcome(o.GetError());
    }
    else
    {
        return DescribeEncryptPlanOutcome(outcome.GetError());
    }
}

void MsClient::DescribeEncryptPlanAsync(const DescribeEncryptPlanRequest& request, const DescribeEncryptPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEncryptPlanRequest&;
    using Resp = DescribeEncryptPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEncryptPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeEncryptPlanOutcomeCallable MsClient::DescribeEncryptPlanCallable(const DescribeEncryptPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEncryptPlanOutcome>>();
    DescribeEncryptPlanAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeEncryptPlanRequest&,
        DescribeEncryptPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeOrderInstancesOutcome MsClient::DescribeOrderInstances(const DescribeOrderInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrderInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrderInstancesResponse rsp = DescribeOrderInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrderInstancesOutcome(rsp);
        else
            return DescribeOrderInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeOrderInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DescribeOrderInstancesAsync(const DescribeOrderInstancesRequest& request, const DescribeOrderInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrderInstancesRequest&;
    using Resp = DescribeOrderInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrderInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeOrderInstancesOutcomeCallable MsClient::DescribeOrderInstancesCallable(const DescribeOrderInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrderInstancesOutcome>>();
    DescribeOrderInstancesAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeOrderInstancesRequest&,
        DescribeOrderInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeResourceInstancesOutcome MsClient::DescribeResourceInstances(const DescribeResourceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceInstancesResponse rsp = DescribeResourceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceInstancesOutcome(rsp);
        else
            return DescribeResourceInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DescribeResourceInstancesAsync(const DescribeResourceInstancesRequest& request, const DescribeResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceInstancesRequest&;
    using Resp = DescribeResourceInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeResourceInstancesOutcomeCallable MsClient::DescribeResourceInstancesCallable(const DescribeResourceInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceInstancesOutcome>>();
    DescribeResourceInstancesAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeResourceInstancesRequest&,
        DescribeResourceInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeShieldInstancesOutcome MsClient::DescribeShieldInstances(const DescribeShieldInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShieldInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShieldInstancesResponse rsp = DescribeShieldInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShieldInstancesOutcome(rsp);
        else
            return DescribeShieldInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeShieldInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DescribeShieldInstancesAsync(const DescribeShieldInstancesRequest& request, const DescribeShieldInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeShieldInstancesRequest&;
    using Resp = DescribeShieldInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShieldInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeShieldInstancesOutcomeCallable MsClient::DescribeShieldInstancesCallable(const DescribeShieldInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShieldInstancesOutcome>>();
    DescribeShieldInstancesAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeShieldInstancesRequest&,
        DescribeShieldInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeShieldPlanInstanceOutcome MsClient::DescribeShieldPlanInstance(const DescribeShieldPlanInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShieldPlanInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShieldPlanInstanceResponse rsp = DescribeShieldPlanInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShieldPlanInstanceOutcome(rsp);
        else
            return DescribeShieldPlanInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeShieldPlanInstanceOutcome(outcome.GetError());
    }
}

void MsClient::DescribeShieldPlanInstanceAsync(const DescribeShieldPlanInstanceRequest& request, const DescribeShieldPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeShieldPlanInstanceRequest&;
    using Resp = DescribeShieldPlanInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShieldPlanInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeShieldPlanInstanceOutcomeCallable MsClient::DescribeShieldPlanInstanceCallable(const DescribeShieldPlanInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShieldPlanInstanceOutcome>>();
    DescribeShieldPlanInstanceAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeShieldPlanInstanceRequest&,
        DescribeShieldPlanInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeShieldResultOutcome MsClient::DescribeShieldResult(const DescribeShieldResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShieldResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShieldResultResponse rsp = DescribeShieldResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShieldResultOutcome(rsp);
        else
            return DescribeShieldResultOutcome(o.GetError());
    }
    else
    {
        return DescribeShieldResultOutcome(outcome.GetError());
    }
}

void MsClient::DescribeShieldResultAsync(const DescribeShieldResultRequest& request, const DescribeShieldResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeShieldResultRequest&;
    using Resp = DescribeShieldResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShieldResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeShieldResultOutcomeCallable MsClient::DescribeShieldResultCallable(const DescribeShieldResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShieldResultOutcome>>();
    DescribeShieldResultAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeShieldResultRequest&,
        DescribeShieldResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeUrlDetectionResultOutcome MsClient::DescribeUrlDetectionResult(const DescribeUrlDetectionResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUrlDetectionResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUrlDetectionResultResponse rsp = DescribeUrlDetectionResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUrlDetectionResultOutcome(rsp);
        else
            return DescribeUrlDetectionResultOutcome(o.GetError());
    }
    else
    {
        return DescribeUrlDetectionResultOutcome(outcome.GetError());
    }
}

void MsClient::DescribeUrlDetectionResultAsync(const DescribeUrlDetectionResultRequest& request, const DescribeUrlDetectionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUrlDetectionResultRequest&;
    using Resp = DescribeUrlDetectionResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUrlDetectionResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeUrlDetectionResultOutcomeCallable MsClient::DescribeUrlDetectionResultCallable(const DescribeUrlDetectionResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUrlDetectionResultOutcome>>();
    DescribeUrlDetectionResultAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeUrlDetectionResultRequest&,
        DescribeUrlDetectionResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DescribeUserBaseInfoInstanceOutcome MsClient::DescribeUserBaseInfoInstance(const DescribeUserBaseInfoInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserBaseInfoInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserBaseInfoInstanceResponse rsp = DescribeUserBaseInfoInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserBaseInfoInstanceOutcome(rsp);
        else
            return DescribeUserBaseInfoInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeUserBaseInfoInstanceOutcome(outcome.GetError());
    }
}

void MsClient::DescribeUserBaseInfoInstanceAsync(const DescribeUserBaseInfoInstanceRequest& request, const DescribeUserBaseInfoInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserBaseInfoInstanceRequest&;
    using Resp = DescribeUserBaseInfoInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserBaseInfoInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DescribeUserBaseInfoInstanceOutcomeCallable MsClient::DescribeUserBaseInfoInstanceCallable(const DescribeUserBaseInfoInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserBaseInfoInstanceOutcome>>();
    DescribeUserBaseInfoInstanceAsync(
    request,
    [prom](
        const MsClient*,
        const DescribeUserBaseInfoInstanceRequest&,
        DescribeUserBaseInfoInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::DestroyResourceInstancesOutcome MsClient::DestroyResourceInstances(const DestroyResourceInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyResourceInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyResourceInstancesResponse rsp = DestroyResourceInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyResourceInstancesOutcome(rsp);
        else
            return DestroyResourceInstancesOutcome(o.GetError());
    }
    else
    {
        return DestroyResourceInstancesOutcome(outcome.GetError());
    }
}

void MsClient::DestroyResourceInstancesAsync(const DestroyResourceInstancesRequest& request, const DestroyResourceInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyResourceInstancesRequest&;
    using Resp = DestroyResourceInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyResourceInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::DestroyResourceInstancesOutcomeCallable MsClient::DestroyResourceInstancesCallable(const DestroyResourceInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyResourceInstancesOutcome>>();
    DestroyResourceInstancesAsync(
    request,
    [prom](
        const MsClient*,
        const DestroyResourceInstancesRequest&,
        DestroyResourceInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::RequestLocalTaskOutcome MsClient::RequestLocalTask(const RequestLocalTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RequestLocalTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RequestLocalTaskResponse rsp = RequestLocalTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RequestLocalTaskOutcome(rsp);
        else
            return RequestLocalTaskOutcome(o.GetError());
    }
    else
    {
        return RequestLocalTaskOutcome(outcome.GetError());
    }
}

void MsClient::RequestLocalTaskAsync(const RequestLocalTaskRequest& request, const RequestLocalTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RequestLocalTaskRequest&;
    using Resp = RequestLocalTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RequestLocalTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::RequestLocalTaskOutcomeCallable MsClient::RequestLocalTaskCallable(const RequestLocalTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RequestLocalTaskOutcome>>();
    RequestLocalTaskAsync(
    request,
    [prom](
        const MsClient*,
        const RequestLocalTaskRequest&,
        RequestLocalTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::UpdateClientStateOutcome MsClient::UpdateClientState(const UpdateClientStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateClientState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateClientStateResponse rsp = UpdateClientStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateClientStateOutcome(rsp);
        else
            return UpdateClientStateOutcome(o.GetError());
    }
    else
    {
        return UpdateClientStateOutcome(outcome.GetError());
    }
}

void MsClient::UpdateClientStateAsync(const UpdateClientStateRequest& request, const UpdateClientStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateClientStateRequest&;
    using Resp = UpdateClientStateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateClientState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::UpdateClientStateOutcomeCallable MsClient::UpdateClientStateCallable(const UpdateClientStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateClientStateOutcome>>();
    UpdateClientStateAsync(
    request,
    [prom](
        const MsClient*,
        const UpdateClientStateRequest&,
        UpdateClientStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MsClient::UpdateLocalTaskResultOutcome MsClient::UpdateLocalTaskResult(const UpdateLocalTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLocalTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLocalTaskResultResponse rsp = UpdateLocalTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLocalTaskResultOutcome(rsp);
        else
            return UpdateLocalTaskResultOutcome(o.GetError());
    }
    else
    {
        return UpdateLocalTaskResultOutcome(outcome.GetError());
    }
}

void MsClient::UpdateLocalTaskResultAsync(const UpdateLocalTaskResultRequest& request, const UpdateLocalTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateLocalTaskResultRequest&;
    using Resp = UpdateLocalTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateLocalTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MsClient::UpdateLocalTaskResultOutcomeCallable MsClient::UpdateLocalTaskResultCallable(const UpdateLocalTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateLocalTaskResultOutcome>>();
    UpdateLocalTaskResultAsync(
    request,
    [prom](
        const MsClient*,
        const UpdateLocalTaskResultRequest&,
        UpdateLocalTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

