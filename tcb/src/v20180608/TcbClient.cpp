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


TcbClient::BindEnvGatewayOutcome TcbClient::BindEnvGateway(const BindEnvGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "BindEnvGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEnvGatewayResponse rsp = BindEnvGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEnvGatewayOutcome(rsp);
        else
            return BindEnvGatewayOutcome(o.GetError());
    }
    else
    {
        return BindEnvGatewayOutcome(outcome.GetError());
    }
}

void TcbClient::BindEnvGatewayAsync(const BindEnvGatewayRequest& request, const BindEnvGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindEnvGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::BindEnvGatewayOutcomeCallable TcbClient::BindEnvGatewayCallable(const BindEnvGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindEnvGatewayOutcome()>>(
        [this, request]()
        {
            return this->BindEnvGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CheckTcbServiceOutcome TcbClient::CheckTcbService(const CheckTcbServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CheckTcbService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckTcbServiceResponse rsp = CheckTcbServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckTcbServiceOutcome(rsp);
        else
            return CheckTcbServiceOutcome(o.GetError());
    }
    else
    {
        return CheckTcbServiceOutcome(outcome.GetError());
    }
}

void TcbClient::CheckTcbServiceAsync(const CheckTcbServiceRequest& request, const CheckTcbServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckTcbService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CheckTcbServiceOutcomeCallable TcbClient::CheckTcbServiceCallable(const CheckTcbServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckTcbServiceOutcome()>>(
        [this, request]()
        {
            return this->CheckTcbService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

TcbClient::CreateAndDeployCloudBaseProjectOutcome TcbClient::CreateAndDeployCloudBaseProject(const CreateAndDeployCloudBaseProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndDeployCloudBaseProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndDeployCloudBaseProjectResponse rsp = CreateAndDeployCloudBaseProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndDeployCloudBaseProjectOutcome(rsp);
        else
            return CreateAndDeployCloudBaseProjectOutcome(o.GetError());
    }
    else
    {
        return CreateAndDeployCloudBaseProjectOutcome(outcome.GetError());
    }
}

void TcbClient::CreateAndDeployCloudBaseProjectAsync(const CreateAndDeployCloudBaseProjectRequest& request, const CreateAndDeployCloudBaseProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndDeployCloudBaseProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateAndDeployCloudBaseProjectOutcomeCallable TcbClient::CreateAndDeployCloudBaseProjectCallable(const CreateAndDeployCloudBaseProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndDeployCloudBaseProjectOutcome()>>(
        [this, request]()
        {
            return this->CreateAndDeployCloudBaseProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateAuthDomainOutcome TcbClient::CreateAuthDomain(const CreateAuthDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuthDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuthDomainResponse rsp = CreateAuthDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuthDomainOutcome(rsp);
        else
            return CreateAuthDomainOutcome(o.GetError());
    }
    else
    {
        return CreateAuthDomainOutcome(outcome.GetError());
    }
}

void TcbClient::CreateAuthDomainAsync(const CreateAuthDomainRequest& request, const CreateAuthDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuthDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateAuthDomainOutcomeCallable TcbClient::CreateAuthDomainCallable(const CreateAuthDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuthDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateAuthDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateCloudBaseRunResourceOutcome TcbClient::CreateCloudBaseRunResource(const CreateCloudBaseRunResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudBaseRunResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudBaseRunResourceResponse rsp = CreateCloudBaseRunResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudBaseRunResourceOutcome(rsp);
        else
            return CreateCloudBaseRunResourceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudBaseRunResourceOutcome(outcome.GetError());
    }
}

void TcbClient::CreateCloudBaseRunResourceAsync(const CreateCloudBaseRunResourceRequest& request, const CreateCloudBaseRunResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudBaseRunResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateCloudBaseRunResourceOutcomeCallable TcbClient::CreateCloudBaseRunResourceCallable(const CreateCloudBaseRunResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudBaseRunResourceOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudBaseRunResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateCloudBaseRunServerVersionOutcome TcbClient::CreateCloudBaseRunServerVersion(const CreateCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudBaseRunServerVersionResponse rsp = CreateCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudBaseRunServerVersionOutcome(rsp);
        else
            return CreateCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return CreateCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::CreateCloudBaseRunServerVersionAsync(const CreateCloudBaseRunServerVersionRequest& request, const CreateCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudBaseRunServerVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateCloudBaseRunServerVersionOutcomeCallable TcbClient::CreateCloudBaseRunServerVersionCallable(const CreateCloudBaseRunServerVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudBaseRunServerVersionOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudBaseRunServerVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateHostingDomainOutcome TcbClient::CreateHostingDomain(const CreateHostingDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHostingDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHostingDomainResponse rsp = CreateHostingDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHostingDomainOutcome(rsp);
        else
            return CreateHostingDomainOutcome(o.GetError());
    }
    else
    {
        return CreateHostingDomainOutcome(outcome.GetError());
    }
}

void TcbClient::CreateHostingDomainAsync(const CreateHostingDomainRequest& request, const CreateHostingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHostingDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateHostingDomainOutcomeCallable TcbClient::CreateHostingDomainCallable(const CreateHostingDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHostingDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateHostingDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreatePostpayPackageOutcome TcbClient::CreatePostpayPackage(const CreatePostpayPackageRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePostpayPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePostpayPackageResponse rsp = CreatePostpayPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePostpayPackageOutcome(rsp);
        else
            return CreatePostpayPackageOutcome(o.GetError());
    }
    else
    {
        return CreatePostpayPackageOutcome(outcome.GetError());
    }
}

void TcbClient::CreatePostpayPackageAsync(const CreatePostpayPackageRequest& request, const CreatePostpayPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePostpayPackage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreatePostpayPackageOutcomeCallable TcbClient::CreatePostpayPackageCallable(const CreatePostpayPackageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePostpayPackageOutcome()>>(
        [this, request]()
        {
            return this->CreatePostpayPackage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateStandaloneGatewayOutcome TcbClient::CreateStandaloneGateway(const CreateStandaloneGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStandaloneGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStandaloneGatewayResponse rsp = CreateStandaloneGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStandaloneGatewayOutcome(rsp);
        else
            return CreateStandaloneGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateStandaloneGatewayOutcome(outcome.GetError());
    }
}

void TcbClient::CreateStandaloneGatewayAsync(const CreateStandaloneGatewayRequest& request, const CreateStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStandaloneGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateStandaloneGatewayOutcomeCallable TcbClient::CreateStandaloneGatewayCallable(const CreateStandaloneGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStandaloneGatewayOutcome()>>(
        [this, request]()
        {
            return this->CreateStandaloneGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateStaticStoreOutcome TcbClient::CreateStaticStore(const CreateStaticStoreRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStaticStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStaticStoreResponse rsp = CreateStaticStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStaticStoreOutcome(rsp);
        else
            return CreateStaticStoreOutcome(o.GetError());
    }
    else
    {
        return CreateStaticStoreOutcome(outcome.GetError());
    }
}

void TcbClient::CreateStaticStoreAsync(const CreateStaticStoreRequest& request, const CreateStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStaticStore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateStaticStoreOutcomeCallable TcbClient::CreateStaticStoreCallable(const CreateStaticStoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStaticStoreOutcome()>>(
        [this, request]()
        {
            return this->CreateStaticStore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateWxCloudBaseRunEnvOutcome TcbClient::CreateWxCloudBaseRunEnv(const CreateWxCloudBaseRunEnvRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWxCloudBaseRunEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWxCloudBaseRunEnvResponse rsp = CreateWxCloudBaseRunEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWxCloudBaseRunEnvOutcome(rsp);
        else
            return CreateWxCloudBaseRunEnvOutcome(o.GetError());
    }
    else
    {
        return CreateWxCloudBaseRunEnvOutcome(outcome.GetError());
    }
}

void TcbClient::CreateWxCloudBaseRunEnvAsync(const CreateWxCloudBaseRunEnvRequest& request, const CreateWxCloudBaseRunEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWxCloudBaseRunEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateWxCloudBaseRunEnvOutcomeCallable TcbClient::CreateWxCloudBaseRunEnvCallable(const CreateWxCloudBaseRunEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWxCloudBaseRunEnvOutcome()>>(
        [this, request]()
        {
            return this->CreateWxCloudBaseRunEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::CreateWxCloudBaseRunServerDBClusterOutcome TcbClient::CreateWxCloudBaseRunServerDBCluster(const CreateWxCloudBaseRunServerDBClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWxCloudBaseRunServerDBCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWxCloudBaseRunServerDBClusterResponse rsp = CreateWxCloudBaseRunServerDBClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWxCloudBaseRunServerDBClusterOutcome(rsp);
        else
            return CreateWxCloudBaseRunServerDBClusterOutcome(o.GetError());
    }
    else
    {
        return CreateWxCloudBaseRunServerDBClusterOutcome(outcome.GetError());
    }
}

void TcbClient::CreateWxCloudBaseRunServerDBClusterAsync(const CreateWxCloudBaseRunServerDBClusterRequest& request, const CreateWxCloudBaseRunServerDBClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWxCloudBaseRunServerDBCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::CreateWxCloudBaseRunServerDBClusterOutcomeCallable TcbClient::CreateWxCloudBaseRunServerDBClusterCallable(const CreateWxCloudBaseRunServerDBClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWxCloudBaseRunServerDBClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateWxCloudBaseRunServerDBCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DeleteCloudBaseProjectLatestVersionOutcome TcbClient::DeleteCloudBaseProjectLatestVersion(const DeleteCloudBaseProjectLatestVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudBaseProjectLatestVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudBaseProjectLatestVersionResponse rsp = DeleteCloudBaseProjectLatestVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudBaseProjectLatestVersionOutcome(rsp);
        else
            return DeleteCloudBaseProjectLatestVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudBaseProjectLatestVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteCloudBaseProjectLatestVersionAsync(const DeleteCloudBaseProjectLatestVersionRequest& request, const DeleteCloudBaseProjectLatestVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudBaseProjectLatestVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DeleteCloudBaseProjectLatestVersionOutcomeCallable TcbClient::DeleteCloudBaseProjectLatestVersionCallable(const DeleteCloudBaseProjectLatestVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudBaseProjectLatestVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudBaseProjectLatestVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DeleteCloudBaseRunServerVersionOutcome TcbClient::DeleteCloudBaseRunServerVersion(const DeleteCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudBaseRunServerVersionResponse rsp = DeleteCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudBaseRunServerVersionOutcome(rsp);
        else
            return DeleteCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteCloudBaseRunServerVersionAsync(const DeleteCloudBaseRunServerVersionRequest& request, const DeleteCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudBaseRunServerVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DeleteCloudBaseRunServerVersionOutcomeCallable TcbClient::DeleteCloudBaseRunServerVersionCallable(const DeleteCloudBaseRunServerVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudBaseRunServerVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudBaseRunServerVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DeleteEndUserOutcome TcbClient::DeleteEndUser(const DeleteEndUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEndUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEndUserResponse rsp = DeleteEndUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEndUserOutcome(rsp);
        else
            return DeleteEndUserOutcome(o.GetError());
    }
    else
    {
        return DeleteEndUserOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteEndUserAsync(const DeleteEndUserRequest& request, const DeleteEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEndUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DeleteEndUserOutcomeCallable TcbClient::DeleteEndUserCallable(const DeleteEndUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEndUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteEndUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DeleteGatewayVersionOutcome TcbClient::DeleteGatewayVersion(const DeleteGatewayVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGatewayVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGatewayVersionResponse rsp = DeleteGatewayVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGatewayVersionOutcome(rsp);
        else
            return DeleteGatewayVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteGatewayVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteGatewayVersionAsync(const DeleteGatewayVersionRequest& request, const DeleteGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGatewayVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DeleteGatewayVersionOutcomeCallable TcbClient::DeleteGatewayVersionCallable(const DeleteGatewayVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGatewayVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteGatewayVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DeleteWxGatewayRouteOutcome TcbClient::DeleteWxGatewayRoute(const DeleteWxGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWxGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWxGatewayRouteResponse rsp = DeleteWxGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWxGatewayRouteOutcome(rsp);
        else
            return DeleteWxGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteWxGatewayRouteOutcome(outcome.GetError());
    }
}

void TcbClient::DeleteWxGatewayRouteAsync(const DeleteWxGatewayRouteRequest& request, const DeleteWxGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWxGatewayRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DeleteWxGatewayRouteOutcomeCallable TcbClient::DeleteWxGatewayRouteCallable(const DeleteWxGatewayRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWxGatewayRouteOutcome()>>(
        [this, request]()
        {
            return this->DeleteWxGatewayRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeActivityRecordOutcome TcbClient::DescribeActivityRecord(const DescribeActivityRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActivityRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActivityRecordResponse rsp = DescribeActivityRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActivityRecordOutcome(rsp);
        else
            return DescribeActivityRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeActivityRecordOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeActivityRecordAsync(const DescribeActivityRecordRequest& request, const DescribeActivityRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeActivityRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeActivityRecordOutcomeCallable TcbClient::DescribeActivityRecordCallable(const DescribeActivityRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeActivityRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeActivityRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeAuthDomainsOutcome TcbClient::DescribeAuthDomains(const DescribeAuthDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthDomainsResponse rsp = DescribeAuthDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthDomainsOutcome(rsp);
        else
            return DescribeAuthDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthDomainsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeAuthDomainsAsync(const DescribeAuthDomainsRequest& request, const DescribeAuthDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuthDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeAuthDomainsOutcomeCallable TcbClient::DescribeAuthDomainsCallable(const DescribeAuthDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuthDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuthDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeBaasPackageListOutcome TcbClient::DescribeBaasPackageList(const DescribeBaasPackageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaasPackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaasPackageListResponse rsp = DescribeBaasPackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaasPackageListOutcome(rsp);
        else
            return DescribeBaasPackageListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaasPackageListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeBaasPackageListAsync(const DescribeBaasPackageListRequest& request, const DescribeBaasPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaasPackageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeBaasPackageListOutcomeCallable TcbClient::DescribeBaasPackageListCallable(const DescribeBaasPackageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaasPackageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaasPackageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeBillingInfoOutcome TcbClient::DescribeBillingInfo(const DescribeBillingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingInfoResponse rsp = DescribeBillingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingInfoOutcome(rsp);
        else
            return DescribeBillingInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeBillingInfoAsync(const DescribeBillingInfoRequest& request, const DescribeBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillingInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeBillingInfoOutcomeCallable TcbClient::DescribeBillingInfoCallable(const DescribeBillingInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillingInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillingInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCbrServerVersionOutcome TcbClient::DescribeCbrServerVersion(const DescribeCbrServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCbrServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCbrServerVersionResponse rsp = DescribeCbrServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCbrServerVersionOutcome(rsp);
        else
            return DescribeCbrServerVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeCbrServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCbrServerVersionAsync(const DescribeCbrServerVersionRequest& request, const DescribeCbrServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCbrServerVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCbrServerVersionOutcomeCallable TcbClient::DescribeCbrServerVersionCallable(const DescribeCbrServerVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCbrServerVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeCbrServerVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseBuildServiceOutcome TcbClient::DescribeCloudBaseBuildService(const DescribeCloudBaseBuildServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseBuildService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseBuildServiceResponse rsp = DescribeCloudBaseBuildServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseBuildServiceOutcome(rsp);
        else
            return DescribeCloudBaseBuildServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseBuildServiceOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseBuildServiceAsync(const DescribeCloudBaseBuildServiceRequest& request, const DescribeCloudBaseBuildServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseBuildService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseBuildServiceOutcomeCallable TcbClient::DescribeCloudBaseBuildServiceCallable(const DescribeCloudBaseBuildServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseBuildServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseBuildService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseProjectLatestVersionListOutcome TcbClient::DescribeCloudBaseProjectLatestVersionList(const DescribeCloudBaseProjectLatestVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseProjectLatestVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseProjectLatestVersionListResponse rsp = DescribeCloudBaseProjectLatestVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseProjectLatestVersionListOutcome(rsp);
        else
            return DescribeCloudBaseProjectLatestVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseProjectLatestVersionListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseProjectLatestVersionListAsync(const DescribeCloudBaseProjectLatestVersionListRequest& request, const DescribeCloudBaseProjectLatestVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseProjectLatestVersionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseProjectLatestVersionListOutcomeCallable TcbClient::DescribeCloudBaseProjectLatestVersionListCallable(const DescribeCloudBaseProjectLatestVersionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseProjectLatestVersionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseProjectLatestVersionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseProjectVersionListOutcome TcbClient::DescribeCloudBaseProjectVersionList(const DescribeCloudBaseProjectVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseProjectVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseProjectVersionListResponse rsp = DescribeCloudBaseProjectVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseProjectVersionListOutcome(rsp);
        else
            return DescribeCloudBaseProjectVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseProjectVersionListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseProjectVersionListAsync(const DescribeCloudBaseProjectVersionListRequest& request, const DescribeCloudBaseProjectVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseProjectVersionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseProjectVersionListOutcomeCallable TcbClient::DescribeCloudBaseProjectVersionListCallable(const DescribeCloudBaseProjectVersionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseProjectVersionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseProjectVersionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunAllVpcsOutcome TcbClient::DescribeCloudBaseRunAllVpcs(const DescribeCloudBaseRunAllVpcsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunAllVpcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunAllVpcsResponse rsp = DescribeCloudBaseRunAllVpcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunAllVpcsOutcome(rsp);
        else
            return DescribeCloudBaseRunAllVpcsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunAllVpcsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunAllVpcsAsync(const DescribeCloudBaseRunAllVpcsRequest& request, const DescribeCloudBaseRunAllVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunAllVpcs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunAllVpcsOutcomeCallable TcbClient::DescribeCloudBaseRunAllVpcsCallable(const DescribeCloudBaseRunAllVpcsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunAllVpcsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunAllVpcs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunConfForGateWayOutcome TcbClient::DescribeCloudBaseRunConfForGateWay(const DescribeCloudBaseRunConfForGateWayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunConfForGateWay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunConfForGateWayResponse rsp = DescribeCloudBaseRunConfForGateWayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunConfForGateWayOutcome(rsp);
        else
            return DescribeCloudBaseRunConfForGateWayOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunConfForGateWayOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunConfForGateWayAsync(const DescribeCloudBaseRunConfForGateWayRequest& request, const DescribeCloudBaseRunConfForGateWayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunConfForGateWay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunConfForGateWayOutcomeCallable TcbClient::DescribeCloudBaseRunConfForGateWayCallable(const DescribeCloudBaseRunConfForGateWayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunConfForGateWayOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunConfForGateWay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunOneClickTaskExternalOutcome TcbClient::DescribeCloudBaseRunOneClickTaskExternal(const DescribeCloudBaseRunOneClickTaskExternalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunOneClickTaskExternal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunOneClickTaskExternalResponse rsp = DescribeCloudBaseRunOneClickTaskExternalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunOneClickTaskExternalOutcome(rsp);
        else
            return DescribeCloudBaseRunOneClickTaskExternalOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunOneClickTaskExternalOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunOneClickTaskExternalAsync(const DescribeCloudBaseRunOneClickTaskExternalRequest& request, const DescribeCloudBaseRunOneClickTaskExternalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunOneClickTaskExternal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunOneClickTaskExternalOutcomeCallable TcbClient::DescribeCloudBaseRunOneClickTaskExternalCallable(const DescribeCloudBaseRunOneClickTaskExternalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunOneClickTaskExternalOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunOneClickTaskExternal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunOperationTypesOutcome TcbClient::DescribeCloudBaseRunOperationTypes(const DescribeCloudBaseRunOperationTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunOperationTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunOperationTypesResponse rsp = DescribeCloudBaseRunOperationTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunOperationTypesOutcome(rsp);
        else
            return DescribeCloudBaseRunOperationTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunOperationTypesOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunOperationTypesAsync(const DescribeCloudBaseRunOperationTypesRequest& request, const DescribeCloudBaseRunOperationTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunOperationTypes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunOperationTypesOutcomeCallable TcbClient::DescribeCloudBaseRunOperationTypesCallable(const DescribeCloudBaseRunOperationTypesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunOperationTypesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunOperationTypes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunPodListOutcome TcbClient::DescribeCloudBaseRunPodList(const DescribeCloudBaseRunPodListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunPodList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunPodListResponse rsp = DescribeCloudBaseRunPodListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunPodListOutcome(rsp);
        else
            return DescribeCloudBaseRunPodListOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunPodListOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunPodListAsync(const DescribeCloudBaseRunPodListRequest& request, const DescribeCloudBaseRunPodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunPodList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunPodListOutcomeCallable TcbClient::DescribeCloudBaseRunPodListCallable(const DescribeCloudBaseRunPodListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunPodListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunPodList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunResourceOutcome TcbClient::DescribeCloudBaseRunResource(const DescribeCloudBaseRunResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunResourceResponse rsp = DescribeCloudBaseRunResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunResourceOutcome(rsp);
        else
            return DescribeCloudBaseRunResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunResourceOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunResourceAsync(const DescribeCloudBaseRunResourceRequest& request, const DescribeCloudBaseRunResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunResourceOutcomeCallable TcbClient::DescribeCloudBaseRunResourceCallable(const DescribeCloudBaseRunResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunResourceForExtendOutcome TcbClient::DescribeCloudBaseRunResourceForExtend(const DescribeCloudBaseRunResourceForExtendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunResourceForExtend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunResourceForExtendResponse rsp = DescribeCloudBaseRunResourceForExtendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunResourceForExtendOutcome(rsp);
        else
            return DescribeCloudBaseRunResourceForExtendOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunResourceForExtendOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunResourceForExtendAsync(const DescribeCloudBaseRunResourceForExtendRequest& request, const DescribeCloudBaseRunResourceForExtendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunResourceForExtend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunResourceForExtendOutcomeCallable TcbClient::DescribeCloudBaseRunResourceForExtendCallable(const DescribeCloudBaseRunResourceForExtendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunResourceForExtendOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunResourceForExtend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunServerOutcome TcbClient::DescribeCloudBaseRunServer(const DescribeCloudBaseRunServerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunServerResponse rsp = DescribeCloudBaseRunServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunServerOutcome(rsp);
        else
            return DescribeCloudBaseRunServerOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunServerOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunServerAsync(const DescribeCloudBaseRunServerRequest& request, const DescribeCloudBaseRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunServer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunServerOutcomeCallable TcbClient::DescribeCloudBaseRunServerCallable(const DescribeCloudBaseRunServerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunServerOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunServer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunServerDomainNameOutcome TcbClient::DescribeCloudBaseRunServerDomainName(const DescribeCloudBaseRunServerDomainNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunServerDomainName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunServerDomainNameResponse rsp = DescribeCloudBaseRunServerDomainNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunServerDomainNameOutcome(rsp);
        else
            return DescribeCloudBaseRunServerDomainNameOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunServerDomainNameOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunServerDomainNameAsync(const DescribeCloudBaseRunServerDomainNameRequest& request, const DescribeCloudBaseRunServerDomainNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunServerDomainName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunServerDomainNameOutcomeCallable TcbClient::DescribeCloudBaseRunServerDomainNameCallable(const DescribeCloudBaseRunServerDomainNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunServerDomainNameOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunServerDomainName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunServerVersionOutcome TcbClient::DescribeCloudBaseRunServerVersion(const DescribeCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunServerVersionResponse rsp = DescribeCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunServerVersionOutcome(rsp);
        else
            return DescribeCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunServerVersionAsync(const DescribeCloudBaseRunServerVersionRequest& request, const DescribeCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunServerVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunServerVersionOutcomeCallable TcbClient::DescribeCloudBaseRunServerVersionCallable(const DescribeCloudBaseRunServerVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunServerVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunServerVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunVersionOutcome TcbClient::DescribeCloudBaseRunVersion(const DescribeCloudBaseRunVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunVersionResponse rsp = DescribeCloudBaseRunVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunVersionOutcome(rsp);
        else
            return DescribeCloudBaseRunVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunVersionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunVersionAsync(const DescribeCloudBaseRunVersionRequest& request, const DescribeCloudBaseRunVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunVersionOutcomeCallable TcbClient::DescribeCloudBaseRunVersionCallable(const DescribeCloudBaseRunVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunVersionRsByConditionOutcome TcbClient::DescribeCloudBaseRunVersionRsByCondition(const DescribeCloudBaseRunVersionRsByConditionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunVersionRsByCondition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunVersionRsByConditionResponse rsp = DescribeCloudBaseRunVersionRsByConditionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunVersionRsByConditionOutcome(rsp);
        else
            return DescribeCloudBaseRunVersionRsByConditionOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunVersionRsByConditionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunVersionRsByConditionAsync(const DescribeCloudBaseRunVersionRsByConditionRequest& request, const DescribeCloudBaseRunVersionRsByConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunVersionRsByCondition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunVersionRsByConditionOutcomeCallable TcbClient::DescribeCloudBaseRunVersionRsByConditionCallable(const DescribeCloudBaseRunVersionRsByConditionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunVersionRsByConditionOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunVersionRsByCondition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCloudBaseRunVersionSnapshotOutcome TcbClient::DescribeCloudBaseRunVersionSnapshot(const DescribeCloudBaseRunVersionSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudBaseRunVersionSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudBaseRunVersionSnapshotResponse rsp = DescribeCloudBaseRunVersionSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudBaseRunVersionSnapshotOutcome(rsp);
        else
            return DescribeCloudBaseRunVersionSnapshotOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudBaseRunVersionSnapshotOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCloudBaseRunVersionSnapshotAsync(const DescribeCloudBaseRunVersionSnapshotRequest& request, const DescribeCloudBaseRunVersionSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudBaseRunVersionSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCloudBaseRunVersionSnapshotOutcomeCallable TcbClient::DescribeCloudBaseRunVersionSnapshotCallable(const DescribeCloudBaseRunVersionSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudBaseRunVersionSnapshotOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudBaseRunVersionSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeCurveDataOutcome TcbClient::DescribeCurveData(const DescribeCurveDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCurveData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCurveDataResponse rsp = DescribeCurveDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCurveDataOutcome(rsp);
        else
            return DescribeCurveDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCurveDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeCurveDataAsync(const DescribeCurveDataRequest& request, const DescribeCurveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCurveData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeCurveDataOutcomeCallable TcbClient::DescribeCurveDataCallable(const DescribeCurveDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCurveDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCurveData(request);
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

TcbClient::DescribeDownloadFileOutcome TcbClient::DescribeDownloadFile(const DescribeDownloadFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDownloadFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDownloadFileResponse rsp = DescribeDownloadFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDownloadFileOutcome(rsp);
        else
            return DescribeDownloadFileOutcome(o.GetError());
    }
    else
    {
        return DescribeDownloadFileOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeDownloadFileAsync(const DescribeDownloadFileRequest& request, const DescribeDownloadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDownloadFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeDownloadFileOutcomeCallable TcbClient::DescribeDownloadFileCallable(const DescribeDownloadFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDownloadFileOutcome()>>(
        [this, request]()
        {
            return this->DescribeDownloadFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEndUserLoginStatisticOutcome TcbClient::DescribeEndUserLoginStatistic(const DescribeEndUserLoginStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEndUserLoginStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEndUserLoginStatisticResponse rsp = DescribeEndUserLoginStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEndUserLoginStatisticOutcome(rsp);
        else
            return DescribeEndUserLoginStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeEndUserLoginStatisticOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEndUserLoginStatisticAsync(const DescribeEndUserLoginStatisticRequest& request, const DescribeEndUserLoginStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEndUserLoginStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEndUserLoginStatisticOutcomeCallable TcbClient::DescribeEndUserLoginStatisticCallable(const DescribeEndUserLoginStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEndUserLoginStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeEndUserLoginStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEndUserStatisticOutcome TcbClient::DescribeEndUserStatistic(const DescribeEndUserStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEndUserStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEndUserStatisticResponse rsp = DescribeEndUserStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEndUserStatisticOutcome(rsp);
        else
            return DescribeEndUserStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeEndUserStatisticOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEndUserStatisticAsync(const DescribeEndUserStatisticRequest& request, const DescribeEndUserStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEndUserStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEndUserStatisticOutcomeCallable TcbClient::DescribeEndUserStatisticCallable(const DescribeEndUserStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEndUserStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeEndUserStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEndUsersOutcome TcbClient::DescribeEndUsers(const DescribeEndUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEndUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEndUsersResponse rsp = DescribeEndUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEndUsersOutcome(rsp);
        else
            return DescribeEndUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeEndUsersOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEndUsersAsync(const DescribeEndUsersRequest& request, const DescribeEndUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEndUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEndUsersOutcomeCallable TcbClient::DescribeEndUsersCallable(const DescribeEndUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEndUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeEndUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEnvDealRegionOutcome TcbClient::DescribeEnvDealRegion(const DescribeEnvDealRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvDealRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvDealRegionResponse rsp = DescribeEnvDealRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvDealRegionOutcome(rsp);
        else
            return DescribeEnvDealRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvDealRegionOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvDealRegionAsync(const DescribeEnvDealRegionRequest& request, const DescribeEnvDealRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvDealRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEnvDealRegionOutcomeCallable TcbClient::DescribeEnvDealRegionCallable(const DescribeEnvDealRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvDealRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvDealRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEnvFreeQuotaOutcome TcbClient::DescribeEnvFreeQuota(const DescribeEnvFreeQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvFreeQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvFreeQuotaResponse rsp = DescribeEnvFreeQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvFreeQuotaOutcome(rsp);
        else
            return DescribeEnvFreeQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvFreeQuotaOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvFreeQuotaAsync(const DescribeEnvFreeQuotaRequest& request, const DescribeEnvFreeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvFreeQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEnvFreeQuotaOutcomeCallable TcbClient::DescribeEnvFreeQuotaCallable(const DescribeEnvFreeQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvFreeQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvFreeQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEnvLimitOutcome TcbClient::DescribeEnvLimit(const DescribeEnvLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvLimitResponse rsp = DescribeEnvLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvLimitOutcome(rsp);
        else
            return DescribeEnvLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvLimitOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvLimitAsync(const DescribeEnvLimitRequest& request, const DescribeEnvLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEnvLimitOutcomeCallable TcbClient::DescribeEnvLimitCallable(const DescribeEnvLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeEnvPostpaidDeductOutcome TcbClient::DescribeEnvPostpaidDeduct(const DescribeEnvPostpaidDeductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvPostpaidDeduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvPostpaidDeductResponse rsp = DescribeEnvPostpaidDeductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvPostpaidDeductOutcome(rsp);
        else
            return DescribeEnvPostpaidDeductOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvPostpaidDeductOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeEnvPostpaidDeductAsync(const DescribeEnvPostpaidDeductRequest& request, const DescribeEnvPostpaidDeductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvPostpaidDeduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeEnvPostpaidDeductOutcomeCallable TcbClient::DescribeEnvPostpaidDeductCallable(const DescribeEnvPostpaidDeductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvPostpaidDeductOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvPostpaidDeduct(request);
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

TcbClient::DescribeExtensionUploadInfoOutcome TcbClient::DescribeExtensionUploadInfo(const DescribeExtensionUploadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtensionUploadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtensionUploadInfoResponse rsp = DescribeExtensionUploadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtensionUploadInfoOutcome(rsp);
        else
            return DescribeExtensionUploadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeExtensionUploadInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeExtensionUploadInfoAsync(const DescribeExtensionUploadInfoRequest& request, const DescribeExtensionUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtensionUploadInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeExtensionUploadInfoOutcomeCallable TcbClient::DescribeExtensionUploadInfoCallable(const DescribeExtensionUploadInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtensionUploadInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtensionUploadInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeExtraPkgBillingInfoOutcome TcbClient::DescribeExtraPkgBillingInfo(const DescribeExtraPkgBillingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtraPkgBillingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtraPkgBillingInfoResponse rsp = DescribeExtraPkgBillingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtraPkgBillingInfoOutcome(rsp);
        else
            return DescribeExtraPkgBillingInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeExtraPkgBillingInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeExtraPkgBillingInfoAsync(const DescribeExtraPkgBillingInfoRequest& request, const DescribeExtraPkgBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExtraPkgBillingInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeExtraPkgBillingInfoOutcomeCallable TcbClient::DescribeExtraPkgBillingInfoCallable(const DescribeExtraPkgBillingInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExtraPkgBillingInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeExtraPkgBillingInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeGatewayCurveDataOutcome TcbClient::DescribeGatewayCurveData(const DescribeGatewayCurveDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayCurveData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayCurveDataResponse rsp = DescribeGatewayCurveDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayCurveDataOutcome(rsp);
        else
            return DescribeGatewayCurveDataOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayCurveDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeGatewayCurveDataAsync(const DescribeGatewayCurveDataRequest& request, const DescribeGatewayCurveDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayCurveData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeGatewayCurveDataOutcomeCallable TcbClient::DescribeGatewayCurveDataCallable(const DescribeGatewayCurveDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayCurveDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayCurveData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeGatewayVersionsOutcome TcbClient::DescribeGatewayVersions(const DescribeGatewayVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayVersionsResponse rsp = DescribeGatewayVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayVersionsOutcome(rsp);
        else
            return DescribeGatewayVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayVersionsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeGatewayVersionsAsync(const DescribeGatewayVersionsRequest& request, const DescribeGatewayVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeGatewayVersionsOutcomeCallable TcbClient::DescribeGatewayVersionsCallable(const DescribeGatewayVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeGraphDataOutcome TcbClient::DescribeGraphData(const DescribeGraphDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGraphData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGraphDataResponse rsp = DescribeGraphDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGraphDataOutcome(rsp);
        else
            return DescribeGraphDataOutcome(o.GetError());
    }
    else
    {
        return DescribeGraphDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeGraphDataAsync(const DescribeGraphDataRequest& request, const DescribeGraphDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGraphData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeGraphDataOutcomeCallable TcbClient::DescribeGraphDataCallable(const DescribeGraphDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGraphDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeGraphData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeHostingDomainTaskOutcome TcbClient::DescribeHostingDomainTask(const DescribeHostingDomainTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostingDomainTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostingDomainTaskResponse rsp = DescribeHostingDomainTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostingDomainTaskOutcome(rsp);
        else
            return DescribeHostingDomainTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeHostingDomainTaskOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeHostingDomainTaskAsync(const DescribeHostingDomainTaskRequest& request, const DescribeHostingDomainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostingDomainTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeHostingDomainTaskOutcomeCallable TcbClient::DescribeHostingDomainTaskCallable(const DescribeHostingDomainTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostingDomainTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostingDomainTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribePostpayFreeQuotasOutcome TcbClient::DescribePostpayFreeQuotas(const DescribePostpayFreeQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePostpayFreeQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePostpayFreeQuotasResponse rsp = DescribePostpayFreeQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePostpayFreeQuotasOutcome(rsp);
        else
            return DescribePostpayFreeQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribePostpayFreeQuotasOutcome(outcome.GetError());
    }
}

void TcbClient::DescribePostpayFreeQuotasAsync(const DescribePostpayFreeQuotasRequest& request, const DescribePostpayFreeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePostpayFreeQuotas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribePostpayFreeQuotasOutcomeCallable TcbClient::DescribePostpayFreeQuotasCallable(const DescribePostpayFreeQuotasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePostpayFreeQuotasOutcome()>>(
        [this, request]()
        {
            return this->DescribePostpayFreeQuotas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribePostpayPackageFreeQuotasOutcome TcbClient::DescribePostpayPackageFreeQuotas(const DescribePostpayPackageFreeQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePostpayPackageFreeQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePostpayPackageFreeQuotasResponse rsp = DescribePostpayPackageFreeQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePostpayPackageFreeQuotasOutcome(rsp);
        else
            return DescribePostpayPackageFreeQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribePostpayPackageFreeQuotasOutcome(outcome.GetError());
    }
}

void TcbClient::DescribePostpayPackageFreeQuotasAsync(const DescribePostpayPackageFreeQuotasRequest& request, const DescribePostpayPackageFreeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePostpayPackageFreeQuotas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribePostpayPackageFreeQuotasOutcomeCallable TcbClient::DescribePostpayPackageFreeQuotasCallable(const DescribePostpayPackageFreeQuotasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePostpayPackageFreeQuotasOutcome()>>(
        [this, request]()
        {
            return this->DescribePostpayPackageFreeQuotas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeQuotaDataOutcome TcbClient::DescribeQuotaData(const DescribeQuotaDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotaDataResponse rsp = DescribeQuotaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotaDataOutcome(rsp);
        else
            return DescribeQuotaDataOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotaDataOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeQuotaDataAsync(const DescribeQuotaDataRequest& request, const DescribeQuotaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQuotaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeQuotaDataOutcomeCallable TcbClient::DescribeQuotaDataCallable(const DescribeQuotaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQuotaDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeQuotaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeSmsQuotasOutcome TcbClient::DescribeSmsQuotas(const DescribeSmsQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmsQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmsQuotasResponse rsp = DescribeSmsQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmsQuotasOutcome(rsp);
        else
            return DescribeSmsQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribeSmsQuotasOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeSmsQuotasAsync(const DescribeSmsQuotasRequest& request, const DescribeSmsQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmsQuotas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeSmsQuotasOutcomeCallable TcbClient::DescribeSmsQuotasCallable(const DescribeSmsQuotasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmsQuotasOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmsQuotas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeSpecialCostItemsOutcome TcbClient::DescribeSpecialCostItems(const DescribeSpecialCostItemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpecialCostItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecialCostItemsResponse rsp = DescribeSpecialCostItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecialCostItemsOutcome(rsp);
        else
            return DescribeSpecialCostItemsOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecialCostItemsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeSpecialCostItemsAsync(const DescribeSpecialCostItemsRequest& request, const DescribeSpecialCostItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpecialCostItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeSpecialCostItemsOutcomeCallable TcbClient::DescribeSpecialCostItemsCallable(const DescribeSpecialCostItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpecialCostItemsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpecialCostItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeStandaloneGatewayOutcome TcbClient::DescribeStandaloneGateway(const DescribeStandaloneGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStandaloneGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStandaloneGatewayResponse rsp = DescribeStandaloneGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStandaloneGatewayOutcome(rsp);
        else
            return DescribeStandaloneGatewayOutcome(o.GetError());
    }
    else
    {
        return DescribeStandaloneGatewayOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeStandaloneGatewayAsync(const DescribeStandaloneGatewayRequest& request, const DescribeStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStandaloneGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeStandaloneGatewayOutcomeCallable TcbClient::DescribeStandaloneGatewayCallable(const DescribeStandaloneGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStandaloneGatewayOutcome()>>(
        [this, request]()
        {
            return this->DescribeStandaloneGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeStandaloneGatewayPackageOutcome TcbClient::DescribeStandaloneGatewayPackage(const DescribeStandaloneGatewayPackageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStandaloneGatewayPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStandaloneGatewayPackageResponse rsp = DescribeStandaloneGatewayPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStandaloneGatewayPackageOutcome(rsp);
        else
            return DescribeStandaloneGatewayPackageOutcome(o.GetError());
    }
    else
    {
        return DescribeStandaloneGatewayPackageOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeStandaloneGatewayPackageAsync(const DescribeStandaloneGatewayPackageRequest& request, const DescribeStandaloneGatewayPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStandaloneGatewayPackage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeStandaloneGatewayPackageOutcomeCallable TcbClient::DescribeStandaloneGatewayPackageCallable(const DescribeStandaloneGatewayPackageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStandaloneGatewayPackageOutcome()>>(
        [this, request]()
        {
            return this->DescribeStandaloneGatewayPackage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeUserActivityInfoOutcome TcbClient::DescribeUserActivityInfo(const DescribeUserActivityInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserActivityInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserActivityInfoResponse rsp = DescribeUserActivityInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserActivityInfoOutcome(rsp);
        else
            return DescribeUserActivityInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserActivityInfoOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeUserActivityInfoAsync(const DescribeUserActivityInfoRequest& request, const DescribeUserActivityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserActivityInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeUserActivityInfoOutcomeCallable TcbClient::DescribeUserActivityInfoCallable(const DescribeUserActivityInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserActivityInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserActivityInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeWxCloudBaseRunEnvsOutcome TcbClient::DescribeWxCloudBaseRunEnvs(const DescribeWxCloudBaseRunEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWxCloudBaseRunEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWxCloudBaseRunEnvsResponse rsp = DescribeWxCloudBaseRunEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWxCloudBaseRunEnvsOutcome(rsp);
        else
            return DescribeWxCloudBaseRunEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeWxCloudBaseRunEnvsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeWxCloudBaseRunEnvsAsync(const DescribeWxCloudBaseRunEnvsRequest& request, const DescribeWxCloudBaseRunEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWxCloudBaseRunEnvs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeWxCloudBaseRunEnvsOutcomeCallable TcbClient::DescribeWxCloudBaseRunEnvsCallable(const DescribeWxCloudBaseRunEnvsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWxCloudBaseRunEnvsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWxCloudBaseRunEnvs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeWxCloudBaseRunSubNetsOutcome TcbClient::DescribeWxCloudBaseRunSubNets(const DescribeWxCloudBaseRunSubNetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWxCloudBaseRunSubNets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWxCloudBaseRunSubNetsResponse rsp = DescribeWxCloudBaseRunSubNetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWxCloudBaseRunSubNetsOutcome(rsp);
        else
            return DescribeWxCloudBaseRunSubNetsOutcome(o.GetError());
    }
    else
    {
        return DescribeWxCloudBaseRunSubNetsOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeWxCloudBaseRunSubNetsAsync(const DescribeWxCloudBaseRunSubNetsRequest& request, const DescribeWxCloudBaseRunSubNetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWxCloudBaseRunSubNets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeWxCloudBaseRunSubNetsOutcomeCallable TcbClient::DescribeWxCloudBaseRunSubNetsCallable(const DescribeWxCloudBaseRunSubNetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWxCloudBaseRunSubNetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWxCloudBaseRunSubNets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeWxGatewayRoutesOutcome TcbClient::DescribeWxGatewayRoutes(const DescribeWxGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWxGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWxGatewayRoutesResponse rsp = DescribeWxGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWxGatewayRoutesOutcome(rsp);
        else
            return DescribeWxGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeWxGatewayRoutesOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeWxGatewayRoutesAsync(const DescribeWxGatewayRoutesRequest& request, const DescribeWxGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWxGatewayRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeWxGatewayRoutesOutcomeCallable TcbClient::DescribeWxGatewayRoutesCallable(const DescribeWxGatewayRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWxGatewayRoutesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWxGatewayRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DescribeWxGatewaysOutcome TcbClient::DescribeWxGateways(const DescribeWxGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWxGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWxGatewaysResponse rsp = DescribeWxGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWxGatewaysOutcome(rsp);
        else
            return DescribeWxGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeWxGatewaysOutcome(outcome.GetError());
    }
}

void TcbClient::DescribeWxGatewaysAsync(const DescribeWxGatewaysRequest& request, const DescribeWxGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWxGateways(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DescribeWxGatewaysOutcomeCallable TcbClient::DescribeWxGatewaysCallable(const DescribeWxGatewaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWxGatewaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeWxGateways(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DestroyEnvOutcome TcbClient::DestroyEnv(const DestroyEnvRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyEnvResponse rsp = DestroyEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyEnvOutcome(rsp);
        else
            return DestroyEnvOutcome(o.GetError());
    }
    else
    {
        return DestroyEnvOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyEnvAsync(const DestroyEnvRequest& request, const DestroyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DestroyEnvOutcomeCallable TcbClient::DestroyEnvCallable(const DestroyEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyEnvOutcome()>>(
        [this, request]()
        {
            return this->DestroyEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DestroyStandaloneGatewayOutcome TcbClient::DestroyStandaloneGateway(const DestroyStandaloneGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyStandaloneGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyStandaloneGatewayResponse rsp = DestroyStandaloneGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyStandaloneGatewayOutcome(rsp);
        else
            return DestroyStandaloneGatewayOutcome(o.GetError());
    }
    else
    {
        return DestroyStandaloneGatewayOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyStandaloneGatewayAsync(const DestroyStandaloneGatewayRequest& request, const DestroyStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyStandaloneGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DestroyStandaloneGatewayOutcomeCallable TcbClient::DestroyStandaloneGatewayCallable(const DestroyStandaloneGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyStandaloneGatewayOutcome()>>(
        [this, request]()
        {
            return this->DestroyStandaloneGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::DestroyStaticStoreOutcome TcbClient::DestroyStaticStore(const DestroyStaticStoreRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyStaticStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyStaticStoreResponse rsp = DestroyStaticStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyStaticStoreOutcome(rsp);
        else
            return DestroyStaticStoreOutcome(o.GetError());
    }
    else
    {
        return DestroyStaticStoreOutcome(outcome.GetError());
    }
}

void TcbClient::DestroyStaticStoreAsync(const DestroyStaticStoreRequest& request, const DestroyStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyStaticStore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::DestroyStaticStoreOutcomeCallable TcbClient::DestroyStaticStoreCallable(const DestroyStaticStoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyStaticStoreOutcome()>>(
        [this, request]()
        {
            return this->DestroyStaticStore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::EditAuthConfigOutcome TcbClient::EditAuthConfig(const EditAuthConfigRequest &request)
{
    auto outcome = MakeRequest(request, "EditAuthConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditAuthConfigResponse rsp = EditAuthConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditAuthConfigOutcome(rsp);
        else
            return EditAuthConfigOutcome(o.GetError());
    }
    else
    {
        return EditAuthConfigOutcome(outcome.GetError());
    }
}

void TcbClient::EditAuthConfigAsync(const EditAuthConfigRequest& request, const EditAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditAuthConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::EditAuthConfigOutcomeCallable TcbClient::EditAuthConfigCallable(const EditAuthConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditAuthConfigOutcome()>>(
        [this, request]()
        {
            return this->EditAuthConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::EstablishCloudBaseRunServerOutcome TcbClient::EstablishCloudBaseRunServer(const EstablishCloudBaseRunServerRequest &request)
{
    auto outcome = MakeRequest(request, "EstablishCloudBaseRunServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EstablishCloudBaseRunServerResponse rsp = EstablishCloudBaseRunServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EstablishCloudBaseRunServerOutcome(rsp);
        else
            return EstablishCloudBaseRunServerOutcome(o.GetError());
    }
    else
    {
        return EstablishCloudBaseRunServerOutcome(outcome.GetError());
    }
}

void TcbClient::EstablishCloudBaseRunServerAsync(const EstablishCloudBaseRunServerRequest& request, const EstablishCloudBaseRunServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EstablishCloudBaseRunServer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::EstablishCloudBaseRunServerOutcomeCallable TcbClient::EstablishCloudBaseRunServerCallable(const EstablishCloudBaseRunServerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EstablishCloudBaseRunServerOutcome()>>(
        [this, request]()
        {
            return this->EstablishCloudBaseRunServer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::EstablishWxGatewayRouteOutcome TcbClient::EstablishWxGatewayRoute(const EstablishWxGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "EstablishWxGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EstablishWxGatewayRouteResponse rsp = EstablishWxGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EstablishWxGatewayRouteOutcome(rsp);
        else
            return EstablishWxGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return EstablishWxGatewayRouteOutcome(outcome.GetError());
    }
}

void TcbClient::EstablishWxGatewayRouteAsync(const EstablishWxGatewayRouteRequest& request, const EstablishWxGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EstablishWxGatewayRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::EstablishWxGatewayRouteOutcomeCallable TcbClient::EstablishWxGatewayRouteCallable(const EstablishWxGatewayRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EstablishWxGatewayRouteOutcome()>>(
        [this, request]()
        {
            return this->EstablishWxGatewayRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::FreezeCloudBaseRunServersOutcome TcbClient::FreezeCloudBaseRunServers(const FreezeCloudBaseRunServersRequest &request)
{
    auto outcome = MakeRequest(request, "FreezeCloudBaseRunServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreezeCloudBaseRunServersResponse rsp = FreezeCloudBaseRunServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreezeCloudBaseRunServersOutcome(rsp);
        else
            return FreezeCloudBaseRunServersOutcome(o.GetError());
    }
    else
    {
        return FreezeCloudBaseRunServersOutcome(outcome.GetError());
    }
}

void TcbClient::FreezeCloudBaseRunServersAsync(const FreezeCloudBaseRunServersRequest& request, const FreezeCloudBaseRunServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FreezeCloudBaseRunServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::FreezeCloudBaseRunServersOutcomeCallable TcbClient::FreezeCloudBaseRunServersCallable(const FreezeCloudBaseRunServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FreezeCloudBaseRunServersOutcome()>>(
        [this, request]()
        {
            return this->FreezeCloudBaseRunServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ModifyCloudBaseRunServerFlowConfOutcome TcbClient::ModifyCloudBaseRunServerFlowConf(const ModifyCloudBaseRunServerFlowConfRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudBaseRunServerFlowConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudBaseRunServerFlowConfResponse rsp = ModifyCloudBaseRunServerFlowConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudBaseRunServerFlowConfOutcome(rsp);
        else
            return ModifyCloudBaseRunServerFlowConfOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudBaseRunServerFlowConfOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyCloudBaseRunServerFlowConfAsync(const ModifyCloudBaseRunServerFlowConfRequest& request, const ModifyCloudBaseRunServerFlowConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudBaseRunServerFlowConf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ModifyCloudBaseRunServerFlowConfOutcomeCallable TcbClient::ModifyCloudBaseRunServerFlowConfCallable(const ModifyCloudBaseRunServerFlowConfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudBaseRunServerFlowConfOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudBaseRunServerFlowConf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ModifyCloudBaseRunServerVersionOutcome TcbClient::ModifyCloudBaseRunServerVersion(const ModifyCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudBaseRunServerVersionResponse rsp = ModifyCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudBaseRunServerVersionOutcome(rsp);
        else
            return ModifyCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyCloudBaseRunServerVersionAsync(const ModifyCloudBaseRunServerVersionRequest& request, const ModifyCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudBaseRunServerVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ModifyCloudBaseRunServerVersionOutcomeCallable TcbClient::ModifyCloudBaseRunServerVersionCallable(const ModifyCloudBaseRunServerVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudBaseRunServerVersionOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudBaseRunServerVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ModifyClsTopicOutcome TcbClient::ModifyClsTopic(const ModifyClsTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClsTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClsTopicResponse rsp = ModifyClsTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClsTopicOutcome(rsp);
        else
            return ModifyClsTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyClsTopicOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyClsTopicAsync(const ModifyClsTopicRequest& request, const ModifyClsTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClsTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ModifyClsTopicOutcomeCallable TcbClient::ModifyClsTopicCallable(const ModifyClsTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClsTopicOutcome()>>(
        [this, request]()
        {
            return this->ModifyClsTopic(request);
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

TcbClient::ModifyEndUserOutcome TcbClient::ModifyEndUser(const ModifyEndUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEndUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEndUserResponse rsp = ModifyEndUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEndUserOutcome(rsp);
        else
            return ModifyEndUserOutcome(o.GetError());
    }
    else
    {
        return ModifyEndUserOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyEndUserAsync(const ModifyEndUserRequest& request, const ModifyEndUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEndUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ModifyEndUserOutcomeCallable TcbClient::ModifyEndUserCallable(const ModifyEndUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEndUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyEndUser(request);
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

TcbClient::ModifyGatewayVersionTrafficOutcome TcbClient::ModifyGatewayVersionTraffic(const ModifyGatewayVersionTrafficRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGatewayVersionTraffic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGatewayVersionTrafficResponse rsp = ModifyGatewayVersionTrafficResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGatewayVersionTrafficOutcome(rsp);
        else
            return ModifyGatewayVersionTrafficOutcome(o.GetError());
    }
    else
    {
        return ModifyGatewayVersionTrafficOutcome(outcome.GetError());
    }
}

void TcbClient::ModifyGatewayVersionTrafficAsync(const ModifyGatewayVersionTrafficRequest& request, const ModifyGatewayVersionTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGatewayVersionTraffic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ModifyGatewayVersionTrafficOutcomeCallable TcbClient::ModifyGatewayVersionTrafficCallable(const ModifyGatewayVersionTrafficRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGatewayVersionTrafficOutcome()>>(
        [this, request]()
        {
            return this->ModifyGatewayVersionTraffic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ReinstateEnvOutcome TcbClient::ReinstateEnv(const ReinstateEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ReinstateEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReinstateEnvResponse rsp = ReinstateEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReinstateEnvOutcome(rsp);
        else
            return ReinstateEnvOutcome(o.GetError());
    }
    else
    {
        return ReinstateEnvOutcome(outcome.GetError());
    }
}

void TcbClient::ReinstateEnvAsync(const ReinstateEnvRequest& request, const ReinstateEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReinstateEnv(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ReinstateEnvOutcomeCallable TcbClient::ReinstateEnvCallable(const ReinstateEnvRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReinstateEnvOutcome()>>(
        [this, request]()
        {
            return this->ReinstateEnv(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::ReplaceActivityRecordOutcome TcbClient::ReplaceActivityRecord(const ReplaceActivityRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceActivityRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceActivityRecordResponse rsp = ReplaceActivityRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceActivityRecordOutcome(rsp);
        else
            return ReplaceActivityRecordOutcome(o.GetError());
    }
    else
    {
        return ReplaceActivityRecordOutcome(outcome.GetError());
    }
}

void TcbClient::ReplaceActivityRecordAsync(const ReplaceActivityRecordRequest& request, const ReplaceActivityRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceActivityRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::ReplaceActivityRecordOutcomeCallable TcbClient::ReplaceActivityRecordCallable(const ReplaceActivityRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceActivityRecordOutcome()>>(
        [this, request]()
        {
            return this->ReplaceActivityRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::RollUpdateCloudBaseRunServerVersionOutcome TcbClient::RollUpdateCloudBaseRunServerVersion(const RollUpdateCloudBaseRunServerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RollUpdateCloudBaseRunServerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollUpdateCloudBaseRunServerVersionResponse rsp = RollUpdateCloudBaseRunServerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollUpdateCloudBaseRunServerVersionOutcome(rsp);
        else
            return RollUpdateCloudBaseRunServerVersionOutcome(o.GetError());
    }
    else
    {
        return RollUpdateCloudBaseRunServerVersionOutcome(outcome.GetError());
    }
}

void TcbClient::RollUpdateCloudBaseRunServerVersionAsync(const RollUpdateCloudBaseRunServerVersionRequest& request, const RollUpdateCloudBaseRunServerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollUpdateCloudBaseRunServerVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::RollUpdateCloudBaseRunServerVersionOutcomeCallable TcbClient::RollUpdateCloudBaseRunServerVersionCallable(const RollUpdateCloudBaseRunServerVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollUpdateCloudBaseRunServerVersionOutcome()>>(
        [this, request]()
        {
            return this->RollUpdateCloudBaseRunServerVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::SearchClsLogOutcome TcbClient::SearchClsLog(const SearchClsLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchClsLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchClsLogResponse rsp = SearchClsLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchClsLogOutcome(rsp);
        else
            return SearchClsLogOutcome(o.GetError());
    }
    else
    {
        return SearchClsLogOutcome(outcome.GetError());
    }
}

void TcbClient::SearchClsLogAsync(const SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchClsLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::SearchClsLogOutcomeCallable TcbClient::SearchClsLogCallable(const SearchClsLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchClsLogOutcome()>>(
        [this, request]()
        {
            return this->SearchClsLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::TurnOffStandaloneGatewayOutcome TcbClient::TurnOffStandaloneGateway(const TurnOffStandaloneGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "TurnOffStandaloneGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TurnOffStandaloneGatewayResponse rsp = TurnOffStandaloneGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TurnOffStandaloneGatewayOutcome(rsp);
        else
            return TurnOffStandaloneGatewayOutcome(o.GetError());
    }
    else
    {
        return TurnOffStandaloneGatewayOutcome(outcome.GetError());
    }
}

void TcbClient::TurnOffStandaloneGatewayAsync(const TurnOffStandaloneGatewayRequest& request, const TurnOffStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TurnOffStandaloneGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::TurnOffStandaloneGatewayOutcomeCallable TcbClient::TurnOffStandaloneGatewayCallable(const TurnOffStandaloneGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TurnOffStandaloneGatewayOutcome()>>(
        [this, request]()
        {
            return this->TurnOffStandaloneGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::TurnOnStandaloneGatewayOutcome TcbClient::TurnOnStandaloneGateway(const TurnOnStandaloneGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "TurnOnStandaloneGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TurnOnStandaloneGatewayResponse rsp = TurnOnStandaloneGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TurnOnStandaloneGatewayOutcome(rsp);
        else
            return TurnOnStandaloneGatewayOutcome(o.GetError());
    }
    else
    {
        return TurnOnStandaloneGatewayOutcome(outcome.GetError());
    }
}

void TcbClient::TurnOnStandaloneGatewayAsync(const TurnOnStandaloneGatewayRequest& request, const TurnOnStandaloneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TurnOnStandaloneGateway(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::TurnOnStandaloneGatewayOutcomeCallable TcbClient::TurnOnStandaloneGatewayCallable(const TurnOnStandaloneGatewayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TurnOnStandaloneGatewayOutcome()>>(
        [this, request]()
        {
            return this->TurnOnStandaloneGateway(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcbClient::UnfreezeCloudBaseRunServersOutcome TcbClient::UnfreezeCloudBaseRunServers(const UnfreezeCloudBaseRunServersRequest &request)
{
    auto outcome = MakeRequest(request, "UnfreezeCloudBaseRunServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnfreezeCloudBaseRunServersResponse rsp = UnfreezeCloudBaseRunServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnfreezeCloudBaseRunServersOutcome(rsp);
        else
            return UnfreezeCloudBaseRunServersOutcome(o.GetError());
    }
    else
    {
        return UnfreezeCloudBaseRunServersOutcome(outcome.GetError());
    }
}

void TcbClient::UnfreezeCloudBaseRunServersAsync(const UnfreezeCloudBaseRunServersRequest& request, const UnfreezeCloudBaseRunServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnfreezeCloudBaseRunServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcbClient::UnfreezeCloudBaseRunServersOutcomeCallable TcbClient::UnfreezeCloudBaseRunServersCallable(const UnfreezeCloudBaseRunServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnfreezeCloudBaseRunServersOutcome()>>(
        [this, request]()
        {
            return this->UnfreezeCloudBaseRunServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

