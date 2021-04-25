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

