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

#include <tencentcloud/asr/v20190614/AsrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Asr::V20190614;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-06-14";
    const string ENDPOINT = "asr.tencentcloudapi.com";
}

AsrClient::AsrClient(const Credential &credential, const string &region) :
    AsrClient(credential, region, ClientProfile())
{
}

AsrClient::AsrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AsrClient::CloseAsyncRecognitionTaskOutcome AsrClient::CloseAsyncRecognitionTask(const CloseAsyncRecognitionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CloseAsyncRecognitionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseAsyncRecognitionTaskResponse rsp = CloseAsyncRecognitionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseAsyncRecognitionTaskOutcome(rsp);
        else
            return CloseAsyncRecognitionTaskOutcome(o.GetError());
    }
    else
    {
        return CloseAsyncRecognitionTaskOutcome(outcome.GetError());
    }
}

void AsrClient::CloseAsyncRecognitionTaskAsync(const CloseAsyncRecognitionTaskRequest& request, const CloseAsyncRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseAsyncRecognitionTaskRequest&;
    using Resp = CloseAsyncRecognitionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CloseAsyncRecognitionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::CloseAsyncRecognitionTaskOutcomeCallable AsrClient::CloseAsyncRecognitionTaskCallable(const CloseAsyncRecognitionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseAsyncRecognitionTaskOutcome>>();
    CloseAsyncRecognitionTaskAsync(
    request,
    [prom](
        const AsrClient*,
        const CloseAsyncRecognitionTaskRequest&,
        CloseAsyncRecognitionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::CreateAsrKeyWordLibOutcome AsrClient::CreateAsrKeyWordLib(const CreateAsrKeyWordLibRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsrKeyWordLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsrKeyWordLibResponse rsp = CreateAsrKeyWordLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsrKeyWordLibOutcome(rsp);
        else
            return CreateAsrKeyWordLibOutcome(o.GetError());
    }
    else
    {
        return CreateAsrKeyWordLibOutcome(outcome.GetError());
    }
}

void AsrClient::CreateAsrKeyWordLibAsync(const CreateAsrKeyWordLibRequest& request, const CreateAsrKeyWordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAsrKeyWordLibRequest&;
    using Resp = CreateAsrKeyWordLibResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAsrKeyWordLib", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::CreateAsrKeyWordLibOutcomeCallable AsrClient::CreateAsrKeyWordLibCallable(const CreateAsrKeyWordLibRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAsrKeyWordLibOutcome>>();
    CreateAsrKeyWordLibAsync(
    request,
    [prom](
        const AsrClient*,
        const CreateAsrKeyWordLibRequest&,
        CreateAsrKeyWordLibOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::CreateAsrVocabOutcome AsrClient::CreateAsrVocab(const CreateAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsrVocabResponse rsp = CreateAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsrVocabOutcome(rsp);
        else
            return CreateAsrVocabOutcome(o.GetError());
    }
    else
    {
        return CreateAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::CreateAsrVocabAsync(const CreateAsrVocabRequest& request, const CreateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAsrVocabRequest&;
    using Resp = CreateAsrVocabResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAsrVocab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::CreateAsrVocabOutcomeCallable AsrClient::CreateAsrVocabCallable(const CreateAsrVocabRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAsrVocabOutcome>>();
    CreateAsrVocabAsync(
    request,
    [prom](
        const AsrClient*,
        const CreateAsrVocabRequest&,
        CreateAsrVocabOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::CreateAsyncRecognitionTaskOutcome AsrClient::CreateAsyncRecognitionTask(const CreateAsyncRecognitionTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsyncRecognitionTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsyncRecognitionTaskResponse rsp = CreateAsyncRecognitionTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsyncRecognitionTaskOutcome(rsp);
        else
            return CreateAsyncRecognitionTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAsyncRecognitionTaskOutcome(outcome.GetError());
    }
}

void AsrClient::CreateAsyncRecognitionTaskAsync(const CreateAsyncRecognitionTaskRequest& request, const CreateAsyncRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAsyncRecognitionTaskRequest&;
    using Resp = CreateAsyncRecognitionTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAsyncRecognitionTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::CreateAsyncRecognitionTaskOutcomeCallable AsrClient::CreateAsyncRecognitionTaskCallable(const CreateAsyncRecognitionTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAsyncRecognitionTaskOutcome>>();
    CreateAsyncRecognitionTaskAsync(
    request,
    [prom](
        const AsrClient*,
        const CreateAsyncRecognitionTaskRequest&,
        CreateAsyncRecognitionTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::CreateCustomizationOutcome AsrClient::CreateCustomization(const CreateCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomizationResponse rsp = CreateCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomizationOutcome(rsp);
        else
            return CreateCustomizationOutcome(o.GetError());
    }
    else
    {
        return CreateCustomizationOutcome(outcome.GetError());
    }
}

void AsrClient::CreateCustomizationAsync(const CreateCustomizationRequest& request, const CreateCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomizationRequest&;
    using Resp = CreateCustomizationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::CreateCustomizationOutcomeCallable AsrClient::CreateCustomizationCallable(const CreateCustomizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomizationOutcome>>();
    CreateCustomizationAsync(
    request,
    [prom](
        const AsrClient*,
        const CreateCustomizationRequest&,
        CreateCustomizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::CreateRecTaskOutcome AsrClient::CreateRecTask(const CreateRecTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecTaskResponse rsp = CreateRecTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecTaskOutcome(rsp);
        else
            return CreateRecTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRecTaskOutcome(outcome.GetError());
    }
}

void AsrClient::CreateRecTaskAsync(const CreateRecTaskRequest& request, const CreateRecTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecTaskRequest&;
    using Resp = CreateRecTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::CreateRecTaskOutcomeCallable AsrClient::CreateRecTaskCallable(const CreateRecTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecTaskOutcome>>();
    CreateRecTaskAsync(
    request,
    [prom](
        const AsrClient*,
        const CreateRecTaskRequest&,
        CreateRecTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::DeleteAsrKeyWordLibOutcome AsrClient::DeleteAsrKeyWordLib(const DeleteAsrKeyWordLibRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAsrKeyWordLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAsrKeyWordLibResponse rsp = DeleteAsrKeyWordLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAsrKeyWordLibOutcome(rsp);
        else
            return DeleteAsrKeyWordLibOutcome(o.GetError());
    }
    else
    {
        return DeleteAsrKeyWordLibOutcome(outcome.GetError());
    }
}

void AsrClient::DeleteAsrKeyWordLibAsync(const DeleteAsrKeyWordLibRequest& request, const DeleteAsrKeyWordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAsrKeyWordLibRequest&;
    using Resp = DeleteAsrKeyWordLibResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAsrKeyWordLib", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::DeleteAsrKeyWordLibOutcomeCallable AsrClient::DeleteAsrKeyWordLibCallable(const DeleteAsrKeyWordLibRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAsrKeyWordLibOutcome>>();
    DeleteAsrKeyWordLibAsync(
    request,
    [prom](
        const AsrClient*,
        const DeleteAsrKeyWordLibRequest&,
        DeleteAsrKeyWordLibOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::DeleteAsrVocabOutcome AsrClient::DeleteAsrVocab(const DeleteAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAsrVocabResponse rsp = DeleteAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAsrVocabOutcome(rsp);
        else
            return DeleteAsrVocabOutcome(o.GetError());
    }
    else
    {
        return DeleteAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::DeleteAsrVocabAsync(const DeleteAsrVocabRequest& request, const DeleteAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAsrVocabRequest&;
    using Resp = DeleteAsrVocabResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAsrVocab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::DeleteAsrVocabOutcomeCallable AsrClient::DeleteAsrVocabCallable(const DeleteAsrVocabRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAsrVocabOutcome>>();
    DeleteAsrVocabAsync(
    request,
    [prom](
        const AsrClient*,
        const DeleteAsrVocabRequest&,
        DeleteAsrVocabOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::DeleteCustomizationOutcome AsrClient::DeleteCustomization(const DeleteCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomizationResponse rsp = DeleteCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomizationOutcome(rsp);
        else
            return DeleteCustomizationOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomizationOutcome(outcome.GetError());
    }
}

void AsrClient::DeleteCustomizationAsync(const DeleteCustomizationRequest& request, const DeleteCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomizationRequest&;
    using Resp = DeleteCustomizationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::DeleteCustomizationOutcomeCallable AsrClient::DeleteCustomizationCallable(const DeleteCustomizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomizationOutcome>>();
    DeleteCustomizationAsync(
    request,
    [prom](
        const AsrClient*,
        const DeleteCustomizationRequest&,
        DeleteCustomizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::DescribeAsyncRecognitionTasksOutcome AsrClient::DescribeAsyncRecognitionTasks(const DescribeAsyncRecognitionTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncRecognitionTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncRecognitionTasksResponse rsp = DescribeAsyncRecognitionTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncRecognitionTasksOutcome(rsp);
        else
            return DescribeAsyncRecognitionTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncRecognitionTasksOutcome(outcome.GetError());
    }
}

void AsrClient::DescribeAsyncRecognitionTasksAsync(const DescribeAsyncRecognitionTasksRequest& request, const DescribeAsyncRecognitionTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAsyncRecognitionTasksRequest&;
    using Resp = DescribeAsyncRecognitionTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAsyncRecognitionTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::DescribeAsyncRecognitionTasksOutcomeCallable AsrClient::DescribeAsyncRecognitionTasksCallable(const DescribeAsyncRecognitionTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAsyncRecognitionTasksOutcome>>();
    DescribeAsyncRecognitionTasksAsync(
    request,
    [prom](
        const AsrClient*,
        const DescribeAsyncRecognitionTasksRequest&,
        DescribeAsyncRecognitionTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::DescribeTaskStatusOutcome AsrClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void AsrClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskStatusRequest&;
    using Resp = DescribeTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::DescribeTaskStatusOutcomeCallable AsrClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStatusOutcome>>();
    DescribeTaskStatusAsync(
    request,
    [prom](
        const AsrClient*,
        const DescribeTaskStatusRequest&,
        DescribeTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::DownloadAsrVocabOutcome AsrClient::DownloadAsrVocab(const DownloadAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadAsrVocabResponse rsp = DownloadAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadAsrVocabOutcome(rsp);
        else
            return DownloadAsrVocabOutcome(o.GetError());
    }
    else
    {
        return DownloadAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::DownloadAsrVocabAsync(const DownloadAsrVocabRequest& request, const DownloadAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadAsrVocabRequest&;
    using Resp = DownloadAsrVocabResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadAsrVocab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::DownloadAsrVocabOutcomeCallable AsrClient::DownloadAsrVocabCallable(const DownloadAsrVocabRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadAsrVocabOutcome>>();
    DownloadAsrVocabAsync(
    request,
    [prom](
        const AsrClient*,
        const DownloadAsrVocabRequest&,
        DownloadAsrVocabOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::DownloadCustomizationOutcome AsrClient::DownloadCustomization(const DownloadCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadCustomizationResponse rsp = DownloadCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadCustomizationOutcome(rsp);
        else
            return DownloadCustomizationOutcome(o.GetError());
    }
    else
    {
        return DownloadCustomizationOutcome(outcome.GetError());
    }
}

void AsrClient::DownloadCustomizationAsync(const DownloadCustomizationRequest& request, const DownloadCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadCustomizationRequest&;
    using Resp = DownloadCustomizationResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadCustomization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::DownloadCustomizationOutcomeCallable AsrClient::DownloadCustomizationCallable(const DownloadCustomizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadCustomizationOutcome>>();
    DownloadCustomizationAsync(
    request,
    [prom](
        const AsrClient*,
        const DownloadCustomizationRequest&,
        DownloadCustomizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::GetAsrKeyWordLibListOutcome AsrClient::GetAsrKeyWordLibList(const GetAsrKeyWordLibListRequest &request)
{
    auto outcome = MakeRequest(request, "GetAsrKeyWordLibList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAsrKeyWordLibListResponse rsp = GetAsrKeyWordLibListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAsrKeyWordLibListOutcome(rsp);
        else
            return GetAsrKeyWordLibListOutcome(o.GetError());
    }
    else
    {
        return GetAsrKeyWordLibListOutcome(outcome.GetError());
    }
}

void AsrClient::GetAsrKeyWordLibListAsync(const GetAsrKeyWordLibListRequest& request, const GetAsrKeyWordLibListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAsrKeyWordLibListRequest&;
    using Resp = GetAsrKeyWordLibListResponse;

    DoRequestAsync<Req, Resp>(
        "GetAsrKeyWordLibList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::GetAsrKeyWordLibListOutcomeCallable AsrClient::GetAsrKeyWordLibListCallable(const GetAsrKeyWordLibListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAsrKeyWordLibListOutcome>>();
    GetAsrKeyWordLibListAsync(
    request,
    [prom](
        const AsrClient*,
        const GetAsrKeyWordLibListRequest&,
        GetAsrKeyWordLibListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::GetAsrVocabOutcome AsrClient::GetAsrVocab(const GetAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "GetAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAsrVocabResponse rsp = GetAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAsrVocabOutcome(rsp);
        else
            return GetAsrVocabOutcome(o.GetError());
    }
    else
    {
        return GetAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::GetAsrVocabAsync(const GetAsrVocabRequest& request, const GetAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAsrVocabRequest&;
    using Resp = GetAsrVocabResponse;

    DoRequestAsync<Req, Resp>(
        "GetAsrVocab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::GetAsrVocabOutcomeCallable AsrClient::GetAsrVocabCallable(const GetAsrVocabRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAsrVocabOutcome>>();
    GetAsrVocabAsync(
    request,
    [prom](
        const AsrClient*,
        const GetAsrVocabRequest&,
        GetAsrVocabOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::GetAsrVocabListOutcome AsrClient::GetAsrVocabList(const GetAsrVocabListRequest &request)
{
    auto outcome = MakeRequest(request, "GetAsrVocabList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAsrVocabListResponse rsp = GetAsrVocabListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAsrVocabListOutcome(rsp);
        else
            return GetAsrVocabListOutcome(o.GetError());
    }
    else
    {
        return GetAsrVocabListOutcome(outcome.GetError());
    }
}

void AsrClient::GetAsrVocabListAsync(const GetAsrVocabListRequest& request, const GetAsrVocabListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAsrVocabListRequest&;
    using Resp = GetAsrVocabListResponse;

    DoRequestAsync<Req, Resp>(
        "GetAsrVocabList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::GetAsrVocabListOutcomeCallable AsrClient::GetAsrVocabListCallable(const GetAsrVocabListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAsrVocabListOutcome>>();
    GetAsrVocabListAsync(
    request,
    [prom](
        const AsrClient*,
        const GetAsrVocabListRequest&,
        GetAsrVocabListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::GetCustomizationListOutcome AsrClient::GetCustomizationList(const GetCustomizationListRequest &request)
{
    auto outcome = MakeRequest(request, "GetCustomizationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCustomizationListResponse rsp = GetCustomizationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCustomizationListOutcome(rsp);
        else
            return GetCustomizationListOutcome(o.GetError());
    }
    else
    {
        return GetCustomizationListOutcome(outcome.GetError());
    }
}

void AsrClient::GetCustomizationListAsync(const GetCustomizationListRequest& request, const GetCustomizationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCustomizationListRequest&;
    using Resp = GetCustomizationListResponse;

    DoRequestAsync<Req, Resp>(
        "GetCustomizationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::GetCustomizationListOutcomeCallable AsrClient::GetCustomizationListCallable(const GetCustomizationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCustomizationListOutcome>>();
    GetCustomizationListAsync(
    request,
    [prom](
        const AsrClient*,
        const GetCustomizationListRequest&,
        GetCustomizationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::GetModelInfoOutcome AsrClient::GetModelInfo(const GetModelInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetModelInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetModelInfoResponse rsp = GetModelInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetModelInfoOutcome(rsp);
        else
            return GetModelInfoOutcome(o.GetError());
    }
    else
    {
        return GetModelInfoOutcome(outcome.GetError());
    }
}

void AsrClient::GetModelInfoAsync(const GetModelInfoRequest& request, const GetModelInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetModelInfoRequest&;
    using Resp = GetModelInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetModelInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::GetModelInfoOutcomeCallable AsrClient::GetModelInfoCallable(const GetModelInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetModelInfoOutcome>>();
    GetModelInfoAsync(
    request,
    [prom](
        const AsrClient*,
        const GetModelInfoRequest&,
        GetModelInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::GetUsageByDateOutcome AsrClient::GetUsageByDate(const GetUsageByDateRequest &request)
{
    auto outcome = MakeRequest(request, "GetUsageByDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUsageByDateResponse rsp = GetUsageByDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUsageByDateOutcome(rsp);
        else
            return GetUsageByDateOutcome(o.GetError());
    }
    else
    {
        return GetUsageByDateOutcome(outcome.GetError());
    }
}

void AsrClient::GetUsageByDateAsync(const GetUsageByDateRequest& request, const GetUsageByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetUsageByDateRequest&;
    using Resp = GetUsageByDateResponse;

    DoRequestAsync<Req, Resp>(
        "GetUsageByDate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::GetUsageByDateOutcomeCallable AsrClient::GetUsageByDateCallable(const GetUsageByDateRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetUsageByDateOutcome>>();
    GetUsageByDateAsync(
    request,
    [prom](
        const AsrClient*,
        const GetUsageByDateRequest&,
        GetUsageByDateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::ModifyCustomizationOutcome AsrClient::ModifyCustomization(const ModifyCustomizationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizationResponse rsp = ModifyCustomizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizationOutcome(rsp);
        else
            return ModifyCustomizationOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizationOutcome(outcome.GetError());
    }
}

void AsrClient::ModifyCustomizationAsync(const ModifyCustomizationRequest& request, const ModifyCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomizationRequest&;
    using Resp = ModifyCustomizationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::ModifyCustomizationOutcomeCallable AsrClient::ModifyCustomizationCallable(const ModifyCustomizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomizationOutcome>>();
    ModifyCustomizationAsync(
    request,
    [prom](
        const AsrClient*,
        const ModifyCustomizationRequest&,
        ModifyCustomizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::ModifyCustomizationStateOutcome AsrClient::ModifyCustomizationState(const ModifyCustomizationStateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomizationState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomizationStateResponse rsp = ModifyCustomizationStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomizationStateOutcome(rsp);
        else
            return ModifyCustomizationStateOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomizationStateOutcome(outcome.GetError());
    }
}

void AsrClient::ModifyCustomizationStateAsync(const ModifyCustomizationStateRequest& request, const ModifyCustomizationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomizationStateRequest&;
    using Resp = ModifyCustomizationStateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomizationState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::ModifyCustomizationStateOutcomeCallable AsrClient::ModifyCustomizationStateCallable(const ModifyCustomizationStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomizationStateOutcome>>();
    ModifyCustomizationStateAsync(
    request,
    [prom](
        const AsrClient*,
        const ModifyCustomizationStateRequest&,
        ModifyCustomizationStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::SentenceRecognitionOutcome AsrClient::SentenceRecognition(const SentenceRecognitionRequest &request)
{
    auto outcome = MakeRequest(request, "SentenceRecognition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SentenceRecognitionResponse rsp = SentenceRecognitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SentenceRecognitionOutcome(rsp);
        else
            return SentenceRecognitionOutcome(o.GetError());
    }
    else
    {
        return SentenceRecognitionOutcome(outcome.GetError());
    }
}

void AsrClient::SentenceRecognitionAsync(const SentenceRecognitionRequest& request, const SentenceRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SentenceRecognitionRequest&;
    using Resp = SentenceRecognitionResponse;

    DoRequestAsync<Req, Resp>(
        "SentenceRecognition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::SentenceRecognitionOutcomeCallable AsrClient::SentenceRecognitionCallable(const SentenceRecognitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SentenceRecognitionOutcome>>();
    SentenceRecognitionAsync(
    request,
    [prom](
        const AsrClient*,
        const SentenceRecognitionRequest&,
        SentenceRecognitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::SetVocabStateOutcome AsrClient::SetVocabState(const SetVocabStateRequest &request)
{
    auto outcome = MakeRequest(request, "SetVocabState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVocabStateResponse rsp = SetVocabStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVocabStateOutcome(rsp);
        else
            return SetVocabStateOutcome(o.GetError());
    }
    else
    {
        return SetVocabStateOutcome(outcome.GetError());
    }
}

void AsrClient::SetVocabStateAsync(const SetVocabStateRequest& request, const SetVocabStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetVocabStateRequest&;
    using Resp = SetVocabStateResponse;

    DoRequestAsync<Req, Resp>(
        "SetVocabState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::SetVocabStateOutcomeCallable AsrClient::SetVocabStateCallable(const SetVocabStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetVocabStateOutcome>>();
    SetVocabStateAsync(
    request,
    [prom](
        const AsrClient*,
        const SetVocabStateRequest&,
        SetVocabStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::UpdateAsrKeyWordLibOutcome AsrClient::UpdateAsrKeyWordLib(const UpdateAsrKeyWordLibRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAsrKeyWordLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAsrKeyWordLibResponse rsp = UpdateAsrKeyWordLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAsrKeyWordLibOutcome(rsp);
        else
            return UpdateAsrKeyWordLibOutcome(o.GetError());
    }
    else
    {
        return UpdateAsrKeyWordLibOutcome(outcome.GetError());
    }
}

void AsrClient::UpdateAsrKeyWordLibAsync(const UpdateAsrKeyWordLibRequest& request, const UpdateAsrKeyWordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAsrKeyWordLibRequest&;
    using Resp = UpdateAsrKeyWordLibResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAsrKeyWordLib", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::UpdateAsrKeyWordLibOutcomeCallable AsrClient::UpdateAsrKeyWordLibCallable(const UpdateAsrKeyWordLibRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAsrKeyWordLibOutcome>>();
    UpdateAsrKeyWordLibAsync(
    request,
    [prom](
        const AsrClient*,
        const UpdateAsrKeyWordLibRequest&,
        UpdateAsrKeyWordLibOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::UpdateAsrVocabOutcome AsrClient::UpdateAsrVocab(const UpdateAsrVocabRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAsrVocab");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAsrVocabResponse rsp = UpdateAsrVocabResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAsrVocabOutcome(rsp);
        else
            return UpdateAsrVocabOutcome(o.GetError());
    }
    else
    {
        return UpdateAsrVocabOutcome(outcome.GetError());
    }
}

void AsrClient::UpdateAsrVocabAsync(const UpdateAsrVocabRequest& request, const UpdateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAsrVocabRequest&;
    using Resp = UpdateAsrVocabResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAsrVocab", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::UpdateAsrVocabOutcomeCallable AsrClient::UpdateAsrVocabCallable(const UpdateAsrVocabRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAsrVocabOutcome>>();
    UpdateAsrVocabAsync(
    request,
    [prom](
        const AsrClient*,
        const UpdateAsrVocabRequest&,
        UpdateAsrVocabOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::VoicePrintCompareOutcome AsrClient::VoicePrintCompare(const VoicePrintCompareRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintCompareResponse rsp = VoicePrintCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintCompareOutcome(rsp);
        else
            return VoicePrintCompareOutcome(o.GetError());
    }
    else
    {
        return VoicePrintCompareOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintCompareAsync(const VoicePrintCompareRequest& request, const VoicePrintCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VoicePrintCompareRequest&;
    using Resp = VoicePrintCompareResponse;

    DoRequestAsync<Req, Resp>(
        "VoicePrintCompare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::VoicePrintCompareOutcomeCallable AsrClient::VoicePrintCompareCallable(const VoicePrintCompareRequest &request)
{
    const auto prom = std::make_shared<std::promise<VoicePrintCompareOutcome>>();
    VoicePrintCompareAsync(
    request,
    [prom](
        const AsrClient*,
        const VoicePrintCompareRequest&,
        VoicePrintCompareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::VoicePrintCountOutcome AsrClient::VoicePrintCount(const VoicePrintCountRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintCountResponse rsp = VoicePrintCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintCountOutcome(rsp);
        else
            return VoicePrintCountOutcome(o.GetError());
    }
    else
    {
        return VoicePrintCountOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintCountAsync(const VoicePrintCountRequest& request, const VoicePrintCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VoicePrintCountRequest&;
    using Resp = VoicePrintCountResponse;

    DoRequestAsync<Req, Resp>(
        "VoicePrintCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::VoicePrintCountOutcomeCallable AsrClient::VoicePrintCountCallable(const VoicePrintCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<VoicePrintCountOutcome>>();
    VoicePrintCountAsync(
    request,
    [prom](
        const AsrClient*,
        const VoicePrintCountRequest&,
        VoicePrintCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::VoicePrintDeleteOutcome AsrClient::VoicePrintDelete(const VoicePrintDeleteRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintDelete");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintDeleteResponse rsp = VoicePrintDeleteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintDeleteOutcome(rsp);
        else
            return VoicePrintDeleteOutcome(o.GetError());
    }
    else
    {
        return VoicePrintDeleteOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintDeleteAsync(const VoicePrintDeleteRequest& request, const VoicePrintDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VoicePrintDeleteRequest&;
    using Resp = VoicePrintDeleteResponse;

    DoRequestAsync<Req, Resp>(
        "VoicePrintDelete", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::VoicePrintDeleteOutcomeCallable AsrClient::VoicePrintDeleteCallable(const VoicePrintDeleteRequest &request)
{
    const auto prom = std::make_shared<std::promise<VoicePrintDeleteOutcome>>();
    VoicePrintDeleteAsync(
    request,
    [prom](
        const AsrClient*,
        const VoicePrintDeleteRequest&,
        VoicePrintDeleteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::VoicePrintEnrollOutcome AsrClient::VoicePrintEnroll(const VoicePrintEnrollRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintEnroll");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintEnrollResponse rsp = VoicePrintEnrollResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintEnrollOutcome(rsp);
        else
            return VoicePrintEnrollOutcome(o.GetError());
    }
    else
    {
        return VoicePrintEnrollOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintEnrollAsync(const VoicePrintEnrollRequest& request, const VoicePrintEnrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VoicePrintEnrollRequest&;
    using Resp = VoicePrintEnrollResponse;

    DoRequestAsync<Req, Resp>(
        "VoicePrintEnroll", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::VoicePrintEnrollOutcomeCallable AsrClient::VoicePrintEnrollCallable(const VoicePrintEnrollRequest &request)
{
    const auto prom = std::make_shared<std::promise<VoicePrintEnrollOutcome>>();
    VoicePrintEnrollAsync(
    request,
    [prom](
        const AsrClient*,
        const VoicePrintEnrollRequest&,
        VoicePrintEnrollOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::VoicePrintGroupVerifyOutcome AsrClient::VoicePrintGroupVerify(const VoicePrintGroupVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintGroupVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintGroupVerifyResponse rsp = VoicePrintGroupVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintGroupVerifyOutcome(rsp);
        else
            return VoicePrintGroupVerifyOutcome(o.GetError());
    }
    else
    {
        return VoicePrintGroupVerifyOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintGroupVerifyAsync(const VoicePrintGroupVerifyRequest& request, const VoicePrintGroupVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VoicePrintGroupVerifyRequest&;
    using Resp = VoicePrintGroupVerifyResponse;

    DoRequestAsync<Req, Resp>(
        "VoicePrintGroupVerify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::VoicePrintGroupVerifyOutcomeCallable AsrClient::VoicePrintGroupVerifyCallable(const VoicePrintGroupVerifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<VoicePrintGroupVerifyOutcome>>();
    VoicePrintGroupVerifyAsync(
    request,
    [prom](
        const AsrClient*,
        const VoicePrintGroupVerifyRequest&,
        VoicePrintGroupVerifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::VoicePrintUpdateOutcome AsrClient::VoicePrintUpdate(const VoicePrintUpdateRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintUpdate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintUpdateResponse rsp = VoicePrintUpdateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintUpdateOutcome(rsp);
        else
            return VoicePrintUpdateOutcome(o.GetError());
    }
    else
    {
        return VoicePrintUpdateOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintUpdateAsync(const VoicePrintUpdateRequest& request, const VoicePrintUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VoicePrintUpdateRequest&;
    using Resp = VoicePrintUpdateResponse;

    DoRequestAsync<Req, Resp>(
        "VoicePrintUpdate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::VoicePrintUpdateOutcomeCallable AsrClient::VoicePrintUpdateCallable(const VoicePrintUpdateRequest &request)
{
    const auto prom = std::make_shared<std::promise<VoicePrintUpdateOutcome>>();
    VoicePrintUpdateAsync(
    request,
    [prom](
        const AsrClient*,
        const VoicePrintUpdateRequest&,
        VoicePrintUpdateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AsrClient::VoicePrintVerifyOutcome AsrClient::VoicePrintVerify(const VoicePrintVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "VoicePrintVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoicePrintVerifyResponse rsp = VoicePrintVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoicePrintVerifyOutcome(rsp);
        else
            return VoicePrintVerifyOutcome(o.GetError());
    }
    else
    {
        return VoicePrintVerifyOutcome(outcome.GetError());
    }
}

void AsrClient::VoicePrintVerifyAsync(const VoicePrintVerifyRequest& request, const VoicePrintVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VoicePrintVerifyRequest&;
    using Resp = VoicePrintVerifyResponse;

    DoRequestAsync<Req, Resp>(
        "VoicePrintVerify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AsrClient::VoicePrintVerifyOutcomeCallable AsrClient::VoicePrintVerifyCallable(const VoicePrintVerifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<VoicePrintVerifyOutcome>>();
    VoicePrintVerifyAsync(
    request,
    [prom](
        const AsrClient*,
        const VoicePrintVerifyRequest&,
        VoicePrintVerifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

