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

#include <tencentcloud/rum/v20210622/RumClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Rum::V20210622;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-22";
    const string ENDPOINT = "rum.tencentcloudapi.com";
}

RumClient::RumClient(const Credential &credential, const string &region) :
    RumClient(credential, region, ClientProfile())
{
}

RumClient::RumClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RumClient::CreateLogExportOutcome RumClient::CreateLogExport(const CreateLogExportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogExportResponse rsp = CreateLogExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogExportOutcome(rsp);
        else
            return CreateLogExportOutcome(o.GetError());
    }
    else
    {
        return CreateLogExportOutcome(outcome.GetError());
    }
}

void RumClient::CreateLogExportAsync(const CreateLogExportRequest& request, const CreateLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::CreateLogExportOutcomeCallable RumClient::CreateLogExportCallable(const CreateLogExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogExportOutcome()>>(
        [this, request]()
        {
            return this->CreateLogExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::CreateOfflineLogConfigOutcome RumClient::CreateOfflineLogConfig(const CreateOfflineLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOfflineLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOfflineLogConfigResponse rsp = CreateOfflineLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOfflineLogConfigOutcome(rsp);
        else
            return CreateOfflineLogConfigOutcome(o.GetError());
    }
    else
    {
        return CreateOfflineLogConfigOutcome(outcome.GetError());
    }
}

void RumClient::CreateOfflineLogConfigAsync(const CreateOfflineLogConfigRequest& request, const CreateOfflineLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOfflineLogConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::CreateOfflineLogConfigOutcomeCallable RumClient::CreateOfflineLogConfigCallable(const CreateOfflineLogConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOfflineLogConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateOfflineLogConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::CreateProjectOutcome RumClient::CreateProject(const CreateProjectRequest &request)
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

void RumClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::CreateProjectOutcomeCallable RumClient::CreateProjectCallable(const CreateProjectRequest &request)
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

RumClient::CreateReleaseFileOutcome RumClient::CreateReleaseFile(const CreateReleaseFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReleaseFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReleaseFileResponse rsp = CreateReleaseFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReleaseFileOutcome(rsp);
        else
            return CreateReleaseFileOutcome(o.GetError());
    }
    else
    {
        return CreateReleaseFileOutcome(outcome.GetError());
    }
}

void RumClient::CreateReleaseFileAsync(const CreateReleaseFileRequest& request, const CreateReleaseFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReleaseFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::CreateReleaseFileOutcomeCallable RumClient::CreateReleaseFileCallable(const CreateReleaseFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReleaseFileOutcome()>>(
        [this, request]()
        {
            return this->CreateReleaseFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::CreateStarProjectOutcome RumClient::CreateStarProject(const CreateStarProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStarProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStarProjectResponse rsp = CreateStarProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStarProjectOutcome(rsp);
        else
            return CreateStarProjectOutcome(o.GetError());
    }
    else
    {
        return CreateStarProjectOutcome(outcome.GetError());
    }
}

void RumClient::CreateStarProjectAsync(const CreateStarProjectRequest& request, const CreateStarProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStarProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::CreateStarProjectOutcomeCallable RumClient::CreateStarProjectCallable(const CreateStarProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStarProjectOutcome()>>(
        [this, request]()
        {
            return this->CreateStarProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::CreateTawInstanceOutcome RumClient::CreateTawInstance(const CreateTawInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTawInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTawInstanceResponse rsp = CreateTawInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTawInstanceOutcome(rsp);
        else
            return CreateTawInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateTawInstanceOutcome(outcome.GetError());
    }
}

void RumClient::CreateTawInstanceAsync(const CreateTawInstanceRequest& request, const CreateTawInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTawInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::CreateTawInstanceOutcomeCallable RumClient::CreateTawInstanceCallable(const CreateTawInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTawInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateTawInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::CreateWhitelistOutcome RumClient::CreateWhitelist(const CreateWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWhitelistResponse rsp = CreateWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWhitelistOutcome(rsp);
        else
            return CreateWhitelistOutcome(o.GetError());
    }
    else
    {
        return CreateWhitelistOutcome(outcome.GetError());
    }
}

void RumClient::CreateWhitelistAsync(const CreateWhitelistRequest& request, const CreateWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWhitelist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::CreateWhitelistOutcomeCallable RumClient::CreateWhitelistCallable(const CreateWhitelistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWhitelistOutcome()>>(
        [this, request]()
        {
            return this->CreateWhitelist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DeleteInstanceOutcome RumClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void RumClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DeleteInstanceOutcomeCallable RumClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DeleteLogExportOutcome RumClient::DeleteLogExport(const DeleteLogExportRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogExportResponse rsp = DeleteLogExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogExportOutcome(rsp);
        else
            return DeleteLogExportOutcome(o.GetError());
    }
    else
    {
        return DeleteLogExportOutcome(outcome.GetError());
    }
}

void RumClient::DeleteLogExportAsync(const DeleteLogExportRequest& request, const DeleteLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DeleteLogExportOutcomeCallable RumClient::DeleteLogExportCallable(const DeleteLogExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogExportOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DeleteOfflineLogConfigOutcome RumClient::DeleteOfflineLogConfig(const DeleteOfflineLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOfflineLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOfflineLogConfigResponse rsp = DeleteOfflineLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOfflineLogConfigOutcome(rsp);
        else
            return DeleteOfflineLogConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteOfflineLogConfigOutcome(outcome.GetError());
    }
}

void RumClient::DeleteOfflineLogConfigAsync(const DeleteOfflineLogConfigRequest& request, const DeleteOfflineLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOfflineLogConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DeleteOfflineLogConfigOutcomeCallable RumClient::DeleteOfflineLogConfigCallable(const DeleteOfflineLogConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOfflineLogConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteOfflineLogConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DeleteOfflineLogRecordOutcome RumClient::DeleteOfflineLogRecord(const DeleteOfflineLogRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOfflineLogRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOfflineLogRecordResponse rsp = DeleteOfflineLogRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOfflineLogRecordOutcome(rsp);
        else
            return DeleteOfflineLogRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteOfflineLogRecordOutcome(outcome.GetError());
    }
}

void RumClient::DeleteOfflineLogRecordAsync(const DeleteOfflineLogRecordRequest& request, const DeleteOfflineLogRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOfflineLogRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DeleteOfflineLogRecordOutcomeCallable RumClient::DeleteOfflineLogRecordCallable(const DeleteOfflineLogRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOfflineLogRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteOfflineLogRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DeleteProjectOutcome RumClient::DeleteProject(const DeleteProjectRequest &request)
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

void RumClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DeleteProjectOutcomeCallable RumClient::DeleteProjectCallable(const DeleteProjectRequest &request)
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

RumClient::DeleteReleaseFileOutcome RumClient::DeleteReleaseFile(const DeleteReleaseFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReleaseFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReleaseFileResponse rsp = DeleteReleaseFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReleaseFileOutcome(rsp);
        else
            return DeleteReleaseFileOutcome(o.GetError());
    }
    else
    {
        return DeleteReleaseFileOutcome(outcome.GetError());
    }
}

void RumClient::DeleteReleaseFileAsync(const DeleteReleaseFileRequest& request, const DeleteReleaseFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReleaseFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DeleteReleaseFileOutcomeCallable RumClient::DeleteReleaseFileCallable(const DeleteReleaseFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReleaseFileOutcome()>>(
        [this, request]()
        {
            return this->DeleteReleaseFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DeleteStarProjectOutcome RumClient::DeleteStarProject(const DeleteStarProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStarProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStarProjectResponse rsp = DeleteStarProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStarProjectOutcome(rsp);
        else
            return DeleteStarProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteStarProjectOutcome(outcome.GetError());
    }
}

void RumClient::DeleteStarProjectAsync(const DeleteStarProjectRequest& request, const DeleteStarProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStarProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DeleteStarProjectOutcomeCallable RumClient::DeleteStarProjectCallable(const DeleteStarProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStarProjectOutcome()>>(
        [this, request]()
        {
            return this->DeleteStarProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DeleteWhitelistOutcome RumClient::DeleteWhitelist(const DeleteWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWhitelistResponse rsp = DeleteWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWhitelistOutcome(rsp);
        else
            return DeleteWhitelistOutcome(o.GetError());
    }
    else
    {
        return DeleteWhitelistOutcome(outcome.GetError());
    }
}

void RumClient::DeleteWhitelistAsync(const DeleteWhitelistRequest& request, const DeleteWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWhitelist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DeleteWhitelistOutcomeCallable RumClient::DeleteWhitelistCallable(const DeleteWhitelistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWhitelistOutcome()>>(
        [this, request]()
        {
            return this->DeleteWhitelist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataOutcome RumClient::DescribeData(const DescribeDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataResponse rsp = DescribeDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataOutcome(rsp);
        else
            return DescribeDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDataOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataAsync(const DescribeDataRequest& request, const DescribeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataOutcomeCallable RumClient::DescribeDataCallable(const DescribeDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataCustomUrlOutcome RumClient::DescribeDataCustomUrl(const DescribeDataCustomUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataCustomUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataCustomUrlResponse rsp = DescribeDataCustomUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataCustomUrlOutcome(rsp);
        else
            return DescribeDataCustomUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataCustomUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataCustomUrlAsync(const DescribeDataCustomUrlRequest& request, const DescribeDataCustomUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataCustomUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataCustomUrlOutcomeCallable RumClient::DescribeDataCustomUrlCallable(const DescribeDataCustomUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataCustomUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataCustomUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataEventUrlOutcome RumClient::DescribeDataEventUrl(const DescribeDataEventUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEventUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEventUrlResponse rsp = DescribeDataEventUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEventUrlOutcome(rsp);
        else
            return DescribeDataEventUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEventUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataEventUrlAsync(const DescribeDataEventUrlRequest& request, const DescribeDataEventUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEventUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataEventUrlOutcomeCallable RumClient::DescribeDataEventUrlCallable(const DescribeDataEventUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEventUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEventUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataFetchProjectOutcome RumClient::DescribeDataFetchProject(const DescribeDataFetchProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchProjectResponse rsp = DescribeDataFetchProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchProjectOutcome(rsp);
        else
            return DescribeDataFetchProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchProjectOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchProjectAsync(const DescribeDataFetchProjectRequest& request, const DescribeDataFetchProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataFetchProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataFetchProjectOutcomeCallable RumClient::DescribeDataFetchProjectCallable(const DescribeDataFetchProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataFetchProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataFetchProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataFetchUrlOutcome RumClient::DescribeDataFetchUrl(const DescribeDataFetchUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchUrlResponse rsp = DescribeDataFetchUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchUrlOutcome(rsp);
        else
            return DescribeDataFetchUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchUrlAsync(const DescribeDataFetchUrlRequest& request, const DescribeDataFetchUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataFetchUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataFetchUrlOutcomeCallable RumClient::DescribeDataFetchUrlCallable(const DescribeDataFetchUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataFetchUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataFetchUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataFetchUrlInfoOutcome RumClient::DescribeDataFetchUrlInfo(const DescribeDataFetchUrlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFetchUrlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFetchUrlInfoResponse rsp = DescribeDataFetchUrlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFetchUrlInfoOutcome(rsp);
        else
            return DescribeDataFetchUrlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFetchUrlInfoOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataFetchUrlInfoAsync(const DescribeDataFetchUrlInfoRequest& request, const DescribeDataFetchUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataFetchUrlInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataFetchUrlInfoOutcomeCallable RumClient::DescribeDataFetchUrlInfoCallable(const DescribeDataFetchUrlInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataFetchUrlInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataFetchUrlInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataLogUrlInfoOutcome RumClient::DescribeDataLogUrlInfo(const DescribeDataLogUrlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataLogUrlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataLogUrlInfoResponse rsp = DescribeDataLogUrlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataLogUrlInfoOutcome(rsp);
        else
            return DescribeDataLogUrlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataLogUrlInfoOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataLogUrlInfoAsync(const DescribeDataLogUrlInfoRequest& request, const DescribeDataLogUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataLogUrlInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataLogUrlInfoOutcomeCallable RumClient::DescribeDataLogUrlInfoCallable(const DescribeDataLogUrlInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataLogUrlInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataLogUrlInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataLogUrlStatisticsOutcome RumClient::DescribeDataLogUrlStatistics(const DescribeDataLogUrlStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataLogUrlStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataLogUrlStatisticsResponse rsp = DescribeDataLogUrlStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataLogUrlStatisticsOutcome(rsp);
        else
            return DescribeDataLogUrlStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataLogUrlStatisticsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataLogUrlStatisticsAsync(const DescribeDataLogUrlStatisticsRequest& request, const DescribeDataLogUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataLogUrlStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataLogUrlStatisticsOutcomeCallable RumClient::DescribeDataLogUrlStatisticsCallable(const DescribeDataLogUrlStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataLogUrlStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataLogUrlStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataPerformancePageOutcome RumClient::DescribeDataPerformancePage(const DescribeDataPerformancePageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPerformancePage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPerformancePageResponse rsp = DescribeDataPerformancePageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPerformancePageOutcome(rsp);
        else
            return DescribeDataPerformancePageOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPerformancePageOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPerformancePageAsync(const DescribeDataPerformancePageRequest& request, const DescribeDataPerformancePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataPerformancePage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataPerformancePageOutcomeCallable RumClient::DescribeDataPerformancePageCallable(const DescribeDataPerformancePageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataPerformancePageOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataPerformancePage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataPerformanceProjectOutcome RumClient::DescribeDataPerformanceProject(const DescribeDataPerformanceProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPerformanceProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPerformanceProjectResponse rsp = DescribeDataPerformanceProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPerformanceProjectOutcome(rsp);
        else
            return DescribeDataPerformanceProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPerformanceProjectOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPerformanceProjectAsync(const DescribeDataPerformanceProjectRequest& request, const DescribeDataPerformanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataPerformanceProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataPerformanceProjectOutcomeCallable RumClient::DescribeDataPerformanceProjectCallable(const DescribeDataPerformanceProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataPerformanceProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataPerformanceProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataPvUrlInfoOutcome RumClient::DescribeDataPvUrlInfo(const DescribeDataPvUrlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPvUrlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPvUrlInfoResponse rsp = DescribeDataPvUrlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPvUrlInfoOutcome(rsp);
        else
            return DescribeDataPvUrlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPvUrlInfoOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPvUrlInfoAsync(const DescribeDataPvUrlInfoRequest& request, const DescribeDataPvUrlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataPvUrlInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataPvUrlInfoOutcomeCallable RumClient::DescribeDataPvUrlInfoCallable(const DescribeDataPvUrlInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataPvUrlInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataPvUrlInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataPvUrlStatisticsOutcome RumClient::DescribeDataPvUrlStatistics(const DescribeDataPvUrlStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataPvUrlStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataPvUrlStatisticsResponse rsp = DescribeDataPvUrlStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataPvUrlStatisticsOutcome(rsp);
        else
            return DescribeDataPvUrlStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataPvUrlStatisticsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataPvUrlStatisticsAsync(const DescribeDataPvUrlStatisticsRequest& request, const DescribeDataPvUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataPvUrlStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataPvUrlStatisticsOutcomeCallable RumClient::DescribeDataPvUrlStatisticsCallable(const DescribeDataPvUrlStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataPvUrlStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataPvUrlStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataReportCountOutcome RumClient::DescribeDataReportCount(const DescribeDataReportCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataReportCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataReportCountResponse rsp = DescribeDataReportCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataReportCountOutcome(rsp);
        else
            return DescribeDataReportCountOutcome(o.GetError());
    }
    else
    {
        return DescribeDataReportCountOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataReportCountAsync(const DescribeDataReportCountRequest& request, const DescribeDataReportCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataReportCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataReportCountOutcomeCallable RumClient::DescribeDataReportCountCallable(const DescribeDataReportCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataReportCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataReportCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataSetUrlStatisticsOutcome RumClient::DescribeDataSetUrlStatistics(const DescribeDataSetUrlStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSetUrlStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSetUrlStatisticsResponse rsp = DescribeDataSetUrlStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSetUrlStatisticsOutcome(rsp);
        else
            return DescribeDataSetUrlStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSetUrlStatisticsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataSetUrlStatisticsAsync(const DescribeDataSetUrlStatisticsRequest& request, const DescribeDataSetUrlStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataSetUrlStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataSetUrlStatisticsOutcomeCallable RumClient::DescribeDataSetUrlStatisticsCallable(const DescribeDataSetUrlStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataSetUrlStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataSetUrlStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataStaticProjectOutcome RumClient::DescribeDataStaticProject(const DescribeDataStaticProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticProjectResponse rsp = DescribeDataStaticProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticProjectOutcome(rsp);
        else
            return DescribeDataStaticProjectOutcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticProjectOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticProjectAsync(const DescribeDataStaticProjectRequest& request, const DescribeDataStaticProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataStaticProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataStaticProjectOutcomeCallable RumClient::DescribeDataStaticProjectCallable(const DescribeDataStaticProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataStaticProjectOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataStaticProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataStaticResourceOutcome RumClient::DescribeDataStaticResource(const DescribeDataStaticResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticResourceResponse rsp = DescribeDataStaticResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticResourceOutcome(rsp);
        else
            return DescribeDataStaticResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticResourceOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticResourceAsync(const DescribeDataStaticResourceRequest& request, const DescribeDataStaticResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataStaticResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataStaticResourceOutcomeCallable RumClient::DescribeDataStaticResourceCallable(const DescribeDataStaticResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataStaticResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataStaticResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataStaticUrlOutcome RumClient::DescribeDataStaticUrl(const DescribeDataStaticUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataStaticUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataStaticUrlResponse rsp = DescribeDataStaticUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataStaticUrlOutcome(rsp);
        else
            return DescribeDataStaticUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDataStaticUrlOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataStaticUrlAsync(const DescribeDataStaticUrlRequest& request, const DescribeDataStaticUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataStaticUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataStaticUrlOutcomeCallable RumClient::DescribeDataStaticUrlCallable(const DescribeDataStaticUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataStaticUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataStaticUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeDataWebVitalsPageOutcome RumClient::DescribeDataWebVitalsPage(const DescribeDataWebVitalsPageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataWebVitalsPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataWebVitalsPageResponse rsp = DescribeDataWebVitalsPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataWebVitalsPageOutcome(rsp);
        else
            return DescribeDataWebVitalsPageOutcome(o.GetError());
    }
    else
    {
        return DescribeDataWebVitalsPageOutcome(outcome.GetError());
    }
}

void RumClient::DescribeDataWebVitalsPageAsync(const DescribeDataWebVitalsPageRequest& request, const DescribeDataWebVitalsPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataWebVitalsPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeDataWebVitalsPageOutcomeCallable RumClient::DescribeDataWebVitalsPageCallable(const DescribeDataWebVitalsPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataWebVitalsPageOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataWebVitalsPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeErrorOutcome RumClient::DescribeError(const DescribeErrorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeError");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeErrorResponse rsp = DescribeErrorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeErrorOutcome(rsp);
        else
            return DescribeErrorOutcome(o.GetError());
    }
    else
    {
        return DescribeErrorOutcome(outcome.GetError());
    }
}

void RumClient::DescribeErrorAsync(const DescribeErrorRequest& request, const DescribeErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeError(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeErrorOutcomeCallable RumClient::DescribeErrorCallable(const DescribeErrorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeErrorOutcome()>>(
        [this, request]()
        {
            return this->DescribeError(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeLogExportsOutcome RumClient::DescribeLogExports(const DescribeLogExportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogExports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogExportsResponse rsp = DescribeLogExportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogExportsOutcome(rsp);
        else
            return DescribeLogExportsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogExportsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeLogExportsAsync(const DescribeLogExportsRequest& request, const DescribeLogExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogExports(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeLogExportsOutcomeCallable RumClient::DescribeLogExportsCallable(const DescribeLogExportsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogExportsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogExports(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeLogListOutcome RumClient::DescribeLogList(const DescribeLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogListResponse rsp = DescribeLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogListOutcome(rsp);
        else
            return DescribeLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeLogListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeLogListAsync(const DescribeLogListRequest& request, const DescribeLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeLogListOutcomeCallable RumClient::DescribeLogListCallable(const DescribeLogListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeOfflineLogConfigsOutcome RumClient::DescribeOfflineLogConfigs(const DescribeOfflineLogConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfflineLogConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfflineLogConfigsResponse rsp = DescribeOfflineLogConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfflineLogConfigsOutcome(rsp);
        else
            return DescribeOfflineLogConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeOfflineLogConfigsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeOfflineLogConfigsAsync(const DescribeOfflineLogConfigsRequest& request, const DescribeOfflineLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOfflineLogConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeOfflineLogConfigsOutcomeCallable RumClient::DescribeOfflineLogConfigsCallable(const DescribeOfflineLogConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOfflineLogConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOfflineLogConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeOfflineLogRecordsOutcome RumClient::DescribeOfflineLogRecords(const DescribeOfflineLogRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfflineLogRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfflineLogRecordsResponse rsp = DescribeOfflineLogRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfflineLogRecordsOutcome(rsp);
        else
            return DescribeOfflineLogRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeOfflineLogRecordsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeOfflineLogRecordsAsync(const DescribeOfflineLogRecordsRequest& request, const DescribeOfflineLogRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOfflineLogRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeOfflineLogRecordsOutcomeCallable RumClient::DescribeOfflineLogRecordsCallable(const DescribeOfflineLogRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOfflineLogRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOfflineLogRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeOfflineLogsOutcome RumClient::DescribeOfflineLogs(const DescribeOfflineLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfflineLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfflineLogsResponse rsp = DescribeOfflineLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfflineLogsOutcome(rsp);
        else
            return DescribeOfflineLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeOfflineLogsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeOfflineLogsAsync(const DescribeOfflineLogsRequest& request, const DescribeOfflineLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOfflineLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeOfflineLogsOutcomeCallable RumClient::DescribeOfflineLogsCallable(const DescribeOfflineLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOfflineLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOfflineLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeProjectLimitsOutcome RumClient::DescribeProjectLimits(const DescribeProjectLimitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectLimits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectLimitsResponse rsp = DescribeProjectLimitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectLimitsOutcome(rsp);
        else
            return DescribeProjectLimitsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectLimitsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeProjectLimitsAsync(const DescribeProjectLimitsRequest& request, const DescribeProjectLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectLimits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeProjectLimitsOutcomeCallable RumClient::DescribeProjectLimitsCallable(const DescribeProjectLimitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectLimitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectLimits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeProjectsOutcome RumClient::DescribeProjects(const DescribeProjectsRequest &request)
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

void RumClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeProjectsOutcomeCallable RumClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
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

RumClient::DescribePvListOutcome RumClient::DescribePvList(const DescribePvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePvListResponse rsp = DescribePvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePvListOutcome(rsp);
        else
            return DescribePvListOutcome(o.GetError());
    }
    else
    {
        return DescribePvListOutcome(outcome.GetError());
    }
}

void RumClient::DescribePvListAsync(const DescribePvListRequest& request, const DescribePvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePvList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribePvListOutcomeCallable RumClient::DescribePvListCallable(const DescribePvListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePvListOutcome()>>(
        [this, request]()
        {
            return this->DescribePvList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeReleaseFileSignOutcome RumClient::DescribeReleaseFileSign(const DescribeReleaseFileSignRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseFileSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseFileSignResponse rsp = DescribeReleaseFileSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseFileSignOutcome(rsp);
        else
            return DescribeReleaseFileSignOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseFileSignOutcome(outcome.GetError());
    }
}

void RumClient::DescribeReleaseFileSignAsync(const DescribeReleaseFileSignRequest& request, const DescribeReleaseFileSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReleaseFileSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeReleaseFileSignOutcomeCallable RumClient::DescribeReleaseFileSignCallable(const DescribeReleaseFileSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReleaseFileSignOutcome()>>(
        [this, request]()
        {
            return this->DescribeReleaseFileSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeReleaseFilesOutcome RumClient::DescribeReleaseFiles(const DescribeReleaseFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleaseFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleaseFilesResponse rsp = DescribeReleaseFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleaseFilesOutcome(rsp);
        else
            return DescribeReleaseFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeReleaseFilesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeReleaseFilesAsync(const DescribeReleaseFilesRequest& request, const DescribeReleaseFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReleaseFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeReleaseFilesOutcomeCallable RumClient::DescribeReleaseFilesCallable(const DescribeReleaseFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReleaseFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeReleaseFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeScoresOutcome RumClient::DescribeScores(const DescribeScoresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScores");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScoresResponse rsp = DescribeScoresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScoresOutcome(rsp);
        else
            return DescribeScoresOutcome(o.GetError());
    }
    else
    {
        return DescribeScoresOutcome(outcome.GetError());
    }
}

void RumClient::DescribeScoresAsync(const DescribeScoresRequest& request, const DescribeScoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScores(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeScoresOutcomeCallable RumClient::DescribeScoresCallable(const DescribeScoresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScoresOutcome()>>(
        [this, request]()
        {
            return this->DescribeScores(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeTawAreasOutcome RumClient::DescribeTawAreas(const DescribeTawAreasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTawAreas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTawAreasResponse rsp = DescribeTawAreasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTawAreasOutcome(rsp);
        else
            return DescribeTawAreasOutcome(o.GetError());
    }
    else
    {
        return DescribeTawAreasOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTawAreasAsync(const DescribeTawAreasRequest& request, const DescribeTawAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTawAreas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeTawAreasOutcomeCallable RumClient::DescribeTawAreasCallable(const DescribeTawAreasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTawAreasOutcome()>>(
        [this, request]()
        {
            return this->DescribeTawAreas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeTawInstancesOutcome RumClient::DescribeTawInstances(const DescribeTawInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTawInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTawInstancesResponse rsp = DescribeTawInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTawInstancesOutcome(rsp);
        else
            return DescribeTawInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeTawInstancesOutcome(outcome.GetError());
    }
}

void RumClient::DescribeTawInstancesAsync(const DescribeTawInstancesRequest& request, const DescribeTawInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTawInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeTawInstancesOutcomeCallable RumClient::DescribeTawInstancesCallable(const DescribeTawInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTawInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTawInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeUvListOutcome RumClient::DescribeUvList(const DescribeUvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUvListResponse rsp = DescribeUvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUvListOutcome(rsp);
        else
            return DescribeUvListOutcome(o.GetError());
    }
    else
    {
        return DescribeUvListOutcome(outcome.GetError());
    }
}

void RumClient::DescribeUvListAsync(const DescribeUvListRequest& request, const DescribeUvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUvList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeUvListOutcomeCallable RumClient::DescribeUvListCallable(const DescribeUvListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUvListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUvList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::DescribeWhitelistsOutcome RumClient::DescribeWhitelists(const DescribeWhitelistsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhitelists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhitelistsResponse rsp = DescribeWhitelistsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhitelistsOutcome(rsp);
        else
            return DescribeWhitelistsOutcome(o.GetError());
    }
    else
    {
        return DescribeWhitelistsOutcome(outcome.GetError());
    }
}

void RumClient::DescribeWhitelistsAsync(const DescribeWhitelistsRequest& request, const DescribeWhitelistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhitelists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::DescribeWhitelistsOutcomeCallable RumClient::DescribeWhitelistsCallable(const DescribeWhitelistsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhitelistsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhitelists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::ModifyInstanceOutcome RumClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void RumClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::ModifyInstanceOutcomeCallable RumClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::ModifyProjectOutcome RumClient::ModifyProject(const ModifyProjectRequest &request)
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

void RumClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::ModifyProjectOutcomeCallable RumClient::ModifyProjectCallable(const ModifyProjectRequest &request)
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

RumClient::ModifyProjectLimitOutcome RumClient::ModifyProjectLimit(const ModifyProjectLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProjectLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectLimitResponse rsp = ModifyProjectLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectLimitOutcome(rsp);
        else
            return ModifyProjectLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectLimitOutcome(outcome.GetError());
    }
}

void RumClient::ModifyProjectLimitAsync(const ModifyProjectLimitRequest& request, const ModifyProjectLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProjectLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::ModifyProjectLimitOutcomeCallable RumClient::ModifyProjectLimitCallable(const ModifyProjectLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProjectLimitOutcome()>>(
        [this, request]()
        {
            return this->ModifyProjectLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::ResumeInstanceOutcome RumClient::ResumeInstance(const ResumeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeInstanceResponse rsp = ResumeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeInstanceOutcome(rsp);
        else
            return ResumeInstanceOutcome(o.GetError());
    }
    else
    {
        return ResumeInstanceOutcome(outcome.GetError());
    }
}

void RumClient::ResumeInstanceAsync(const ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::ResumeInstanceOutcomeCallable RumClient::ResumeInstanceCallable(const ResumeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeInstanceOutcome()>>(
        [this, request]()
        {
            return this->ResumeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RumClient::StopInstanceOutcome RumClient::StopInstance(const StopInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstanceResponse rsp = StopInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstanceOutcome(rsp);
        else
            return StopInstanceOutcome(o.GetError());
    }
    else
    {
        return StopInstanceOutcome(outcome.GetError());
    }
}

void RumClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RumClient::StopInstanceOutcomeCallable RumClient::StopInstanceCallable(const StopInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
        [this, request]()
        {
            return this->StopInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

