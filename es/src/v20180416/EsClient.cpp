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

#include <tencentcloud/es/v20180416/EsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Es::V20180416;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "es.tencentcloudapi.com";
}

EsClient::EsClient(const Credential &credential, const string &region) :
    EsClient(credential, region, ClientProfile())
{
}

EsClient::EsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EsClient::CheckMigrateIndexMetaDataOutcome EsClient::CheckMigrateIndexMetaData(const CheckMigrateIndexMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "CheckMigrateIndexMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckMigrateIndexMetaDataResponse rsp = CheckMigrateIndexMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckMigrateIndexMetaDataOutcome(rsp);
        else
            return CheckMigrateIndexMetaDataOutcome(o.GetError());
    }
    else
    {
        return CheckMigrateIndexMetaDataOutcome(outcome.GetError());
    }
}

void EsClient::CheckMigrateIndexMetaDataAsync(const CheckMigrateIndexMetaDataRequest& request, const CheckMigrateIndexMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckMigrateIndexMetaDataRequest&;
    using Resp = CheckMigrateIndexMetaDataResponse;

    DoRequestAsync<Req, Resp>(
        "CheckMigrateIndexMetaData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CheckMigrateIndexMetaDataOutcomeCallable EsClient::CheckMigrateIndexMetaDataCallable(const CheckMigrateIndexMetaDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckMigrateIndexMetaDataOutcome>>();
    CheckMigrateIndexMetaDataAsync(
    request,
    [prom](
        const EsClient*,
        const CheckMigrateIndexMetaDataRequest&,
        CheckMigrateIndexMetaDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::CreateAutoBackUpStrategyOutcome EsClient::CreateAutoBackUpStrategy(const CreateAutoBackUpStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoBackUpStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoBackUpStrategyResponse rsp = CreateAutoBackUpStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoBackUpStrategyOutcome(rsp);
        else
            return CreateAutoBackUpStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateAutoBackUpStrategyOutcome(outcome.GetError());
    }
}

void EsClient::CreateAutoBackUpStrategyAsync(const CreateAutoBackUpStrategyRequest& request, const CreateAutoBackUpStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAutoBackUpStrategyRequest&;
    using Resp = CreateAutoBackUpStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAutoBackUpStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateAutoBackUpStrategyOutcomeCallable EsClient::CreateAutoBackUpStrategyCallable(const CreateAutoBackUpStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAutoBackUpStrategyOutcome>>();
    CreateAutoBackUpStrategyAsync(
    request,
    [prom](
        const EsClient*,
        const CreateAutoBackUpStrategyRequest&,
        CreateAutoBackUpStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::CreateClusterSnapshotOutcome EsClient::CreateClusterSnapshot(const CreateClusterSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterSnapshotResponse rsp = CreateClusterSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterSnapshotOutcome(rsp);
        else
            return CreateClusterSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateClusterSnapshotOutcome(outcome.GetError());
    }
}

void EsClient::CreateClusterSnapshotAsync(const CreateClusterSnapshotRequest& request, const CreateClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterSnapshotRequest&;
    using Resp = CreateClusterSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateClusterSnapshotOutcomeCallable EsClient::CreateClusterSnapshotCallable(const CreateClusterSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterSnapshotOutcome>>();
    CreateClusterSnapshotAsync(
    request,
    [prom](
        const EsClient*,
        const CreateClusterSnapshotRequest&,
        CreateClusterSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::CreateCosMigrateToServerlessInstanceOutcome EsClient::CreateCosMigrateToServerlessInstance(const CreateCosMigrateToServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosMigrateToServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosMigrateToServerlessInstanceResponse rsp = CreateCosMigrateToServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosMigrateToServerlessInstanceOutcome(rsp);
        else
            return CreateCosMigrateToServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateCosMigrateToServerlessInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateCosMigrateToServerlessInstanceAsync(const CreateCosMigrateToServerlessInstanceRequest& request, const CreateCosMigrateToServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCosMigrateToServerlessInstanceRequest&;
    using Resp = CreateCosMigrateToServerlessInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCosMigrateToServerlessInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateCosMigrateToServerlessInstanceOutcomeCallable EsClient::CreateCosMigrateToServerlessInstanceCallable(const CreateCosMigrateToServerlessInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCosMigrateToServerlessInstanceOutcome>>();
    CreateCosMigrateToServerlessInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const CreateCosMigrateToServerlessInstanceRequest&,
        CreateCosMigrateToServerlessInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::CreateIndexOutcome EsClient::CreateIndex(const CreateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIndexResponse rsp = CreateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIndexOutcome(rsp);
        else
            return CreateIndexOutcome(o.GetError());
    }
    else
    {
        return CreateIndexOutcome(outcome.GetError());
    }
}

void EsClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIndexRequest&;
    using Resp = CreateIndexResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateIndexOutcomeCallable EsClient::CreateIndexCallable(const CreateIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIndexOutcome>>();
    CreateIndexAsync(
    request,
    [prom](
        const EsClient*,
        const CreateIndexRequest&,
        CreateIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::CreateInstanceOutcome EsClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceRequest&;
    using Resp = CreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateInstanceOutcomeCallable EsClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::CreateLogstashInstanceOutcome EsClient::CreateLogstashInstance(const CreateLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogstashInstanceResponse rsp = CreateLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogstashInstanceOutcome(rsp);
        else
            return CreateLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateLogstashInstanceAsync(const CreateLogstashInstanceRequest& request, const CreateLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLogstashInstanceRequest&;
    using Resp = CreateLogstashInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLogstashInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateLogstashInstanceOutcomeCallable EsClient::CreateLogstashInstanceCallable(const CreateLogstashInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLogstashInstanceOutcome>>();
    CreateLogstashInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const CreateLogstashInstanceRequest&,
        CreateLogstashInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::CreateServerlessInstanceOutcome EsClient::CreateServerlessInstance(const CreateServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerlessInstanceResponse rsp = CreateServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerlessInstanceOutcome(rsp);
        else
            return CreateServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateServerlessInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateServerlessInstanceAsync(const CreateServerlessInstanceRequest& request, const CreateServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServerlessInstanceRequest&;
    using Resp = CreateServerlessInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateServerlessInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateServerlessInstanceOutcomeCallable EsClient::CreateServerlessInstanceCallable(const CreateServerlessInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateServerlessInstanceOutcome>>();
    CreateServerlessInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const CreateServerlessInstanceRequest&,
        CreateServerlessInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::CreateServerlessSpaceV2Outcome EsClient::CreateServerlessSpaceV2(const CreateServerlessSpaceV2Request &request)
{
    auto outcome = MakeRequest(request, "CreateServerlessSpaceV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerlessSpaceV2Response rsp = CreateServerlessSpaceV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerlessSpaceV2Outcome(rsp);
        else
            return CreateServerlessSpaceV2Outcome(o.GetError());
    }
    else
    {
        return CreateServerlessSpaceV2Outcome(outcome.GetError());
    }
}

void EsClient::CreateServerlessSpaceV2Async(const CreateServerlessSpaceV2Request& request, const CreateServerlessSpaceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServerlessSpaceV2Request&;
    using Resp = CreateServerlessSpaceV2Response;

    DoRequestAsync<Req, Resp>(
        "CreateServerlessSpaceV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateServerlessSpaceV2OutcomeCallable EsClient::CreateServerlessSpaceV2Callable(const CreateServerlessSpaceV2Request &request)
{
    const auto prom = std::make_shared<std::promise<CreateServerlessSpaceV2Outcome>>();
    CreateServerlessSpaceV2Async(
    request,
    [prom](
        const EsClient*,
        const CreateServerlessSpaceV2Request&,
        CreateServerlessSpaceV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteAutoBackUpStrategyOutcome EsClient::DeleteAutoBackUpStrategy(const DeleteAutoBackUpStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoBackUpStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoBackUpStrategyResponse rsp = DeleteAutoBackUpStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoBackUpStrategyOutcome(rsp);
        else
            return DeleteAutoBackUpStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoBackUpStrategyOutcome(outcome.GetError());
    }
}

void EsClient::DeleteAutoBackUpStrategyAsync(const DeleteAutoBackUpStrategyRequest& request, const DeleteAutoBackUpStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAutoBackUpStrategyRequest&;
    using Resp = DeleteAutoBackUpStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAutoBackUpStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteAutoBackUpStrategyOutcomeCallable EsClient::DeleteAutoBackUpStrategyCallable(const DeleteAutoBackUpStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAutoBackUpStrategyOutcome>>();
    DeleteAutoBackUpStrategyAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteAutoBackUpStrategyRequest&,
        DeleteAutoBackUpStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteClusterSnapshotOutcome EsClient::DeleteClusterSnapshot(const DeleteClusterSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterSnapshotResponse rsp = DeleteClusterSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterSnapshotOutcome(rsp);
        else
            return DeleteClusterSnapshotOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterSnapshotOutcome(outcome.GetError());
    }
}

void EsClient::DeleteClusterSnapshotAsync(const DeleteClusterSnapshotRequest& request, const DeleteClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterSnapshotRequest&;
    using Resp = DeleteClusterSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteClusterSnapshotOutcomeCallable EsClient::DeleteClusterSnapshotCallable(const DeleteClusterSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterSnapshotOutcome>>();
    DeleteClusterSnapshotAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteClusterSnapshotRequest&,
        DeleteClusterSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteIndexOutcome EsClient::DeleteIndex(const DeleteIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIndexResponse rsp = DeleteIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIndexOutcome(rsp);
        else
            return DeleteIndexOutcome(o.GetError());
    }
    else
    {
        return DeleteIndexOutcome(outcome.GetError());
    }
}

void EsClient::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIndexRequest&;
    using Resp = DeleteIndexResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteIndexOutcomeCallable EsClient::DeleteIndexCallable(const DeleteIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIndexOutcome>>();
    DeleteIndexAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteIndexRequest&,
        DeleteIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteInstanceOutcome EsClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceRequest&;
    using Resp = DeleteInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteInstanceOutcomeCallable EsClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceOutcome>>();
    DeleteInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteInstanceRequest&,
        DeleteInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteLogstashInstanceOutcome EsClient::DeleteLogstashInstance(const DeleteLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogstashInstanceResponse rsp = DeleteLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogstashInstanceOutcome(rsp);
        else
            return DeleteLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DeleteLogstashInstanceAsync(const DeleteLogstashInstanceRequest& request, const DeleteLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLogstashInstanceRequest&;
    using Resp = DeleteLogstashInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLogstashInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteLogstashInstanceOutcomeCallable EsClient::DeleteLogstashInstanceCallable(const DeleteLogstashInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLogstashInstanceOutcome>>();
    DeleteLogstashInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteLogstashInstanceRequest&,
        DeleteLogstashInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteLogstashPipelinesOutcome EsClient::DeleteLogstashPipelines(const DeleteLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogstashPipelinesResponse rsp = DeleteLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogstashPipelinesOutcome(rsp);
        else
            return DeleteLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return DeleteLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::DeleteLogstashPipelinesAsync(const DeleteLogstashPipelinesRequest& request, const DeleteLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLogstashPipelinesRequest&;
    using Resp = DeleteLogstashPipelinesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLogstashPipelines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteLogstashPipelinesOutcomeCallable EsClient::DeleteLogstashPipelinesCallable(const DeleteLogstashPipelinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLogstashPipelinesOutcome>>();
    DeleteLogstashPipelinesAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteLogstashPipelinesRequest&,
        DeleteLogstashPipelinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteServerlessInstanceOutcome EsClient::DeleteServerlessInstance(const DeleteServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServerlessInstanceResponse rsp = DeleteServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServerlessInstanceOutcome(rsp);
        else
            return DeleteServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteServerlessInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DeleteServerlessInstanceAsync(const DeleteServerlessInstanceRequest& request, const DeleteServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServerlessInstanceRequest&;
    using Resp = DeleteServerlessInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteServerlessInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteServerlessInstanceOutcomeCallable EsClient::DeleteServerlessInstanceCallable(const DeleteServerlessInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServerlessInstanceOutcome>>();
    DeleteServerlessInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteServerlessInstanceRequest&,
        DeleteServerlessInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteServerlessSpaceUserOutcome EsClient::DeleteServerlessSpaceUser(const DeleteServerlessSpaceUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServerlessSpaceUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServerlessSpaceUserResponse rsp = DeleteServerlessSpaceUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServerlessSpaceUserOutcome(rsp);
        else
            return DeleteServerlessSpaceUserOutcome(o.GetError());
    }
    else
    {
        return DeleteServerlessSpaceUserOutcome(outcome.GetError());
    }
}

void EsClient::DeleteServerlessSpaceUserAsync(const DeleteServerlessSpaceUserRequest& request, const DeleteServerlessSpaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServerlessSpaceUserRequest&;
    using Resp = DeleteServerlessSpaceUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteServerlessSpaceUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteServerlessSpaceUserOutcomeCallable EsClient::DeleteServerlessSpaceUserCallable(const DeleteServerlessSpaceUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServerlessSpaceUserOutcome>>();
    DeleteServerlessSpaceUserAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteServerlessSpaceUserRequest&,
        DeleteServerlessSpaceUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeAutoBackUpStrategyOutcome EsClient::DescribeAutoBackUpStrategy(const DescribeAutoBackUpStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoBackUpStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoBackUpStrategyResponse rsp = DescribeAutoBackUpStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoBackUpStrategyOutcome(rsp);
        else
            return DescribeAutoBackUpStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoBackUpStrategyOutcome(outcome.GetError());
    }
}

void EsClient::DescribeAutoBackUpStrategyAsync(const DescribeAutoBackUpStrategyRequest& request, const DescribeAutoBackUpStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoBackUpStrategyRequest&;
    using Resp = DescribeAutoBackUpStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoBackUpStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeAutoBackUpStrategyOutcomeCallable EsClient::DescribeAutoBackUpStrategyCallable(const DescribeAutoBackUpStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoBackUpStrategyOutcome>>();
    DescribeAutoBackUpStrategyAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeAutoBackUpStrategyRequest&,
        DescribeAutoBackUpStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeClusterSnapshotOutcome EsClient::DescribeClusterSnapshot(const DescribeClusterSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterSnapshotResponse rsp = DescribeClusterSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterSnapshotOutcome(rsp);
        else
            return DescribeClusterSnapshotOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterSnapshotOutcome(outcome.GetError());
    }
}

void EsClient::DescribeClusterSnapshotAsync(const DescribeClusterSnapshotRequest& request, const DescribeClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterSnapshotRequest&;
    using Resp = DescribeClusterSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeClusterSnapshotOutcomeCallable EsClient::DescribeClusterSnapshotCallable(const DescribeClusterSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterSnapshotOutcome>>();
    DescribeClusterSnapshotAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeClusterSnapshotRequest&,
        DescribeClusterSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeDiagnoseOutcome EsClient::DescribeDiagnose(const DescribeDiagnoseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiagnose");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiagnoseResponse rsp = DescribeDiagnoseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiagnoseOutcome(rsp);
        else
            return DescribeDiagnoseOutcome(o.GetError());
    }
    else
    {
        return DescribeDiagnoseOutcome(outcome.GetError());
    }
}

void EsClient::DescribeDiagnoseAsync(const DescribeDiagnoseRequest& request, const DescribeDiagnoseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDiagnoseRequest&;
    using Resp = DescribeDiagnoseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDiagnose", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeDiagnoseOutcomeCallable EsClient::DescribeDiagnoseCallable(const DescribeDiagnoseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDiagnoseOutcome>>();
    DescribeDiagnoseAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeDiagnoseRequest&,
        DescribeDiagnoseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeIndexListOutcome EsClient::DescribeIndexList(const DescribeIndexListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexListResponse rsp = DescribeIndexListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexListOutcome(rsp);
        else
            return DescribeIndexListOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexListOutcome(outcome.GetError());
    }
}

void EsClient::DescribeIndexListAsync(const DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIndexListRequest&;
    using Resp = DescribeIndexListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIndexList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeIndexListOutcomeCallable EsClient::DescribeIndexListCallable(const DescribeIndexListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIndexListOutcome>>();
    DescribeIndexListAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeIndexListRequest&,
        DescribeIndexListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeIndexMetaOutcome EsClient::DescribeIndexMeta(const DescribeIndexMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexMetaResponse rsp = DescribeIndexMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexMetaOutcome(rsp);
        else
            return DescribeIndexMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexMetaOutcome(outcome.GetError());
    }
}

void EsClient::DescribeIndexMetaAsync(const DescribeIndexMetaRequest& request, const DescribeIndexMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIndexMetaRequest&;
    using Resp = DescribeIndexMetaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIndexMeta", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeIndexMetaOutcomeCallable EsClient::DescribeIndexMetaCallable(const DescribeIndexMetaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIndexMetaOutcome>>();
    DescribeIndexMetaAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeIndexMetaRequest&,
        DescribeIndexMetaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeInstanceLogsOutcome EsClient::DescribeInstanceLogs(const DescribeInstanceLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogsResponse rsp = DescribeInstanceLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogsOutcome(rsp);
        else
            return DescribeInstanceLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstanceLogsAsync(const DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceLogsRequest&;
    using Resp = DescribeInstanceLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeInstanceLogsOutcomeCallable EsClient::DescribeInstanceLogsCallable(const DescribeInstanceLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceLogsOutcome>>();
    DescribeInstanceLogsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeInstanceLogsRequest&,
        DescribeInstanceLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeInstanceOperationsOutcome EsClient::DescribeInstanceOperations(const DescribeInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceOperationsResponse rsp = DescribeInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOperationsOutcome(rsp);
        else
            return DescribeInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOperationsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstanceOperationsAsync(const DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceOperationsRequest&;
    using Resp = DescribeInstanceOperationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceOperations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeInstanceOperationsOutcomeCallable EsClient::DescribeInstanceOperationsCallable(const DescribeInstanceOperationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOperationsOutcome>>();
    DescribeInstanceOperationsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeInstanceOperationsRequest&,
        DescribeInstanceOperationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeInstancePluginListOutcome EsClient::DescribeInstancePluginList(const DescribeInstancePluginListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancePluginList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancePluginListResponse rsp = DescribeInstancePluginListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancePluginListOutcome(rsp);
        else
            return DescribeInstancePluginListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancePluginListOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstancePluginListAsync(const DescribeInstancePluginListRequest& request, const DescribeInstancePluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancePluginListRequest&;
    using Resp = DescribeInstancePluginListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancePluginList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeInstancePluginListOutcomeCallable EsClient::DescribeInstancePluginListCallable(const DescribeInstancePluginListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancePluginListOutcome>>();
    DescribeInstancePluginListAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeInstancePluginListRequest&,
        DescribeInstancePluginListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeInstancesOutcome EsClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeInstancesOutcomeCallable EsClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeLogstashInstanceLogsOutcome EsClient::DescribeLogstashInstanceLogs(const DescribeLogstashInstanceLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashInstanceLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashInstanceLogsResponse rsp = DescribeLogstashInstanceLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashInstanceLogsOutcome(rsp);
        else
            return DescribeLogstashInstanceLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashInstanceLogsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashInstanceLogsAsync(const DescribeLogstashInstanceLogsRequest& request, const DescribeLogstashInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogstashInstanceLogsRequest&;
    using Resp = DescribeLogstashInstanceLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogstashInstanceLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeLogstashInstanceLogsOutcomeCallable EsClient::DescribeLogstashInstanceLogsCallable(const DescribeLogstashInstanceLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogstashInstanceLogsOutcome>>();
    DescribeLogstashInstanceLogsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeLogstashInstanceLogsRequest&,
        DescribeLogstashInstanceLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeLogstashInstanceOperationsOutcome EsClient::DescribeLogstashInstanceOperations(const DescribeLogstashInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashInstanceOperationsResponse rsp = DescribeLogstashInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashInstanceOperationsOutcome(rsp);
        else
            return DescribeLogstashInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashInstanceOperationsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashInstanceOperationsAsync(const DescribeLogstashInstanceOperationsRequest& request, const DescribeLogstashInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogstashInstanceOperationsRequest&;
    using Resp = DescribeLogstashInstanceOperationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogstashInstanceOperations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeLogstashInstanceOperationsOutcomeCallable EsClient::DescribeLogstashInstanceOperationsCallable(const DescribeLogstashInstanceOperationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogstashInstanceOperationsOutcome>>();
    DescribeLogstashInstanceOperationsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeLogstashInstanceOperationsRequest&,
        DescribeLogstashInstanceOperationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeLogstashInstancesOutcome EsClient::DescribeLogstashInstances(const DescribeLogstashInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashInstancesResponse rsp = DescribeLogstashInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashInstancesOutcome(rsp);
        else
            return DescribeLogstashInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashInstancesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashInstancesAsync(const DescribeLogstashInstancesRequest& request, const DescribeLogstashInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogstashInstancesRequest&;
    using Resp = DescribeLogstashInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogstashInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeLogstashInstancesOutcomeCallable EsClient::DescribeLogstashInstancesCallable(const DescribeLogstashInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogstashInstancesOutcome>>();
    DescribeLogstashInstancesAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeLogstashInstancesRequest&,
        DescribeLogstashInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeLogstashPipelinesOutcome EsClient::DescribeLogstashPipelines(const DescribeLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogstashPipelinesResponse rsp = DescribeLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogstashPipelinesOutcome(rsp);
        else
            return DescribeLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return DescribeLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeLogstashPipelinesAsync(const DescribeLogstashPipelinesRequest& request, const DescribeLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogstashPipelinesRequest&;
    using Resp = DescribeLogstashPipelinesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogstashPipelines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeLogstashPipelinesOutcomeCallable EsClient::DescribeLogstashPipelinesCallable(const DescribeLogstashPipelinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogstashPipelinesOutcome>>();
    DescribeLogstashPipelinesAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeLogstashPipelinesRequest&,
        DescribeLogstashPipelinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeServerlessInstancesOutcome EsClient::DescribeServerlessInstances(const DescribeServerlessInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessInstancesResponse rsp = DescribeServerlessInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessInstancesOutcome(rsp);
        else
            return DescribeServerlessInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessInstancesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeServerlessInstancesAsync(const DescribeServerlessInstancesRequest& request, const DescribeServerlessInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServerlessInstancesRequest&;
    using Resp = DescribeServerlessInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServerlessInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeServerlessInstancesOutcomeCallable EsClient::DescribeServerlessInstancesCallable(const DescribeServerlessInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServerlessInstancesOutcome>>();
    DescribeServerlessInstancesAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeServerlessInstancesRequest&,
        DescribeServerlessInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeServerlessMetricsOutcome EsClient::DescribeServerlessMetrics(const DescribeServerlessMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessMetricsResponse rsp = DescribeServerlessMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessMetricsOutcome(rsp);
        else
            return DescribeServerlessMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessMetricsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeServerlessMetricsAsync(const DescribeServerlessMetricsRequest& request, const DescribeServerlessMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServerlessMetricsRequest&;
    using Resp = DescribeServerlessMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServerlessMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeServerlessMetricsOutcomeCallable EsClient::DescribeServerlessMetricsCallable(const DescribeServerlessMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServerlessMetricsOutcome>>();
    DescribeServerlessMetricsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeServerlessMetricsRequest&,
        DescribeServerlessMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeServerlessSpaceUserOutcome EsClient::DescribeServerlessSpaceUser(const DescribeServerlessSpaceUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessSpaceUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessSpaceUserResponse rsp = DescribeServerlessSpaceUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessSpaceUserOutcome(rsp);
        else
            return DescribeServerlessSpaceUserOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessSpaceUserOutcome(outcome.GetError());
    }
}

void EsClient::DescribeServerlessSpaceUserAsync(const DescribeServerlessSpaceUserRequest& request, const DescribeServerlessSpaceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServerlessSpaceUserRequest&;
    using Resp = DescribeServerlessSpaceUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServerlessSpaceUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeServerlessSpaceUserOutcomeCallable EsClient::DescribeServerlessSpaceUserCallable(const DescribeServerlessSpaceUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServerlessSpaceUserOutcome>>();
    DescribeServerlessSpaceUserAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeServerlessSpaceUserRequest&,
        DescribeServerlessSpaceUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeServerlessSpacesOutcome EsClient::DescribeServerlessSpaces(const DescribeServerlessSpacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessSpaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessSpacesResponse rsp = DescribeServerlessSpacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessSpacesOutcome(rsp);
        else
            return DescribeServerlessSpacesOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessSpacesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeServerlessSpacesAsync(const DescribeServerlessSpacesRequest& request, const DescribeServerlessSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServerlessSpacesRequest&;
    using Resp = DescribeServerlessSpacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServerlessSpaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeServerlessSpacesOutcomeCallable EsClient::DescribeServerlessSpacesCallable(const DescribeServerlessSpacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServerlessSpacesOutcome>>();
    DescribeServerlessSpacesAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeServerlessSpacesRequest&,
        DescribeServerlessSpacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeSpaceKibanaToolsOutcome EsClient::DescribeSpaceKibanaTools(const DescribeSpaceKibanaToolsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceKibanaTools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceKibanaToolsResponse rsp = DescribeSpaceKibanaToolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceKibanaToolsOutcome(rsp);
        else
            return DescribeSpaceKibanaToolsOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceKibanaToolsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeSpaceKibanaToolsAsync(const DescribeSpaceKibanaToolsRequest& request, const DescribeSpaceKibanaToolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpaceKibanaToolsRequest&;
    using Resp = DescribeSpaceKibanaToolsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpaceKibanaTools", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeSpaceKibanaToolsOutcomeCallable EsClient::DescribeSpaceKibanaToolsCallable(const DescribeSpaceKibanaToolsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpaceKibanaToolsOutcome>>();
    DescribeSpaceKibanaToolsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeSpaceKibanaToolsRequest&,
        DescribeSpaceKibanaToolsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeUserCosSnapshotListOutcome EsClient::DescribeUserCosSnapshotList(const DescribeUserCosSnapshotListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserCosSnapshotList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserCosSnapshotListResponse rsp = DescribeUserCosSnapshotListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserCosSnapshotListOutcome(rsp);
        else
            return DescribeUserCosSnapshotListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserCosSnapshotListOutcome(outcome.GetError());
    }
}

void EsClient::DescribeUserCosSnapshotListAsync(const DescribeUserCosSnapshotListRequest& request, const DescribeUserCosSnapshotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserCosSnapshotListRequest&;
    using Resp = DescribeUserCosSnapshotListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserCosSnapshotList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeUserCosSnapshotListOutcomeCallable EsClient::DescribeUserCosSnapshotListCallable(const DescribeUserCosSnapshotListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserCosSnapshotListOutcome>>();
    DescribeUserCosSnapshotListAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeUserCosSnapshotListRequest&,
        DescribeUserCosSnapshotListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeViewsOutcome EsClient::DescribeViews(const DescribeViewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeViews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeViewsResponse rsp = DescribeViewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeViewsOutcome(rsp);
        else
            return DescribeViewsOutcome(o.GetError());
    }
    else
    {
        return DescribeViewsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeViewsAsync(const DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeViewsRequest&;
    using Resp = DescribeViewsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeViews", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeViewsOutcomeCallable EsClient::DescribeViewsCallable(const DescribeViewsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeViewsOutcome>>();
    DescribeViewsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeViewsRequest&,
        DescribeViewsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DiagnoseInstanceOutcome EsClient::DiagnoseInstance(const DiagnoseInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DiagnoseInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DiagnoseInstanceResponse rsp = DiagnoseInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DiagnoseInstanceOutcome(rsp);
        else
            return DiagnoseInstanceOutcome(o.GetError());
    }
    else
    {
        return DiagnoseInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DiagnoseInstanceAsync(const DiagnoseInstanceRequest& request, const DiagnoseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DiagnoseInstanceRequest&;
    using Resp = DiagnoseInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DiagnoseInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DiagnoseInstanceOutcomeCallable EsClient::DiagnoseInstanceCallable(const DiagnoseInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DiagnoseInstanceOutcome>>();
    DiagnoseInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const DiagnoseInstanceRequest&,
        DiagnoseInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::ExportIpTraceLogOutcome EsClient::ExportIpTraceLog(const ExportIpTraceLogRequest &request)
{
    auto outcome = MakeRequest(request, "ExportIpTraceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportIpTraceLogResponse rsp = ExportIpTraceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportIpTraceLogOutcome(rsp);
        else
            return ExportIpTraceLogOutcome(o.GetError());
    }
    else
    {
        return ExportIpTraceLogOutcome(outcome.GetError());
    }
}

void EsClient::ExportIpTraceLogAsync(const ExportIpTraceLogRequest& request, const ExportIpTraceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportIpTraceLogRequest&;
    using Resp = ExportIpTraceLogResponse;

    DoRequestAsync<Req, Resp>(
        "ExportIpTraceLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::ExportIpTraceLogOutcomeCallable EsClient::ExportIpTraceLogCallable(const ExportIpTraceLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportIpTraceLogOutcome>>();
    ExportIpTraceLogAsync(
    request,
    [prom](
        const EsClient*,
        const ExportIpTraceLogRequest&,
        ExportIpTraceLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::GetDiagnoseSettingsOutcome EsClient::GetDiagnoseSettings(const GetDiagnoseSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDiagnoseSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDiagnoseSettingsResponse rsp = GetDiagnoseSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDiagnoseSettingsOutcome(rsp);
        else
            return GetDiagnoseSettingsOutcome(o.GetError());
    }
    else
    {
        return GetDiagnoseSettingsOutcome(outcome.GetError());
    }
}

void EsClient::GetDiagnoseSettingsAsync(const GetDiagnoseSettingsRequest& request, const GetDiagnoseSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDiagnoseSettingsRequest&;
    using Resp = GetDiagnoseSettingsResponse;

    DoRequestAsync<Req, Resp>(
        "GetDiagnoseSettings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::GetDiagnoseSettingsOutcomeCallable EsClient::GetDiagnoseSettingsCallable(const GetDiagnoseSettingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDiagnoseSettingsOutcome>>();
    GetDiagnoseSettingsAsync(
    request,
    [prom](
        const EsClient*,
        const GetDiagnoseSettingsRequest&,
        GetDiagnoseSettingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::GetIpTraceStatusOutcome EsClient::GetIpTraceStatus(const GetIpTraceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetIpTraceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetIpTraceStatusResponse rsp = GetIpTraceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetIpTraceStatusOutcome(rsp);
        else
            return GetIpTraceStatusOutcome(o.GetError());
    }
    else
    {
        return GetIpTraceStatusOutcome(outcome.GetError());
    }
}

void EsClient::GetIpTraceStatusAsync(const GetIpTraceStatusRequest& request, const GetIpTraceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetIpTraceStatusRequest&;
    using Resp = GetIpTraceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetIpTraceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::GetIpTraceStatusOutcomeCallable EsClient::GetIpTraceStatusCallable(const GetIpTraceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetIpTraceStatusOutcome>>();
    GetIpTraceStatusAsync(
    request,
    [prom](
        const EsClient*,
        const GetIpTraceStatusRequest&,
        GetIpTraceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::GetRequestTargetNodeTypesOutcome EsClient::GetRequestTargetNodeTypes(const GetRequestTargetNodeTypesRequest &request)
{
    auto outcome = MakeRequest(request, "GetRequestTargetNodeTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRequestTargetNodeTypesResponse rsp = GetRequestTargetNodeTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRequestTargetNodeTypesOutcome(rsp);
        else
            return GetRequestTargetNodeTypesOutcome(o.GetError());
    }
    else
    {
        return GetRequestTargetNodeTypesOutcome(outcome.GetError());
    }
}

void EsClient::GetRequestTargetNodeTypesAsync(const GetRequestTargetNodeTypesRequest& request, const GetRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRequestTargetNodeTypesRequest&;
    using Resp = GetRequestTargetNodeTypesResponse;

    DoRequestAsync<Req, Resp>(
        "GetRequestTargetNodeTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::GetRequestTargetNodeTypesOutcomeCallable EsClient::GetRequestTargetNodeTypesCallable(const GetRequestTargetNodeTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRequestTargetNodeTypesOutcome>>();
    GetRequestTargetNodeTypesAsync(
    request,
    [prom](
        const EsClient*,
        const GetRequestTargetNodeTypesRequest&,
        GetRequestTargetNodeTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::InquirePriceRenewInstanceOutcome EsClient::InquirePriceRenewInstance(const InquirePriceRenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewInstanceResponse rsp = InquirePriceRenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewInstanceOutcome(rsp);
        else
            return InquirePriceRenewInstanceOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewInstanceOutcome(outcome.GetError());
    }
}

void EsClient::InquirePriceRenewInstanceAsync(const InquirePriceRenewInstanceRequest& request, const InquirePriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceRenewInstanceRequest&;
    using Resp = InquirePriceRenewInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceRenewInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::InquirePriceRenewInstanceOutcomeCallable EsClient::InquirePriceRenewInstanceCallable(const InquirePriceRenewInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceRenewInstanceOutcome>>();
    InquirePriceRenewInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const InquirePriceRenewInstanceRequest&,
        InquirePriceRenewInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::InstallInstanceModelOutcome EsClient::InstallInstanceModel(const InstallInstanceModelRequest &request)
{
    auto outcome = MakeRequest(request, "InstallInstanceModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallInstanceModelResponse rsp = InstallInstanceModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallInstanceModelOutcome(rsp);
        else
            return InstallInstanceModelOutcome(o.GetError());
    }
    else
    {
        return InstallInstanceModelOutcome(outcome.GetError());
    }
}

void EsClient::InstallInstanceModelAsync(const InstallInstanceModelRequest& request, const InstallInstanceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InstallInstanceModelRequest&;
    using Resp = InstallInstanceModelResponse;

    DoRequestAsync<Req, Resp>(
        "InstallInstanceModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::InstallInstanceModelOutcomeCallable EsClient::InstallInstanceModelCallable(const InstallInstanceModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<InstallInstanceModelOutcome>>();
    InstallInstanceModelAsync(
    request,
    [prom](
        const EsClient*,
        const InstallInstanceModelRequest&,
        InstallInstanceModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::ModifyAutoBackUpCommonInfoOutcome EsClient::ModifyAutoBackUpCommonInfo(const ModifyAutoBackUpCommonInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoBackUpCommonInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoBackUpCommonInfoResponse rsp = ModifyAutoBackUpCommonInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoBackUpCommonInfoOutcome(rsp);
        else
            return ModifyAutoBackUpCommonInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoBackUpCommonInfoOutcome(outcome.GetError());
    }
}

void EsClient::ModifyAutoBackUpCommonInfoAsync(const ModifyAutoBackUpCommonInfoRequest& request, const ModifyAutoBackUpCommonInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoBackUpCommonInfoRequest&;
    using Resp = ModifyAutoBackUpCommonInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoBackUpCommonInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::ModifyAutoBackUpCommonInfoOutcomeCallable EsClient::ModifyAutoBackUpCommonInfoCallable(const ModifyAutoBackUpCommonInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoBackUpCommonInfoOutcome>>();
    ModifyAutoBackUpCommonInfoAsync(
    request,
    [prom](
        const EsClient*,
        const ModifyAutoBackUpCommonInfoRequest&,
        ModifyAutoBackUpCommonInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::ModifyAutoBackUpStrategyOutcome EsClient::ModifyAutoBackUpStrategy(const ModifyAutoBackUpStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoBackUpStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoBackUpStrategyResponse rsp = ModifyAutoBackUpStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoBackUpStrategyOutcome(rsp);
        else
            return ModifyAutoBackUpStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoBackUpStrategyOutcome(outcome.GetError());
    }
}

void EsClient::ModifyAutoBackUpStrategyAsync(const ModifyAutoBackUpStrategyRequest& request, const ModifyAutoBackUpStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoBackUpStrategyRequest&;
    using Resp = ModifyAutoBackUpStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoBackUpStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::ModifyAutoBackUpStrategyOutcomeCallable EsClient::ModifyAutoBackUpStrategyCallable(const ModifyAutoBackUpStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoBackUpStrategyOutcome>>();
    ModifyAutoBackUpStrategyAsync(
    request,
    [prom](
        const EsClient*,
        const ModifyAutoBackUpStrategyRequest&,
        ModifyAutoBackUpStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::ModifyEsVipSecurityGroupOutcome EsClient::ModifyEsVipSecurityGroup(const ModifyEsVipSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEsVipSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEsVipSecurityGroupResponse rsp = ModifyEsVipSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEsVipSecurityGroupOutcome(rsp);
        else
            return ModifyEsVipSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyEsVipSecurityGroupOutcome(outcome.GetError());
    }
}

void EsClient::ModifyEsVipSecurityGroupAsync(const ModifyEsVipSecurityGroupRequest& request, const ModifyEsVipSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEsVipSecurityGroupRequest&;
    using Resp = ModifyEsVipSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEsVipSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::ModifyEsVipSecurityGroupOutcomeCallable EsClient::ModifyEsVipSecurityGroupCallable(const ModifyEsVipSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEsVipSecurityGroupOutcome>>();
    ModifyEsVipSecurityGroupAsync(
    request,
    [prom](
        const EsClient*,
        const ModifyEsVipSecurityGroupRequest&,
        ModifyEsVipSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::QueryIpTraceLogOutcome EsClient::QueryIpTraceLog(const QueryIpTraceLogRequest &request)
{
    auto outcome = MakeRequest(request, "QueryIpTraceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryIpTraceLogResponse rsp = QueryIpTraceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryIpTraceLogOutcome(rsp);
        else
            return QueryIpTraceLogOutcome(o.GetError());
    }
    else
    {
        return QueryIpTraceLogOutcome(outcome.GetError());
    }
}

void EsClient::QueryIpTraceLogAsync(const QueryIpTraceLogRequest& request, const QueryIpTraceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryIpTraceLogRequest&;
    using Resp = QueryIpTraceLogResponse;

    DoRequestAsync<Req, Resp>(
        "QueryIpTraceLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::QueryIpTraceLogOutcomeCallable EsClient::QueryIpTraceLogCallable(const QueryIpTraceLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryIpTraceLogOutcome>>();
    QueryIpTraceLogAsync(
    request,
    [prom](
        const EsClient*,
        const QueryIpTraceLogRequest&,
        QueryIpTraceLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::RestartInstanceOutcome EsClient::RestartInstance(const RestartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInstanceResponse rsp = RestartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInstanceOutcome(rsp);
        else
            return RestartInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartInstanceOutcome(outcome.GetError());
    }
}

void EsClient::RestartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartInstanceRequest&;
    using Resp = RestartInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestartInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::RestartInstanceOutcomeCallable EsClient::RestartInstanceCallable(const RestartInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartInstanceOutcome>>();
    RestartInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const RestartInstanceRequest&,
        RestartInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::RestartKibanaOutcome EsClient::RestartKibana(const RestartKibanaRequest &request)
{
    auto outcome = MakeRequest(request, "RestartKibana");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartKibanaResponse rsp = RestartKibanaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartKibanaOutcome(rsp);
        else
            return RestartKibanaOutcome(o.GetError());
    }
    else
    {
        return RestartKibanaOutcome(outcome.GetError());
    }
}

void EsClient::RestartKibanaAsync(const RestartKibanaRequest& request, const RestartKibanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartKibanaRequest&;
    using Resp = RestartKibanaResponse;

    DoRequestAsync<Req, Resp>(
        "RestartKibana", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::RestartKibanaOutcomeCallable EsClient::RestartKibanaCallable(const RestartKibanaRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartKibanaOutcome>>();
    RestartKibanaAsync(
    request,
    [prom](
        const EsClient*,
        const RestartKibanaRequest&,
        RestartKibanaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::RestartLogstashInstanceOutcome EsClient::RestartLogstashInstance(const RestartLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartLogstashInstanceResponse rsp = RestartLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartLogstashInstanceOutcome(rsp);
        else
            return RestartLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::RestartLogstashInstanceAsync(const RestartLogstashInstanceRequest& request, const RestartLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartLogstashInstanceRequest&;
    using Resp = RestartLogstashInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestartLogstashInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::RestartLogstashInstanceOutcomeCallable EsClient::RestartLogstashInstanceCallable(const RestartLogstashInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartLogstashInstanceOutcome>>();
    RestartLogstashInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const RestartLogstashInstanceRequest&,
        RestartLogstashInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::RestartNodesOutcome EsClient::RestartNodes(const RestartNodesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartNodesResponse rsp = RestartNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartNodesOutcome(rsp);
        else
            return RestartNodesOutcome(o.GetError());
    }
    else
    {
        return RestartNodesOutcome(outcome.GetError());
    }
}

void EsClient::RestartNodesAsync(const RestartNodesRequest& request, const RestartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartNodesRequest&;
    using Resp = RestartNodesResponse;

    DoRequestAsync<Req, Resp>(
        "RestartNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::RestartNodesOutcomeCallable EsClient::RestartNodesCallable(const RestartNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartNodesOutcome>>();
    RestartNodesAsync(
    request,
    [prom](
        const EsClient*,
        const RestartNodesRequest&,
        RestartNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::RestoreClusterSnapshotOutcome EsClient::RestoreClusterSnapshot(const RestoreClusterSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreClusterSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreClusterSnapshotResponse rsp = RestoreClusterSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreClusterSnapshotOutcome(rsp);
        else
            return RestoreClusterSnapshotOutcome(o.GetError());
    }
    else
    {
        return RestoreClusterSnapshotOutcome(outcome.GetError());
    }
}

void EsClient::RestoreClusterSnapshotAsync(const RestoreClusterSnapshotRequest& request, const RestoreClusterSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestoreClusterSnapshotRequest&;
    using Resp = RestoreClusterSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "RestoreClusterSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::RestoreClusterSnapshotOutcomeCallable EsClient::RestoreClusterSnapshotCallable(const RestoreClusterSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestoreClusterSnapshotOutcome>>();
    RestoreClusterSnapshotAsync(
    request,
    [prom](
        const EsClient*,
        const RestoreClusterSnapshotRequest&,
        RestoreClusterSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::SaveAndDeployLogstashPipelineOutcome EsClient::SaveAndDeployLogstashPipeline(const SaveAndDeployLogstashPipelineRequest &request)
{
    auto outcome = MakeRequest(request, "SaveAndDeployLogstashPipeline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveAndDeployLogstashPipelineResponse rsp = SaveAndDeployLogstashPipelineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveAndDeployLogstashPipelineOutcome(rsp);
        else
            return SaveAndDeployLogstashPipelineOutcome(o.GetError());
    }
    else
    {
        return SaveAndDeployLogstashPipelineOutcome(outcome.GetError());
    }
}

void EsClient::SaveAndDeployLogstashPipelineAsync(const SaveAndDeployLogstashPipelineRequest& request, const SaveAndDeployLogstashPipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SaveAndDeployLogstashPipelineRequest&;
    using Resp = SaveAndDeployLogstashPipelineResponse;

    DoRequestAsync<Req, Resp>(
        "SaveAndDeployLogstashPipeline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::SaveAndDeployLogstashPipelineOutcomeCallable EsClient::SaveAndDeployLogstashPipelineCallable(const SaveAndDeployLogstashPipelineRequest &request)
{
    const auto prom = std::make_shared<std::promise<SaveAndDeployLogstashPipelineOutcome>>();
    SaveAndDeployLogstashPipelineAsync(
    request,
    [prom](
        const EsClient*,
        const SaveAndDeployLogstashPipelineRequest&,
        SaveAndDeployLogstashPipelineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::StartLogstashPipelinesOutcome EsClient::StartLogstashPipelines(const StartLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "StartLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLogstashPipelinesResponse rsp = StartLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLogstashPipelinesOutcome(rsp);
        else
            return StartLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return StartLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::StartLogstashPipelinesAsync(const StartLogstashPipelinesRequest& request, const StartLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartLogstashPipelinesRequest&;
    using Resp = StartLogstashPipelinesResponse;

    DoRequestAsync<Req, Resp>(
        "StartLogstashPipelines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::StartLogstashPipelinesOutcomeCallable EsClient::StartLogstashPipelinesCallable(const StartLogstashPipelinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartLogstashPipelinesOutcome>>();
    StartLogstashPipelinesAsync(
    request,
    [prom](
        const EsClient*,
        const StartLogstashPipelinesRequest&,
        StartLogstashPipelinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::StopLogstashPipelinesOutcome EsClient::StopLogstashPipelines(const StopLogstashPipelinesRequest &request)
{
    auto outcome = MakeRequest(request, "StopLogstashPipelines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLogstashPipelinesResponse rsp = StopLogstashPipelinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLogstashPipelinesOutcome(rsp);
        else
            return StopLogstashPipelinesOutcome(o.GetError());
    }
    else
    {
        return StopLogstashPipelinesOutcome(outcome.GetError());
    }
}

void EsClient::StopLogstashPipelinesAsync(const StopLogstashPipelinesRequest& request, const StopLogstashPipelinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopLogstashPipelinesRequest&;
    using Resp = StopLogstashPipelinesResponse;

    DoRequestAsync<Req, Resp>(
        "StopLogstashPipelines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::StopLogstashPipelinesOutcomeCallable EsClient::StopLogstashPipelinesCallable(const StopLogstashPipelinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopLogstashPipelinesOutcome>>();
    StopLogstashPipelinesAsync(
    request,
    [prom](
        const EsClient*,
        const StopLogstashPipelinesRequest&,
        StopLogstashPipelinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateDiagnoseSettingsOutcome EsClient::UpdateDiagnoseSettings(const UpdateDiagnoseSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDiagnoseSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDiagnoseSettingsResponse rsp = UpdateDiagnoseSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDiagnoseSettingsOutcome(rsp);
        else
            return UpdateDiagnoseSettingsOutcome(o.GetError());
    }
    else
    {
        return UpdateDiagnoseSettingsOutcome(outcome.GetError());
    }
}

void EsClient::UpdateDiagnoseSettingsAsync(const UpdateDiagnoseSettingsRequest& request, const UpdateDiagnoseSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDiagnoseSettingsRequest&;
    using Resp = UpdateDiagnoseSettingsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDiagnoseSettings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateDiagnoseSettingsOutcomeCallable EsClient::UpdateDiagnoseSettingsCallable(const UpdateDiagnoseSettingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDiagnoseSettingsOutcome>>();
    UpdateDiagnoseSettingsAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateDiagnoseSettingsRequest&,
        UpdateDiagnoseSettingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateDictionariesOutcome EsClient::UpdateDictionaries(const UpdateDictionariesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDictionaries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDictionariesResponse rsp = UpdateDictionariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDictionariesOutcome(rsp);
        else
            return UpdateDictionariesOutcome(o.GetError());
    }
    else
    {
        return UpdateDictionariesOutcome(outcome.GetError());
    }
}

void EsClient::UpdateDictionariesAsync(const UpdateDictionariesRequest& request, const UpdateDictionariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDictionariesRequest&;
    using Resp = UpdateDictionariesResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDictionaries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateDictionariesOutcomeCallable EsClient::UpdateDictionariesCallable(const UpdateDictionariesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDictionariesOutcome>>();
    UpdateDictionariesAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateDictionariesRequest&,
        UpdateDictionariesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateIndexOutcome EsClient::UpdateIndex(const UpdateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateIndexResponse rsp = UpdateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateIndexOutcome(rsp);
        else
            return UpdateIndexOutcome(o.GetError());
    }
    else
    {
        return UpdateIndexOutcome(outcome.GetError());
    }
}

void EsClient::UpdateIndexAsync(const UpdateIndexRequest& request, const UpdateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateIndexRequest&;
    using Resp = UpdateIndexResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateIndexOutcomeCallable EsClient::UpdateIndexCallable(const UpdateIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateIndexOutcome>>();
    UpdateIndexAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateIndexRequest&,
        UpdateIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateInstanceOutcome EsClient::UpdateInstance(const UpdateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateInstanceResponse rsp = UpdateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateInstanceOutcome(rsp);
        else
            return UpdateInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateInstanceRequest&;
    using Resp = UpdateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateInstanceOutcomeCallable EsClient::UpdateInstanceCallable(const UpdateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateInstanceOutcome>>();
    UpdateInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateInstanceRequest&,
        UpdateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateIpTraceStatusOutcome EsClient::UpdateIpTraceStatus(const UpdateIpTraceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateIpTraceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateIpTraceStatusResponse rsp = UpdateIpTraceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateIpTraceStatusOutcome(rsp);
        else
            return UpdateIpTraceStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateIpTraceStatusOutcome(outcome.GetError());
    }
}

void EsClient::UpdateIpTraceStatusAsync(const UpdateIpTraceStatusRequest& request, const UpdateIpTraceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateIpTraceStatusRequest&;
    using Resp = UpdateIpTraceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateIpTraceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateIpTraceStatusOutcomeCallable EsClient::UpdateIpTraceStatusCallable(const UpdateIpTraceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateIpTraceStatusOutcome>>();
    UpdateIpTraceStatusAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateIpTraceStatusRequest&,
        UpdateIpTraceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateJdkOutcome EsClient::UpdateJdk(const UpdateJdkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateJdk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateJdkResponse rsp = UpdateJdkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateJdkOutcome(rsp);
        else
            return UpdateJdkOutcome(o.GetError());
    }
    else
    {
        return UpdateJdkOutcome(outcome.GetError());
    }
}

void EsClient::UpdateJdkAsync(const UpdateJdkRequest& request, const UpdateJdkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateJdkRequest&;
    using Resp = UpdateJdkResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateJdk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateJdkOutcomeCallable EsClient::UpdateJdkCallable(const UpdateJdkRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateJdkOutcome>>();
    UpdateJdkAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateJdkRequest&,
        UpdateJdkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateLogstashInstanceOutcome EsClient::UpdateLogstashInstance(const UpdateLogstashInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLogstashInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLogstashInstanceResponse rsp = UpdateLogstashInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLogstashInstanceOutcome(rsp);
        else
            return UpdateLogstashInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateLogstashInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateLogstashInstanceAsync(const UpdateLogstashInstanceRequest& request, const UpdateLogstashInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateLogstashInstanceRequest&;
    using Resp = UpdateLogstashInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateLogstashInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateLogstashInstanceOutcomeCallable EsClient::UpdateLogstashInstanceCallable(const UpdateLogstashInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateLogstashInstanceOutcome>>();
    UpdateLogstashInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateLogstashInstanceRequest&,
        UpdateLogstashInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateLogstashPipelineDescOutcome EsClient::UpdateLogstashPipelineDesc(const UpdateLogstashPipelineDescRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLogstashPipelineDesc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLogstashPipelineDescResponse rsp = UpdateLogstashPipelineDescResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLogstashPipelineDescOutcome(rsp);
        else
            return UpdateLogstashPipelineDescOutcome(o.GetError());
    }
    else
    {
        return UpdateLogstashPipelineDescOutcome(outcome.GetError());
    }
}

void EsClient::UpdateLogstashPipelineDescAsync(const UpdateLogstashPipelineDescRequest& request, const UpdateLogstashPipelineDescAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateLogstashPipelineDescRequest&;
    using Resp = UpdateLogstashPipelineDescResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateLogstashPipelineDesc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateLogstashPipelineDescOutcomeCallable EsClient::UpdateLogstashPipelineDescCallable(const UpdateLogstashPipelineDescRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateLogstashPipelineDescOutcome>>();
    UpdateLogstashPipelineDescAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateLogstashPipelineDescRequest&,
        UpdateLogstashPipelineDescOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdatePluginsOutcome EsClient::UpdatePlugins(const UpdatePluginsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePluginsResponse rsp = UpdatePluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePluginsOutcome(rsp);
        else
            return UpdatePluginsOutcome(o.GetError());
    }
    else
    {
        return UpdatePluginsOutcome(outcome.GetError());
    }
}

void EsClient::UpdatePluginsAsync(const UpdatePluginsRequest& request, const UpdatePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePluginsRequest&;
    using Resp = UpdatePluginsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePlugins", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdatePluginsOutcomeCallable EsClient::UpdatePluginsCallable(const UpdatePluginsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePluginsOutcome>>();
    UpdatePluginsAsync(
    request,
    [prom](
        const EsClient*,
        const UpdatePluginsRequest&,
        UpdatePluginsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateRequestTargetNodeTypesOutcome EsClient::UpdateRequestTargetNodeTypes(const UpdateRequestTargetNodeTypesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRequestTargetNodeTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRequestTargetNodeTypesResponse rsp = UpdateRequestTargetNodeTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRequestTargetNodeTypesOutcome(rsp);
        else
            return UpdateRequestTargetNodeTypesOutcome(o.GetError());
    }
    else
    {
        return UpdateRequestTargetNodeTypesOutcome(outcome.GetError());
    }
}

void EsClient::UpdateRequestTargetNodeTypesAsync(const UpdateRequestTargetNodeTypesRequest& request, const UpdateRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRequestTargetNodeTypesRequest&;
    using Resp = UpdateRequestTargetNodeTypesResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRequestTargetNodeTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateRequestTargetNodeTypesOutcomeCallable EsClient::UpdateRequestTargetNodeTypesCallable(const UpdateRequestTargetNodeTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRequestTargetNodeTypesOutcome>>();
    UpdateRequestTargetNodeTypesAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateRequestTargetNodeTypesRequest&,
        UpdateRequestTargetNodeTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateServerlessInstanceOutcome EsClient::UpdateServerlessInstance(const UpdateServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServerlessInstanceResponse rsp = UpdateServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServerlessInstanceOutcome(rsp);
        else
            return UpdateServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateServerlessInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateServerlessInstanceAsync(const UpdateServerlessInstanceRequest& request, const UpdateServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateServerlessInstanceRequest&;
    using Resp = UpdateServerlessInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateServerlessInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateServerlessInstanceOutcomeCallable EsClient::UpdateServerlessInstanceCallable(const UpdateServerlessInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateServerlessInstanceOutcome>>();
    UpdateServerlessInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateServerlessInstanceRequest&,
        UpdateServerlessInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateServerlessSpaceOutcome EsClient::UpdateServerlessSpace(const UpdateServerlessSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateServerlessSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServerlessSpaceResponse rsp = UpdateServerlessSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServerlessSpaceOutcome(rsp);
        else
            return UpdateServerlessSpaceOutcome(o.GetError());
    }
    else
    {
        return UpdateServerlessSpaceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateServerlessSpaceAsync(const UpdateServerlessSpaceRequest& request, const UpdateServerlessSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateServerlessSpaceRequest&;
    using Resp = UpdateServerlessSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateServerlessSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateServerlessSpaceOutcomeCallable EsClient::UpdateServerlessSpaceCallable(const UpdateServerlessSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateServerlessSpaceOutcome>>();
    UpdateServerlessSpaceAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateServerlessSpaceRequest&,
        UpdateServerlessSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpgradeInstanceOutcome EsClient::UpgradeInstance(const UpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceResponse rsp = UpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceOutcome(rsp);
        else
            return UpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeInstanceRequest&;
    using Resp = UpgradeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpgradeInstanceOutcomeCallable EsClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeInstanceOutcome>>();
    UpgradeInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const UpgradeInstanceRequest&,
        UpgradeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpgradeLicenseOutcome EsClient::UpgradeLicense(const UpgradeLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeLicenseResponse rsp = UpgradeLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeLicenseOutcome(rsp);
        else
            return UpgradeLicenseOutcome(o.GetError());
    }
    else
    {
        return UpgradeLicenseOutcome(outcome.GetError());
    }
}

void EsClient::UpgradeLicenseAsync(const UpgradeLicenseRequest& request, const UpgradeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeLicenseRequest&;
    using Resp = UpgradeLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpgradeLicenseOutcomeCallable EsClient::UpgradeLicenseCallable(const UpgradeLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeLicenseOutcome>>();
    UpgradeLicenseAsync(
    request,
    [prom](
        const EsClient*,
        const UpgradeLicenseRequest&,
        UpgradeLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

