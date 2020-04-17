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

#include <tencentcloud/solar/v20181011/SolarClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Solar::V20181011;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-10-11";
    const string ENDPOINT = "solar.tencentcloudapi.com";
}

SolarClient::SolarClient(const Credential &credential, const string &region) :
    SolarClient(credential, region, ClientProfile())
{
}

SolarClient::SolarClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SolarClient::CheckStaffChUserOutcome SolarClient::CheckStaffChUser(const CheckStaffChUserRequest &request)
{
    auto outcome = MakeRequest(request, "CheckStaffChUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckStaffChUserResponse rsp = CheckStaffChUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckStaffChUserOutcome(rsp);
        else
            return CheckStaffChUserOutcome(o.GetError());
    }
    else
    {
        return CheckStaffChUserOutcome(outcome.GetError());
    }
}

void SolarClient::CheckStaffChUserAsync(const CheckStaffChUserRequest& request, const CheckStaffChUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckStaffChUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::CheckStaffChUserOutcomeCallable SolarClient::CheckStaffChUserCallable(const CheckStaffChUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckStaffChUserOutcome()>>(
        [this, request]()
        {
            return this->CheckStaffChUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::CopyActivityChannelOutcome SolarClient::CopyActivityChannel(const CopyActivityChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CopyActivityChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyActivityChannelResponse rsp = CopyActivityChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyActivityChannelOutcome(rsp);
        else
            return CopyActivityChannelOutcome(o.GetError());
    }
    else
    {
        return CopyActivityChannelOutcome(outcome.GetError());
    }
}

void SolarClient::CopyActivityChannelAsync(const CopyActivityChannelRequest& request, const CopyActivityChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyActivityChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::CopyActivityChannelOutcomeCallable SolarClient::CopyActivityChannelCallable(const CopyActivityChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyActivityChannelOutcome()>>(
        [this, request]()
        {
            return this->CopyActivityChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::CreateProjectOutcome SolarClient::CreateProject(const CreateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectResponse rsp = CreateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectOutcome(rsp);
        else
            return CreateProjectOutcome(o.GetError());
    }
    else
    {
        return CreateProjectOutcome(outcome.GetError());
    }
}

void SolarClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::CreateProjectOutcomeCallable SolarClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProjectOutcome()>>(
        [this, request]()
        {
            return this->CreateProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::CreateSubProjectOutcome SolarClient::CreateSubProject(const CreateSubProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubProjectResponse rsp = CreateSubProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubProjectOutcome(rsp);
        else
            return CreateSubProjectOutcome(o.GetError());
    }
    else
    {
        return CreateSubProjectOutcome(outcome.GetError());
    }
}

void SolarClient::CreateSubProjectAsync(const CreateSubProjectRequest& request, const CreateSubProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::CreateSubProjectOutcomeCallable SolarClient::CreateSubProjectCallable(const CreateSubProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubProjectOutcome()>>(
        [this, request]()
        {
            return this->CreateSubProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::DeleteProjectOutcome SolarClient::DeleteProject(const DeleteProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectResponse rsp = DeleteProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectOutcome(rsp);
        else
            return DeleteProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectOutcome(outcome.GetError());
    }
}

void SolarClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::DeleteProjectOutcomeCallable SolarClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProjectOutcome()>>(
        [this, request]()
        {
            return this->DeleteProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::DescribeCustomerOutcome SolarClient::DescribeCustomer(const DescribeCustomerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerResponse rsp = DescribeCustomerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerOutcome(rsp);
        else
            return DescribeCustomerOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerOutcome(outcome.GetError());
    }
}

void SolarClient::DescribeCustomerAsync(const DescribeCustomerRequest& request, const DescribeCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::DescribeCustomerOutcomeCallable SolarClient::DescribeCustomerCallable(const DescribeCustomerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomerOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::DescribeCustomersOutcome SolarClient::DescribeCustomers(const DescribeCustomersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomersResponse rsp = DescribeCustomersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomersOutcome(rsp);
        else
            return DescribeCustomersOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomersOutcome(outcome.GetError());
    }
}

void SolarClient::DescribeCustomersAsync(const DescribeCustomersRequest& request, const DescribeCustomersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::DescribeCustomersOutcomeCallable SolarClient::DescribeCustomersCallable(const DescribeCustomersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomersOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::DescribeProjectOutcome SolarClient::DescribeProject(const DescribeProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectResponse rsp = DescribeProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectOutcome(rsp);
        else
            return DescribeProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectOutcome(outcome.GetError());
    }
}

void SolarClient::DescribeProjectAsync(const DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::DescribeProjectOutcomeCallable SolarClient::DescribeProjectCallable(const DescribeProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::DescribeProjectStockOutcome SolarClient::DescribeProjectStock(const DescribeProjectStockRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectStock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectStockResponse rsp = DescribeProjectStockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectStockOutcome(rsp);
        else
            return DescribeProjectStockOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectStockOutcome(outcome.GetError());
    }
}

void SolarClient::DescribeProjectStockAsync(const DescribeProjectStockRequest& request, const DescribeProjectStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectStock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::DescribeProjectStockOutcomeCallable SolarClient::DescribeProjectStockCallable(const DescribeProjectStockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectStockOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectStock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::DescribeProjectsOutcome SolarClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void SolarClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::DescribeProjectsOutcomeCallable SolarClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::DescribeResourceTemplateHeadersOutcome SolarClient::DescribeResourceTemplateHeaders(const DescribeResourceTemplateHeadersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTemplateHeaders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTemplateHeadersResponse rsp = DescribeResourceTemplateHeadersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTemplateHeadersOutcome(rsp);
        else
            return DescribeResourceTemplateHeadersOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTemplateHeadersOutcome(outcome.GetError());
    }
}

void SolarClient::DescribeResourceTemplateHeadersAsync(const DescribeResourceTemplateHeadersRequest& request, const DescribeResourceTemplateHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceTemplateHeaders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::DescribeResourceTemplateHeadersOutcomeCallable SolarClient::DescribeResourceTemplateHeadersCallable(const DescribeResourceTemplateHeadersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceTemplateHeadersOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceTemplateHeaders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::DescribeSubProjectOutcome SolarClient::DescribeSubProject(const DescribeSubProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubProjectResponse rsp = DescribeSubProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubProjectOutcome(rsp);
        else
            return DescribeSubProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeSubProjectOutcome(outcome.GetError());
    }
}

void SolarClient::DescribeSubProjectAsync(const DescribeSubProjectRequest& request, const DescribeSubProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::DescribeSubProjectOutcomeCallable SolarClient::DescribeSubProjectCallable(const DescribeSubProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::ExpireFlowOutcome SolarClient::ExpireFlow(const ExpireFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ExpireFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExpireFlowResponse rsp = ExpireFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExpireFlowOutcome(rsp);
        else
            return ExpireFlowOutcome(o.GetError());
    }
    else
    {
        return ExpireFlowOutcome(outcome.GetError());
    }
}

void SolarClient::ExpireFlowAsync(const ExpireFlowRequest& request, const ExpireFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExpireFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::ExpireFlowOutcomeCallable SolarClient::ExpireFlowCallable(const ExpireFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExpireFlowOutcome()>>(
        [this, request]()
        {
            return this->ExpireFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::ModifyProjectOutcome SolarClient::ModifyProject(const ModifyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectResponse rsp = ModifyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectOutcome(rsp);
        else
            return ModifyProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectOutcome(outcome.GetError());
    }
}

void SolarClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::ModifyProjectOutcomeCallable SolarClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::OffLineProjectOutcome SolarClient::OffLineProject(const OffLineProjectRequest &request)
{
    auto outcome = MakeRequest(request, "OffLineProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OffLineProjectResponse rsp = OffLineProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OffLineProjectOutcome(rsp);
        else
            return OffLineProjectOutcome(o.GetError());
    }
    else
    {
        return OffLineProjectOutcome(outcome.GetError());
    }
}

void SolarClient::OffLineProjectAsync(const OffLineProjectRequest& request, const OffLineProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OffLineProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::OffLineProjectOutcomeCallable SolarClient::OffLineProjectCallable(const OffLineProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OffLineProjectOutcome()>>(
        [this, request]()
        {
            return this->OffLineProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::ReplenishProjectStockOutcome SolarClient::ReplenishProjectStock(const ReplenishProjectStockRequest &request)
{
    auto outcome = MakeRequest(request, "ReplenishProjectStock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplenishProjectStockResponse rsp = ReplenishProjectStockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplenishProjectStockOutcome(rsp);
        else
            return ReplenishProjectStockOutcome(o.GetError());
    }
    else
    {
        return ReplenishProjectStockOutcome(outcome.GetError());
    }
}

void SolarClient::ReplenishProjectStockAsync(const ReplenishProjectStockRequest& request, const ReplenishProjectStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplenishProjectStock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::ReplenishProjectStockOutcomeCallable SolarClient::ReplenishProjectStockCallable(const ReplenishProjectStockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplenishProjectStockOutcome()>>(
        [this, request]()
        {
            return this->ReplenishProjectStock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SolarClient::SendWxTouchTaskOutcome SolarClient::SendWxTouchTask(const SendWxTouchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SendWxTouchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendWxTouchTaskResponse rsp = SendWxTouchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendWxTouchTaskOutcome(rsp);
        else
            return SendWxTouchTaskOutcome(o.GetError());
    }
    else
    {
        return SendWxTouchTaskOutcome(outcome.GetError());
    }
}

void SolarClient::SendWxTouchTaskAsync(const SendWxTouchTaskRequest& request, const SendWxTouchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendWxTouchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SolarClient::SendWxTouchTaskOutcomeCallable SolarClient::SendWxTouchTaskCallable(const SendWxTouchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendWxTouchTaskOutcome()>>(
        [this, request]()
        {
            return this->SendWxTouchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

