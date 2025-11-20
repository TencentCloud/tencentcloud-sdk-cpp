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

#include <tencentcloud/iot/v20180123/IotClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iot::V20180123;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-01-23";
    const string ENDPOINT = "iot.tencentcloudapi.com";
}

IotClient::IotClient(const Credential &credential, const string &region) :
    IotClient(credential, region, ClientProfile())
{
}

IotClient::IotClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotClient::ActivateRuleOutcome IotClient::ActivateRule(const ActivateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateRuleResponse rsp = ActivateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateRuleOutcome(rsp);
        else
            return ActivateRuleOutcome(o.GetError());
    }
    else
    {
        return ActivateRuleOutcome(outcome.GetError());
    }
}

void IotClient::ActivateRuleAsync(const ActivateRuleRequest& request, const ActivateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ActivateRuleRequest&;
    using Resp = ActivateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ActivateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::ActivateRuleOutcomeCallable IotClient::ActivateRuleCallable(const ActivateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActivateRuleOutcome>>();
    ActivateRuleAsync(
    request,
    [prom](
        const IotClient*,
        const ActivateRuleRequest&,
        ActivateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AddDeviceOutcome IotClient::AddDevice(const AddDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "AddDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDeviceResponse rsp = AddDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDeviceOutcome(rsp);
        else
            return AddDeviceOutcome(o.GetError());
    }
    else
    {
        return AddDeviceOutcome(outcome.GetError());
    }
}

void IotClient::AddDeviceAsync(const AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddDeviceRequest&;
    using Resp = AddDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "AddDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AddDeviceOutcomeCallable IotClient::AddDeviceCallable(const AddDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddDeviceOutcome>>();
    AddDeviceAsync(
    request,
    [prom](
        const IotClient*,
        const AddDeviceRequest&,
        AddDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AddProductOutcome IotClient::AddProduct(const AddProductRequest &request)
{
    auto outcome = MakeRequest(request, "AddProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddProductResponse rsp = AddProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddProductOutcome(rsp);
        else
            return AddProductOutcome(o.GetError());
    }
    else
    {
        return AddProductOutcome(outcome.GetError());
    }
}

void IotClient::AddProductAsync(const AddProductRequest& request, const AddProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddProductRequest&;
    using Resp = AddProductResponse;

    DoRequestAsync<Req, Resp>(
        "AddProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AddProductOutcomeCallable IotClient::AddProductCallable(const AddProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddProductOutcome>>();
    AddProductAsync(
    request,
    [prom](
        const IotClient*,
        const AddProductRequest&,
        AddProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AddRuleOutcome IotClient::AddRule(const AddRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddRuleResponse rsp = AddRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddRuleOutcome(rsp);
        else
            return AddRuleOutcome(o.GetError());
    }
    else
    {
        return AddRuleOutcome(outcome.GetError());
    }
}

void IotClient::AddRuleAsync(const AddRuleRequest& request, const AddRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddRuleRequest&;
    using Resp = AddRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AddRuleOutcomeCallable IotClient::AddRuleCallable(const AddRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddRuleOutcome>>();
    AddRuleAsync(
    request,
    [prom](
        const IotClient*,
        const AddRuleRequest&,
        AddRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AddTopicOutcome IotClient::AddTopic(const AddTopicRequest &request)
{
    auto outcome = MakeRequest(request, "AddTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddTopicResponse rsp = AddTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddTopicOutcome(rsp);
        else
            return AddTopicOutcome(o.GetError());
    }
    else
    {
        return AddTopicOutcome(outcome.GetError());
    }
}

void IotClient::AddTopicAsync(const AddTopicRequest& request, const AddTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddTopicRequest&;
    using Resp = AddTopicResponse;

    DoRequestAsync<Req, Resp>(
        "AddTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AddTopicOutcomeCallable IotClient::AddTopicCallable(const AddTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddTopicOutcome>>();
    AddTopicAsync(
    request,
    [prom](
        const IotClient*,
        const AddTopicRequest&,
        AddTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppAddUserOutcome IotClient::AppAddUser(const AppAddUserRequest &request)
{
    auto outcome = MakeRequest(request, "AppAddUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppAddUserResponse rsp = AppAddUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppAddUserOutcome(rsp);
        else
            return AppAddUserOutcome(o.GetError());
    }
    else
    {
        return AppAddUserOutcome(outcome.GetError());
    }
}

void IotClient::AppAddUserAsync(const AppAddUserRequest& request, const AppAddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppAddUserRequest&;
    using Resp = AppAddUserResponse;

    DoRequestAsync<Req, Resp>(
        "AppAddUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppAddUserOutcomeCallable IotClient::AppAddUserCallable(const AppAddUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppAddUserOutcome>>();
    AppAddUserAsync(
    request,
    [prom](
        const IotClient*,
        const AppAddUserRequest&,
        AppAddUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppDeleteDeviceOutcome IotClient::AppDeleteDevice(const AppDeleteDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "AppDeleteDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppDeleteDeviceResponse rsp = AppDeleteDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppDeleteDeviceOutcome(rsp);
        else
            return AppDeleteDeviceOutcome(o.GetError());
    }
    else
    {
        return AppDeleteDeviceOutcome(outcome.GetError());
    }
}

void IotClient::AppDeleteDeviceAsync(const AppDeleteDeviceRequest& request, const AppDeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppDeleteDeviceRequest&;
    using Resp = AppDeleteDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "AppDeleteDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppDeleteDeviceOutcomeCallable IotClient::AppDeleteDeviceCallable(const AppDeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppDeleteDeviceOutcome>>();
    AppDeleteDeviceAsync(
    request,
    [prom](
        const IotClient*,
        const AppDeleteDeviceRequest&,
        AppDeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppGetDeviceOutcome IotClient::AppGetDevice(const AppGetDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "AppGetDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppGetDeviceResponse rsp = AppGetDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppGetDeviceOutcome(rsp);
        else
            return AppGetDeviceOutcome(o.GetError());
    }
    else
    {
        return AppGetDeviceOutcome(outcome.GetError());
    }
}

void IotClient::AppGetDeviceAsync(const AppGetDeviceRequest& request, const AppGetDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppGetDeviceRequest&;
    using Resp = AppGetDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "AppGetDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppGetDeviceOutcomeCallable IotClient::AppGetDeviceCallable(const AppGetDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppGetDeviceOutcome>>();
    AppGetDeviceAsync(
    request,
    [prom](
        const IotClient*,
        const AppGetDeviceRequest&,
        AppGetDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppGetDeviceDataOutcome IotClient::AppGetDeviceData(const AppGetDeviceDataRequest &request)
{
    auto outcome = MakeRequest(request, "AppGetDeviceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppGetDeviceDataResponse rsp = AppGetDeviceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppGetDeviceDataOutcome(rsp);
        else
            return AppGetDeviceDataOutcome(o.GetError());
    }
    else
    {
        return AppGetDeviceDataOutcome(outcome.GetError());
    }
}

void IotClient::AppGetDeviceDataAsync(const AppGetDeviceDataRequest& request, const AppGetDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppGetDeviceDataRequest&;
    using Resp = AppGetDeviceDataResponse;

    DoRequestAsync<Req, Resp>(
        "AppGetDeviceData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppGetDeviceDataOutcomeCallable IotClient::AppGetDeviceDataCallable(const AppGetDeviceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppGetDeviceDataOutcome>>();
    AppGetDeviceDataAsync(
    request,
    [prom](
        const IotClient*,
        const AppGetDeviceDataRequest&,
        AppGetDeviceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppGetDeviceStatusesOutcome IotClient::AppGetDeviceStatuses(const AppGetDeviceStatusesRequest &request)
{
    auto outcome = MakeRequest(request, "AppGetDeviceStatuses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppGetDeviceStatusesResponse rsp = AppGetDeviceStatusesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppGetDeviceStatusesOutcome(rsp);
        else
            return AppGetDeviceStatusesOutcome(o.GetError());
    }
    else
    {
        return AppGetDeviceStatusesOutcome(outcome.GetError());
    }
}

void IotClient::AppGetDeviceStatusesAsync(const AppGetDeviceStatusesRequest& request, const AppGetDeviceStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppGetDeviceStatusesRequest&;
    using Resp = AppGetDeviceStatusesResponse;

    DoRequestAsync<Req, Resp>(
        "AppGetDeviceStatuses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppGetDeviceStatusesOutcomeCallable IotClient::AppGetDeviceStatusesCallable(const AppGetDeviceStatusesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppGetDeviceStatusesOutcome>>();
    AppGetDeviceStatusesAsync(
    request,
    [prom](
        const IotClient*,
        const AppGetDeviceStatusesRequest&,
        AppGetDeviceStatusesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppGetDevicesOutcome IotClient::AppGetDevices(const AppGetDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "AppGetDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppGetDevicesResponse rsp = AppGetDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppGetDevicesOutcome(rsp);
        else
            return AppGetDevicesOutcome(o.GetError());
    }
    else
    {
        return AppGetDevicesOutcome(outcome.GetError());
    }
}

void IotClient::AppGetDevicesAsync(const AppGetDevicesRequest& request, const AppGetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppGetDevicesRequest&;
    using Resp = AppGetDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "AppGetDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppGetDevicesOutcomeCallable IotClient::AppGetDevicesCallable(const AppGetDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppGetDevicesOutcome>>();
    AppGetDevicesAsync(
    request,
    [prom](
        const IotClient*,
        const AppGetDevicesRequest&,
        AppGetDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppGetTokenOutcome IotClient::AppGetToken(const AppGetTokenRequest &request)
{
    auto outcome = MakeRequest(request, "AppGetToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppGetTokenResponse rsp = AppGetTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppGetTokenOutcome(rsp);
        else
            return AppGetTokenOutcome(o.GetError());
    }
    else
    {
        return AppGetTokenOutcome(outcome.GetError());
    }
}

void IotClient::AppGetTokenAsync(const AppGetTokenRequest& request, const AppGetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppGetTokenRequest&;
    using Resp = AppGetTokenResponse;

    DoRequestAsync<Req, Resp>(
        "AppGetToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppGetTokenOutcomeCallable IotClient::AppGetTokenCallable(const AppGetTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppGetTokenOutcome>>();
    AppGetTokenAsync(
    request,
    [prom](
        const IotClient*,
        const AppGetTokenRequest&,
        AppGetTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppGetUserOutcome IotClient::AppGetUser(const AppGetUserRequest &request)
{
    auto outcome = MakeRequest(request, "AppGetUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppGetUserResponse rsp = AppGetUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppGetUserOutcome(rsp);
        else
            return AppGetUserOutcome(o.GetError());
    }
    else
    {
        return AppGetUserOutcome(outcome.GetError());
    }
}

void IotClient::AppGetUserAsync(const AppGetUserRequest& request, const AppGetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppGetUserRequest&;
    using Resp = AppGetUserResponse;

    DoRequestAsync<Req, Resp>(
        "AppGetUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppGetUserOutcomeCallable IotClient::AppGetUserCallable(const AppGetUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppGetUserOutcome>>();
    AppGetUserAsync(
    request,
    [prom](
        const IotClient*,
        const AppGetUserRequest&,
        AppGetUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppIssueDeviceControlOutcome IotClient::AppIssueDeviceControl(const AppIssueDeviceControlRequest &request)
{
    auto outcome = MakeRequest(request, "AppIssueDeviceControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppIssueDeviceControlResponse rsp = AppIssueDeviceControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppIssueDeviceControlOutcome(rsp);
        else
            return AppIssueDeviceControlOutcome(o.GetError());
    }
    else
    {
        return AppIssueDeviceControlOutcome(outcome.GetError());
    }
}

void IotClient::AppIssueDeviceControlAsync(const AppIssueDeviceControlRequest& request, const AppIssueDeviceControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppIssueDeviceControlRequest&;
    using Resp = AppIssueDeviceControlResponse;

    DoRequestAsync<Req, Resp>(
        "AppIssueDeviceControl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppIssueDeviceControlOutcomeCallable IotClient::AppIssueDeviceControlCallable(const AppIssueDeviceControlRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppIssueDeviceControlOutcome>>();
    AppIssueDeviceControlAsync(
    request,
    [prom](
        const IotClient*,
        const AppIssueDeviceControlRequest&,
        AppIssueDeviceControlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppResetPasswordOutcome IotClient::AppResetPassword(const AppResetPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "AppResetPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppResetPasswordResponse rsp = AppResetPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppResetPasswordOutcome(rsp);
        else
            return AppResetPasswordOutcome(o.GetError());
    }
    else
    {
        return AppResetPasswordOutcome(outcome.GetError());
    }
}

void IotClient::AppResetPasswordAsync(const AppResetPasswordRequest& request, const AppResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppResetPasswordRequest&;
    using Resp = AppResetPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "AppResetPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppResetPasswordOutcomeCallable IotClient::AppResetPasswordCallable(const AppResetPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppResetPasswordOutcome>>();
    AppResetPasswordAsync(
    request,
    [prom](
        const IotClient*,
        const AppResetPasswordRequest&,
        AppResetPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppSecureAddDeviceOutcome IotClient::AppSecureAddDevice(const AppSecureAddDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "AppSecureAddDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppSecureAddDeviceResponse rsp = AppSecureAddDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppSecureAddDeviceOutcome(rsp);
        else
            return AppSecureAddDeviceOutcome(o.GetError());
    }
    else
    {
        return AppSecureAddDeviceOutcome(outcome.GetError());
    }
}

void IotClient::AppSecureAddDeviceAsync(const AppSecureAddDeviceRequest& request, const AppSecureAddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppSecureAddDeviceRequest&;
    using Resp = AppSecureAddDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "AppSecureAddDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppSecureAddDeviceOutcomeCallable IotClient::AppSecureAddDeviceCallable(const AppSecureAddDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppSecureAddDeviceOutcome>>();
    AppSecureAddDeviceAsync(
    request,
    [prom](
        const IotClient*,
        const AppSecureAddDeviceRequest&,
        AppSecureAddDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppUpdateDeviceOutcome IotClient::AppUpdateDevice(const AppUpdateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "AppUpdateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppUpdateDeviceResponse rsp = AppUpdateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppUpdateDeviceOutcome(rsp);
        else
            return AppUpdateDeviceOutcome(o.GetError());
    }
    else
    {
        return AppUpdateDeviceOutcome(outcome.GetError());
    }
}

void IotClient::AppUpdateDeviceAsync(const AppUpdateDeviceRequest& request, const AppUpdateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppUpdateDeviceRequest&;
    using Resp = AppUpdateDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "AppUpdateDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppUpdateDeviceOutcomeCallable IotClient::AppUpdateDeviceCallable(const AppUpdateDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppUpdateDeviceOutcome>>();
    AppUpdateDeviceAsync(
    request,
    [prom](
        const IotClient*,
        const AppUpdateDeviceRequest&,
        AppUpdateDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AppUpdateUserOutcome IotClient::AppUpdateUser(const AppUpdateUserRequest &request)
{
    auto outcome = MakeRequest(request, "AppUpdateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AppUpdateUserResponse rsp = AppUpdateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AppUpdateUserOutcome(rsp);
        else
            return AppUpdateUserOutcome(o.GetError());
    }
    else
    {
        return AppUpdateUserOutcome(outcome.GetError());
    }
}

void IotClient::AppUpdateUserAsync(const AppUpdateUserRequest& request, const AppUpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AppUpdateUserRequest&;
    using Resp = AppUpdateUserResponse;

    DoRequestAsync<Req, Resp>(
        "AppUpdateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AppUpdateUserOutcomeCallable IotClient::AppUpdateUserCallable(const AppUpdateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<AppUpdateUserOutcome>>();
    AppUpdateUserAsync(
    request,
    [prom](
        const IotClient*,
        const AppUpdateUserRequest&,
        AppUpdateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::AssociateSubDeviceToGatewayProductOutcome IotClient::AssociateSubDeviceToGatewayProduct(const AssociateSubDeviceToGatewayProductRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateSubDeviceToGatewayProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateSubDeviceToGatewayProductResponse rsp = AssociateSubDeviceToGatewayProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateSubDeviceToGatewayProductOutcome(rsp);
        else
            return AssociateSubDeviceToGatewayProductOutcome(o.GetError());
    }
    else
    {
        return AssociateSubDeviceToGatewayProductOutcome(outcome.GetError());
    }
}

void IotClient::AssociateSubDeviceToGatewayProductAsync(const AssociateSubDeviceToGatewayProductRequest& request, const AssociateSubDeviceToGatewayProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateSubDeviceToGatewayProductRequest&;
    using Resp = AssociateSubDeviceToGatewayProductResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateSubDeviceToGatewayProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::AssociateSubDeviceToGatewayProductOutcomeCallable IotClient::AssociateSubDeviceToGatewayProductCallable(const AssociateSubDeviceToGatewayProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSubDeviceToGatewayProductOutcome>>();
    AssociateSubDeviceToGatewayProductAsync(
    request,
    [prom](
        const IotClient*,
        const AssociateSubDeviceToGatewayProductRequest&,
        AssociateSubDeviceToGatewayProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::DeactivateRuleOutcome IotClient::DeactivateRule(const DeactivateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeactivateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeactivateRuleResponse rsp = DeactivateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeactivateRuleOutcome(rsp);
        else
            return DeactivateRuleOutcome(o.GetError());
    }
    else
    {
        return DeactivateRuleOutcome(outcome.GetError());
    }
}

void IotClient::DeactivateRuleAsync(const DeactivateRuleRequest& request, const DeactivateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeactivateRuleRequest&;
    using Resp = DeactivateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeactivateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::DeactivateRuleOutcomeCallable IotClient::DeactivateRuleCallable(const DeactivateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeactivateRuleOutcome>>();
    DeactivateRuleAsync(
    request,
    [prom](
        const IotClient*,
        const DeactivateRuleRequest&,
        DeactivateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::DeleteDeviceOutcome IotClient::DeleteDevice(const DeleteDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceResponse rsp = DeleteDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceOutcome(rsp);
        else
            return DeleteDeviceOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceOutcome(outcome.GetError());
    }
}

void IotClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceRequest&;
    using Resp = DeleteDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::DeleteDeviceOutcomeCallable IotClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceOutcome>>();
    DeleteDeviceAsync(
    request,
    [prom](
        const IotClient*,
        const DeleteDeviceRequest&,
        DeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::DeleteProductOutcome IotClient::DeleteProduct(const DeleteProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProductResponse rsp = DeleteProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProductOutcome(rsp);
        else
            return DeleteProductOutcome(o.GetError());
    }
    else
    {
        return DeleteProductOutcome(outcome.GetError());
    }
}

void IotClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProductRequest&;
    using Resp = DeleteProductResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::DeleteProductOutcomeCallable IotClient::DeleteProductCallable(const DeleteProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProductOutcome>>();
    DeleteProductAsync(
    request,
    [prom](
        const IotClient*,
        const DeleteProductRequest&,
        DeleteProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::DeleteRuleOutcome IotClient::DeleteRule(const DeleteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleResponse rsp = DeleteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleOutcome(rsp);
        else
            return DeleteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleOutcome(outcome.GetError());
    }
}

void IotClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRuleRequest&;
    using Resp = DeleteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::DeleteRuleOutcomeCallable IotClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRuleOutcome>>();
    DeleteRuleAsync(
    request,
    [prom](
        const IotClient*,
        const DeleteRuleRequest&,
        DeleteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::DeleteTopicOutcome IotClient::DeleteTopic(const DeleteTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicResponse rsp = DeleteTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicOutcome(rsp);
        else
            return DeleteTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicOutcome(outcome.GetError());
    }
}

void IotClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicRequest&;
    using Resp = DeleteTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::DeleteTopicOutcomeCallable IotClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicOutcome>>();
    DeleteTopicAsync(
    request,
    [prom](
        const IotClient*,
        const DeleteTopicRequest&,
        DeleteTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetDataHistoryOutcome IotClient::GetDataHistory(const GetDataHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "GetDataHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDataHistoryResponse rsp = GetDataHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDataHistoryOutcome(rsp);
        else
            return GetDataHistoryOutcome(o.GetError());
    }
    else
    {
        return GetDataHistoryOutcome(outcome.GetError());
    }
}

void IotClient::GetDataHistoryAsync(const GetDataHistoryRequest& request, const GetDataHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDataHistoryRequest&;
    using Resp = GetDataHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "GetDataHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetDataHistoryOutcomeCallable IotClient::GetDataHistoryCallable(const GetDataHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDataHistoryOutcome>>();
    GetDataHistoryAsync(
    request,
    [prom](
        const IotClient*,
        const GetDataHistoryRequest&,
        GetDataHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetDebugLogOutcome IotClient::GetDebugLog(const GetDebugLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetDebugLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDebugLogResponse rsp = GetDebugLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDebugLogOutcome(rsp);
        else
            return GetDebugLogOutcome(o.GetError());
    }
    else
    {
        return GetDebugLogOutcome(outcome.GetError());
    }
}

void IotClient::GetDebugLogAsync(const GetDebugLogRequest& request, const GetDebugLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDebugLogRequest&;
    using Resp = GetDebugLogResponse;

    DoRequestAsync<Req, Resp>(
        "GetDebugLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetDebugLogOutcomeCallable IotClient::GetDebugLogCallable(const GetDebugLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDebugLogOutcome>>();
    GetDebugLogAsync(
    request,
    [prom](
        const IotClient*,
        const GetDebugLogRequest&,
        GetDebugLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetDeviceOutcome IotClient::GetDevice(const GetDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "GetDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceResponse rsp = GetDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceOutcome(rsp);
        else
            return GetDeviceOutcome(o.GetError());
    }
    else
    {
        return GetDeviceOutcome(outcome.GetError());
    }
}

void IotClient::GetDeviceAsync(const GetDeviceRequest& request, const GetDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceRequest&;
    using Resp = GetDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "GetDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetDeviceOutcomeCallable IotClient::GetDeviceCallable(const GetDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceOutcome>>();
    GetDeviceAsync(
    request,
    [prom](
        const IotClient*,
        const GetDeviceRequest&,
        GetDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetDeviceDataOutcome IotClient::GetDeviceData(const GetDeviceDataRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceDataResponse rsp = GetDeviceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceDataOutcome(rsp);
        else
            return GetDeviceDataOutcome(o.GetError());
    }
    else
    {
        return GetDeviceDataOutcome(outcome.GetError());
    }
}

void IotClient::GetDeviceDataAsync(const GetDeviceDataRequest& request, const GetDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceDataRequest&;
    using Resp = GetDeviceDataResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeviceData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetDeviceDataOutcomeCallable IotClient::GetDeviceDataCallable(const GetDeviceDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceDataOutcome>>();
    GetDeviceDataAsync(
    request,
    [prom](
        const IotClient*,
        const GetDeviceDataRequest&,
        GetDeviceDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetDeviceLogOutcome IotClient::GetDeviceLog(const GetDeviceLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceLogResponse rsp = GetDeviceLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceLogOutcome(rsp);
        else
            return GetDeviceLogOutcome(o.GetError());
    }
    else
    {
        return GetDeviceLogOutcome(outcome.GetError());
    }
}

void IotClient::GetDeviceLogAsync(const GetDeviceLogRequest& request, const GetDeviceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceLogRequest&;
    using Resp = GetDeviceLogResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeviceLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetDeviceLogOutcomeCallable IotClient::GetDeviceLogCallable(const GetDeviceLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceLogOutcome>>();
    GetDeviceLogAsync(
    request,
    [prom](
        const IotClient*,
        const GetDeviceLogRequest&,
        GetDeviceLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetDeviceSignaturesOutcome IotClient::GetDeviceSignatures(const GetDeviceSignaturesRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceSignatures");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceSignaturesResponse rsp = GetDeviceSignaturesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceSignaturesOutcome(rsp);
        else
            return GetDeviceSignaturesOutcome(o.GetError());
    }
    else
    {
        return GetDeviceSignaturesOutcome(outcome.GetError());
    }
}

void IotClient::GetDeviceSignaturesAsync(const GetDeviceSignaturesRequest& request, const GetDeviceSignaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceSignaturesRequest&;
    using Resp = GetDeviceSignaturesResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeviceSignatures", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetDeviceSignaturesOutcomeCallable IotClient::GetDeviceSignaturesCallable(const GetDeviceSignaturesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceSignaturesOutcome>>();
    GetDeviceSignaturesAsync(
    request,
    [prom](
        const IotClient*,
        const GetDeviceSignaturesRequest&,
        GetDeviceSignaturesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetDeviceStatisticsOutcome IotClient::GetDeviceStatistics(const GetDeviceStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceStatisticsResponse rsp = GetDeviceStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceStatisticsOutcome(rsp);
        else
            return GetDeviceStatisticsOutcome(o.GetError());
    }
    else
    {
        return GetDeviceStatisticsOutcome(outcome.GetError());
    }
}

void IotClient::GetDeviceStatisticsAsync(const GetDeviceStatisticsRequest& request, const GetDeviceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceStatisticsRequest&;
    using Resp = GetDeviceStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeviceStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetDeviceStatisticsOutcomeCallable IotClient::GetDeviceStatisticsCallable(const GetDeviceStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceStatisticsOutcome>>();
    GetDeviceStatisticsAsync(
    request,
    [prom](
        const IotClient*,
        const GetDeviceStatisticsRequest&,
        GetDeviceStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetDeviceStatusesOutcome IotClient::GetDeviceStatuses(const GetDeviceStatusesRequest &request)
{
    auto outcome = MakeRequest(request, "GetDeviceStatuses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDeviceStatusesResponse rsp = GetDeviceStatusesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDeviceStatusesOutcome(rsp);
        else
            return GetDeviceStatusesOutcome(o.GetError());
    }
    else
    {
        return GetDeviceStatusesOutcome(outcome.GetError());
    }
}

void IotClient::GetDeviceStatusesAsync(const GetDeviceStatusesRequest& request, const GetDeviceStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDeviceStatusesRequest&;
    using Resp = GetDeviceStatusesResponse;

    DoRequestAsync<Req, Resp>(
        "GetDeviceStatuses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetDeviceStatusesOutcomeCallable IotClient::GetDeviceStatusesCallable(const GetDeviceStatusesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDeviceStatusesOutcome>>();
    GetDeviceStatusesAsync(
    request,
    [prom](
        const IotClient*,
        const GetDeviceStatusesRequest&,
        GetDeviceStatusesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetDevicesOutcome IotClient::GetDevices(const GetDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "GetDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDevicesResponse rsp = GetDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDevicesOutcome(rsp);
        else
            return GetDevicesOutcome(o.GetError());
    }
    else
    {
        return GetDevicesOutcome(outcome.GetError());
    }
}

void IotClient::GetDevicesAsync(const GetDevicesRequest& request, const GetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDevicesRequest&;
    using Resp = GetDevicesResponse;

    DoRequestAsync<Req, Resp>(
        "GetDevices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetDevicesOutcomeCallable IotClient::GetDevicesCallable(const GetDevicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDevicesOutcome>>();
    GetDevicesAsync(
    request,
    [prom](
        const IotClient*,
        const GetDevicesRequest&,
        GetDevicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetProductOutcome IotClient::GetProduct(const GetProductRequest &request)
{
    auto outcome = MakeRequest(request, "GetProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProductResponse rsp = GetProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProductOutcome(rsp);
        else
            return GetProductOutcome(o.GetError());
    }
    else
    {
        return GetProductOutcome(outcome.GetError());
    }
}

void IotClient::GetProductAsync(const GetProductRequest& request, const GetProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetProductRequest&;
    using Resp = GetProductResponse;

    DoRequestAsync<Req, Resp>(
        "GetProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetProductOutcomeCallable IotClient::GetProductCallable(const GetProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetProductOutcome>>();
    GetProductAsync(
    request,
    [prom](
        const IotClient*,
        const GetProductRequest&,
        GetProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetProductsOutcome IotClient::GetProducts(const GetProductsRequest &request)
{
    auto outcome = MakeRequest(request, "GetProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProductsResponse rsp = GetProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProductsOutcome(rsp);
        else
            return GetProductsOutcome(o.GetError());
    }
    else
    {
        return GetProductsOutcome(outcome.GetError());
    }
}

void IotClient::GetProductsAsync(const GetProductsRequest& request, const GetProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetProductsRequest&;
    using Resp = GetProductsResponse;

    DoRequestAsync<Req, Resp>(
        "GetProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetProductsOutcomeCallable IotClient::GetProductsCallable(const GetProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetProductsOutcome>>();
    GetProductsAsync(
    request,
    [prom](
        const IotClient*,
        const GetProductsRequest&,
        GetProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetRuleOutcome IotClient::GetRule(const GetRuleRequest &request)
{
    auto outcome = MakeRequest(request, "GetRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRuleResponse rsp = GetRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRuleOutcome(rsp);
        else
            return GetRuleOutcome(o.GetError());
    }
    else
    {
        return GetRuleOutcome(outcome.GetError());
    }
}

void IotClient::GetRuleAsync(const GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRuleRequest&;
    using Resp = GetRuleResponse;

    DoRequestAsync<Req, Resp>(
        "GetRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetRuleOutcomeCallable IotClient::GetRuleCallable(const GetRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRuleOutcome>>();
    GetRuleAsync(
    request,
    [prom](
        const IotClient*,
        const GetRuleRequest&,
        GetRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetRulesOutcome IotClient::GetRules(const GetRulesRequest &request)
{
    auto outcome = MakeRequest(request, "GetRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRulesResponse rsp = GetRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRulesOutcome(rsp);
        else
            return GetRulesOutcome(o.GetError());
    }
    else
    {
        return GetRulesOutcome(outcome.GetError());
    }
}

void IotClient::GetRulesAsync(const GetRulesRequest& request, const GetRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRulesRequest&;
    using Resp = GetRulesResponse;

    DoRequestAsync<Req, Resp>(
        "GetRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetRulesOutcomeCallable IotClient::GetRulesCallable(const GetRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRulesOutcome>>();
    GetRulesAsync(
    request,
    [prom](
        const IotClient*,
        const GetRulesRequest&,
        GetRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetTopicOutcome IotClient::GetTopic(const GetTopicRequest &request)
{
    auto outcome = MakeRequest(request, "GetTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTopicResponse rsp = GetTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTopicOutcome(rsp);
        else
            return GetTopicOutcome(o.GetError());
    }
    else
    {
        return GetTopicOutcome(outcome.GetError());
    }
}

void IotClient::GetTopicAsync(const GetTopicRequest& request, const GetTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTopicRequest&;
    using Resp = GetTopicResponse;

    DoRequestAsync<Req, Resp>(
        "GetTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetTopicOutcomeCallable IotClient::GetTopicCallable(const GetTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTopicOutcome>>();
    GetTopicAsync(
    request,
    [prom](
        const IotClient*,
        const GetTopicRequest&,
        GetTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::GetTopicsOutcome IotClient::GetTopics(const GetTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "GetTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTopicsResponse rsp = GetTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTopicsOutcome(rsp);
        else
            return GetTopicsOutcome(o.GetError());
    }
    else
    {
        return GetTopicsOutcome(outcome.GetError());
    }
}

void IotClient::GetTopicsAsync(const GetTopicsRequest& request, const GetTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTopicsRequest&;
    using Resp = GetTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "GetTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::GetTopicsOutcomeCallable IotClient::GetTopicsCallable(const GetTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTopicsOutcome>>();
    GetTopicsAsync(
    request,
    [prom](
        const IotClient*,
        const GetTopicsRequest&,
        GetTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::IssueDeviceControlOutcome IotClient::IssueDeviceControl(const IssueDeviceControlRequest &request)
{
    auto outcome = MakeRequest(request, "IssueDeviceControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IssueDeviceControlResponse rsp = IssueDeviceControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IssueDeviceControlOutcome(rsp);
        else
            return IssueDeviceControlOutcome(o.GetError());
    }
    else
    {
        return IssueDeviceControlOutcome(outcome.GetError());
    }
}

void IotClient::IssueDeviceControlAsync(const IssueDeviceControlRequest& request, const IssueDeviceControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IssueDeviceControlRequest&;
    using Resp = IssueDeviceControlResponse;

    DoRequestAsync<Req, Resp>(
        "IssueDeviceControl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::IssueDeviceControlOutcomeCallable IotClient::IssueDeviceControlCallable(const IssueDeviceControlRequest &request)
{
    const auto prom = std::make_shared<std::promise<IssueDeviceControlOutcome>>();
    IssueDeviceControlAsync(
    request,
    [prom](
        const IotClient*,
        const IssueDeviceControlRequest&,
        IssueDeviceControlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::PublishMsgOutcome IotClient::PublishMsg(const PublishMsgRequest &request)
{
    auto outcome = MakeRequest(request, "PublishMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishMsgResponse rsp = PublishMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishMsgOutcome(rsp);
        else
            return PublishMsgOutcome(o.GetError());
    }
    else
    {
        return PublishMsgOutcome(outcome.GetError());
    }
}

void IotClient::PublishMsgAsync(const PublishMsgRequest& request, const PublishMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PublishMsgRequest&;
    using Resp = PublishMsgResponse;

    DoRequestAsync<Req, Resp>(
        "PublishMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::PublishMsgOutcomeCallable IotClient::PublishMsgCallable(const PublishMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishMsgOutcome>>();
    PublishMsgAsync(
    request,
    [prom](
        const IotClient*,
        const PublishMsgRequest&,
        PublishMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::ResetDeviceOutcome IotClient::ResetDevice(const ResetDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDeviceResponse rsp = ResetDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDeviceOutcome(rsp);
        else
            return ResetDeviceOutcome(o.GetError());
    }
    else
    {
        return ResetDeviceOutcome(outcome.GetError());
    }
}

void IotClient::ResetDeviceAsync(const ResetDeviceRequest& request, const ResetDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetDeviceRequest&;
    using Resp = ResetDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ResetDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::ResetDeviceOutcomeCallable IotClient::ResetDeviceCallable(const ResetDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetDeviceOutcome>>();
    ResetDeviceAsync(
    request,
    [prom](
        const IotClient*,
        const ResetDeviceRequest&,
        ResetDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::UnassociateSubDeviceFromGatewayProductOutcome IotClient::UnassociateSubDeviceFromGatewayProduct(const UnassociateSubDeviceFromGatewayProductRequest &request)
{
    auto outcome = MakeRequest(request, "UnassociateSubDeviceFromGatewayProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnassociateSubDeviceFromGatewayProductResponse rsp = UnassociateSubDeviceFromGatewayProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnassociateSubDeviceFromGatewayProductOutcome(rsp);
        else
            return UnassociateSubDeviceFromGatewayProductOutcome(o.GetError());
    }
    else
    {
        return UnassociateSubDeviceFromGatewayProductOutcome(outcome.GetError());
    }
}

void IotClient::UnassociateSubDeviceFromGatewayProductAsync(const UnassociateSubDeviceFromGatewayProductRequest& request, const UnassociateSubDeviceFromGatewayProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnassociateSubDeviceFromGatewayProductRequest&;
    using Resp = UnassociateSubDeviceFromGatewayProductResponse;

    DoRequestAsync<Req, Resp>(
        "UnassociateSubDeviceFromGatewayProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::UnassociateSubDeviceFromGatewayProductOutcomeCallable IotClient::UnassociateSubDeviceFromGatewayProductCallable(const UnassociateSubDeviceFromGatewayProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnassociateSubDeviceFromGatewayProductOutcome>>();
    UnassociateSubDeviceFromGatewayProductAsync(
    request,
    [prom](
        const IotClient*,
        const UnassociateSubDeviceFromGatewayProductRequest&,
        UnassociateSubDeviceFromGatewayProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::UpdateProductOutcome IotClient::UpdateProduct(const UpdateProductRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProductResponse rsp = UpdateProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProductOutcome(rsp);
        else
            return UpdateProductOutcome(o.GetError());
    }
    else
    {
        return UpdateProductOutcome(outcome.GetError());
    }
}

void IotClient::UpdateProductAsync(const UpdateProductRequest& request, const UpdateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProductRequest&;
    using Resp = UpdateProductResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProduct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::UpdateProductOutcomeCallable IotClient::UpdateProductCallable(const UpdateProductRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProductOutcome>>();
    UpdateProductAsync(
    request,
    [prom](
        const IotClient*,
        const UpdateProductRequest&,
        UpdateProductOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IotClient::UpdateRuleOutcome IotClient::UpdateRule(const UpdateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRuleResponse rsp = UpdateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRuleOutcome(rsp);
        else
            return UpdateRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateRuleOutcome(outcome.GetError());
    }
}

void IotClient::UpdateRuleAsync(const UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRuleRequest&;
    using Resp = UpdateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IotClient::UpdateRuleOutcomeCallable IotClient::UpdateRuleCallable(const UpdateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRuleOutcome>>();
    UpdateRuleAsync(
    request,
    [prom](
        const IotClient*,
        const UpdateRuleRequest&,
        UpdateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

