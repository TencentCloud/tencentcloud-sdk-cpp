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

#include <tencentcloud/acp/v20220105/AcpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Acp::V20220105;
using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-05";
    const string ENDPOINT = "acp.tencentcloudapi.com";
}

AcpClient::AcpClient(const Credential &credential, const string &region) :
    AcpClient(credential, region, ClientProfile())
{
}

AcpClient::AcpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AcpClient::CreateAppScanTaskOutcome AcpClient::CreateAppScanTask(const CreateAppScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppScanTaskResponse rsp = CreateAppScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppScanTaskOutcome(rsp);
        else
            return CreateAppScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAppScanTaskOutcome(outcome.GetError());
    }
}

void AcpClient::CreateAppScanTaskAsync(const CreateAppScanTaskRequest& request, const CreateAppScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAppScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcpClient::CreateAppScanTaskOutcomeCallable AcpClient::CreateAppScanTaskCallable(const CreateAppScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAppScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAppScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcpClient::CreateAppScanTaskRepeatOutcome AcpClient::CreateAppScanTaskRepeat(const CreateAppScanTaskRepeatRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAppScanTaskRepeat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppScanTaskRepeatResponse rsp = CreateAppScanTaskRepeatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppScanTaskRepeatOutcome(rsp);
        else
            return CreateAppScanTaskRepeatOutcome(o.GetError());
    }
    else
    {
        return CreateAppScanTaskRepeatOutcome(outcome.GetError());
    }
}

void AcpClient::CreateAppScanTaskRepeatAsync(const CreateAppScanTaskRepeatRequest& request, const CreateAppScanTaskRepeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAppScanTaskRepeat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcpClient::CreateAppScanTaskRepeatOutcomeCallable AcpClient::CreateAppScanTaskRepeatCallable(const CreateAppScanTaskRepeatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAppScanTaskRepeatOutcome()>>(
        [this, request]()
        {
            return this->CreateAppScanTaskRepeat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcpClient::DescribeChannelTaskReportUrlOutcome AcpClient::DescribeChannelTaskReportUrl(const DescribeChannelTaskReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChannelTaskReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChannelTaskReportUrlResponse rsp = DescribeChannelTaskReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChannelTaskReportUrlOutcome(rsp);
        else
            return DescribeChannelTaskReportUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeChannelTaskReportUrlOutcome(outcome.GetError());
    }
}

void AcpClient::DescribeChannelTaskReportUrlAsync(const DescribeChannelTaskReportUrlRequest& request, const DescribeChannelTaskReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChannelTaskReportUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcpClient::DescribeChannelTaskReportUrlOutcomeCallable AcpClient::DescribeChannelTaskReportUrlCallable(const DescribeChannelTaskReportUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChannelTaskReportUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeChannelTaskReportUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcpClient::DescribeFileTicketOutcome AcpClient::DescribeFileTicket(const DescribeFileTicketRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTicket");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTicketResponse rsp = DescribeFileTicketResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTicketOutcome(rsp);
        else
            return DescribeFileTicketOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTicketOutcome(outcome.GetError());
    }
}

void AcpClient::DescribeFileTicketAsync(const DescribeFileTicketRequest& request, const DescribeFileTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileTicket(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcpClient::DescribeFileTicketOutcomeCallable AcpClient::DescribeFileTicketCallable(const DescribeFileTicketRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileTicketOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileTicket(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcpClient::DescribeResourceUsageInfoOutcome AcpClient::DescribeResourceUsageInfo(const DescribeResourceUsageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUsageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUsageInfoResponse rsp = DescribeResourceUsageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUsageInfoOutcome(rsp);
        else
            return DescribeResourceUsageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUsageInfoOutcome(outcome.GetError());
    }
}

void AcpClient::DescribeResourceUsageInfoAsync(const DescribeResourceUsageInfoRequest& request, const DescribeResourceUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceUsageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcpClient::DescribeResourceUsageInfoOutcomeCallable AcpClient::DescribeResourceUsageInfoCallable(const DescribeResourceUsageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceUsageInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceUsageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcpClient::DescribeScanTaskListOutcome AcpClient::DescribeScanTaskList(const DescribeScanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskListResponse rsp = DescribeScanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskListOutcome(rsp);
        else
            return DescribeScanTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskListOutcome(outcome.GetError());
    }
}

void AcpClient::DescribeScanTaskListAsync(const DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcpClient::DescribeScanTaskListOutcomeCallable AcpClient::DescribeScanTaskListCallable(const DescribeScanTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcpClient::DescribeScanTaskReportUrlOutcome AcpClient::DescribeScanTaskReportUrl(const DescribeScanTaskReportUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskReportUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskReportUrlResponse rsp = DescribeScanTaskReportUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskReportUrlOutcome(rsp);
        else
            return DescribeScanTaskReportUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskReportUrlOutcome(outcome.GetError());
    }
}

void AcpClient::DescribeScanTaskReportUrlAsync(const DescribeScanTaskReportUrlRequest& request, const DescribeScanTaskReportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskReportUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcpClient::DescribeScanTaskReportUrlOutcomeCallable AcpClient::DescribeScanTaskReportUrlCallable(const DescribeScanTaskReportUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanTaskReportUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanTaskReportUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AcpClient::DescribeScanTaskStatusOutcome AcpClient::DescribeScanTaskStatus(const DescribeScanTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskStatusResponse rsp = DescribeScanTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskStatusOutcome(rsp);
        else
            return DescribeScanTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskStatusOutcome(outcome.GetError());
    }
}

void AcpClient::DescribeScanTaskStatusAsync(const DescribeScanTaskStatusRequest& request, const DescribeScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AcpClient::DescribeScanTaskStatusOutcomeCallable AcpClient::DescribeScanTaskStatusCallable(const DescribeScanTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

