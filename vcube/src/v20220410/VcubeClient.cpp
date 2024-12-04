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

#include <tencentcloud/vcube/v20220410/VcubeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vcube::V20220410;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-04-10";
    const string ENDPOINT = "vcube.tencentcloudapi.com";
}

VcubeClient::VcubeClient(const Credential &credential, const string &region) :
    VcubeClient(credential, region, ClientProfile())
{
}

VcubeClient::VcubeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VcubeClient::CreateActivityLicenseOutcome VcubeClient::CreateActivityLicense(const CreateActivityLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateActivityLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateActivityLicenseResponse rsp = CreateActivityLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateActivityLicenseOutcome(rsp);
        else
            return CreateActivityLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateActivityLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateActivityLicenseAsync(const CreateActivityLicenseRequest& request, const CreateActivityLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateActivityLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::CreateActivityLicenseOutcomeCallable VcubeClient::CreateActivityLicenseCallable(const CreateActivityLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateActivityLicenseOutcome()>>(
        [this, request]()
        {
            return this->CreateActivityLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::CreateApplicationAndBindLicenseOutcome VcubeClient::CreateApplicationAndBindLicense(const CreateApplicationAndBindLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationAndBindLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationAndBindLicenseResponse rsp = CreateApplicationAndBindLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationAndBindLicenseOutcome(rsp);
        else
            return CreateApplicationAndBindLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationAndBindLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateApplicationAndBindLicenseAsync(const CreateApplicationAndBindLicenseRequest& request, const CreateApplicationAndBindLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationAndBindLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::CreateApplicationAndBindLicenseOutcomeCallable VcubeClient::CreateApplicationAndBindLicenseCallable(const CreateApplicationAndBindLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationAndBindLicenseOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationAndBindLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::CreateApplicationAndVideoOutcome VcubeClient::CreateApplicationAndVideo(const CreateApplicationAndVideoRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationAndVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationAndVideoResponse rsp = CreateApplicationAndVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationAndVideoOutcome(rsp);
        else
            return CreateApplicationAndVideoOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationAndVideoOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateApplicationAndVideoAsync(const CreateApplicationAndVideoRequest& request, const CreateApplicationAndVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationAndVideo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::CreateApplicationAndVideoOutcomeCallable VcubeClient::CreateApplicationAndVideoCallable(const CreateApplicationAndVideoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationAndVideoOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationAndVideo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::CreateApplicationAndWebPlayerLicenseOutcome VcubeClient::CreateApplicationAndWebPlayerLicense(const CreateApplicationAndWebPlayerLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationAndWebPlayerLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationAndWebPlayerLicenseResponse rsp = CreateApplicationAndWebPlayerLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationAndWebPlayerLicenseOutcome(rsp);
        else
            return CreateApplicationAndWebPlayerLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationAndWebPlayerLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateApplicationAndWebPlayerLicenseAsync(const CreateApplicationAndWebPlayerLicenseRequest& request, const CreateApplicationAndWebPlayerLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationAndWebPlayerLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::CreateApplicationAndWebPlayerLicenseOutcomeCallable VcubeClient::CreateApplicationAndWebPlayerLicenseCallable(const CreateApplicationAndWebPlayerLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationAndWebPlayerLicenseOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationAndWebPlayerLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::CreateLicenseOutcome VcubeClient::CreateLicense(const CreateLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLicenseResponse rsp = CreateLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLicenseOutcome(rsp);
        else
            return CreateLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateLicenseAsync(const CreateLicenseRequest& request, const CreateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::CreateLicenseOutcomeCallable VcubeClient::CreateLicenseCallable(const CreateLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLicenseOutcome()>>(
        [this, request]()
        {
            return this->CreateLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::CreateTestXMagicOutcome VcubeClient::CreateTestXMagic(const CreateTestXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTestXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTestXMagicResponse rsp = CreateTestXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTestXMagicOutcome(rsp);
        else
            return CreateTestXMagicOutcome(o.GetError());
    }
    else
    {
        return CreateTestXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateTestXMagicAsync(const CreateTestXMagicRequest& request, const CreateTestXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTestXMagic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::CreateTestXMagicOutcomeCallable VcubeClient::CreateTestXMagicCallable(const CreateTestXMagicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTestXMagicOutcome()>>(
        [this, request]()
        {
            return this->CreateTestXMagic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::CreateTrialApplicationAndLicenseOutcome VcubeClient::CreateTrialApplicationAndLicense(const CreateTrialApplicationAndLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrialApplicationAndLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrialApplicationAndLicenseResponse rsp = CreateTrialApplicationAndLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrialApplicationAndLicenseOutcome(rsp);
        else
            return CreateTrialApplicationAndLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateTrialApplicationAndLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateTrialApplicationAndLicenseAsync(const CreateTrialApplicationAndLicenseRequest& request, const CreateTrialApplicationAndLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTrialApplicationAndLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::CreateTrialApplicationAndLicenseOutcomeCallable VcubeClient::CreateTrialApplicationAndLicenseCallable(const CreateTrialApplicationAndLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTrialApplicationAndLicenseOutcome()>>(
        [this, request]()
        {
            return this->CreateTrialApplicationAndLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::CreateTrialLicenseOutcome VcubeClient::CreateTrialLicense(const CreateTrialLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrialLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrialLicenseResponse rsp = CreateTrialLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrialLicenseOutcome(rsp);
        else
            return CreateTrialLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateTrialLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateTrialLicenseAsync(const CreateTrialLicenseRequest& request, const CreateTrialLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTrialLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::CreateTrialLicenseOutcomeCallable VcubeClient::CreateTrialLicenseCallable(const CreateTrialLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTrialLicenseOutcome()>>(
        [this, request]()
        {
            return this->CreateTrialLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::CreateXMagicOutcome VcubeClient::CreateXMagic(const CreateXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateXMagicResponse rsp = CreateXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateXMagicOutcome(rsp);
        else
            return CreateXMagicOutcome(o.GetError());
    }
    else
    {
        return CreateXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::CreateXMagicAsync(const CreateXMagicRequest& request, const CreateXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateXMagic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::CreateXMagicOutcomeCallable VcubeClient::CreateXMagicCallable(const CreateXMagicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateXMagicOutcome()>>(
        [this, request]()
        {
            return this->CreateXMagic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeFeatureListOutcome VcubeClient::DescribeFeatureList(const DescribeFeatureListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFeatureList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFeatureListResponse rsp = DescribeFeatureListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFeatureListOutcome(rsp);
        else
            return DescribeFeatureListOutcome(o.GetError());
    }
    else
    {
        return DescribeFeatureListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeFeatureListAsync(const DescribeFeatureListRequest& request, const DescribeFeatureListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFeatureList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeFeatureListOutcomeCallable VcubeClient::DescribeFeatureListCallable(const DescribeFeatureListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFeatureListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFeatureList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeLicenseListOutcome VcubeClient::DescribeLicenseList(const DescribeLicenseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseListResponse rsp = DescribeLicenseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseListOutcome(rsp);
        else
            return DescribeLicenseListOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeLicenseListAsync(const DescribeLicenseListRequest& request, const DescribeLicenseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLicenseList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeLicenseListOutcomeCallable VcubeClient::DescribeLicenseListCallable(const DescribeLicenseListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLicenseListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLicenseList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeNewsOutcome VcubeClient::DescribeNews(const DescribeNewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewsResponse rsp = DescribeNewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewsOutcome(rsp);
        else
            return DescribeNewsOutcome(o.GetError());
    }
    else
    {
        return DescribeNewsOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeNewsAsync(const DescribeNewsRequest& request, const DescribeNewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNews(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeNewsOutcomeCallable VcubeClient::DescribeNewsCallable(const DescribeNewsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNewsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNews(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeSTSOutcome VcubeClient::DescribeSTS(const DescribeSTSRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSTS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSTSResponse rsp = DescribeSTSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSTSOutcome(rsp);
        else
            return DescribeSTSOutcome(o.GetError());
    }
    else
    {
        return DescribeSTSOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeSTSAsync(const DescribeSTSRequest& request, const DescribeSTSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSTS(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeSTSOutcomeCallable VcubeClient::DescribeSTSCallable(const DescribeSTSRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSTSOutcome()>>(
        [this, request]()
        {
            return this->DescribeSTS(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeTrialFeatureOutcome VcubeClient::DescribeTrialFeature(const DescribeTrialFeatureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrialFeature");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrialFeatureResponse rsp = DescribeTrialFeatureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrialFeatureOutcome(rsp);
        else
            return DescribeTrialFeatureOutcome(o.GetError());
    }
    else
    {
        return DescribeTrialFeatureOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeTrialFeatureAsync(const DescribeTrialFeatureRequest& request, const DescribeTrialFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrialFeature(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeTrialFeatureOutcomeCallable VcubeClient::DescribeTrialFeatureCallable(const DescribeTrialFeatureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrialFeatureOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrialFeature(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeUserConfigOutcome VcubeClient::DescribeUserConfig(const DescribeUserConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserConfigResponse rsp = DescribeUserConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserConfigOutcome(rsp);
        else
            return DescribeUserConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUserConfigOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeUserConfigAsync(const DescribeUserConfigRequest& request, const DescribeUserConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeUserConfigOutcomeCallable VcubeClient::DescribeUserConfigCallable(const DescribeUserConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeVcubeApplicationAndLicenseOutcome VcubeClient::DescribeVcubeApplicationAndLicense(const DescribeVcubeApplicationAndLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeApplicationAndLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeApplicationAndLicenseResponse rsp = DescribeVcubeApplicationAndLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeApplicationAndLicenseOutcome(rsp);
        else
            return DescribeVcubeApplicationAndLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeApplicationAndLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeApplicationAndLicenseAsync(const DescribeVcubeApplicationAndLicenseRequest& request, const DescribeVcubeApplicationAndLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVcubeApplicationAndLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeVcubeApplicationAndLicenseOutcomeCallable VcubeClient::DescribeVcubeApplicationAndLicenseCallable(const DescribeVcubeApplicationAndLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVcubeApplicationAndLicenseOutcome()>>(
        [this, request]()
        {
            return this->DescribeVcubeApplicationAndLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeVcubeApplicationAndPlayListOutcome VcubeClient::DescribeVcubeApplicationAndPlayList(const DescribeVcubeApplicationAndPlayListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeApplicationAndPlayList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeApplicationAndPlayListResponse rsp = DescribeVcubeApplicationAndPlayListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeApplicationAndPlayListOutcome(rsp);
        else
            return DescribeVcubeApplicationAndPlayListOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeApplicationAndPlayListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeApplicationAndPlayListAsync(const DescribeVcubeApplicationAndPlayListRequest& request, const DescribeVcubeApplicationAndPlayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVcubeApplicationAndPlayList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeVcubeApplicationAndPlayListOutcomeCallable VcubeClient::DescribeVcubeApplicationAndPlayListCallable(const DescribeVcubeApplicationAndPlayListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVcubeApplicationAndPlayListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVcubeApplicationAndPlayList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeVcubeApplicationAndXMagicListOutcome VcubeClient::DescribeVcubeApplicationAndXMagicList(const DescribeVcubeApplicationAndXMagicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeApplicationAndXMagicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeApplicationAndXMagicListResponse rsp = DescribeVcubeApplicationAndXMagicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeApplicationAndXMagicListOutcome(rsp);
        else
            return DescribeVcubeApplicationAndXMagicListOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeApplicationAndXMagicListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeApplicationAndXMagicListAsync(const DescribeVcubeApplicationAndXMagicListRequest& request, const DescribeVcubeApplicationAndXMagicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVcubeApplicationAndXMagicList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeVcubeApplicationAndXMagicListOutcomeCallable VcubeClient::DescribeVcubeApplicationAndXMagicListCallable(const DescribeVcubeApplicationAndXMagicListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVcubeApplicationAndXMagicListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVcubeApplicationAndXMagicList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeVcubeResourcesOutcome VcubeClient::DescribeVcubeResources(const DescribeVcubeResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeResourcesResponse rsp = DescribeVcubeResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeResourcesOutcome(rsp);
        else
            return DescribeVcubeResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeResourcesOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeResourcesAsync(const DescribeVcubeResourcesRequest& request, const DescribeVcubeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVcubeResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeVcubeResourcesOutcomeCallable VcubeClient::DescribeVcubeResourcesCallable(const DescribeVcubeResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVcubeResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeVcubeResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeVcubeResourcesListOutcome VcubeClient::DescribeVcubeResourcesList(const DescribeVcubeResourcesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVcubeResourcesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVcubeResourcesListResponse rsp = DescribeVcubeResourcesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVcubeResourcesListOutcome(rsp);
        else
            return DescribeVcubeResourcesListOutcome(o.GetError());
    }
    else
    {
        return DescribeVcubeResourcesListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeVcubeResourcesListAsync(const DescribeVcubeResourcesListRequest& request, const DescribeVcubeResourcesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVcubeResourcesList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeVcubeResourcesListOutcomeCallable VcubeClient::DescribeVcubeResourcesListCallable(const DescribeVcubeResourcesListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVcubeResourcesListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVcubeResourcesList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeXMagicResourceOutcome VcubeClient::DescribeXMagicResource(const DescribeXMagicResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeXMagicResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeXMagicResourceResponse rsp = DescribeXMagicResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeXMagicResourceOutcome(rsp);
        else
            return DescribeXMagicResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeXMagicResourceOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeXMagicResourceAsync(const DescribeXMagicResourceRequest& request, const DescribeXMagicResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeXMagicResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeXMagicResourceOutcomeCallable VcubeClient::DescribeXMagicResourceCallable(const DescribeXMagicResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeXMagicResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeXMagicResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::DescribeXMagicResourceListOutcome VcubeClient::DescribeXMagicResourceList(const DescribeXMagicResourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeXMagicResourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeXMagicResourceListResponse rsp = DescribeXMagicResourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeXMagicResourceListOutcome(rsp);
        else
            return DescribeXMagicResourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeXMagicResourceListOutcome(outcome.GetError());
    }
}

void VcubeClient::DescribeXMagicResourceListAsync(const DescribeXMagicResourceListRequest& request, const DescribeXMagicResourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeXMagicResourceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::DescribeXMagicResourceListOutcomeCallable VcubeClient::DescribeXMagicResourceListCallable(const DescribeXMagicResourceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeXMagicResourceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeXMagicResourceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::ModifyApplicationOutcome VcubeClient::ModifyApplication(const ModifyApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationResponse rsp = ModifyApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationOutcome(rsp);
        else
            return ModifyApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyApplicationAsync(const ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::ModifyApplicationOutcomeCallable VcubeClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::ModifyFormalApplicationOutcome VcubeClient::ModifyFormalApplication(const ModifyFormalApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFormalApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFormalApplicationResponse rsp = ModifyFormalApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFormalApplicationOutcome(rsp);
        else
            return ModifyFormalApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyFormalApplicationOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyFormalApplicationAsync(const ModifyFormalApplicationRequest& request, const ModifyFormalApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFormalApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::ModifyFormalApplicationOutcomeCallable VcubeClient::ModifyFormalApplicationCallable(const ModifyFormalApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFormalApplicationOutcome()>>(
        [this, request]()
        {
            return this->ModifyFormalApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::ModifyLicenseOutcome VcubeClient::ModifyLicense(const ModifyLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLicenseResponse rsp = ModifyLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLicenseOutcome(rsp);
        else
            return ModifyLicenseOutcome(o.GetError());
    }
    else
    {
        return ModifyLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyLicenseAsync(const ModifyLicenseRequest& request, const ModifyLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::ModifyLicenseOutcomeCallable VcubeClient::ModifyLicenseCallable(const ModifyLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLicenseOutcome()>>(
        [this, request]()
        {
            return this->ModifyLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::ModifyPresetApplicationOutcome VcubeClient::ModifyPresetApplication(const ModifyPresetApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPresetApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPresetApplicationResponse rsp = ModifyPresetApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPresetApplicationOutcome(rsp);
        else
            return ModifyPresetApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyPresetApplicationOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyPresetApplicationAsync(const ModifyPresetApplicationRequest& request, const ModifyPresetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPresetApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::ModifyPresetApplicationOutcomeCallable VcubeClient::ModifyPresetApplicationCallable(const ModifyPresetApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPresetApplicationOutcome()>>(
        [this, request]()
        {
            return this->ModifyPresetApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::ModifyTrialLicenseOutcome VcubeClient::ModifyTrialLicense(const ModifyTrialLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTrialLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTrialLicenseResponse rsp = ModifyTrialLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTrialLicenseOutcome(rsp);
        else
            return ModifyTrialLicenseOutcome(o.GetError());
    }
    else
    {
        return ModifyTrialLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyTrialLicenseAsync(const ModifyTrialLicenseRequest& request, const ModifyTrialLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTrialLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::ModifyTrialLicenseOutcomeCallable VcubeClient::ModifyTrialLicenseCallable(const ModifyTrialLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTrialLicenseOutcome()>>(
        [this, request]()
        {
            return this->ModifyTrialLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::ModifyXMagicOutcome VcubeClient::ModifyXMagic(const ModifyXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyXMagicResponse rsp = ModifyXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyXMagicOutcome(rsp);
        else
            return ModifyXMagicOutcome(o.GetError());
    }
    else
    {
        return ModifyXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::ModifyXMagicAsync(const ModifyXMagicRequest& request, const ModifyXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyXMagic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::ModifyXMagicOutcomeCallable VcubeClient::ModifyXMagicCallable(const ModifyXMagicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyXMagicOutcome()>>(
        [this, request]()
        {
            return this->ModifyXMagic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::RenewLicenseOutcome VcubeClient::RenewLicense(const RenewLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "RenewLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewLicenseResponse rsp = RenewLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewLicenseOutcome(rsp);
        else
            return RenewLicenseOutcome(o.GetError());
    }
    else
    {
        return RenewLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::RenewLicenseAsync(const RenewLicenseRequest& request, const RenewLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::RenewLicenseOutcomeCallable VcubeClient::RenewLicenseCallable(const RenewLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewLicenseOutcome()>>(
        [this, request]()
        {
            return this->RenewLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::RenewTestXMagicOutcome VcubeClient::RenewTestXMagic(const RenewTestXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "RenewTestXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewTestXMagicResponse rsp = RenewTestXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewTestXMagicOutcome(rsp);
        else
            return RenewTestXMagicOutcome(o.GetError());
    }
    else
    {
        return RenewTestXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::RenewTestXMagicAsync(const RenewTestXMagicRequest& request, const RenewTestXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewTestXMagic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::RenewTestXMagicOutcomeCallable VcubeClient::RenewTestXMagicCallable(const RenewTestXMagicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewTestXMagicOutcome()>>(
        [this, request]()
        {
            return this->RenewTestXMagic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::RenewVideoOutcome VcubeClient::RenewVideo(const RenewVideoRequest &request)
{
    auto outcome = MakeRequest(request, "RenewVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewVideoResponse rsp = RenewVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewVideoOutcome(rsp);
        else
            return RenewVideoOutcome(o.GetError());
    }
    else
    {
        return RenewVideoOutcome(outcome.GetError());
    }
}

void VcubeClient::RenewVideoAsync(const RenewVideoRequest& request, const RenewVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewVideo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::RenewVideoOutcomeCallable VcubeClient::RenewVideoCallable(const RenewVideoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewVideoOutcome()>>(
        [this, request]()
        {
            return this->RenewVideo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::UpdateTestXMagicOutcome VcubeClient::UpdateTestXMagic(const UpdateTestXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTestXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTestXMagicResponse rsp = UpdateTestXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTestXMagicOutcome(rsp);
        else
            return UpdateTestXMagicOutcome(o.GetError());
    }
    else
    {
        return UpdateTestXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::UpdateTestXMagicAsync(const UpdateTestXMagicRequest& request, const UpdateTestXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTestXMagic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::UpdateTestXMagicOutcomeCallable VcubeClient::UpdateTestXMagicCallable(const UpdateTestXMagicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTestXMagicOutcome()>>(
        [this, request]()
        {
            return this->UpdateTestXMagic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::UpdateTrialLicenseOutcome VcubeClient::UpdateTrialLicense(const UpdateTrialLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateTrialLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateTrialLicenseResponse rsp = UpdateTrialLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateTrialLicenseOutcome(rsp);
        else
            return UpdateTrialLicenseOutcome(o.GetError());
    }
    else
    {
        return UpdateTrialLicenseOutcome(outcome.GetError());
    }
}

void VcubeClient::UpdateTrialLicenseAsync(const UpdateTrialLicenseRequest& request, const UpdateTrialLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateTrialLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::UpdateTrialLicenseOutcomeCallable VcubeClient::UpdateTrialLicenseCallable(const UpdateTrialLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateTrialLicenseOutcome()>>(
        [this, request]()
        {
            return this->UpdateTrialLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcubeClient::UpdateXMagicOutcome VcubeClient::UpdateXMagic(const UpdateXMagicRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateXMagic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateXMagicResponse rsp = UpdateXMagicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateXMagicOutcome(rsp);
        else
            return UpdateXMagicOutcome(o.GetError());
    }
    else
    {
        return UpdateXMagicOutcome(outcome.GetError());
    }
}

void VcubeClient::UpdateXMagicAsync(const UpdateXMagicRequest& request, const UpdateXMagicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateXMagic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcubeClient::UpdateXMagicOutcomeCallable VcubeClient::UpdateXMagicCallable(const UpdateXMagicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateXMagicOutcome()>>(
        [this, request]()
        {
            return this->UpdateXMagic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

