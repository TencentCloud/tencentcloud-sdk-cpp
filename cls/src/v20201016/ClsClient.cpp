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

#include <tencentcloud/cls/v20201016/ClsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cls::V20201016;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-16";
    const string ENDPOINT = "cls.tencentcloudapi.com";
}

ClsClient::ClsClient(const Credential &credential, const string &region) :
    ClsClient(credential, region, ClientProfile())
{
}

ClsClient::ClsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ClsClient::ApplyConfigToMachineGroupOutcome ClsClient::ApplyConfigToMachineGroup(const ApplyConfigToMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyConfigToMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyConfigToMachineGroupResponse rsp = ApplyConfigToMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyConfigToMachineGroupOutcome(rsp);
        else
            return ApplyConfigToMachineGroupOutcome(o.GetError());
    }
    else
    {
        return ApplyConfigToMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::ApplyConfigToMachineGroupAsync(const ApplyConfigToMachineGroupRequest& request, const ApplyConfigToMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyConfigToMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ApplyConfigToMachineGroupOutcomeCallable ClsClient::ApplyConfigToMachineGroupCallable(const ApplyConfigToMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyConfigToMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->ApplyConfigToMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateAlarmOutcome ClsClient::CreateAlarm(const CreateAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmResponse rsp = CreateAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmOutcome(rsp);
        else
            return CreateAlarmOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAlarmAsync(const CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlarm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateAlarmOutcomeCallable ClsClient::CreateAlarmCallable(const CreateAlarmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlarmOutcome()>>(
        [this, request]()
        {
            return this->CreateAlarm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateAlarmNoticeOutcome ClsClient::CreateAlarmNotice(const CreateAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmNoticeResponse rsp = CreateAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmNoticeOutcome(rsp);
        else
            return CreateAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmNoticeOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAlarmNoticeAsync(const CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAlarmNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateAlarmNoticeOutcomeCallable ClsClient::CreateAlarmNoticeCallable(const CreateAlarmNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAlarmNoticeOutcome()>>(
        [this, request]()
        {
            return this->CreateAlarmNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateAsyncContextTaskOutcome ClsClient::CreateAsyncContextTask(const CreateAsyncContextTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsyncContextTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsyncContextTaskResponse rsp = CreateAsyncContextTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsyncContextTaskOutcome(rsp);
        else
            return CreateAsyncContextTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAsyncContextTaskOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAsyncContextTaskAsync(const CreateAsyncContextTaskRequest& request, const CreateAsyncContextTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAsyncContextTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateAsyncContextTaskOutcomeCallable ClsClient::CreateAsyncContextTaskCallable(const CreateAsyncContextTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAsyncContextTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAsyncContextTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateAsyncSearchTaskOutcome ClsClient::CreateAsyncSearchTask(const CreateAsyncSearchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsyncSearchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsyncSearchTaskResponse rsp = CreateAsyncSearchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsyncSearchTaskOutcome(rsp);
        else
            return CreateAsyncSearchTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAsyncSearchTaskOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAsyncSearchTaskAsync(const CreateAsyncSearchTaskRequest& request, const CreateAsyncSearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAsyncSearchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateAsyncSearchTaskOutcomeCallable ClsClient::CreateAsyncSearchTaskCallable(const CreateAsyncSearchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAsyncSearchTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAsyncSearchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateConfigOutcome ClsClient::CreateConfig(const CreateConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigResponse rsp = CreateConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigOutcome(rsp);
        else
            return CreateConfigOutcome(o.GetError());
    }
    else
    {
        return CreateConfigOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConfigAsync(const CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateConfigOutcomeCallable ClsClient::CreateConfigCallable(const CreateConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateConsumerOutcome ClsClient::CreateConsumer(const CreateConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerResponse rsp = CreateConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerOutcome(rsp);
        else
            return CreateConsumerOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConsumerAsync(const CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateConsumerOutcomeCallable ClsClient::CreateConsumerCallable(const CreateConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsumerOutcome()>>(
        [this, request]()
        {
            return this->CreateConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateExportOutcome ClsClient::CreateExport(const CreateExportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExportResponse rsp = CreateExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExportOutcome(rsp);
        else
            return CreateExportOutcome(o.GetError());
    }
    else
    {
        return CreateExportOutcome(outcome.GetError());
    }
}

void ClsClient::CreateExportAsync(const CreateExportRequest& request, const CreateExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateExportOutcomeCallable ClsClient::CreateExportCallable(const CreateExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExportOutcome()>>(
        [this, request]()
        {
            return this->CreateExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateIndexOutcome ClsClient::CreateIndex(const CreateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIndexResponse rsp = CreateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIndexOutcome(rsp);
        else
            return CreateIndexOutcome(o.GetError());
    }
    else
    {
        return CreateIndexOutcome(outcome.GetError());
    }
}

void ClsClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateIndexOutcomeCallable ClsClient::CreateIndexCallable(const CreateIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIndexOutcome()>>(
        [this, request]()
        {
            return this->CreateIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateLogsetOutcome ClsClient::CreateLogset(const CreateLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogsetResponse rsp = CreateLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogsetOutcome(rsp);
        else
            return CreateLogsetOutcome(o.GetError());
    }
    else
    {
        return CreateLogsetOutcome(outcome.GetError());
    }
}

void ClsClient::CreateLogsetAsync(const CreateLogsetRequest& request, const CreateLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateLogsetOutcomeCallable ClsClient::CreateLogsetCallable(const CreateLogsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogsetOutcome()>>(
        [this, request]()
        {
            return this->CreateLogset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateMachineGroupOutcome ClsClient::CreateMachineGroup(const CreateMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMachineGroupResponse rsp = CreateMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMachineGroupOutcome(rsp);
        else
            return CreateMachineGroupOutcome(o.GetError());
    }
    else
    {
        return CreateMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::CreateMachineGroupAsync(const CreateMachineGroupRequest& request, const CreateMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateMachineGroupOutcomeCallable ClsClient::CreateMachineGroupCallable(const CreateMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateShipperOutcome ClsClient::CreateShipper(const CreateShipperRequest &request)
{
    auto outcome = MakeRequest(request, "CreateShipper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateShipperResponse rsp = CreateShipperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateShipperOutcome(rsp);
        else
            return CreateShipperOutcome(o.GetError());
    }
    else
    {
        return CreateShipperOutcome(outcome.GetError());
    }
}

void ClsClient::CreateShipperAsync(const CreateShipperRequest& request, const CreateShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateShipper(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateShipperOutcomeCallable ClsClient::CreateShipperCallable(const CreateShipperRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateShipperOutcome()>>(
        [this, request]()
        {
            return this->CreateShipper(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::CreateTopicOutcome ClsClient::CreateTopic(const CreateTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicResponse rsp = CreateTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicOutcome(rsp);
        else
            return CreateTopicOutcome(o.GetError());
    }
    else
    {
        return CreateTopicOutcome(outcome.GetError());
    }
}

void ClsClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::CreateTopicOutcomeCallable ClsClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteAlarmOutcome ClsClient::DeleteAlarm(const DeleteAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmResponse rsp = DeleteAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmOutcome(rsp);
        else
            return DeleteAlarmOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAlarmAsync(const DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlarm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteAlarmOutcomeCallable ClsClient::DeleteAlarmCallable(const DeleteAlarmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlarmOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlarm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteAlarmNoticeOutcome ClsClient::DeleteAlarmNotice(const DeleteAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmNoticeResponse rsp = DeleteAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmNoticeOutcome(rsp);
        else
            return DeleteAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmNoticeOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAlarmNoticeAsync(const DeleteAlarmNoticeRequest& request, const DeleteAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAlarmNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteAlarmNoticeOutcomeCallable ClsClient::DeleteAlarmNoticeCallable(const DeleteAlarmNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAlarmNoticeOutcome()>>(
        [this, request]()
        {
            return this->DeleteAlarmNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteAsyncContextTaskOutcome ClsClient::DeleteAsyncContextTask(const DeleteAsyncContextTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAsyncContextTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAsyncContextTaskResponse rsp = DeleteAsyncContextTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAsyncContextTaskOutcome(rsp);
        else
            return DeleteAsyncContextTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteAsyncContextTaskOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAsyncContextTaskAsync(const DeleteAsyncContextTaskRequest& request, const DeleteAsyncContextTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAsyncContextTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteAsyncContextTaskOutcomeCallable ClsClient::DeleteAsyncContextTaskCallable(const DeleteAsyncContextTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAsyncContextTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteAsyncContextTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteAsyncSearchTaskOutcome ClsClient::DeleteAsyncSearchTask(const DeleteAsyncSearchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAsyncSearchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAsyncSearchTaskResponse rsp = DeleteAsyncSearchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAsyncSearchTaskOutcome(rsp);
        else
            return DeleteAsyncSearchTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteAsyncSearchTaskOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAsyncSearchTaskAsync(const DeleteAsyncSearchTaskRequest& request, const DeleteAsyncSearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAsyncSearchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteAsyncSearchTaskOutcomeCallable ClsClient::DeleteAsyncSearchTaskCallable(const DeleteAsyncSearchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAsyncSearchTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteAsyncSearchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteConfigOutcome ClsClient::DeleteConfig(const DeleteConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigResponse rsp = DeleteConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigOutcome(rsp);
        else
            return DeleteConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConfigAsync(const DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteConfigOutcomeCallable ClsClient::DeleteConfigCallable(const DeleteConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteConfigFromMachineGroupOutcome ClsClient::DeleteConfigFromMachineGroup(const DeleteConfigFromMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigFromMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigFromMachineGroupResponse rsp = DeleteConfigFromMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigFromMachineGroupOutcome(rsp);
        else
            return DeleteConfigFromMachineGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigFromMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConfigFromMachineGroupAsync(const DeleteConfigFromMachineGroupRequest& request, const DeleteConfigFromMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConfigFromMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteConfigFromMachineGroupOutcomeCallable ClsClient::DeleteConfigFromMachineGroupCallable(const DeleteConfigFromMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConfigFromMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteConfigFromMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteConsumerOutcome ClsClient::DeleteConsumer(const DeleteConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsumerResponse rsp = DeleteConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsumerOutcome(rsp);
        else
            return DeleteConsumerOutcome(o.GetError());
    }
    else
    {
        return DeleteConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConsumerAsync(const DeleteConsumerRequest& request, const DeleteConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteConsumerOutcomeCallable ClsClient::DeleteConsumerCallable(const DeleteConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConsumerOutcome()>>(
        [this, request]()
        {
            return this->DeleteConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteExportOutcome ClsClient::DeleteExport(const DeleteExportRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteExportResponse rsp = DeleteExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteExportOutcome(rsp);
        else
            return DeleteExportOutcome(o.GetError());
    }
    else
    {
        return DeleteExportOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteExportAsync(const DeleteExportRequest& request, const DeleteExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteExportOutcomeCallable ClsClient::DeleteExportCallable(const DeleteExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteExportOutcome()>>(
        [this, request]()
        {
            return this->DeleteExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteIndexOutcome ClsClient::DeleteIndex(const DeleteIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIndexResponse rsp = DeleteIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIndexOutcome(rsp);
        else
            return DeleteIndexOutcome(o.GetError());
    }
    else
    {
        return DeleteIndexOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteIndexOutcomeCallable ClsClient::DeleteIndexCallable(const DeleteIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIndexOutcome()>>(
        [this, request]()
        {
            return this->DeleteIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteLogsetOutcome ClsClient::DeleteLogset(const DeleteLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogsetResponse rsp = DeleteLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogsetOutcome(rsp);
        else
            return DeleteLogsetOutcome(o.GetError());
    }
    else
    {
        return DeleteLogsetOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteLogsetAsync(const DeleteLogsetRequest& request, const DeleteLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteLogsetOutcomeCallable ClsClient::DeleteLogsetCallable(const DeleteLogsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogsetOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteMachineGroupOutcome ClsClient::DeleteMachineGroup(const DeleteMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineGroupResponse rsp = DeleteMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineGroupOutcome(rsp);
        else
            return DeleteMachineGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteMachineGroupAsync(const DeleteMachineGroupRequest& request, const DeleteMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteMachineGroupOutcomeCallable ClsClient::DeleteMachineGroupCallable(const DeleteMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteShipperOutcome ClsClient::DeleteShipper(const DeleteShipperRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShipper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShipperResponse rsp = DeleteShipperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShipperOutcome(rsp);
        else
            return DeleteShipperOutcome(o.GetError());
    }
    else
    {
        return DeleteShipperOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteShipperAsync(const DeleteShipperRequest& request, const DeleteShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteShipper(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteShipperOutcomeCallable ClsClient::DeleteShipperCallable(const DeleteShipperRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteShipperOutcome()>>(
        [this, request]()
        {
            return this->DeleteShipper(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DeleteTopicOutcome ClsClient::DeleteTopic(const DeleteTopicRequest &request)
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

void ClsClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DeleteTopicOutcomeCallable ClsClient::DeleteTopicCallable(const DeleteTopicRequest &request)
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

ClsClient::DescribeAlarmNoticesOutcome ClsClient::DescribeAlarmNotices(const DescribeAlarmNoticesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmNotices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmNoticesResponse rsp = DescribeAlarmNoticesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmNoticesOutcome(rsp);
        else
            return DescribeAlarmNoticesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmNoticesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlarmNoticesAsync(const DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarmNotices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAlarmNoticesOutcomeCallable ClsClient::DescribeAlarmNoticesCallable(const DescribeAlarmNoticesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmNoticesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarmNotices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeAlarmsOutcome ClsClient::DescribeAlarms(const DescribeAlarmsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmsResponse rsp = DescribeAlarmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmsOutcome(rsp);
        else
            return DescribeAlarmsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlarms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAlarmsOutcomeCallable ClsClient::DescribeAlarmsCallable(const DescribeAlarmsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlarmsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlarms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeAsyncContextResultOutcome ClsClient::DescribeAsyncContextResult(const DescribeAsyncContextResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncContextResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncContextResultResponse rsp = DescribeAsyncContextResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncContextResultOutcome(rsp);
        else
            return DescribeAsyncContextResultOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncContextResultOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAsyncContextResultAsync(const DescribeAsyncContextResultRequest& request, const DescribeAsyncContextResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsyncContextResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAsyncContextResultOutcomeCallable ClsClient::DescribeAsyncContextResultCallable(const DescribeAsyncContextResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsyncContextResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsyncContextResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeAsyncContextTasksOutcome ClsClient::DescribeAsyncContextTasks(const DescribeAsyncContextTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncContextTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncContextTasksResponse rsp = DescribeAsyncContextTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncContextTasksOutcome(rsp);
        else
            return DescribeAsyncContextTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncContextTasksOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAsyncContextTasksAsync(const DescribeAsyncContextTasksRequest& request, const DescribeAsyncContextTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsyncContextTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAsyncContextTasksOutcomeCallable ClsClient::DescribeAsyncContextTasksCallable(const DescribeAsyncContextTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsyncContextTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsyncContextTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeAsyncSearchResultOutcome ClsClient::DescribeAsyncSearchResult(const DescribeAsyncSearchResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncSearchResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncSearchResultResponse rsp = DescribeAsyncSearchResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncSearchResultOutcome(rsp);
        else
            return DescribeAsyncSearchResultOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncSearchResultOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAsyncSearchResultAsync(const DescribeAsyncSearchResultRequest& request, const DescribeAsyncSearchResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsyncSearchResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAsyncSearchResultOutcomeCallable ClsClient::DescribeAsyncSearchResultCallable(const DescribeAsyncSearchResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsyncSearchResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsyncSearchResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeAsyncSearchTasksOutcome ClsClient::DescribeAsyncSearchTasks(const DescribeAsyncSearchTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncSearchTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncSearchTasksResponse rsp = DescribeAsyncSearchTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncSearchTasksOutcome(rsp);
        else
            return DescribeAsyncSearchTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncSearchTasksOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAsyncSearchTasksAsync(const DescribeAsyncSearchTasksRequest& request, const DescribeAsyncSearchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsyncSearchTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeAsyncSearchTasksOutcomeCallable ClsClient::DescribeAsyncSearchTasksCallable(const DescribeAsyncSearchTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsyncSearchTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsyncSearchTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeConfigMachineGroupsOutcome ClsClient::DescribeConfigMachineGroups(const DescribeConfigMachineGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigMachineGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigMachineGroupsResponse rsp = DescribeConfigMachineGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigMachineGroupsOutcome(rsp);
        else
            return DescribeConfigMachineGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigMachineGroupsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConfigMachineGroupsAsync(const DescribeConfigMachineGroupsRequest& request, const DescribeConfigMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigMachineGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeConfigMachineGroupsOutcomeCallable ClsClient::DescribeConfigMachineGroupsCallable(const DescribeConfigMachineGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigMachineGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigMachineGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeConfigsOutcome ClsClient::DescribeConfigs(const DescribeConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigsResponse rsp = DescribeConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigsOutcome(rsp);
        else
            return DescribeConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeConfigsOutcomeCallable ClsClient::DescribeConfigsCallable(const DescribeConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeConsumerOutcome ClsClient::DescribeConsumer(const DescribeConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerResponse rsp = DescribeConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerOutcome(rsp);
        else
            return DescribeConsumerOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConsumerAsync(const DescribeConsumerRequest& request, const DescribeConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeConsumerOutcomeCallable ClsClient::DescribeConsumerCallable(const DescribeConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsumerOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeExportsOutcome ClsClient::DescribeExports(const DescribeExportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportsResponse rsp = DescribeExportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportsOutcome(rsp);
        else
            return DescribeExportsOutcome(o.GetError());
    }
    else
    {
        return DescribeExportsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeExportsAsync(const DescribeExportsRequest& request, const DescribeExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExports(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeExportsOutcomeCallable ClsClient::DescribeExportsCallable(const DescribeExportsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExportsOutcome()>>(
        [this, request]()
        {
            return this->DescribeExports(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeIndexOutcome ClsClient::DescribeIndex(const DescribeIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexResponse rsp = DescribeIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexOutcome(rsp);
        else
            return DescribeIndexOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeIndexAsync(const DescribeIndexRequest& request, const DescribeIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeIndexOutcomeCallable ClsClient::DescribeIndexCallable(const DescribeIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeLogContextOutcome ClsClient::DescribeLogContext(const DescribeLogContextRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogContext");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogContextResponse rsp = DescribeLogContextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogContextOutcome(rsp);
        else
            return DescribeLogContextOutcome(o.GetError());
    }
    else
    {
        return DescribeLogContextOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeLogContextAsync(const DescribeLogContextRequest& request, const DescribeLogContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogContext(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeLogContextOutcomeCallable ClsClient::DescribeLogContextCallable(const DescribeLogContextRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogContextOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogContext(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeLogsetsOutcome ClsClient::DescribeLogsets(const DescribeLogsetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogsetsResponse rsp = DescribeLogsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogsetsOutcome(rsp);
        else
            return DescribeLogsetsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogsetsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeLogsetsAsync(const DescribeLogsetsRequest& request, const DescribeLogsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogsets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeLogsetsOutcomeCallable ClsClient::DescribeLogsetsCallable(const DescribeLogsetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogsetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogsets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeMachineGroupConfigsOutcome ClsClient::DescribeMachineGroupConfigs(const DescribeMachineGroupConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineGroupConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineGroupConfigsResponse rsp = DescribeMachineGroupConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineGroupConfigsOutcome(rsp);
        else
            return DescribeMachineGroupConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineGroupConfigsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeMachineGroupConfigsAsync(const DescribeMachineGroupConfigsRequest& request, const DescribeMachineGroupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineGroupConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeMachineGroupConfigsOutcomeCallable ClsClient::DescribeMachineGroupConfigsCallable(const DescribeMachineGroupConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineGroupConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineGroupConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeMachineGroupsOutcome ClsClient::DescribeMachineGroups(const DescribeMachineGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineGroupsResponse rsp = DescribeMachineGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineGroupsOutcome(rsp);
        else
            return DescribeMachineGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineGroupsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeMachineGroupsAsync(const DescribeMachineGroupsRequest& request, const DescribeMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeMachineGroupsOutcomeCallable ClsClient::DescribeMachineGroupsCallable(const DescribeMachineGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeMachinesOutcome ClsClient::DescribeMachines(const DescribeMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachinesResponse rsp = DescribeMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachinesOutcome(rsp);
        else
            return DescribeMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeMachinesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeMachinesAsync(const DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeMachinesOutcomeCallable ClsClient::DescribeMachinesCallable(const DescribeMachinesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachinesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribePartitionsOutcome ClsClient::DescribePartitions(const DescribePartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePartitionsResponse rsp = DescribePartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePartitionsOutcome(rsp);
        else
            return DescribePartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribePartitionsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribePartitionsAsync(const DescribePartitionsRequest& request, const DescribePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePartitions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribePartitionsOutcomeCallable ClsClient::DescribePartitionsCallable(const DescribePartitionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePartitionsOutcome()>>(
        [this, request]()
        {
            return this->DescribePartitions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeShipperTasksOutcome ClsClient::DescribeShipperTasks(const DescribeShipperTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShipperTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShipperTasksResponse rsp = DescribeShipperTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShipperTasksOutcome(rsp);
        else
            return DescribeShipperTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeShipperTasksOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeShipperTasksAsync(const DescribeShipperTasksRequest& request, const DescribeShipperTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShipperTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeShipperTasksOutcomeCallable ClsClient::DescribeShipperTasksCallable(const DescribeShipperTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShipperTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeShipperTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeShippersOutcome ClsClient::DescribeShippers(const DescribeShippersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShippers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShippersResponse rsp = DescribeShippersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShippersOutcome(rsp);
        else
            return DescribeShippersOutcome(o.GetError());
    }
    else
    {
        return DescribeShippersOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeShippersAsync(const DescribeShippersRequest& request, const DescribeShippersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShippers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeShippersOutcomeCallable ClsClient::DescribeShippersCallable(const DescribeShippersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShippersOutcome()>>(
        [this, request]()
        {
            return this->DescribeShippers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::DescribeTopicsOutcome ClsClient::DescribeTopics(const DescribeTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicsResponse rsp = DescribeTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicsOutcome(rsp);
        else
            return DescribeTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeTopicsAsync(const DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::DescribeTopicsOutcomeCallable ClsClient::DescribeTopicsCallable(const DescribeTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::GetAlarmLogOutcome ClsClient::GetAlarmLog(const GetAlarmLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetAlarmLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAlarmLogResponse rsp = GetAlarmLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAlarmLogOutcome(rsp);
        else
            return GetAlarmLogOutcome(o.GetError());
    }
    else
    {
        return GetAlarmLogOutcome(outcome.GetError());
    }
}

void ClsClient::GetAlarmLogAsync(const GetAlarmLogRequest& request, const GetAlarmLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAlarmLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::GetAlarmLogOutcomeCallable ClsClient::GetAlarmLogCallable(const GetAlarmLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAlarmLogOutcome()>>(
        [this, request]()
        {
            return this->GetAlarmLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::MergePartitionOutcome ClsClient::MergePartition(const MergePartitionRequest &request)
{
    auto outcome = MakeRequest(request, "MergePartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MergePartitionResponse rsp = MergePartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MergePartitionOutcome(rsp);
        else
            return MergePartitionOutcome(o.GetError());
    }
    else
    {
        return MergePartitionOutcome(outcome.GetError());
    }
}

void ClsClient::MergePartitionAsync(const MergePartitionRequest& request, const MergePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MergePartition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::MergePartitionOutcomeCallable ClsClient::MergePartitionCallable(const MergePartitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MergePartitionOutcome()>>(
        [this, request]()
        {
            return this->MergePartition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyAlarmOutcome ClsClient::ModifyAlarm(const ModifyAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmResponse rsp = ModifyAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmOutcome(rsp);
        else
            return ModifyAlarmOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyAlarmAsync(const ModifyAlarmRequest& request, const ModifyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyAlarmOutcomeCallable ClsClient::ModifyAlarmCallable(const ModifyAlarmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyAlarmNoticeOutcome ClsClient::ModifyAlarmNotice(const ModifyAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmNoticeResponse rsp = ModifyAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmNoticeOutcome(rsp);
        else
            return ModifyAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmNoticeOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyAlarmNoticeAsync(const ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmNotice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyAlarmNoticeOutcomeCallable ClsClient::ModifyAlarmNoticeCallable(const ModifyAlarmNoticeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmNoticeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmNotice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyConfigOutcome ClsClient::ModifyConfig(const ModifyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigResponse rsp = ModifyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigOutcome(rsp);
        else
            return ModifyConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConfigAsync(const ModifyConfigRequest& request, const ModifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyConfigOutcomeCallable ClsClient::ModifyConfigCallable(const ModifyConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyConsumerOutcome ClsClient::ModifyConsumer(const ModifyConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerResponse rsp = ModifyConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerOutcome(rsp);
        else
            return ModifyConsumerOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConsumerAsync(const ModifyConsumerRequest& request, const ModifyConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyConsumerOutcomeCallable ClsClient::ModifyConsumerCallable(const ModifyConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConsumerOutcome()>>(
        [this, request]()
        {
            return this->ModifyConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyIndexOutcome ClsClient::ModifyIndex(const ModifyIndexRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIndexResponse rsp = ModifyIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIndexOutcome(rsp);
        else
            return ModifyIndexOutcome(o.GetError());
    }
    else
    {
        return ModifyIndexOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyIndexAsync(const ModifyIndexRequest& request, const ModifyIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyIndexOutcomeCallable ClsClient::ModifyIndexCallable(const ModifyIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIndexOutcome()>>(
        [this, request]()
        {
            return this->ModifyIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyLogsetOutcome ClsClient::ModifyLogset(const ModifyLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogsetResponse rsp = ModifyLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogsetOutcome(rsp);
        else
            return ModifyLogsetOutcome(o.GetError());
    }
    else
    {
        return ModifyLogsetOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyLogsetAsync(const ModifyLogsetRequest& request, const ModifyLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLogset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyLogsetOutcomeCallable ClsClient::ModifyLogsetCallable(const ModifyLogsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLogsetOutcome()>>(
        [this, request]()
        {
            return this->ModifyLogset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyMachineGroupOutcome ClsClient::ModifyMachineGroup(const ModifyMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMachineGroupResponse rsp = ModifyMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMachineGroupOutcome(rsp);
        else
            return ModifyMachineGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyMachineGroupAsync(const ModifyMachineGroupRequest& request, const ModifyMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMachineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyMachineGroupOutcomeCallable ClsClient::ModifyMachineGroupCallable(const ModifyMachineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMachineGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyMachineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyShipperOutcome ClsClient::ModifyShipper(const ModifyShipperRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyShipper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyShipperResponse rsp = ModifyShipperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyShipperOutcome(rsp);
        else
            return ModifyShipperOutcome(o.GetError());
    }
    else
    {
        return ModifyShipperOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyShipperAsync(const ModifyShipperRequest& request, const ModifyShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyShipper(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyShipperOutcomeCallable ClsClient::ModifyShipperCallable(const ModifyShipperRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyShipperOutcome()>>(
        [this, request]()
        {
            return this->ModifyShipper(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::ModifyTopicOutcome ClsClient::ModifyTopic(const ModifyTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicResponse rsp = ModifyTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicOutcome(rsp);
        else
            return ModifyTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyTopicAsync(const ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::ModifyTopicOutcomeCallable ClsClient::ModifyTopicCallable(const ModifyTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTopicOutcome()>>(
        [this, request]()
        {
            return this->ModifyTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::RetryShipperTaskOutcome ClsClient::RetryShipperTask(const RetryShipperTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RetryShipperTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryShipperTaskResponse rsp = RetryShipperTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryShipperTaskOutcome(rsp);
        else
            return RetryShipperTaskOutcome(o.GetError());
    }
    else
    {
        return RetryShipperTaskOutcome(outcome.GetError());
    }
}

void ClsClient::RetryShipperTaskAsync(const RetryShipperTaskRequest& request, const RetryShipperTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryShipperTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::RetryShipperTaskOutcomeCallable ClsClient::RetryShipperTaskCallable(const RetryShipperTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryShipperTaskOutcome()>>(
        [this, request]()
        {
            return this->RetryShipperTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::SearchLogOutcome ClsClient::SearchLog(const SearchLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchLogResponse rsp = SearchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchLogOutcome(rsp);
        else
            return SearchLogOutcome(o.GetError());
    }
    else
    {
        return SearchLogOutcome(outcome.GetError());
    }
}

void ClsClient::SearchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::SearchLogOutcomeCallable ClsClient::SearchLogCallable(const SearchLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchLogOutcome()>>(
        [this, request]()
        {
            return this->SearchLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::SplitPartitionOutcome ClsClient::SplitPartition(const SplitPartitionRequest &request)
{
    auto outcome = MakeRequest(request, "SplitPartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SplitPartitionResponse rsp = SplitPartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SplitPartitionOutcome(rsp);
        else
            return SplitPartitionOutcome(o.GetError());
    }
    else
    {
        return SplitPartitionOutcome(outcome.GetError());
    }
}

void ClsClient::SplitPartitionAsync(const SplitPartitionRequest& request, const SplitPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SplitPartition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::SplitPartitionOutcomeCallable ClsClient::SplitPartitionCallable(const SplitPartitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SplitPartitionOutcome()>>(
        [this, request]()
        {
            return this->SplitPartition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ClsClient::UploadLogOutcome ClsClient::UploadLog(const UploadLogRequest &request)
{
    auto outcome = MakeRequest(request, "UploadLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadLogResponse rsp = UploadLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadLogOutcome(rsp);
        else
            return UploadLogOutcome(o.GetError());
    }
    else
    {
        return UploadLogOutcome(outcome.GetError());
    }
}

void ClsClient::UploadLogAsync(const UploadLogRequest& request, const UploadLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ClsClient::UploadLogOutcomeCallable ClsClient::UploadLogCallable(const UploadLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadLogOutcome()>>(
        [this, request]()
        {
            return this->UploadLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

