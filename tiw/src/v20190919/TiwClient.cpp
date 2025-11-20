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

#include <tencentcloud/tiw/v20190919/TiwClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tiw::V20190919;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-19";
    const string ENDPOINT = "tiw.tencentcloudapi.com";
}

TiwClient::TiwClient(const Credential &credential, const string &region) :
    TiwClient(credential, region, ClientProfile())
{
}

TiwClient::TiwClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TiwClient::CreatePPTCheckTaskOutcome TiwClient::CreatePPTCheckTask(const CreatePPTCheckTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePPTCheckTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePPTCheckTaskResponse rsp = CreatePPTCheckTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePPTCheckTaskOutcome(rsp);
        else
            return CreatePPTCheckTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePPTCheckTaskOutcome(outcome.GetError());
    }
}

void TiwClient::CreatePPTCheckTaskAsync(const CreatePPTCheckTaskRequest& request, const CreatePPTCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePPTCheckTaskRequest&;
    using Resp = CreatePPTCheckTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePPTCheckTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::CreatePPTCheckTaskOutcomeCallable TiwClient::CreatePPTCheckTaskCallable(const CreatePPTCheckTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePPTCheckTaskOutcome>>();
    CreatePPTCheckTaskAsync(
    request,
    [prom](
        const TiwClient*,
        const CreatePPTCheckTaskRequest&,
        CreatePPTCheckTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::CreateSnapshotTaskOutcome TiwClient::CreateSnapshotTask(const CreateSnapshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotTaskResponse rsp = CreateSnapshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotTaskOutcome(rsp);
        else
            return CreateSnapshotTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotTaskOutcome(outcome.GetError());
    }
}

void TiwClient::CreateSnapshotTaskAsync(const CreateSnapshotTaskRequest& request, const CreateSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSnapshotTaskRequest&;
    using Resp = CreateSnapshotTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSnapshotTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::CreateSnapshotTaskOutcomeCallable TiwClient::CreateSnapshotTaskCallable(const CreateSnapshotTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSnapshotTaskOutcome>>();
    CreateSnapshotTaskAsync(
    request,
    [prom](
        const TiwClient*,
        const CreateSnapshotTaskRequest&,
        CreateSnapshotTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::CreateTranscodeOutcome TiwClient::CreateTranscode(const CreateTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTranscodeResponse rsp = CreateTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTranscodeOutcome(rsp);
        else
            return CreateTranscodeOutcome(o.GetError());
    }
    else
    {
        return CreateTranscodeOutcome(outcome.GetError());
    }
}

void TiwClient::CreateTranscodeAsync(const CreateTranscodeRequest& request, const CreateTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTranscodeRequest&;
    using Resp = CreateTranscodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTranscode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::CreateTranscodeOutcomeCallable TiwClient::CreateTranscodeCallable(const CreateTranscodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTranscodeOutcome>>();
    CreateTranscodeAsync(
    request,
    [prom](
        const TiwClient*,
        const CreateTranscodeRequest&,
        CreateTranscodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::CreateVideoGenerationTaskOutcome TiwClient::CreateVideoGenerationTask(const CreateVideoGenerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoGenerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoGenerationTaskResponse rsp = CreateVideoGenerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoGenerationTaskOutcome(rsp);
        else
            return CreateVideoGenerationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoGenerationTaskOutcome(outcome.GetError());
    }
}

void TiwClient::CreateVideoGenerationTaskAsync(const CreateVideoGenerationTaskRequest& request, const CreateVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVideoGenerationTaskRequest&;
    using Resp = CreateVideoGenerationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVideoGenerationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::CreateVideoGenerationTaskOutcomeCallable TiwClient::CreateVideoGenerationTaskCallable(const CreateVideoGenerationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVideoGenerationTaskOutcome>>();
    CreateVideoGenerationTaskAsync(
    request,
    [prom](
        const TiwClient*,
        const CreateVideoGenerationTaskRequest&,
        CreateVideoGenerationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeOnlineRecordOutcome TiwClient::DescribeOnlineRecord(const DescribeOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineRecordResponse rsp = DescribeOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineRecordOutcome(rsp);
        else
            return DescribeOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOnlineRecordAsync(const DescribeOnlineRecordRequest& request, const DescribeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOnlineRecordRequest&;
    using Resp = DescribeOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeOnlineRecordOutcomeCallable TiwClient::DescribeOnlineRecordCallable(const DescribeOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOnlineRecordOutcome>>();
    DescribeOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeOnlineRecordRequest&,
        DescribeOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeOnlineRecordCallbackOutcome TiwClient::DescribeOnlineRecordCallback(const DescribeOnlineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOnlineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOnlineRecordCallbackResponse rsp = DescribeOnlineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOnlineRecordCallbackOutcome(rsp);
        else
            return DescribeOnlineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeOnlineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeOnlineRecordCallbackAsync(const DescribeOnlineRecordCallbackRequest& request, const DescribeOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOnlineRecordCallbackRequest&;
    using Resp = DescribeOnlineRecordCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOnlineRecordCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeOnlineRecordCallbackOutcomeCallable TiwClient::DescribeOnlineRecordCallbackCallable(const DescribeOnlineRecordCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOnlineRecordCallbackOutcome>>();
    DescribeOnlineRecordCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeOnlineRecordCallbackRequest&,
        DescribeOnlineRecordCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribePPTCheckOutcome TiwClient::DescribePPTCheck(const DescribePPTCheckRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePPTCheck");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePPTCheckResponse rsp = DescribePPTCheckResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePPTCheckOutcome(rsp);
        else
            return DescribePPTCheckOutcome(o.GetError());
    }
    else
    {
        return DescribePPTCheckOutcome(outcome.GetError());
    }
}

void TiwClient::DescribePPTCheckAsync(const DescribePPTCheckRequest& request, const DescribePPTCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePPTCheckRequest&;
    using Resp = DescribePPTCheckResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePPTCheck", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribePPTCheckOutcomeCallable TiwClient::DescribePPTCheckCallable(const DescribePPTCheckRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePPTCheckOutcome>>();
    DescribePPTCheckAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribePPTCheckRequest&,
        DescribePPTCheckOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribePPTCheckCallbackOutcome TiwClient::DescribePPTCheckCallback(const DescribePPTCheckCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePPTCheckCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePPTCheckCallbackResponse rsp = DescribePPTCheckCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePPTCheckCallbackOutcome(rsp);
        else
            return DescribePPTCheckCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribePPTCheckCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribePPTCheckCallbackAsync(const DescribePPTCheckCallbackRequest& request, const DescribePPTCheckCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePPTCheckCallbackRequest&;
    using Resp = DescribePPTCheckCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePPTCheckCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribePPTCheckCallbackOutcomeCallable TiwClient::DescribePPTCheckCallbackCallable(const DescribePPTCheckCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePPTCheckCallbackOutcome>>();
    DescribePPTCheckCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribePPTCheckCallbackRequest&,
        DescribePPTCheckCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeRunningTasksOutcome TiwClient::DescribeRunningTasks(const DescribeRunningTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRunningTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRunningTasksResponse rsp = DescribeRunningTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRunningTasksOutcome(rsp);
        else
            return DescribeRunningTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeRunningTasksOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeRunningTasksAsync(const DescribeRunningTasksRequest& request, const DescribeRunningTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRunningTasksRequest&;
    using Resp = DescribeRunningTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRunningTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeRunningTasksOutcomeCallable TiwClient::DescribeRunningTasksCallable(const DescribeRunningTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRunningTasksOutcome>>();
    DescribeRunningTasksAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeRunningTasksRequest&,
        DescribeRunningTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeSnapshotTaskOutcome TiwClient::DescribeSnapshotTask(const DescribeSnapshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotTaskResponse rsp = DescribeSnapshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotTaskOutcome(rsp);
        else
            return DescribeSnapshotTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotTaskOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeSnapshotTaskAsync(const DescribeSnapshotTaskRequest& request, const DescribeSnapshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotTaskRequest&;
    using Resp = DescribeSnapshotTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeSnapshotTaskOutcomeCallable TiwClient::DescribeSnapshotTaskCallable(const DescribeSnapshotTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotTaskOutcome>>();
    DescribeSnapshotTaskAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeSnapshotTaskRequest&,
        DescribeSnapshotTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeTranscodeOutcome TiwClient::DescribeTranscode(const DescribeTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeResponse rsp = DescribeTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeOutcome(rsp);
        else
            return DescribeTranscodeOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeAsync(const DescribeTranscodeRequest& request, const DescribeTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTranscodeRequest&;
    using Resp = DescribeTranscodeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTranscode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeTranscodeOutcomeCallable TiwClient::DescribeTranscodeCallable(const DescribeTranscodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTranscodeOutcome>>();
    DescribeTranscodeAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeTranscodeRequest&,
        DescribeTranscodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeTranscodeByUrlOutcome TiwClient::DescribeTranscodeByUrl(const DescribeTranscodeByUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeByUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeByUrlResponse rsp = DescribeTranscodeByUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeByUrlOutcome(rsp);
        else
            return DescribeTranscodeByUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeByUrlOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeByUrlAsync(const DescribeTranscodeByUrlRequest& request, const DescribeTranscodeByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTranscodeByUrlRequest&;
    using Resp = DescribeTranscodeByUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTranscodeByUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeTranscodeByUrlOutcomeCallable TiwClient::DescribeTranscodeByUrlCallable(const DescribeTranscodeByUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTranscodeByUrlOutcome>>();
    DescribeTranscodeByUrlAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeTranscodeByUrlRequest&,
        DescribeTranscodeByUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeTranscodeCallbackOutcome TiwClient::DescribeTranscodeCallback(const DescribeTranscodeCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeCallbackResponse rsp = DescribeTranscodeCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeCallbackOutcome(rsp);
        else
            return DescribeTranscodeCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeTranscodeCallbackAsync(const DescribeTranscodeCallbackRequest& request, const DescribeTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTranscodeCallbackRequest&;
    using Resp = DescribeTranscodeCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTranscodeCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeTranscodeCallbackOutcomeCallable TiwClient::DescribeTranscodeCallbackCallable(const DescribeTranscodeCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTranscodeCallbackOutcome>>();
    DescribeTranscodeCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeTranscodeCallbackRequest&,
        DescribeTranscodeCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeVideoGenerationTaskOutcome TiwClient::DescribeVideoGenerationTask(const DescribeVideoGenerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoGenerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoGenerationTaskResponse rsp = DescribeVideoGenerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoGenerationTaskOutcome(rsp);
        else
            return DescribeVideoGenerationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoGenerationTaskOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeVideoGenerationTaskAsync(const DescribeVideoGenerationTaskRequest& request, const DescribeVideoGenerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoGenerationTaskRequest&;
    using Resp = DescribeVideoGenerationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoGenerationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeVideoGenerationTaskOutcomeCallable TiwClient::DescribeVideoGenerationTaskCallable(const DescribeVideoGenerationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoGenerationTaskOutcome>>();
    DescribeVideoGenerationTaskAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeVideoGenerationTaskRequest&,
        DescribeVideoGenerationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeVideoGenerationTaskCallbackOutcome TiwClient::DescribeVideoGenerationTaskCallback(const DescribeVideoGenerationTaskCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoGenerationTaskCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoGenerationTaskCallbackResponse rsp = DescribeVideoGenerationTaskCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoGenerationTaskCallbackOutcome(rsp);
        else
            return DescribeVideoGenerationTaskCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoGenerationTaskCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeVideoGenerationTaskCallbackAsync(const DescribeVideoGenerationTaskCallbackRequest& request, const DescribeVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoGenerationTaskCallbackRequest&;
    using Resp = DescribeVideoGenerationTaskCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoGenerationTaskCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeVideoGenerationTaskCallbackOutcomeCallable TiwClient::DescribeVideoGenerationTaskCallbackCallable(const DescribeVideoGenerationTaskCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoGenerationTaskCallbackOutcome>>();
    DescribeVideoGenerationTaskCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeVideoGenerationTaskCallbackRequest&,
        DescribeVideoGenerationTaskCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeWarningCallbackOutcome TiwClient::DescribeWarningCallback(const DescribeWarningCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWarningCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWarningCallbackResponse rsp = DescribeWarningCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWarningCallbackOutcome(rsp);
        else
            return DescribeWarningCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeWarningCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWarningCallbackAsync(const DescribeWarningCallbackRequest& request, const DescribeWarningCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWarningCallbackRequest&;
    using Resp = DescribeWarningCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWarningCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeWarningCallbackOutcomeCallable TiwClient::DescribeWarningCallbackCallable(const DescribeWarningCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWarningCallbackOutcome>>();
    DescribeWarningCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeWarningCallbackRequest&,
        DescribeWarningCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeWhiteboardPushOutcome TiwClient::DescribeWhiteboardPush(const DescribeWhiteboardPushRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardPush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardPushResponse rsp = DescribeWhiteboardPushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardPushOutcome(rsp);
        else
            return DescribeWhiteboardPushOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardPushOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardPushAsync(const DescribeWhiteboardPushRequest& request, const DescribeWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteboardPushRequest&;
    using Resp = DescribeWhiteboardPushResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteboardPush", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeWhiteboardPushOutcomeCallable TiwClient::DescribeWhiteboardPushCallable(const DescribeWhiteboardPushRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteboardPushOutcome>>();
    DescribeWhiteboardPushAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeWhiteboardPushRequest&,
        DescribeWhiteboardPushOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::DescribeWhiteboardPushCallbackOutcome TiwClient::DescribeWhiteboardPushCallback(const DescribeWhiteboardPushCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteboardPushCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteboardPushCallbackResponse rsp = DescribeWhiteboardPushCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteboardPushCallbackOutcome(rsp);
        else
            return DescribeWhiteboardPushCallbackOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteboardPushCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::DescribeWhiteboardPushCallbackAsync(const DescribeWhiteboardPushCallbackRequest& request, const DescribeWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWhiteboardPushCallbackRequest&;
    using Resp = DescribeWhiteboardPushCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWhiteboardPushCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::DescribeWhiteboardPushCallbackOutcomeCallable TiwClient::DescribeWhiteboardPushCallbackCallable(const DescribeWhiteboardPushCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWhiteboardPushCallbackOutcome>>();
    DescribeWhiteboardPushCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const DescribeWhiteboardPushCallbackRequest&,
        DescribeWhiteboardPushCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::PauseOnlineRecordOutcome TiwClient::PauseOnlineRecord(const PauseOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "PauseOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseOnlineRecordResponse rsp = PauseOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseOnlineRecordOutcome(rsp);
        else
            return PauseOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return PauseOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::PauseOnlineRecordAsync(const PauseOnlineRecordRequest& request, const PauseOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseOnlineRecordRequest&;
    using Resp = PauseOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "PauseOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::PauseOnlineRecordOutcomeCallable TiwClient::PauseOnlineRecordCallable(const PauseOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseOnlineRecordOutcome>>();
    PauseOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const PauseOnlineRecordRequest&,
        PauseOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::ResumeOnlineRecordOutcome TiwClient::ResumeOnlineRecord(const ResumeOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeOnlineRecordResponse rsp = ResumeOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeOnlineRecordOutcome(rsp);
        else
            return ResumeOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return ResumeOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::ResumeOnlineRecordAsync(const ResumeOnlineRecordRequest& request, const ResumeOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeOnlineRecordRequest&;
    using Resp = ResumeOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::ResumeOnlineRecordOutcomeCallable TiwClient::ResumeOnlineRecordCallable(const ResumeOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeOnlineRecordOutcome>>();
    ResumeOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const ResumeOnlineRecordRequest&,
        ResumeOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetOnlineRecordCallbackOutcome TiwClient::SetOnlineRecordCallback(const SetOnlineRecordCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetOnlineRecordCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOnlineRecordCallbackResponse rsp = SetOnlineRecordCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOnlineRecordCallbackOutcome(rsp);
        else
            return SetOnlineRecordCallbackOutcome(o.GetError());
    }
    else
    {
        return SetOnlineRecordCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetOnlineRecordCallbackAsync(const SetOnlineRecordCallbackRequest& request, const SetOnlineRecordCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetOnlineRecordCallbackRequest&;
    using Resp = SetOnlineRecordCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetOnlineRecordCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetOnlineRecordCallbackOutcomeCallable TiwClient::SetOnlineRecordCallbackCallable(const SetOnlineRecordCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetOnlineRecordCallbackOutcome>>();
    SetOnlineRecordCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetOnlineRecordCallbackRequest&,
        SetOnlineRecordCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetOnlineRecordCallbackKeyOutcome TiwClient::SetOnlineRecordCallbackKey(const SetOnlineRecordCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetOnlineRecordCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetOnlineRecordCallbackKeyResponse rsp = SetOnlineRecordCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetOnlineRecordCallbackKeyOutcome(rsp);
        else
            return SetOnlineRecordCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetOnlineRecordCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetOnlineRecordCallbackKeyAsync(const SetOnlineRecordCallbackKeyRequest& request, const SetOnlineRecordCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetOnlineRecordCallbackKeyRequest&;
    using Resp = SetOnlineRecordCallbackKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SetOnlineRecordCallbackKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetOnlineRecordCallbackKeyOutcomeCallable TiwClient::SetOnlineRecordCallbackKeyCallable(const SetOnlineRecordCallbackKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetOnlineRecordCallbackKeyOutcome>>();
    SetOnlineRecordCallbackKeyAsync(
    request,
    [prom](
        const TiwClient*,
        const SetOnlineRecordCallbackKeyRequest&,
        SetOnlineRecordCallbackKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetPPTCheckCallbackOutcome TiwClient::SetPPTCheckCallback(const SetPPTCheckCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetPPTCheckCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetPPTCheckCallbackResponse rsp = SetPPTCheckCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetPPTCheckCallbackOutcome(rsp);
        else
            return SetPPTCheckCallbackOutcome(o.GetError());
    }
    else
    {
        return SetPPTCheckCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetPPTCheckCallbackAsync(const SetPPTCheckCallbackRequest& request, const SetPPTCheckCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetPPTCheckCallbackRequest&;
    using Resp = SetPPTCheckCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetPPTCheckCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetPPTCheckCallbackOutcomeCallable TiwClient::SetPPTCheckCallbackCallable(const SetPPTCheckCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetPPTCheckCallbackOutcome>>();
    SetPPTCheckCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetPPTCheckCallbackRequest&,
        SetPPTCheckCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetPPTCheckCallbackKeyOutcome TiwClient::SetPPTCheckCallbackKey(const SetPPTCheckCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetPPTCheckCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetPPTCheckCallbackKeyResponse rsp = SetPPTCheckCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetPPTCheckCallbackKeyOutcome(rsp);
        else
            return SetPPTCheckCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetPPTCheckCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetPPTCheckCallbackKeyAsync(const SetPPTCheckCallbackKeyRequest& request, const SetPPTCheckCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetPPTCheckCallbackKeyRequest&;
    using Resp = SetPPTCheckCallbackKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SetPPTCheckCallbackKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetPPTCheckCallbackKeyOutcomeCallable TiwClient::SetPPTCheckCallbackKeyCallable(const SetPPTCheckCallbackKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetPPTCheckCallbackKeyOutcome>>();
    SetPPTCheckCallbackKeyAsync(
    request,
    [prom](
        const TiwClient*,
        const SetPPTCheckCallbackKeyRequest&,
        SetPPTCheckCallbackKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetTranscodeCallbackOutcome TiwClient::SetTranscodeCallback(const SetTranscodeCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetTranscodeCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTranscodeCallbackResponse rsp = SetTranscodeCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTranscodeCallbackOutcome(rsp);
        else
            return SetTranscodeCallbackOutcome(o.GetError());
    }
    else
    {
        return SetTranscodeCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetTranscodeCallbackAsync(const SetTranscodeCallbackRequest& request, const SetTranscodeCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetTranscodeCallbackRequest&;
    using Resp = SetTranscodeCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetTranscodeCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetTranscodeCallbackOutcomeCallable TiwClient::SetTranscodeCallbackCallable(const SetTranscodeCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetTranscodeCallbackOutcome>>();
    SetTranscodeCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetTranscodeCallbackRequest&,
        SetTranscodeCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetTranscodeCallbackKeyOutcome TiwClient::SetTranscodeCallbackKey(const SetTranscodeCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetTranscodeCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTranscodeCallbackKeyResponse rsp = SetTranscodeCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTranscodeCallbackKeyOutcome(rsp);
        else
            return SetTranscodeCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetTranscodeCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetTranscodeCallbackKeyAsync(const SetTranscodeCallbackKeyRequest& request, const SetTranscodeCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetTranscodeCallbackKeyRequest&;
    using Resp = SetTranscodeCallbackKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SetTranscodeCallbackKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetTranscodeCallbackKeyOutcomeCallable TiwClient::SetTranscodeCallbackKeyCallable(const SetTranscodeCallbackKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetTranscodeCallbackKeyOutcome>>();
    SetTranscodeCallbackKeyAsync(
    request,
    [prom](
        const TiwClient*,
        const SetTranscodeCallbackKeyRequest&,
        SetTranscodeCallbackKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetVideoGenerationTaskCallbackOutcome TiwClient::SetVideoGenerationTaskCallback(const SetVideoGenerationTaskCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetVideoGenerationTaskCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVideoGenerationTaskCallbackResponse rsp = SetVideoGenerationTaskCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVideoGenerationTaskCallbackOutcome(rsp);
        else
            return SetVideoGenerationTaskCallbackOutcome(o.GetError());
    }
    else
    {
        return SetVideoGenerationTaskCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetVideoGenerationTaskCallbackAsync(const SetVideoGenerationTaskCallbackRequest& request, const SetVideoGenerationTaskCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetVideoGenerationTaskCallbackRequest&;
    using Resp = SetVideoGenerationTaskCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetVideoGenerationTaskCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetVideoGenerationTaskCallbackOutcomeCallable TiwClient::SetVideoGenerationTaskCallbackCallable(const SetVideoGenerationTaskCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetVideoGenerationTaskCallbackOutcome>>();
    SetVideoGenerationTaskCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetVideoGenerationTaskCallbackRequest&,
        SetVideoGenerationTaskCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetVideoGenerationTaskCallbackKeyOutcome TiwClient::SetVideoGenerationTaskCallbackKey(const SetVideoGenerationTaskCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetVideoGenerationTaskCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVideoGenerationTaskCallbackKeyResponse rsp = SetVideoGenerationTaskCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVideoGenerationTaskCallbackKeyOutcome(rsp);
        else
            return SetVideoGenerationTaskCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetVideoGenerationTaskCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetVideoGenerationTaskCallbackKeyAsync(const SetVideoGenerationTaskCallbackKeyRequest& request, const SetVideoGenerationTaskCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetVideoGenerationTaskCallbackKeyRequest&;
    using Resp = SetVideoGenerationTaskCallbackKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SetVideoGenerationTaskCallbackKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetVideoGenerationTaskCallbackKeyOutcomeCallable TiwClient::SetVideoGenerationTaskCallbackKeyCallable(const SetVideoGenerationTaskCallbackKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetVideoGenerationTaskCallbackKeyOutcome>>();
    SetVideoGenerationTaskCallbackKeyAsync(
    request,
    [prom](
        const TiwClient*,
        const SetVideoGenerationTaskCallbackKeyRequest&,
        SetVideoGenerationTaskCallbackKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetWarningCallbackOutcome TiwClient::SetWarningCallback(const SetWarningCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetWarningCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetWarningCallbackResponse rsp = SetWarningCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetWarningCallbackOutcome(rsp);
        else
            return SetWarningCallbackOutcome(o.GetError());
    }
    else
    {
        return SetWarningCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetWarningCallbackAsync(const SetWarningCallbackRequest& request, const SetWarningCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetWarningCallbackRequest&;
    using Resp = SetWarningCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetWarningCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetWarningCallbackOutcomeCallable TiwClient::SetWarningCallbackCallable(const SetWarningCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetWarningCallbackOutcome>>();
    SetWarningCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetWarningCallbackRequest&,
        SetWarningCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetWhiteboardPushCallbackOutcome TiwClient::SetWhiteboardPushCallback(const SetWhiteboardPushCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "SetWhiteboardPushCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetWhiteboardPushCallbackResponse rsp = SetWhiteboardPushCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetWhiteboardPushCallbackOutcome(rsp);
        else
            return SetWhiteboardPushCallbackOutcome(o.GetError());
    }
    else
    {
        return SetWhiteboardPushCallbackOutcome(outcome.GetError());
    }
}

void TiwClient::SetWhiteboardPushCallbackAsync(const SetWhiteboardPushCallbackRequest& request, const SetWhiteboardPushCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetWhiteboardPushCallbackRequest&;
    using Resp = SetWhiteboardPushCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "SetWhiteboardPushCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetWhiteboardPushCallbackOutcomeCallable TiwClient::SetWhiteboardPushCallbackCallable(const SetWhiteboardPushCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetWhiteboardPushCallbackOutcome>>();
    SetWhiteboardPushCallbackAsync(
    request,
    [prom](
        const TiwClient*,
        const SetWhiteboardPushCallbackRequest&,
        SetWhiteboardPushCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::SetWhiteboardPushCallbackKeyOutcome TiwClient::SetWhiteboardPushCallbackKey(const SetWhiteboardPushCallbackKeyRequest &request)
{
    auto outcome = MakeRequest(request, "SetWhiteboardPushCallbackKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetWhiteboardPushCallbackKeyResponse rsp = SetWhiteboardPushCallbackKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetWhiteboardPushCallbackKeyOutcome(rsp);
        else
            return SetWhiteboardPushCallbackKeyOutcome(o.GetError());
    }
    else
    {
        return SetWhiteboardPushCallbackKeyOutcome(outcome.GetError());
    }
}

void TiwClient::SetWhiteboardPushCallbackKeyAsync(const SetWhiteboardPushCallbackKeyRequest& request, const SetWhiteboardPushCallbackKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetWhiteboardPushCallbackKeyRequest&;
    using Resp = SetWhiteboardPushCallbackKeyResponse;

    DoRequestAsync<Req, Resp>(
        "SetWhiteboardPushCallbackKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::SetWhiteboardPushCallbackKeyOutcomeCallable TiwClient::SetWhiteboardPushCallbackKeyCallable(const SetWhiteboardPushCallbackKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetWhiteboardPushCallbackKeyOutcome>>();
    SetWhiteboardPushCallbackKeyAsync(
    request,
    [prom](
        const TiwClient*,
        const SetWhiteboardPushCallbackKeyRequest&,
        SetWhiteboardPushCallbackKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::StartOnlineRecordOutcome TiwClient::StartOnlineRecord(const StartOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartOnlineRecordResponse rsp = StartOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartOnlineRecordOutcome(rsp);
        else
            return StartOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return StartOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::StartOnlineRecordAsync(const StartOnlineRecordRequest& request, const StartOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartOnlineRecordRequest&;
    using Resp = StartOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StartOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::StartOnlineRecordOutcomeCallable TiwClient::StartOnlineRecordCallable(const StartOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartOnlineRecordOutcome>>();
    StartOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const StartOnlineRecordRequest&,
        StartOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::StartWhiteboardPushOutcome TiwClient::StartWhiteboardPush(const StartWhiteboardPushRequest &request)
{
    auto outcome = MakeRequest(request, "StartWhiteboardPush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartWhiteboardPushResponse rsp = StartWhiteboardPushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartWhiteboardPushOutcome(rsp);
        else
            return StartWhiteboardPushOutcome(o.GetError());
    }
    else
    {
        return StartWhiteboardPushOutcome(outcome.GetError());
    }
}

void TiwClient::StartWhiteboardPushAsync(const StartWhiteboardPushRequest& request, const StartWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartWhiteboardPushRequest&;
    using Resp = StartWhiteboardPushResponse;

    DoRequestAsync<Req, Resp>(
        "StartWhiteboardPush", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::StartWhiteboardPushOutcomeCallable TiwClient::StartWhiteboardPushCallable(const StartWhiteboardPushRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartWhiteboardPushOutcome>>();
    StartWhiteboardPushAsync(
    request,
    [prom](
        const TiwClient*,
        const StartWhiteboardPushRequest&,
        StartWhiteboardPushOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::StopOnlineRecordOutcome TiwClient::StopOnlineRecord(const StopOnlineRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopOnlineRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopOnlineRecordResponse rsp = StopOnlineRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopOnlineRecordOutcome(rsp);
        else
            return StopOnlineRecordOutcome(o.GetError());
    }
    else
    {
        return StopOnlineRecordOutcome(outcome.GetError());
    }
}

void TiwClient::StopOnlineRecordAsync(const StopOnlineRecordRequest& request, const StopOnlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopOnlineRecordRequest&;
    using Resp = StopOnlineRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StopOnlineRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::StopOnlineRecordOutcomeCallable TiwClient::StopOnlineRecordCallable(const StopOnlineRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopOnlineRecordOutcome>>();
    StopOnlineRecordAsync(
    request,
    [prom](
        const TiwClient*,
        const StopOnlineRecordRequest&,
        StopOnlineRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TiwClient::StopWhiteboardPushOutcome TiwClient::StopWhiteboardPush(const StopWhiteboardPushRequest &request)
{
    auto outcome = MakeRequest(request, "StopWhiteboardPush");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopWhiteboardPushResponse rsp = StopWhiteboardPushResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopWhiteboardPushOutcome(rsp);
        else
            return StopWhiteboardPushOutcome(o.GetError());
    }
    else
    {
        return StopWhiteboardPushOutcome(outcome.GetError());
    }
}

void TiwClient::StopWhiteboardPushAsync(const StopWhiteboardPushRequest& request, const StopWhiteboardPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopWhiteboardPushRequest&;
    using Resp = StopWhiteboardPushResponse;

    DoRequestAsync<Req, Resp>(
        "StopWhiteboardPush", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TiwClient::StopWhiteboardPushOutcomeCallable TiwClient::StopWhiteboardPushCallable(const StopWhiteboardPushRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopWhiteboardPushOutcome>>();
    StopWhiteboardPushAsync(
    request,
    [prom](
        const TiwClient*,
        const StopWhiteboardPushRequest&,
        StopWhiteboardPushOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

