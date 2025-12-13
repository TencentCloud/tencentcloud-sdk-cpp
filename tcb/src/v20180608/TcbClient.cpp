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

#include <tencentcloud/tcb/v20180608/TcbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcb::V20180608;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-08";
    const string ENDPOINT = "tcb.tencentcloudapi.com";
}

TcbClient::TcbClient(const Credential &credential, const string &region) :
    TcbClient(credential, region, ClientProfile())
{
}

TcbClient::TcbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcbClient::BindEnvGatewayOutcome TcbClient::BindEnvGateway(const BindEnvGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "BindEnvGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEnvGatewayResponse rsp = BindEnvGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEnvGatewayOutcome(rsp);
        else
            return BindEnvGatewayOutcome(o.GetError());
    }
    else
    {
        return BindEnvGatewayOutcome(outcome.GetError());
    }
}

void TcbClient::BindEnvGatewayAsync(const BindEnvGatewayRequest& request, const BindEnvGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindEnvGatewayRequest&;
    using Resp = BindEnvGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "BindEnvGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::BindEnvGatewayOutcomeCallable TcbClient::BindEnvGatewayCallable(const BindEnvGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindEnvGatewayOutcome>>();
    BindEnvGatewayAsync(
    request,
    [prom](
        const TcbClient*,
        const BindEnvGatewayRequest&,
        BindEnvGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CheckTcbServiceOutcome TcbClient::CheckTcbService(const CheckTcbServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CheckTcbService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckTcbServiceResponse rsp = CheckTcbServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckTcbServiceOutcome(rsp);
        else
            return CheckTcbServiceOutcome(o.GetError());
    }
    else
    {
        return CheckTcbServiceOutcome(outcome.GetError());
    }
}

void TcbClient::CheckTcbServiceAsync(const CheckTcbServiceRequest& request, const CheckTcbServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckTcbServiceRequest&;
    using Resp = CheckTcbServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CheckTcbService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CheckTcbServiceOutcomeCallable TcbClient::CheckTcbServiceCallable(const CheckTcbServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckTcbServiceOutcome>>();
    CheckTcbServiceAsync(
    request,
    [prom](
        const TcbClient*,
        const CheckTcbServiceRequest&,
        CheckTcbServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CommonServiceAPIOutcome TcbClient::CommonServiceAPI(const CommonServiceAPIRequest &request)
{
    auto outcome = MakeRequest(request, "CommonServiceAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommonServiceAPIResponse rsp = CommonServiceAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommonServiceAPIOutcome(rsp);
        else
            return CommonServiceAPIOutcome(o.GetError());
    }
    else
    {
        return CommonServiceAPIOutcome(outcome.GetError());
    }
}

void TcbClient::CommonServiceAPIAsync(const CommonServiceAPIRequest& request, const CommonServiceAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CommonServiceAPIRequest&;
    using Resp = CommonServiceAPIResponse;

    DoRequestAsync<Req, Resp>(
        "CommonServiceAPI", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CommonServiceAPIOutcomeCallable TcbClient::CommonServiceAPICallable(const CommonServiceAPIRequest &request)
{
    const auto prom = std::make_shared<std::promise<CommonServiceAPIOutcome>>();
    CommonServiceAPIAsync(
    request,
    [prom](
        const TcbClient*,
        const CommonServiceAPIRequest&,
        CommonServiceAPIOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateAndDeployCloudBaseProjectOutcome TcbClient::CreateAndDeployCloudBaseProject(const CreateAndDeployCloudBaseProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndDeployCloudBaseProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndDeployCloudBaseProjectResponse rsp = CreateAndDeployCloudBaseProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndDeployCloudBaseProjectOutcome(rsp);
        else
            return CreateAndDeployCloudBaseProjectOutcome(o.GetError());
    }
    else
    {
        return CreateAndDeployCloudBaseProjectOutcome(outcome.GetError());
    }
}

void TcbClient::CreateAndDeployCloudBaseProjectAsync(const CreateAndDeployCloudBaseProjectRequest& request, const CreateAndDeployCloudBaseProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndDeployCloudBaseProjectRequest&;
    using Resp = CreateAndDeployCloudBaseProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndDeployCloudBaseProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateAndDeployCloudBaseProjectOutcomeCallable TcbClient::CreateAndDeployCloudBaseProjectCallable(const CreateAndDeployCloudBaseProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndDeployCloudBaseProjectOutcome>>();
    CreateAndDeployCloudBaseProjectAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateAndDeployCloudBaseProjectRequest&,
        CreateAndDeployCloudBaseProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateAuthDomainOutcome TcbClient::CreateAuthDomain(const CreateAuthDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuthDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuthDomainResponse rsp = CreateAuthDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuthDomainOutcome(rsp);
        else
            return CreateAuthDomainOutcome(o.GetError());
    }
    else
    {
        return CreateAuthDomainOutcome(outcome.GetError());
    }
}

void TcbClient::CreateAuthDomainAsync(const CreateAuthDomainRequest& request, const CreateAuthDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAuthDomainRequest&;
    using Resp = CreateAuthDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuthDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateAuthDomainOutcomeCallable TcbClient::CreateAuthDomainCallable(const CreateAuthDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuthDomainOutcome>>();
    CreateAuthDomainAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateAuthDomainRequest&,
        CreateAuthDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateCloudBaseRunResourceOutcome TcbClient::CreateCloudBaseRunResource(const CreateCloudBaseRunResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudBaseRunResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudBaseRunResourceResponse rsp = CreateCloudBaseRunResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudBaseRunResourceOutcome(rsp);
        else
            return CreateCloudBaseRunResourceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudBaseRunResourceOutcome(outcome.GetError());
    }
}

void TcbClient::CreateCloudBaseRunResourceAsync(const CreateCloudBaseRunResourceRequest& request, const CreateCloudBaseRunResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudBaseRunResourceRequest&;
    using Resp = CreateCloudBaseRunResourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudBaseRunResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateCloudBaseRunResourceOutcomeCallable TcbClient::CreateCloudBaseRunResourceCallable(const CreateCloudBaseRunResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudBaseRunResourceOutcome>>();
    CreateCloudBaseRunResourceAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateCloudBaseRunResourceRequest&,
        CreateCloudBaseRunResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateCloudBaseRunServerVersionOutcome TcbClient::CreateCloudBaseRunServerVersion(const CreateCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudBaseRunServerVersionResponse rsp = CreateCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudBaseRunServerVersionOutcome(rsp);
        else
            return CreateCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return CreateCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::CreateCloudBaseRunServerVersionAsync(const CreateCloudBaseRunServerVersionRequest& request, const CreateCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudBaseRunServerVersionRequest&;
    using Resp = CreateCloudBaseRunServerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudBaseRunServerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateCloudBaseRunServerVersionOutcomeCallable TcbClient::CreateCloudBaseRunServerVersionCallable(const CreateCloudBaseRunServerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudBaseRunServerVersionOutcome>>();
    CreateCloudBaseRunServerVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateCloudBaseRunServerVersionRequest&,
        CreateCloudBaseRunServerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateHostingDomainOutcome TcbClient::CreateHostingDomain(const CreateHostingDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHostingDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHostingDomainResponse rsp = CreateHostingDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHostingDomainOutcome(rsp);
        else
            return CreateHostingDomainOutcome(o.GetError());
    }
    else
    {
        return CreateHostingDomainOutcome(outcome.GetError());
    }
}

void TcbClient::CreateHostingDomainAsync(const CreateHostingDomainRequest& request, const CreateHostingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHostingDomainRequest&;
    using Resp = CreateHostingDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHostingDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateHostingDomainOutcomeCallable TcbClient::CreateHostingDomainCallable(const CreateHostingDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHostingDomainOutcome>>();
    CreateHostingDomainAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateHostingDomainRequest&,
        CreateHostingDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreatePostpayPackageOutcome TcbClient::CreatePostpayPackage(const CreatePostpayPackageRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePostpayPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePostpayPackageResponse rsp = CreatePostpayPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePostpayPackageOutcome(rsp);
        else
            return CreatePostpayPackageOutcome(o.GetError());
    }
    else
    {
        return CreatePostpayPackageOutcome(outcome.GetError());
    }
}

void TcbClient::CreatePostpayPackageAsync(const CreatePostpayPackageRequest& request, const CreatePostpayPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePostpayPackageRequest&;
    using Resp = CreatePostpayPackageResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePostpayPackage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreatePostpayPackageOutcomeCallable TcbClient::CreatePostpayPackageCallable(const CreatePostpayPackageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePostpayPackageOutcome>>();
    CreatePostpayPackageAsync(
    request,
    [prom](
        const TcbClient*,
        const CreatePostpayPackageRequest&,
        CreatePostpayPackageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateStaticStoreOutcome TcbClient::CreateStaticStore(const CreateStaticStoreRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStaticStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStaticStoreResponse rsp = CreateStaticStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStaticStoreOutcome(rsp);
        else
            return CreateStaticStoreOutcome(o.GetError());
    }
    else
    {
        return CreateStaticStoreOutcome(outcome.GetError());
    }
}

void TcbClient::CreateStaticStoreAsync(const CreateStaticStoreRequest& request, const CreateStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStaticStoreRequest&;
    using Resp = CreateStaticStoreResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStaticStore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateStaticStoreOutcomeCallable TcbClient::CreateStaticStoreCallable(const CreateStaticStoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStaticStoreOutcome>>();
    CreateStaticStoreAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateStaticStoreRequest&,
        CreateStaticStoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateWxCloudBaseRunEnvOutcome TcbClient::CreateWxCloudBaseRunEnv(const CreateWxCloudBaseRunEnvRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWxCloudBaseRunEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWxCloudBaseRunEnvResponse rsp = CreateWxCloudBaseRunEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWxCloudBaseRunEnvOutcome(rsp);
        else
            return CreateWxCloudBaseRunEnvOutcome(o.GetError());
    }
    else
    {
        return CreateWxCloudBaseRunEnvOutcome(outcome.GetError());
    }
}

void TcbClient::CreateWxCloudBaseRunEnvAsync(const CreateWxCloudBaseRunEnvRequest& request, const CreateWxCloudBaseRunEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWxCloudBaseRunEnvRequest&;
    using Resp = CreateWxCloudBaseRunEnvResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWxCloudBaseRunEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateWxCloudBaseRunEnvOutcomeCallable TcbClient::CreateWxCloudBaseRunEnvCallable(const CreateWxCloudBaseRunEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWxCloudBaseRunEnvOutcome>>();
    CreateWxCloudBaseRunEnvAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateWxCloudBaseRunEnvRequest&,
        CreateWxCloudBaseRunEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::CreateWxCloudBaseRunServerDBClusterOutcome TcbClient::CreateWxCloudBaseRunServerDBCluster(const CreateWxCloudBaseRunServerDBClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWxCloudBaseRunServerDBCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWxCloudBaseRunServerDBClusterResponse rsp = CreateWxCloudBaseRunServerDBClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWxCloudBaseRunServerDBClusterOutcome(rsp);
        else
            return CreateWxCloudBaseRunServerDBClusterOutcome(o.GetError());
    }
    else
    {
        return CreateWxCloudBaseRunServerDBClusterOutcome(outcome.GetError());
    }
}

void TcbClient::CreateWxCloudBaseRunServerDBClusterAsync(const CreateWxCloudBaseRunServerDBClusterRequest& request, const CreateWxCloudBaseRunServerDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWxCloudBaseRunServerDBClusterRequest&;
    using Resp = CreateWxCloudBaseRunServerDBClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWxCloudBaseRunServerDBCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::CreateWxCloudBaseRunServerDBClusterOutcomeCallable TcbClient::CreateWxCloudBaseRunServerDBClusterCallable(const CreateWxCloudBaseRunServerDBClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWxCloudBaseRunServerDBClusterOutcome>>();
    CreateWxCloudBaseRunServerDBClusterAsync(
    request,
    [prom](
        const TcbClient*,
        const CreateWxCloudBaseRunServerDBClusterRequest&,
        CreateWxCloudBaseRunServerDBClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteCloudBaseProjectLatestVersionOutcome TcbClient::DeleteCloudBaseProjectLatestVersion(const DeleteCloudBaseProjectLatestVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudBaseProjectLatestVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudBaseProjectLatestVersionResponse rsp = DeleteCloudBaseProjectLatestVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudBaseProjectLatestVersionOutcome(rsp);
        else
            return DeleteCloudBaseProjectLatestVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudBaseProjectLatestVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteCloudBaseProjectLatestVersionAsync(const DeleteCloudBaseProjectLatestVersionRequest& request, const DeleteCloudBaseProjectLatestVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudBaseProjectLatestVersionRequest&;
    using Resp = DeleteCloudBaseProjectLatestVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudBaseProjectLatestVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteCloudBaseProjectLatestVersionOutcomeCallable TcbClient::DeleteCloudBaseProjectLatestVersionCallable(const DeleteCloudBaseProjectLatestVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudBaseProjectLatestVersionOutcome>>();
    DeleteCloudBaseProjectLatestVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteCloudBaseProjectLatestVersionRequest&,
        DeleteCloudBaseProjectLatestVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteCloudBaseRunServerVersionOutcome TcbClient::DeleteCloudBaseRunServerVersion(const DeleteCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudBaseRunServerVersionResponse rsp = DeleteCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudBaseRunServerVersionOutcome(rsp);
        else
            return DeleteCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteCloudBaseRunServerVersionAsync(const DeleteCloudBaseRunServerVersionRequest& request, const DeleteCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudBaseRunServerVersionRequest&;
    using Resp = DeleteCloudBaseRunServerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudBaseRunServerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteCloudBaseRunServerVersionOutcomeCallable TcbClient::DeleteCloudBaseRunServerVersionCallable(const DeleteCloudBaseRunServerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudBaseRunServerVersionOutcome>>();
    DeleteCloudBaseRunServerVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteCloudBaseRunServerVersionRequest&,
        DeleteCloudBaseRunServerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteGatewayVersionOutcome TcbClient::DeleteGatewayVersion(const DeleteGatewayVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGatewayVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGatewayVersionResponse rsp = DeleteGatewayVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGatewayVersionOutcome(rsp);
        else
            return DeleteGatewayVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteGatewayVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteGatewayVersionAsync(const DeleteGatewayVersionRequest& request, const DeleteGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGatewayVersionRequest&;
    using Resp = DeleteGatewayVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGatewayVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteGatewayVersionOutcomeCallable TcbClient::DeleteGatewayVersionCallable(const DeleteGatewayVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGatewayVersionOutcome>>();
    DeleteGatewayVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteGatewayVersionRequest&,
        DeleteGatewayVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DeleteWxGatewayRouteOutcome TcbClient::DeleteWxGatewayRoute(const DeleteWxGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWxGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWxGatewayRouteResponse rsp = DeleteWxGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWxGatewayRouteOutcome(rsp);
        else
            return DeleteWxGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteWxGatewayRouteOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteWxGatewayRouteAsync(const DeleteWxGatewayRouteRequest& request, const DeleteWxGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWxGatewayRouteRequest&;
    using Resp = DeleteWxGatewayRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWxGatewayRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DeleteWxGatewayRouteOutcomeCallable TcbClient::DeleteWxGatewayRouteCallable(const DeleteWxGatewayRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWxGatewayRouteOutcome>>();
    DeleteWxGatewayRouteAsync(
    request,
    [prom](
        const TcbClient*,
        const DeleteWxGatewayRouteRequest&,
        DeleteWxGatewayRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeActivityRecordOutcome TcbClient::DescribeActivityRecord(const DescribeActivityRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActivityRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActivityRecordResponse rsp = DescribeActivityRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActivityRecordOutcome(rsp);
        else
            return DescribeActivityRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeActivityRecordOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeActivityRecordAsync(const DescribeActivityRecordRequest& request, const DescribeActivityRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeActivityRecordRequest&;
    using Resp = DescribeActivityRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeActivityRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeActivityRecordOutcomeCallable TcbClient::DescribeActivityRecordCallable(const DescribeActivityRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeActivityRecordOutcome>>();
    DescribeActivityRecordAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeActivityRecordRequest&,
        DescribeActivityRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeAuthDomainsOutcome TcbClient::DescribeAuthDomains(const DescribeAuthDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthDomainsResponse rsp = DescribeAuthDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthDomainsOutcome(rsp);
        else
            return DescribeAuthDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthDomainsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeAuthDomainsAsync(const DescribeAuthDomainsRequest& request, const DescribeAuthDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuthDomainsRequest&;
    using Resp = DescribeAuthDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuthDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeAuthDomainsOutcomeCallable TcbClient::DescribeAuthDomainsCallable(const DescribeAuthDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuthDomainsOutcome>>();
    DescribeAuthDomainsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeAuthDomainsRequest&,
        DescribeAuthDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeBaasPackageListOutcome TcbClient::DescribeBaasPackageList(const DescribeBaasPackageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaasPackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaasPackageListResponse rsp = DescribeBaasPackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaasPackageListOutcome(rsp);
        else
            return DescribeBaasPackageListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaasPackageListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeBaasPackageListAsync(const DescribeBaasPackageListRequest& request, const DescribeBaasPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaasPackageListRequest&;
    using Resp = DescribeBaasPackageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaasPackageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeBaasPackageListOutcomeCallable TcbClient::DescribeBaasPackageListCallable(const DescribeBaasPackageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaasPackageListOutcome>>();
    DescribeBaasPackageListAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeBaasPackageListRequest&,
        DescribeBaasPackageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeBillingInfoOutcome TcbClient::DescribeBillingInfo(const DescribeBillingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingInfoResponse rsp = DescribeBillingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingInfoOutcome(rsp);
        else
            return DescribeBillingInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeBillingInfoAsync(const DescribeBillingInfoRequest& request, const DescribeBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillingInfoRequest&;
    using Resp = DescribeBillingInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeBillingInfoOutcomeCallable TcbClient::DescribeBillingInfoCallable(const DescribeBillingInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingInfoOutcome>>();
    DescribeBillingInfoAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeBillingInfoRequest&,
        DescribeBillingInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCbrServerVersionOutcome TcbClient::DescribeCbrServerVersion(const DescribeCbrServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCbrServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCbrServerVersionResponse rsp = DescribeCbrServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCbrServerVersionOutcome(rsp);
        else
            return DescribeCbrServerVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeCbrServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCbrServerVersionAsync(const DescribeCbrServerVersionRequest& request, const DescribeCbrServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCbrServerVersionRequest&;
    using Resp = DescribeCbrServerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCbrServerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCbrServerVersionOutcomeCallable TcbClient::DescribeCbrServerVersionCallable(const DescribeCbrServerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCbrServerVersionOutcome>>();
    DescribeCbrServerVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCbrServerVersionRequest&,
        DescribeCbrServerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseBuildServiceOutcome TcbClient::DescribeCloudBaseBuildService(const DescribeCloudBaseBuildServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseBuildService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseBuildServiceResponse rsp = DescribeCloudBaseBuildServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseBuildServiceOutcome(rsp);
        else
            return DescribeCloudBaseBuildServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseBuildServiceOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseBuildServiceAsync(const DescribeCloudBaseBuildServiceRequest& request, const DescribeCloudBaseBuildServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseBuildServiceRequest&;
    using Resp = DescribeCloudBaseBuildServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseBuildService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseBuildServiceOutcomeCallable TcbClient::DescribeCloudBaseBuildServiceCallable(const DescribeCloudBaseBuildServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseBuildServiceOutcome>>();
    DescribeCloudBaseBuildServiceAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseBuildServiceRequest&,
        DescribeCloudBaseBuildServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseProjectLatestVersionListOutcome TcbClient::DescribeCloudBaseProjectLatestVersionList(const DescribeCloudBaseProjectLatestVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseProjectLatestVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseProjectLatestVersionListResponse rsp = DescribeCloudBaseProjectLatestVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseProjectLatestVersionListOutcome(rsp);
        else
            return DescribeCloudBaseProjectLatestVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseProjectLatestVersionListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseProjectLatestVersionListAsync(const DescribeCloudBaseProjectLatestVersionListRequest& request, const DescribeCloudBaseProjectLatestVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseProjectLatestVersionListRequest&;
    using Resp = DescribeCloudBaseProjectLatestVersionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseProjectLatestVersionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseProjectLatestVersionListOutcomeCallable TcbClient::DescribeCloudBaseProjectLatestVersionListCallable(const DescribeCloudBaseProjectLatestVersionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseProjectLatestVersionListOutcome>>();
    DescribeCloudBaseProjectLatestVersionListAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseProjectLatestVersionListRequest&,
        DescribeCloudBaseProjectLatestVersionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseProjectVersionListOutcome TcbClient::DescribeCloudBaseProjectVersionList(const DescribeCloudBaseProjectVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseProjectVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseProjectVersionListResponse rsp = DescribeCloudBaseProjectVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseProjectVersionListOutcome(rsp);
        else
            return DescribeCloudBaseProjectVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseProjectVersionListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseProjectVersionListAsync(const DescribeCloudBaseProjectVersionListRequest& request, const DescribeCloudBaseProjectVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseProjectVersionListRequest&;
    using Resp = DescribeCloudBaseProjectVersionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseProjectVersionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseProjectVersionListOutcomeCallable TcbClient::DescribeCloudBaseProjectVersionListCallable(const DescribeCloudBaseProjectVersionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseProjectVersionListOutcome>>();
    DescribeCloudBaseProjectVersionListAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseProjectVersionListRequest&,
        DescribeCloudBaseProjectVersionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunAllVpcsOutcome TcbClient::DescribeCloudBaseRunAllVpcs(const DescribeCloudBaseRunAllVpcsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunAllVpcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunAllVpcsResponse rsp = DescribeCloudBaseRunAllVpcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunAllVpcsOutcome(rsp);
        else
            return DescribeCloudBaseRunAllVpcsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunAllVpcsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunAllVpcsAsync(const DescribeCloudBaseRunAllVpcsRequest& request, const DescribeCloudBaseRunAllVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunAllVpcsRequest&;
    using Resp = DescribeCloudBaseRunAllVpcsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunAllVpcs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunAllVpcsOutcomeCallable TcbClient::DescribeCloudBaseRunAllVpcsCallable(const DescribeCloudBaseRunAllVpcsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunAllVpcsOutcome>>();
    DescribeCloudBaseRunAllVpcsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunAllVpcsRequest&,
        DescribeCloudBaseRunAllVpcsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunConfForGateWayOutcome TcbClient::DescribeCloudBaseRunConfForGateWay(const DescribeCloudBaseRunConfForGateWayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunConfForGateWay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunConfForGateWayResponse rsp = DescribeCloudBaseRunConfForGateWayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunConfForGateWayOutcome(rsp);
        else
            return DescribeCloudBaseRunConfForGateWayOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunConfForGateWayOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunConfForGateWayAsync(const DescribeCloudBaseRunConfForGateWayRequest& request, const DescribeCloudBaseRunConfForGateWayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunConfForGateWayRequest&;
    using Resp = DescribeCloudBaseRunConfForGateWayResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunConfForGateWay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunConfForGateWayOutcomeCallable TcbClient::DescribeCloudBaseRunConfForGateWayCallable(const DescribeCloudBaseRunConfForGateWayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunConfForGateWayOutcome>>();
    DescribeCloudBaseRunConfForGateWayAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunConfForGateWayRequest&,
        DescribeCloudBaseRunConfForGateWayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunOneClickTaskExternalOutcome TcbClient::DescribeCloudBaseRunOneClickTaskExternal(const DescribeCloudBaseRunOneClickTaskExternalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunOneClickTaskExternal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunOneClickTaskExternalResponse rsp = DescribeCloudBaseRunOneClickTaskExternalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunOneClickTaskExternalOutcome(rsp);
        else
            return DescribeCloudBaseRunOneClickTaskExternalOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunOneClickTaskExternalOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunOneClickTaskExternalAsync(const DescribeCloudBaseRunOneClickTaskExternalRequest& request, const DescribeCloudBaseRunOneClickTaskExternalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunOneClickTaskExternalRequest&;
    using Resp = DescribeCloudBaseRunOneClickTaskExternalResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunOneClickTaskExternal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunOneClickTaskExternalOutcomeCallable TcbClient::DescribeCloudBaseRunOneClickTaskExternalCallable(const DescribeCloudBaseRunOneClickTaskExternalRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunOneClickTaskExternalOutcome>>();
    DescribeCloudBaseRunOneClickTaskExternalAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunOneClickTaskExternalRequest&,
        DescribeCloudBaseRunOneClickTaskExternalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunOperationTypesOutcome TcbClient::DescribeCloudBaseRunOperationTypes(const DescribeCloudBaseRunOperationTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunOperationTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunOperationTypesResponse rsp = DescribeCloudBaseRunOperationTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunOperationTypesOutcome(rsp);
        else
            return DescribeCloudBaseRunOperationTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunOperationTypesOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunOperationTypesAsync(const DescribeCloudBaseRunOperationTypesRequest& request, const DescribeCloudBaseRunOperationTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunOperationTypesRequest&;
    using Resp = DescribeCloudBaseRunOperationTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunOperationTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunOperationTypesOutcomeCallable TcbClient::DescribeCloudBaseRunOperationTypesCallable(const DescribeCloudBaseRunOperationTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunOperationTypesOutcome>>();
    DescribeCloudBaseRunOperationTypesAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunOperationTypesRequest&,
        DescribeCloudBaseRunOperationTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunPodListOutcome TcbClient::DescribeCloudBaseRunPodList(const DescribeCloudBaseRunPodListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunPodList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunPodListResponse rsp = DescribeCloudBaseRunPodListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunPodListOutcome(rsp);
        else
            return DescribeCloudBaseRunPodListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunPodListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunPodListAsync(const DescribeCloudBaseRunPodListRequest& request, const DescribeCloudBaseRunPodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunPodListRequest&;
    using Resp = DescribeCloudBaseRunPodListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunPodList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunPodListOutcomeCallable TcbClient::DescribeCloudBaseRunPodListCallable(const DescribeCloudBaseRunPodListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunPodListOutcome>>();
    DescribeCloudBaseRunPodListAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunPodListRequest&,
        DescribeCloudBaseRunPodListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunResourceOutcome TcbClient::DescribeCloudBaseRunResource(const DescribeCloudBaseRunResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunResourceResponse rsp = DescribeCloudBaseRunResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunResourceOutcome(rsp);
        else
            return DescribeCloudBaseRunResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunResourceOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunResourceAsync(const DescribeCloudBaseRunResourceRequest& request, const DescribeCloudBaseRunResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunResourceRequest&;
    using Resp = DescribeCloudBaseRunResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunResourceOutcomeCallable TcbClient::DescribeCloudBaseRunResourceCallable(const DescribeCloudBaseRunResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunResourceOutcome>>();
    DescribeCloudBaseRunResourceAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunResourceRequest&,
        DescribeCloudBaseRunResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunResourceForExtendOutcome TcbClient::DescribeCloudBaseRunResourceForExtend(const DescribeCloudBaseRunResourceForExtendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunResourceForExtend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunResourceForExtendResponse rsp = DescribeCloudBaseRunResourceForExtendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunResourceForExtendOutcome(rsp);
        else
            return DescribeCloudBaseRunResourceForExtendOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunResourceForExtendOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunResourceForExtendAsync(const DescribeCloudBaseRunResourceForExtendRequest& request, const DescribeCloudBaseRunResourceForExtendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunResourceForExtendRequest&;
    using Resp = DescribeCloudBaseRunResourceForExtendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunResourceForExtend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunResourceForExtendOutcomeCallable TcbClient::DescribeCloudBaseRunResourceForExtendCallable(const DescribeCloudBaseRunResourceForExtendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunResourceForExtendOutcome>>();
    DescribeCloudBaseRunResourceForExtendAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunResourceForExtendRequest&,
        DescribeCloudBaseRunResourceForExtendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunServerOutcome TcbClient::DescribeCloudBaseRunServer(const DescribeCloudBaseRunServerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunServerResponse rsp = DescribeCloudBaseRunServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunServerOutcome(rsp);
        else
            return DescribeCloudBaseRunServerOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunServerOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunServerAsync(const DescribeCloudBaseRunServerRequest& request, const DescribeCloudBaseRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunServerRequest&;
    using Resp = DescribeCloudBaseRunServerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunServerOutcomeCallable TcbClient::DescribeCloudBaseRunServerCallable(const DescribeCloudBaseRunServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunServerOutcome>>();
    DescribeCloudBaseRunServerAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunServerRequest&,
        DescribeCloudBaseRunServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunServerDomainNameOutcome TcbClient::DescribeCloudBaseRunServerDomainName(const DescribeCloudBaseRunServerDomainNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunServerDomainName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunServerDomainNameResponse rsp = DescribeCloudBaseRunServerDomainNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunServerDomainNameOutcome(rsp);
        else
            return DescribeCloudBaseRunServerDomainNameOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunServerDomainNameOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunServerDomainNameAsync(const DescribeCloudBaseRunServerDomainNameRequest& request, const DescribeCloudBaseRunServerDomainNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunServerDomainNameRequest&;
    using Resp = DescribeCloudBaseRunServerDomainNameResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunServerDomainName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunServerDomainNameOutcomeCallable TcbClient::DescribeCloudBaseRunServerDomainNameCallable(const DescribeCloudBaseRunServerDomainNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunServerDomainNameOutcome>>();
    DescribeCloudBaseRunServerDomainNameAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunServerDomainNameRequest&,
        DescribeCloudBaseRunServerDomainNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunServerVersionOutcome TcbClient::DescribeCloudBaseRunServerVersion(const DescribeCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunServerVersionResponse rsp = DescribeCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunServerVersionOutcome(rsp);
        else
            return DescribeCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunServerVersionAsync(const DescribeCloudBaseRunServerVersionRequest& request, const DescribeCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunServerVersionRequest&;
    using Resp = DescribeCloudBaseRunServerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunServerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunServerVersionOutcomeCallable TcbClient::DescribeCloudBaseRunServerVersionCallable(const DescribeCloudBaseRunServerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunServerVersionOutcome>>();
    DescribeCloudBaseRunServerVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunServerVersionRequest&,
        DescribeCloudBaseRunServerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunVersionOutcome TcbClient::DescribeCloudBaseRunVersion(const DescribeCloudBaseRunVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunVersionResponse rsp = DescribeCloudBaseRunVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunVersionOutcome(rsp);
        else
            return DescribeCloudBaseRunVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunVersionAsync(const DescribeCloudBaseRunVersionRequest& request, const DescribeCloudBaseRunVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunVersionRequest&;
    using Resp = DescribeCloudBaseRunVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunVersionOutcomeCallable TcbClient::DescribeCloudBaseRunVersionCallable(const DescribeCloudBaseRunVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunVersionOutcome>>();
    DescribeCloudBaseRunVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunVersionRequest&,
        DescribeCloudBaseRunVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunVersionRsByConditionOutcome TcbClient::DescribeCloudBaseRunVersionRsByCondition(const DescribeCloudBaseRunVersionRsByConditionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunVersionRsByCondition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunVersionRsByConditionResponse rsp = DescribeCloudBaseRunVersionRsByConditionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunVersionRsByConditionOutcome(rsp);
        else
            return DescribeCloudBaseRunVersionRsByConditionOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunVersionRsByConditionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunVersionRsByConditionAsync(const DescribeCloudBaseRunVersionRsByConditionRequest& request, const DescribeCloudBaseRunVersionRsByConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunVersionRsByConditionRequest&;
    using Resp = DescribeCloudBaseRunVersionRsByConditionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunVersionRsByCondition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunVersionRsByConditionOutcomeCallable TcbClient::DescribeCloudBaseRunVersionRsByConditionCallable(const DescribeCloudBaseRunVersionRsByConditionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunVersionRsByConditionOutcome>>();
    DescribeCloudBaseRunVersionRsByConditionAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunVersionRsByConditionRequest&,
        DescribeCloudBaseRunVersionRsByConditionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCloudBaseRunVersionSnapshotOutcome TcbClient::DescribeCloudBaseRunVersionSnapshot(const DescribeCloudBaseRunVersionSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunVersionSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunVersionSnapshotResponse rsp = DescribeCloudBaseRunVersionSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunVersionSnapshotOutcome(rsp);
        else
            return DescribeCloudBaseRunVersionSnapshotOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunVersionSnapshotOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunVersionSnapshotAsync(const DescribeCloudBaseRunVersionSnapshotRequest& request, const DescribeCloudBaseRunVersionSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudBaseRunVersionSnapshotRequest&;
    using Resp = DescribeCloudBaseRunVersionSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudBaseRunVersionSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCloudBaseRunVersionSnapshotOutcomeCallable TcbClient::DescribeCloudBaseRunVersionSnapshotCallable(const DescribeCloudBaseRunVersionSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudBaseRunVersionSnapshotOutcome>>();
    DescribeCloudBaseRunVersionSnapshotAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCloudBaseRunVersionSnapshotRequest&,
        DescribeCloudBaseRunVersionSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeCurveDataOutcome TcbClient::DescribeCurveData(const DescribeCurveDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCurveData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCurveDataResponse rsp = DescribeCurveDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCurveDataOutcome(rsp);
        else
            return DescribeCurveDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCurveDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCurveDataAsync(const DescribeCurveDataRequest& request, const DescribeCurveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCurveDataRequest&;
    using Resp = DescribeCurveDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCurveData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeCurveDataOutcomeCallable TcbClient::DescribeCurveDataCallable(const DescribeCurveDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCurveDataOutcome>>();
    DescribeCurveDataAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeCurveDataRequest&,
        DescribeCurveDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeDatabaseACLOutcome TcbClient::DescribeDatabaseACL(const DescribeDatabaseACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseACLResponse rsp = DescribeDatabaseACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseACLOutcome(rsp);
        else
            return DescribeDatabaseACLOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseACLOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeDatabaseACLAsync(const DescribeDatabaseACLRequest& request, const DescribeDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseACLRequest&;
    using Resp = DescribeDatabaseACLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeDatabaseACLOutcomeCallable TcbClient::DescribeDatabaseACLCallable(const DescribeDatabaseACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseACLOutcome>>();
    DescribeDatabaseACLAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeDatabaseACLRequest&,
        DescribeDatabaseACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeDownloadFileOutcome TcbClient::DescribeDownloadFile(const DescribeDownloadFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDownloadFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDownloadFileResponse rsp = DescribeDownloadFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDownloadFileOutcome(rsp);
        else
            return DescribeDownloadFileOutcome(o.GetError());
    }
    else
    {
        return DescribeDownloadFileOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeDownloadFileAsync(const DescribeDownloadFileRequest& request, const DescribeDownloadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDownloadFileRequest&;
    using Resp = DescribeDownloadFileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDownloadFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeDownloadFileOutcomeCallable TcbClient::DescribeDownloadFileCallable(const DescribeDownloadFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDownloadFileOutcome>>();
    DescribeDownloadFileAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeDownloadFileRequest&,
        DescribeDownloadFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeEnvDealRegionOutcome TcbClient::DescribeEnvDealRegion(const DescribeEnvDealRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvDealRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvDealRegionResponse rsp = DescribeEnvDealRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvDealRegionOutcome(rsp);
        else
            return DescribeEnvDealRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvDealRegionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvDealRegionAsync(const DescribeEnvDealRegionRequest& request, const DescribeEnvDealRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvDealRegionRequest&;
    using Resp = DescribeEnvDealRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvDealRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeEnvDealRegionOutcomeCallable TcbClient::DescribeEnvDealRegionCallable(const DescribeEnvDealRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvDealRegionOutcome>>();
    DescribeEnvDealRegionAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeEnvDealRegionRequest&,
        DescribeEnvDealRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeEnvFreeQuotaOutcome TcbClient::DescribeEnvFreeQuota(const DescribeEnvFreeQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvFreeQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvFreeQuotaResponse rsp = DescribeEnvFreeQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvFreeQuotaOutcome(rsp);
        else
            return DescribeEnvFreeQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvFreeQuotaOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvFreeQuotaAsync(const DescribeEnvFreeQuotaRequest& request, const DescribeEnvFreeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvFreeQuotaRequest&;
    using Resp = DescribeEnvFreeQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvFreeQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeEnvFreeQuotaOutcomeCallable TcbClient::DescribeEnvFreeQuotaCallable(const DescribeEnvFreeQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvFreeQuotaOutcome>>();
    DescribeEnvFreeQuotaAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeEnvFreeQuotaRequest&,
        DescribeEnvFreeQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeEnvLimitOutcome TcbClient::DescribeEnvLimit(const DescribeEnvLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvLimitResponse rsp = DescribeEnvLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvLimitOutcome(rsp);
        else
            return DescribeEnvLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvLimitOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvLimitAsync(const DescribeEnvLimitRequest& request, const DescribeEnvLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvLimitRequest&;
    using Resp = DescribeEnvLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeEnvLimitOutcomeCallable TcbClient::DescribeEnvLimitCallable(const DescribeEnvLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvLimitOutcome>>();
    DescribeEnvLimitAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeEnvLimitRequest&,
        DescribeEnvLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeEnvPostpaidDeductOutcome TcbClient::DescribeEnvPostpaidDeduct(const DescribeEnvPostpaidDeductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvPostpaidDeduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvPostpaidDeductResponse rsp = DescribeEnvPostpaidDeductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvPostpaidDeductOutcome(rsp);
        else
            return DescribeEnvPostpaidDeductOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvPostpaidDeductOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvPostpaidDeductAsync(const DescribeEnvPostpaidDeductRequest& request, const DescribeEnvPostpaidDeductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvPostpaidDeductRequest&;
    using Resp = DescribeEnvPostpaidDeductResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvPostpaidDeduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeEnvPostpaidDeductOutcomeCallable TcbClient::DescribeEnvPostpaidDeductCallable(const DescribeEnvPostpaidDeductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvPostpaidDeductOutcome>>();
    DescribeEnvPostpaidDeductAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeEnvPostpaidDeductRequest&,
        DescribeEnvPostpaidDeductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeEnvsOutcome TcbClient::DescribeEnvs(const DescribeEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvsResponse rsp = DescribeEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvsOutcome(rsp);
        else
            return DescribeEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvsAsync(const DescribeEnvsRequest& request, const DescribeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvsRequest&;
    using Resp = DescribeEnvsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeEnvsOutcomeCallable TcbClient::DescribeEnvsCallable(const DescribeEnvsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvsOutcome>>();
    DescribeEnvsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeEnvsRequest&,
        DescribeEnvsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeExtensionUploadInfoOutcome TcbClient::DescribeExtensionUploadInfo(const DescribeExtensionUploadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtensionUploadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtensionUploadInfoResponse rsp = DescribeExtensionUploadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtensionUploadInfoOutcome(rsp);
        else
            return DescribeExtensionUploadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeExtensionUploadInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeExtensionUploadInfoAsync(const DescribeExtensionUploadInfoRequest& request, const DescribeExtensionUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtensionUploadInfoRequest&;
    using Resp = DescribeExtensionUploadInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtensionUploadInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeExtensionUploadInfoOutcomeCallable TcbClient::DescribeExtensionUploadInfoCallable(const DescribeExtensionUploadInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtensionUploadInfoOutcome>>();
    DescribeExtensionUploadInfoAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeExtensionUploadInfoRequest&,
        DescribeExtensionUploadInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeExtraPkgBillingInfoOutcome TcbClient::DescribeExtraPkgBillingInfo(const DescribeExtraPkgBillingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtraPkgBillingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtraPkgBillingInfoResponse rsp = DescribeExtraPkgBillingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtraPkgBillingInfoOutcome(rsp);
        else
            return DescribeExtraPkgBillingInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeExtraPkgBillingInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeExtraPkgBillingInfoAsync(const DescribeExtraPkgBillingInfoRequest& request, const DescribeExtraPkgBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtraPkgBillingInfoRequest&;
    using Resp = DescribeExtraPkgBillingInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtraPkgBillingInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeExtraPkgBillingInfoOutcomeCallable TcbClient::DescribeExtraPkgBillingInfoCallable(const DescribeExtraPkgBillingInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtraPkgBillingInfoOutcome>>();
    DescribeExtraPkgBillingInfoAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeExtraPkgBillingInfoRequest&,
        DescribeExtraPkgBillingInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeGatewayCurveDataOutcome TcbClient::DescribeGatewayCurveData(const DescribeGatewayCurveDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayCurveData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayCurveDataResponse rsp = DescribeGatewayCurveDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayCurveDataOutcome(rsp);
        else
            return DescribeGatewayCurveDataOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayCurveDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeGatewayCurveDataAsync(const DescribeGatewayCurveDataRequest& request, const DescribeGatewayCurveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayCurveDataRequest&;
    using Resp = DescribeGatewayCurveDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayCurveData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeGatewayCurveDataOutcomeCallable TcbClient::DescribeGatewayCurveDataCallable(const DescribeGatewayCurveDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayCurveDataOutcome>>();
    DescribeGatewayCurveDataAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeGatewayCurveDataRequest&,
        DescribeGatewayCurveDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeGatewayVersionsOutcome TcbClient::DescribeGatewayVersions(const DescribeGatewayVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayVersionsResponse rsp = DescribeGatewayVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayVersionsOutcome(rsp);
        else
            return DescribeGatewayVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayVersionsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeGatewayVersionsAsync(const DescribeGatewayVersionsRequest& request, const DescribeGatewayVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayVersionsRequest&;
    using Resp = DescribeGatewayVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeGatewayVersionsOutcomeCallable TcbClient::DescribeGatewayVersionsCallable(const DescribeGatewayVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayVersionsOutcome>>();
    DescribeGatewayVersionsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeGatewayVersionsRequest&,
        DescribeGatewayVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeGraphDataOutcome TcbClient::DescribeGraphData(const DescribeGraphDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGraphData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGraphDataResponse rsp = DescribeGraphDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGraphDataOutcome(rsp);
        else
            return DescribeGraphDataOutcome(o.GetError());
    }
    else
    {
        return DescribeGraphDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeGraphDataAsync(const DescribeGraphDataRequest& request, const DescribeGraphDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGraphDataRequest&;
    using Resp = DescribeGraphDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGraphData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeGraphDataOutcomeCallable TcbClient::DescribeGraphDataCallable(const DescribeGraphDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGraphDataOutcome>>();
    DescribeGraphDataAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeGraphDataRequest&,
        DescribeGraphDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeHostingDomainTaskOutcome TcbClient::DescribeHostingDomainTask(const DescribeHostingDomainTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostingDomainTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostingDomainTaskResponse rsp = DescribeHostingDomainTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostingDomainTaskOutcome(rsp);
        else
            return DescribeHostingDomainTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeHostingDomainTaskOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeHostingDomainTaskAsync(const DescribeHostingDomainTaskRequest& request, const DescribeHostingDomainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostingDomainTaskRequest&;
    using Resp = DescribeHostingDomainTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostingDomainTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeHostingDomainTaskOutcomeCallable TcbClient::DescribeHostingDomainTaskCallable(const DescribeHostingDomainTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostingDomainTaskOutcome>>();
    DescribeHostingDomainTaskAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeHostingDomainTaskRequest&,
        DescribeHostingDomainTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribePostpayFreeQuotasOutcome TcbClient::DescribePostpayFreeQuotas(const DescribePostpayFreeQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePostpayFreeQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePostpayFreeQuotasResponse rsp = DescribePostpayFreeQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePostpayFreeQuotasOutcome(rsp);
        else
            return DescribePostpayFreeQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribePostpayFreeQuotasOutcome(outcome.GetError());
    }
}

void TcbClient::DescribePostpayFreeQuotasAsync(const DescribePostpayFreeQuotasRequest& request, const DescribePostpayFreeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePostpayFreeQuotasRequest&;
    using Resp = DescribePostpayFreeQuotasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePostpayFreeQuotas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribePostpayFreeQuotasOutcomeCallable TcbClient::DescribePostpayFreeQuotasCallable(const DescribePostpayFreeQuotasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePostpayFreeQuotasOutcome>>();
    DescribePostpayFreeQuotasAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribePostpayFreeQuotasRequest&,
        DescribePostpayFreeQuotasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribePostpayPackageFreeQuotasOutcome TcbClient::DescribePostpayPackageFreeQuotas(const DescribePostpayPackageFreeQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePostpayPackageFreeQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePostpayPackageFreeQuotasResponse rsp = DescribePostpayPackageFreeQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePostpayPackageFreeQuotasOutcome(rsp);
        else
            return DescribePostpayPackageFreeQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribePostpayPackageFreeQuotasOutcome(outcome.GetError());
    }
}

void TcbClient::DescribePostpayPackageFreeQuotasAsync(const DescribePostpayPackageFreeQuotasRequest& request, const DescribePostpayPackageFreeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePostpayPackageFreeQuotasRequest&;
    using Resp = DescribePostpayPackageFreeQuotasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePostpayPackageFreeQuotas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribePostpayPackageFreeQuotasOutcomeCallable TcbClient::DescribePostpayPackageFreeQuotasCallable(const DescribePostpayPackageFreeQuotasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePostpayPackageFreeQuotasOutcome>>();
    DescribePostpayPackageFreeQuotasAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribePostpayPackageFreeQuotasRequest&,
        DescribePostpayPackageFreeQuotasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeQuotaDataOutcome TcbClient::DescribeQuotaData(const DescribeQuotaDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotaDataResponse rsp = DescribeQuotaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotaDataOutcome(rsp);
        else
            return DescribeQuotaDataOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotaDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeQuotaDataAsync(const DescribeQuotaDataRequest& request, const DescribeQuotaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQuotaDataRequest&;
    using Resp = DescribeQuotaDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuotaData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeQuotaDataOutcomeCallable TcbClient::DescribeQuotaDataCallable(const DescribeQuotaDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuotaDataOutcome>>();
    DescribeQuotaDataAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeQuotaDataRequest&,
        DescribeQuotaDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeSmsQuotasOutcome TcbClient::DescribeSmsQuotas(const DescribeSmsQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmsQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmsQuotasResponse rsp = DescribeSmsQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmsQuotasOutcome(rsp);
        else
            return DescribeSmsQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribeSmsQuotasOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeSmsQuotasAsync(const DescribeSmsQuotasRequest& request, const DescribeSmsQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSmsQuotasRequest&;
    using Resp = DescribeSmsQuotasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSmsQuotas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeSmsQuotasOutcomeCallable TcbClient::DescribeSmsQuotasCallable(const DescribeSmsQuotasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSmsQuotasOutcome>>();
    DescribeSmsQuotasAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeSmsQuotasRequest&,
        DescribeSmsQuotasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeSpecialCostItemsOutcome TcbClient::DescribeSpecialCostItems(const DescribeSpecialCostItemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpecialCostItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecialCostItemsResponse rsp = DescribeSpecialCostItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecialCostItemsOutcome(rsp);
        else
            return DescribeSpecialCostItemsOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecialCostItemsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeSpecialCostItemsAsync(const DescribeSpecialCostItemsRequest& request, const DescribeSpecialCostItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpecialCostItemsRequest&;
    using Resp = DescribeSpecialCostItemsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpecialCostItems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeSpecialCostItemsOutcomeCallable TcbClient::DescribeSpecialCostItemsCallable(const DescribeSpecialCostItemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpecialCostItemsOutcome>>();
    DescribeSpecialCostItemsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeSpecialCostItemsRequest&,
        DescribeSpecialCostItemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeUserActivityInfoOutcome TcbClient::DescribeUserActivityInfo(const DescribeUserActivityInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserActivityInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserActivityInfoResponse rsp = DescribeUserActivityInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserActivityInfoOutcome(rsp);
        else
            return DescribeUserActivityInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserActivityInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeUserActivityInfoAsync(const DescribeUserActivityInfoRequest& request, const DescribeUserActivityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserActivityInfoRequest&;
    using Resp = DescribeUserActivityInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserActivityInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeUserActivityInfoOutcomeCallable TcbClient::DescribeUserActivityInfoCallable(const DescribeUserActivityInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserActivityInfoOutcome>>();
    DescribeUserActivityInfoAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeUserActivityInfoRequest&,
        DescribeUserActivityInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeWxCloudBaseRunEnvsOutcome TcbClient::DescribeWxCloudBaseRunEnvs(const DescribeWxCloudBaseRunEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWxCloudBaseRunEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWxCloudBaseRunEnvsResponse rsp = DescribeWxCloudBaseRunEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWxCloudBaseRunEnvsOutcome(rsp);
        else
            return DescribeWxCloudBaseRunEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeWxCloudBaseRunEnvsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeWxCloudBaseRunEnvsAsync(const DescribeWxCloudBaseRunEnvsRequest& request, const DescribeWxCloudBaseRunEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWxCloudBaseRunEnvsRequest&;
    using Resp = DescribeWxCloudBaseRunEnvsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWxCloudBaseRunEnvs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeWxCloudBaseRunEnvsOutcomeCallable TcbClient::DescribeWxCloudBaseRunEnvsCallable(const DescribeWxCloudBaseRunEnvsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWxCloudBaseRunEnvsOutcome>>();
    DescribeWxCloudBaseRunEnvsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeWxCloudBaseRunEnvsRequest&,
        DescribeWxCloudBaseRunEnvsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeWxCloudBaseRunSubNetsOutcome TcbClient::DescribeWxCloudBaseRunSubNets(const DescribeWxCloudBaseRunSubNetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWxCloudBaseRunSubNets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWxCloudBaseRunSubNetsResponse rsp = DescribeWxCloudBaseRunSubNetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWxCloudBaseRunSubNetsOutcome(rsp);
        else
            return DescribeWxCloudBaseRunSubNetsOutcome(o.GetError());
    }
    else
    {
        return DescribeWxCloudBaseRunSubNetsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeWxCloudBaseRunSubNetsAsync(const DescribeWxCloudBaseRunSubNetsRequest& request, const DescribeWxCloudBaseRunSubNetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWxCloudBaseRunSubNetsRequest&;
    using Resp = DescribeWxCloudBaseRunSubNetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWxCloudBaseRunSubNets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeWxCloudBaseRunSubNetsOutcomeCallable TcbClient::DescribeWxCloudBaseRunSubNetsCallable(const DescribeWxCloudBaseRunSubNetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWxCloudBaseRunSubNetsOutcome>>();
    DescribeWxCloudBaseRunSubNetsAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeWxCloudBaseRunSubNetsRequest&,
        DescribeWxCloudBaseRunSubNetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeWxGatewayRoutesOutcome TcbClient::DescribeWxGatewayRoutes(const DescribeWxGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWxGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWxGatewayRoutesResponse rsp = DescribeWxGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWxGatewayRoutesOutcome(rsp);
        else
            return DescribeWxGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeWxGatewayRoutesOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeWxGatewayRoutesAsync(const DescribeWxGatewayRoutesRequest& request, const DescribeWxGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWxGatewayRoutesRequest&;
    using Resp = DescribeWxGatewayRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWxGatewayRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeWxGatewayRoutesOutcomeCallable TcbClient::DescribeWxGatewayRoutesCallable(const DescribeWxGatewayRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWxGatewayRoutesOutcome>>();
    DescribeWxGatewayRoutesAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeWxGatewayRoutesRequest&,
        DescribeWxGatewayRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DescribeWxGatewaysOutcome TcbClient::DescribeWxGateways(const DescribeWxGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWxGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWxGatewaysResponse rsp = DescribeWxGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWxGatewaysOutcome(rsp);
        else
            return DescribeWxGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeWxGatewaysOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeWxGatewaysAsync(const DescribeWxGatewaysRequest& request, const DescribeWxGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWxGatewaysRequest&;
    using Resp = DescribeWxGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWxGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DescribeWxGatewaysOutcomeCallable TcbClient::DescribeWxGatewaysCallable(const DescribeWxGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWxGatewaysOutcome>>();
    DescribeWxGatewaysAsync(
    request,
    [prom](
        const TcbClient*,
        const DescribeWxGatewaysRequest&,
        DescribeWxGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DestroyEnvOutcome TcbClient::DestroyEnv(const DestroyEnvRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyEnvResponse rsp = DestroyEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyEnvOutcome(rsp);
        else
            return DestroyEnvOutcome(o.GetError());
    }
    else
    {
        return DestroyEnvOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyEnvAsync(const DestroyEnvRequest& request, const DestroyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyEnvRequest&;
    using Resp = DestroyEnvResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DestroyEnvOutcomeCallable TcbClient::DestroyEnvCallable(const DestroyEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyEnvOutcome>>();
    DestroyEnvAsync(
    request,
    [prom](
        const TcbClient*,
        const DestroyEnvRequest&,
        DestroyEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::DestroyStaticStoreOutcome TcbClient::DestroyStaticStore(const DestroyStaticStoreRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyStaticStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyStaticStoreResponse rsp = DestroyStaticStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyStaticStoreOutcome(rsp);
        else
            return DestroyStaticStoreOutcome(o.GetError());
    }
    else
    {
        return DestroyStaticStoreOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyStaticStoreAsync(const DestroyStaticStoreRequest& request, const DestroyStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyStaticStoreRequest&;
    using Resp = DestroyStaticStoreResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyStaticStore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::DestroyStaticStoreOutcomeCallable TcbClient::DestroyStaticStoreCallable(const DestroyStaticStoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyStaticStoreOutcome>>();
    DestroyStaticStoreAsync(
    request,
    [prom](
        const TcbClient*,
        const DestroyStaticStoreRequest&,
        DestroyStaticStoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::EditAuthConfigOutcome TcbClient::EditAuthConfig(const EditAuthConfigRequest &request)
{
    auto outcome = MakeRequest(request, "EditAuthConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditAuthConfigResponse rsp = EditAuthConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditAuthConfigOutcome(rsp);
        else
            return EditAuthConfigOutcome(o.GetError());
    }
    else
    {
        return EditAuthConfigOutcome(outcome.GetError());
    }
}

void TcbClient::EditAuthConfigAsync(const EditAuthConfigRequest& request, const EditAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditAuthConfigRequest&;
    using Resp = EditAuthConfigResponse;

    DoRequestAsync<Req, Resp>(
        "EditAuthConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::EditAuthConfigOutcomeCallable TcbClient::EditAuthConfigCallable(const EditAuthConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditAuthConfigOutcome>>();
    EditAuthConfigAsync(
    request,
    [prom](
        const TcbClient*,
        const EditAuthConfigRequest&,
        EditAuthConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::EstablishCloudBaseRunServerOutcome TcbClient::EstablishCloudBaseRunServer(const EstablishCloudBaseRunServerRequest &request)
{
    auto outcome = MakeRequest(request, "EstablishCloudBaseRunServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EstablishCloudBaseRunServerResponse rsp = EstablishCloudBaseRunServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EstablishCloudBaseRunServerOutcome(rsp);
        else
            return EstablishCloudBaseRunServerOutcome(o.GetError());
    }
    else
    {
        return EstablishCloudBaseRunServerOutcome(outcome.GetError());
    }
}

void TcbClient::EstablishCloudBaseRunServerAsync(const EstablishCloudBaseRunServerRequest& request, const EstablishCloudBaseRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EstablishCloudBaseRunServerRequest&;
    using Resp = EstablishCloudBaseRunServerResponse;

    DoRequestAsync<Req, Resp>(
        "EstablishCloudBaseRunServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::EstablishCloudBaseRunServerOutcomeCallable TcbClient::EstablishCloudBaseRunServerCallable(const EstablishCloudBaseRunServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<EstablishCloudBaseRunServerOutcome>>();
    EstablishCloudBaseRunServerAsync(
    request,
    [prom](
        const TcbClient*,
        const EstablishCloudBaseRunServerRequest&,
        EstablishCloudBaseRunServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::EstablishWxGatewayRouteOutcome TcbClient::EstablishWxGatewayRoute(const EstablishWxGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "EstablishWxGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EstablishWxGatewayRouteResponse rsp = EstablishWxGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EstablishWxGatewayRouteOutcome(rsp);
        else
            return EstablishWxGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return EstablishWxGatewayRouteOutcome(outcome.GetError());
    }
}

void TcbClient::EstablishWxGatewayRouteAsync(const EstablishWxGatewayRouteRequest& request, const EstablishWxGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EstablishWxGatewayRouteRequest&;
    using Resp = EstablishWxGatewayRouteResponse;

    DoRequestAsync<Req, Resp>(
        "EstablishWxGatewayRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::EstablishWxGatewayRouteOutcomeCallable TcbClient::EstablishWxGatewayRouteCallable(const EstablishWxGatewayRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<EstablishWxGatewayRouteOutcome>>();
    EstablishWxGatewayRouteAsync(
    request,
    [prom](
        const TcbClient*,
        const EstablishWxGatewayRouteRequest&,
        EstablishWxGatewayRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::FreezeCloudBaseRunServersOutcome TcbClient::FreezeCloudBaseRunServers(const FreezeCloudBaseRunServersRequest &request)
{
    auto outcome = MakeRequest(request, "FreezeCloudBaseRunServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreezeCloudBaseRunServersResponse rsp = FreezeCloudBaseRunServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreezeCloudBaseRunServersOutcome(rsp);
        else
            return FreezeCloudBaseRunServersOutcome(o.GetError());
    }
    else
    {
        return FreezeCloudBaseRunServersOutcome(outcome.GetError());
    }
}

void TcbClient::FreezeCloudBaseRunServersAsync(const FreezeCloudBaseRunServersRequest& request, const FreezeCloudBaseRunServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FreezeCloudBaseRunServersRequest&;
    using Resp = FreezeCloudBaseRunServersResponse;

    DoRequestAsync<Req, Resp>(
        "FreezeCloudBaseRunServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::FreezeCloudBaseRunServersOutcomeCallable TcbClient::FreezeCloudBaseRunServersCallable(const FreezeCloudBaseRunServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<FreezeCloudBaseRunServersOutcome>>();
    FreezeCloudBaseRunServersAsync(
    request,
    [prom](
        const TcbClient*,
        const FreezeCloudBaseRunServersRequest&,
        FreezeCloudBaseRunServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyCloudBaseRunServerFlowConfOutcome TcbClient::ModifyCloudBaseRunServerFlowConf(const ModifyCloudBaseRunServerFlowConfRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudBaseRunServerFlowConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudBaseRunServerFlowConfResponse rsp = ModifyCloudBaseRunServerFlowConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudBaseRunServerFlowConfOutcome(rsp);
        else
            return ModifyCloudBaseRunServerFlowConfOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudBaseRunServerFlowConfOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyCloudBaseRunServerFlowConfAsync(const ModifyCloudBaseRunServerFlowConfRequest& request, const ModifyCloudBaseRunServerFlowConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudBaseRunServerFlowConfRequest&;
    using Resp = ModifyCloudBaseRunServerFlowConfResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudBaseRunServerFlowConf", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyCloudBaseRunServerFlowConfOutcomeCallable TcbClient::ModifyCloudBaseRunServerFlowConfCallable(const ModifyCloudBaseRunServerFlowConfRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudBaseRunServerFlowConfOutcome>>();
    ModifyCloudBaseRunServerFlowConfAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyCloudBaseRunServerFlowConfRequest&,
        ModifyCloudBaseRunServerFlowConfOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyCloudBaseRunServerVersionOutcome TcbClient::ModifyCloudBaseRunServerVersion(const ModifyCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudBaseRunServerVersionResponse rsp = ModifyCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudBaseRunServerVersionOutcome(rsp);
        else
            return ModifyCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyCloudBaseRunServerVersionAsync(const ModifyCloudBaseRunServerVersionRequest& request, const ModifyCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudBaseRunServerVersionRequest&;
    using Resp = ModifyCloudBaseRunServerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudBaseRunServerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyCloudBaseRunServerVersionOutcomeCallable TcbClient::ModifyCloudBaseRunServerVersionCallable(const ModifyCloudBaseRunServerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudBaseRunServerVersionOutcome>>();
    ModifyCloudBaseRunServerVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyCloudBaseRunServerVersionRequest&,
        ModifyCloudBaseRunServerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyClsTopicOutcome TcbClient::ModifyClsTopic(const ModifyClsTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClsTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClsTopicResponse rsp = ModifyClsTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClsTopicOutcome(rsp);
        else
            return ModifyClsTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyClsTopicOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyClsTopicAsync(const ModifyClsTopicRequest& request, const ModifyClsTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClsTopicRequest&;
    using Resp = ModifyClsTopicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClsTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyClsTopicOutcomeCallable TcbClient::ModifyClsTopicCallable(const ModifyClsTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClsTopicOutcome>>();
    ModifyClsTopicAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyClsTopicRequest&,
        ModifyClsTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyDatabaseACLOutcome TcbClient::ModifyDatabaseACL(const ModifyDatabaseACLRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseACLResponse rsp = ModifyDatabaseACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseACLOutcome(rsp);
        else
            return ModifyDatabaseACLOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseACLOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyDatabaseACLAsync(const ModifyDatabaseACLRequest& request, const ModifyDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatabaseACLRequest&;
    using Resp = ModifyDatabaseACLResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatabaseACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyDatabaseACLOutcomeCallable TcbClient::ModifyDatabaseACLCallable(const ModifyDatabaseACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatabaseACLOutcome>>();
    ModifyDatabaseACLAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyDatabaseACLRequest&,
        ModifyDatabaseACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyEnvOutcome TcbClient::ModifyEnv(const ModifyEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvResponse rsp = ModifyEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvOutcome(rsp);
        else
            return ModifyEnvOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyEnvAsync(const ModifyEnvRequest& request, const ModifyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnvRequest&;
    using Resp = ModifyEnvResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyEnvOutcomeCallable TcbClient::ModifyEnvCallable(const ModifyEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnvOutcome>>();
    ModifyEnvAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyEnvRequest&,
        ModifyEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ModifyGatewayVersionTrafficOutcome TcbClient::ModifyGatewayVersionTraffic(const ModifyGatewayVersionTrafficRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGatewayVersionTraffic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGatewayVersionTrafficResponse rsp = ModifyGatewayVersionTrafficResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGatewayVersionTrafficOutcome(rsp);
        else
            return ModifyGatewayVersionTrafficOutcome(o.GetError());
    }
    else
    {
        return ModifyGatewayVersionTrafficOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyGatewayVersionTrafficAsync(const ModifyGatewayVersionTrafficRequest& request, const ModifyGatewayVersionTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGatewayVersionTrafficRequest&;
    using Resp = ModifyGatewayVersionTrafficResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGatewayVersionTraffic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ModifyGatewayVersionTrafficOutcomeCallable TcbClient::ModifyGatewayVersionTrafficCallable(const ModifyGatewayVersionTrafficRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGatewayVersionTrafficOutcome>>();
    ModifyGatewayVersionTrafficAsync(
    request,
    [prom](
        const TcbClient*,
        const ModifyGatewayVersionTrafficRequest&,
        ModifyGatewayVersionTrafficOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ReinstateEnvOutcome TcbClient::ReinstateEnv(const ReinstateEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ReinstateEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReinstateEnvResponse rsp = ReinstateEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReinstateEnvOutcome(rsp);
        else
            return ReinstateEnvOutcome(o.GetError());
    }
    else
    {
        return ReinstateEnvOutcome(outcome.GetError());
    }
}

void TcbClient::ReinstateEnvAsync(const ReinstateEnvRequest& request, const ReinstateEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReinstateEnvRequest&;
    using Resp = ReinstateEnvResponse;

    DoRequestAsync<Req, Resp>(
        "ReinstateEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ReinstateEnvOutcomeCallable TcbClient::ReinstateEnvCallable(const ReinstateEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReinstateEnvOutcome>>();
    ReinstateEnvAsync(
    request,
    [prom](
        const TcbClient*,
        const ReinstateEnvRequest&,
        ReinstateEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::ReplaceActivityRecordOutcome TcbClient::ReplaceActivityRecord(const ReplaceActivityRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceActivityRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceActivityRecordResponse rsp = ReplaceActivityRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceActivityRecordOutcome(rsp);
        else
            return ReplaceActivityRecordOutcome(o.GetError());
    }
    else
    {
        return ReplaceActivityRecordOutcome(outcome.GetError());
    }
}

void TcbClient::ReplaceActivityRecordAsync(const ReplaceActivityRecordRequest& request, const ReplaceActivityRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceActivityRecordRequest&;
    using Resp = ReplaceActivityRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceActivityRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::ReplaceActivityRecordOutcomeCallable TcbClient::ReplaceActivityRecordCallable(const ReplaceActivityRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceActivityRecordOutcome>>();
    ReplaceActivityRecordAsync(
    request,
    [prom](
        const TcbClient*,
        const ReplaceActivityRecordRequest&,
        ReplaceActivityRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::RollUpdateCloudBaseRunServerVersionOutcome TcbClient::RollUpdateCloudBaseRunServerVersion(const RollUpdateCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RollUpdateCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollUpdateCloudBaseRunServerVersionResponse rsp = RollUpdateCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollUpdateCloudBaseRunServerVersionOutcome(rsp);
        else
            return RollUpdateCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return RollUpdateCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::RollUpdateCloudBaseRunServerVersionAsync(const RollUpdateCloudBaseRunServerVersionRequest& request, const RollUpdateCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollUpdateCloudBaseRunServerVersionRequest&;
    using Resp = RollUpdateCloudBaseRunServerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "RollUpdateCloudBaseRunServerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::RollUpdateCloudBaseRunServerVersionOutcomeCallable TcbClient::RollUpdateCloudBaseRunServerVersionCallable(const RollUpdateCloudBaseRunServerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollUpdateCloudBaseRunServerVersionOutcome>>();
    RollUpdateCloudBaseRunServerVersionAsync(
    request,
    [prom](
        const TcbClient*,
        const RollUpdateCloudBaseRunServerVersionRequest&,
        RollUpdateCloudBaseRunServerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::SearchClsLogOutcome TcbClient::SearchClsLog(const SearchClsLogRequest &request)
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

void TcbClient::SearchClsLogAsync(const SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcbClient::SearchClsLogOutcomeCallable TcbClient::SearchClsLogCallable(const SearchClsLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchClsLogOutcome>>();
    SearchClsLogAsync(
    request,
    [prom](
        const TcbClient*,
        const SearchClsLogRequest&,
        SearchClsLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcbClient::UnfreezeCloudBaseRunServersOutcome TcbClient::UnfreezeCloudBaseRunServers(const UnfreezeCloudBaseRunServersRequest &request)
{
    auto outcome = MakeRequest(request, "UnfreezeCloudBaseRunServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnfreezeCloudBaseRunServersResponse rsp = UnfreezeCloudBaseRunServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnfreezeCloudBaseRunServersOutcome(rsp);
        else
            return UnfreezeCloudBaseRunServersOutcome(o.GetError());
    }
    else
    {
        return UnfreezeCloudBaseRunServersOutcome(outcome.GetError());
    }
}

void TcbClient::UnfreezeCloudBaseRunServersAsync(const UnfreezeCloudBaseRunServersRequest& request, const UnfreezeCloudBaseRunServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnfreezeCloudBaseRunServersRequest&;
    using Resp = UnfreezeCloudBaseRunServersResponse;

    DoRequestAsync<Req, Resp>(
        "UnfreezeCloudBaseRunServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcbClient::UnfreezeCloudBaseRunServersOutcomeCallable TcbClient::UnfreezeCloudBaseRunServersCallable(const UnfreezeCloudBaseRunServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnfreezeCloudBaseRunServersOutcome>>();
    UnfreezeCloudBaseRunServersAsync(
    request,
    [prom](
        const TcbClient*,
        const UnfreezeCloudBaseRunServersRequest&,
        UnfreezeCloudBaseRunServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

