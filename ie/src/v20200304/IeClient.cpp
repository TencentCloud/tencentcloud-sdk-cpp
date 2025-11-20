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

#include <tencentcloud/ie/v20200304/IeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ie::V20200304;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-04";
    const string ENDPOINT = "ie.tencentcloudapi.com";
}

IeClient::IeClient(const Credential &credential, const string &region) :
    IeClient(credential, region, ClientProfile())
{
}

IeClient::IeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IeClient::CreateEditingTaskOutcome IeClient::CreateEditingTask(const CreateEditingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEditingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEditingTaskResponse rsp = CreateEditingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEditingTaskOutcome(rsp);
        else
            return CreateEditingTaskOutcome(o.GetError());
    }
    else
    {
        return CreateEditingTaskOutcome(outcome.GetError());
    }
}

void IeClient::CreateEditingTaskAsync(const CreateEditingTaskRequest& request, const CreateEditingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEditingTaskRequest&;
    using Resp = CreateEditingTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEditingTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::CreateEditingTaskOutcomeCallable IeClient::CreateEditingTaskCallable(const CreateEditingTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEditingTaskOutcome>>();
    CreateEditingTaskAsync(
    request,
    [prom](
        const IeClient*,
        const CreateEditingTaskRequest&,
        CreateEditingTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IeClient::CreateMediaProcessTaskOutcome IeClient::CreateMediaProcessTask(const CreateMediaProcessTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMediaProcessTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMediaProcessTaskResponse rsp = CreateMediaProcessTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMediaProcessTaskOutcome(rsp);
        else
            return CreateMediaProcessTaskOutcome(o.GetError());
    }
    else
    {
        return CreateMediaProcessTaskOutcome(outcome.GetError());
    }
}

void IeClient::CreateMediaProcessTaskAsync(const CreateMediaProcessTaskRequest& request, const CreateMediaProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMediaProcessTaskRequest&;
    using Resp = CreateMediaProcessTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMediaProcessTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::CreateMediaProcessTaskOutcomeCallable IeClient::CreateMediaProcessTaskCallable(const CreateMediaProcessTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMediaProcessTaskOutcome>>();
    CreateMediaProcessTaskAsync(
    request,
    [prom](
        const IeClient*,
        const CreateMediaProcessTaskRequest&,
        CreateMediaProcessTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IeClient::CreateMediaQualityRestorationTaskOutcome IeClient::CreateMediaQualityRestorationTask(const CreateMediaQualityRestorationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMediaQualityRestorationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMediaQualityRestorationTaskResponse rsp = CreateMediaQualityRestorationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMediaQualityRestorationTaskOutcome(rsp);
        else
            return CreateMediaQualityRestorationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateMediaQualityRestorationTaskOutcome(outcome.GetError());
    }
}

void IeClient::CreateMediaQualityRestorationTaskAsync(const CreateMediaQualityRestorationTaskRequest& request, const CreateMediaQualityRestorationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMediaQualityRestorationTaskRequest&;
    using Resp = CreateMediaQualityRestorationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMediaQualityRestorationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::CreateMediaQualityRestorationTaskOutcomeCallable IeClient::CreateMediaQualityRestorationTaskCallable(const CreateMediaQualityRestorationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMediaQualityRestorationTaskOutcome>>();
    CreateMediaQualityRestorationTaskAsync(
    request,
    [prom](
        const IeClient*,
        const CreateMediaQualityRestorationTaskRequest&,
        CreateMediaQualityRestorationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IeClient::CreateQualityControlTaskOutcome IeClient::CreateQualityControlTask(const CreateQualityControlTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQualityControlTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQualityControlTaskResponse rsp = CreateQualityControlTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQualityControlTaskOutcome(rsp);
        else
            return CreateQualityControlTaskOutcome(o.GetError());
    }
    else
    {
        return CreateQualityControlTaskOutcome(outcome.GetError());
    }
}

void IeClient::CreateQualityControlTaskAsync(const CreateQualityControlTaskRequest& request, const CreateQualityControlTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateQualityControlTaskRequest&;
    using Resp = CreateQualityControlTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQualityControlTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::CreateQualityControlTaskOutcomeCallable IeClient::CreateQualityControlTaskCallable(const CreateQualityControlTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQualityControlTaskOutcome>>();
    CreateQualityControlTaskAsync(
    request,
    [prom](
        const IeClient*,
        const CreateQualityControlTaskRequest&,
        CreateQualityControlTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IeClient::DescribeEditingTaskResultOutcome IeClient::DescribeEditingTaskResult(const DescribeEditingTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEditingTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEditingTaskResultResponse rsp = DescribeEditingTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEditingTaskResultOutcome(rsp);
        else
            return DescribeEditingTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeEditingTaskResultOutcome(outcome.GetError());
    }
}

void IeClient::DescribeEditingTaskResultAsync(const DescribeEditingTaskResultRequest& request, const DescribeEditingTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEditingTaskResultRequest&;
    using Resp = DescribeEditingTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEditingTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::DescribeEditingTaskResultOutcomeCallable IeClient::DescribeEditingTaskResultCallable(const DescribeEditingTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEditingTaskResultOutcome>>();
    DescribeEditingTaskResultAsync(
    request,
    [prom](
        const IeClient*,
        const DescribeEditingTaskResultRequest&,
        DescribeEditingTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IeClient::DescribeMediaProcessTaskResultOutcome IeClient::DescribeMediaProcessTaskResult(const DescribeMediaProcessTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaProcessTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaProcessTaskResultResponse rsp = DescribeMediaProcessTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaProcessTaskResultOutcome(rsp);
        else
            return DescribeMediaProcessTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaProcessTaskResultOutcome(outcome.GetError());
    }
}

void IeClient::DescribeMediaProcessTaskResultAsync(const DescribeMediaProcessTaskResultRequest& request, const DescribeMediaProcessTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMediaProcessTaskResultRequest&;
    using Resp = DescribeMediaProcessTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMediaProcessTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::DescribeMediaProcessTaskResultOutcomeCallable IeClient::DescribeMediaProcessTaskResultCallable(const DescribeMediaProcessTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMediaProcessTaskResultOutcome>>();
    DescribeMediaProcessTaskResultAsync(
    request,
    [prom](
        const IeClient*,
        const DescribeMediaProcessTaskResultRequest&,
        DescribeMediaProcessTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IeClient::DescribeMediaQualityRestorationTaskRusultOutcome IeClient::DescribeMediaQualityRestorationTaskRusult(const DescribeMediaQualityRestorationTaskRusultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaQualityRestorationTaskRusult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaQualityRestorationTaskRusultResponse rsp = DescribeMediaQualityRestorationTaskRusultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaQualityRestorationTaskRusultOutcome(rsp);
        else
            return DescribeMediaQualityRestorationTaskRusultOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaQualityRestorationTaskRusultOutcome(outcome.GetError());
    }
}

void IeClient::DescribeMediaQualityRestorationTaskRusultAsync(const DescribeMediaQualityRestorationTaskRusultRequest& request, const DescribeMediaQualityRestorationTaskRusultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMediaQualityRestorationTaskRusultRequest&;
    using Resp = DescribeMediaQualityRestorationTaskRusultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMediaQualityRestorationTaskRusult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::DescribeMediaQualityRestorationTaskRusultOutcomeCallable IeClient::DescribeMediaQualityRestorationTaskRusultCallable(const DescribeMediaQualityRestorationTaskRusultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMediaQualityRestorationTaskRusultOutcome>>();
    DescribeMediaQualityRestorationTaskRusultAsync(
    request,
    [prom](
        const IeClient*,
        const DescribeMediaQualityRestorationTaskRusultRequest&,
        DescribeMediaQualityRestorationTaskRusultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IeClient::DescribeQualityControlTaskResultOutcome IeClient::DescribeQualityControlTaskResult(const DescribeQualityControlTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityControlTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityControlTaskResultResponse rsp = DescribeQualityControlTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityControlTaskResultOutcome(rsp);
        else
            return DescribeQualityControlTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityControlTaskResultOutcome(outcome.GetError());
    }
}

void IeClient::DescribeQualityControlTaskResultAsync(const DescribeQualityControlTaskResultRequest& request, const DescribeQualityControlTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQualityControlTaskResultRequest&;
    using Resp = DescribeQualityControlTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQualityControlTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::DescribeQualityControlTaskResultOutcomeCallable IeClient::DescribeQualityControlTaskResultCallable(const DescribeQualityControlTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQualityControlTaskResultOutcome>>();
    DescribeQualityControlTaskResultAsync(
    request,
    [prom](
        const IeClient*,
        const DescribeQualityControlTaskResultRequest&,
        DescribeQualityControlTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IeClient::StopMediaProcessTaskOutcome IeClient::StopMediaProcessTask(const StopMediaProcessTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopMediaProcessTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMediaProcessTaskResponse rsp = StopMediaProcessTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMediaProcessTaskOutcome(rsp);
        else
            return StopMediaProcessTaskOutcome(o.GetError());
    }
    else
    {
        return StopMediaProcessTaskOutcome(outcome.GetError());
    }
}

void IeClient::StopMediaProcessTaskAsync(const StopMediaProcessTaskRequest& request, const StopMediaProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMediaProcessTaskRequest&;
    using Resp = StopMediaProcessTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopMediaProcessTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::StopMediaProcessTaskOutcomeCallable IeClient::StopMediaProcessTaskCallable(const StopMediaProcessTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMediaProcessTaskOutcome>>();
    StopMediaProcessTaskAsync(
    request,
    [prom](
        const IeClient*,
        const StopMediaProcessTaskRequest&,
        StopMediaProcessTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IeClient::StopMediaQualityRestorationTaskOutcome IeClient::StopMediaQualityRestorationTask(const StopMediaQualityRestorationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopMediaQualityRestorationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMediaQualityRestorationTaskResponse rsp = StopMediaQualityRestorationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMediaQualityRestorationTaskOutcome(rsp);
        else
            return StopMediaQualityRestorationTaskOutcome(o.GetError());
    }
    else
    {
        return StopMediaQualityRestorationTaskOutcome(outcome.GetError());
    }
}

void IeClient::StopMediaQualityRestorationTaskAsync(const StopMediaQualityRestorationTaskRequest& request, const StopMediaQualityRestorationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMediaQualityRestorationTaskRequest&;
    using Resp = StopMediaQualityRestorationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopMediaQualityRestorationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IeClient::StopMediaQualityRestorationTaskOutcomeCallable IeClient::StopMediaQualityRestorationTaskCallable(const StopMediaQualityRestorationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMediaQualityRestorationTaskOutcome>>();
    StopMediaQualityRestorationTaskAsync(
    request,
    [prom](
        const IeClient*,
        const StopMediaQualityRestorationTaskRequest&,
        StopMediaQualityRestorationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

