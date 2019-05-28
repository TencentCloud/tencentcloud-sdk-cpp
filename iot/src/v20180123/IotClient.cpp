/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ActivateRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::ActivateRuleOutcomeCallable IotClient::ActivateRuleCallable(const ActivateRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ActivateRuleOutcome()>>(
        [this, request]()
        {
            return this->ActivateRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AddDeviceOutcomeCallable IotClient::AddDeviceCallable(const AddDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddDeviceOutcome()>>(
        [this, request]()
        {
            return this->AddDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AddProductOutcomeCallable IotClient::AddProductCallable(const AddProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddProductOutcome()>>(
        [this, request]()
        {
            return this->AddProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AddRuleOutcomeCallable IotClient::AddRuleCallable(const AddRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddRuleOutcome()>>(
        [this, request]()
        {
            return this->AddRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AddTopicOutcomeCallable IotClient::AddTopicCallable(const AddTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddTopicOutcome()>>(
        [this, request]()
        {
            return this->AddTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppAddUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppAddUserOutcomeCallable IotClient::AppAddUserCallable(const AppAddUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppAddUserOutcome()>>(
        [this, request]()
        {
            return this->AppAddUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppDeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppDeleteDeviceOutcomeCallable IotClient::AppDeleteDeviceCallable(const AppDeleteDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppDeleteDeviceOutcome()>>(
        [this, request]()
        {
            return this->AppDeleteDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppGetDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppGetDeviceOutcomeCallable IotClient::AppGetDeviceCallable(const AppGetDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppGetDeviceOutcome()>>(
        [this, request]()
        {
            return this->AppGetDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppGetDeviceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppGetDeviceDataOutcomeCallable IotClient::AppGetDeviceDataCallable(const AppGetDeviceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppGetDeviceDataOutcome()>>(
        [this, request]()
        {
            return this->AppGetDeviceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppGetDeviceStatuses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppGetDeviceStatusesOutcomeCallable IotClient::AppGetDeviceStatusesCallable(const AppGetDeviceStatusesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppGetDeviceStatusesOutcome()>>(
        [this, request]()
        {
            return this->AppGetDeviceStatuses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppGetDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppGetDevicesOutcomeCallable IotClient::AppGetDevicesCallable(const AppGetDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppGetDevicesOutcome()>>(
        [this, request]()
        {
            return this->AppGetDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppGetToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppGetTokenOutcomeCallable IotClient::AppGetTokenCallable(const AppGetTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppGetTokenOutcome()>>(
        [this, request]()
        {
            return this->AppGetToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppGetUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppGetUserOutcomeCallable IotClient::AppGetUserCallable(const AppGetUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppGetUserOutcome()>>(
        [this, request]()
        {
            return this->AppGetUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppIssueDeviceControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppIssueDeviceControlOutcomeCallable IotClient::AppIssueDeviceControlCallable(const AppIssueDeviceControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppIssueDeviceControlOutcome()>>(
        [this, request]()
        {
            return this->AppIssueDeviceControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppResetPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppResetPasswordOutcomeCallable IotClient::AppResetPasswordCallable(const AppResetPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppResetPasswordOutcome()>>(
        [this, request]()
        {
            return this->AppResetPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppSecureAddDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppSecureAddDeviceOutcomeCallable IotClient::AppSecureAddDeviceCallable(const AppSecureAddDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppSecureAddDeviceOutcome()>>(
        [this, request]()
        {
            return this->AppSecureAddDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppUpdateDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppUpdateDeviceOutcomeCallable IotClient::AppUpdateDeviceCallable(const AppUpdateDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppUpdateDeviceOutcome()>>(
        [this, request]()
        {
            return this->AppUpdateDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AppUpdateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AppUpdateUserOutcomeCallable IotClient::AppUpdateUserCallable(const AppUpdateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AppUpdateUserOutcome()>>(
        [this, request]()
        {
            return this->AppUpdateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateSubDeviceToGatewayProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::AssociateSubDeviceToGatewayProductOutcomeCallable IotClient::AssociateSubDeviceToGatewayProductCallable(const AssociateSubDeviceToGatewayProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateSubDeviceToGatewayProductOutcome()>>(
        [this, request]()
        {
            return this->AssociateSubDeviceToGatewayProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeactivateRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::DeactivateRuleOutcomeCallable IotClient::DeactivateRuleCallable(const DeactivateRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeactivateRuleOutcome()>>(
        [this, request]()
        {
            return this->DeactivateRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::DeleteDeviceOutcomeCallable IotClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceOutcome()>>(
        [this, request]()
        {
            return this->DeleteDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::DeleteProductOutcomeCallable IotClient::DeleteProductCallable(const DeleteProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProductOutcome()>>(
        [this, request]()
        {
            return this->DeleteProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::DeleteRuleOutcomeCallable IotClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::DeleteTopicOutcomeCallable IotClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDataHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetDataHistoryOutcomeCallable IotClient::GetDataHistoryCallable(const GetDataHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDataHistoryOutcome()>>(
        [this, request]()
        {
            return this->GetDataHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDebugLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetDebugLogOutcomeCallable IotClient::GetDebugLogCallable(const GetDebugLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDebugLogOutcome()>>(
        [this, request]()
        {
            return this->GetDebugLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetDeviceOutcomeCallable IotClient::GetDeviceCallable(const GetDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceOutcome()>>(
        [this, request]()
        {
            return this->GetDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeviceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetDeviceDataOutcomeCallable IotClient::GetDeviceDataCallable(const GetDeviceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceDataOutcome()>>(
        [this, request]()
        {
            return this->GetDeviceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeviceLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetDeviceLogOutcomeCallable IotClient::GetDeviceLogCallable(const GetDeviceLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceLogOutcome()>>(
        [this, request]()
        {
            return this->GetDeviceLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeviceSignatures(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetDeviceSignaturesOutcomeCallable IotClient::GetDeviceSignaturesCallable(const GetDeviceSignaturesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceSignaturesOutcome()>>(
        [this, request]()
        {
            return this->GetDeviceSignatures(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeviceStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetDeviceStatisticsOutcomeCallable IotClient::GetDeviceStatisticsCallable(const GetDeviceStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceStatisticsOutcome()>>(
        [this, request]()
        {
            return this->GetDeviceStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDeviceStatuses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetDeviceStatusesOutcomeCallable IotClient::GetDeviceStatusesCallable(const GetDeviceStatusesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDeviceStatusesOutcome()>>(
        [this, request]()
        {
            return this->GetDeviceStatuses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetDevicesOutcomeCallable IotClient::GetDevicesCallable(const GetDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDevicesOutcome()>>(
        [this, request]()
        {
            return this->GetDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetProductOutcomeCallable IotClient::GetProductCallable(const GetProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetProductOutcome()>>(
        [this, request]()
        {
            return this->GetProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetProductsOutcomeCallable IotClient::GetProductsCallable(const GetProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetProductsOutcome()>>(
        [this, request]()
        {
            return this->GetProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetRuleOutcomeCallable IotClient::GetRuleCallable(const GetRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRuleOutcome()>>(
        [this, request]()
        {
            return this->GetRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetRulesOutcomeCallable IotClient::GetRulesCallable(const GetRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRulesOutcome()>>(
        [this, request]()
        {
            return this->GetRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetTopicOutcomeCallable IotClient::GetTopicCallable(const GetTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTopicOutcome()>>(
        [this, request]()
        {
            return this->GetTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::GetTopicsOutcomeCallable IotClient::GetTopicsCallable(const GetTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTopicsOutcome()>>(
        [this, request]()
        {
            return this->GetTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IssueDeviceControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::IssueDeviceControlOutcomeCallable IotClient::IssueDeviceControlCallable(const IssueDeviceControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IssueDeviceControlOutcome()>>(
        [this, request]()
        {
            return this->IssueDeviceControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::PublishMsgOutcomeCallable IotClient::PublishMsgCallable(const PublishMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishMsgOutcome()>>(
        [this, request]()
        {
            return this->PublishMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::ResetDeviceOutcomeCallable IotClient::ResetDeviceCallable(const ResetDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetDeviceOutcome()>>(
        [this, request]()
        {
            return this->ResetDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnassociateSubDeviceFromGatewayProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::UnassociateSubDeviceFromGatewayProductOutcomeCallable IotClient::UnassociateSubDeviceFromGatewayProductCallable(const UnassociateSubDeviceFromGatewayProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnassociateSubDeviceFromGatewayProductOutcome()>>(
        [this, request]()
        {
            return this->UnassociateSubDeviceFromGatewayProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::UpdateProductOutcomeCallable IotClient::UpdateProductCallable(const UpdateProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateProductOutcome()>>(
        [this, request]()
        {
            return this->UpdateProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotClient::UpdateRuleOutcomeCallable IotClient::UpdateRuleCallable(const UpdateRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRuleOutcome()>>(
        [this, request]()
        {
            return this->UpdateRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

