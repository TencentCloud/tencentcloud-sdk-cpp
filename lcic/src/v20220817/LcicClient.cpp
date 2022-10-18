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

#include <tencentcloud/lcic/v20220817/LcicClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lcic::V20220817;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-08-17";
    const string ENDPOINT = "lcic.tencentcloudapi.com";
}

LcicClient::LcicClient(const Credential &credential, const string &region) :
    LcicClient(credential, region, ClientProfile())
{
}

LcicClient::LcicClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LcicClient::BindDocumentToRoomOutcome LcicClient::BindDocumentToRoom(const BindDocumentToRoomRequest &request)
{
    auto outcome = MakeRequest(request, "BindDocumentToRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDocumentToRoomResponse rsp = BindDocumentToRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDocumentToRoomOutcome(rsp);
        else
            return BindDocumentToRoomOutcome(o.GetError());
    }
    else
    {
        return BindDocumentToRoomOutcome(outcome.GetError());
    }
}

void LcicClient::BindDocumentToRoomAsync(const BindDocumentToRoomRequest& request, const BindDocumentToRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDocumentToRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::BindDocumentToRoomOutcomeCallable LcicClient::BindDocumentToRoomCallable(const BindDocumentToRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindDocumentToRoomOutcome()>>(
        [this, request]()
        {
            return this->BindDocumentToRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::CreateDocumentOutcome LcicClient::CreateDocument(const CreateDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocumentResponse rsp = CreateDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocumentOutcome(rsp);
        else
            return CreateDocumentOutcome(o.GetError());
    }
    else
    {
        return CreateDocumentOutcome(outcome.GetError());
    }
}

void LcicClient::CreateDocumentAsync(const CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::CreateDocumentOutcomeCallable LcicClient::CreateDocumentCallable(const CreateDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDocumentOutcome()>>(
        [this, request]()
        {
            return this->CreateDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::CreateRoomOutcome LcicClient::CreateRoom(const CreateRoomRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoomResponse rsp = CreateRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoomOutcome(rsp);
        else
            return CreateRoomOutcome(o.GetError());
    }
    else
    {
        return CreateRoomOutcome(outcome.GetError());
    }
}

void LcicClient::CreateRoomAsync(const CreateRoomRequest& request, const CreateRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::CreateRoomOutcomeCallable LcicClient::CreateRoomCallable(const CreateRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoomOutcome()>>(
        [this, request]()
        {
            return this->CreateRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::CreateSupervisorOutcome LcicClient::CreateSupervisor(const CreateSupervisorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSupervisor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSupervisorResponse rsp = CreateSupervisorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSupervisorOutcome(rsp);
        else
            return CreateSupervisorOutcome(o.GetError());
    }
    else
    {
        return CreateSupervisorOutcome(outcome.GetError());
    }
}

void LcicClient::CreateSupervisorAsync(const CreateSupervisorRequest& request, const CreateSupervisorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSupervisor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::CreateSupervisorOutcomeCallable LcicClient::CreateSupervisorCallable(const CreateSupervisorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSupervisorOutcome()>>(
        [this, request]()
        {
            return this->CreateSupervisor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DeleteRoomOutcome LcicClient::DeleteRoom(const DeleteRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoomResponse rsp = DeleteRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoomOutcome(rsp);
        else
            return DeleteRoomOutcome(o.GetError());
    }
    else
    {
        return DeleteRoomOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteRoomAsync(const DeleteRoomRequest& request, const DeleteRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteRoomOutcomeCallable LcicClient::DeleteRoomCallable(const DeleteRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoomOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeRoomOutcome LcicClient::DescribeRoom(const DescribeRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomResponse rsp = DescribeRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomOutcome(rsp);
        else
            return DescribeRoomOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRoomAsync(const DescribeRoomRequest& request, const DescribeRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeRoomOutcomeCallable LcicClient::DescribeRoomCallable(const DescribeRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeRoomStatisticsOutcome LcicClient::DescribeRoomStatistics(const DescribeRoomStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomStatisticsResponse rsp = DescribeRoomStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomStatisticsOutcome(rsp);
        else
            return DescribeRoomStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomStatisticsOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRoomStatisticsAsync(const DescribeRoomStatisticsRequest& request, const DescribeRoomStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoomStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeRoomStatisticsOutcomeCallable LcicClient::DescribeRoomStatisticsCallable(const DescribeRoomStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoomStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeUserOutcome LcicClient::DescribeUser(const DescribeUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResponse rsp = DescribeUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserOutcome(rsp);
        else
            return DescribeUserOutcome(o.GetError());
    }
    else
    {
        return DescribeUserOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeUserOutcomeCallable LcicClient::DescribeUserCallable(const DescribeUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::LoginOriginIdOutcome LcicClient::LoginOriginId(const LoginOriginIdRequest &request)
{
    auto outcome = MakeRequest(request, "LoginOriginId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginOriginIdResponse rsp = LoginOriginIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginOriginIdOutcome(rsp);
        else
            return LoginOriginIdOutcome(o.GetError());
    }
    else
    {
        return LoginOriginIdOutcome(outcome.GetError());
    }
}

void LcicClient::LoginOriginIdAsync(const LoginOriginIdRequest& request, const LoginOriginIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LoginOriginId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::LoginOriginIdOutcomeCallable LcicClient::LoginOriginIdCallable(const LoginOriginIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LoginOriginIdOutcome()>>(
        [this, request]()
        {
            return this->LoginOriginId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::LoginUserOutcome LcicClient::LoginUser(const LoginUserRequest &request)
{
    auto outcome = MakeRequest(request, "LoginUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginUserResponse rsp = LoginUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginUserOutcome(rsp);
        else
            return LoginUserOutcome(o.GetError());
    }
    else
    {
        return LoginUserOutcome(outcome.GetError());
    }
}

void LcicClient::LoginUserAsync(const LoginUserRequest& request, const LoginUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LoginUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::LoginUserOutcomeCallable LcicClient::LoginUserCallable(const LoginUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LoginUserOutcome()>>(
        [this, request]()
        {
            return this->LoginUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::ModifyAppOutcome LcicClient::ModifyApp(const ModifyAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppResponse rsp = ModifyAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppOutcome(rsp);
        else
            return ModifyAppOutcome(o.GetError());
    }
    else
    {
        return ModifyAppOutcome(outcome.GetError());
    }
}

void LcicClient::ModifyAppAsync(const ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::ModifyAppOutcomeCallable LcicClient::ModifyAppCallable(const ModifyAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAppOutcome()>>(
        [this, request]()
        {
            return this->ModifyApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::RegisterUserOutcome LcicClient::RegisterUser(const RegisterUserRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterUserResponse rsp = RegisterUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterUserOutcome(rsp);
        else
            return RegisterUserOutcome(o.GetError());
    }
    else
    {
        return RegisterUserOutcome(outcome.GetError());
    }
}

void LcicClient::RegisterUserAsync(const RegisterUserRequest& request, const RegisterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::RegisterUserOutcomeCallable LcicClient::RegisterUserCallable(const RegisterUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterUserOutcome()>>(
        [this, request]()
        {
            return this->RegisterUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::SetAppCustomContentOutcome LcicClient::SetAppCustomContent(const SetAppCustomContentRequest &request)
{
    auto outcome = MakeRequest(request, "SetAppCustomContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAppCustomContentResponse rsp = SetAppCustomContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAppCustomContentOutcome(rsp);
        else
            return SetAppCustomContentOutcome(o.GetError());
    }
    else
    {
        return SetAppCustomContentOutcome(outcome.GetError());
    }
}

void LcicClient::SetAppCustomContentAsync(const SetAppCustomContentRequest& request, const SetAppCustomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetAppCustomContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::SetAppCustomContentOutcomeCallable LcicClient::SetAppCustomContentCallable(const SetAppCustomContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetAppCustomContentOutcome()>>(
        [this, request]()
        {
            return this->SetAppCustomContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::UnbindDocumentFromRoomOutcome LcicClient::UnbindDocumentFromRoom(const UnbindDocumentFromRoomRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindDocumentFromRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindDocumentFromRoomResponse rsp = UnbindDocumentFromRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindDocumentFromRoomOutcome(rsp);
        else
            return UnbindDocumentFromRoomOutcome(o.GetError());
    }
    else
    {
        return UnbindDocumentFromRoomOutcome(outcome.GetError());
    }
}

void LcicClient::UnbindDocumentFromRoomAsync(const UnbindDocumentFromRoomRequest& request, const UnbindDocumentFromRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindDocumentFromRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::UnbindDocumentFromRoomOutcomeCallable LcicClient::UnbindDocumentFromRoomCallable(const UnbindDocumentFromRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindDocumentFromRoomOutcome()>>(
        [this, request]()
        {
            return this->UnbindDocumentFromRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

