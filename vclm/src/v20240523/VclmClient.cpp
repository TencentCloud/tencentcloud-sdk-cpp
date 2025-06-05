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

#include <tencentcloud/vclm/v20240523/VclmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vclm::V20240523;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-05-23";
    const string ENDPOINT = "vclm.tencentcloudapi.com";
}

VclmClient::VclmClient(const Credential &credential, const string &region) :
    VclmClient(credential, region, ClientProfile())
{
}

VclmClient::VclmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VclmClient::CheckAnimateImageJobOutcome VclmClient::CheckAnimateImageJob(const CheckAnimateImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAnimateImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAnimateImageJobResponse rsp = CheckAnimateImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAnimateImageJobOutcome(rsp);
        else
            return CheckAnimateImageJobOutcome(o.GetError());
    }
    else
    {
        return CheckAnimateImageJobOutcome(outcome.GetError());
    }
}

void VclmClient::CheckAnimateImageJobAsync(const CheckAnimateImageJobRequest& request, const CheckAnimateImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckAnimateImageJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::CheckAnimateImageJobOutcomeCallable VclmClient::CheckAnimateImageJobCallable(const CheckAnimateImageJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckAnimateImageJobOutcome()>>(
        [this, request]()
        {
            return this->CheckAnimateImageJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VclmClient::DescribeImageAnimateJobOutcome VclmClient::DescribeImageAnimateJob(const DescribeImageAnimateJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageAnimateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageAnimateJobResponse rsp = DescribeImageAnimateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageAnimateJobOutcome(rsp);
        else
            return DescribeImageAnimateJobOutcome(o.GetError());
    }
    else
    {
        return DescribeImageAnimateJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeImageAnimateJobAsync(const DescribeImageAnimateJobRequest& request, const DescribeImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageAnimateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::DescribeImageAnimateJobOutcomeCallable VclmClient::DescribeImageAnimateJobCallable(const DescribeImageAnimateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageAnimateJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageAnimateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VclmClient::DescribePortraitSingJobOutcome VclmClient::DescribePortraitSingJob(const DescribePortraitSingJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePortraitSingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePortraitSingJobResponse rsp = DescribePortraitSingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePortraitSingJobOutcome(rsp);
        else
            return DescribePortraitSingJobOutcome(o.GetError());
    }
    else
    {
        return DescribePortraitSingJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribePortraitSingJobAsync(const DescribePortraitSingJobRequest& request, const DescribePortraitSingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePortraitSingJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::DescribePortraitSingJobOutcomeCallable VclmClient::DescribePortraitSingJobCallable(const DescribePortraitSingJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePortraitSingJobOutcome()>>(
        [this, request]()
        {
            return this->DescribePortraitSingJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VclmClient::DescribeTemplateToVideoJobOutcome VclmClient::DescribeTemplateToVideoJob(const DescribeTemplateToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateToVideoJobResponse rsp = DescribeTemplateToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateToVideoJobOutcome(rsp);
        else
            return DescribeTemplateToVideoJobOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeTemplateToVideoJobAsync(const DescribeTemplateToVideoJobRequest& request, const DescribeTemplateToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplateToVideoJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::DescribeTemplateToVideoJobOutcomeCallable VclmClient::DescribeTemplateToVideoJobCallable(const DescribeTemplateToVideoJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplateToVideoJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplateToVideoJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VclmClient::DescribeVideoStylizationJobOutcome VclmClient::DescribeVideoStylizationJob(const DescribeVideoStylizationJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoStylizationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoStylizationJobResponse rsp = DescribeVideoStylizationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoStylizationJobOutcome(rsp);
        else
            return DescribeVideoStylizationJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoStylizationJobOutcome(outcome.GetError());
    }
}

void VclmClient::DescribeVideoStylizationJobAsync(const DescribeVideoStylizationJobRequest& request, const DescribeVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoStylizationJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::DescribeVideoStylizationJobOutcomeCallable VclmClient::DescribeVideoStylizationJobCallable(const DescribeVideoStylizationJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoStylizationJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoStylizationJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VclmClient::SubmitImageAnimateJobOutcome VclmClient::SubmitImageAnimateJob(const SubmitImageAnimateJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitImageAnimateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitImageAnimateJobResponse rsp = SubmitImageAnimateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitImageAnimateJobOutcome(rsp);
        else
            return SubmitImageAnimateJobOutcome(o.GetError());
    }
    else
    {
        return SubmitImageAnimateJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitImageAnimateJobAsync(const SubmitImageAnimateJobRequest& request, const SubmitImageAnimateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitImageAnimateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::SubmitImageAnimateJobOutcomeCallable VclmClient::SubmitImageAnimateJobCallable(const SubmitImageAnimateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitImageAnimateJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitImageAnimateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VclmClient::SubmitPortraitSingJobOutcome VclmClient::SubmitPortraitSingJob(const SubmitPortraitSingJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitPortraitSingJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitPortraitSingJobResponse rsp = SubmitPortraitSingJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitPortraitSingJobOutcome(rsp);
        else
            return SubmitPortraitSingJobOutcome(o.GetError());
    }
    else
    {
        return SubmitPortraitSingJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitPortraitSingJobAsync(const SubmitPortraitSingJobRequest& request, const SubmitPortraitSingJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitPortraitSingJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::SubmitPortraitSingJobOutcomeCallable VclmClient::SubmitPortraitSingJobCallable(const SubmitPortraitSingJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitPortraitSingJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitPortraitSingJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VclmClient::SubmitTemplateToVideoJobOutcome VclmClient::SubmitTemplateToVideoJob(const SubmitTemplateToVideoJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitTemplateToVideoJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitTemplateToVideoJobResponse rsp = SubmitTemplateToVideoJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitTemplateToVideoJobOutcome(rsp);
        else
            return SubmitTemplateToVideoJobOutcome(o.GetError());
    }
    else
    {
        return SubmitTemplateToVideoJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitTemplateToVideoJobAsync(const SubmitTemplateToVideoJobRequest& request, const SubmitTemplateToVideoJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitTemplateToVideoJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::SubmitTemplateToVideoJobOutcomeCallable VclmClient::SubmitTemplateToVideoJobCallable(const SubmitTemplateToVideoJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitTemplateToVideoJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitTemplateToVideoJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VclmClient::SubmitVideoStylizationJobOutcome VclmClient::SubmitVideoStylizationJob(const SubmitVideoStylizationJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoStylizationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoStylizationJobResponse rsp = SubmitVideoStylizationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoStylizationJobOutcome(rsp);
        else
            return SubmitVideoStylizationJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoStylizationJobOutcome(outcome.GetError());
    }
}

void VclmClient::SubmitVideoStylizationJobAsync(const SubmitVideoStylizationJobRequest& request, const SubmitVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitVideoStylizationJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VclmClient::SubmitVideoStylizationJobOutcomeCallable VclmClient::SubmitVideoStylizationJobCallable(const SubmitVideoStylizationJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitVideoStylizationJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitVideoStylizationJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

