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

#include <tencentcloud/gs/v20191118/GsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gs::V20191118;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-18";
    const string ENDPOINT = "gs.tencentcloudapi.com";
}

GsClient::GsClient(const Credential &credential, const string &region) :
    GsClient(credential, region, ClientProfile())
{
}

GsClient::GsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GsClient::BackUpAndroidInstanceOutcome GsClient::BackUpAndroidInstance(const BackUpAndroidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "BackUpAndroidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BackUpAndroidInstanceResponse rsp = BackUpAndroidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BackUpAndroidInstanceOutcome(rsp);
        else
            return BackUpAndroidInstanceOutcome(o.GetError());
    }
    else
    {
        return BackUpAndroidInstanceOutcome(outcome.GetError());
    }
}

void GsClient::BackUpAndroidInstanceAsync(const BackUpAndroidInstanceRequest& request, const BackUpAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BackUpAndroidInstanceRequest&;
    using Resp = BackUpAndroidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "BackUpAndroidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::BackUpAndroidInstanceOutcomeCallable GsClient::BackUpAndroidInstanceCallable(const BackUpAndroidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<BackUpAndroidInstanceOutcome>>();
    BackUpAndroidInstanceAsync(
    request,
    [prom](
        const GsClient*,
        const BackUpAndroidInstanceRequest&,
        BackUpAndroidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::BackUpAndroidInstanceToStorageOutcome GsClient::BackUpAndroidInstanceToStorage(const BackUpAndroidInstanceToStorageRequest &request)
{
    auto outcome = MakeRequest(request, "BackUpAndroidInstanceToStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BackUpAndroidInstanceToStorageResponse rsp = BackUpAndroidInstanceToStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BackUpAndroidInstanceToStorageOutcome(rsp);
        else
            return BackUpAndroidInstanceToStorageOutcome(o.GetError());
    }
    else
    {
        return BackUpAndroidInstanceToStorageOutcome(outcome.GetError());
    }
}

void GsClient::BackUpAndroidInstanceToStorageAsync(const BackUpAndroidInstanceToStorageRequest& request, const BackUpAndroidInstanceToStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BackUpAndroidInstanceToStorageRequest&;
    using Resp = BackUpAndroidInstanceToStorageResponse;

    DoRequestAsync<Req, Resp>(
        "BackUpAndroidInstanceToStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::BackUpAndroidInstanceToStorageOutcomeCallable GsClient::BackUpAndroidInstanceToStorageCallable(const BackUpAndroidInstanceToStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<BackUpAndroidInstanceToStorageOutcome>>();
    BackUpAndroidInstanceToStorageAsync(
    request,
    [prom](
        const GsClient*,
        const BackUpAndroidInstanceToStorageRequest&,
        BackUpAndroidInstanceToStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CleanAndroidInstancesAppDataOutcome GsClient::CleanAndroidInstancesAppData(const CleanAndroidInstancesAppDataRequest &request)
{
    auto outcome = MakeRequest(request, "CleanAndroidInstancesAppData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CleanAndroidInstancesAppDataResponse rsp = CleanAndroidInstancesAppDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CleanAndroidInstancesAppDataOutcome(rsp);
        else
            return CleanAndroidInstancesAppDataOutcome(o.GetError());
    }
    else
    {
        return CleanAndroidInstancesAppDataOutcome(outcome.GetError());
    }
}

void GsClient::CleanAndroidInstancesAppDataAsync(const CleanAndroidInstancesAppDataRequest& request, const CleanAndroidInstancesAppDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CleanAndroidInstancesAppDataRequest&;
    using Resp = CleanAndroidInstancesAppDataResponse;

    DoRequestAsync<Req, Resp>(
        "CleanAndroidInstancesAppData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CleanAndroidInstancesAppDataOutcomeCallable GsClient::CleanAndroidInstancesAppDataCallable(const CleanAndroidInstancesAppDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<CleanAndroidInstancesAppDataOutcome>>();
    CleanAndroidInstancesAppDataAsync(
    request,
    [prom](
        const GsClient*,
        const CleanAndroidInstancesAppDataRequest&,
        CleanAndroidInstancesAppDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ConnectAndroidInstanceOutcome GsClient::ConnectAndroidInstance(const ConnectAndroidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ConnectAndroidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConnectAndroidInstanceResponse rsp = ConnectAndroidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConnectAndroidInstanceOutcome(rsp);
        else
            return ConnectAndroidInstanceOutcome(o.GetError());
    }
    else
    {
        return ConnectAndroidInstanceOutcome(outcome.GetError());
    }
}

void GsClient::ConnectAndroidInstanceAsync(const ConnectAndroidInstanceRequest& request, const ConnectAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConnectAndroidInstanceRequest&;
    using Resp = ConnectAndroidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ConnectAndroidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ConnectAndroidInstanceOutcomeCallable GsClient::ConnectAndroidInstanceCallable(const ConnectAndroidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConnectAndroidInstanceOutcome>>();
    ConnectAndroidInstanceAsync(
    request,
    [prom](
        const GsClient*,
        const ConnectAndroidInstanceRequest&,
        ConnectAndroidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CopyAndroidInstanceOutcome GsClient::CopyAndroidInstance(const CopyAndroidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CopyAndroidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyAndroidInstanceResponse rsp = CopyAndroidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyAndroidInstanceOutcome(rsp);
        else
            return CopyAndroidInstanceOutcome(o.GetError());
    }
    else
    {
        return CopyAndroidInstanceOutcome(outcome.GetError());
    }
}

void GsClient::CopyAndroidInstanceAsync(const CopyAndroidInstanceRequest& request, const CopyAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyAndroidInstanceRequest&;
    using Resp = CopyAndroidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CopyAndroidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CopyAndroidInstanceOutcomeCallable GsClient::CopyAndroidInstanceCallable(const CopyAndroidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyAndroidInstanceOutcome>>();
    CopyAndroidInstanceAsync(
    request,
    [prom](
        const GsClient*,
        const CopyAndroidInstanceRequest&,
        CopyAndroidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidAppOutcome GsClient::CreateAndroidApp(const CreateAndroidAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidAppResponse rsp = CreateAndroidAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidAppOutcome(rsp);
        else
            return CreateAndroidAppOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidAppOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidAppAsync(const CreateAndroidAppRequest& request, const CreateAndroidAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidAppRequest&;
    using Resp = CreateAndroidAppResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidAppOutcomeCallable GsClient::CreateAndroidAppCallable(const CreateAndroidAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidAppOutcome>>();
    CreateAndroidAppAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidAppRequest&,
        CreateAndroidAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidAppVersionOutcome GsClient::CreateAndroidAppVersion(const CreateAndroidAppVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidAppVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidAppVersionResponse rsp = CreateAndroidAppVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidAppVersionOutcome(rsp);
        else
            return CreateAndroidAppVersionOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidAppVersionOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidAppVersionAsync(const CreateAndroidAppVersionRequest& request, const CreateAndroidAppVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidAppVersionRequest&;
    using Resp = CreateAndroidAppVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidAppVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidAppVersionOutcomeCallable GsClient::CreateAndroidAppVersionCallable(const CreateAndroidAppVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidAppVersionOutcome>>();
    CreateAndroidAppVersionAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidAppVersionRequest&,
        CreateAndroidAppVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidInstanceADBOutcome GsClient::CreateAndroidInstanceADB(const CreateAndroidInstanceADBRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceADB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceADBResponse rsp = CreateAndroidInstanceADBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceADBOutcome(rsp);
        else
            return CreateAndroidInstanceADBOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceADBOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceADBAsync(const CreateAndroidInstanceADBRequest& request, const CreateAndroidInstanceADBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidInstanceADBRequest&;
    using Resp = CreateAndroidInstanceADBResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidInstanceADB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidInstanceADBOutcomeCallable GsClient::CreateAndroidInstanceADBCallable(const CreateAndroidInstanceADBRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidInstanceADBOutcome>>();
    CreateAndroidInstanceADBAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidInstanceADBRequest&,
        CreateAndroidInstanceADBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidInstanceImageOutcome GsClient::CreateAndroidInstanceImage(const CreateAndroidInstanceImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceImageResponse rsp = CreateAndroidInstanceImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceImageOutcome(rsp);
        else
            return CreateAndroidInstanceImageOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceImageOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceImageAsync(const CreateAndroidInstanceImageRequest& request, const CreateAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidInstanceImageRequest&;
    using Resp = CreateAndroidInstanceImageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidInstanceImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidInstanceImageOutcomeCallable GsClient::CreateAndroidInstanceImageCallable(const CreateAndroidInstanceImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidInstanceImageOutcome>>();
    CreateAndroidInstanceImageAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidInstanceImageRequest&,
        CreateAndroidInstanceImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidInstanceLabelOutcome GsClient::CreateAndroidInstanceLabel(const CreateAndroidInstanceLabelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceLabelResponse rsp = CreateAndroidInstanceLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceLabelOutcome(rsp);
        else
            return CreateAndroidInstanceLabelOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceLabelOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceLabelAsync(const CreateAndroidInstanceLabelRequest& request, const CreateAndroidInstanceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidInstanceLabelRequest&;
    using Resp = CreateAndroidInstanceLabelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidInstanceLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidInstanceLabelOutcomeCallable GsClient::CreateAndroidInstanceLabelCallable(const CreateAndroidInstanceLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidInstanceLabelOutcome>>();
    CreateAndroidInstanceLabelAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidInstanceLabelRequest&,
        CreateAndroidInstanceLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidInstanceSSHOutcome GsClient::CreateAndroidInstanceSSH(const CreateAndroidInstanceSSHRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceSSH");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceSSHResponse rsp = CreateAndroidInstanceSSHResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceSSHOutcome(rsp);
        else
            return CreateAndroidInstanceSSHOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceSSHOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceSSHAsync(const CreateAndroidInstanceSSHRequest& request, const CreateAndroidInstanceSSHAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidInstanceSSHRequest&;
    using Resp = CreateAndroidInstanceSSHResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidInstanceSSH", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidInstanceSSHOutcomeCallable GsClient::CreateAndroidInstanceSSHCallable(const CreateAndroidInstanceSSHRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidInstanceSSHOutcome>>();
    CreateAndroidInstanceSSHAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidInstanceSSHRequest&,
        CreateAndroidInstanceSSHOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidInstanceWebShellOutcome GsClient::CreateAndroidInstanceWebShell(const CreateAndroidInstanceWebShellRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceWebShell");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceWebShellResponse rsp = CreateAndroidInstanceWebShellResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceWebShellOutcome(rsp);
        else
            return CreateAndroidInstanceWebShellOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceWebShellOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceWebShellAsync(const CreateAndroidInstanceWebShellRequest& request, const CreateAndroidInstanceWebShellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidInstanceWebShellRequest&;
    using Resp = CreateAndroidInstanceWebShellResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidInstanceWebShell", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidInstanceWebShellOutcomeCallable GsClient::CreateAndroidInstanceWebShellCallable(const CreateAndroidInstanceWebShellRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidInstanceWebShellOutcome>>();
    CreateAndroidInstanceWebShellAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidInstanceWebShellRequest&,
        CreateAndroidInstanceWebShellOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidInstancesOutcome GsClient::CreateAndroidInstances(const CreateAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstancesResponse rsp = CreateAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstancesOutcome(rsp);
        else
            return CreateAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstancesAsync(const CreateAndroidInstancesRequest& request, const CreateAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidInstancesRequest&;
    using Resp = CreateAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidInstancesOutcomeCallable GsClient::CreateAndroidInstancesCallable(const CreateAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidInstancesOutcome>>();
    CreateAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidInstancesRequest&,
        CreateAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidInstancesAccessTokenOutcome GsClient::CreateAndroidInstancesAccessToken(const CreateAndroidInstancesAccessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstancesAccessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstancesAccessTokenResponse rsp = CreateAndroidInstancesAccessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstancesAccessTokenOutcome(rsp);
        else
            return CreateAndroidInstancesAccessTokenOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstancesAccessTokenOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstancesAccessTokenAsync(const CreateAndroidInstancesAccessTokenRequest& request, const CreateAndroidInstancesAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidInstancesAccessTokenRequest&;
    using Resp = CreateAndroidInstancesAccessTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidInstancesAccessToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidInstancesAccessTokenOutcomeCallable GsClient::CreateAndroidInstancesAccessTokenCallable(const CreateAndroidInstancesAccessTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidInstancesAccessTokenOutcome>>();
    CreateAndroidInstancesAccessTokenAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidInstancesAccessTokenRequest&,
        CreateAndroidInstancesAccessTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateAndroidInstancesScreenshotOutcome GsClient::CreateAndroidInstancesScreenshot(const CreateAndroidInstancesScreenshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstancesScreenshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstancesScreenshotResponse rsp = CreateAndroidInstancesScreenshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstancesScreenshotOutcome(rsp);
        else
            return CreateAndroidInstancesScreenshotOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstancesScreenshotOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstancesScreenshotAsync(const CreateAndroidInstancesScreenshotRequest& request, const CreateAndroidInstancesScreenshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAndroidInstancesScreenshotRequest&;
    using Resp = CreateAndroidInstancesScreenshotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAndroidInstancesScreenshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateAndroidInstancesScreenshotOutcomeCallable GsClient::CreateAndroidInstancesScreenshotCallable(const CreateAndroidInstancesScreenshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAndroidInstancesScreenshotOutcome>>();
    CreateAndroidInstancesScreenshotAsync(
    request,
    [prom](
        const GsClient*,
        const CreateAndroidInstancesScreenshotRequest&,
        CreateAndroidInstancesScreenshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateCosCredentialOutcome GsClient::CreateCosCredential(const CreateCosCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosCredentialResponse rsp = CreateCosCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosCredentialOutcome(rsp);
        else
            return CreateCosCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateCosCredentialOutcome(outcome.GetError());
    }
}

void GsClient::CreateCosCredentialAsync(const CreateCosCredentialRequest& request, const CreateCosCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCosCredentialRequest&;
    using Resp = CreateCosCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCosCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateCosCredentialOutcomeCallable GsClient::CreateCosCredentialCallable(const CreateCosCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCosCredentialOutcome>>();
    CreateCosCredentialAsync(
    request,
    [prom](
        const GsClient*,
        const CreateCosCredentialRequest&,
        CreateCosCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::CreateSessionOutcome GsClient::CreateSession(const CreateSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSessionResponse rsp = CreateSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSessionOutcome(rsp);
        else
            return CreateSessionOutcome(o.GetError());
    }
    else
    {
        return CreateSessionOutcome(outcome.GetError());
    }
}

void GsClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSessionRequest&;
    using Resp = CreateSessionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::CreateSessionOutcomeCallable GsClient::CreateSessionCallable(const CreateSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSessionOutcome>>();
    CreateSessionAsync(
    request,
    [prom](
        const GsClient*,
        const CreateSessionRequest&,
        CreateSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DeleteAndroidAppOutcome GsClient::DeleteAndroidApp(const DeleteAndroidAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidAppResponse rsp = DeleteAndroidAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidAppOutcome(rsp);
        else
            return DeleteAndroidAppOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidAppOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidAppAsync(const DeleteAndroidAppRequest& request, const DeleteAndroidAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAndroidAppRequest&;
    using Resp = DeleteAndroidAppResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAndroidApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DeleteAndroidAppOutcomeCallable GsClient::DeleteAndroidAppCallable(const DeleteAndroidAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAndroidAppOutcome>>();
    DeleteAndroidAppAsync(
    request,
    [prom](
        const GsClient*,
        const DeleteAndroidAppRequest&,
        DeleteAndroidAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DeleteAndroidAppVersionOutcome GsClient::DeleteAndroidAppVersion(const DeleteAndroidAppVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidAppVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidAppVersionResponse rsp = DeleteAndroidAppVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidAppVersionOutcome(rsp);
        else
            return DeleteAndroidAppVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidAppVersionOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidAppVersionAsync(const DeleteAndroidAppVersionRequest& request, const DeleteAndroidAppVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAndroidAppVersionRequest&;
    using Resp = DeleteAndroidAppVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAndroidAppVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DeleteAndroidAppVersionOutcomeCallable GsClient::DeleteAndroidAppVersionCallable(const DeleteAndroidAppVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAndroidAppVersionOutcome>>();
    DeleteAndroidAppVersionAsync(
    request,
    [prom](
        const GsClient*,
        const DeleteAndroidAppVersionRequest&,
        DeleteAndroidAppVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DeleteAndroidInstanceBackupFilesOutcome GsClient::DeleteAndroidInstanceBackupFiles(const DeleteAndroidInstanceBackupFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidInstanceBackupFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidInstanceBackupFilesResponse rsp = DeleteAndroidInstanceBackupFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidInstanceBackupFilesOutcome(rsp);
        else
            return DeleteAndroidInstanceBackupFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidInstanceBackupFilesOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidInstanceBackupFilesAsync(const DeleteAndroidInstanceBackupFilesRequest& request, const DeleteAndroidInstanceBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAndroidInstanceBackupFilesRequest&;
    using Resp = DeleteAndroidInstanceBackupFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAndroidInstanceBackupFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DeleteAndroidInstanceBackupFilesOutcomeCallable GsClient::DeleteAndroidInstanceBackupFilesCallable(const DeleteAndroidInstanceBackupFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAndroidInstanceBackupFilesOutcome>>();
    DeleteAndroidInstanceBackupFilesAsync(
    request,
    [prom](
        const GsClient*,
        const DeleteAndroidInstanceBackupFilesRequest&,
        DeleteAndroidInstanceBackupFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DeleteAndroidInstanceBackupsOutcome GsClient::DeleteAndroidInstanceBackups(const DeleteAndroidInstanceBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidInstanceBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidInstanceBackupsResponse rsp = DeleteAndroidInstanceBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidInstanceBackupsOutcome(rsp);
        else
            return DeleteAndroidInstanceBackupsOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidInstanceBackupsOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidInstanceBackupsAsync(const DeleteAndroidInstanceBackupsRequest& request, const DeleteAndroidInstanceBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAndroidInstanceBackupsRequest&;
    using Resp = DeleteAndroidInstanceBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAndroidInstanceBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DeleteAndroidInstanceBackupsOutcomeCallable GsClient::DeleteAndroidInstanceBackupsCallable(const DeleteAndroidInstanceBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAndroidInstanceBackupsOutcome>>();
    DeleteAndroidInstanceBackupsAsync(
    request,
    [prom](
        const GsClient*,
        const DeleteAndroidInstanceBackupsRequest&,
        DeleteAndroidInstanceBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DeleteAndroidInstanceImagesOutcome GsClient::DeleteAndroidInstanceImages(const DeleteAndroidInstanceImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidInstanceImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidInstanceImagesResponse rsp = DeleteAndroidInstanceImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidInstanceImagesOutcome(rsp);
        else
            return DeleteAndroidInstanceImagesOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidInstanceImagesOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidInstanceImagesAsync(const DeleteAndroidInstanceImagesRequest& request, const DeleteAndroidInstanceImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAndroidInstanceImagesRequest&;
    using Resp = DeleteAndroidInstanceImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAndroidInstanceImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DeleteAndroidInstanceImagesOutcomeCallable GsClient::DeleteAndroidInstanceImagesCallable(const DeleteAndroidInstanceImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAndroidInstanceImagesOutcome>>();
    DeleteAndroidInstanceImagesAsync(
    request,
    [prom](
        const GsClient*,
        const DeleteAndroidInstanceImagesRequest&,
        DeleteAndroidInstanceImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DeleteAndroidInstanceLabelOutcome GsClient::DeleteAndroidInstanceLabel(const DeleteAndroidInstanceLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidInstanceLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidInstanceLabelResponse rsp = DeleteAndroidInstanceLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidInstanceLabelOutcome(rsp);
        else
            return DeleteAndroidInstanceLabelOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidInstanceLabelOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidInstanceLabelAsync(const DeleteAndroidInstanceLabelRequest& request, const DeleteAndroidInstanceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAndroidInstanceLabelRequest&;
    using Resp = DeleteAndroidInstanceLabelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAndroidInstanceLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DeleteAndroidInstanceLabelOutcomeCallable GsClient::DeleteAndroidInstanceLabelCallable(const DeleteAndroidInstanceLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAndroidInstanceLabelOutcome>>();
    DeleteAndroidInstanceLabelAsync(
    request,
    [prom](
        const GsClient*,
        const DeleteAndroidInstanceLabelRequest&,
        DeleteAndroidInstanceLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeAndroidAppsOutcome GsClient::DescribeAndroidApps(const DescribeAndroidAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidAppsResponse rsp = DescribeAndroidAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidAppsOutcome(rsp);
        else
            return DescribeAndroidAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidAppsOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidAppsAsync(const DescribeAndroidAppsRequest& request, const DescribeAndroidAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAndroidAppsRequest&;
    using Resp = DescribeAndroidAppsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAndroidApps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeAndroidAppsOutcomeCallable GsClient::DescribeAndroidAppsCallable(const DescribeAndroidAppsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAndroidAppsOutcome>>();
    DescribeAndroidAppsAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeAndroidAppsRequest&,
        DescribeAndroidAppsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeAndroidInstanceAppsOutcome GsClient::DescribeAndroidInstanceApps(const DescribeAndroidInstanceAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstanceApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstanceAppsResponse rsp = DescribeAndroidInstanceAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstanceAppsOutcome(rsp);
        else
            return DescribeAndroidInstanceAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstanceAppsOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstanceAppsAsync(const DescribeAndroidInstanceAppsRequest& request, const DescribeAndroidInstanceAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAndroidInstanceAppsRequest&;
    using Resp = DescribeAndroidInstanceAppsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAndroidInstanceApps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeAndroidInstanceAppsOutcomeCallable GsClient::DescribeAndroidInstanceAppsCallable(const DescribeAndroidInstanceAppsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAndroidInstanceAppsOutcome>>();
    DescribeAndroidInstanceAppsAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeAndroidInstanceAppsRequest&,
        DescribeAndroidInstanceAppsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeAndroidInstanceBackupsOutcome GsClient::DescribeAndroidInstanceBackups(const DescribeAndroidInstanceBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstanceBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstanceBackupsResponse rsp = DescribeAndroidInstanceBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstanceBackupsOutcome(rsp);
        else
            return DescribeAndroidInstanceBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstanceBackupsOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstanceBackupsAsync(const DescribeAndroidInstanceBackupsRequest& request, const DescribeAndroidInstanceBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAndroidInstanceBackupsRequest&;
    using Resp = DescribeAndroidInstanceBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAndroidInstanceBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeAndroidInstanceBackupsOutcomeCallable GsClient::DescribeAndroidInstanceBackupsCallable(const DescribeAndroidInstanceBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAndroidInstanceBackupsOutcome>>();
    DescribeAndroidInstanceBackupsAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeAndroidInstanceBackupsRequest&,
        DescribeAndroidInstanceBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeAndroidInstanceImagesOutcome GsClient::DescribeAndroidInstanceImages(const DescribeAndroidInstanceImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstanceImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstanceImagesResponse rsp = DescribeAndroidInstanceImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstanceImagesOutcome(rsp);
        else
            return DescribeAndroidInstanceImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstanceImagesOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstanceImagesAsync(const DescribeAndroidInstanceImagesRequest& request, const DescribeAndroidInstanceImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAndroidInstanceImagesRequest&;
    using Resp = DescribeAndroidInstanceImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAndroidInstanceImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeAndroidInstanceImagesOutcomeCallable GsClient::DescribeAndroidInstanceImagesCallable(const DescribeAndroidInstanceImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAndroidInstanceImagesOutcome>>();
    DescribeAndroidInstanceImagesAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeAndroidInstanceImagesRequest&,
        DescribeAndroidInstanceImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeAndroidInstanceLabelsOutcome GsClient::DescribeAndroidInstanceLabels(const DescribeAndroidInstanceLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstanceLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstanceLabelsResponse rsp = DescribeAndroidInstanceLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstanceLabelsOutcome(rsp);
        else
            return DescribeAndroidInstanceLabelsOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstanceLabelsOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstanceLabelsAsync(const DescribeAndroidInstanceLabelsRequest& request, const DescribeAndroidInstanceLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAndroidInstanceLabelsRequest&;
    using Resp = DescribeAndroidInstanceLabelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAndroidInstanceLabels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeAndroidInstanceLabelsOutcomeCallable GsClient::DescribeAndroidInstanceLabelsCallable(const DescribeAndroidInstanceLabelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAndroidInstanceLabelsOutcome>>();
    DescribeAndroidInstanceLabelsAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeAndroidInstanceLabelsRequest&,
        DescribeAndroidInstanceLabelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeAndroidInstanceTasksStatusOutcome GsClient::DescribeAndroidInstanceTasksStatus(const DescribeAndroidInstanceTasksStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstanceTasksStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstanceTasksStatusResponse rsp = DescribeAndroidInstanceTasksStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstanceTasksStatusOutcome(rsp);
        else
            return DescribeAndroidInstanceTasksStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstanceTasksStatusOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstanceTasksStatusAsync(const DescribeAndroidInstanceTasksStatusRequest& request, const DescribeAndroidInstanceTasksStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAndroidInstanceTasksStatusRequest&;
    using Resp = DescribeAndroidInstanceTasksStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAndroidInstanceTasksStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeAndroidInstanceTasksStatusOutcomeCallable GsClient::DescribeAndroidInstanceTasksStatusCallable(const DescribeAndroidInstanceTasksStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAndroidInstanceTasksStatusOutcome>>();
    DescribeAndroidInstanceTasksStatusAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeAndroidInstanceTasksStatusRequest&,
        DescribeAndroidInstanceTasksStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeAndroidInstancesOutcome GsClient::DescribeAndroidInstances(const DescribeAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstancesResponse rsp = DescribeAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstancesOutcome(rsp);
        else
            return DescribeAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstancesAsync(const DescribeAndroidInstancesRequest& request, const DescribeAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAndroidInstancesRequest&;
    using Resp = DescribeAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeAndroidInstancesOutcomeCallable GsClient::DescribeAndroidInstancesCallable(const DescribeAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAndroidInstancesOutcome>>();
    DescribeAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeAndroidInstancesRequest&,
        DescribeAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeAndroidInstancesAppBlacklistOutcome GsClient::DescribeAndroidInstancesAppBlacklist(const DescribeAndroidInstancesAppBlacklistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstancesAppBlacklist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstancesAppBlacklistResponse rsp = DescribeAndroidInstancesAppBlacklistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstancesAppBlacklistOutcome(rsp);
        else
            return DescribeAndroidInstancesAppBlacklistOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstancesAppBlacklistOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstancesAppBlacklistAsync(const DescribeAndroidInstancesAppBlacklistRequest& request, const DescribeAndroidInstancesAppBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAndroidInstancesAppBlacklistRequest&;
    using Resp = DescribeAndroidInstancesAppBlacklistResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAndroidInstancesAppBlacklist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeAndroidInstancesAppBlacklistOutcomeCallable GsClient::DescribeAndroidInstancesAppBlacklistCallable(const DescribeAndroidInstancesAppBlacklistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAndroidInstancesAppBlacklistOutcome>>();
    DescribeAndroidInstancesAppBlacklistAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeAndroidInstancesAppBlacklistRequest&,
        DescribeAndroidInstancesAppBlacklistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeAndroidInstancesByAppsOutcome GsClient::DescribeAndroidInstancesByApps(const DescribeAndroidInstancesByAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstancesByApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstancesByAppsResponse rsp = DescribeAndroidInstancesByAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstancesByAppsOutcome(rsp);
        else
            return DescribeAndroidInstancesByAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstancesByAppsOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstancesByAppsAsync(const DescribeAndroidInstancesByAppsRequest& request, const DescribeAndroidInstancesByAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAndroidInstancesByAppsRequest&;
    using Resp = DescribeAndroidInstancesByAppsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAndroidInstancesByApps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeAndroidInstancesByAppsOutcomeCallable GsClient::DescribeAndroidInstancesByAppsCallable(const DescribeAndroidInstancesByAppsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAndroidInstancesByAppsOutcome>>();
    DescribeAndroidInstancesByAppsAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeAndroidInstancesByAppsRequest&,
        DescribeAndroidInstancesByAppsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DescribeInstancesCountOutcome GsClient::DescribeInstancesCount(const DescribeInstancesCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesCountResponse rsp = DescribeInstancesCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesCountOutcome(rsp);
        else
            return DescribeInstancesCountOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesCountOutcome(outcome.GetError());
    }
}

void GsClient::DescribeInstancesCountAsync(const DescribeInstancesCountRequest& request, const DescribeInstancesCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesCountRequest&;
    using Resp = DescribeInstancesCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DescribeInstancesCountOutcomeCallable GsClient::DescribeInstancesCountCallable(const DescribeInstancesCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesCountOutcome>>();
    DescribeInstancesCountAsync(
    request,
    [prom](
        const GsClient*,
        const DescribeInstancesCountRequest&,
        DescribeInstancesCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DestroyAndroidInstancesOutcome GsClient::DestroyAndroidInstances(const DestroyAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyAndroidInstancesResponse rsp = DestroyAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyAndroidInstancesOutcome(rsp);
        else
            return DestroyAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return DestroyAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::DestroyAndroidInstancesAsync(const DestroyAndroidInstancesRequest& request, const DestroyAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyAndroidInstancesRequest&;
    using Resp = DestroyAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DestroyAndroidInstancesOutcomeCallable GsClient::DestroyAndroidInstancesCallable(const DestroyAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyAndroidInstancesOutcome>>();
    DestroyAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const DestroyAndroidInstancesRequest&,
        DestroyAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DisableAndroidInstancesAppOutcome GsClient::DisableAndroidInstancesApp(const DisableAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "DisableAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableAndroidInstancesAppResponse rsp = DisableAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableAndroidInstancesAppOutcome(rsp);
        else
            return DisableAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return DisableAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::DisableAndroidInstancesAppAsync(const DisableAndroidInstancesAppRequest& request, const DisableAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableAndroidInstancesAppRequest&;
    using Resp = DisableAndroidInstancesAppResponse;

    DoRequestAsync<Req, Resp>(
        "DisableAndroidInstancesApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DisableAndroidInstancesAppOutcomeCallable GsClient::DisableAndroidInstancesAppCallable(const DisableAndroidInstancesAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableAndroidInstancesAppOutcome>>();
    DisableAndroidInstancesAppAsync(
    request,
    [prom](
        const GsClient*,
        const DisableAndroidInstancesAppRequest&,
        DisableAndroidInstancesAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DisconnectAndroidInstanceOutcome GsClient::DisconnectAndroidInstance(const DisconnectAndroidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DisconnectAndroidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisconnectAndroidInstanceResponse rsp = DisconnectAndroidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisconnectAndroidInstanceOutcome(rsp);
        else
            return DisconnectAndroidInstanceOutcome(o.GetError());
    }
    else
    {
        return DisconnectAndroidInstanceOutcome(outcome.GetError());
    }
}

void GsClient::DisconnectAndroidInstanceAsync(const DisconnectAndroidInstanceRequest& request, const DisconnectAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisconnectAndroidInstanceRequest&;
    using Resp = DisconnectAndroidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DisconnectAndroidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DisconnectAndroidInstanceOutcomeCallable GsClient::DisconnectAndroidInstanceCallable(const DisconnectAndroidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisconnectAndroidInstanceOutcome>>();
    DisconnectAndroidInstanceAsync(
    request,
    [prom](
        const GsClient*,
        const DisconnectAndroidInstanceRequest&,
        DisconnectAndroidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DistributeAndroidInstanceImageToHostsOutcome GsClient::DistributeAndroidInstanceImageToHosts(const DistributeAndroidInstanceImageToHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeAndroidInstanceImageToHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeAndroidInstanceImageToHostsResponse rsp = DistributeAndroidInstanceImageToHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeAndroidInstanceImageToHostsOutcome(rsp);
        else
            return DistributeAndroidInstanceImageToHostsOutcome(o.GetError());
    }
    else
    {
        return DistributeAndroidInstanceImageToHostsOutcome(outcome.GetError());
    }
}

void GsClient::DistributeAndroidInstanceImageToHostsAsync(const DistributeAndroidInstanceImageToHostsRequest& request, const DistributeAndroidInstanceImageToHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeAndroidInstanceImageToHostsRequest&;
    using Resp = DistributeAndroidInstanceImageToHostsResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeAndroidInstanceImageToHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DistributeAndroidInstanceImageToHostsOutcomeCallable GsClient::DistributeAndroidInstanceImageToHostsCallable(const DistributeAndroidInstanceImageToHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeAndroidInstanceImageToHostsOutcome>>();
    DistributeAndroidInstanceImageToHostsAsync(
    request,
    [prom](
        const GsClient*,
        const DistributeAndroidInstanceImageToHostsRequest&,
        DistributeAndroidInstanceImageToHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DistributeFileToAndroidInstancesOutcome GsClient::DistributeFileToAndroidInstances(const DistributeFileToAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeFileToAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeFileToAndroidInstancesResponse rsp = DistributeFileToAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeFileToAndroidInstancesOutcome(rsp);
        else
            return DistributeFileToAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return DistributeFileToAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::DistributeFileToAndroidInstancesAsync(const DistributeFileToAndroidInstancesRequest& request, const DistributeFileToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeFileToAndroidInstancesRequest&;
    using Resp = DistributeFileToAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeFileToAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DistributeFileToAndroidInstancesOutcomeCallable GsClient::DistributeFileToAndroidInstancesCallable(const DistributeFileToAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeFileToAndroidInstancesOutcome>>();
    DistributeFileToAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const DistributeFileToAndroidInstancesRequest&,
        DistributeFileToAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::DistributePhotoToAndroidInstancesOutcome GsClient::DistributePhotoToAndroidInstances(const DistributePhotoToAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DistributePhotoToAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributePhotoToAndroidInstancesResponse rsp = DistributePhotoToAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributePhotoToAndroidInstancesOutcome(rsp);
        else
            return DistributePhotoToAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return DistributePhotoToAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::DistributePhotoToAndroidInstancesAsync(const DistributePhotoToAndroidInstancesRequest& request, const DistributePhotoToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributePhotoToAndroidInstancesRequest&;
    using Resp = DistributePhotoToAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DistributePhotoToAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::DistributePhotoToAndroidInstancesOutcomeCallable GsClient::DistributePhotoToAndroidInstancesCallable(const DistributePhotoToAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributePhotoToAndroidInstancesOutcome>>();
    DistributePhotoToAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const DistributePhotoToAndroidInstancesRequest&,
        DistributePhotoToAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::EnableAndroidInstancesAppOutcome GsClient::EnableAndroidInstancesApp(const EnableAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "EnableAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableAndroidInstancesAppResponse rsp = EnableAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableAndroidInstancesAppOutcome(rsp);
        else
            return EnableAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return EnableAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::EnableAndroidInstancesAppAsync(const EnableAndroidInstancesAppRequest& request, const EnableAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableAndroidInstancesAppRequest&;
    using Resp = EnableAndroidInstancesAppResponse;

    DoRequestAsync<Req, Resp>(
        "EnableAndroidInstancesApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::EnableAndroidInstancesAppOutcomeCallable GsClient::EnableAndroidInstancesAppCallable(const EnableAndroidInstancesAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableAndroidInstancesAppOutcome>>();
    EnableAndroidInstancesAppAsync(
    request,
    [prom](
        const GsClient*,
        const EnableAndroidInstancesAppRequest&,
        EnableAndroidInstancesAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ExecuteCommandOnAndroidInstancesOutcome GsClient::ExecuteCommandOnAndroidInstances(const ExecuteCommandOnAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteCommandOnAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteCommandOnAndroidInstancesResponse rsp = ExecuteCommandOnAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteCommandOnAndroidInstancesOutcome(rsp);
        else
            return ExecuteCommandOnAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return ExecuteCommandOnAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::ExecuteCommandOnAndroidInstancesAsync(const ExecuteCommandOnAndroidInstancesRequest& request, const ExecuteCommandOnAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExecuteCommandOnAndroidInstancesRequest&;
    using Resp = ExecuteCommandOnAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ExecuteCommandOnAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ExecuteCommandOnAndroidInstancesOutcomeCallable GsClient::ExecuteCommandOnAndroidInstancesCallable(const ExecuteCommandOnAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExecuteCommandOnAndroidInstancesOutcome>>();
    ExecuteCommandOnAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const ExecuteCommandOnAndroidInstancesRequest&,
        ExecuteCommandOnAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::FetchAndroidInstancesLogsOutcome GsClient::FetchAndroidInstancesLogs(const FetchAndroidInstancesLogsRequest &request)
{
    auto outcome = MakeRequest(request, "FetchAndroidInstancesLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchAndroidInstancesLogsResponse rsp = FetchAndroidInstancesLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchAndroidInstancesLogsOutcome(rsp);
        else
            return FetchAndroidInstancesLogsOutcome(o.GetError());
    }
    else
    {
        return FetchAndroidInstancesLogsOutcome(outcome.GetError());
    }
}

void GsClient::FetchAndroidInstancesLogsAsync(const FetchAndroidInstancesLogsRequest& request, const FetchAndroidInstancesLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FetchAndroidInstancesLogsRequest&;
    using Resp = FetchAndroidInstancesLogsResponse;

    DoRequestAsync<Req, Resp>(
        "FetchAndroidInstancesLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::FetchAndroidInstancesLogsOutcomeCallable GsClient::FetchAndroidInstancesLogsCallable(const FetchAndroidInstancesLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<FetchAndroidInstancesLogsOutcome>>();
    FetchAndroidInstancesLogsAsync(
    request,
    [prom](
        const GsClient*,
        const FetchAndroidInstancesLogsRequest&,
        FetchAndroidInstancesLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ImportAndroidInstanceImageOutcome GsClient::ImportAndroidInstanceImage(const ImportAndroidInstanceImageRequest &request)
{
    auto outcome = MakeRequest(request, "ImportAndroidInstanceImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportAndroidInstanceImageResponse rsp = ImportAndroidInstanceImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportAndroidInstanceImageOutcome(rsp);
        else
            return ImportAndroidInstanceImageOutcome(o.GetError());
    }
    else
    {
        return ImportAndroidInstanceImageOutcome(outcome.GetError());
    }
}

void GsClient::ImportAndroidInstanceImageAsync(const ImportAndroidInstanceImageRequest& request, const ImportAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportAndroidInstanceImageRequest&;
    using Resp = ImportAndroidInstanceImageResponse;

    DoRequestAsync<Req, Resp>(
        "ImportAndroidInstanceImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ImportAndroidInstanceImageOutcomeCallable GsClient::ImportAndroidInstanceImageCallable(const ImportAndroidInstanceImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportAndroidInstanceImageOutcome>>();
    ImportAndroidInstanceImageAsync(
    request,
    [prom](
        const GsClient*,
        const ImportAndroidInstanceImageRequest&,
        ImportAndroidInstanceImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::InstallAndroidInstancesAppOutcome GsClient::InstallAndroidInstancesApp(const InstallAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "InstallAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallAndroidInstancesAppResponse rsp = InstallAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallAndroidInstancesAppOutcome(rsp);
        else
            return InstallAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return InstallAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::InstallAndroidInstancesAppAsync(const InstallAndroidInstancesAppRequest& request, const InstallAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InstallAndroidInstancesAppRequest&;
    using Resp = InstallAndroidInstancesAppResponse;

    DoRequestAsync<Req, Resp>(
        "InstallAndroidInstancesApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::InstallAndroidInstancesAppOutcomeCallable GsClient::InstallAndroidInstancesAppCallable(const InstallAndroidInstancesAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<InstallAndroidInstancesAppOutcome>>();
    InstallAndroidInstancesAppAsync(
    request,
    [prom](
        const GsClient*,
        const InstallAndroidInstancesAppRequest&,
        InstallAndroidInstancesAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::InstallAndroidInstancesAppWithURLOutcome GsClient::InstallAndroidInstancesAppWithURL(const InstallAndroidInstancesAppWithURLRequest &request)
{
    auto outcome = MakeRequest(request, "InstallAndroidInstancesAppWithURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallAndroidInstancesAppWithURLResponse rsp = InstallAndroidInstancesAppWithURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallAndroidInstancesAppWithURLOutcome(rsp);
        else
            return InstallAndroidInstancesAppWithURLOutcome(o.GetError());
    }
    else
    {
        return InstallAndroidInstancesAppWithURLOutcome(outcome.GetError());
    }
}

void GsClient::InstallAndroidInstancesAppWithURLAsync(const InstallAndroidInstancesAppWithURLRequest& request, const InstallAndroidInstancesAppWithURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InstallAndroidInstancesAppWithURLRequest&;
    using Resp = InstallAndroidInstancesAppWithURLResponse;

    DoRequestAsync<Req, Resp>(
        "InstallAndroidInstancesAppWithURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::InstallAndroidInstancesAppWithURLOutcomeCallable GsClient::InstallAndroidInstancesAppWithURLCallable(const InstallAndroidInstancesAppWithURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<InstallAndroidInstancesAppWithURLOutcome>>();
    InstallAndroidInstancesAppWithURLAsync(
    request,
    [prom](
        const GsClient*,
        const InstallAndroidInstancesAppWithURLRequest&,
        InstallAndroidInstancesAppWithURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidAppOutcome GsClient::ModifyAndroidApp(const ModifyAndroidAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidAppResponse rsp = ModifyAndroidAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidAppOutcome(rsp);
        else
            return ModifyAndroidAppOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidAppOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidAppAsync(const ModifyAndroidAppRequest& request, const ModifyAndroidAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidAppRequest&;
    using Resp = ModifyAndroidAppResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidAppOutcomeCallable GsClient::ModifyAndroidAppCallable(const ModifyAndroidAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidAppOutcome>>();
    ModifyAndroidAppAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidAppRequest&,
        ModifyAndroidAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidAppVersionOutcome GsClient::ModifyAndroidAppVersion(const ModifyAndroidAppVersionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidAppVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidAppVersionResponse rsp = ModifyAndroidAppVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidAppVersionOutcome(rsp);
        else
            return ModifyAndroidAppVersionOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidAppVersionOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidAppVersionAsync(const ModifyAndroidAppVersionRequest& request, const ModifyAndroidAppVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidAppVersionRequest&;
    using Resp = ModifyAndroidAppVersionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidAppVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidAppVersionOutcomeCallable GsClient::ModifyAndroidAppVersionCallable(const ModifyAndroidAppVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidAppVersionOutcome>>();
    ModifyAndroidAppVersionAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidAppVersionRequest&,
        ModifyAndroidAppVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidInstanceInformationOutcome GsClient::ModifyAndroidInstanceInformation(const ModifyAndroidInstanceInformationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstanceInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstanceInformationResponse rsp = ModifyAndroidInstanceInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstanceInformationOutcome(rsp);
        else
            return ModifyAndroidInstanceInformationOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstanceInformationOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstanceInformationAsync(const ModifyAndroidInstanceInformationRequest& request, const ModifyAndroidInstanceInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidInstanceInformationRequest&;
    using Resp = ModifyAndroidInstanceInformationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidInstanceInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidInstanceInformationOutcomeCallable GsClient::ModifyAndroidInstanceInformationCallable(const ModifyAndroidInstanceInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidInstanceInformationOutcome>>();
    ModifyAndroidInstanceInformationAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidInstanceInformationRequest&,
        ModifyAndroidInstanceInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidInstanceResolutionOutcome GsClient::ModifyAndroidInstanceResolution(const ModifyAndroidInstanceResolutionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstanceResolution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstanceResolutionResponse rsp = ModifyAndroidInstanceResolutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstanceResolutionOutcome(rsp);
        else
            return ModifyAndroidInstanceResolutionOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstanceResolutionOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstanceResolutionAsync(const ModifyAndroidInstanceResolutionRequest& request, const ModifyAndroidInstanceResolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidInstanceResolutionRequest&;
    using Resp = ModifyAndroidInstanceResolutionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidInstanceResolution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidInstanceResolutionOutcomeCallable GsClient::ModifyAndroidInstanceResolutionCallable(const ModifyAndroidInstanceResolutionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidInstanceResolutionOutcome>>();
    ModifyAndroidInstanceResolutionAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidInstanceResolutionRequest&,
        ModifyAndroidInstanceResolutionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidInstancesAppBlacklistOutcome GsClient::ModifyAndroidInstancesAppBlacklist(const ModifyAndroidInstancesAppBlacklistRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesAppBlacklist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesAppBlacklistResponse rsp = ModifyAndroidInstancesAppBlacklistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesAppBlacklistOutcome(rsp);
        else
            return ModifyAndroidInstancesAppBlacklistOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesAppBlacklistOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesAppBlacklistAsync(const ModifyAndroidInstancesAppBlacklistRequest& request, const ModifyAndroidInstancesAppBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidInstancesAppBlacklistRequest&;
    using Resp = ModifyAndroidInstancesAppBlacklistResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidInstancesAppBlacklist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidInstancesAppBlacklistOutcomeCallable GsClient::ModifyAndroidInstancesAppBlacklistCallable(const ModifyAndroidInstancesAppBlacklistRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidInstancesAppBlacklistOutcome>>();
    ModifyAndroidInstancesAppBlacklistAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidInstancesAppBlacklistRequest&,
        ModifyAndroidInstancesAppBlacklistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidInstancesInformationOutcome GsClient::ModifyAndroidInstancesInformation(const ModifyAndroidInstancesInformationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesInformationResponse rsp = ModifyAndroidInstancesInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesInformationOutcome(rsp);
        else
            return ModifyAndroidInstancesInformationOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesInformationOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesInformationAsync(const ModifyAndroidInstancesInformationRequest& request, const ModifyAndroidInstancesInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidInstancesInformationRequest&;
    using Resp = ModifyAndroidInstancesInformationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidInstancesInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidInstancesInformationOutcomeCallable GsClient::ModifyAndroidInstancesInformationCallable(const ModifyAndroidInstancesInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidInstancesInformationOutcome>>();
    ModifyAndroidInstancesInformationAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidInstancesInformationRequest&,
        ModifyAndroidInstancesInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidInstancesLabelsOutcome GsClient::ModifyAndroidInstancesLabels(const ModifyAndroidInstancesLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesLabelsResponse rsp = ModifyAndroidInstancesLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesLabelsOutcome(rsp);
        else
            return ModifyAndroidInstancesLabelsOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesLabelsOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesLabelsAsync(const ModifyAndroidInstancesLabelsRequest& request, const ModifyAndroidInstancesLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidInstancesLabelsRequest&;
    using Resp = ModifyAndroidInstancesLabelsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidInstancesLabels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidInstancesLabelsOutcomeCallable GsClient::ModifyAndroidInstancesLabelsCallable(const ModifyAndroidInstancesLabelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidInstancesLabelsOutcome>>();
    ModifyAndroidInstancesLabelsAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidInstancesLabelsRequest&,
        ModifyAndroidInstancesLabelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidInstancesPropertiesOutcome GsClient::ModifyAndroidInstancesProperties(const ModifyAndroidInstancesPropertiesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesProperties");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesPropertiesResponse rsp = ModifyAndroidInstancesPropertiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesPropertiesOutcome(rsp);
        else
            return ModifyAndroidInstancesPropertiesOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesPropertiesOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesPropertiesAsync(const ModifyAndroidInstancesPropertiesRequest& request, const ModifyAndroidInstancesPropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidInstancesPropertiesRequest&;
    using Resp = ModifyAndroidInstancesPropertiesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidInstancesProperties", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidInstancesPropertiesOutcomeCallable GsClient::ModifyAndroidInstancesPropertiesCallable(const ModifyAndroidInstancesPropertiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidInstancesPropertiesOutcome>>();
    ModifyAndroidInstancesPropertiesAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidInstancesPropertiesRequest&,
        ModifyAndroidInstancesPropertiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidInstancesResolutionOutcome GsClient::ModifyAndroidInstancesResolution(const ModifyAndroidInstancesResolutionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesResolution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesResolutionResponse rsp = ModifyAndroidInstancesResolutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesResolutionOutcome(rsp);
        else
            return ModifyAndroidInstancesResolutionOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesResolutionOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesResolutionAsync(const ModifyAndroidInstancesResolutionRequest& request, const ModifyAndroidInstancesResolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidInstancesResolutionRequest&;
    using Resp = ModifyAndroidInstancesResolutionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidInstancesResolution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidInstancesResolutionOutcomeCallable GsClient::ModifyAndroidInstancesResolutionCallable(const ModifyAndroidInstancesResolutionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidInstancesResolutionOutcome>>();
    ModifyAndroidInstancesResolutionAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidInstancesResolutionRequest&,
        ModifyAndroidInstancesResolutionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidInstancesResourcesOutcome GsClient::ModifyAndroidInstancesResources(const ModifyAndroidInstancesResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesResourcesResponse rsp = ModifyAndroidInstancesResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesResourcesOutcome(rsp);
        else
            return ModifyAndroidInstancesResourcesOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesResourcesOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesResourcesAsync(const ModifyAndroidInstancesResourcesRequest& request, const ModifyAndroidInstancesResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidInstancesResourcesRequest&;
    using Resp = ModifyAndroidInstancesResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidInstancesResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidInstancesResourcesOutcomeCallable GsClient::ModifyAndroidInstancesResourcesCallable(const ModifyAndroidInstancesResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidInstancesResourcesOutcome>>();
    ModifyAndroidInstancesResourcesAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidInstancesResourcesRequest&,
        ModifyAndroidInstancesResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ModifyAndroidInstancesUserIdOutcome GsClient::ModifyAndroidInstancesUserId(const ModifyAndroidInstancesUserIdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesUserId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesUserIdResponse rsp = ModifyAndroidInstancesUserIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesUserIdOutcome(rsp);
        else
            return ModifyAndroidInstancesUserIdOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesUserIdOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesUserIdAsync(const ModifyAndroidInstancesUserIdRequest& request, const ModifyAndroidInstancesUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAndroidInstancesUserIdRequest&;
    using Resp = ModifyAndroidInstancesUserIdResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAndroidInstancesUserId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ModifyAndroidInstancesUserIdOutcomeCallable GsClient::ModifyAndroidInstancesUserIdCallable(const ModifyAndroidInstancesUserIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAndroidInstancesUserIdOutcome>>();
    ModifyAndroidInstancesUserIdAsync(
    request,
    [prom](
        const GsClient*,
        const ModifyAndroidInstancesUserIdRequest&,
        ModifyAndroidInstancesUserIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::RebootAndroidInstanceHostsOutcome GsClient::RebootAndroidInstanceHosts(const RebootAndroidInstanceHostsRequest &request)
{
    auto outcome = MakeRequest(request, "RebootAndroidInstanceHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootAndroidInstanceHostsResponse rsp = RebootAndroidInstanceHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootAndroidInstanceHostsOutcome(rsp);
        else
            return RebootAndroidInstanceHostsOutcome(o.GetError());
    }
    else
    {
        return RebootAndroidInstanceHostsOutcome(outcome.GetError());
    }
}

void GsClient::RebootAndroidInstanceHostsAsync(const RebootAndroidInstanceHostsRequest& request, const RebootAndroidInstanceHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RebootAndroidInstanceHostsRequest&;
    using Resp = RebootAndroidInstanceHostsResponse;

    DoRequestAsync<Req, Resp>(
        "RebootAndroidInstanceHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::RebootAndroidInstanceHostsOutcomeCallable GsClient::RebootAndroidInstanceHostsCallable(const RebootAndroidInstanceHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebootAndroidInstanceHostsOutcome>>();
    RebootAndroidInstanceHostsAsync(
    request,
    [prom](
        const GsClient*,
        const RebootAndroidInstanceHostsRequest&,
        RebootAndroidInstanceHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::RebootAndroidInstancesOutcome GsClient::RebootAndroidInstances(const RebootAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootAndroidInstancesResponse rsp = RebootAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootAndroidInstancesOutcome(rsp);
        else
            return RebootAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return RebootAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::RebootAndroidInstancesAsync(const RebootAndroidInstancesRequest& request, const RebootAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RebootAndroidInstancesRequest&;
    using Resp = RebootAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RebootAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::RebootAndroidInstancesOutcomeCallable GsClient::RebootAndroidInstancesCallable(const RebootAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebootAndroidInstancesOutcome>>();
    RebootAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const RebootAndroidInstancesRequest&,
        RebootAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::RenewAndroidInstancesAccessTokenOutcome GsClient::RenewAndroidInstancesAccessToken(const RenewAndroidInstancesAccessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "RenewAndroidInstancesAccessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewAndroidInstancesAccessTokenResponse rsp = RenewAndroidInstancesAccessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewAndroidInstancesAccessTokenOutcome(rsp);
        else
            return RenewAndroidInstancesAccessTokenOutcome(o.GetError());
    }
    else
    {
        return RenewAndroidInstancesAccessTokenOutcome(outcome.GetError());
    }
}

void GsClient::RenewAndroidInstancesAccessTokenAsync(const RenewAndroidInstancesAccessTokenRequest& request, const RenewAndroidInstancesAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewAndroidInstancesAccessTokenRequest&;
    using Resp = RenewAndroidInstancesAccessTokenResponse;

    DoRequestAsync<Req, Resp>(
        "RenewAndroidInstancesAccessToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::RenewAndroidInstancesAccessTokenOutcomeCallable GsClient::RenewAndroidInstancesAccessTokenCallable(const RenewAndroidInstancesAccessTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewAndroidInstancesAccessTokenOutcome>>();
    RenewAndroidInstancesAccessTokenAsync(
    request,
    [prom](
        const GsClient*,
        const RenewAndroidInstancesAccessTokenRequest&,
        RenewAndroidInstancesAccessTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::ResetAndroidInstancesOutcome GsClient::ResetAndroidInstances(const ResetAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAndroidInstancesResponse rsp = ResetAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAndroidInstancesOutcome(rsp);
        else
            return ResetAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return ResetAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::ResetAndroidInstancesAsync(const ResetAndroidInstancesRequest& request, const ResetAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetAndroidInstancesRequest&;
    using Resp = ResetAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ResetAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::ResetAndroidInstancesOutcomeCallable GsClient::ResetAndroidInstancesCallable(const ResetAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAndroidInstancesOutcome>>();
    ResetAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const ResetAndroidInstancesRequest&,
        ResetAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::RestartAndroidInstancesAppOutcome GsClient::RestartAndroidInstancesApp(const RestartAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "RestartAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartAndroidInstancesAppResponse rsp = RestartAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartAndroidInstancesAppOutcome(rsp);
        else
            return RestartAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return RestartAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::RestartAndroidInstancesAppAsync(const RestartAndroidInstancesAppRequest& request, const RestartAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartAndroidInstancesAppRequest&;
    using Resp = RestartAndroidInstancesAppResponse;

    DoRequestAsync<Req, Resp>(
        "RestartAndroidInstancesApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::RestartAndroidInstancesAppOutcomeCallable GsClient::RestartAndroidInstancesAppCallable(const RestartAndroidInstancesAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartAndroidInstancesAppOutcome>>();
    RestartAndroidInstancesAppAsync(
    request,
    [prom](
        const GsClient*,
        const RestartAndroidInstancesAppRequest&,
        RestartAndroidInstancesAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::RestoreAndroidInstanceOutcome GsClient::RestoreAndroidInstance(const RestoreAndroidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreAndroidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreAndroidInstanceResponse rsp = RestoreAndroidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreAndroidInstanceOutcome(rsp);
        else
            return RestoreAndroidInstanceOutcome(o.GetError());
    }
    else
    {
        return RestoreAndroidInstanceOutcome(outcome.GetError());
    }
}

void GsClient::RestoreAndroidInstanceAsync(const RestoreAndroidInstanceRequest& request, const RestoreAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestoreAndroidInstanceRequest&;
    using Resp = RestoreAndroidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestoreAndroidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::RestoreAndroidInstanceOutcomeCallable GsClient::RestoreAndroidInstanceCallable(const RestoreAndroidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestoreAndroidInstanceOutcome>>();
    RestoreAndroidInstanceAsync(
    request,
    [prom](
        const GsClient*,
        const RestoreAndroidInstanceRequest&,
        RestoreAndroidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::RestoreAndroidInstanceFromStorageOutcome GsClient::RestoreAndroidInstanceFromStorage(const RestoreAndroidInstanceFromStorageRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreAndroidInstanceFromStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreAndroidInstanceFromStorageResponse rsp = RestoreAndroidInstanceFromStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreAndroidInstanceFromStorageOutcome(rsp);
        else
            return RestoreAndroidInstanceFromStorageOutcome(o.GetError());
    }
    else
    {
        return RestoreAndroidInstanceFromStorageOutcome(outcome.GetError());
    }
}

void GsClient::RestoreAndroidInstanceFromStorageAsync(const RestoreAndroidInstanceFromStorageRequest& request, const RestoreAndroidInstanceFromStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestoreAndroidInstanceFromStorageRequest&;
    using Resp = RestoreAndroidInstanceFromStorageResponse;

    DoRequestAsync<Req, Resp>(
        "RestoreAndroidInstanceFromStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::RestoreAndroidInstanceFromStorageOutcomeCallable GsClient::RestoreAndroidInstanceFromStorageCallable(const RestoreAndroidInstanceFromStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestoreAndroidInstanceFromStorageOutcome>>();
    RestoreAndroidInstanceFromStorageAsync(
    request,
    [prom](
        const GsClient*,
        const RestoreAndroidInstanceFromStorageRequest&,
        RestoreAndroidInstanceFromStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::SaveGameArchiveOutcome GsClient::SaveGameArchive(const SaveGameArchiveRequest &request)
{
    auto outcome = MakeRequest(request, "SaveGameArchive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveGameArchiveResponse rsp = SaveGameArchiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveGameArchiveOutcome(rsp);
        else
            return SaveGameArchiveOutcome(o.GetError());
    }
    else
    {
        return SaveGameArchiveOutcome(outcome.GetError());
    }
}

void GsClient::SaveGameArchiveAsync(const SaveGameArchiveRequest& request, const SaveGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SaveGameArchiveRequest&;
    using Resp = SaveGameArchiveResponse;

    DoRequestAsync<Req, Resp>(
        "SaveGameArchive", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::SaveGameArchiveOutcomeCallable GsClient::SaveGameArchiveCallable(const SaveGameArchiveRequest &request)
{
    const auto prom = std::make_shared<std::promise<SaveGameArchiveOutcome>>();
    SaveGameArchiveAsync(
    request,
    [prom](
        const GsClient*,
        const SaveGameArchiveRequest&,
        SaveGameArchiveOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::SetAndroidInstancesBGAppKeepAliveOutcome GsClient::SetAndroidInstancesBGAppKeepAlive(const SetAndroidInstancesBGAppKeepAliveRequest &request)
{
    auto outcome = MakeRequest(request, "SetAndroidInstancesBGAppKeepAlive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAndroidInstancesBGAppKeepAliveResponse rsp = SetAndroidInstancesBGAppKeepAliveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAndroidInstancesBGAppKeepAliveOutcome(rsp);
        else
            return SetAndroidInstancesBGAppKeepAliveOutcome(o.GetError());
    }
    else
    {
        return SetAndroidInstancesBGAppKeepAliveOutcome(outcome.GetError());
    }
}

void GsClient::SetAndroidInstancesBGAppKeepAliveAsync(const SetAndroidInstancesBGAppKeepAliveRequest& request, const SetAndroidInstancesBGAppKeepAliveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetAndroidInstancesBGAppKeepAliveRequest&;
    using Resp = SetAndroidInstancesBGAppKeepAliveResponse;

    DoRequestAsync<Req, Resp>(
        "SetAndroidInstancesBGAppKeepAlive", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::SetAndroidInstancesBGAppKeepAliveOutcomeCallable GsClient::SetAndroidInstancesBGAppKeepAliveCallable(const SetAndroidInstancesBGAppKeepAliveRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetAndroidInstancesBGAppKeepAliveOutcome>>();
    SetAndroidInstancesBGAppKeepAliveAsync(
    request,
    [prom](
        const GsClient*,
        const SetAndroidInstancesBGAppKeepAliveRequest&,
        SetAndroidInstancesBGAppKeepAliveOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::SetAndroidInstancesFGAppKeepAliveOutcome GsClient::SetAndroidInstancesFGAppKeepAlive(const SetAndroidInstancesFGAppKeepAliveRequest &request)
{
    auto outcome = MakeRequest(request, "SetAndroidInstancesFGAppKeepAlive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAndroidInstancesFGAppKeepAliveResponse rsp = SetAndroidInstancesFGAppKeepAliveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAndroidInstancesFGAppKeepAliveOutcome(rsp);
        else
            return SetAndroidInstancesFGAppKeepAliveOutcome(o.GetError());
    }
    else
    {
        return SetAndroidInstancesFGAppKeepAliveOutcome(outcome.GetError());
    }
}

void GsClient::SetAndroidInstancesFGAppKeepAliveAsync(const SetAndroidInstancesFGAppKeepAliveRequest& request, const SetAndroidInstancesFGAppKeepAliveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetAndroidInstancesFGAppKeepAliveRequest&;
    using Resp = SetAndroidInstancesFGAppKeepAliveResponse;

    DoRequestAsync<Req, Resp>(
        "SetAndroidInstancesFGAppKeepAlive", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::SetAndroidInstancesFGAppKeepAliveOutcomeCallable GsClient::SetAndroidInstancesFGAppKeepAliveCallable(const SetAndroidInstancesFGAppKeepAliveRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetAndroidInstancesFGAppKeepAliveOutcome>>();
    SetAndroidInstancesFGAppKeepAliveAsync(
    request,
    [prom](
        const GsClient*,
        const SetAndroidInstancesFGAppKeepAliveRequest&,
        SetAndroidInstancesFGAppKeepAliveOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::StartAndroidInstancesOutcome GsClient::StartAndroidInstances(const StartAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAndroidInstancesResponse rsp = StartAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAndroidInstancesOutcome(rsp);
        else
            return StartAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return StartAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::StartAndroidInstancesAsync(const StartAndroidInstancesRequest& request, const StartAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartAndroidInstancesRequest&;
    using Resp = StartAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StartAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::StartAndroidInstancesOutcomeCallable GsClient::StartAndroidInstancesCallable(const StartAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartAndroidInstancesOutcome>>();
    StartAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const StartAndroidInstancesRequest&,
        StartAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::StartAndroidInstancesAppOutcome GsClient::StartAndroidInstancesApp(const StartAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "StartAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAndroidInstancesAppResponse rsp = StartAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAndroidInstancesAppOutcome(rsp);
        else
            return StartAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return StartAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::StartAndroidInstancesAppAsync(const StartAndroidInstancesAppRequest& request, const StartAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartAndroidInstancesAppRequest&;
    using Resp = StartAndroidInstancesAppResponse;

    DoRequestAsync<Req, Resp>(
        "StartAndroidInstancesApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::StartAndroidInstancesAppOutcomeCallable GsClient::StartAndroidInstancesAppCallable(const StartAndroidInstancesAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartAndroidInstancesAppOutcome>>();
    StartAndroidInstancesAppAsync(
    request,
    [prom](
        const GsClient*,
        const StartAndroidInstancesAppRequest&,
        StartAndroidInstancesAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::StartPublishStreamOutcome GsClient::StartPublishStream(const StartPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamResponse rsp = StartPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamOutcome(rsp);
        else
            return StartPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamOutcome(outcome.GetError());
    }
}

void GsClient::StartPublishStreamAsync(const StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartPublishStreamRequest&;
    using Resp = StartPublishStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StartPublishStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::StartPublishStreamOutcomeCallable GsClient::StartPublishStreamCallable(const StartPublishStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartPublishStreamOutcome>>();
    StartPublishStreamAsync(
    request,
    [prom](
        const GsClient*,
        const StartPublishStreamRequest&,
        StartPublishStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::StartPublishStreamToCSSOutcome GsClient::StartPublishStreamToCSS(const StartPublishStreamToCSSRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStreamToCSS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamToCSSResponse rsp = StartPublishStreamToCSSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamToCSSOutcome(rsp);
        else
            return StartPublishStreamToCSSOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamToCSSOutcome(outcome.GetError());
    }
}

void GsClient::StartPublishStreamToCSSAsync(const StartPublishStreamToCSSRequest& request, const StartPublishStreamToCSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartPublishStreamToCSSRequest&;
    using Resp = StartPublishStreamToCSSResponse;

    DoRequestAsync<Req, Resp>(
        "StartPublishStreamToCSS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::StartPublishStreamToCSSOutcomeCallable GsClient::StartPublishStreamToCSSCallable(const StartPublishStreamToCSSRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartPublishStreamToCSSOutcome>>();
    StartPublishStreamToCSSAsync(
    request,
    [prom](
        const GsClient*,
        const StartPublishStreamToCSSRequest&,
        StartPublishStreamToCSSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::StopAndroidInstancesOutcome GsClient::StopAndroidInstances(const StopAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAndroidInstancesResponse rsp = StopAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAndroidInstancesOutcome(rsp);
        else
            return StopAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return StopAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::StopAndroidInstancesAsync(const StopAndroidInstancesRequest& request, const StopAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopAndroidInstancesRequest&;
    using Resp = StopAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StopAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::StopAndroidInstancesOutcomeCallable GsClient::StopAndroidInstancesCallable(const StopAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopAndroidInstancesOutcome>>();
    StopAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const StopAndroidInstancesRequest&,
        StopAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::StopAndroidInstancesAppOutcome GsClient::StopAndroidInstancesApp(const StopAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "StopAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAndroidInstancesAppResponse rsp = StopAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAndroidInstancesAppOutcome(rsp);
        else
            return StopAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return StopAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::StopAndroidInstancesAppAsync(const StopAndroidInstancesAppRequest& request, const StopAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopAndroidInstancesAppRequest&;
    using Resp = StopAndroidInstancesAppResponse;

    DoRequestAsync<Req, Resp>(
        "StopAndroidInstancesApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::StopAndroidInstancesAppOutcomeCallable GsClient::StopAndroidInstancesAppCallable(const StopAndroidInstancesAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopAndroidInstancesAppOutcome>>();
    StopAndroidInstancesAppAsync(
    request,
    [prom](
        const GsClient*,
        const StopAndroidInstancesAppRequest&,
        StopAndroidInstancesAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::StopGameOutcome GsClient::StopGame(const StopGameRequest &request)
{
    auto outcome = MakeRequest(request, "StopGame");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopGameResponse rsp = StopGameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopGameOutcome(rsp);
        else
            return StopGameOutcome(o.GetError());
    }
    else
    {
        return StopGameOutcome(outcome.GetError());
    }
}

void GsClient::StopGameAsync(const StopGameRequest& request, const StopGameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopGameRequest&;
    using Resp = StopGameResponse;

    DoRequestAsync<Req, Resp>(
        "StopGame", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::StopGameOutcomeCallable GsClient::StopGameCallable(const StopGameRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopGameOutcome>>();
    StopGameAsync(
    request,
    [prom](
        const GsClient*,
        const StopGameRequest&,
        StopGameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::StopPublishStreamOutcome GsClient::StopPublishStream(const StopPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopPublishStreamResponse rsp = StopPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopPublishStreamOutcome(rsp);
        else
            return StopPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StopPublishStreamOutcome(outcome.GetError());
    }
}

void GsClient::StopPublishStreamAsync(const StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopPublishStreamRequest&;
    using Resp = StopPublishStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StopPublishStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::StopPublishStreamOutcomeCallable GsClient::StopPublishStreamCallable(const StopPublishStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopPublishStreamOutcome>>();
    StopPublishStreamAsync(
    request,
    [prom](
        const GsClient*,
        const StopPublishStreamRequest&,
        StopPublishStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::SwitchGameArchiveOutcome GsClient::SwitchGameArchive(const SwitchGameArchiveRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchGameArchive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchGameArchiveResponse rsp = SwitchGameArchiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchGameArchiveOutcome(rsp);
        else
            return SwitchGameArchiveOutcome(o.GetError());
    }
    else
    {
        return SwitchGameArchiveOutcome(outcome.GetError());
    }
}

void GsClient::SwitchGameArchiveAsync(const SwitchGameArchiveRequest& request, const SwitchGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchGameArchiveRequest&;
    using Resp = SwitchGameArchiveResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchGameArchive", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::SwitchGameArchiveOutcomeCallable GsClient::SwitchGameArchiveCallable(const SwitchGameArchiveRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchGameArchiveOutcome>>();
    SwitchGameArchiveAsync(
    request,
    [prom](
        const GsClient*,
        const SwitchGameArchiveRequest&,
        SwitchGameArchiveOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::SyncAndroidInstanceImageOutcome GsClient::SyncAndroidInstanceImage(const SyncAndroidInstanceImageRequest &request)
{
    auto outcome = MakeRequest(request, "SyncAndroidInstanceImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncAndroidInstanceImageResponse rsp = SyncAndroidInstanceImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncAndroidInstanceImageOutcome(rsp);
        else
            return SyncAndroidInstanceImageOutcome(o.GetError());
    }
    else
    {
        return SyncAndroidInstanceImageOutcome(outcome.GetError());
    }
}

void GsClient::SyncAndroidInstanceImageAsync(const SyncAndroidInstanceImageRequest& request, const SyncAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncAndroidInstanceImageRequest&;
    using Resp = SyncAndroidInstanceImageResponse;

    DoRequestAsync<Req, Resp>(
        "SyncAndroidInstanceImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::SyncAndroidInstanceImageOutcomeCallable GsClient::SyncAndroidInstanceImageCallable(const SyncAndroidInstanceImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncAndroidInstanceImageOutcome>>();
    SyncAndroidInstanceImageAsync(
    request,
    [prom](
        const GsClient*,
        const SyncAndroidInstanceImageRequest&,
        SyncAndroidInstanceImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::SyncExecuteCommandOnAndroidInstancesOutcome GsClient::SyncExecuteCommandOnAndroidInstances(const SyncExecuteCommandOnAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "SyncExecuteCommandOnAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncExecuteCommandOnAndroidInstancesResponse rsp = SyncExecuteCommandOnAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncExecuteCommandOnAndroidInstancesOutcome(rsp);
        else
            return SyncExecuteCommandOnAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return SyncExecuteCommandOnAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::SyncExecuteCommandOnAndroidInstancesAsync(const SyncExecuteCommandOnAndroidInstancesRequest& request, const SyncExecuteCommandOnAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncExecuteCommandOnAndroidInstancesRequest&;
    using Resp = SyncExecuteCommandOnAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "SyncExecuteCommandOnAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::SyncExecuteCommandOnAndroidInstancesOutcomeCallable GsClient::SyncExecuteCommandOnAndroidInstancesCallable(const SyncExecuteCommandOnAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncExecuteCommandOnAndroidInstancesOutcome>>();
    SyncExecuteCommandOnAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const SyncExecuteCommandOnAndroidInstancesRequest&,
        SyncExecuteCommandOnAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::TrylockWorkerOutcome GsClient::TrylockWorker(const TrylockWorkerRequest &request)
{
    auto outcome = MakeRequest(request, "TrylockWorker");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrylockWorkerResponse rsp = TrylockWorkerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrylockWorkerOutcome(rsp);
        else
            return TrylockWorkerOutcome(o.GetError());
    }
    else
    {
        return TrylockWorkerOutcome(outcome.GetError());
    }
}

void GsClient::TrylockWorkerAsync(const TrylockWorkerRequest& request, const TrylockWorkerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TrylockWorkerRequest&;
    using Resp = TrylockWorkerResponse;

    DoRequestAsync<Req, Resp>(
        "TrylockWorker", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::TrylockWorkerOutcomeCallable GsClient::TrylockWorkerCallable(const TrylockWorkerRequest &request)
{
    const auto prom = std::make_shared<std::promise<TrylockWorkerOutcome>>();
    TrylockWorkerAsync(
    request,
    [prom](
        const GsClient*,
        const TrylockWorkerRequest&,
        TrylockWorkerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::UninstallAndroidInstancesAppOutcome GsClient::UninstallAndroidInstancesApp(const UninstallAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "UninstallAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UninstallAndroidInstancesAppResponse rsp = UninstallAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UninstallAndroidInstancesAppOutcome(rsp);
        else
            return UninstallAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return UninstallAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::UninstallAndroidInstancesAppAsync(const UninstallAndroidInstancesAppRequest& request, const UninstallAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UninstallAndroidInstancesAppRequest&;
    using Resp = UninstallAndroidInstancesAppResponse;

    DoRequestAsync<Req, Resp>(
        "UninstallAndroidInstancesApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::UninstallAndroidInstancesAppOutcomeCallable GsClient::UninstallAndroidInstancesAppCallable(const UninstallAndroidInstancesAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<UninstallAndroidInstancesAppOutcome>>();
    UninstallAndroidInstancesAppAsync(
    request,
    [prom](
        const GsClient*,
        const UninstallAndroidInstancesAppRequest&,
        UninstallAndroidInstancesAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::UploadFileToAndroidInstancesOutcome GsClient::UploadFileToAndroidInstances(const UploadFileToAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFileToAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFileToAndroidInstancesResponse rsp = UploadFileToAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFileToAndroidInstancesOutcome(rsp);
        else
            return UploadFileToAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return UploadFileToAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::UploadFileToAndroidInstancesAsync(const UploadFileToAndroidInstancesRequest& request, const UploadFileToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadFileToAndroidInstancesRequest&;
    using Resp = UploadFileToAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "UploadFileToAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::UploadFileToAndroidInstancesOutcomeCallable GsClient::UploadFileToAndroidInstancesCallable(const UploadFileToAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFileToAndroidInstancesOutcome>>();
    UploadFileToAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const UploadFileToAndroidInstancesRequest&,
        UploadFileToAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GsClient::UploadFilesToAndroidInstancesOutcome GsClient::UploadFilesToAndroidInstances(const UploadFilesToAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFilesToAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFilesToAndroidInstancesResponse rsp = UploadFilesToAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFilesToAndroidInstancesOutcome(rsp);
        else
            return UploadFilesToAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return UploadFilesToAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::UploadFilesToAndroidInstancesAsync(const UploadFilesToAndroidInstancesRequest& request, const UploadFilesToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadFilesToAndroidInstancesRequest&;
    using Resp = UploadFilesToAndroidInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "UploadFilesToAndroidInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GsClient::UploadFilesToAndroidInstancesOutcomeCallable GsClient::UploadFilesToAndroidInstancesCallable(const UploadFilesToAndroidInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFilesToAndroidInstancesOutcome>>();
    UploadFilesToAndroidInstancesAsync(
    request,
    [prom](
        const GsClient*,
        const UploadFilesToAndroidInstancesRequest&,
        UploadFilesToAndroidInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

