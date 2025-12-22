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

#include <tencentcloud/tcbr/v20220217/TcbrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcbr::V20220217;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-02-17";
    const string ENDPOINT = "tcbr.tencentcloudapi.com";
}

TcbrClient::TcbrClient(const Credential &credential, const string &region) :
    TcbrClient(credential, region, ClientProfile())
{
}

TcbrClient::TcbrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcbrClient::CreateCloudRunEnvOutcome TcbrClient::CreateCloudRunEnv(const CreateCloudRunEnvRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudRunEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudRunEnvResponse rsp = CreateCloudRunEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudRunEnvOutcome(rsp);
        else
            return CreateCloudRunEnvOutcome(o.GetError());
    }
    else
    {
        return CreateCloudRunEnvOutcome(outcome.GetError());
    }
}

void TcbrClient::CreateCloudRunEnvAsync(const CreateCloudRunEnvRequest& request, const CreateCloudRunEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudRunEnvRequest&;
    using Resp = CreateCloudRunEnvResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudRunEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::CreateCloudRunEnvOutcomeCallable TcbrClient::CreateCloudRunEnvCallable(const CreateCloudRunEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudRunEnvOutcome>>();
    CreateCloudRunEnvAsync(
    request,
    [prom](
        const TcbrClient*,
        const CreateCloudRunEnvRequest&,
        CreateCloudRunEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::CreateCloudRunServerOutcome TcbrClient::CreateCloudRunServer(const CreateCloudRunServerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudRunServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudRunServerResponse rsp = CreateCloudRunServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudRunServerOutcome(rsp);
        else
            return CreateCloudRunServerOutcome(o.GetError());
    }
    else
    {
        return CreateCloudRunServerOutcome(outcome.GetError());
    }
}

void TcbrClient::CreateCloudRunServerAsync(const CreateCloudRunServerRequest& request, const CreateCloudRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudRunServerRequest&;
    using Resp = CreateCloudRunServerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudRunServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::CreateCloudRunServerOutcomeCallable TcbrClient::CreateCloudRunServerCallable(const CreateCloudRunServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudRunServerOutcome>>();
    CreateCloudRunServerAsync(
    request,
    [prom](
        const TcbrClient*,
        const CreateCloudRunServerRequest&,
        CreateCloudRunServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DeleteCloudRunServerOutcome TcbrClient::DeleteCloudRunServer(const DeleteCloudRunServerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudRunServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudRunServerResponse rsp = DeleteCloudRunServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudRunServerOutcome(rsp);
        else
            return DeleteCloudRunServerOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudRunServerOutcome(outcome.GetError());
    }
}

void TcbrClient::DeleteCloudRunServerAsync(const DeleteCloudRunServerRequest& request, const DeleteCloudRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudRunServerRequest&;
    using Resp = DeleteCloudRunServerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudRunServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DeleteCloudRunServerOutcomeCallable TcbrClient::DeleteCloudRunServerCallable(const DeleteCloudRunServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudRunServerOutcome>>();
    DeleteCloudRunServerAsync(
    request,
    [prom](
        const TcbrClient*,
        const DeleteCloudRunServerRequest&,
        DeleteCloudRunServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DeleteCloudRunVersionsOutcome TcbrClient::DeleteCloudRunVersions(const DeleteCloudRunVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudRunVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudRunVersionsResponse rsp = DeleteCloudRunVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudRunVersionsOutcome(rsp);
        else
            return DeleteCloudRunVersionsOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudRunVersionsOutcome(outcome.GetError());
    }
}

void TcbrClient::DeleteCloudRunVersionsAsync(const DeleteCloudRunVersionsRequest& request, const DeleteCloudRunVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudRunVersionsRequest&;
    using Resp = DeleteCloudRunVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudRunVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DeleteCloudRunVersionsOutcomeCallable TcbrClient::DeleteCloudRunVersionsCallable(const DeleteCloudRunVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudRunVersionsOutcome>>();
    DeleteCloudRunVersionsAsync(
    request,
    [prom](
        const TcbrClient*,
        const DeleteCloudRunVersionsRequest&,
        DeleteCloudRunVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeCloudRunDeployRecordOutcome TcbrClient::DescribeCloudRunDeployRecord(const DescribeCloudRunDeployRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRunDeployRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRunDeployRecordResponse rsp = DescribeCloudRunDeployRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRunDeployRecordOutcome(rsp);
        else
            return DescribeCloudRunDeployRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRunDeployRecordOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeCloudRunDeployRecordAsync(const DescribeCloudRunDeployRecordRequest& request, const DescribeCloudRunDeployRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudRunDeployRecordRequest&;
    using Resp = DescribeCloudRunDeployRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudRunDeployRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeCloudRunDeployRecordOutcomeCallable TcbrClient::DescribeCloudRunDeployRecordCallable(const DescribeCloudRunDeployRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudRunDeployRecordOutcome>>();
    DescribeCloudRunDeployRecordAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeCloudRunDeployRecordRequest&,
        DescribeCloudRunDeployRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeCloudRunEnvsOutcome TcbrClient::DescribeCloudRunEnvs(const DescribeCloudRunEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRunEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRunEnvsResponse rsp = DescribeCloudRunEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRunEnvsOutcome(rsp);
        else
            return DescribeCloudRunEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRunEnvsOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeCloudRunEnvsAsync(const DescribeCloudRunEnvsRequest& request, const DescribeCloudRunEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudRunEnvsRequest&;
    using Resp = DescribeCloudRunEnvsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudRunEnvs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeCloudRunEnvsOutcomeCallable TcbrClient::DescribeCloudRunEnvsCallable(const DescribeCloudRunEnvsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudRunEnvsOutcome>>();
    DescribeCloudRunEnvsAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeCloudRunEnvsRequest&,
        DescribeCloudRunEnvsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeCloudRunPodListOutcome TcbrClient::DescribeCloudRunPodList(const DescribeCloudRunPodListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRunPodList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRunPodListResponse rsp = DescribeCloudRunPodListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRunPodListOutcome(rsp);
        else
            return DescribeCloudRunPodListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRunPodListOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeCloudRunPodListAsync(const DescribeCloudRunPodListRequest& request, const DescribeCloudRunPodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudRunPodListRequest&;
    using Resp = DescribeCloudRunPodListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudRunPodList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeCloudRunPodListOutcomeCallable TcbrClient::DescribeCloudRunPodListCallable(const DescribeCloudRunPodListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudRunPodListOutcome>>();
    DescribeCloudRunPodListAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeCloudRunPodListRequest&,
        DescribeCloudRunPodListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeCloudRunProcessLogOutcome TcbrClient::DescribeCloudRunProcessLog(const DescribeCloudRunProcessLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRunProcessLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRunProcessLogResponse rsp = DescribeCloudRunProcessLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRunProcessLogOutcome(rsp);
        else
            return DescribeCloudRunProcessLogOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRunProcessLogOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeCloudRunProcessLogAsync(const DescribeCloudRunProcessLogRequest& request, const DescribeCloudRunProcessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudRunProcessLogRequest&;
    using Resp = DescribeCloudRunProcessLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudRunProcessLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeCloudRunProcessLogOutcomeCallable TcbrClient::DescribeCloudRunProcessLogCallable(const DescribeCloudRunProcessLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudRunProcessLogOutcome>>();
    DescribeCloudRunProcessLogAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeCloudRunProcessLogRequest&,
        DescribeCloudRunProcessLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeCloudRunServerDetailOutcome TcbrClient::DescribeCloudRunServerDetail(const DescribeCloudRunServerDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRunServerDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRunServerDetailResponse rsp = DescribeCloudRunServerDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRunServerDetailOutcome(rsp);
        else
            return DescribeCloudRunServerDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRunServerDetailOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeCloudRunServerDetailAsync(const DescribeCloudRunServerDetailRequest& request, const DescribeCloudRunServerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudRunServerDetailRequest&;
    using Resp = DescribeCloudRunServerDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudRunServerDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeCloudRunServerDetailOutcomeCallable TcbrClient::DescribeCloudRunServerDetailCallable(const DescribeCloudRunServerDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudRunServerDetailOutcome>>();
    DescribeCloudRunServerDetailAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeCloudRunServerDetailRequest&,
        DescribeCloudRunServerDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeCloudRunServersOutcome TcbrClient::DescribeCloudRunServers(const DescribeCloudRunServersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRunServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRunServersResponse rsp = DescribeCloudRunServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRunServersOutcome(rsp);
        else
            return DescribeCloudRunServersOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRunServersOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeCloudRunServersAsync(const DescribeCloudRunServersRequest& request, const DescribeCloudRunServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudRunServersRequest&;
    using Resp = DescribeCloudRunServersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudRunServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeCloudRunServersOutcomeCallable TcbrClient::DescribeCloudRunServersCallable(const DescribeCloudRunServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudRunServersOutcome>>();
    DescribeCloudRunServersAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeCloudRunServersRequest&,
        DescribeCloudRunServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeEnvBaseInfoOutcome TcbrClient::DescribeEnvBaseInfo(const DescribeEnvBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvBaseInfoResponse rsp = DescribeEnvBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvBaseInfoOutcome(rsp);
        else
            return DescribeEnvBaseInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvBaseInfoOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeEnvBaseInfoAsync(const DescribeEnvBaseInfoRequest& request, const DescribeEnvBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvBaseInfoRequest&;
    using Resp = DescribeEnvBaseInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvBaseInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeEnvBaseInfoOutcomeCallable TcbrClient::DescribeEnvBaseInfoCallable(const DescribeEnvBaseInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvBaseInfoOutcome>>();
    DescribeEnvBaseInfoAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeEnvBaseInfoRequest&,
        DescribeEnvBaseInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeReleaseOrderOutcome TcbrClient::DescribeReleaseOrder(const DescribeReleaseOrderRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseOrderResponse rsp = DescribeReleaseOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseOrderOutcome(rsp);
        else
            return DescribeReleaseOrderOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseOrderOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeReleaseOrderAsync(const DescribeReleaseOrderRequest& request, const DescribeReleaseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleaseOrderRequest&;
    using Resp = DescribeReleaseOrderResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReleaseOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeReleaseOrderOutcomeCallable TcbrClient::DescribeReleaseOrderCallable(const DescribeReleaseOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleaseOrderOutcome>>();
    DescribeReleaseOrderAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeReleaseOrderRequest&,
        DescribeReleaseOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeServerManageTaskOutcome TcbrClient::DescribeServerManageTask(const DescribeServerManageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerManageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerManageTaskResponse rsp = DescribeServerManageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerManageTaskOutcome(rsp);
        else
            return DescribeServerManageTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeServerManageTaskOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeServerManageTaskAsync(const DescribeServerManageTaskRequest& request, const DescribeServerManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServerManageTaskRequest&;
    using Resp = DescribeServerManageTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServerManageTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeServerManageTaskOutcomeCallable TcbrClient::DescribeServerManageTaskCallable(const DescribeServerManageTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServerManageTaskOutcome>>();
    DescribeServerManageTaskAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeServerManageTaskRequest&,
        DescribeServerManageTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::DescribeVersionDetailOutcome TcbrClient::DescribeVersionDetail(const DescribeVersionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVersionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVersionDetailResponse rsp = DescribeVersionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVersionDetailOutcome(rsp);
        else
            return DescribeVersionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVersionDetailOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeVersionDetailAsync(const DescribeVersionDetailRequest& request, const DescribeVersionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVersionDetailRequest&;
    using Resp = DescribeVersionDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVersionDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::DescribeVersionDetailOutcomeCallable TcbrClient::DescribeVersionDetailCallable(const DescribeVersionDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVersionDetailOutcome>>();
    DescribeVersionDetailAsync(
    request,
    [prom](
        const TcbrClient*,
        const DescribeVersionDetailRequest&,
        DescribeVersionDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::OperateServerManageOutcome TcbrClient::OperateServerManage(const OperateServerManageRequest &request)
{
    auto outcome = MakeRequest(request, "OperateServerManage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateServerManageResponse rsp = OperateServerManageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateServerManageOutcome(rsp);
        else
            return OperateServerManageOutcome(o.GetError());
    }
    else
    {
        return OperateServerManageOutcome(outcome.GetError());
    }
}

void TcbrClient::OperateServerManageAsync(const OperateServerManageRequest& request, const OperateServerManageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OperateServerManageRequest&;
    using Resp = OperateServerManageResponse;

    DoRequestAsync<Req, Resp>(
        "OperateServerManage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::OperateServerManageOutcomeCallable TcbrClient::OperateServerManageCallable(const OperateServerManageRequest &request)
{
    const auto prom = std::make_shared<std::promise<OperateServerManageOutcome>>();
    OperateServerManageAsync(
    request,
    [prom](
        const TcbrClient*,
        const OperateServerManageRequest&,
        OperateServerManageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::ReleaseGrayOutcome TcbrClient::ReleaseGray(const ReleaseGrayRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseGray");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseGrayResponse rsp = ReleaseGrayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseGrayOutcome(rsp);
        else
            return ReleaseGrayOutcome(o.GetError());
    }
    else
    {
        return ReleaseGrayOutcome(outcome.GetError());
    }
}

void TcbrClient::ReleaseGrayAsync(const ReleaseGrayRequest& request, const ReleaseGrayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseGrayRequest&;
    using Resp = ReleaseGrayResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseGray", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::ReleaseGrayOutcomeCallable TcbrClient::ReleaseGrayCallable(const ReleaseGrayRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseGrayOutcome>>();
    ReleaseGrayAsync(
    request,
    [prom](
        const TcbrClient*,
        const ReleaseGrayRequest&,
        ReleaseGrayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::SearchClsLogOutcome TcbrClient::SearchClsLog(const SearchClsLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchClsLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchClsLogResponse rsp = SearchClsLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchClsLogOutcome(rsp);
        else
            return SearchClsLogOutcome(o.GetError());
    }
    else
    {
        return SearchClsLogOutcome(outcome.GetError());
    }
}

void TcbrClient::SearchClsLogAsync(const SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchClsLogRequest&;
    using Resp = SearchClsLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchClsLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::SearchClsLogOutcomeCallable TcbrClient::SearchClsLogCallable(const SearchClsLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchClsLogOutcome>>();
    SearchClsLogAsync(
    request,
    [prom](
        const TcbrClient*,
        const SearchClsLogRequest&,
        SearchClsLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::SubmitServerRollbackOutcome TcbrClient::SubmitServerRollback(const SubmitServerRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitServerRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitServerRollbackResponse rsp = SubmitServerRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitServerRollbackOutcome(rsp);
        else
            return SubmitServerRollbackOutcome(o.GetError());
    }
    else
    {
        return SubmitServerRollbackOutcome(outcome.GetError());
    }
}

void TcbrClient::SubmitServerRollbackAsync(const SubmitServerRollbackRequest& request, const SubmitServerRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitServerRollbackRequest&;
    using Resp = SubmitServerRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitServerRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::SubmitServerRollbackOutcomeCallable TcbrClient::SubmitServerRollbackCallable(const SubmitServerRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitServerRollbackOutcome>>();
    SubmitServerRollbackAsync(
    request,
    [prom](
        const TcbrClient*,
        const SubmitServerRollbackRequest&,
        SubmitServerRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbrClient::UpdateCloudRunServerOutcome TcbrClient::UpdateCloudRunServer(const UpdateCloudRunServerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCloudRunServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCloudRunServerResponse rsp = UpdateCloudRunServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCloudRunServerOutcome(rsp);
        else
            return UpdateCloudRunServerOutcome(o.GetError());
    }
    else
    {
        return UpdateCloudRunServerOutcome(outcome.GetError());
    }
}

void TcbrClient::UpdateCloudRunServerAsync(const UpdateCloudRunServerRequest& request, const UpdateCloudRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCloudRunServerRequest&;
    using Resp = UpdateCloudRunServerResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCloudRunServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbrClient::UpdateCloudRunServerOutcomeCallable TcbrClient::UpdateCloudRunServerCallable(const UpdateCloudRunServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCloudRunServerOutcome>>();
    UpdateCloudRunServerAsync(
    request,
    [prom](
        const TcbrClient*,
        const UpdateCloudRunServerRequest&,
        UpdateCloudRunServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

