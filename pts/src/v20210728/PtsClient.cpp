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

#include <tencentcloud/pts/v20210728/PtsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Pts::V20210728;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-07-28";
    const string ENDPOINT = "pts.tencentcloudapi.com";
}

PtsClient::PtsClient(const Credential &credential, const string &region) :
    PtsClient(credential, region, ClientProfile())
{
}

PtsClient::PtsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PtsClient::AbortCronJobsOutcome PtsClient::AbortCronJobs(const AbortCronJobsRequest &request)
{
    auto outcome = MakeRequest(request, "AbortCronJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AbortCronJobsResponse rsp = AbortCronJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AbortCronJobsOutcome(rsp);
        else
            return AbortCronJobsOutcome(o.GetError());
    }
    else
    {
        return AbortCronJobsOutcome(outcome.GetError());
    }
}

void PtsClient::AbortCronJobsAsync(const AbortCronJobsRequest& request, const AbortCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AbortCronJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::AbortCronJobsOutcomeCallable PtsClient::AbortCronJobsCallable(const AbortCronJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AbortCronJobsOutcome()>>(
        [this, request]()
        {
            return this->AbortCronJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::AbortJobOutcome PtsClient::AbortJob(const AbortJobRequest &request)
{
    auto outcome = MakeRequest(request, "AbortJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AbortJobResponse rsp = AbortJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AbortJobOutcome(rsp);
        else
            return AbortJobOutcome(o.GetError());
    }
    else
    {
        return AbortJobOutcome(outcome.GetError());
    }
}

void PtsClient::AbortJobAsync(const AbortJobRequest& request, const AbortJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AbortJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::AbortJobOutcomeCallable PtsClient::AbortJobCallable(const AbortJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AbortJobOutcome()>>(
        [this, request]()
        {
            return this->AbortJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::AdjustJobSpeedOutcome PtsClient::AdjustJobSpeed(const AdjustJobSpeedRequest &request)
{
    auto outcome = MakeRequest(request, "AdjustJobSpeed");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AdjustJobSpeedResponse rsp = AdjustJobSpeedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AdjustJobSpeedOutcome(rsp);
        else
            return AdjustJobSpeedOutcome(o.GetError());
    }
    else
    {
        return AdjustJobSpeedOutcome(outcome.GetError());
    }
}

void PtsClient::AdjustJobSpeedAsync(const AdjustJobSpeedRequest& request, const AdjustJobSpeedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AdjustJobSpeed(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::AdjustJobSpeedOutcomeCallable PtsClient::AdjustJobSpeedCallable(const AdjustJobSpeedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AdjustJobSpeedOutcome()>>(
        [this, request]()
        {
            return this->AdjustJobSpeed(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::CopyScenarioOutcome PtsClient::CopyScenario(const CopyScenarioRequest &request)
{
    auto outcome = MakeRequest(request, "CopyScenario");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyScenarioResponse rsp = CopyScenarioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyScenarioOutcome(rsp);
        else
            return CopyScenarioOutcome(o.GetError());
    }
    else
    {
        return CopyScenarioOutcome(outcome.GetError());
    }
}

void PtsClient::CopyScenarioAsync(const CopyScenarioRequest& request, const CopyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyScenario(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::CopyScenarioOutcomeCallable PtsClient::CopyScenarioCallable(const CopyScenarioRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyScenarioOutcome()>>(
        [this, request]()
        {
            return this->CopyScenario(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::CreateAlertChannelOutcome PtsClient::CreateAlertChannel(const CreateAlertChannelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlertChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlertChannelResponse rsp = CreateAlertChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlertChannelOutcome(rsp);
        else
            return CreateAlertChannelOutcome(o.GetError());
    }
    else
    {
        return CreateAlertChannelOutcome(outcome.GetError());
    }
}

void PtsClient::CreateAlertChannelAsync(const CreateAlertChannelRequest& request, const CreateAlertChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlertChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::CreateAlertChannelOutcomeCallable PtsClient::CreateAlertChannelCallable(const CreateAlertChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlertChannelOutcome()>>(
        [this, request]()
        {
            return this->CreateAlertChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::CreateCronJobOutcome PtsClient::CreateCronJob(const CreateCronJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCronJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCronJobResponse rsp = CreateCronJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCronJobOutcome(rsp);
        else
            return CreateCronJobOutcome(o.GetError());
    }
    else
    {
        return CreateCronJobOutcome(outcome.GetError());
    }
}

void PtsClient::CreateCronJobAsync(const CreateCronJobRequest& request, const CreateCronJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCronJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::CreateCronJobOutcomeCallable PtsClient::CreateCronJobCallable(const CreateCronJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCronJobOutcome()>>(
        [this, request]()
        {
            return this->CreateCronJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::CreateEnvironmentOutcome PtsClient::CreateEnvironment(const CreateEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnvironmentResponse rsp = CreateEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnvironmentOutcome(rsp);
        else
            return CreateEnvironmentOutcome(o.GetError());
    }
    else
    {
        return CreateEnvironmentOutcome(outcome.GetError());
    }
}

void PtsClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::CreateEnvironmentOutcomeCallable PtsClient::CreateEnvironmentCallable(const CreateEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->CreateEnvironment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::CreateFileOutcome PtsClient::CreateFile(const CreateFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileResponse rsp = CreateFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileOutcome(rsp);
        else
            return CreateFileOutcome(o.GetError());
    }
    else
    {
        return CreateFileOutcome(outcome.GetError());
    }
}

void PtsClient::CreateFileAsync(const CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::CreateFileOutcomeCallable PtsClient::CreateFileCallable(const CreateFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFileOutcome()>>(
        [this, request]()
        {
            return this->CreateFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::CreateProjectOutcome PtsClient::CreateProject(const CreateProjectRequest &request)
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

void PtsClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::CreateProjectOutcomeCallable PtsClient::CreateProjectCallable(const CreateProjectRequest &request)
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

PtsClient::CreateScenarioOutcome PtsClient::CreateScenario(const CreateScenarioRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScenario");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScenarioResponse rsp = CreateScenarioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScenarioOutcome(rsp);
        else
            return CreateScenarioOutcome(o.GetError());
    }
    else
    {
        return CreateScenarioOutcome(outcome.GetError());
    }
}

void PtsClient::CreateScenarioAsync(const CreateScenarioRequest& request, const CreateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScenario(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::CreateScenarioOutcomeCallable PtsClient::CreateScenarioCallable(const CreateScenarioRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScenarioOutcome()>>(
        [this, request]()
        {
            return this->CreateScenario(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DeleteAlertChannelOutcome PtsClient::DeleteAlertChannel(const DeleteAlertChannelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlertChannel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlertChannelResponse rsp = DeleteAlertChannelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlertChannelOutcome(rsp);
        else
            return DeleteAlertChannelOutcome(o.GetError());
    }
    else
    {
        return DeleteAlertChannelOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteAlertChannelAsync(const DeleteAlertChannelRequest& request, const DeleteAlertChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlertChannel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DeleteAlertChannelOutcomeCallable PtsClient::DeleteAlertChannelCallable(const DeleteAlertChannelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlertChannelOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlertChannel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DeleteCronJobsOutcome PtsClient::DeleteCronJobs(const DeleteCronJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCronJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCronJobsResponse rsp = DeleteCronJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCronJobsOutcome(rsp);
        else
            return DeleteCronJobsOutcome(o.GetError());
    }
    else
    {
        return DeleteCronJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteCronJobsAsync(const DeleteCronJobsRequest& request, const DeleteCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCronJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DeleteCronJobsOutcomeCallable PtsClient::DeleteCronJobsCallable(const DeleteCronJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCronJobsOutcome()>>(
        [this, request]()
        {
            return this->DeleteCronJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DeleteEnvironmentsOutcome PtsClient::DeleteEnvironments(const DeleteEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEnvironmentsResponse rsp = DeleteEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEnvironmentsOutcome(rsp);
        else
            return DeleteEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DeleteEnvironmentsOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteEnvironmentsAsync(const DeleteEnvironmentsRequest& request, const DeleteEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DeleteEnvironmentsOutcomeCallable PtsClient::DeleteEnvironmentsCallable(const DeleteEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DeleteEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DeleteFilesOutcome PtsClient::DeleteFiles(const DeleteFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFilesResponse rsp = DeleteFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFilesOutcome(rsp);
        else
            return DeleteFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteFilesOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteFilesAsync(const DeleteFilesRequest& request, const DeleteFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DeleteFilesOutcomeCallable PtsClient::DeleteFilesCallable(const DeleteFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFilesOutcome()>>(
        [this, request]()
        {
            return this->DeleteFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DeleteJobsOutcome PtsClient::DeleteJobs(const DeleteJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobsResponse rsp = DeleteJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobsOutcome(rsp);
        else
            return DeleteJobsOutcome(o.GetError());
    }
    else
    {
        return DeleteJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteJobsAsync(const DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DeleteJobsOutcomeCallable PtsClient::DeleteJobsCallable(const DeleteJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteJobsOutcome()>>(
        [this, request]()
        {
            return this->DeleteJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DeleteProjectsOutcome PtsClient::DeleteProjects(const DeleteProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectsResponse rsp = DeleteProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectsOutcome(rsp);
        else
            return DeleteProjectsOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectsOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteProjectsAsync(const DeleteProjectsRequest& request, const DeleteProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DeleteProjectsOutcomeCallable PtsClient::DeleteProjectsCallable(const DeleteProjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProjectsOutcome()>>(
        [this, request]()
        {
            return this->DeleteProjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DeleteScenariosOutcome PtsClient::DeleteScenarios(const DeleteScenariosRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScenarios");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScenariosResponse rsp = DeleteScenariosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScenariosOutcome(rsp);
        else
            return DeleteScenariosOutcome(o.GetError());
    }
    else
    {
        return DeleteScenariosOutcome(outcome.GetError());
    }
}

void PtsClient::DeleteScenariosAsync(const DeleteScenariosRequest& request, const DeleteScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScenarios(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DeleteScenariosOutcomeCallable PtsClient::DeleteScenariosCallable(const DeleteScenariosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScenariosOutcome()>>(
        [this, request]()
        {
            return this->DeleteScenarios(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeAlertChannelsOutcome PtsClient::DescribeAlertChannels(const DescribeAlertChannelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlertChannels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlertChannelsResponse rsp = DescribeAlertChannelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlertChannelsOutcome(rsp);
        else
            return DescribeAlertChannelsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlertChannelsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeAlertChannelsAsync(const DescribeAlertChannelsRequest& request, const DescribeAlertChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlertChannels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeAlertChannelsOutcomeCallable PtsClient::DescribeAlertChannelsCallable(const DescribeAlertChannelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlertChannelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlertChannels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeAlertRecordsOutcome PtsClient::DescribeAlertRecords(const DescribeAlertRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlertRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlertRecordsResponse rsp = DescribeAlertRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlertRecordsOutcome(rsp);
        else
            return DescribeAlertRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlertRecordsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeAlertRecordsAsync(const DescribeAlertRecordsRequest& request, const DescribeAlertRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlertRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeAlertRecordsOutcomeCallable PtsClient::DescribeAlertRecordsCallable(const DescribeAlertRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlertRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlertRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeAvailableMetricsOutcome PtsClient::DescribeAvailableMetrics(const DescribeAvailableMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableMetricsResponse rsp = DescribeAvailableMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableMetricsOutcome(rsp);
        else
            return DescribeAvailableMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableMetricsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeAvailableMetricsAsync(const DescribeAvailableMetricsRequest& request, const DescribeAvailableMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeAvailableMetricsOutcomeCallable PtsClient::DescribeAvailableMetricsCallable(const DescribeAvailableMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeCheckSummaryOutcome PtsClient::DescribeCheckSummary(const DescribeCheckSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckSummaryResponse rsp = DescribeCheckSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckSummaryOutcome(rsp);
        else
            return DescribeCheckSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckSummaryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeCheckSummaryAsync(const DescribeCheckSummaryRequest& request, const DescribeCheckSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCheckSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeCheckSummaryOutcomeCallable PtsClient::DescribeCheckSummaryCallable(const DescribeCheckSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCheckSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeCheckSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeCronJobsOutcome PtsClient::DescribeCronJobs(const DescribeCronJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCronJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCronJobsResponse rsp = DescribeCronJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCronJobsOutcome(rsp);
        else
            return DescribeCronJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeCronJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeCronJobsAsync(const DescribeCronJobsRequest& request, const DescribeCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCronJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeCronJobsOutcomeCallable PtsClient::DescribeCronJobsCallable(const DescribeCronJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCronJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCronJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeEnvironmentsOutcome PtsClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentsResponse rsp = DescribeEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentsOutcome(rsp);
        else
            return DescribeEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeEnvironmentsOutcomeCallable PtsClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeErrorSummaryOutcome PtsClient::DescribeErrorSummary(const DescribeErrorSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeErrorSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeErrorSummaryResponse rsp = DescribeErrorSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeErrorSummaryOutcome(rsp);
        else
            return DescribeErrorSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeErrorSummaryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeErrorSummaryAsync(const DescribeErrorSummaryRequest& request, const DescribeErrorSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeErrorSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeErrorSummaryOutcomeCallable PtsClient::DescribeErrorSummaryCallable(const DescribeErrorSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeErrorSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeErrorSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeFilesOutcome PtsClient::DescribeFiles(const DescribeFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFilesResponse rsp = DescribeFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFilesOutcome(rsp);
        else
            return DescribeFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeFilesOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeFilesAsync(const DescribeFilesRequest& request, const DescribeFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeFilesOutcomeCallable PtsClient::DescribeFilesCallable(const DescribeFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeJobsOutcome PtsClient::DescribeJobs(const DescribeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobsResponse rsp = DescribeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobsOutcome(rsp);
        else
            return DescribeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeJobsOutcomeCallable PtsClient::DescribeJobsCallable(const DescribeJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeLabelValuesOutcome PtsClient::DescribeLabelValues(const DescribeLabelValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLabelValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLabelValuesResponse rsp = DescribeLabelValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLabelValuesOutcome(rsp);
        else
            return DescribeLabelValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeLabelValuesOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeLabelValuesAsync(const DescribeLabelValuesRequest& request, const DescribeLabelValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLabelValues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeLabelValuesOutcomeCallable PtsClient::DescribeLabelValuesCallable(const DescribeLabelValuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLabelValuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLabelValues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeMetricLabelWithValuesOutcome PtsClient::DescribeMetricLabelWithValues(const DescribeMetricLabelWithValuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMetricLabelWithValues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMetricLabelWithValuesResponse rsp = DescribeMetricLabelWithValuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMetricLabelWithValuesOutcome(rsp);
        else
            return DescribeMetricLabelWithValuesOutcome(o.GetError());
    }
    else
    {
        return DescribeMetricLabelWithValuesOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeMetricLabelWithValuesAsync(const DescribeMetricLabelWithValuesRequest& request, const DescribeMetricLabelWithValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMetricLabelWithValues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeMetricLabelWithValuesOutcomeCallable PtsClient::DescribeMetricLabelWithValuesCallable(const DescribeMetricLabelWithValuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMetricLabelWithValuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMetricLabelWithValues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeNormalLogsOutcome PtsClient::DescribeNormalLogs(const DescribeNormalLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNormalLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNormalLogsResponse rsp = DescribeNormalLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNormalLogsOutcome(rsp);
        else
            return DescribeNormalLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeNormalLogsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeNormalLogsAsync(const DescribeNormalLogsRequest& request, const DescribeNormalLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNormalLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeNormalLogsOutcomeCallable PtsClient::DescribeNormalLogsCallable(const DescribeNormalLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNormalLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNormalLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeProjectsOutcome PtsClient::DescribeProjects(const DescribeProjectsRequest &request)
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

void PtsClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeProjectsOutcomeCallable PtsClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
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

PtsClient::DescribeRegionsOutcome PtsClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeRegionsOutcomeCallable PtsClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeRequestSummaryOutcome PtsClient::DescribeRequestSummary(const DescribeRequestSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRequestSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRequestSummaryResponse rsp = DescribeRequestSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRequestSummaryOutcome(rsp);
        else
            return DescribeRequestSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeRequestSummaryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeRequestSummaryAsync(const DescribeRequestSummaryRequest& request, const DescribeRequestSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRequestSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeRequestSummaryOutcomeCallable PtsClient::DescribeRequestSummaryCallable(const DescribeRequestSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRequestSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeRequestSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeSampleBatchQueryOutcome PtsClient::DescribeSampleBatchQuery(const DescribeSampleBatchQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleBatchQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleBatchQueryResponse rsp = DescribeSampleBatchQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleBatchQueryOutcome(rsp);
        else
            return DescribeSampleBatchQueryOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleBatchQueryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleBatchQueryAsync(const DescribeSampleBatchQueryRequest& request, const DescribeSampleBatchQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSampleBatchQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeSampleBatchQueryOutcomeCallable PtsClient::DescribeSampleBatchQueryCallable(const DescribeSampleBatchQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSampleBatchQueryOutcome()>>(
        [this, request]()
        {
            return this->DescribeSampleBatchQuery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeSampleLogsOutcome PtsClient::DescribeSampleLogs(const DescribeSampleLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleLogsResponse rsp = DescribeSampleLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleLogsOutcome(rsp);
        else
            return DescribeSampleLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleLogsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleLogsAsync(const DescribeSampleLogsRequest& request, const DescribeSampleLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSampleLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeSampleLogsOutcomeCallable PtsClient::DescribeSampleLogsCallable(const DescribeSampleLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSampleLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSampleLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeSampleMatrixBatchQueryOutcome PtsClient::DescribeSampleMatrixBatchQuery(const DescribeSampleMatrixBatchQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleMatrixBatchQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleMatrixBatchQueryResponse rsp = DescribeSampleMatrixBatchQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleMatrixBatchQueryOutcome(rsp);
        else
            return DescribeSampleMatrixBatchQueryOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleMatrixBatchQueryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleMatrixBatchQueryAsync(const DescribeSampleMatrixBatchQueryRequest& request, const DescribeSampleMatrixBatchQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSampleMatrixBatchQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeSampleMatrixBatchQueryOutcomeCallable PtsClient::DescribeSampleMatrixBatchQueryCallable(const DescribeSampleMatrixBatchQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSampleMatrixBatchQueryOutcome()>>(
        [this, request]()
        {
            return this->DescribeSampleMatrixBatchQuery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeSampleMatrixQueryOutcome PtsClient::DescribeSampleMatrixQuery(const DescribeSampleMatrixQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleMatrixQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleMatrixQueryResponse rsp = DescribeSampleMatrixQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleMatrixQueryOutcome(rsp);
        else
            return DescribeSampleMatrixQueryOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleMatrixQueryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleMatrixQueryAsync(const DescribeSampleMatrixQueryRequest& request, const DescribeSampleMatrixQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSampleMatrixQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeSampleMatrixQueryOutcomeCallable PtsClient::DescribeSampleMatrixQueryCallable(const DescribeSampleMatrixQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSampleMatrixQueryOutcome()>>(
        [this, request]()
        {
            return this->DescribeSampleMatrixQuery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeSampleQueryOutcome PtsClient::DescribeSampleQuery(const DescribeSampleQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleQueryResponse rsp = DescribeSampleQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleQueryOutcome(rsp);
        else
            return DescribeSampleQueryOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleQueryOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeSampleQueryAsync(const DescribeSampleQueryRequest& request, const DescribeSampleQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSampleQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeSampleQueryOutcomeCallable PtsClient::DescribeSampleQueryCallable(const DescribeSampleQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSampleQueryOutcome()>>(
        [this, request]()
        {
            return this->DescribeSampleQuery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeScenarioWithJobsOutcome PtsClient::DescribeScenarioWithJobs(const DescribeScenarioWithJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScenarioWithJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScenarioWithJobsResponse rsp = DescribeScenarioWithJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScenarioWithJobsOutcome(rsp);
        else
            return DescribeScenarioWithJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeScenarioWithJobsOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeScenarioWithJobsAsync(const DescribeScenarioWithJobsRequest& request, const DescribeScenarioWithJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScenarioWithJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeScenarioWithJobsOutcomeCallable PtsClient::DescribeScenarioWithJobsCallable(const DescribeScenarioWithJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScenarioWithJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScenarioWithJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::DescribeScenariosOutcome PtsClient::DescribeScenarios(const DescribeScenariosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScenarios");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScenariosResponse rsp = DescribeScenariosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScenariosOutcome(rsp);
        else
            return DescribeScenariosOutcome(o.GetError());
    }
    else
    {
        return DescribeScenariosOutcome(outcome.GetError());
    }
}

void PtsClient::DescribeScenariosAsync(const DescribeScenariosRequest& request, const DescribeScenariosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScenarios(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::DescribeScenariosOutcomeCallable PtsClient::DescribeScenariosCallable(const DescribeScenariosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScenariosOutcome()>>(
        [this, request]()
        {
            return this->DescribeScenarios(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::GenerateTmpKeyOutcome PtsClient::GenerateTmpKey(const GenerateTmpKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateTmpKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateTmpKeyResponse rsp = GenerateTmpKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateTmpKeyOutcome(rsp);
        else
            return GenerateTmpKeyOutcome(o.GetError());
    }
    else
    {
        return GenerateTmpKeyOutcome(outcome.GetError());
    }
}

void PtsClient::GenerateTmpKeyAsync(const GenerateTmpKeyRequest& request, const GenerateTmpKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateTmpKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::GenerateTmpKeyOutcomeCallable PtsClient::GenerateTmpKeyCallable(const GenerateTmpKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateTmpKeyOutcome()>>(
        [this, request]()
        {
            return this->GenerateTmpKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::RestartCronJobsOutcome PtsClient::RestartCronJobs(const RestartCronJobsRequest &request)
{
    auto outcome = MakeRequest(request, "RestartCronJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartCronJobsResponse rsp = RestartCronJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartCronJobsOutcome(rsp);
        else
            return RestartCronJobsOutcome(o.GetError());
    }
    else
    {
        return RestartCronJobsOutcome(outcome.GetError());
    }
}

void PtsClient::RestartCronJobsAsync(const RestartCronJobsRequest& request, const RestartCronJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartCronJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::RestartCronJobsOutcomeCallable PtsClient::RestartCronJobsCallable(const RestartCronJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartCronJobsOutcome()>>(
        [this, request]()
        {
            return this->RestartCronJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::StartJobOutcome PtsClient::StartJob(const StartJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartJobResponse rsp = StartJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartJobOutcome(rsp);
        else
            return StartJobOutcome(o.GetError());
    }
    else
    {
        return StartJobOutcome(outcome.GetError());
    }
}

void PtsClient::StartJobAsync(const StartJobRequest& request, const StartJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::StartJobOutcomeCallable PtsClient::StartJobCallable(const StartJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartJobOutcome()>>(
        [this, request]()
        {
            return this->StartJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::UpdateCronJobOutcome PtsClient::UpdateCronJob(const UpdateCronJobRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCronJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCronJobResponse rsp = UpdateCronJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCronJobOutcome(rsp);
        else
            return UpdateCronJobOutcome(o.GetError());
    }
    else
    {
        return UpdateCronJobOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateCronJobAsync(const UpdateCronJobRequest& request, const UpdateCronJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCronJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::UpdateCronJobOutcomeCallable PtsClient::UpdateCronJobCallable(const UpdateCronJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCronJobOutcome()>>(
        [this, request]()
        {
            return this->UpdateCronJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::UpdateEnvironmentOutcome PtsClient::UpdateEnvironment(const UpdateEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEnvironmentResponse rsp = UpdateEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEnvironmentOutcome(rsp);
        else
            return UpdateEnvironmentOutcome(o.GetError());
    }
    else
    {
        return UpdateEnvironmentOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateEnvironmentAsync(const UpdateEnvironmentRequest& request, const UpdateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::UpdateEnvironmentOutcomeCallable PtsClient::UpdateEnvironmentCallable(const UpdateEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->UpdateEnvironment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::UpdateFileScenarioRelationOutcome PtsClient::UpdateFileScenarioRelation(const UpdateFileScenarioRelationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFileScenarioRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFileScenarioRelationResponse rsp = UpdateFileScenarioRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFileScenarioRelationOutcome(rsp);
        else
            return UpdateFileScenarioRelationOutcome(o.GetError());
    }
    else
    {
        return UpdateFileScenarioRelationOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateFileScenarioRelationAsync(const UpdateFileScenarioRelationRequest& request, const UpdateFileScenarioRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFileScenarioRelation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::UpdateFileScenarioRelationOutcomeCallable PtsClient::UpdateFileScenarioRelationCallable(const UpdateFileScenarioRelationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFileScenarioRelationOutcome()>>(
        [this, request]()
        {
            return this->UpdateFileScenarioRelation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::UpdateJobOutcome PtsClient::UpdateJob(const UpdateJobRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateJobResponse rsp = UpdateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateJobOutcome(rsp);
        else
            return UpdateJobOutcome(o.GetError());
    }
    else
    {
        return UpdateJobOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateJobAsync(const UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::UpdateJobOutcomeCallable PtsClient::UpdateJobCallable(const UpdateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateJobOutcome()>>(
        [this, request]()
        {
            return this->UpdateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::UpdateProjectOutcome PtsClient::UpdateProject(const UpdateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProjectResponse rsp = UpdateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProjectOutcome(rsp);
        else
            return UpdateProjectOutcome(o.GetError());
    }
    else
    {
        return UpdateProjectOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::UpdateProjectOutcomeCallable PtsClient::UpdateProjectCallable(const UpdateProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateProjectOutcome()>>(
        [this, request]()
        {
            return this->UpdateProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PtsClient::UpdateScenarioOutcome PtsClient::UpdateScenario(const UpdateScenarioRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateScenario");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateScenarioResponse rsp = UpdateScenarioResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateScenarioOutcome(rsp);
        else
            return UpdateScenarioOutcome(o.GetError());
    }
    else
    {
        return UpdateScenarioOutcome(outcome.GetError());
    }
}

void PtsClient::UpdateScenarioAsync(const UpdateScenarioRequest& request, const UpdateScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateScenario(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PtsClient::UpdateScenarioOutcomeCallable PtsClient::UpdateScenarioCallable(const UpdateScenarioRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateScenarioOutcome()>>(
        [this, request]()
        {
            return this->UpdateScenario(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

