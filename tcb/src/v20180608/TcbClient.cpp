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

#include <tencentcloud/tcb/v20180608/TcbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcb::V20180608;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-08";
    const string ENDPOINT = "tcb.tencentcloudapi.com";
}

TcbClient::TcbClient(const Credential &credential, const string &region) :
    TcbClient(credential, region, ClientProfile())
{
}

TcbClient::TcbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcbClient::CommonServiceAPIOutcome TcbClient::CommonServiceAPI(const CommonServiceAPIRequest &request)
{
    auto outcome = MakeRequest(request, "CommonServiceAPI");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommonServiceAPIResponse rsp = CommonServiceAPIResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommonServiceAPIOutcome(rsp);
        else
            return CommonServiceAPIOutcome(o.GetError());
    }
    else
    {
        return CommonServiceAPIOutcome(outcome.GetError());
    }
}

void TcbClient::CommonServiceAPIAsync(const CommonServiceAPIRequest& request, const CommonServiceAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CommonServiceAPI(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CommonServiceAPIOutcomeCallable TcbClient::CommonServiceAPICallable(const CommonServiceAPIRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CommonServiceAPIOutcome()>>(
        [this, request]()
        {
            return this->CommonServiceAPI(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateMysqlInstanceOutcome TcbClient::CreateMysqlInstance(const CreateMysqlInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMysqlInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMysqlInstanceResponse rsp = CreateMysqlInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMysqlInstanceOutcome(rsp);
        else
            return CreateMysqlInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateMysqlInstanceOutcome(outcome.GetError());
    }
}

void TcbClient::CreateMysqlInstanceAsync(const CreateMysqlInstanceRequest& request, const CreateMysqlInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMysqlInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateMysqlInstanceOutcomeCallable TcbClient::CreateMysqlInstanceCallable(const CreateMysqlInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMysqlInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateMysqlInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeDatabaseACLOutcome TcbClient::DescribeDatabaseACL(const DescribeDatabaseACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseACLResponse rsp = DescribeDatabaseACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseACLOutcome(rsp);
        else
            return DescribeDatabaseACLOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseACLOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeDatabaseACLAsync(const DescribeDatabaseACLRequest& request, const DescribeDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseACL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeDatabaseACLOutcomeCallable TcbClient::DescribeDatabaseACLCallable(const DescribeDatabaseACLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseACLOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseACL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEnvsOutcome TcbClient::DescribeEnvs(const DescribeEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvsResponse rsp = DescribeEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvsOutcome(rsp);
        else
            return DescribeEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvsAsync(const DescribeEnvsRequest& request, const DescribeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEnvsOutcomeCallable TcbClient::DescribeEnvsCallable(const DescribeEnvsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::IsolateMysqlInstanceOutcome TcbClient::IsolateMysqlInstance(const IsolateMysqlInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateMysqlInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateMysqlInstanceResponse rsp = IsolateMysqlInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateMysqlInstanceOutcome(rsp);
        else
            return IsolateMysqlInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateMysqlInstanceOutcome(outcome.GetError());
    }
}

void TcbClient::IsolateMysqlInstanceAsync(const IsolateMysqlInstanceRequest& request, const IsolateMysqlInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateMysqlInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::IsolateMysqlInstanceOutcomeCallable TcbClient::IsolateMysqlInstanceCallable(const IsolateMysqlInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateMysqlInstanceOutcome()>>(
        [this, request]()
        {
            return this->IsolateMysqlInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ModifyDatabaseACLOutcome TcbClient::ModifyDatabaseACL(const ModifyDatabaseACLRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseACLResponse rsp = ModifyDatabaseACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseACLOutcome(rsp);
        else
            return ModifyDatabaseACLOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseACLOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyDatabaseACLAsync(const ModifyDatabaseACLRequest& request, const ModifyDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatabaseACL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ModifyDatabaseACLOutcomeCallable TcbClient::ModifyDatabaseACLCallable(const ModifyDatabaseACLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatabaseACLOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatabaseACL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ModifyEnvOutcome TcbClient::ModifyEnv(const ModifyEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvResponse rsp = ModifyEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvOutcome(rsp);
        else
            return ModifyEnvOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyEnvAsync(const ModifyEnvRequest& request, const ModifyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ModifyEnvOutcomeCallable TcbClient::ModifyEnvCallable(const ModifyEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnvOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::OfflineMysqlInstanceOutcome TcbClient::OfflineMysqlInstance(const OfflineMysqlInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineMysqlInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineMysqlInstanceResponse rsp = OfflineMysqlInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineMysqlInstanceOutcome(rsp);
        else
            return OfflineMysqlInstanceOutcome(o.GetError());
    }
    else
    {
        return OfflineMysqlInstanceOutcome(outcome.GetError());
    }
}

void TcbClient::OfflineMysqlInstanceAsync(const OfflineMysqlInstanceRequest& request, const OfflineMysqlInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OfflineMysqlInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::OfflineMysqlInstanceOutcomeCallable TcbClient::OfflineMysqlInstanceCallable(const OfflineMysqlInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OfflineMysqlInstanceOutcome()>>(
        [this, request]()
        {
            return this->OfflineMysqlInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::UpgradeMysqlInstanceOutcome TcbClient::UpgradeMysqlInstance(const UpgradeMysqlInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeMysqlInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeMysqlInstanceResponse rsp = UpgradeMysqlInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeMysqlInstanceOutcome(rsp);
        else
            return UpgradeMysqlInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeMysqlInstanceOutcome(outcome.GetError());
    }
}

void TcbClient::UpgradeMysqlInstanceAsync(const UpgradeMysqlInstanceRequest& request, const UpgradeMysqlInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeMysqlInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::UpgradeMysqlInstanceOutcomeCallable TcbClient::UpgradeMysqlInstanceCallable(const UpgradeMysqlInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeMysqlInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeMysqlInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

