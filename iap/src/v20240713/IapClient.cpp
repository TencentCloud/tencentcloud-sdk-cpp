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

#include <tencentcloud/iap/v20240713/IapClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iap::V20240713;
using namespace TencentCloud::Iap::V20240713::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-07-13";
    const string ENDPOINT = "iap.tencentcloudapi.com";
}

IapClient::IapClient(const Credential &credential, const string &region) :
    IapClient(credential, region, ClientProfile())
{
}

IapClient::IapClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IapClient::CreateIAPUserOIDCConfigOutcome IapClient::CreateIAPUserOIDCConfig(const CreateIAPUserOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIAPUserOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIAPUserOIDCConfigResponse rsp = CreateIAPUserOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIAPUserOIDCConfigOutcome(rsp);
        else
            return CreateIAPUserOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return CreateIAPUserOIDCConfigOutcome(outcome.GetError());
    }
}

void IapClient::CreateIAPUserOIDCConfigAsync(const CreateIAPUserOIDCConfigRequest& request, const CreateIAPUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIAPUserOIDCConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IapClient::CreateIAPUserOIDCConfigOutcomeCallable IapClient::CreateIAPUserOIDCConfigCallable(const CreateIAPUserOIDCConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIAPUserOIDCConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateIAPUserOIDCConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IapClient::DescribeIAPLoginSessionDurationOutcome IapClient::DescribeIAPLoginSessionDuration(const DescribeIAPLoginSessionDurationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIAPLoginSessionDuration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIAPLoginSessionDurationResponse rsp = DescribeIAPLoginSessionDurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIAPLoginSessionDurationOutcome(rsp);
        else
            return DescribeIAPLoginSessionDurationOutcome(o.GetError());
    }
    else
    {
        return DescribeIAPLoginSessionDurationOutcome(outcome.GetError());
    }
}

void IapClient::DescribeIAPLoginSessionDurationAsync(const DescribeIAPLoginSessionDurationRequest& request, const DescribeIAPLoginSessionDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIAPLoginSessionDuration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IapClient::DescribeIAPLoginSessionDurationOutcomeCallable IapClient::DescribeIAPLoginSessionDurationCallable(const DescribeIAPLoginSessionDurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIAPLoginSessionDurationOutcome()>>(
        [this, request]()
        {
            return this->DescribeIAPLoginSessionDuration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IapClient::DescribeIAPUserOIDCConfigOutcome IapClient::DescribeIAPUserOIDCConfig(const DescribeIAPUserOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIAPUserOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIAPUserOIDCConfigResponse rsp = DescribeIAPUserOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIAPUserOIDCConfigOutcome(rsp);
        else
            return DescribeIAPUserOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeIAPUserOIDCConfigOutcome(outcome.GetError());
    }
}

void IapClient::DescribeIAPUserOIDCConfigAsync(const DescribeIAPUserOIDCConfigRequest& request, const DescribeIAPUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIAPUserOIDCConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IapClient::DescribeIAPUserOIDCConfigOutcomeCallable IapClient::DescribeIAPUserOIDCConfigCallable(const DescribeIAPUserOIDCConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIAPUserOIDCConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeIAPUserOIDCConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IapClient::DisableIAPUserSSOOutcome IapClient::DisableIAPUserSSO(const DisableIAPUserSSORequest &request)
{
    auto outcome = MakeRequest(request, "DisableIAPUserSSO");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableIAPUserSSOResponse rsp = DisableIAPUserSSOResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableIAPUserSSOOutcome(rsp);
        else
            return DisableIAPUserSSOOutcome(o.GetError());
    }
    else
    {
        return DisableIAPUserSSOOutcome(outcome.GetError());
    }
}

void IapClient::DisableIAPUserSSOAsync(const DisableIAPUserSSORequest& request, const DisableIAPUserSSOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableIAPUserSSO(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IapClient::DisableIAPUserSSOOutcomeCallable IapClient::DisableIAPUserSSOCallable(const DisableIAPUserSSORequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableIAPUserSSOOutcome()>>(
        [this, request]()
        {
            return this->DisableIAPUserSSO(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IapClient::ModifyIAPLoginSessionDurationOutcome IapClient::ModifyIAPLoginSessionDuration(const ModifyIAPLoginSessionDurationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIAPLoginSessionDuration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIAPLoginSessionDurationResponse rsp = ModifyIAPLoginSessionDurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIAPLoginSessionDurationOutcome(rsp);
        else
            return ModifyIAPLoginSessionDurationOutcome(o.GetError());
    }
    else
    {
        return ModifyIAPLoginSessionDurationOutcome(outcome.GetError());
    }
}

void IapClient::ModifyIAPLoginSessionDurationAsync(const ModifyIAPLoginSessionDurationRequest& request, const ModifyIAPLoginSessionDurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIAPLoginSessionDuration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IapClient::ModifyIAPLoginSessionDurationOutcomeCallable IapClient::ModifyIAPLoginSessionDurationCallable(const ModifyIAPLoginSessionDurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIAPLoginSessionDurationOutcome()>>(
        [this, request]()
        {
            return this->ModifyIAPLoginSessionDuration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IapClient::UpdateIAPUserOIDCConfigOutcome IapClient::UpdateIAPUserOIDCConfig(const UpdateIAPUserOIDCConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateIAPUserOIDCConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateIAPUserOIDCConfigResponse rsp = UpdateIAPUserOIDCConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateIAPUserOIDCConfigOutcome(rsp);
        else
            return UpdateIAPUserOIDCConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateIAPUserOIDCConfigOutcome(outcome.GetError());
    }
}

void IapClient::UpdateIAPUserOIDCConfigAsync(const UpdateIAPUserOIDCConfigRequest& request, const UpdateIAPUserOIDCConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateIAPUserOIDCConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IapClient::UpdateIAPUserOIDCConfigOutcomeCallable IapClient::UpdateIAPUserOIDCConfigCallable(const UpdateIAPUserOIDCConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateIAPUserOIDCConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateIAPUserOIDCConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

