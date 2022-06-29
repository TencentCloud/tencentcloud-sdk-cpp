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

#include <tencentcloud/tcbr/v20220217/TcbrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcbr::V20220217;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-02-17";
    const string ENDPOINT = "tcbr.tencentcloudapi.com";
}

TcbrClient::TcbrClient(const Credential &credential, const string &region) :
    TcbrClient(credential, region, ClientProfile())
{
}

TcbrClient::TcbrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcbrClient::CreateCloudRunEnvOutcome TcbrClient::CreateCloudRunEnv(const CreateCloudRunEnvRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudRunEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudRunEnvResponse rsp = CreateCloudRunEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudRunEnvOutcome(rsp);
        else
            return CreateCloudRunEnvOutcome(o.GetError());
    }
    else
    {
        return CreateCloudRunEnvOutcome(outcome.GetError());
    }
}

void TcbrClient::CreateCloudRunEnvAsync(const CreateCloudRunEnvRequest& request, const CreateCloudRunEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudRunEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::CreateCloudRunEnvOutcomeCallable TcbrClient::CreateCloudRunEnvCallable(const CreateCloudRunEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudRunEnvOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudRunEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbrClient::CreateCloudRunServerOutcome TcbrClient::CreateCloudRunServer(const CreateCloudRunServerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudRunServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudRunServerResponse rsp = CreateCloudRunServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudRunServerOutcome(rsp);
        else
            return CreateCloudRunServerOutcome(o.GetError());
    }
    else
    {
        return CreateCloudRunServerOutcome(outcome.GetError());
    }
}

void TcbrClient::CreateCloudRunServerAsync(const CreateCloudRunServerRequest& request, const CreateCloudRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudRunServer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::CreateCloudRunServerOutcomeCallable TcbrClient::CreateCloudRunServerCallable(const CreateCloudRunServerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudRunServerOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudRunServer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbrClient::DescribeCloudRunEnvsOutcome TcbrClient::DescribeCloudRunEnvs(const DescribeCloudRunEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRunEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRunEnvsResponse rsp = DescribeCloudRunEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRunEnvsOutcome(rsp);
        else
            return DescribeCloudRunEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRunEnvsOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeCloudRunEnvsAsync(const DescribeCloudRunEnvsRequest& request, const DescribeCloudRunEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudRunEnvs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::DescribeCloudRunEnvsOutcomeCallable TcbrClient::DescribeCloudRunEnvsCallable(const DescribeCloudRunEnvsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudRunEnvsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudRunEnvs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbrClient::DescribeCloudRunServerDetailOutcome TcbrClient::DescribeCloudRunServerDetail(const DescribeCloudRunServerDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRunServerDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRunServerDetailResponse rsp = DescribeCloudRunServerDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRunServerDetailOutcome(rsp);
        else
            return DescribeCloudRunServerDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRunServerDetailOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeCloudRunServerDetailAsync(const DescribeCloudRunServerDetailRequest& request, const DescribeCloudRunServerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudRunServerDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::DescribeCloudRunServerDetailOutcomeCallable TcbrClient::DescribeCloudRunServerDetailCallable(const DescribeCloudRunServerDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudRunServerDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudRunServerDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbrClient::DescribeCloudRunServersOutcome TcbrClient::DescribeCloudRunServers(const DescribeCloudRunServersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRunServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRunServersResponse rsp = DescribeCloudRunServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRunServersOutcome(rsp);
        else
            return DescribeCloudRunServersOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRunServersOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeCloudRunServersAsync(const DescribeCloudRunServersRequest& request, const DescribeCloudRunServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudRunServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::DescribeCloudRunServersOutcomeCallable TcbrClient::DescribeCloudRunServersCallable(const DescribeCloudRunServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudRunServersOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudRunServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbrClient::DescribeEnvBaseInfoOutcome TcbrClient::DescribeEnvBaseInfo(const DescribeEnvBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvBaseInfoResponse rsp = DescribeEnvBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvBaseInfoOutcome(rsp);
        else
            return DescribeEnvBaseInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvBaseInfoOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeEnvBaseInfoAsync(const DescribeEnvBaseInfoRequest& request, const DescribeEnvBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvBaseInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::DescribeEnvBaseInfoOutcomeCallable TcbrClient::DescribeEnvBaseInfoCallable(const DescribeEnvBaseInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvBaseInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvBaseInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbrClient::DescribeServerManageTaskOutcome TcbrClient::DescribeServerManageTask(const DescribeServerManageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerManageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerManageTaskResponse rsp = DescribeServerManageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerManageTaskOutcome(rsp);
        else
            return DescribeServerManageTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeServerManageTaskOutcome(outcome.GetError());
    }
}

void TcbrClient::DescribeServerManageTaskAsync(const DescribeServerManageTaskRequest& request, const DescribeServerManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerManageTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::DescribeServerManageTaskOutcomeCallable TcbrClient::DescribeServerManageTaskCallable(const DescribeServerManageTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerManageTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerManageTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbrClient::OperateServerManageOutcome TcbrClient::OperateServerManage(const OperateServerManageRequest &request)
{
    auto outcome = MakeRequest(request, "OperateServerManage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateServerManageResponse rsp = OperateServerManageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateServerManageOutcome(rsp);
        else
            return OperateServerManageOutcome(o.GetError());
    }
    else
    {
        return OperateServerManageOutcome(outcome.GetError());
    }
}

void TcbrClient::OperateServerManageAsync(const OperateServerManageRequest& request, const OperateServerManageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OperateServerManage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::OperateServerManageOutcomeCallable TcbrClient::OperateServerManageCallable(const OperateServerManageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OperateServerManageOutcome()>>(
        [this, request]()
        {
            return this->OperateServerManage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbrClient::ReleaseGrayOutcome TcbrClient::ReleaseGray(const ReleaseGrayRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseGray");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseGrayResponse rsp = ReleaseGrayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseGrayOutcome(rsp);
        else
            return ReleaseGrayOutcome(o.GetError());
    }
    else
    {
        return ReleaseGrayOutcome(outcome.GetError());
    }
}

void TcbrClient::ReleaseGrayAsync(const ReleaseGrayRequest& request, const ReleaseGrayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReleaseGray(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::ReleaseGrayOutcomeCallable TcbrClient::ReleaseGrayCallable(const ReleaseGrayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReleaseGrayOutcome()>>(
        [this, request]()
        {
            return this->ReleaseGray(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbrClient::UpdateCloudRunServerOutcome TcbrClient::UpdateCloudRunServer(const UpdateCloudRunServerRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCloudRunServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCloudRunServerResponse rsp = UpdateCloudRunServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCloudRunServerOutcome(rsp);
        else
            return UpdateCloudRunServerOutcome(o.GetError());
    }
    else
    {
        return UpdateCloudRunServerOutcome(outcome.GetError());
    }
}

void TcbrClient::UpdateCloudRunServerAsync(const UpdateCloudRunServerRequest& request, const UpdateCloudRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCloudRunServer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbrClient::UpdateCloudRunServerOutcomeCallable TcbrClient::UpdateCloudRunServerCallable(const UpdateCloudRunServerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCloudRunServerOutcome()>>(
        [this, request]()
        {
            return this->UpdateCloudRunServer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

