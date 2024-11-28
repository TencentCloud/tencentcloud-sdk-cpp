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

#include <tencentcloud/bi/v20220105/BiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bi::V20220105;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-05";
    const string ENDPOINT = "bi.tencentcloudapi.com";
}

BiClient::BiClient(const Credential &credential, const string &region) :
    BiClient(credential, region, ClientProfile())
{
}

BiClient::BiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BiClient::ApplyEmbedIntervalOutcome BiClient::ApplyEmbedInterval(const ApplyEmbedIntervalRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyEmbedInterval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyEmbedIntervalResponse rsp = ApplyEmbedIntervalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyEmbedIntervalOutcome(rsp);
        else
            return ApplyEmbedIntervalOutcome(o.GetError());
    }
    else
    {
        return ApplyEmbedIntervalOutcome(outcome.GetError());
    }
}

void BiClient::ApplyEmbedIntervalAsync(const ApplyEmbedIntervalRequest& request, const ApplyEmbedIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyEmbedInterval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::ApplyEmbedIntervalOutcomeCallable BiClient::ApplyEmbedIntervalCallable(const ApplyEmbedIntervalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyEmbedIntervalOutcome()>>(
        [this, request]()
        {
            return this->ApplyEmbedInterval(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::CreateDatasourceOutcome BiClient::CreateDatasource(const CreateDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatasourceResponse rsp = CreateDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatasourceOutcome(rsp);
        else
            return CreateDatasourceOutcome(o.GetError());
    }
    else
    {
        return CreateDatasourceOutcome(outcome.GetError());
    }
}

void BiClient::CreateDatasourceAsync(const CreateDatasourceRequest& request, const CreateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatasource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::CreateDatasourceOutcomeCallable BiClient::CreateDatasourceCallable(const CreateDatasourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatasourceOutcome()>>(
        [this, request]()
        {
            return this->CreateDatasource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::CreateDatasourceCloudOutcome BiClient::CreateDatasourceCloud(const CreateDatasourceCloudRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatasourceCloud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatasourceCloudResponse rsp = CreateDatasourceCloudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatasourceCloudOutcome(rsp);
        else
            return CreateDatasourceCloudOutcome(o.GetError());
    }
    else
    {
        return CreateDatasourceCloudOutcome(outcome.GetError());
    }
}

void BiClient::CreateDatasourceCloudAsync(const CreateDatasourceCloudRequest& request, const CreateDatasourceCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatasourceCloud(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::CreateDatasourceCloudOutcomeCallable BiClient::CreateDatasourceCloudCallable(const CreateDatasourceCloudRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatasourceCloudOutcome()>>(
        [this, request]()
        {
            return this->CreateDatasourceCloud(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::CreateEmbedTokenOutcome BiClient::CreateEmbedToken(const CreateEmbedTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmbedToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmbedTokenResponse rsp = CreateEmbedTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmbedTokenOutcome(rsp);
        else
            return CreateEmbedTokenOutcome(o.GetError());
    }
    else
    {
        return CreateEmbedTokenOutcome(outcome.GetError());
    }
}

void BiClient::CreateEmbedTokenAsync(const CreateEmbedTokenRequest& request, const CreateEmbedTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmbedToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::CreateEmbedTokenOutcomeCallable BiClient::CreateEmbedTokenCallable(const CreateEmbedTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmbedTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateEmbedToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::CreateProjectOutcome BiClient::CreateProject(const CreateProjectRequest &request)
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

void BiClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::CreateProjectOutcomeCallable BiClient::CreateProjectCallable(const CreateProjectRequest &request)
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

BiClient::CreateUserRoleOutcome BiClient::CreateUserRole(const CreateUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserRoleResponse rsp = CreateUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserRoleOutcome(rsp);
        else
            return CreateUserRoleOutcome(o.GetError());
    }
    else
    {
        return CreateUserRoleOutcome(outcome.GetError());
    }
}

void BiClient::CreateUserRoleAsync(const CreateUserRoleRequest& request, const CreateUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::CreateUserRoleOutcomeCallable BiClient::CreateUserRoleCallable(const CreateUserRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateUserRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::CreateUserRoleProjectOutcome BiClient::CreateUserRoleProject(const CreateUserRoleProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserRoleProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserRoleProjectResponse rsp = CreateUserRoleProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserRoleProjectOutcome(rsp);
        else
            return CreateUserRoleProjectOutcome(o.GetError());
    }
    else
    {
        return CreateUserRoleProjectOutcome(outcome.GetError());
    }
}

void BiClient::CreateUserRoleProjectAsync(const CreateUserRoleProjectRequest& request, const CreateUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserRoleProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::CreateUserRoleProjectOutcomeCallable BiClient::CreateUserRoleProjectCallable(const CreateUserRoleProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserRoleProjectOutcome()>>(
        [this, request]()
        {
            return this->CreateUserRoleProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DeleteDatasourceOutcome BiClient::DeleteDatasource(const DeleteDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDatasourceResponse rsp = DeleteDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDatasourceOutcome(rsp);
        else
            return DeleteDatasourceOutcome(o.GetError());
    }
    else
    {
        return DeleteDatasourceOutcome(outcome.GetError());
    }
}

void BiClient::DeleteDatasourceAsync(const DeleteDatasourceRequest& request, const DeleteDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDatasource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DeleteDatasourceOutcomeCallable BiClient::DeleteDatasourceCallable(const DeleteDatasourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDatasourceOutcome()>>(
        [this, request]()
        {
            return this->DeleteDatasource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DeleteProjectOutcome BiClient::DeleteProject(const DeleteProjectRequest &request)
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

void BiClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DeleteProjectOutcomeCallable BiClient::DeleteProjectCallable(const DeleteProjectRequest &request)
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

BiClient::DeleteUserRoleOutcome BiClient::DeleteUserRole(const DeleteUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserRoleResponse rsp = DeleteUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserRoleOutcome(rsp);
        else
            return DeleteUserRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteUserRoleOutcome(outcome.GetError());
    }
}

void BiClient::DeleteUserRoleAsync(const DeleteUserRoleRequest& request, const DeleteUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DeleteUserRoleOutcomeCallable BiClient::DeleteUserRoleCallable(const DeleteUserRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserRoleOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DeleteUserRoleProjectOutcome BiClient::DeleteUserRoleProject(const DeleteUserRoleProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserRoleProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserRoleProjectResponse rsp = DeleteUserRoleProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserRoleProjectOutcome(rsp);
        else
            return DeleteUserRoleProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteUserRoleProjectOutcome(outcome.GetError());
    }
}

void BiClient::DeleteUserRoleProjectAsync(const DeleteUserRoleProjectRequest& request, const DeleteUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserRoleProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DeleteUserRoleProjectOutcomeCallable BiClient::DeleteUserRoleProjectCallable(const DeleteUserRoleProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserRoleProjectOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserRoleProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DescribeDatasourceListOutcome BiClient::DescribeDatasourceList(const DescribeDatasourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasourceListResponse rsp = DescribeDatasourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasourceListOutcome(rsp);
        else
            return DescribeDatasourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasourceListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeDatasourceListAsync(const DescribeDatasourceListRequest& request, const DescribeDatasourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatasourceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DescribeDatasourceListOutcomeCallable BiClient::DescribeDatasourceListCallable(const DescribeDatasourceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatasourceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatasourceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DescribePageWidgetListOutcome BiClient::DescribePageWidgetList(const DescribePageWidgetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePageWidgetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePageWidgetListResponse rsp = DescribePageWidgetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePageWidgetListOutcome(rsp);
        else
            return DescribePageWidgetListOutcome(o.GetError());
    }
    else
    {
        return DescribePageWidgetListOutcome(outcome.GetError());
    }
}

void BiClient::DescribePageWidgetListAsync(const DescribePageWidgetListRequest& request, const DescribePageWidgetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePageWidgetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DescribePageWidgetListOutcomeCallable BiClient::DescribePageWidgetListCallable(const DescribePageWidgetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePageWidgetListOutcome()>>(
        [this, request]()
        {
            return this->DescribePageWidgetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DescribeProjectInfoOutcome BiClient::DescribeProjectInfo(const DescribeProjectInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectInfoResponse rsp = DescribeProjectInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectInfoOutcome(rsp);
        else
            return DescribeProjectInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectInfoOutcome(outcome.GetError());
    }
}

void BiClient::DescribeProjectInfoAsync(const DescribeProjectInfoRequest& request, const DescribeProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DescribeProjectInfoOutcomeCallable BiClient::DescribeProjectInfoCallable(const DescribeProjectInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DescribeProjectListOutcome BiClient::DescribeProjectList(const DescribeProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectListResponse rsp = DescribeProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectListOutcome(rsp);
        else
            return DescribeProjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeProjectListAsync(const DescribeProjectListRequest& request, const DescribeProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DescribeProjectListOutcomeCallable BiClient::DescribeProjectListCallable(const DescribeProjectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DescribeUserProjectListOutcome BiClient::DescribeUserProjectList(const DescribeUserProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserProjectListResponse rsp = DescribeUserProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserProjectListOutcome(rsp);
        else
            return DescribeUserProjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserProjectListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeUserProjectListAsync(const DescribeUserProjectListRequest& request, const DescribeUserProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserProjectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DescribeUserProjectListOutcomeCallable BiClient::DescribeUserProjectListCallable(const DescribeUserProjectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserProjectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserProjectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DescribeUserRoleListOutcome BiClient::DescribeUserRoleList(const DescribeUserRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserRoleListResponse rsp = DescribeUserRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserRoleListOutcome(rsp);
        else
            return DescribeUserRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserRoleListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeUserRoleListAsync(const DescribeUserRoleListRequest& request, const DescribeUserRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserRoleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DescribeUserRoleListOutcomeCallable BiClient::DescribeUserRoleListCallable(const DescribeUserRoleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserRoleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserRoleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::DescribeUserRoleProjectListOutcome BiClient::DescribeUserRoleProjectList(const DescribeUserRoleProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserRoleProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserRoleProjectListResponse rsp = DescribeUserRoleProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserRoleProjectListOutcome(rsp);
        else
            return DescribeUserRoleProjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserRoleProjectListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeUserRoleProjectListAsync(const DescribeUserRoleProjectListRequest& request, const DescribeUserRoleProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserRoleProjectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::DescribeUserRoleProjectListOutcomeCallable BiClient::DescribeUserRoleProjectListCallable(const DescribeUserRoleProjectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserRoleProjectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserRoleProjectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::ExportScreenPageOutcome BiClient::ExportScreenPage(const ExportScreenPageRequest &request)
{
    auto outcome = MakeRequest(request, "ExportScreenPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportScreenPageResponse rsp = ExportScreenPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportScreenPageOutcome(rsp);
        else
            return ExportScreenPageOutcome(o.GetError());
    }
    else
    {
        return ExportScreenPageOutcome(outcome.GetError());
    }
}

void BiClient::ExportScreenPageAsync(const ExportScreenPageRequest& request, const ExportScreenPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportScreenPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::ExportScreenPageOutcomeCallable BiClient::ExportScreenPageCallable(const ExportScreenPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportScreenPageOutcome()>>(
        [this, request]()
        {
            return this->ExportScreenPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::ModifyDatasourceOutcome BiClient::ModifyDatasource(const ModifyDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatasourceResponse rsp = ModifyDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatasourceOutcome(rsp);
        else
            return ModifyDatasourceOutcome(o.GetError());
    }
    else
    {
        return ModifyDatasourceOutcome(outcome.GetError());
    }
}

void BiClient::ModifyDatasourceAsync(const ModifyDatasourceRequest& request, const ModifyDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatasource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::ModifyDatasourceOutcomeCallable BiClient::ModifyDatasourceCallable(const ModifyDatasourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatasourceOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatasource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::ModifyDatasourceCloudOutcome BiClient::ModifyDatasourceCloud(const ModifyDatasourceCloudRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatasourceCloud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatasourceCloudResponse rsp = ModifyDatasourceCloudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatasourceCloudOutcome(rsp);
        else
            return ModifyDatasourceCloudOutcome(o.GetError());
    }
    else
    {
        return ModifyDatasourceCloudOutcome(outcome.GetError());
    }
}

void BiClient::ModifyDatasourceCloudAsync(const ModifyDatasourceCloudRequest& request, const ModifyDatasourceCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatasourceCloud(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::ModifyDatasourceCloudOutcomeCallable BiClient::ModifyDatasourceCloudCallable(const ModifyDatasourceCloudRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatasourceCloudOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatasourceCloud(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::ModifyProjectOutcome BiClient::ModifyProject(const ModifyProjectRequest &request)
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

void BiClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::ModifyProjectOutcomeCallable BiClient::ModifyProjectCallable(const ModifyProjectRequest &request)
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

BiClient::ModifyUserRoleOutcome BiClient::ModifyUserRole(const ModifyUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserRoleResponse rsp = ModifyUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserRoleOutcome(rsp);
        else
            return ModifyUserRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyUserRoleOutcome(outcome.GetError());
    }
}

void BiClient::ModifyUserRoleAsync(const ModifyUserRoleRequest& request, const ModifyUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::ModifyUserRoleOutcomeCallable BiClient::ModifyUserRoleCallable(const ModifyUserRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserRoleOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BiClient::ModifyUserRoleProjectOutcome BiClient::ModifyUserRoleProject(const ModifyUserRoleProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserRoleProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserRoleProjectResponse rsp = ModifyUserRoleProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserRoleProjectOutcome(rsp);
        else
            return ModifyUserRoleProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyUserRoleProjectOutcome(outcome.GetError());
    }
}

void BiClient::ModifyUserRoleProjectAsync(const ModifyUserRoleProjectRequest& request, const ModifyUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserRoleProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BiClient::ModifyUserRoleProjectOutcomeCallable BiClient::ModifyUserRoleProjectCallable(const ModifyUserRoleProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserRoleProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserRoleProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

