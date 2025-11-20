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

#include <tencentcloud/tione/v20191022/TioneClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tione::V20191022;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-22";
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


TioneClient::CreateCodeRepositoryOutcome TioneClient::CreateCodeRepository(const CreateCodeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeRepositoryResponse rsp = CreateCodeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeRepositoryOutcome(rsp);
        else
            return CreateCodeRepositoryOutcome(o.GetError());
    }
    else
    {
        return CreateCodeRepositoryOutcome(outcome.GetError());
    }
}

void TioneClient::CreateCodeRepositoryAsync(const CreateCodeRepositoryRequest& request, const CreateCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCodeRepositoryRequest&;
    using Resp = CreateCodeRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCodeRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateCodeRepositoryOutcomeCallable TioneClient::CreateCodeRepositoryCallable(const CreateCodeRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCodeRepositoryOutcome>>();
    CreateCodeRepositoryAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateCodeRepositoryRequest&,
        CreateCodeRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateNotebookInstanceOutcome TioneClient::CreateNotebookInstance(const CreateNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookInstanceResponse rsp = CreateNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookInstanceOutcome(rsp);
        else
            return CreateNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::CreateNotebookInstanceAsync(const CreateNotebookInstanceRequest& request, const CreateNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNotebookInstanceRequest&;
    using Resp = CreateNotebookInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNotebookInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateNotebookInstanceOutcomeCallable TioneClient::CreateNotebookInstanceCallable(const CreateNotebookInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNotebookInstanceOutcome>>();
    CreateNotebookInstanceAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateNotebookInstanceRequest&,
        CreateNotebookInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateNotebookLifecycleScriptOutcome TioneClient::CreateNotebookLifecycleScript(const CreateNotebookLifecycleScriptRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookLifecycleScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookLifecycleScriptResponse rsp = CreateNotebookLifecycleScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookLifecycleScriptOutcome(rsp);
        else
            return CreateNotebookLifecycleScriptOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookLifecycleScriptOutcome(outcome.GetError());
    }
}

void TioneClient::CreateNotebookLifecycleScriptAsync(const CreateNotebookLifecycleScriptRequest& request, const CreateNotebookLifecycleScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNotebookLifecycleScriptRequest&;
    using Resp = CreateNotebookLifecycleScriptResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNotebookLifecycleScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateNotebookLifecycleScriptOutcomeCallable TioneClient::CreateNotebookLifecycleScriptCallable(const CreateNotebookLifecycleScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNotebookLifecycleScriptOutcome>>();
    CreateNotebookLifecycleScriptAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateNotebookLifecycleScriptRequest&,
        CreateNotebookLifecycleScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreatePresignedNotebookInstanceUrlOutcome TioneClient::CreatePresignedNotebookInstanceUrl(const CreatePresignedNotebookInstanceUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePresignedNotebookInstanceUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePresignedNotebookInstanceUrlResponse rsp = CreatePresignedNotebookInstanceUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePresignedNotebookInstanceUrlOutcome(rsp);
        else
            return CreatePresignedNotebookInstanceUrlOutcome(o.GetError());
    }
    else
    {
        return CreatePresignedNotebookInstanceUrlOutcome(outcome.GetError());
    }
}

void TioneClient::CreatePresignedNotebookInstanceUrlAsync(const CreatePresignedNotebookInstanceUrlRequest& request, const CreatePresignedNotebookInstanceUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePresignedNotebookInstanceUrlRequest&;
    using Resp = CreatePresignedNotebookInstanceUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePresignedNotebookInstanceUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreatePresignedNotebookInstanceUrlOutcomeCallable TioneClient::CreatePresignedNotebookInstanceUrlCallable(const CreatePresignedNotebookInstanceUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePresignedNotebookInstanceUrlOutcome>>();
    CreatePresignedNotebookInstanceUrlAsync(
    request,
    [prom](
        const TioneClient*,
        const CreatePresignedNotebookInstanceUrlRequest&,
        CreatePresignedNotebookInstanceUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::CreateTrainingJobOutcome TioneClient::CreateTrainingJob(const CreateTrainingJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrainingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrainingJobResponse rsp = CreateTrainingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrainingJobOutcome(rsp);
        else
            return CreateTrainingJobOutcome(o.GetError());
    }
    else
    {
        return CreateTrainingJobOutcome(outcome.GetError());
    }
}

void TioneClient::CreateTrainingJobAsync(const CreateTrainingJobRequest& request, const CreateTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTrainingJobRequest&;
    using Resp = CreateTrainingJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTrainingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::CreateTrainingJobOutcomeCallable TioneClient::CreateTrainingJobCallable(const CreateTrainingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTrainingJobOutcome>>();
    CreateTrainingJobAsync(
    request,
    [prom](
        const TioneClient*,
        const CreateTrainingJobRequest&,
        CreateTrainingJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteCodeRepositoryOutcome TioneClient::DeleteCodeRepository(const DeleteCodeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeRepositoryResponse rsp = DeleteCodeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeRepositoryOutcome(rsp);
        else
            return DeleteCodeRepositoryOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeRepositoryOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteCodeRepositoryAsync(const DeleteCodeRepositoryRequest& request, const DeleteCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCodeRepositoryRequest&;
    using Resp = DeleteCodeRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCodeRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteCodeRepositoryOutcomeCallable TioneClient::DeleteCodeRepositoryCallable(const DeleteCodeRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCodeRepositoryOutcome>>();
    DeleteCodeRepositoryAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteCodeRepositoryRequest&,
        DeleteCodeRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteNotebookInstanceOutcome TioneClient::DeleteNotebookInstance(const DeleteNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNotebookInstanceResponse rsp = DeleteNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNotebookInstanceOutcome(rsp);
        else
            return DeleteNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteNotebookInstanceAsync(const DeleteNotebookInstanceRequest& request, const DeleteNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNotebookInstanceRequest&;
    using Resp = DeleteNotebookInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNotebookInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteNotebookInstanceOutcomeCallable TioneClient::DeleteNotebookInstanceCallable(const DeleteNotebookInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNotebookInstanceOutcome>>();
    DeleteNotebookInstanceAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteNotebookInstanceRequest&,
        DeleteNotebookInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DeleteNotebookLifecycleScriptOutcome TioneClient::DeleteNotebookLifecycleScript(const DeleteNotebookLifecycleScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNotebookLifecycleScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNotebookLifecycleScriptResponse rsp = DeleteNotebookLifecycleScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNotebookLifecycleScriptOutcome(rsp);
        else
            return DeleteNotebookLifecycleScriptOutcome(o.GetError());
    }
    else
    {
        return DeleteNotebookLifecycleScriptOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteNotebookLifecycleScriptAsync(const DeleteNotebookLifecycleScriptRequest& request, const DeleteNotebookLifecycleScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNotebookLifecycleScriptRequest&;
    using Resp = DeleteNotebookLifecycleScriptResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNotebookLifecycleScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DeleteNotebookLifecycleScriptOutcomeCallable TioneClient::DeleteNotebookLifecycleScriptCallable(const DeleteNotebookLifecycleScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNotebookLifecycleScriptOutcome>>();
    DeleteNotebookLifecycleScriptAsync(
    request,
    [prom](
        const TioneClient*,
        const DeleteNotebookLifecycleScriptRequest&,
        DeleteNotebookLifecycleScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeCodeRepositoriesOutcome TioneClient::DescribeCodeRepositories(const DescribeCodeRepositoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeRepositories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeRepositoriesResponse rsp = DescribeCodeRepositoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeRepositoriesOutcome(rsp);
        else
            return DescribeCodeRepositoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeRepositoriesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeCodeRepositoriesAsync(const DescribeCodeRepositoriesRequest& request, const DescribeCodeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodeRepositoriesRequest&;
    using Resp = DescribeCodeRepositoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodeRepositories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeCodeRepositoriesOutcomeCallable TioneClient::DescribeCodeRepositoriesCallable(const DescribeCodeRepositoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodeRepositoriesOutcome>>();
    DescribeCodeRepositoriesAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeCodeRepositoriesRequest&,
        DescribeCodeRepositoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeCodeRepositoryOutcome TioneClient::DescribeCodeRepository(const DescribeCodeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeRepositoryResponse rsp = DescribeCodeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeRepositoryOutcome(rsp);
        else
            return DescribeCodeRepositoryOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeRepositoryOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeCodeRepositoryAsync(const DescribeCodeRepositoryRequest& request, const DescribeCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCodeRepositoryRequest&;
    using Resp = DescribeCodeRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCodeRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeCodeRepositoryOutcomeCallable TioneClient::DescribeCodeRepositoryCallable(const DescribeCodeRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCodeRepositoryOutcome>>();
    DescribeCodeRepositoryAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeCodeRepositoryRequest&,
        DescribeCodeRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeNotebookInstanceOutcome TioneClient::DescribeNotebookInstance(const DescribeNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookInstanceResponse rsp = DescribeNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookInstanceOutcome(rsp);
        else
            return DescribeNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookInstanceAsync(const DescribeNotebookInstanceRequest& request, const DescribeNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookInstanceRequest&;
    using Resp = DescribeNotebookInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeNotebookInstanceOutcomeCallable TioneClient::DescribeNotebookInstanceCallable(const DescribeNotebookInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookInstanceOutcome>>();
    DescribeNotebookInstanceAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeNotebookInstanceRequest&,
        DescribeNotebookInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeNotebookInstancesOutcome TioneClient::DescribeNotebookInstances(const DescribeNotebookInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookInstancesResponse rsp = DescribeNotebookInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookInstancesOutcome(rsp);
        else
            return DescribeNotebookInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookInstancesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookInstancesAsync(const DescribeNotebookInstancesRequest& request, const DescribeNotebookInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookInstancesRequest&;
    using Resp = DescribeNotebookInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeNotebookInstancesOutcomeCallable TioneClient::DescribeNotebookInstancesCallable(const DescribeNotebookInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookInstancesOutcome>>();
    DescribeNotebookInstancesAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeNotebookInstancesRequest&,
        DescribeNotebookInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeNotebookLifecycleScriptOutcome TioneClient::DescribeNotebookLifecycleScript(const DescribeNotebookLifecycleScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookLifecycleScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookLifecycleScriptResponse rsp = DescribeNotebookLifecycleScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookLifecycleScriptOutcome(rsp);
        else
            return DescribeNotebookLifecycleScriptOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookLifecycleScriptOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookLifecycleScriptAsync(const DescribeNotebookLifecycleScriptRequest& request, const DescribeNotebookLifecycleScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookLifecycleScriptRequest&;
    using Resp = DescribeNotebookLifecycleScriptResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookLifecycleScript", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeNotebookLifecycleScriptOutcomeCallable TioneClient::DescribeNotebookLifecycleScriptCallable(const DescribeNotebookLifecycleScriptRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookLifecycleScriptOutcome>>();
    DescribeNotebookLifecycleScriptAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeNotebookLifecycleScriptRequest&,
        DescribeNotebookLifecycleScriptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeNotebookLifecycleScriptsOutcome TioneClient::DescribeNotebookLifecycleScripts(const DescribeNotebookLifecycleScriptsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookLifecycleScripts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookLifecycleScriptsResponse rsp = DescribeNotebookLifecycleScriptsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookLifecycleScriptsOutcome(rsp);
        else
            return DescribeNotebookLifecycleScriptsOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookLifecycleScriptsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookLifecycleScriptsAsync(const DescribeNotebookLifecycleScriptsRequest& request, const DescribeNotebookLifecycleScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookLifecycleScriptsRequest&;
    using Resp = DescribeNotebookLifecycleScriptsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookLifecycleScripts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeNotebookLifecycleScriptsOutcomeCallable TioneClient::DescribeNotebookLifecycleScriptsCallable(const DescribeNotebookLifecycleScriptsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookLifecycleScriptsOutcome>>();
    DescribeNotebookLifecycleScriptsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeNotebookLifecycleScriptsRequest&,
        DescribeNotebookLifecycleScriptsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeNotebookSummaryOutcome TioneClient::DescribeNotebookSummary(const DescribeNotebookSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSummaryResponse rsp = DescribeNotebookSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSummaryOutcome(rsp);
        else
            return DescribeNotebookSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSummaryOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeNotebookSummaryAsync(const DescribeNotebookSummaryRequest& request, const DescribeNotebookSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotebookSummaryRequest&;
    using Resp = DescribeNotebookSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotebookSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeNotebookSummaryOutcomeCallable TioneClient::DescribeNotebookSummaryCallable(const DescribeNotebookSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotebookSummaryOutcome>>();
    DescribeNotebookSummaryAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeNotebookSummaryRequest&,
        DescribeNotebookSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeTrainingJobOutcome TioneClient::DescribeTrainingJob(const DescribeTrainingJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingJobResponse rsp = DescribeTrainingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingJobOutcome(rsp);
        else
            return DescribeTrainingJobOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingJobOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingJobAsync(const DescribeTrainingJobRequest& request, const DescribeTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingJobRequest&;
    using Resp = DescribeTrainingJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeTrainingJobOutcomeCallable TioneClient::DescribeTrainingJobCallable(const DescribeTrainingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingJobOutcome>>();
    DescribeTrainingJobAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeTrainingJobRequest&,
        DescribeTrainingJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::DescribeTrainingJobsOutcome TioneClient::DescribeTrainingJobs(const DescribeTrainingJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingJobsResponse rsp = DescribeTrainingJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingJobsOutcome(rsp);
        else
            return DescribeTrainingJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingJobsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingJobsAsync(const DescribeTrainingJobsRequest& request, const DescribeTrainingJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrainingJobsRequest&;
    using Resp = DescribeTrainingJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrainingJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::DescribeTrainingJobsOutcomeCallable TioneClient::DescribeTrainingJobsCallable(const DescribeTrainingJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrainingJobsOutcome>>();
    DescribeTrainingJobsAsync(
    request,
    [prom](
        const TioneClient*,
        const DescribeTrainingJobsRequest&,
        DescribeTrainingJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::StartNotebookInstanceOutcome TioneClient::StartNotebookInstance(const StartNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StartNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartNotebookInstanceResponse rsp = StartNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartNotebookInstanceOutcome(rsp);
        else
            return StartNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return StartNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::StartNotebookInstanceAsync(const StartNotebookInstanceRequest& request, const StartNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartNotebookInstanceRequest&;
    using Resp = StartNotebookInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StartNotebookInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::StartNotebookInstanceOutcomeCallable TioneClient::StartNotebookInstanceCallable(const StartNotebookInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartNotebookInstanceOutcome>>();
    StartNotebookInstanceAsync(
    request,
    [prom](
        const TioneClient*,
        const StartNotebookInstanceRequest&,
        StartNotebookInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::StopNotebookInstanceOutcome TioneClient::StopNotebookInstance(const StopNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StopNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopNotebookInstanceResponse rsp = StopNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopNotebookInstanceOutcome(rsp);
        else
            return StopNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return StopNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::StopNotebookInstanceAsync(const StopNotebookInstanceRequest& request, const StopNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopNotebookInstanceRequest&;
    using Resp = StopNotebookInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StopNotebookInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::StopNotebookInstanceOutcomeCallable TioneClient::StopNotebookInstanceCallable(const StopNotebookInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopNotebookInstanceOutcome>>();
    StopNotebookInstanceAsync(
    request,
    [prom](
        const TioneClient*,
        const StopNotebookInstanceRequest&,
        StopNotebookInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::StopTrainingJobOutcome TioneClient::StopTrainingJob(const StopTrainingJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopTrainingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopTrainingJobResponse rsp = StopTrainingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopTrainingJobOutcome(rsp);
        else
            return StopTrainingJobOutcome(o.GetError());
    }
    else
    {
        return StopTrainingJobOutcome(outcome.GetError());
    }
}

void TioneClient::StopTrainingJobAsync(const StopTrainingJobRequest& request, const StopTrainingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopTrainingJobRequest&;
    using Resp = StopTrainingJobResponse;

    DoRequestAsync<Req, Resp>(
        "StopTrainingJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::StopTrainingJobOutcomeCallable TioneClient::StopTrainingJobCallable(const StopTrainingJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopTrainingJobOutcome>>();
    StopTrainingJobAsync(
    request,
    [prom](
        const TioneClient*,
        const StopTrainingJobRequest&,
        StopTrainingJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::UpdateCodeRepositoryOutcome TioneClient::UpdateCodeRepository(const UpdateCodeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCodeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCodeRepositoryResponse rsp = UpdateCodeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCodeRepositoryOutcome(rsp);
        else
            return UpdateCodeRepositoryOutcome(o.GetError());
    }
    else
    {
        return UpdateCodeRepositoryOutcome(outcome.GetError());
    }
}

void TioneClient::UpdateCodeRepositoryAsync(const UpdateCodeRepositoryRequest& request, const UpdateCodeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCodeRepositoryRequest&;
    using Resp = UpdateCodeRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCodeRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::UpdateCodeRepositoryOutcomeCallable TioneClient::UpdateCodeRepositoryCallable(const UpdateCodeRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCodeRepositoryOutcome>>();
    UpdateCodeRepositoryAsync(
    request,
    [prom](
        const TioneClient*,
        const UpdateCodeRepositoryRequest&,
        UpdateCodeRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TioneClient::UpdateNotebookInstanceOutcome TioneClient::UpdateNotebookInstance(const UpdateNotebookInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateNotebookInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateNotebookInstanceResponse rsp = UpdateNotebookInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateNotebookInstanceOutcome(rsp);
        else
            return UpdateNotebookInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateNotebookInstanceOutcome(outcome.GetError());
    }
}

void TioneClient::UpdateNotebookInstanceAsync(const UpdateNotebookInstanceRequest& request, const UpdateNotebookInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateNotebookInstanceRequest&;
    using Resp = UpdateNotebookInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateNotebookInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TioneClient::UpdateNotebookInstanceOutcomeCallable TioneClient::UpdateNotebookInstanceCallable(const UpdateNotebookInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateNotebookInstanceOutcome>>();
    UpdateNotebookInstanceAsync(
    request,
    [prom](
        const TioneClient*,
        const UpdateNotebookInstanceRequest&,
        UpdateNotebookInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

