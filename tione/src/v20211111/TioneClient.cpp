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

#include <tencentcloud/tione/v20211111/TioneClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tione::V20211111;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-11";
    const string ENDPOINT = "tione.tencentcloudapi.com";
}

TioneClient::TioneClient(const Credential &credential, const string &region) :
    TioneClient(credential, region, ClientProfile())
{
}

TioneClient::TioneClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TioneClient::ChatCompletionOutcome TioneClient::ChatCompletion(const ChatCompletionRequest &request)
{
    auto outcome = MakeRequest(request, "ChatCompletion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChatCompletionResponse rsp = ChatCompletionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChatCompletionOutcome(rsp);
        else
            return ChatCompletionOutcome(o.GetError());
    }
    else
    {
        return ChatCompletionOutcome(outcome.GetError());
    }
}

void TioneClient::ChatCompletionAsync(const ChatCompletionRequest& request, const ChatCompletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChatCompletionRequest&;
    using Resp = ChatCompletionResponse;

    DoRequestAsync<Req, Resp>(
        "ChatCompletion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::ChatCompletionOutcomeCallable TioneClient::ChatCompletionCallable(const ChatCompletionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChatCompletionOutcome>>();
    ChatCompletionAsync(
    request,
    [prom](
        const TioneClient*,
        const ChatCompletionRequest&,
        ChatCompletionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateDatasetOutcome TioneClient::CreateDataset(const CreateDatasetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatasetResponse rsp = CreateDatasetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatasetOutcome(rsp);
        else
            return CreateDatasetOutcome(o.GetError());
    }
    else
    {
        return CreateDatasetOutcome(outcome.GetError());
    }
}

void TioneClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDatasetRequest&;
    using Resp = CreateDatasetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateDatasetOutcomeCallable TioneClient::CreateDatasetCallable(const CreateDatasetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDatasetOutcome>>();
    CreateDatasetAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateDatasetRequest&,
        CreateDatasetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateExportOutcome TioneClient::CreateExport(const CreateExportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExportResponse rsp = CreateExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExportOutcome(rsp);
        else
            return CreateExportOutcome(o.GetError());
    }
    else
    {
        return CreateExportOutcome(outcome.GetError());
    }
}

void TioneClient::CreateExportAsync(const CreateExportRequest& request, const CreateExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExportRequest&;
    using Resp = CreateExportResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateExportOutcomeCallable TioneClient::CreateExportCallable(const CreateExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExportOutcome>>();
    CreateExportAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateExportRequest&,
        CreateExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateModelServiceOutcome TioneClient::CreateModelService(const CreateModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelServiceResponse rsp = CreateModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelServiceOutcome(rsp);
        else
            return CreateModelServiceOutcome(o.GetError());
    }
    else
    {
        return CreateModelServiceOutcome(outcome.GetError());
    }
}

void TioneClient::CreateModelServiceAsync(const CreateModelServiceRequest& request, const CreateModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModelServiceRequest&;
    using Resp = CreateModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateModelServiceOutcomeCallable TioneClient::CreateModelServiceCallable(const CreateModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModelServiceOutcome>>();
    CreateModelServiceAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateModelServiceRequest&,
        CreateModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateModelServiceAuthTokenOutcome TioneClient::CreateModelServiceAuthToken(const CreateModelServiceAuthTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModelServiceAuthToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelServiceAuthTokenResponse rsp = CreateModelServiceAuthTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelServiceAuthTokenOutcome(rsp);
        else
            return CreateModelServiceAuthTokenOutcome(o.GetError());
    }
    else
    {
        return CreateModelServiceAuthTokenOutcome(outcome.GetError());
    }
}

void TioneClient::CreateModelServiceAuthTokenAsync(const CreateModelServiceAuthTokenRequest& request, const CreateModelServiceAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModelServiceAuthTokenRequest&;
    using Resp = CreateModelServiceAuthTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModelServiceAuthToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateModelServiceAuthTokenOutcomeCallable TioneClient::CreateModelServiceAuthTokenCallable(const CreateModelServiceAuthTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModelServiceAuthTokenOutcome>>();
    CreateModelServiceAuthTokenAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateModelServiceAuthTokenRequest&,
        CreateModelServiceAuthTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateNotebookOutcome TioneClient::CreateNotebook(const CreateNotebookRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookResponse rsp = CreateNotebookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookOutcome(rsp);
        else
            return CreateNotebookOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookOutcome(outcome.GetError());
    }
}

void TioneClient::CreateNotebookAsync(const CreateNotebookRequest& request, const CreateNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNotebookRequest&;
    using Resp = CreateNotebookResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNotebook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateNotebookOutcomeCallable TioneClient::CreateNotebookCallable(const CreateNotebookRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNotebookOutcome>>();
    CreateNotebookAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateNotebookRequest&,
        CreateNotebookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreatePresignedNotebookUrlOutcome TioneClient::CreatePresignedNotebookUrl(const CreatePresignedNotebookUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePresignedNotebookUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePresignedNotebookUrlResponse rsp = CreatePresignedNotebookUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePresignedNotebookUrlOutcome(rsp);
        else
            return CreatePresignedNotebookUrlOutcome(o.GetError());
    }
    else
    {
        return CreatePresignedNotebookUrlOutcome(outcome.GetError());
    }
}

void TioneClient::CreatePresignedNotebookUrlAsync(const CreatePresignedNotebookUrlRequest& request, const CreatePresignedNotebookUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePresignedNotebookUrlRequest&;
    using Resp = CreatePresignedNotebookUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePresignedNotebookUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreatePresignedNotebookUrlOutcomeCallable TioneClient::CreatePresignedNotebookUrlCallable(const CreatePresignedNotebookUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePresignedNotebookUrlOutcome>>();
    CreatePresignedNotebookUrlAsync(
    request,
    [prom](
        const TioneClient*,
        const CreatePresignedNotebookUrlRequest&,
        CreatePresignedNotebookUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateTrainingModelOutcome TioneClient::CreateTrainingModel(const CreateTrainingModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrainingModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrainingModelResponse rsp = CreateTrainingModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrainingModelOutcome(rsp);
        else
            return CreateTrainingModelOutcome(o.GetError());
    }
    else
    {
        return CreateTrainingModelOutcome(outcome.GetError());
    }
}

void TioneClient::CreateTrainingModelAsync(const CreateTrainingModelRequest& request, const CreateTrainingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTrainingModelRequest&;
    using Resp = CreateTrainingModelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTrainingModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateTrainingModelOutcomeCallable TioneClient::CreateTrainingModelCallable(const CreateTrainingModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTrainingModelOutcome>>();
    CreateTrainingModelAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateTrainingModelRequest&,
        CreateTrainingModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateTrainingTaskOutcome TioneClient::CreateTrainingTask(const CreateTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrainingTaskResponse rsp = CreateTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrainingTaskOutcome(rsp);
        else
            return CreateTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::CreateTrainingTaskAsync(const CreateTrainingTaskRequest& request, const CreateTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTrainingTaskRequest&;
    using Resp = CreateTrainingTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTrainingTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateTrainingTaskOutcomeCallable TioneClient::CreateTrainingTaskCallable(const CreateTrainingTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTrainingTaskOutcome>>();
    CreateTrainingTaskAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateTrainingTaskRequest&,
        CreateTrainingTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteDatasetOutcome TioneClient::DeleteDataset(const DeleteDatasetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDatasetResponse rsp = DeleteDatasetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDatasetOutcome(rsp);
        else
            return DeleteDatasetOutcome(o.GetError());
    }
    else
    {
        return DeleteDatasetOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDatasetRequest&;
    using Resp = DeleteDatasetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteDatasetOutcomeCallable TioneClient::DeleteDatasetCallable(const DeleteDatasetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDatasetOutcome>>();
    DeleteDatasetAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteDatasetRequest&,
        DeleteDatasetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteExportOutcome TioneClient::DeleteExport(const DeleteExportRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteExportResponse rsp = DeleteExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteExportOutcome(rsp);
        else
            return DeleteExportOutcome(o.GetError());
    }
    else
    {
        return DeleteExportOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteExportAsync(const DeleteExportRequest& request, const DeleteExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteExportRequest&;
    using Resp = DeleteExportResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteExportOutcomeCallable TioneClient::DeleteExportCallable(const DeleteExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteExportOutcome>>();
    DeleteExportAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteExportRequest&,
        DeleteExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteModelServiceOutcome TioneClient::DeleteModelService(const DeleteModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelServiceResponse rsp = DeleteModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelServiceOutcome(rsp);
        else
            return DeleteModelServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteModelServiceOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteModelServiceAsync(const DeleteModelServiceRequest& request, const DeleteModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteModelServiceRequest&;
    using Resp = DeleteModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteModelServiceOutcomeCallable TioneClient::DeleteModelServiceCallable(const DeleteModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModelServiceOutcome>>();
    DeleteModelServiceAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteModelServiceRequest&,
        DeleteModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteModelServiceAuthTokenOutcome TioneClient::DeleteModelServiceAuthToken(const DeleteModelServiceAuthTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModelServiceAuthToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelServiceAuthTokenResponse rsp = DeleteModelServiceAuthTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelServiceAuthTokenOutcome(rsp);
        else
            return DeleteModelServiceAuthTokenOutcome(o.GetError());
    }
    else
    {
        return DeleteModelServiceAuthTokenOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteModelServiceAuthTokenAsync(const DeleteModelServiceAuthTokenRequest& request, const DeleteModelServiceAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteModelServiceAuthTokenRequest&;
    using Resp = DeleteModelServiceAuthTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteModelServiceAuthToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteModelServiceAuthTokenOutcomeCallable TioneClient::DeleteModelServiceAuthTokenCallable(const DeleteModelServiceAuthTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModelServiceAuthTokenOutcome>>();
    DeleteModelServiceAuthTokenAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteModelServiceAuthTokenRequest&,
        DeleteModelServiceAuthTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteModelServiceGroupOutcome TioneClient::DeleteModelServiceGroup(const DeleteModelServiceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModelServiceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelServiceGroupResponse rsp = DeleteModelServiceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelServiceGroupOutcome(rsp);
        else
            return DeleteModelServiceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteModelServiceGroupOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteModelServiceGroupAsync(const DeleteModelServiceGroupRequest& request, const DeleteModelServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteModelServiceGroupRequest&;
    using Resp = DeleteModelServiceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteModelServiceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteModelServiceGroupOutcomeCallable TioneClient::DeleteModelServiceGroupCallable(const DeleteModelServiceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteModelServiceGroupOutcome>>();
    DeleteModelServiceGroupAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteModelServiceGroupRequest&,
        DeleteModelServiceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteNotebookOutcome TioneClient::DeleteNotebook(const DeleteNotebookRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNotebook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNotebookResponse rsp = DeleteNotebookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNotebookOutcome(rsp);
        else
            return DeleteNotebookOutcome(o.GetError());
    }
    else
    {
        return DeleteNotebookOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteNotebookAsync(const DeleteNotebookRequest& request, const DeleteNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNotebookRequest&;
    using Resp = DeleteNotebookResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNotebook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteNotebookOutcomeCallable TioneClient::DeleteNotebookCallable(const DeleteNotebookRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNotebookOutcome>>();
    DeleteNotebookAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteNotebookRequest&,
        DeleteNotebookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteTrainingModelOutcome TioneClient::DeleteTrainingModel(const DeleteTrainingModelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrainingModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrainingModelResponse rsp = DeleteTrainingModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrainingModelOutcome(rsp);
        else
            return DeleteTrainingModelOutcome(o.GetError());
    }
    else
    {
        return DeleteTrainingModelOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteTrainingModelAsync(const DeleteTrainingModelRequest& request, const DeleteTrainingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTrainingModelRequest&;
    using Resp = DeleteTrainingModelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTrainingModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteTrainingModelOutcomeCallable TioneClient::DeleteTrainingModelCallable(const DeleteTrainingModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTrainingModelOutcome>>();
    DeleteTrainingModelAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteTrainingModelRequest&,
        DeleteTrainingModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteTrainingModelVersionOutcome TioneClient::DeleteTrainingModelVersion(const DeleteTrainingModelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrainingModelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrainingModelVersionResponse rsp = DeleteTrainingModelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrainingModelVersionOutcome(rsp);
        else
            return DeleteTrainingModelVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteTrainingModelVersionOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteTrainingModelVersionAsync(const DeleteTrainingModelVersionRequest& request, const DeleteTrainingModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTrainingModelVersionRequest&;
    using Resp = DeleteTrainingModelVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTrainingModelVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteTrainingModelVersionOutcomeCallable TioneClient::DeleteTrainingModelVersionCallable(const DeleteTrainingModelVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTrainingModelVersionOutcome>>();
    DeleteTrainingModelVersionAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteTrainingModelVersionRequest&,
        DeleteTrainingModelVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteTrainingTaskOutcome TioneClient::DeleteTrainingTask(const DeleteTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrainingTaskResponse rsp = DeleteTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrainingTaskOutcome(rsp);
        else
            return DeleteTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteTrainingTaskAsync(const DeleteTrainingTaskRequest& request, const DeleteTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTrainingTaskRequest&;
    using Resp = DeleteTrainingTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTrainingTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteTrainingTaskOutcomeCallable TioneClient::DeleteTrainingTaskCallable(const DeleteTrainingTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTrainingTaskOutcome>>();
    DeleteTrainingTaskAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteTrainingTaskRequest&,
        DeleteTrainingTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeBillingResourceGroupOutcome TioneClient::DescribeBillingResourceGroup(const DescribeBillingResourceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingResourceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingResourceGroupResponse rsp = DescribeBillingResourceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingResourceGroupOutcome(rsp);
        else
            return DescribeBillingResourceGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingResourceGroupOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBillingResourceGroupAsync(const DescribeBillingResourceGroupRequest& request, const DescribeBillingResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillingResourceGroupRequest&;
    using Resp = DescribeBillingResourceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingResourceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeBillingResourceGroupOutcomeCallable TioneClient::DescribeBillingResourceGroupCallable(const DescribeBillingResourceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingResourceGroupOutcome>>();
    DescribeBillingResourceGroupAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeBillingResourceGroupRequest&,
        DescribeBillingResourceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeBillingResourceGroupsOutcome TioneClient::DescribeBillingResourceGroups(const DescribeBillingResourceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingResourceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingResourceGroupsResponse rsp = DescribeBillingResourceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingResourceGroupsOutcome(rsp);
        else
            return DescribeBillingResourceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingResourceGroupsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBillingResourceGroupsAsync(const DescribeBillingResourceGroupsRequest& request, const DescribeBillingResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillingResourceGroupsRequest&;
    using Resp = DescribeBillingResourceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingResourceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeBillingResourceGroupsOutcomeCallable TioneClient::DescribeBillingResourceGroupsCallable(const DescribeBillingResourceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingResourceGroupsOutcome>>();
    DescribeBillingResourceGroupsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeBillingResourceGroupsRequest&,
        DescribeBillingResourceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeBillingResourceInstanceRunningJobsOutcome TioneClient::DescribeBillingResourceInstanceRunningJobs(const DescribeBillingResourceInstanceRunningJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingResourceInstanceRunningJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingResourceInstanceRunningJobsResponse rsp = DescribeBillingResourceInstanceRunningJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingResourceInstanceRunningJobsOutcome(rsp);
        else
            return DescribeBillingResourceInstanceRunningJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingResourceInstanceRunningJobsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBillingResourceInstanceRunningJobsAsync(const DescribeBillingResourceInstanceRunningJobsRequest& request, const DescribeBillingResourceInstanceRunningJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillingResourceInstanceRunningJobsRequest&;
    using Resp = DescribeBillingResourceInstanceRunningJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingResourceInstanceRunningJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeBillingResourceInstanceRunningJobsOutcomeCallable TioneClient::DescribeBillingResourceInstanceRunningJobsCallable(const DescribeBillingResourceInstanceRunningJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingResourceInstanceRunningJobsOutcome>>();
    DescribeBillingResourceInstanceRunningJobsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeBillingResourceInstanceRunningJobsRequest&,
        DescribeBillingResourceInstanceRunningJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeBillingSpecsOutcome TioneClient::DescribeBillingSpecs(const DescribeBillingSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingSpecsResponse rsp = DescribeBillingSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingSpecsOutcome(rsp);
        else
            return DescribeBillingSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingSpecsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBillingSpecsAsync(const DescribeBillingSpecsRequest& request, const DescribeBillingSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillingSpecsRequest&;
    using Resp = DescribeBillingSpecsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingSpecs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeBillingSpecsOutcomeCallable TioneClient::DescribeBillingSpecsCallable(const DescribeBillingSpecsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingSpecsOutcome>>();
    DescribeBillingSpecsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeBillingSpecsRequest&,
        DescribeBillingSpecsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeBillingSpecsPriceOutcome TioneClient::DescribeBillingSpecsPrice(const DescribeBillingSpecsPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingSpecsPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingSpecsPriceResponse rsp = DescribeBillingSpecsPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingSpecsPriceOutcome(rsp);
        else
            return DescribeBillingSpecsPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingSpecsPriceOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBillingSpecsPriceAsync(const DescribeBillingSpecsPriceRequest& request, const DescribeBillingSpecsPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillingSpecsPriceRequest&;
    using Resp = DescribeBillingSpecsPriceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingSpecsPrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeBillingSpecsPriceOutcomeCallable TioneClient::DescribeBillingSpecsPriceCallable(const DescribeBillingSpecsPriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingSpecsPriceOutcome>>();
    DescribeBillingSpecsPriceAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeBillingSpecsPriceRequest&,
        DescribeBillingSpecsPriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeBuildInImagesOutcome TioneClient::DescribeBuildInImages(const DescribeBuildInImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBuildInImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBuildInImagesResponse rsp = DescribeBuildInImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBuildInImagesOutcome(rsp);
        else
            return DescribeBuildInImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeBuildInImagesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBuildInImagesAsync(const DescribeBuildInImagesRequest& request, const DescribeBuildInImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBuildInImagesRequest&;
    using Resp = DescribeBuildInImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBuildInImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeBuildInImagesOutcomeCallable TioneClient::DescribeBuildInImagesCallable(const DescribeBuildInImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBuildInImagesOutcome>>();
    DescribeBuildInImagesAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeBuildInImagesRequest&,
        DescribeBuildInImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeDatasetsOutcome TioneClient::DescribeDatasets(const DescribeDatasetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasetsResponse rsp = DescribeDatasetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasetsOutcome(rsp);
        else
            return DescribeDatasetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasetsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeDatasetsAsync(const DescribeDatasetsRequest& request, const DescribeDatasetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatasetsRequest&;
    using Resp = DescribeDatasetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatasets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeDatasetsOutcomeCallable TioneClient::DescribeDatasetsCallable(const DescribeDatasetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatasetsOutcome>>();
    DescribeDatasetsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeDatasetsRequest&,
        DescribeDatasetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeEventsOutcome TioneClient::DescribeEvents(const DescribeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventsResponse rsp = DescribeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventsOutcome(rsp);
        else
            return DescribeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventsRequest&;
    using Resp = DescribeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeEventsOutcomeCallable TioneClient::DescribeEventsCallable(const DescribeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventsOutcome>>();
    DescribeEventsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeEventsRequest&,
        DescribeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeExportOutcome TioneClient::DescribeExport(const DescribeExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportResponse rsp = DescribeExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportOutcome(rsp);
        else
            return DescribeExportOutcome(o.GetError());
    }
    else
    {
        return DescribeExportOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeExportAsync(const DescribeExportRequest& request, const DescribeExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExportRequest&;
    using Resp = DescribeExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeExportOutcomeCallable TioneClient::DescribeExportCallable(const DescribeExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExportOutcome>>();
    DescribeExportAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeExportRequest&,
        DescribeExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeInferTemplatesOutcome TioneClient::DescribeInferTemplates(const DescribeInferTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInferTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInferTemplatesResponse rsp = DescribeInferTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInferTemplatesOutcome(rsp);
        else
            return DescribeInferTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeInferTemplatesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeInferTemplatesAsync(const DescribeInferTemplatesRequest& request, const DescribeInferTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInferTemplatesRequest&;
    using Resp = DescribeInferTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInferTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeInferTemplatesOutcomeCallable TioneClient::DescribeInferTemplatesCallable(const DescribeInferTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInferTemplatesOutcome>>();
    DescribeInferTemplatesAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeInferTemplatesRequest&,
        DescribeInferTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeLogsOutcome TioneClient::DescribeLogs(const DescribeLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogsResponse rsp = DescribeLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogsOutcome(rsp);
        else
            return DescribeLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeLogsAsync(const DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogsRequest&;
    using Resp = DescribeLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeLogsOutcomeCallable TioneClient::DescribeLogsCallable(const DescribeLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogsOutcome>>();
    DescribeLogsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeLogsRequest&,
        DescribeLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeModelAccelerateTaskOutcome TioneClient::DescribeModelAccelerateTask(const DescribeModelAccelerateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelAccelerateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelAccelerateTaskResponse rsp = DescribeModelAccelerateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelAccelerateTaskOutcome(rsp);
        else
            return DescribeModelAccelerateTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeModelAccelerateTaskOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelAccelerateTaskAsync(const DescribeModelAccelerateTaskRequest& request, const DescribeModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelAccelerateTaskRequest&;
    using Resp = DescribeModelAccelerateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelAccelerateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeModelAccelerateTaskOutcomeCallable TioneClient::DescribeModelAccelerateTaskCallable(const DescribeModelAccelerateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelAccelerateTaskOutcome>>();
    DescribeModelAccelerateTaskAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeModelAccelerateTaskRequest&,
        DescribeModelAccelerateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeModelAccelerateVersionsOutcome TioneClient::DescribeModelAccelerateVersions(const DescribeModelAccelerateVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelAccelerateVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelAccelerateVersionsResponse rsp = DescribeModelAccelerateVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelAccelerateVersionsOutcome(rsp);
        else
            return DescribeModelAccelerateVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeModelAccelerateVersionsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelAccelerateVersionsAsync(const DescribeModelAccelerateVersionsRequest& request, const DescribeModelAccelerateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelAccelerateVersionsRequest&;
    using Resp = DescribeModelAccelerateVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelAccelerateVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeModelAccelerateVersionsOutcomeCallable TioneClient::DescribeModelAccelerateVersionsCallable(const DescribeModelAccelerateVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelAccelerateVersionsOutcome>>();
    DescribeModelAccelerateVersionsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeModelAccelerateVersionsRequest&,
        DescribeModelAccelerateVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeModelServiceOutcome TioneClient::DescribeModelService(const DescribeModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceResponse rsp = DescribeModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceOutcome(rsp);
        else
            return DescribeModelServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceAsync(const DescribeModelServiceRequest& request, const DescribeModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelServiceRequest&;
    using Resp = DescribeModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeModelServiceOutcomeCallable TioneClient::DescribeModelServiceCallable(const DescribeModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelServiceOutcome>>();
    DescribeModelServiceAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeModelServiceRequest&,
        DescribeModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeModelServiceCallInfoOutcome TioneClient::DescribeModelServiceCallInfo(const DescribeModelServiceCallInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceCallInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceCallInfoResponse rsp = DescribeModelServiceCallInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceCallInfoOutcome(rsp);
        else
            return DescribeModelServiceCallInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceCallInfoOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceCallInfoAsync(const DescribeModelServiceCallInfoRequest& request, const DescribeModelServiceCallInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelServiceCallInfoRequest&;
    using Resp = DescribeModelServiceCallInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelServiceCallInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeModelServiceCallInfoOutcomeCallable TioneClient::DescribeModelServiceCallInfoCallable(const DescribeModelServiceCallInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelServiceCallInfoOutcome>>();
    DescribeModelServiceCallInfoAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeModelServiceCallInfoRequest&,
        DescribeModelServiceCallInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeModelServiceGroupOutcome TioneClient::DescribeModelServiceGroup(const DescribeModelServiceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceGroupResponse rsp = DescribeModelServiceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceGroupOutcome(rsp);
        else
            return DescribeModelServiceGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceGroupOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceGroupAsync(const DescribeModelServiceGroupRequest& request, const DescribeModelServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelServiceGroupRequest&;
    using Resp = DescribeModelServiceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelServiceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeModelServiceGroupOutcomeCallable TioneClient::DescribeModelServiceGroupCallable(const DescribeModelServiceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelServiceGroupOutcome>>();
    DescribeModelServiceGroupAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeModelServiceGroupRequest&,
        DescribeModelServiceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeModelServiceGroupsOutcome TioneClient::DescribeModelServiceGroups(const DescribeModelServiceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceGroupsResponse rsp = DescribeModelServiceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceGroupsOutcome(rsp);
        else
            return DescribeModelServiceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceGroupsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceGroupsAsync(const DescribeModelServiceGroupsRequest& request, const DescribeModelServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelServiceGroupsRequest&;
    using Resp = DescribeModelServiceGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelServiceGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeModelServiceGroupsOutcomeCallable TioneClient::DescribeModelServiceGroupsCallable(const DescribeModelServiceGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelServiceGroupsOutcome>>();
    DescribeModelServiceGroupsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeModelServiceGroupsRequest&,
        DescribeModelServiceGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeModelServiceHotUpdatedOutcome TioneClient::DescribeModelServiceHotUpdated(const DescribeModelServiceHotUpdatedRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceHotUpdated");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceHotUpdatedResponse rsp = DescribeModelServiceHotUpdatedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceHotUpdatedOutcome(rsp);
        else
            return DescribeModelServiceHotUpdatedOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceHotUpdatedOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceHotUpdatedAsync(const DescribeModelServiceHotUpdatedRequest& request, const DescribeModelServiceHotUpdatedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelServiceHotUpdatedRequest&;
    using Resp = DescribeModelServiceHotUpdatedResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelServiceHotUpdated", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeModelServiceHotUpdatedOutcomeCallable TioneClient::DescribeModelServiceHotUpdatedCallable(const DescribeModelServiceHotUpdatedRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelServiceHotUpdatedOutcome>>();
    DescribeModelServiceHotUpdatedAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeModelServiceHotUpdatedRequest&,
        DescribeModelServiceHotUpdatedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeNotebookOutcome TioneClient::DescribeNotebook(const DescribeNotebookRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookResponse rsp = DescribeNotebookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookOutcome(rsp);
        else
            return DescribeNotebookOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookAsync(const DescribeNotebookRequest& request, const DescribeNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookRequest&;
    using Resp = DescribeNotebookResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeNotebookOutcomeCallable TioneClient::DescribeNotebookCallable(const DescribeNotebookRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookOutcome>>();
    DescribeNotebookAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeNotebookRequest&,
        DescribeNotebookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeNotebooksOutcome TioneClient::DescribeNotebooks(const DescribeNotebooksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebooks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebooksResponse rsp = DescribeNotebooksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebooksOutcome(rsp);
        else
            return DescribeNotebooksOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebooksOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebooksAsync(const DescribeNotebooksRequest& request, const DescribeNotebooksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebooksRequest&;
    using Resp = DescribeNotebooksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebooks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeNotebooksOutcomeCallable TioneClient::DescribeNotebooksCallable(const DescribeNotebooksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebooksOutcome>>();
    DescribeNotebooksAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeNotebooksRequest&,
        DescribeNotebooksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribePlatformImagesOutcome TioneClient::DescribePlatformImages(const DescribePlatformImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlatformImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlatformImagesResponse rsp = DescribePlatformImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlatformImagesOutcome(rsp);
        else
            return DescribePlatformImagesOutcome(o.GetError());
    }
    else
    {
        return DescribePlatformImagesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribePlatformImagesAsync(const DescribePlatformImagesRequest& request, const DescribePlatformImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePlatformImagesRequest&;
    using Resp = DescribePlatformImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlatformImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribePlatformImagesOutcomeCallable TioneClient::DescribePlatformImagesCallable(const DescribePlatformImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlatformImagesOutcome>>();
    DescribePlatformImagesAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribePlatformImagesRequest&,
        DescribePlatformImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeSubAccountLinuxUserInfosOutcome TioneClient::DescribeSubAccountLinuxUserInfos(const DescribeSubAccountLinuxUserInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubAccountLinuxUserInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubAccountLinuxUserInfosResponse rsp = DescribeSubAccountLinuxUserInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubAccountLinuxUserInfosOutcome(rsp);
        else
            return DescribeSubAccountLinuxUserInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeSubAccountLinuxUserInfosOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeSubAccountLinuxUserInfosAsync(const DescribeSubAccountLinuxUserInfosRequest& request, const DescribeSubAccountLinuxUserInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubAccountLinuxUserInfosRequest&;
    using Resp = DescribeSubAccountLinuxUserInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubAccountLinuxUserInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeSubAccountLinuxUserInfosOutcomeCallable TioneClient::DescribeSubAccountLinuxUserInfosCallable(const DescribeSubAccountLinuxUserInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubAccountLinuxUserInfosOutcome>>();
    DescribeSubAccountLinuxUserInfosAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeSubAccountLinuxUserInfosRequest&,
        DescribeSubAccountLinuxUserInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeTrainingModelVersionOutcome TioneClient::DescribeTrainingModelVersion(const DescribeTrainingModelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingModelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingModelVersionResponse rsp = DescribeTrainingModelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingModelVersionOutcome(rsp);
        else
            return DescribeTrainingModelVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingModelVersionOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingModelVersionAsync(const DescribeTrainingModelVersionRequest& request, const DescribeTrainingModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingModelVersionRequest&;
    using Resp = DescribeTrainingModelVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingModelVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeTrainingModelVersionOutcomeCallable TioneClient::DescribeTrainingModelVersionCallable(const DescribeTrainingModelVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingModelVersionOutcome>>();
    DescribeTrainingModelVersionAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeTrainingModelVersionRequest&,
        DescribeTrainingModelVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeTrainingModelVersionsOutcome TioneClient::DescribeTrainingModelVersions(const DescribeTrainingModelVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingModelVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingModelVersionsResponse rsp = DescribeTrainingModelVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingModelVersionsOutcome(rsp);
        else
            return DescribeTrainingModelVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingModelVersionsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingModelVersionsAsync(const DescribeTrainingModelVersionsRequest& request, const DescribeTrainingModelVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingModelVersionsRequest&;
    using Resp = DescribeTrainingModelVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingModelVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeTrainingModelVersionsOutcomeCallable TioneClient::DescribeTrainingModelVersionsCallable(const DescribeTrainingModelVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingModelVersionsOutcome>>();
    DescribeTrainingModelVersionsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeTrainingModelVersionsRequest&,
        DescribeTrainingModelVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeTrainingTaskOutcome TioneClient::DescribeTrainingTask(const DescribeTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingTaskResponse rsp = DescribeTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingTaskOutcome(rsp);
        else
            return DescribeTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingTaskAsync(const DescribeTrainingTaskRequest& request, const DescribeTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingTaskRequest&;
    using Resp = DescribeTrainingTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeTrainingTaskOutcomeCallable TioneClient::DescribeTrainingTaskCallable(const DescribeTrainingTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingTaskOutcome>>();
    DescribeTrainingTaskAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeTrainingTaskRequest&,
        DescribeTrainingTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeTrainingTaskPodsOutcome TioneClient::DescribeTrainingTaskPods(const DescribeTrainingTaskPodsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingTaskPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingTaskPodsResponse rsp = DescribeTrainingTaskPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingTaskPodsOutcome(rsp);
        else
            return DescribeTrainingTaskPodsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingTaskPodsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingTaskPodsAsync(const DescribeTrainingTaskPodsRequest& request, const DescribeTrainingTaskPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingTaskPodsRequest&;
    using Resp = DescribeTrainingTaskPodsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingTaskPods", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeTrainingTaskPodsOutcomeCallable TioneClient::DescribeTrainingTaskPodsCallable(const DescribeTrainingTaskPodsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingTaskPodsOutcome>>();
    DescribeTrainingTaskPodsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeTrainingTaskPodsRequest&,
        DescribeTrainingTaskPodsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeTrainingTasksOutcome TioneClient::DescribeTrainingTasks(const DescribeTrainingTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingTasksResponse rsp = DescribeTrainingTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingTasksOutcome(rsp);
        else
            return DescribeTrainingTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingTasksOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingTasksAsync(const DescribeTrainingTasksRequest& request, const DescribeTrainingTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingTasksRequest&;
    using Resp = DescribeTrainingTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeTrainingTasksOutcomeCallable TioneClient::DescribeTrainingTasksCallable(const DescribeTrainingTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingTasksOutcome>>();
    DescribeTrainingTasksAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeTrainingTasksRequest&,
        DescribeTrainingTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::ModifyModelServiceOutcome TioneClient::ModifyModelService(const ModifyModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModelServiceResponse rsp = ModifyModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModelServiceOutcome(rsp);
        else
            return ModifyModelServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyModelServiceOutcome(outcome.GetError());
    }
}

void TioneClient::ModifyModelServiceAsync(const ModifyModelServiceRequest& request, const ModifyModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModelServiceRequest&;
    using Resp = ModifyModelServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModelService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::ModifyModelServiceOutcomeCallable TioneClient::ModifyModelServiceCallable(const ModifyModelServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModelServiceOutcome>>();
    ModifyModelServiceAsync(
    request,
    [prom](
        const TioneClient*,
        const ModifyModelServiceRequest&,
        ModifyModelServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::ModifyModelServiceAuthTokenOutcome TioneClient::ModifyModelServiceAuthToken(const ModifyModelServiceAuthTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModelServiceAuthToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModelServiceAuthTokenResponse rsp = ModifyModelServiceAuthTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModelServiceAuthTokenOutcome(rsp);
        else
            return ModifyModelServiceAuthTokenOutcome(o.GetError());
    }
    else
    {
        return ModifyModelServiceAuthTokenOutcome(outcome.GetError());
    }
}

void TioneClient::ModifyModelServiceAuthTokenAsync(const ModifyModelServiceAuthTokenRequest& request, const ModifyModelServiceAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModelServiceAuthTokenRequest&;
    using Resp = ModifyModelServiceAuthTokenResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModelServiceAuthToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::ModifyModelServiceAuthTokenOutcomeCallable TioneClient::ModifyModelServiceAuthTokenCallable(const ModifyModelServiceAuthTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModelServiceAuthTokenOutcome>>();
    ModifyModelServiceAuthTokenAsync(
    request,
    [prom](
        const TioneClient*,
        const ModifyModelServiceAuthTokenRequest&,
        ModifyModelServiceAuthTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::ModifyModelServiceAuthorizationOutcome TioneClient::ModifyModelServiceAuthorization(const ModifyModelServiceAuthorizationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModelServiceAuthorization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModelServiceAuthorizationResponse rsp = ModifyModelServiceAuthorizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModelServiceAuthorizationOutcome(rsp);
        else
            return ModifyModelServiceAuthorizationOutcome(o.GetError());
    }
    else
    {
        return ModifyModelServiceAuthorizationOutcome(outcome.GetError());
    }
}

void TioneClient::ModifyModelServiceAuthorizationAsync(const ModifyModelServiceAuthorizationRequest& request, const ModifyModelServiceAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyModelServiceAuthorizationRequest&;
    using Resp = ModifyModelServiceAuthorizationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyModelServiceAuthorization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::ModifyModelServiceAuthorizationOutcomeCallable TioneClient::ModifyModelServiceAuthorizationCallable(const ModifyModelServiceAuthorizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyModelServiceAuthorizationOutcome>>();
    ModifyModelServiceAuthorizationAsync(
    request,
    [prom](
        const TioneClient*,
        const ModifyModelServiceAuthorizationRequest&,
        ModifyModelServiceAuthorizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::ModifyNotebookOutcome TioneClient::ModifyNotebook(const ModifyNotebookRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNotebook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNotebookResponse rsp = ModifyNotebookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNotebookOutcome(rsp);
        else
            return ModifyNotebookOutcome(o.GetError());
    }
    else
    {
        return ModifyNotebookOutcome(outcome.GetError());
    }
}

void TioneClient::ModifyNotebookAsync(const ModifyNotebookRequest& request, const ModifyNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNotebookRequest&;
    using Resp = ModifyNotebookResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNotebook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::ModifyNotebookOutcomeCallable TioneClient::ModifyNotebookCallable(const ModifyNotebookRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNotebookOutcome>>();
    ModifyNotebookAsync(
    request,
    [prom](
        const TioneClient*,
        const ModifyNotebookRequest&,
        ModifyNotebookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::ModifyNotebookTagsOutcome TioneClient::ModifyNotebookTags(const ModifyNotebookTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNotebookTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNotebookTagsResponse rsp = ModifyNotebookTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNotebookTagsOutcome(rsp);
        else
            return ModifyNotebookTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyNotebookTagsOutcome(outcome.GetError());
    }
}

void TioneClient::ModifyNotebookTagsAsync(const ModifyNotebookTagsRequest& request, const ModifyNotebookTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNotebookTagsRequest&;
    using Resp = ModifyNotebookTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNotebookTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::ModifyNotebookTagsOutcomeCallable TioneClient::ModifyNotebookTagsCallable(const ModifyNotebookTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNotebookTagsOutcome>>();
    ModifyNotebookTagsAsync(
    request,
    [prom](
        const TioneClient*,
        const ModifyNotebookTagsRequest&,
        ModifyNotebookTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::PushTrainingMetricsOutcome TioneClient::PushTrainingMetrics(const PushTrainingMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "PushTrainingMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PushTrainingMetricsResponse rsp = PushTrainingMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PushTrainingMetricsOutcome(rsp);
        else
            return PushTrainingMetricsOutcome(o.GetError());
    }
    else
    {
        return PushTrainingMetricsOutcome(outcome.GetError());
    }
}

void TioneClient::PushTrainingMetricsAsync(const PushTrainingMetricsRequest& request, const PushTrainingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PushTrainingMetricsRequest&;
    using Resp = PushTrainingMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "PushTrainingMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::PushTrainingMetricsOutcomeCallable TioneClient::PushTrainingMetricsCallable(const PushTrainingMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<PushTrainingMetricsOutcome>>();
    PushTrainingMetricsAsync(
    request,
    [prom](
        const TioneClient*,
        const PushTrainingMetricsRequest&,
        PushTrainingMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::StartNotebookOutcome TioneClient::StartNotebook(const StartNotebookRequest &request)
{
    auto outcome = MakeRequest(request, "StartNotebook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartNotebookResponse rsp = StartNotebookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartNotebookOutcome(rsp);
        else
            return StartNotebookOutcome(o.GetError());
    }
    else
    {
        return StartNotebookOutcome(outcome.GetError());
    }
}

void TioneClient::StartNotebookAsync(const StartNotebookRequest& request, const StartNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartNotebookRequest&;
    using Resp = StartNotebookResponse;

    DoRequestAsync<Req, Resp>(
        "StartNotebook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::StartNotebookOutcomeCallable TioneClient::StartNotebookCallable(const StartNotebookRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartNotebookOutcome>>();
    StartNotebookAsync(
    request,
    [prom](
        const TioneClient*,
        const StartNotebookRequest&,
        StartNotebookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::StartTrainingTaskOutcome TioneClient::StartTrainingTask(const StartTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StartTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartTrainingTaskResponse rsp = StartTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartTrainingTaskOutcome(rsp);
        else
            return StartTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return StartTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::StartTrainingTaskAsync(const StartTrainingTaskRequest& request, const StartTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartTrainingTaskRequest&;
    using Resp = StartTrainingTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StartTrainingTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::StartTrainingTaskOutcomeCallable TioneClient::StartTrainingTaskCallable(const StartTrainingTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartTrainingTaskOutcome>>();
    StartTrainingTaskAsync(
    request,
    [prom](
        const TioneClient*,
        const StartTrainingTaskRequest&,
        StartTrainingTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::StopModelAccelerateTaskOutcome TioneClient::StopModelAccelerateTask(const StopModelAccelerateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopModelAccelerateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopModelAccelerateTaskResponse rsp = StopModelAccelerateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopModelAccelerateTaskOutcome(rsp);
        else
            return StopModelAccelerateTaskOutcome(o.GetError());
    }
    else
    {
        return StopModelAccelerateTaskOutcome(outcome.GetError());
    }
}

void TioneClient::StopModelAccelerateTaskAsync(const StopModelAccelerateTaskRequest& request, const StopModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopModelAccelerateTaskRequest&;
    using Resp = StopModelAccelerateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopModelAccelerateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::StopModelAccelerateTaskOutcomeCallable TioneClient::StopModelAccelerateTaskCallable(const StopModelAccelerateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopModelAccelerateTaskOutcome>>();
    StopModelAccelerateTaskAsync(
    request,
    [prom](
        const TioneClient*,
        const StopModelAccelerateTaskRequest&,
        StopModelAccelerateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::StopNotebookOutcome TioneClient::StopNotebook(const StopNotebookRequest &request)
{
    auto outcome = MakeRequest(request, "StopNotebook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopNotebookResponse rsp = StopNotebookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopNotebookOutcome(rsp);
        else
            return StopNotebookOutcome(o.GetError());
    }
    else
    {
        return StopNotebookOutcome(outcome.GetError());
    }
}

void TioneClient::StopNotebookAsync(const StopNotebookRequest& request, const StopNotebookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopNotebookRequest&;
    using Resp = StopNotebookResponse;

    DoRequestAsync<Req, Resp>(
        "StopNotebook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::StopNotebookOutcomeCallable TioneClient::StopNotebookCallable(const StopNotebookRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopNotebookOutcome>>();
    StopNotebookAsync(
    request,
    [prom](
        const TioneClient*,
        const StopNotebookRequest&,
        StopNotebookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::StopTrainingTaskOutcome TioneClient::StopTrainingTask(const StopTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopTrainingTaskResponse rsp = StopTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopTrainingTaskOutcome(rsp);
        else
            return StopTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return StopTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::StopTrainingTaskAsync(const StopTrainingTaskRequest& request, const StopTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopTrainingTaskRequest&;
    using Resp = StopTrainingTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopTrainingTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::StopTrainingTaskOutcomeCallable TioneClient::StopTrainingTaskCallable(const StopTrainingTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopTrainingTaskOutcome>>();
    StopTrainingTaskAsync(
    request,
    [prom](
        const TioneClient*,
        const StopTrainingTaskRequest&,
        StopTrainingTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::UpdateSubAccountLinuxUserInfoOutcome TioneClient::UpdateSubAccountLinuxUserInfo(const UpdateSubAccountLinuxUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSubAccountLinuxUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSubAccountLinuxUserInfoResponse rsp = UpdateSubAccountLinuxUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSubAccountLinuxUserInfoOutcome(rsp);
        else
            return UpdateSubAccountLinuxUserInfoOutcome(o.GetError());
    }
    else
    {
        return UpdateSubAccountLinuxUserInfoOutcome(outcome.GetError());
    }
}

void TioneClient::UpdateSubAccountLinuxUserInfoAsync(const UpdateSubAccountLinuxUserInfoRequest& request, const UpdateSubAccountLinuxUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSubAccountLinuxUserInfoRequest&;
    using Resp = UpdateSubAccountLinuxUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSubAccountLinuxUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::UpdateSubAccountLinuxUserInfoOutcomeCallable TioneClient::UpdateSubAccountLinuxUserInfoCallable(const UpdateSubAccountLinuxUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSubAccountLinuxUserInfoOutcome>>();
    UpdateSubAccountLinuxUserInfoAsync(
    request,
    [prom](
        const TioneClient*,
        const UpdateSubAccountLinuxUserInfoRequest&,
        UpdateSubAccountLinuxUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

