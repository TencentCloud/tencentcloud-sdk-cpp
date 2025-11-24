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

#include <tencentcloud/dts/v20211206/DtsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dts::V20211206;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-12-06";
    const string ENDPOINT = "dts.tencentcloudapi.com";
}

DtsClient::DtsClient(const Credential &credential, const string &region) :
    DtsClient(credential, region, ClientProfile())
{
}

DtsClient::DtsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DtsClient::CompleteMigrateJobOutcome DtsClient::CompleteMigrateJob(const CompleteMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteMigrateJobResponse rsp = CompleteMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteMigrateJobOutcome(rsp);
        else
            return CompleteMigrateJobOutcome(o.GetError());
    }
    else
    {
        return CompleteMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::CompleteMigrateJobAsync(const CompleteMigrateJobRequest& request, const CompleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CompleteMigrateJobRequest&;
    using Resp = CompleteMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "CompleteMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CompleteMigrateJobOutcomeCallable DtsClient::CompleteMigrateJobCallable(const CompleteMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompleteMigrateJobOutcome>>();
    CompleteMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const CompleteMigrateJobRequest&,
        CompleteMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ConfigureSubscribeJobOutcome DtsClient::ConfigureSubscribeJob(const ConfigureSubscribeJobRequest &request)
{
    auto outcome = MakeRequest(request, "ConfigureSubscribeJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfigureSubscribeJobResponse rsp = ConfigureSubscribeJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfigureSubscribeJobOutcome(rsp);
        else
            return ConfigureSubscribeJobOutcome(o.GetError());
    }
    else
    {
        return ConfigureSubscribeJobOutcome(outcome.GetError());
    }
}

void DtsClient::ConfigureSubscribeJobAsync(const ConfigureSubscribeJobRequest& request, const ConfigureSubscribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConfigureSubscribeJobRequest&;
    using Resp = ConfigureSubscribeJobResponse;

    DoRequestAsync<Req, Resp>(
        "ConfigureSubscribeJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ConfigureSubscribeJobOutcomeCallable DtsClient::ConfigureSubscribeJobCallable(const ConfigureSubscribeJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfigureSubscribeJobOutcome>>();
    ConfigureSubscribeJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ConfigureSubscribeJobRequest&,
        ConfigureSubscribeJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ConfigureSyncJobOutcome DtsClient::ConfigureSyncJob(const ConfigureSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ConfigureSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfigureSyncJobResponse rsp = ConfigureSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfigureSyncJobOutcome(rsp);
        else
            return ConfigureSyncJobOutcome(o.GetError());
    }
    else
    {
        return ConfigureSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ConfigureSyncJobAsync(const ConfigureSyncJobRequest& request, const ConfigureSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConfigureSyncJobRequest&;
    using Resp = ConfigureSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "ConfigureSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ConfigureSyncJobOutcomeCallable DtsClient::ConfigureSyncJobCallable(const ConfigureSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfigureSyncJobOutcome>>();
    ConfigureSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ConfigureSyncJobRequest&,
        ConfigureSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ContinueMigrateJobOutcome DtsClient::ContinueMigrateJob(const ContinueMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "ContinueMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContinueMigrateJobResponse rsp = ContinueMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContinueMigrateJobOutcome(rsp);
        else
            return ContinueMigrateJobOutcome(o.GetError());
    }
    else
    {
        return ContinueMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::ContinueMigrateJobAsync(const ContinueMigrateJobRequest& request, const ContinueMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ContinueMigrateJobRequest&;
    using Resp = ContinueMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "ContinueMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ContinueMigrateJobOutcomeCallable DtsClient::ContinueMigrateJobCallable(const ContinueMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ContinueMigrateJobOutcome>>();
    ContinueMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ContinueMigrateJobRequest&,
        ContinueMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ContinueSyncJobOutcome DtsClient::ContinueSyncJob(const ContinueSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ContinueSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContinueSyncJobResponse rsp = ContinueSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContinueSyncJobOutcome(rsp);
        else
            return ContinueSyncJobOutcome(o.GetError());
    }
    else
    {
        return ContinueSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ContinueSyncJobAsync(const ContinueSyncJobRequest& request, const ContinueSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ContinueSyncJobRequest&;
    using Resp = ContinueSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "ContinueSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ContinueSyncJobOutcomeCallable DtsClient::ContinueSyncJobCallable(const ContinueSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ContinueSyncJobOutcome>>();
    ContinueSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ContinueSyncJobRequest&,
        ContinueSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateCheckSyncJobOutcome DtsClient::CreateCheckSyncJob(const CreateCheckSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCheckSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCheckSyncJobResponse rsp = CreateCheckSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCheckSyncJobOutcome(rsp);
        else
            return CreateCheckSyncJobOutcome(o.GetError());
    }
    else
    {
        return CreateCheckSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateCheckSyncJobAsync(const CreateCheckSyncJobRequest& request, const CreateCheckSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCheckSyncJobRequest&;
    using Resp = CreateCheckSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCheckSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateCheckSyncJobOutcomeCallable DtsClient::CreateCheckSyncJobCallable(const CreateCheckSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCheckSyncJobOutcome>>();
    CreateCheckSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateCheckSyncJobRequest&,
        CreateCheckSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateCompareTaskOutcome DtsClient::CreateCompareTask(const CreateCompareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCompareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCompareTaskResponse rsp = CreateCompareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCompareTaskOutcome(rsp);
        else
            return CreateCompareTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCompareTaskOutcome(outcome.GetError());
    }
}

void DtsClient::CreateCompareTaskAsync(const CreateCompareTaskRequest& request, const CreateCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCompareTaskRequest&;
    using Resp = CreateCompareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCompareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateCompareTaskOutcomeCallable DtsClient::CreateCompareTaskCallable(const CreateCompareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCompareTaskOutcome>>();
    CreateCompareTaskAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateCompareTaskRequest&,
        CreateCompareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateConsumerGroupOutcome DtsClient::CreateConsumerGroup(const CreateConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerGroupResponse rsp = CreateConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerGroupOutcome(rsp);
        else
            return CreateConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerGroupOutcome(outcome.GetError());
    }
}

void DtsClient::CreateConsumerGroupAsync(const CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConsumerGroupRequest&;
    using Resp = CreateConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateConsumerGroupOutcomeCallable DtsClient::CreateConsumerGroupCallable(const CreateConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConsumerGroupOutcome>>();
    CreateConsumerGroupAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateConsumerGroupRequest&,
        CreateConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateMigrateCheckJobOutcome DtsClient::CreateMigrateCheckJob(const CreateMigrateCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrateCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrateCheckJobResponse rsp = CreateMigrateCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrateCheckJobOutcome(rsp);
        else
            return CreateMigrateCheckJobOutcome(o.GetError());
    }
    else
    {
        return CreateMigrateCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateMigrateCheckJobAsync(const CreateMigrateCheckJobRequest& request, const CreateMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMigrateCheckJobRequest&;
    using Resp = CreateMigrateCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMigrateCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateMigrateCheckJobOutcomeCallable DtsClient::CreateMigrateCheckJobCallable(const CreateMigrateCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMigrateCheckJobOutcome>>();
    CreateMigrateCheckJobAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateMigrateCheckJobRequest&,
        CreateMigrateCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateMigrationServiceOutcome DtsClient::CreateMigrationService(const CreateMigrationServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrationService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrationServiceResponse rsp = CreateMigrationServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrationServiceOutcome(rsp);
        else
            return CreateMigrationServiceOutcome(o.GetError());
    }
    else
    {
        return CreateMigrationServiceOutcome(outcome.GetError());
    }
}

void DtsClient::CreateMigrationServiceAsync(const CreateMigrationServiceRequest& request, const CreateMigrationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMigrationServiceRequest&;
    using Resp = CreateMigrationServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMigrationService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateMigrationServiceOutcomeCallable DtsClient::CreateMigrationServiceCallable(const CreateMigrationServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMigrationServiceOutcome>>();
    CreateMigrationServiceAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateMigrationServiceRequest&,
        CreateMigrationServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateModifyCheckSyncJobOutcome DtsClient::CreateModifyCheckSyncJob(const CreateModifyCheckSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModifyCheckSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModifyCheckSyncJobResponse rsp = CreateModifyCheckSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModifyCheckSyncJobOutcome(rsp);
        else
            return CreateModifyCheckSyncJobOutcome(o.GetError());
    }
    else
    {
        return CreateModifyCheckSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateModifyCheckSyncJobAsync(const CreateModifyCheckSyncJobRequest& request, const CreateModifyCheckSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModifyCheckSyncJobRequest&;
    using Resp = CreateModifyCheckSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModifyCheckSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateModifyCheckSyncJobOutcomeCallable DtsClient::CreateModifyCheckSyncJobCallable(const CreateModifyCheckSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModifyCheckSyncJobOutcome>>();
    CreateModifyCheckSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateModifyCheckSyncJobRequest&,
        CreateModifyCheckSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateSubscribeOutcome DtsClient::CreateSubscribe(const CreateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubscribeResponse rsp = CreateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubscribeOutcome(rsp);
        else
            return CreateSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSubscribeAsync(const CreateSubscribeRequest& request, const CreateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubscribeRequest&;
    using Resp = CreateSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateSubscribeOutcomeCallable DtsClient::CreateSubscribeCallable(const CreateSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubscribeOutcome>>();
    CreateSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateSubscribeRequest&,
        CreateSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateSubscribeCheckJobOutcome DtsClient::CreateSubscribeCheckJob(const CreateSubscribeCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubscribeCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubscribeCheckJobResponse rsp = CreateSubscribeCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubscribeCheckJobOutcome(rsp);
        else
            return CreateSubscribeCheckJobOutcome(o.GetError());
    }
    else
    {
        return CreateSubscribeCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSubscribeCheckJobAsync(const CreateSubscribeCheckJobRequest& request, const CreateSubscribeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubscribeCheckJobRequest&;
    using Resp = CreateSubscribeCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubscribeCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateSubscribeCheckJobOutcomeCallable DtsClient::CreateSubscribeCheckJobCallable(const CreateSubscribeCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubscribeCheckJobOutcome>>();
    CreateSubscribeCheckJobAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateSubscribeCheckJobRequest&,
        CreateSubscribeCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateSyncCompareTaskOutcome DtsClient::CreateSyncCompareTask(const CreateSyncCompareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSyncCompareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSyncCompareTaskResponse rsp = CreateSyncCompareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSyncCompareTaskOutcome(rsp);
        else
            return CreateSyncCompareTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSyncCompareTaskOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSyncCompareTaskAsync(const CreateSyncCompareTaskRequest& request, const CreateSyncCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSyncCompareTaskRequest&;
    using Resp = CreateSyncCompareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSyncCompareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateSyncCompareTaskOutcomeCallable DtsClient::CreateSyncCompareTaskCallable(const CreateSyncCompareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSyncCompareTaskOutcome>>();
    CreateSyncCompareTaskAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateSyncCompareTaskRequest&,
        CreateSyncCompareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateSyncJobOutcome DtsClient::CreateSyncJob(const CreateSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSyncJobResponse rsp = CreateSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSyncJobOutcome(rsp);
        else
            return CreateSyncJobOutcome(o.GetError());
    }
    else
    {
        return CreateSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSyncJobAsync(const CreateSyncJobRequest& request, const CreateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSyncJobRequest&;
    using Resp = CreateSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateSyncJobOutcomeCallable DtsClient::CreateSyncJobCallable(const CreateSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSyncJobOutcome>>();
    CreateSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateSyncJobRequest&,
        CreateSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DeleteCompareTaskOutcome DtsClient::DeleteCompareTask(const DeleteCompareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCompareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCompareTaskResponse rsp = DeleteCompareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCompareTaskOutcome(rsp);
        else
            return DeleteCompareTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteCompareTaskOutcome(outcome.GetError());
    }
}

void DtsClient::DeleteCompareTaskAsync(const DeleteCompareTaskRequest& request, const DeleteCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCompareTaskRequest&;
    using Resp = DeleteCompareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCompareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DeleteCompareTaskOutcomeCallable DtsClient::DeleteCompareTaskCallable(const DeleteCompareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCompareTaskOutcome>>();
    DeleteCompareTaskAsync(
    request,
    [prom](
        const DtsClient*,
        const DeleteCompareTaskRequest&,
        DeleteCompareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DeleteConsumerGroupOutcome DtsClient::DeleteConsumerGroup(const DeleteConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsumerGroupResponse rsp = DeleteConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsumerGroupOutcome(rsp);
        else
            return DeleteConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConsumerGroupOutcome(outcome.GetError());
    }
}

void DtsClient::DeleteConsumerGroupAsync(const DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConsumerGroupRequest&;
    using Resp = DeleteConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DeleteConsumerGroupOutcomeCallable DtsClient::DeleteConsumerGroupCallable(const DeleteConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConsumerGroupOutcome>>();
    DeleteConsumerGroupAsync(
    request,
    [prom](
        const DtsClient*,
        const DeleteConsumerGroupRequest&,
        DeleteConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DeleteSyncCompareTaskOutcome DtsClient::DeleteSyncCompareTask(const DeleteSyncCompareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSyncCompareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSyncCompareTaskResponse rsp = DeleteSyncCompareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSyncCompareTaskOutcome(rsp);
        else
            return DeleteSyncCompareTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteSyncCompareTaskOutcome(outcome.GetError());
    }
}

void DtsClient::DeleteSyncCompareTaskAsync(const DeleteSyncCompareTaskRequest& request, const DeleteSyncCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSyncCompareTaskRequest&;
    using Resp = DeleteSyncCompareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSyncCompareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DeleteSyncCompareTaskOutcomeCallable DtsClient::DeleteSyncCompareTaskCallable(const DeleteSyncCompareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSyncCompareTaskOutcome>>();
    DeleteSyncCompareTaskAsync(
    request,
    [prom](
        const DtsClient*,
        const DeleteSyncCompareTaskRequest&,
        DeleteSyncCompareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeCheckSyncJobResultOutcome DtsClient::DescribeCheckSyncJobResult(const DescribeCheckSyncJobResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckSyncJobResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckSyncJobResultResponse rsp = DescribeCheckSyncJobResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckSyncJobResultOutcome(rsp);
        else
            return DescribeCheckSyncJobResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckSyncJobResultOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeCheckSyncJobResultAsync(const DescribeCheckSyncJobResultRequest& request, const DescribeCheckSyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCheckSyncJobResultRequest&;
    using Resp = DescribeCheckSyncJobResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCheckSyncJobResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeCheckSyncJobResultOutcomeCallable DtsClient::DescribeCheckSyncJobResultCallable(const DescribeCheckSyncJobResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCheckSyncJobResultOutcome>>();
    DescribeCheckSyncJobResultAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeCheckSyncJobResultRequest&,
        DescribeCheckSyncJobResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeCompareReportOutcome DtsClient::DescribeCompareReport(const DescribeCompareReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompareReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompareReportResponse rsp = DescribeCompareReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompareReportOutcome(rsp);
        else
            return DescribeCompareReportOutcome(o.GetError());
    }
    else
    {
        return DescribeCompareReportOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeCompareReportAsync(const DescribeCompareReportRequest& request, const DescribeCompareReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCompareReportRequest&;
    using Resp = DescribeCompareReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCompareReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeCompareReportOutcomeCallable DtsClient::DescribeCompareReportCallable(const DescribeCompareReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCompareReportOutcome>>();
    DescribeCompareReportAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeCompareReportRequest&,
        DescribeCompareReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeCompareTasksOutcome DtsClient::DescribeCompareTasks(const DescribeCompareTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompareTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompareTasksResponse rsp = DescribeCompareTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompareTasksOutcome(rsp);
        else
            return DescribeCompareTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeCompareTasksOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeCompareTasksAsync(const DescribeCompareTasksRequest& request, const DescribeCompareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCompareTasksRequest&;
    using Resp = DescribeCompareTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCompareTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeCompareTasksOutcomeCallable DtsClient::DescribeCompareTasksCallable(const DescribeCompareTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCompareTasksOutcome>>();
    DescribeCompareTasksAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeCompareTasksRequest&,
        DescribeCompareTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeConsumerGroupsOutcome DtsClient::DescribeConsumerGroups(const DescribeConsumerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerGroupsResponse rsp = DescribeConsumerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerGroupsOutcome(rsp);
        else
            return DescribeConsumerGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerGroupsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeConsumerGroupsAsync(const DescribeConsumerGroupsRequest& request, const DescribeConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsumerGroupsRequest&;
    using Resp = DescribeConsumerGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsumerGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeConsumerGroupsOutcomeCallable DtsClient::DescribeConsumerGroupsCallable(const DescribeConsumerGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsumerGroupsOutcome>>();
    DescribeConsumerGroupsAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeConsumerGroupsRequest&,
        DescribeConsumerGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeMigrateDBInstancesOutcome DtsClient::DescribeMigrateDBInstances(const DescribeMigrateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrateDBInstancesResponse rsp = DescribeMigrateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrateDBInstancesOutcome(rsp);
        else
            return DescribeMigrateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrateDBInstancesOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrateDBInstancesAsync(const DescribeMigrateDBInstancesRequest& request, const DescribeMigrateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrateDBInstancesRequest&;
    using Resp = DescribeMigrateDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrateDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeMigrateDBInstancesOutcomeCallable DtsClient::DescribeMigrateDBInstancesCallable(const DescribeMigrateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrateDBInstancesOutcome>>();
    DescribeMigrateDBInstancesAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeMigrateDBInstancesRequest&,
        DescribeMigrateDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeMigrationCheckJobOutcome DtsClient::DescribeMigrationCheckJob(const DescribeMigrationCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationCheckJobResponse rsp = DescribeMigrationCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationCheckJobOutcome(rsp);
        else
            return DescribeMigrationCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrationCheckJobAsync(const DescribeMigrationCheckJobRequest& request, const DescribeMigrationCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrationCheckJobRequest&;
    using Resp = DescribeMigrationCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrationCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeMigrationCheckJobOutcomeCallable DtsClient::DescribeMigrationCheckJobCallable(const DescribeMigrationCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrationCheckJobOutcome>>();
    DescribeMigrationCheckJobAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeMigrationCheckJobRequest&,
        DescribeMigrationCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeMigrationDetailOutcome DtsClient::DescribeMigrationDetail(const DescribeMigrationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationDetailResponse rsp = DescribeMigrationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationDetailOutcome(rsp);
        else
            return DescribeMigrationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationDetailOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrationDetailAsync(const DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrationDetailRequest&;
    using Resp = DescribeMigrationDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrationDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeMigrationDetailOutcomeCallable DtsClient::DescribeMigrationDetailCallable(const DescribeMigrationDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrationDetailOutcome>>();
    DescribeMigrationDetailAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeMigrationDetailRequest&,
        DescribeMigrationDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeMigrationJobsOutcome DtsClient::DescribeMigrationJobs(const DescribeMigrationJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationJobsResponse rsp = DescribeMigrationJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationJobsOutcome(rsp);
        else
            return DescribeMigrationJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationJobsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrationJobsAsync(const DescribeMigrationJobsRequest& request, const DescribeMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrationJobsRequest&;
    using Resp = DescribeMigrationJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrationJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeMigrationJobsOutcomeCallable DtsClient::DescribeMigrationJobsCallable(const DescribeMigrationJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrationJobsOutcome>>();
    DescribeMigrationJobsAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeMigrationJobsRequest&,
        DescribeMigrationJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeModifyCheckSyncJobResultOutcome DtsClient::DescribeModifyCheckSyncJobResult(const DescribeModifyCheckSyncJobResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModifyCheckSyncJobResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModifyCheckSyncJobResultResponse rsp = DescribeModifyCheckSyncJobResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModifyCheckSyncJobResultOutcome(rsp);
        else
            return DescribeModifyCheckSyncJobResultOutcome(o.GetError());
    }
    else
    {
        return DescribeModifyCheckSyncJobResultOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeModifyCheckSyncJobResultAsync(const DescribeModifyCheckSyncJobResultRequest& request, const DescribeModifyCheckSyncJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModifyCheckSyncJobResultRequest&;
    using Resp = DescribeModifyCheckSyncJobResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModifyCheckSyncJobResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeModifyCheckSyncJobResultOutcomeCallable DtsClient::DescribeModifyCheckSyncJobResultCallable(const DescribeModifyCheckSyncJobResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModifyCheckSyncJobResultOutcome>>();
    DescribeModifyCheckSyncJobResultAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeModifyCheckSyncJobResultRequest&,
        DescribeModifyCheckSyncJobResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeOffsetByTimeOutcome DtsClient::DescribeOffsetByTime(const DescribeOffsetByTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOffsetByTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOffsetByTimeResponse rsp = DescribeOffsetByTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOffsetByTimeOutcome(rsp);
        else
            return DescribeOffsetByTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeOffsetByTimeOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeOffsetByTimeAsync(const DescribeOffsetByTimeRequest& request, const DescribeOffsetByTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOffsetByTimeRequest&;
    using Resp = DescribeOffsetByTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOffsetByTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeOffsetByTimeOutcomeCallable DtsClient::DescribeOffsetByTimeCallable(const DescribeOffsetByTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOffsetByTimeOutcome>>();
    DescribeOffsetByTimeAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeOffsetByTimeRequest&,
        DescribeOffsetByTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeSubscribeCheckJobOutcome DtsClient::DescribeSubscribeCheckJob(const DescribeSubscribeCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeCheckJobResponse rsp = DescribeSubscribeCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeCheckJobOutcome(rsp);
        else
            return DescribeSubscribeCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeCheckJobAsync(const DescribeSubscribeCheckJobRequest& request, const DescribeSubscribeCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubscribeCheckJobRequest&;
    using Resp = DescribeSubscribeCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubscribeCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeSubscribeCheckJobOutcomeCallable DtsClient::DescribeSubscribeCheckJobCallable(const DescribeSubscribeCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubscribeCheckJobOutcome>>();
    DescribeSubscribeCheckJobAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeSubscribeCheckJobRequest&,
        DescribeSubscribeCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeSubscribeDetailOutcome DtsClient::DescribeSubscribeDetail(const DescribeSubscribeDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeDetailResponse rsp = DescribeSubscribeDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeDetailOutcome(rsp);
        else
            return DescribeSubscribeDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeDetailOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeDetailAsync(const DescribeSubscribeDetailRequest& request, const DescribeSubscribeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubscribeDetailRequest&;
    using Resp = DescribeSubscribeDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubscribeDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeSubscribeDetailOutcomeCallable DtsClient::DescribeSubscribeDetailCallable(const DescribeSubscribeDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubscribeDetailOutcome>>();
    DescribeSubscribeDetailAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeSubscribeDetailRequest&,
        DescribeSubscribeDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeSubscribeJobsOutcome DtsClient::DescribeSubscribeJobs(const DescribeSubscribeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeJobsResponse rsp = DescribeSubscribeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeJobsOutcome(rsp);
        else
            return DescribeSubscribeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeJobsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeJobsAsync(const DescribeSubscribeJobsRequest& request, const DescribeSubscribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubscribeJobsRequest&;
    using Resp = DescribeSubscribeJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubscribeJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeSubscribeJobsOutcomeCallable DtsClient::DescribeSubscribeJobsCallable(const DescribeSubscribeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubscribeJobsOutcome>>();
    DescribeSubscribeJobsAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeSubscribeJobsRequest&,
        DescribeSubscribeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeSubscribeReturnableOutcome DtsClient::DescribeSubscribeReturnable(const DescribeSubscribeReturnableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeReturnable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeReturnableResponse rsp = DescribeSubscribeReturnableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeReturnableOutcome(rsp);
        else
            return DescribeSubscribeReturnableOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeReturnableOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeReturnableAsync(const DescribeSubscribeReturnableRequest& request, const DescribeSubscribeReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubscribeReturnableRequest&;
    using Resp = DescribeSubscribeReturnableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubscribeReturnable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeSubscribeReturnableOutcomeCallable DtsClient::DescribeSubscribeReturnableCallable(const DescribeSubscribeReturnableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubscribeReturnableOutcome>>();
    DescribeSubscribeReturnableAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeSubscribeReturnableRequest&,
        DescribeSubscribeReturnableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeSyncCompareReportOutcome DtsClient::DescribeSyncCompareReport(const DescribeSyncCompareReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSyncCompareReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSyncCompareReportResponse rsp = DescribeSyncCompareReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSyncCompareReportOutcome(rsp);
        else
            return DescribeSyncCompareReportOutcome(o.GetError());
    }
    else
    {
        return DescribeSyncCompareReportOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSyncCompareReportAsync(const DescribeSyncCompareReportRequest& request, const DescribeSyncCompareReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSyncCompareReportRequest&;
    using Resp = DescribeSyncCompareReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSyncCompareReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeSyncCompareReportOutcomeCallable DtsClient::DescribeSyncCompareReportCallable(const DescribeSyncCompareReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSyncCompareReportOutcome>>();
    DescribeSyncCompareReportAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeSyncCompareReportRequest&,
        DescribeSyncCompareReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeSyncCompareTasksOutcome DtsClient::DescribeSyncCompareTasks(const DescribeSyncCompareTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSyncCompareTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSyncCompareTasksResponse rsp = DescribeSyncCompareTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSyncCompareTasksOutcome(rsp);
        else
            return DescribeSyncCompareTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeSyncCompareTasksOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSyncCompareTasksAsync(const DescribeSyncCompareTasksRequest& request, const DescribeSyncCompareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSyncCompareTasksRequest&;
    using Resp = DescribeSyncCompareTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSyncCompareTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeSyncCompareTasksOutcomeCallable DtsClient::DescribeSyncCompareTasksCallable(const DescribeSyncCompareTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSyncCompareTasksOutcome>>();
    DescribeSyncCompareTasksAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeSyncCompareTasksRequest&,
        DescribeSyncCompareTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeSyncJobsOutcome DtsClient::DescribeSyncJobs(const DescribeSyncJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSyncJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSyncJobsResponse rsp = DescribeSyncJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSyncJobsOutcome(rsp);
        else
            return DescribeSyncJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeSyncJobsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSyncJobsAsync(const DescribeSyncJobsRequest& request, const DescribeSyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSyncJobsRequest&;
    using Resp = DescribeSyncJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSyncJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeSyncJobsOutcomeCallable DtsClient::DescribeSyncJobsCallable(const DescribeSyncJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSyncJobsOutcome>>();
    DescribeSyncJobsAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeSyncJobsRequest&,
        DescribeSyncJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DestroyIsolatedSubscribeOutcome DtsClient::DestroyIsolatedSubscribe(const DestroyIsolatedSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyIsolatedSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyIsolatedSubscribeResponse rsp = DestroyIsolatedSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyIsolatedSubscribeOutcome(rsp);
        else
            return DestroyIsolatedSubscribeOutcome(o.GetError());
    }
    else
    {
        return DestroyIsolatedSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::DestroyIsolatedSubscribeAsync(const DestroyIsolatedSubscribeRequest& request, const DestroyIsolatedSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyIsolatedSubscribeRequest&;
    using Resp = DestroyIsolatedSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyIsolatedSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DestroyIsolatedSubscribeOutcomeCallable DtsClient::DestroyIsolatedSubscribeCallable(const DestroyIsolatedSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyIsolatedSubscribeOutcome>>();
    DestroyIsolatedSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const DestroyIsolatedSubscribeRequest&,
        DestroyIsolatedSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DestroyMigrateJobOutcome DtsClient::DestroyMigrateJob(const DestroyMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyMigrateJobResponse rsp = DestroyMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyMigrateJobOutcome(rsp);
        else
            return DestroyMigrateJobOutcome(o.GetError());
    }
    else
    {
        return DestroyMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::DestroyMigrateJobAsync(const DestroyMigrateJobRequest& request, const DestroyMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyMigrateJobRequest&;
    using Resp = DestroyMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DestroyMigrateJobOutcomeCallable DtsClient::DestroyMigrateJobCallable(const DestroyMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyMigrateJobOutcome>>();
    DestroyMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const DestroyMigrateJobRequest&,
        DestroyMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DestroySyncJobOutcome DtsClient::DestroySyncJob(const DestroySyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "DestroySyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroySyncJobResponse rsp = DestroySyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroySyncJobOutcome(rsp);
        else
            return DestroySyncJobOutcome(o.GetError());
    }
    else
    {
        return DestroySyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::DestroySyncJobAsync(const DestroySyncJobRequest& request, const DestroySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroySyncJobRequest&;
    using Resp = DestroySyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "DestroySyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DestroySyncJobOutcomeCallable DtsClient::DestroySyncJobCallable(const DestroySyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroySyncJobOutcome>>();
    DestroySyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const DestroySyncJobRequest&,
        DestroySyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::IsolateMigrateJobOutcome DtsClient::IsolateMigrateJob(const IsolateMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateMigrateJobResponse rsp = IsolateMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateMigrateJobOutcome(rsp);
        else
            return IsolateMigrateJobOutcome(o.GetError());
    }
    else
    {
        return IsolateMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::IsolateMigrateJobAsync(const IsolateMigrateJobRequest& request, const IsolateMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateMigrateJobRequest&;
    using Resp = IsolateMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::IsolateMigrateJobOutcomeCallable DtsClient::IsolateMigrateJobCallable(const IsolateMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateMigrateJobOutcome>>();
    IsolateMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const IsolateMigrateJobRequest&,
        IsolateMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::IsolateSubscribeOutcome DtsClient::IsolateSubscribe(const IsolateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateSubscribeResponse rsp = IsolateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateSubscribeOutcome(rsp);
        else
            return IsolateSubscribeOutcome(o.GetError());
    }
    else
    {
        return IsolateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::IsolateSubscribeAsync(const IsolateSubscribeRequest& request, const IsolateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateSubscribeRequest&;
    using Resp = IsolateSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::IsolateSubscribeOutcomeCallable DtsClient::IsolateSubscribeCallable(const IsolateSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateSubscribeOutcome>>();
    IsolateSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const IsolateSubscribeRequest&,
        IsolateSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::IsolateSyncJobOutcome DtsClient::IsolateSyncJob(const IsolateSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateSyncJobResponse rsp = IsolateSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateSyncJobOutcome(rsp);
        else
            return IsolateSyncJobOutcome(o.GetError());
    }
    else
    {
        return IsolateSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::IsolateSyncJobAsync(const IsolateSyncJobRequest& request, const IsolateSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateSyncJobRequest&;
    using Resp = IsolateSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::IsolateSyncJobOutcomeCallable DtsClient::IsolateSyncJobCallable(const IsolateSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateSyncJobOutcome>>();
    IsolateSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const IsolateSyncJobRequest&,
        IsolateSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyCompareTaskOutcome DtsClient::ModifyCompareTask(const ModifyCompareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCompareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCompareTaskResponse rsp = ModifyCompareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCompareTaskOutcome(rsp);
        else
            return ModifyCompareTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyCompareTaskOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyCompareTaskAsync(const ModifyCompareTaskRequest& request, const ModifyCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCompareTaskRequest&;
    using Resp = ModifyCompareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCompareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyCompareTaskOutcomeCallable DtsClient::ModifyCompareTaskCallable(const ModifyCompareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCompareTaskOutcome>>();
    ModifyCompareTaskAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyCompareTaskRequest&,
        ModifyCompareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyCompareTaskNameOutcome DtsClient::ModifyCompareTaskName(const ModifyCompareTaskNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCompareTaskName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCompareTaskNameResponse rsp = ModifyCompareTaskNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCompareTaskNameOutcome(rsp);
        else
            return ModifyCompareTaskNameOutcome(o.GetError());
    }
    else
    {
        return ModifyCompareTaskNameOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyCompareTaskNameAsync(const ModifyCompareTaskNameRequest& request, const ModifyCompareTaskNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCompareTaskNameRequest&;
    using Resp = ModifyCompareTaskNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCompareTaskName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyCompareTaskNameOutcomeCallable DtsClient::ModifyCompareTaskNameCallable(const ModifyCompareTaskNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCompareTaskNameOutcome>>();
    ModifyCompareTaskNameAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyCompareTaskNameRequest&,
        ModifyCompareTaskNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyConsumerGroupDescriptionOutcome DtsClient::ModifyConsumerGroupDescription(const ModifyConsumerGroupDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumerGroupDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerGroupDescriptionResponse rsp = ModifyConsumerGroupDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerGroupDescriptionOutcome(rsp);
        else
            return ModifyConsumerGroupDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerGroupDescriptionOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyConsumerGroupDescriptionAsync(const ModifyConsumerGroupDescriptionRequest& request, const ModifyConsumerGroupDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConsumerGroupDescriptionRequest&;
    using Resp = ModifyConsumerGroupDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConsumerGroupDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyConsumerGroupDescriptionOutcomeCallable DtsClient::ModifyConsumerGroupDescriptionCallable(const ModifyConsumerGroupDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConsumerGroupDescriptionOutcome>>();
    ModifyConsumerGroupDescriptionAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyConsumerGroupDescriptionRequest&,
        ModifyConsumerGroupDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyConsumerGroupPasswordOutcome DtsClient::ModifyConsumerGroupPassword(const ModifyConsumerGroupPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumerGroupPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerGroupPasswordResponse rsp = ModifyConsumerGroupPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerGroupPasswordOutcome(rsp);
        else
            return ModifyConsumerGroupPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerGroupPasswordOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyConsumerGroupPasswordAsync(const ModifyConsumerGroupPasswordRequest& request, const ModifyConsumerGroupPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConsumerGroupPasswordRequest&;
    using Resp = ModifyConsumerGroupPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConsumerGroupPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyConsumerGroupPasswordOutcomeCallable DtsClient::ModifyConsumerGroupPasswordCallable(const ModifyConsumerGroupPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConsumerGroupPasswordOutcome>>();
    ModifyConsumerGroupPasswordAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyConsumerGroupPasswordRequest&,
        ModifyConsumerGroupPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyMigrateJobSpecOutcome DtsClient::ModifyMigrateJobSpec(const ModifyMigrateJobSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateJobSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateJobSpecResponse rsp = ModifyMigrateJobSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateJobSpecOutcome(rsp);
        else
            return ModifyMigrateJobSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateJobSpecOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateJobSpecAsync(const ModifyMigrateJobSpecRequest& request, const ModifyMigrateJobSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMigrateJobSpecRequest&;
    using Resp = ModifyMigrateJobSpecResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMigrateJobSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyMigrateJobSpecOutcomeCallable DtsClient::ModifyMigrateJobSpecCallable(const ModifyMigrateJobSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMigrateJobSpecOutcome>>();
    ModifyMigrateJobSpecAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyMigrateJobSpecRequest&,
        ModifyMigrateJobSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyMigrateNameOutcome DtsClient::ModifyMigrateName(const ModifyMigrateNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateNameResponse rsp = ModifyMigrateNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateNameOutcome(rsp);
        else
            return ModifyMigrateNameOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateNameOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateNameAsync(const ModifyMigrateNameRequest& request, const ModifyMigrateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMigrateNameRequest&;
    using Resp = ModifyMigrateNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMigrateName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyMigrateNameOutcomeCallable DtsClient::ModifyMigrateNameCallable(const ModifyMigrateNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMigrateNameOutcome>>();
    ModifyMigrateNameAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyMigrateNameRequest&,
        ModifyMigrateNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyMigrateRateLimitOutcome DtsClient::ModifyMigrateRateLimit(const ModifyMigrateRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateRateLimitResponse rsp = ModifyMigrateRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateRateLimitOutcome(rsp);
        else
            return ModifyMigrateRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateRateLimitOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateRateLimitAsync(const ModifyMigrateRateLimitRequest& request, const ModifyMigrateRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMigrateRateLimitRequest&;
    using Resp = ModifyMigrateRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMigrateRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyMigrateRateLimitOutcomeCallable DtsClient::ModifyMigrateRateLimitCallable(const ModifyMigrateRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMigrateRateLimitOutcome>>();
    ModifyMigrateRateLimitAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyMigrateRateLimitRequest&,
        ModifyMigrateRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyMigrateRuntimeAttributeOutcome DtsClient::ModifyMigrateRuntimeAttribute(const ModifyMigrateRuntimeAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateRuntimeAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateRuntimeAttributeResponse rsp = ModifyMigrateRuntimeAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateRuntimeAttributeOutcome(rsp);
        else
            return ModifyMigrateRuntimeAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateRuntimeAttributeOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateRuntimeAttributeAsync(const ModifyMigrateRuntimeAttributeRequest& request, const ModifyMigrateRuntimeAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMigrateRuntimeAttributeRequest&;
    using Resp = ModifyMigrateRuntimeAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMigrateRuntimeAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyMigrateRuntimeAttributeOutcomeCallable DtsClient::ModifyMigrateRuntimeAttributeCallable(const ModifyMigrateRuntimeAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMigrateRuntimeAttributeOutcome>>();
    ModifyMigrateRuntimeAttributeAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyMigrateRuntimeAttributeRequest&,
        ModifyMigrateRuntimeAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyMigrationJobOutcome DtsClient::ModifyMigrationJob(const ModifyMigrationJobRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrationJobResponse rsp = ModifyMigrationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrationJobOutcome(rsp);
        else
            return ModifyMigrationJobOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrationJobOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrationJobAsync(const ModifyMigrationJobRequest& request, const ModifyMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMigrationJobRequest&;
    using Resp = ModifyMigrationJobResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMigrationJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyMigrationJobOutcomeCallable DtsClient::ModifyMigrationJobCallable(const ModifyMigrationJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMigrationJobOutcome>>();
    ModifyMigrationJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyMigrationJobRequest&,
        ModifyMigrationJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySubscribeAutoRenewFlagOutcome DtsClient::ModifySubscribeAutoRenewFlag(const ModifySubscribeAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeAutoRenewFlagResponse rsp = ModifySubscribeAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeAutoRenewFlagOutcome(rsp);
        else
            return ModifySubscribeAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeAutoRenewFlagOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeAutoRenewFlagAsync(const ModifySubscribeAutoRenewFlagRequest& request, const ModifySubscribeAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubscribeAutoRenewFlagRequest&;
    using Resp = ModifySubscribeAutoRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubscribeAutoRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySubscribeAutoRenewFlagOutcomeCallable DtsClient::ModifySubscribeAutoRenewFlagCallable(const ModifySubscribeAutoRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubscribeAutoRenewFlagOutcome>>();
    ModifySubscribeAutoRenewFlagAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySubscribeAutoRenewFlagRequest&,
        ModifySubscribeAutoRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySubscribeNameOutcome DtsClient::ModifySubscribeName(const ModifySubscribeNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeNameResponse rsp = ModifySubscribeNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeNameOutcome(rsp);
        else
            return ModifySubscribeNameOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeNameOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeNameAsync(const ModifySubscribeNameRequest& request, const ModifySubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubscribeNameRequest&;
    using Resp = ModifySubscribeNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubscribeName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySubscribeNameOutcomeCallable DtsClient::ModifySubscribeNameCallable(const ModifySubscribeNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubscribeNameOutcome>>();
    ModifySubscribeNameAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySubscribeNameRequest&,
        ModifySubscribeNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySubscribeObjectsOutcome DtsClient::ModifySubscribeObjects(const ModifySubscribeObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeObjectsResponse rsp = ModifySubscribeObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeObjectsOutcome(rsp);
        else
            return ModifySubscribeObjectsOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeObjectsOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeObjectsAsync(const ModifySubscribeObjectsRequest& request, const ModifySubscribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubscribeObjectsRequest&;
    using Resp = ModifySubscribeObjectsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubscribeObjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySubscribeObjectsOutcomeCallable DtsClient::ModifySubscribeObjectsCallable(const ModifySubscribeObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubscribeObjectsOutcome>>();
    ModifySubscribeObjectsAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySubscribeObjectsRequest&,
        ModifySubscribeObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySyncCompareTaskOutcome DtsClient::ModifySyncCompareTask(const ModifySyncCompareTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySyncCompareTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySyncCompareTaskResponse rsp = ModifySyncCompareTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySyncCompareTaskOutcome(rsp);
        else
            return ModifySyncCompareTaskOutcome(o.GetError());
    }
    else
    {
        return ModifySyncCompareTaskOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySyncCompareTaskAsync(const ModifySyncCompareTaskRequest& request, const ModifySyncCompareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySyncCompareTaskRequest&;
    using Resp = ModifySyncCompareTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySyncCompareTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySyncCompareTaskOutcomeCallable DtsClient::ModifySyncCompareTaskCallable(const ModifySyncCompareTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySyncCompareTaskOutcome>>();
    ModifySyncCompareTaskAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySyncCompareTaskRequest&,
        ModifySyncCompareTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySyncCompareTaskNameOutcome DtsClient::ModifySyncCompareTaskName(const ModifySyncCompareTaskNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySyncCompareTaskName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySyncCompareTaskNameResponse rsp = ModifySyncCompareTaskNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySyncCompareTaskNameOutcome(rsp);
        else
            return ModifySyncCompareTaskNameOutcome(o.GetError());
    }
    else
    {
        return ModifySyncCompareTaskNameOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySyncCompareTaskNameAsync(const ModifySyncCompareTaskNameRequest& request, const ModifySyncCompareTaskNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySyncCompareTaskNameRequest&;
    using Resp = ModifySyncCompareTaskNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySyncCompareTaskName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySyncCompareTaskNameOutcomeCallable DtsClient::ModifySyncCompareTaskNameCallable(const ModifySyncCompareTaskNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySyncCompareTaskNameOutcome>>();
    ModifySyncCompareTaskNameAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySyncCompareTaskNameRequest&,
        ModifySyncCompareTaskNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySyncJobConfigOutcome DtsClient::ModifySyncJobConfig(const ModifySyncJobConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySyncJobConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySyncJobConfigResponse rsp = ModifySyncJobConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySyncJobConfigOutcome(rsp);
        else
            return ModifySyncJobConfigOutcome(o.GetError());
    }
    else
    {
        return ModifySyncJobConfigOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySyncJobConfigAsync(const ModifySyncJobConfigRequest& request, const ModifySyncJobConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySyncJobConfigRequest&;
    using Resp = ModifySyncJobConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySyncJobConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySyncJobConfigOutcomeCallable DtsClient::ModifySyncJobConfigCallable(const ModifySyncJobConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySyncJobConfigOutcome>>();
    ModifySyncJobConfigAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySyncJobConfigRequest&,
        ModifySyncJobConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySyncRateLimitOutcome DtsClient::ModifySyncRateLimit(const ModifySyncRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySyncRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySyncRateLimitResponse rsp = ModifySyncRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySyncRateLimitOutcome(rsp);
        else
            return ModifySyncRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifySyncRateLimitOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySyncRateLimitAsync(const ModifySyncRateLimitRequest& request, const ModifySyncRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySyncRateLimitRequest&;
    using Resp = ModifySyncRateLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySyncRateLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySyncRateLimitOutcomeCallable DtsClient::ModifySyncRateLimitCallable(const ModifySyncRateLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySyncRateLimitOutcome>>();
    ModifySyncRateLimitAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySyncRateLimitRequest&,
        ModifySyncRateLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::PauseMigrateJobOutcome DtsClient::PauseMigrateJob(const PauseMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "PauseMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseMigrateJobResponse rsp = PauseMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseMigrateJobOutcome(rsp);
        else
            return PauseMigrateJobOutcome(o.GetError());
    }
    else
    {
        return PauseMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::PauseMigrateJobAsync(const PauseMigrateJobRequest& request, const PauseMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseMigrateJobRequest&;
    using Resp = PauseMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "PauseMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::PauseMigrateJobOutcomeCallable DtsClient::PauseMigrateJobCallable(const PauseMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseMigrateJobOutcome>>();
    PauseMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const PauseMigrateJobRequest&,
        PauseMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::PauseSyncJobOutcome DtsClient::PauseSyncJob(const PauseSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "PauseSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PauseSyncJobResponse rsp = PauseSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PauseSyncJobOutcome(rsp);
        else
            return PauseSyncJobOutcome(o.GetError());
    }
    else
    {
        return PauseSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::PauseSyncJobAsync(const PauseSyncJobRequest& request, const PauseSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PauseSyncJobRequest&;
    using Resp = PauseSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "PauseSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::PauseSyncJobOutcomeCallable DtsClient::PauseSyncJobCallable(const PauseSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<PauseSyncJobOutcome>>();
    PauseSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const PauseSyncJobRequest&,
        PauseSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::RecoverMigrateJobOutcome DtsClient::RecoverMigrateJob(const RecoverMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverMigrateJobResponse rsp = RecoverMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverMigrateJobOutcome(rsp);
        else
            return RecoverMigrateJobOutcome(o.GetError());
    }
    else
    {
        return RecoverMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::RecoverMigrateJobAsync(const RecoverMigrateJobRequest& request, const RecoverMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverMigrateJobRequest&;
    using Resp = RecoverMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::RecoverMigrateJobOutcomeCallable DtsClient::RecoverMigrateJobCallable(const RecoverMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverMigrateJobOutcome>>();
    RecoverMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const RecoverMigrateJobRequest&,
        RecoverMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::RecoverSyncJobOutcome DtsClient::RecoverSyncJob(const RecoverSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverSyncJobResponse rsp = RecoverSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverSyncJobOutcome(rsp);
        else
            return RecoverSyncJobOutcome(o.GetError());
    }
    else
    {
        return RecoverSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::RecoverSyncJobAsync(const RecoverSyncJobRequest& request, const RecoverSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverSyncJobRequest&;
    using Resp = RecoverSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::RecoverSyncJobOutcomeCallable DtsClient::RecoverSyncJobCallable(const RecoverSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverSyncJobOutcome>>();
    RecoverSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const RecoverSyncJobRequest&,
        RecoverSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ResetConsumerGroupOffsetOutcome DtsClient::ResetConsumerGroupOffset(const ResetConsumerGroupOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "ResetConsumerGroupOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetConsumerGroupOffsetResponse rsp = ResetConsumerGroupOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetConsumerGroupOffsetOutcome(rsp);
        else
            return ResetConsumerGroupOffsetOutcome(o.GetError());
    }
    else
    {
        return ResetConsumerGroupOffsetOutcome(outcome.GetError());
    }
}

void DtsClient::ResetConsumerGroupOffsetAsync(const ResetConsumerGroupOffsetRequest& request, const ResetConsumerGroupOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetConsumerGroupOffsetRequest&;
    using Resp = ResetConsumerGroupOffsetResponse;

    DoRequestAsync<Req, Resp>(
        "ResetConsumerGroupOffset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ResetConsumerGroupOffsetOutcomeCallable DtsClient::ResetConsumerGroupOffsetCallable(const ResetConsumerGroupOffsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetConsumerGroupOffsetOutcome>>();
    ResetConsumerGroupOffsetAsync(
    request,
    [prom](
        const DtsClient*,
        const ResetConsumerGroupOffsetRequest&,
        ResetConsumerGroupOffsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ResetSubscribeOutcome DtsClient::ResetSubscribe(const ResetSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ResetSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetSubscribeResponse rsp = ResetSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetSubscribeOutcome(rsp);
        else
            return ResetSubscribeOutcome(o.GetError());
    }
    else
    {
        return ResetSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::ResetSubscribeAsync(const ResetSubscribeRequest& request, const ResetSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetSubscribeRequest&;
    using Resp = ResetSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "ResetSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ResetSubscribeOutcomeCallable DtsClient::ResetSubscribeCallable(const ResetSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetSubscribeOutcome>>();
    ResetSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const ResetSubscribeRequest&,
        ResetSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ResetSyncJobOutcome DtsClient::ResetSyncJob(const ResetSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ResetSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetSyncJobResponse rsp = ResetSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetSyncJobOutcome(rsp);
        else
            return ResetSyncJobOutcome(o.GetError());
    }
    else
    {
        return ResetSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ResetSyncJobAsync(const ResetSyncJobRequest& request, const ResetSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetSyncJobRequest&;
    using Resp = ResetSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "ResetSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ResetSyncJobOutcomeCallable DtsClient::ResetSyncJobCallable(const ResetSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetSyncJobOutcome>>();
    ResetSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ResetSyncJobRequest&,
        ResetSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ResizeSyncJobOutcome DtsClient::ResizeSyncJob(const ResizeSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeSyncJobResponse rsp = ResizeSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeSyncJobOutcome(rsp);
        else
            return ResizeSyncJobOutcome(o.GetError());
    }
    else
    {
        return ResizeSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ResizeSyncJobAsync(const ResizeSyncJobRequest& request, const ResizeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResizeSyncJobRequest&;
    using Resp = ResizeSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "ResizeSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ResizeSyncJobOutcomeCallable DtsClient::ResizeSyncJobCallable(const ResizeSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResizeSyncJobOutcome>>();
    ResizeSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ResizeSyncJobRequest&,
        ResizeSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ResumeMigrateJobOutcome DtsClient::ResumeMigrateJob(const ResumeMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeMigrateJobResponse rsp = ResumeMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeMigrateJobOutcome(rsp);
        else
            return ResumeMigrateJobOutcome(o.GetError());
    }
    else
    {
        return ResumeMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::ResumeMigrateJobAsync(const ResumeMigrateJobRequest& request, const ResumeMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeMigrateJobRequest&;
    using Resp = ResumeMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ResumeMigrateJobOutcomeCallable DtsClient::ResumeMigrateJobCallable(const ResumeMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeMigrateJobOutcome>>();
    ResumeMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ResumeMigrateJobRequest&,
        ResumeMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ResumeSubscribeOutcome DtsClient::ResumeSubscribe(const ResumeSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeSubscribeResponse rsp = ResumeSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeSubscribeOutcome(rsp);
        else
            return ResumeSubscribeOutcome(o.GetError());
    }
    else
    {
        return ResumeSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::ResumeSubscribeAsync(const ResumeSubscribeRequest& request, const ResumeSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeSubscribeRequest&;
    using Resp = ResumeSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ResumeSubscribeOutcomeCallable DtsClient::ResumeSubscribeCallable(const ResumeSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeSubscribeOutcome>>();
    ResumeSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const ResumeSubscribeRequest&,
        ResumeSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ResumeSyncJobOutcome DtsClient::ResumeSyncJob(const ResumeSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeSyncJobResponse rsp = ResumeSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeSyncJobOutcome(rsp);
        else
            return ResumeSyncJobOutcome(o.GetError());
    }
    else
    {
        return ResumeSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::ResumeSyncJobAsync(const ResumeSyncJobRequest& request, const ResumeSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeSyncJobRequest&;
    using Resp = ResumeSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ResumeSyncJobOutcomeCallable DtsClient::ResumeSyncJobCallable(const ResumeSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeSyncJobOutcome>>();
    ResumeSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ResumeSyncJobRequest&,
        ResumeSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::SkipCheckItemOutcome DtsClient::SkipCheckItem(const SkipCheckItemRequest &request)
{
    auto outcome = MakeRequest(request, "SkipCheckItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SkipCheckItemResponse rsp = SkipCheckItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SkipCheckItemOutcome(rsp);
        else
            return SkipCheckItemOutcome(o.GetError());
    }
    else
    {
        return SkipCheckItemOutcome(outcome.GetError());
    }
}

void DtsClient::SkipCheckItemAsync(const SkipCheckItemRequest& request, const SkipCheckItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SkipCheckItemRequest&;
    using Resp = SkipCheckItemResponse;

    DoRequestAsync<Req, Resp>(
        "SkipCheckItem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::SkipCheckItemOutcomeCallable DtsClient::SkipCheckItemCallable(const SkipCheckItemRequest &request)
{
    const auto prom = std::make_shared<std::promise<SkipCheckItemOutcome>>();
    SkipCheckItemAsync(
    request,
    [prom](
        const DtsClient*,
        const SkipCheckItemRequest&,
        SkipCheckItemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::SkipSyncCheckItemOutcome DtsClient::SkipSyncCheckItem(const SkipSyncCheckItemRequest &request)
{
    auto outcome = MakeRequest(request, "SkipSyncCheckItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SkipSyncCheckItemResponse rsp = SkipSyncCheckItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SkipSyncCheckItemOutcome(rsp);
        else
            return SkipSyncCheckItemOutcome(o.GetError());
    }
    else
    {
        return SkipSyncCheckItemOutcome(outcome.GetError());
    }
}

void DtsClient::SkipSyncCheckItemAsync(const SkipSyncCheckItemRequest& request, const SkipSyncCheckItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SkipSyncCheckItemRequest&;
    using Resp = SkipSyncCheckItemResponse;

    DoRequestAsync<Req, Resp>(
        "SkipSyncCheckItem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::SkipSyncCheckItemOutcomeCallable DtsClient::SkipSyncCheckItemCallable(const SkipSyncCheckItemRequest &request)
{
    const auto prom = std::make_shared<std::promise<SkipSyncCheckItemOutcome>>();
    SkipSyncCheckItemAsync(
    request,
    [prom](
        const DtsClient*,
        const SkipSyncCheckItemRequest&,
        SkipSyncCheckItemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StartCompareOutcome DtsClient::StartCompare(const StartCompareRequest &request)
{
    auto outcome = MakeRequest(request, "StartCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartCompareResponse rsp = StartCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartCompareOutcome(rsp);
        else
            return StartCompareOutcome(o.GetError());
    }
    else
    {
        return StartCompareOutcome(outcome.GetError());
    }
}

void DtsClient::StartCompareAsync(const StartCompareRequest& request, const StartCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartCompareRequest&;
    using Resp = StartCompareResponse;

    DoRequestAsync<Req, Resp>(
        "StartCompare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StartCompareOutcomeCallable DtsClient::StartCompareCallable(const StartCompareRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartCompareOutcome>>();
    StartCompareAsync(
    request,
    [prom](
        const DtsClient*,
        const StartCompareRequest&,
        StartCompareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StartMigrateJobOutcome DtsClient::StartMigrateJob(const StartMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMigrateJobResponse rsp = StartMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMigrateJobOutcome(rsp);
        else
            return StartMigrateJobOutcome(o.GetError());
    }
    else
    {
        return StartMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::StartMigrateJobAsync(const StartMigrateJobRequest& request, const StartMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartMigrateJobRequest&;
    using Resp = StartMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "StartMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StartMigrateJobOutcomeCallable DtsClient::StartMigrateJobCallable(const StartMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartMigrateJobOutcome>>();
    StartMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const StartMigrateJobRequest&,
        StartMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StartModifySyncJobOutcome DtsClient::StartModifySyncJob(const StartModifySyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartModifySyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartModifySyncJobResponse rsp = StartModifySyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartModifySyncJobOutcome(rsp);
        else
            return StartModifySyncJobOutcome(o.GetError());
    }
    else
    {
        return StartModifySyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::StartModifySyncJobAsync(const StartModifySyncJobRequest& request, const StartModifySyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartModifySyncJobRequest&;
    using Resp = StartModifySyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "StartModifySyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StartModifySyncJobOutcomeCallable DtsClient::StartModifySyncJobCallable(const StartModifySyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartModifySyncJobOutcome>>();
    StartModifySyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const StartModifySyncJobRequest&,
        StartModifySyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StartSubscribeOutcome DtsClient::StartSubscribe(const StartSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "StartSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartSubscribeResponse rsp = StartSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartSubscribeOutcome(rsp);
        else
            return StartSubscribeOutcome(o.GetError());
    }
    else
    {
        return StartSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::StartSubscribeAsync(const StartSubscribeRequest& request, const StartSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartSubscribeRequest&;
    using Resp = StartSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "StartSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StartSubscribeOutcomeCallable DtsClient::StartSubscribeCallable(const StartSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartSubscribeOutcome>>();
    StartSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const StartSubscribeRequest&,
        StartSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StartSyncCompareOutcome DtsClient::StartSyncCompare(const StartSyncCompareRequest &request)
{
    auto outcome = MakeRequest(request, "StartSyncCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartSyncCompareResponse rsp = StartSyncCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartSyncCompareOutcome(rsp);
        else
            return StartSyncCompareOutcome(o.GetError());
    }
    else
    {
        return StartSyncCompareOutcome(outcome.GetError());
    }
}

void DtsClient::StartSyncCompareAsync(const StartSyncCompareRequest& request, const StartSyncCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartSyncCompareRequest&;
    using Resp = StartSyncCompareResponse;

    DoRequestAsync<Req, Resp>(
        "StartSyncCompare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StartSyncCompareOutcomeCallable DtsClient::StartSyncCompareCallable(const StartSyncCompareRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartSyncCompareOutcome>>();
    StartSyncCompareAsync(
    request,
    [prom](
        const DtsClient*,
        const StartSyncCompareRequest&,
        StartSyncCompareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StartSyncJobOutcome DtsClient::StartSyncJob(const StartSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartSyncJobResponse rsp = StartSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartSyncJobOutcome(rsp);
        else
            return StartSyncJobOutcome(o.GetError());
    }
    else
    {
        return StartSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::StartSyncJobAsync(const StartSyncJobRequest& request, const StartSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartSyncJobRequest&;
    using Resp = StartSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "StartSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StartSyncJobOutcomeCallable DtsClient::StartSyncJobCallable(const StartSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartSyncJobOutcome>>();
    StartSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const StartSyncJobRequest&,
        StartSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StopCompareOutcome DtsClient::StopCompare(const StopCompareRequest &request)
{
    auto outcome = MakeRequest(request, "StopCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCompareResponse rsp = StopCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCompareOutcome(rsp);
        else
            return StopCompareOutcome(o.GetError());
    }
    else
    {
        return StopCompareOutcome(outcome.GetError());
    }
}

void DtsClient::StopCompareAsync(const StopCompareRequest& request, const StopCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopCompareRequest&;
    using Resp = StopCompareResponse;

    DoRequestAsync<Req, Resp>(
        "StopCompare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StopCompareOutcomeCallable DtsClient::StopCompareCallable(const StopCompareRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopCompareOutcome>>();
    StopCompareAsync(
    request,
    [prom](
        const DtsClient*,
        const StopCompareRequest&,
        StopCompareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StopMigrateJobOutcome DtsClient::StopMigrateJob(const StopMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMigrateJobResponse rsp = StopMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMigrateJobOutcome(rsp);
        else
            return StopMigrateJobOutcome(o.GetError());
    }
    else
    {
        return StopMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::StopMigrateJobAsync(const StopMigrateJobRequest& request, const StopMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMigrateJobRequest&;
    using Resp = StopMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "StopMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StopMigrateJobOutcomeCallable DtsClient::StopMigrateJobCallable(const StopMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMigrateJobOutcome>>();
    StopMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const StopMigrateJobRequest&,
        StopMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StopSyncCompareOutcome DtsClient::StopSyncCompare(const StopSyncCompareRequest &request)
{
    auto outcome = MakeRequest(request, "StopSyncCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSyncCompareResponse rsp = StopSyncCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSyncCompareOutcome(rsp);
        else
            return StopSyncCompareOutcome(o.GetError());
    }
    else
    {
        return StopSyncCompareOutcome(outcome.GetError());
    }
}

void DtsClient::StopSyncCompareAsync(const StopSyncCompareRequest& request, const StopSyncCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopSyncCompareRequest&;
    using Resp = StopSyncCompareResponse;

    DoRequestAsync<Req, Resp>(
        "StopSyncCompare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StopSyncCompareOutcomeCallable DtsClient::StopSyncCompareCallable(const StopSyncCompareRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopSyncCompareOutcome>>();
    StopSyncCompareAsync(
    request,
    [prom](
        const DtsClient*,
        const StopSyncCompareRequest&,
        StopSyncCompareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StopSyncJobOutcome DtsClient::StopSyncJob(const StopSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSyncJobResponse rsp = StopSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSyncJobOutcome(rsp);
        else
            return StopSyncJobOutcome(o.GetError());
    }
    else
    {
        return StopSyncJobOutcome(outcome.GetError());
    }
}

void DtsClient::StopSyncJobAsync(const StopSyncJobRequest& request, const StopSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopSyncJobRequest&;
    using Resp = StopSyncJobResponse;

    DoRequestAsync<Req, Resp>(
        "StopSyncJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StopSyncJobOutcomeCallable DtsClient::StopSyncJobCallable(const StopSyncJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopSyncJobOutcome>>();
    StopSyncJobAsync(
    request,
    [prom](
        const DtsClient*,
        const StopSyncJobRequest&,
        StopSyncJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

