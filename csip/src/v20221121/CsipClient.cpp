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

#include <tencentcloud/csip/v20221121/CsipClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Csip::V20221121;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-21";
    const string ENDPOINT = "csip.tencentcloudapi.com";
}

CsipClient::CsipClient(const Credential &credential, const string &region) :
    CsipClient(credential, region, ClientProfile())
{
}

CsipClient::CsipClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CsipClient::AddNewBindRoleUserOutcome CsipClient::AddNewBindRoleUser(const AddNewBindRoleUserRequest &request)
{
    auto outcome = MakeRequest(request, "AddNewBindRoleUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNewBindRoleUserResponse rsp = AddNewBindRoleUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNewBindRoleUserOutcome(rsp);
        else
            return AddNewBindRoleUserOutcome(o.GetError());
    }
    else
    {
        return AddNewBindRoleUserOutcome(outcome.GetError());
    }
}

void CsipClient::AddNewBindRoleUserAsync(const AddNewBindRoleUserRequest& request, const AddNewBindRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNewBindRoleUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::AddNewBindRoleUserOutcomeCallable CsipClient::AddNewBindRoleUserCallable(const AddNewBindRoleUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNewBindRoleUserOutcome()>>(
        [this, request]()
        {
            return this->AddNewBindRoleUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::CreateDomainAndIpOutcome CsipClient::CreateDomainAndIp(const CreateDomainAndIpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainAndIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainAndIpResponse rsp = CreateDomainAndIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainAndIpOutcome(rsp);
        else
            return CreateDomainAndIpOutcome(o.GetError());
    }
    else
    {
        return CreateDomainAndIpOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDomainAndIpAsync(const CreateDomainAndIpRequest& request, const CreateDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainAndIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::CreateDomainAndIpOutcomeCallable CsipClient::CreateDomainAndIpCallable(const CreateDomainAndIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainAndIpOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainAndIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::CreateRiskCenterScanTaskOutcome CsipClient::CreateRiskCenterScanTask(const CreateRiskCenterScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRiskCenterScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRiskCenterScanTaskResponse rsp = CreateRiskCenterScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRiskCenterScanTaskOutcome(rsp);
        else
            return CreateRiskCenterScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRiskCenterScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateRiskCenterScanTaskAsync(const CreateRiskCenterScanTaskRequest& request, const CreateRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRiskCenterScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::CreateRiskCenterScanTaskOutcomeCallable CsipClient::CreateRiskCenterScanTaskCallable(const CreateRiskCenterScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRiskCenterScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRiskCenterScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DeleteDomainAndIpOutcome CsipClient::DeleteDomainAndIp(const DeleteDomainAndIpRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainAndIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainAndIpResponse rsp = DeleteDomainAndIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainAndIpOutcome(rsp);
        else
            return DeleteDomainAndIpOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainAndIpOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDomainAndIpAsync(const DeleteDomainAndIpRequest& request, const DeleteDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomainAndIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DeleteDomainAndIpOutcomeCallable CsipClient::DeleteDomainAndIpCallable(const DeleteDomainAndIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainAndIpOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomainAndIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DeleteRiskScanTaskOutcome CsipClient::DeleteRiskScanTask(const DeleteRiskScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRiskScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRiskScanTaskResponse rsp = DeleteRiskScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRiskScanTaskOutcome(rsp);
        else
            return DeleteRiskScanTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRiskScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteRiskScanTaskAsync(const DeleteRiskScanTaskRequest& request, const DeleteRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRiskScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DeleteRiskScanTaskOutcomeCallable CsipClient::DeleteRiskScanTaskCallable(const DeleteRiskScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRiskScanTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteRiskScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCVMAssetInfoOutcome CsipClient::DescribeCVMAssetInfo(const DescribeCVMAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCVMAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCVMAssetInfoResponse rsp = DescribeCVMAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCVMAssetInfoOutcome(rsp);
        else
            return DescribeCVMAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCVMAssetInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCVMAssetInfoAsync(const DescribeCVMAssetInfoRequest& request, const DescribeCVMAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCVMAssetInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCVMAssetInfoOutcomeCallable CsipClient::DescribeCVMAssetInfoCallable(const DescribeCVMAssetInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCVMAssetInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCVMAssetInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCVMAssetsOutcome CsipClient::DescribeCVMAssets(const DescribeCVMAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCVMAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCVMAssetsResponse rsp = DescribeCVMAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCVMAssetsOutcome(rsp);
        else
            return DescribeCVMAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeCVMAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCVMAssetsAsync(const DescribeCVMAssetsRequest& request, const DescribeCVMAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCVMAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCVMAssetsOutcomeCallable CsipClient::DescribeCVMAssetsCallable(const DescribeCVMAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCVMAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCVMAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeClusterPodAssetsOutcome CsipClient::DescribeClusterPodAssets(const DescribeClusterPodAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterPodAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterPodAssetsResponse rsp = DescribeClusterPodAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterPodAssetsOutcome(rsp);
        else
            return DescribeClusterPodAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterPodAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeClusterPodAssetsAsync(const DescribeClusterPodAssetsRequest& request, const DescribeClusterPodAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterPodAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeClusterPodAssetsOutcomeCallable CsipClient::DescribeClusterPodAssetsCallable(const DescribeClusterPodAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterPodAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterPodAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeDbAssetInfoOutcome CsipClient::DescribeDbAssetInfo(const DescribeDbAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbAssetInfoResponse rsp = DescribeDbAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbAssetInfoOutcome(rsp);
        else
            return DescribeDbAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDbAssetInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDbAssetInfoAsync(const DescribeDbAssetInfoRequest& request, const DescribeDbAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDbAssetInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeDbAssetInfoOutcomeCallable CsipClient::DescribeDbAssetInfoCallable(const DescribeDbAssetInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDbAssetInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDbAssetInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeDbAssetsOutcome CsipClient::DescribeDbAssets(const DescribeDbAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbAssetsResponse rsp = DescribeDbAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbAssetsOutcome(rsp);
        else
            return DescribeDbAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDbAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDbAssetsAsync(const DescribeDbAssetsRequest& request, const DescribeDbAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDbAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeDbAssetsOutcomeCallable CsipClient::DescribeDbAssetsCallable(const DescribeDbAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDbAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDbAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeDomainAssetsOutcome CsipClient::DescribeDomainAssets(const DescribeDomainAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAssetsResponse rsp = DescribeDomainAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAssetsOutcome(rsp);
        else
            return DescribeDomainAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDomainAssetsAsync(const DescribeDomainAssetsRequest& request, const DescribeDomainAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeDomainAssetsOutcomeCallable CsipClient::DescribeDomainAssetsCallable(const DescribeDomainAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeListenerListOutcome CsipClient::DescribeListenerList(const DescribeListenerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListenerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenerListResponse rsp = DescribeListenerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenerListOutcome(rsp);
        else
            return DescribeListenerListOutcome(o.GetError());
    }
    else
    {
        return DescribeListenerListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeListenerListAsync(const DescribeListenerListRequest& request, const DescribeListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListenerList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeListenerListOutcomeCallable CsipClient::DescribeListenerListCallable(const DescribeListenerListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListenerListOutcome()>>(
        [this, request]()
        {
            return this->DescribeListenerList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribePublicIpAssetsOutcome CsipClient::DescribePublicIpAssets(const DescribePublicIpAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicIpAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicIpAssetsResponse rsp = DescribePublicIpAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicIpAssetsOutcome(rsp);
        else
            return DescribePublicIpAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribePublicIpAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribePublicIpAssetsAsync(const DescribePublicIpAssetsRequest& request, const DescribePublicIpAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicIpAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribePublicIpAssetsOutcomeCallable CsipClient::DescribePublicIpAssetsCallable(const DescribePublicIpAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicIpAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicIpAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewCFGRiskListOutcome CsipClient::DescribeRiskCenterAssetViewCFGRiskList(const DescribeRiskCenterAssetViewCFGRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewCFGRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewCFGRiskListResponse rsp = DescribeRiskCenterAssetViewCFGRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewCFGRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewCFGRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewCFGRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewCFGRiskListAsync(const DescribeRiskCenterAssetViewCFGRiskListRequest& request, const DescribeRiskCenterAssetViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewCFGRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewCFGRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewCFGRiskListCallable(const DescribeRiskCenterAssetViewCFGRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewCFGRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewCFGRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewPortRiskListOutcome CsipClient::DescribeRiskCenterAssetViewPortRiskList(const DescribeRiskCenterAssetViewPortRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewPortRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewPortRiskListResponse rsp = DescribeRiskCenterAssetViewPortRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewPortRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewPortRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewPortRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewPortRiskListAsync(const DescribeRiskCenterAssetViewPortRiskListRequest& request, const DescribeRiskCenterAssetViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewPortRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewPortRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewPortRiskListCallable(const DescribeRiskCenterAssetViewPortRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewPortRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewPortRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewVULRiskListOutcome CsipClient::DescribeRiskCenterAssetViewVULRiskList(const DescribeRiskCenterAssetViewVULRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewVULRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewVULRiskListResponse rsp = DescribeRiskCenterAssetViewVULRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewVULRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewVULRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewVULRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewVULRiskListAsync(const DescribeRiskCenterAssetViewVULRiskListRequest& request, const DescribeRiskCenterAssetViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewVULRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewVULRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewVULRiskListCallable(const DescribeRiskCenterAssetViewVULRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewVULRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewVULRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskList(const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewWeakPasswordRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewWeakPasswordRiskListResponse rsp = DescribeRiskCenterAssetViewWeakPasswordRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListAsync(const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest& request, const DescribeRiskCenterAssetViewWeakPasswordRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewWeakPasswordRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListCallable(const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewWeakPasswordRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterPortViewPortRiskListOutcome CsipClient::DescribeRiskCenterPortViewPortRiskList(const DescribeRiskCenterPortViewPortRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterPortViewPortRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterPortViewPortRiskListResponse rsp = DescribeRiskCenterPortViewPortRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterPortViewPortRiskListOutcome(rsp);
        else
            return DescribeRiskCenterPortViewPortRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterPortViewPortRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterPortViewPortRiskListAsync(const DescribeRiskCenterPortViewPortRiskListRequest& request, const DescribeRiskCenterPortViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterPortViewPortRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterPortViewPortRiskListOutcomeCallable CsipClient::DescribeRiskCenterPortViewPortRiskListCallable(const DescribeRiskCenterPortViewPortRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterPortViewPortRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterPortViewPortRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterServerRiskListOutcome CsipClient::DescribeRiskCenterServerRiskList(const DescribeRiskCenterServerRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterServerRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterServerRiskListResponse rsp = DescribeRiskCenterServerRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterServerRiskListOutcome(rsp);
        else
            return DescribeRiskCenterServerRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterServerRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterServerRiskListAsync(const DescribeRiskCenterServerRiskListRequest& request, const DescribeRiskCenterServerRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterServerRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterServerRiskListOutcomeCallable CsipClient::DescribeRiskCenterServerRiskListCallable(const DescribeRiskCenterServerRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterServerRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterServerRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterVULViewVULRiskListOutcome CsipClient::DescribeRiskCenterVULViewVULRiskList(const DescribeRiskCenterVULViewVULRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterVULViewVULRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterVULViewVULRiskListResponse rsp = DescribeRiskCenterVULViewVULRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterVULViewVULRiskListOutcome(rsp);
        else
            return DescribeRiskCenterVULViewVULRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterVULViewVULRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterVULViewVULRiskListAsync(const DescribeRiskCenterVULViewVULRiskListRequest& request, const DescribeRiskCenterVULViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterVULViewVULRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterVULViewVULRiskListOutcomeCallable CsipClient::DescribeRiskCenterVULViewVULRiskListCallable(const DescribeRiskCenterVULViewVULRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterVULViewVULRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterVULViewVULRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterWebsiteRiskListOutcome CsipClient::DescribeRiskCenterWebsiteRiskList(const DescribeRiskCenterWebsiteRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterWebsiteRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterWebsiteRiskListResponse rsp = DescribeRiskCenterWebsiteRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterWebsiteRiskListOutcome(rsp);
        else
            return DescribeRiskCenterWebsiteRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterWebsiteRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterWebsiteRiskListAsync(const DescribeRiskCenterWebsiteRiskListRequest& request, const DescribeRiskCenterWebsiteRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterWebsiteRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterWebsiteRiskListOutcomeCallable CsipClient::DescribeRiskCenterWebsiteRiskListCallable(const DescribeRiskCenterWebsiteRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterWebsiteRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterWebsiteRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeScanReportListOutcome CsipClient::DescribeScanReportList(const DescribeScanReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanReportListResponse rsp = DescribeScanReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanReportListOutcome(rsp);
        else
            return DescribeScanReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanReportListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeScanReportListAsync(const DescribeScanReportListRequest& request, const DescribeScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanReportList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeScanReportListOutcomeCallable CsipClient::DescribeScanReportListCallable(const DescribeScanReportListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanReportListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanReportList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeScanTaskListOutcome CsipClient::DescribeScanTaskList(const DescribeScanTaskListRequest &request)
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

void CsipClient::DescribeScanTaskListAsync(const DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeScanTaskListOutcomeCallable CsipClient::DescribeScanTaskListCallable(const DescribeScanTaskListRequest &request)
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

CsipClient::DescribeSearchBugInfoOutcome CsipClient::DescribeSearchBugInfo(const DescribeSearchBugInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchBugInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchBugInfoResponse rsp = DescribeSearchBugInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchBugInfoOutcome(rsp);
        else
            return DescribeSearchBugInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchBugInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSearchBugInfoAsync(const DescribeSearchBugInfoRequest& request, const DescribeSearchBugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchBugInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeSearchBugInfoOutcomeCallable CsipClient::DescribeSearchBugInfoCallable(const DescribeSearchBugInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchBugInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchBugInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeSubnetAssetsOutcome CsipClient::DescribeSubnetAssets(const DescribeSubnetAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetAssetsResponse rsp = DescribeSubnetAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetAssetsOutcome(rsp);
        else
            return DescribeSubnetAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSubnetAssetsAsync(const DescribeSubnetAssetsRequest& request, const DescribeSubnetAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubnetAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeSubnetAssetsOutcomeCallable CsipClient::DescribeSubnetAssetsCallable(const DescribeSubnetAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubnetAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubnetAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeTaskLogListOutcome CsipClient::DescribeTaskLogList(const DescribeTaskLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogListResponse rsp = DescribeTaskLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogListOutcome(rsp);
        else
            return DescribeTaskLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeTaskLogListAsync(const DescribeTaskLogListRequest& request, const DescribeTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLogList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeTaskLogListOutcomeCallable CsipClient::DescribeTaskLogListCallable(const DescribeTaskLogListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLogListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLogList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeTaskLogURLOutcome CsipClient::DescribeTaskLogURL(const DescribeTaskLogURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLogURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogURLResponse rsp = DescribeTaskLogURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogURLOutcome(rsp);
        else
            return DescribeTaskLogURLOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogURLOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeTaskLogURLAsync(const DescribeTaskLogURLRequest& request, const DescribeTaskLogURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLogURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeTaskLogURLOutcomeCallable CsipClient::DescribeTaskLogURLCallable(const DescribeTaskLogURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLogURLOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLogURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeVULRiskAdvanceCFGListOutcome CsipClient::DescribeVULRiskAdvanceCFGList(const DescribeVULRiskAdvanceCFGListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVULRiskAdvanceCFGList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVULRiskAdvanceCFGListResponse rsp = DescribeVULRiskAdvanceCFGListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVULRiskAdvanceCFGListOutcome(rsp);
        else
            return DescribeVULRiskAdvanceCFGListOutcome(o.GetError());
    }
    else
    {
        return DescribeVULRiskAdvanceCFGListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVULRiskAdvanceCFGListAsync(const DescribeVULRiskAdvanceCFGListRequest& request, const DescribeVULRiskAdvanceCFGListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVULRiskAdvanceCFGList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeVULRiskAdvanceCFGListOutcomeCallable CsipClient::DescribeVULRiskAdvanceCFGListCallable(const DescribeVULRiskAdvanceCFGListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVULRiskAdvanceCFGListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVULRiskAdvanceCFGList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeVpcAssetsOutcome CsipClient::DescribeVpcAssets(const DescribeVpcAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcAssetsResponse rsp = DescribeVpcAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcAssetsOutcome(rsp);
        else
            return DescribeVpcAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVpcAssetsAsync(const DescribeVpcAssetsRequest& request, const DescribeVpcAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeVpcAssetsOutcomeCallable CsipClient::DescribeVpcAssetsCallable(const DescribeVpcAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::ModifyRiskCenterRiskStatusOutcome CsipClient::ModifyRiskCenterRiskStatus(const ModifyRiskCenterRiskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskCenterRiskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskCenterRiskStatusResponse rsp = ModifyRiskCenterRiskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskCenterRiskStatusOutcome(rsp);
        else
            return ModifyRiskCenterRiskStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskCenterRiskStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyRiskCenterRiskStatusAsync(const ModifyRiskCenterRiskStatusRequest& request, const ModifyRiskCenterRiskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRiskCenterRiskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::ModifyRiskCenterRiskStatusOutcomeCallable CsipClient::ModifyRiskCenterRiskStatusCallable(const ModifyRiskCenterRiskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRiskCenterRiskStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRiskCenterRiskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::StopRiskCenterTaskOutcome CsipClient::StopRiskCenterTask(const StopRiskCenterTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopRiskCenterTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRiskCenterTaskResponse rsp = StopRiskCenterTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRiskCenterTaskOutcome(rsp);
        else
            return StopRiskCenterTaskOutcome(o.GetError());
    }
    else
    {
        return StopRiskCenterTaskOutcome(outcome.GetError());
    }
}

void CsipClient::StopRiskCenterTaskAsync(const StopRiskCenterTaskRequest& request, const StopRiskCenterTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopRiskCenterTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::StopRiskCenterTaskOutcomeCallable CsipClient::StopRiskCenterTaskCallable(const StopRiskCenterTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopRiskCenterTaskOutcome()>>(
        [this, request]()
        {
            return this->StopRiskCenterTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

