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

#include <tencentcloud/omics/v20221128/OmicsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Omics::V20221128;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-28";
    const string ENDPOINT = "omics.tencentcloudapi.com";
}

OmicsClient::OmicsClient(const Credential &credential, const string &region) :
    OmicsClient(credential, region, ClientProfile())
{
}

OmicsClient::OmicsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OmicsClient::CreateEnvironmentOutcome OmicsClient::CreateEnvironment(const CreateEnvironmentRequest &request)
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

void OmicsClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::CreateEnvironmentOutcomeCallable OmicsClient::CreateEnvironmentCallable(const CreateEnvironmentRequest &request)
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

OmicsClient::CreateVolumeOutcome OmicsClient::CreateVolume(const CreateVolumeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVolume");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVolumeResponse rsp = CreateVolumeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVolumeOutcome(rsp);
        else
            return CreateVolumeOutcome(o.GetError());
    }
    else
    {
        return CreateVolumeOutcome(outcome.GetError());
    }
}

void OmicsClient::CreateVolumeAsync(const CreateVolumeRequest& request, const CreateVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVolume(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::CreateVolumeOutcomeCallable OmicsClient::CreateVolumeCallable(const CreateVolumeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVolumeOutcome()>>(
        [this, request]()
        {
            return this->CreateVolume(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::DeleteEnvironmentOutcome OmicsClient::DeleteEnvironment(const DeleteEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEnvironmentResponse rsp = DeleteEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEnvironmentOutcome(rsp);
        else
            return DeleteEnvironmentOutcome(o.GetError());
    }
    else
    {
        return DeleteEnvironmentOutcome(outcome.GetError());
    }
}

void OmicsClient::DeleteEnvironmentAsync(const DeleteEnvironmentRequest& request, const DeleteEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DeleteEnvironmentOutcomeCallable OmicsClient::DeleteEnvironmentCallable(const DeleteEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->DeleteEnvironment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::DeleteVolumeOutcome OmicsClient::DeleteVolume(const DeleteVolumeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVolume");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVolumeResponse rsp = DeleteVolumeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVolumeOutcome(rsp);
        else
            return DeleteVolumeOutcome(o.GetError());
    }
    else
    {
        return DeleteVolumeOutcome(outcome.GetError());
    }
}

void OmicsClient::DeleteVolumeAsync(const DeleteVolumeRequest& request, const DeleteVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVolume(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DeleteVolumeOutcomeCallable OmicsClient::DeleteVolumeCallable(const DeleteVolumeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVolumeOutcome()>>(
        [this, request]()
        {
            return this->DeleteVolume(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::DeleteVolumeDataOutcome OmicsClient::DeleteVolumeData(const DeleteVolumeDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVolumeData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVolumeDataResponse rsp = DeleteVolumeDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVolumeDataOutcome(rsp);
        else
            return DeleteVolumeDataOutcome(o.GetError());
    }
    else
    {
        return DeleteVolumeDataOutcome(outcome.GetError());
    }
}

void OmicsClient::DeleteVolumeDataAsync(const DeleteVolumeDataRequest& request, const DeleteVolumeDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVolumeData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DeleteVolumeDataOutcomeCallable OmicsClient::DeleteVolumeDataCallable(const DeleteVolumeDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVolumeDataOutcome()>>(
        [this, request]()
        {
            return this->DeleteVolumeData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::DescribeEnvironmentsOutcome OmicsClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
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

void OmicsClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DescribeEnvironmentsOutcomeCallable OmicsClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
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

OmicsClient::DescribeRunGroupsOutcome OmicsClient::DescribeRunGroups(const DescribeRunGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRunGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRunGroupsResponse rsp = DescribeRunGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRunGroupsOutcome(rsp);
        else
            return DescribeRunGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeRunGroupsOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeRunGroupsAsync(const DescribeRunGroupsRequest& request, const DescribeRunGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRunGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DescribeRunGroupsOutcomeCallable OmicsClient::DescribeRunGroupsCallable(const DescribeRunGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRunGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRunGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::DescribeRunsOutcome OmicsClient::DescribeRuns(const DescribeRunsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRunsResponse rsp = DescribeRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRunsOutcome(rsp);
        else
            return DescribeRunsOutcome(o.GetError());
    }
    else
    {
        return DescribeRunsOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeRunsAsync(const DescribeRunsRequest& request, const DescribeRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DescribeRunsOutcomeCallable OmicsClient::DescribeRunsCallable(const DescribeRunsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRunsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::DescribeTablesOutcome OmicsClient::DescribeTables(const DescribeTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesResponse rsp = DescribeTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesOutcome(rsp);
        else
            return DescribeTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DescribeTablesOutcomeCallable OmicsClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::DescribeTablesRowsOutcome OmicsClient::DescribeTablesRows(const DescribeTablesRowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablesRows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesRowsResponse rsp = DescribeTablesRowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesRowsOutcome(rsp);
        else
            return DescribeTablesRowsOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesRowsOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeTablesRowsAsync(const DescribeTablesRowsRequest& request, const DescribeTablesRowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTablesRows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DescribeTablesRowsOutcomeCallable OmicsClient::DescribeTablesRowsCallable(const DescribeTablesRowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablesRowsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTablesRows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::DescribeVolumesOutcome OmicsClient::DescribeVolumes(const DescribeVolumesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVolumes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVolumesResponse rsp = DescribeVolumesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVolumesOutcome(rsp);
        else
            return DescribeVolumesOutcome(o.GetError());
    }
    else
    {
        return DescribeVolumesOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeVolumesAsync(const DescribeVolumesRequest& request, const DescribeVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVolumes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DescribeVolumesOutcomeCallable OmicsClient::DescribeVolumesCallable(const DescribeVolumesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVolumesOutcome()>>(
        [this, request]()
        {
            return this->DescribeVolumes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::GetRunCallsOutcome OmicsClient::GetRunCalls(const GetRunCallsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRunCalls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRunCallsResponse rsp = GetRunCallsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRunCallsOutcome(rsp);
        else
            return GetRunCallsOutcome(o.GetError());
    }
    else
    {
        return GetRunCallsOutcome(outcome.GetError());
    }
}

void OmicsClient::GetRunCallsAsync(const GetRunCallsRequest& request, const GetRunCallsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRunCalls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::GetRunCallsOutcomeCallable OmicsClient::GetRunCallsCallable(const GetRunCallsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRunCallsOutcome()>>(
        [this, request]()
        {
            return this->GetRunCalls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::GetRunMetadataFileOutcome OmicsClient::GetRunMetadataFile(const GetRunMetadataFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetRunMetadataFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRunMetadataFileResponse rsp = GetRunMetadataFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRunMetadataFileOutcome(rsp);
        else
            return GetRunMetadataFileOutcome(o.GetError());
    }
    else
    {
        return GetRunMetadataFileOutcome(outcome.GetError());
    }
}

void OmicsClient::GetRunMetadataFileAsync(const GetRunMetadataFileRequest& request, const GetRunMetadataFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRunMetadataFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::GetRunMetadataFileOutcomeCallable OmicsClient::GetRunMetadataFileCallable(const GetRunMetadataFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRunMetadataFileOutcome()>>(
        [this, request]()
        {
            return this->GetRunMetadataFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::GetRunStatusOutcome OmicsClient::GetRunStatus(const GetRunStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetRunStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRunStatusResponse rsp = GetRunStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRunStatusOutcome(rsp);
        else
            return GetRunStatusOutcome(o.GetError());
    }
    else
    {
        return GetRunStatusOutcome(outcome.GetError());
    }
}

void OmicsClient::GetRunStatusAsync(const GetRunStatusRequest& request, const GetRunStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRunStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::GetRunStatusOutcomeCallable OmicsClient::GetRunStatusCallable(const GetRunStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRunStatusOutcome()>>(
        [this, request]()
        {
            return this->GetRunStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::ImportTableFileOutcome OmicsClient::ImportTableFile(const ImportTableFileRequest &request)
{
    auto outcome = MakeRequest(request, "ImportTableFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportTableFileResponse rsp = ImportTableFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportTableFileOutcome(rsp);
        else
            return ImportTableFileOutcome(o.GetError());
    }
    else
    {
        return ImportTableFileOutcome(outcome.GetError());
    }
}

void OmicsClient::ImportTableFileAsync(const ImportTableFileRequest& request, const ImportTableFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportTableFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::ImportTableFileOutcomeCallable OmicsClient::ImportTableFileCallable(const ImportTableFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportTableFileOutcome()>>(
        [this, request]()
        {
            return this->ImportTableFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::ModifyVolumeOutcome OmicsClient::ModifyVolume(const ModifyVolumeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVolume");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVolumeResponse rsp = ModifyVolumeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVolumeOutcome(rsp);
        else
            return ModifyVolumeOutcome(o.GetError());
    }
    else
    {
        return ModifyVolumeOutcome(outcome.GetError());
    }
}

void OmicsClient::ModifyVolumeAsync(const ModifyVolumeRequest& request, const ModifyVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVolume(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::ModifyVolumeOutcomeCallable OmicsClient::ModifyVolumeCallable(const ModifyVolumeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVolumeOutcome()>>(
        [this, request]()
        {
            return this->ModifyVolume(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::RetryRunsOutcome OmicsClient::RetryRuns(const RetryRunsRequest &request)
{
    auto outcome = MakeRequest(request, "RetryRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryRunsResponse rsp = RetryRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryRunsOutcome(rsp);
        else
            return RetryRunsOutcome(o.GetError());
    }
    else
    {
        return RetryRunsOutcome(outcome.GetError());
    }
}

void OmicsClient::RetryRunsAsync(const RetryRunsRequest& request, const RetryRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetryRuns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::RetryRunsOutcomeCallable OmicsClient::RetryRunsCallable(const RetryRunsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetryRunsOutcome()>>(
        [this, request]()
        {
            return this->RetryRuns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::RunApplicationOutcome OmicsClient::RunApplication(const RunApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "RunApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunApplicationResponse rsp = RunApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunApplicationOutcome(rsp);
        else
            return RunApplicationOutcome(o.GetError());
    }
    else
    {
        return RunApplicationOutcome(outcome.GetError());
    }
}

void OmicsClient::RunApplicationAsync(const RunApplicationRequest& request, const RunApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::RunApplicationOutcomeCallable OmicsClient::RunApplicationCallable(const RunApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunApplicationOutcome()>>(
        [this, request]()
        {
            return this->RunApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::RunWorkflowOutcome OmicsClient::RunWorkflow(const RunWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "RunWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunWorkflowResponse rsp = RunWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunWorkflowOutcome(rsp);
        else
            return RunWorkflowOutcome(o.GetError());
    }
    else
    {
        return RunWorkflowOutcome(outcome.GetError());
    }
}

void OmicsClient::RunWorkflowAsync(const RunWorkflowRequest& request, const RunWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::RunWorkflowOutcomeCallable OmicsClient::RunWorkflowCallable(const RunWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunWorkflowOutcome()>>(
        [this, request]()
        {
            return this->RunWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::TerminateRunGroupOutcome OmicsClient::TerminateRunGroup(const TerminateRunGroupRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateRunGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateRunGroupResponse rsp = TerminateRunGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateRunGroupOutcome(rsp);
        else
            return TerminateRunGroupOutcome(o.GetError());
    }
    else
    {
        return TerminateRunGroupOutcome(outcome.GetError());
    }
}

void OmicsClient::TerminateRunGroupAsync(const TerminateRunGroupRequest& request, const TerminateRunGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateRunGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::TerminateRunGroupOutcomeCallable OmicsClient::TerminateRunGroupCallable(const TerminateRunGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateRunGroupOutcome()>>(
        [this, request]()
        {
            return this->TerminateRunGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

