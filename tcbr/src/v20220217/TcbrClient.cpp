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

