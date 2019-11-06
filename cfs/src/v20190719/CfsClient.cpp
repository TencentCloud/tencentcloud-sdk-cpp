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

#include <tencentcloud/cfs/v20190719/CfsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cfs::V20190719;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-19";
    const string ENDPOINT = "cfs.tencentcloudapi.com";
}

CfsClient::CfsClient(const Credential &credential, const string &region) :
    CfsClient(credential, region, ClientProfile())
{
}

CfsClient::CfsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CfsClient::CreateCfsFileSystemOutcome CfsClient::CreateCfsFileSystem(const CreateCfsFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCfsFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCfsFileSystemResponse rsp = CreateCfsFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCfsFileSystemOutcome(rsp);
        else
            return CreateCfsFileSystemOutcome(o.GetError());
    }
    else
    {
        return CreateCfsFileSystemOutcome(outcome.GetError());
    }
}

void CfsClient::CreateCfsFileSystemAsync(const CreateCfsFileSystemRequest& request, const CreateCfsFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCfsFileSystem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateCfsFileSystemOutcomeCallable CfsClient::CreateCfsFileSystemCallable(const CreateCfsFileSystemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCfsFileSystemOutcome()>>(
        [this, request]()
        {
            return this->CreateCfsFileSystem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::CreateCfsPGroupOutcome CfsClient::CreateCfsPGroup(const CreateCfsPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCfsPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCfsPGroupResponse rsp = CreateCfsPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCfsPGroupOutcome(rsp);
        else
            return CreateCfsPGroupOutcome(o.GetError());
    }
    else
    {
        return CreateCfsPGroupOutcome(outcome.GetError());
    }
}

void CfsClient::CreateCfsPGroupAsync(const CreateCfsPGroupRequest& request, const CreateCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCfsPGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateCfsPGroupOutcomeCallable CfsClient::CreateCfsPGroupCallable(const CreateCfsPGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCfsPGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateCfsPGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::CreateCfsRuleOutcome CfsClient::CreateCfsRule(const CreateCfsRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCfsRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCfsRuleResponse rsp = CreateCfsRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCfsRuleOutcome(rsp);
        else
            return CreateCfsRuleOutcome(o.GetError());
    }
    else
    {
        return CreateCfsRuleOutcome(outcome.GetError());
    }
}

void CfsClient::CreateCfsRuleAsync(const CreateCfsRuleRequest& request, const CreateCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCfsRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateCfsRuleOutcomeCallable CfsClient::CreateCfsRuleCallable(const CreateCfsRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCfsRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateCfsRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DeleteCfsFileSystemOutcome CfsClient::DeleteCfsFileSystem(const DeleteCfsFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCfsFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCfsFileSystemResponse rsp = DeleteCfsFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCfsFileSystemOutcome(rsp);
        else
            return DeleteCfsFileSystemOutcome(o.GetError());
    }
    else
    {
        return DeleteCfsFileSystemOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteCfsFileSystemAsync(const DeleteCfsFileSystemRequest& request, const DeleteCfsFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCfsFileSystem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteCfsFileSystemOutcomeCallable CfsClient::DeleteCfsFileSystemCallable(const DeleteCfsFileSystemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCfsFileSystemOutcome()>>(
        [this, request]()
        {
            return this->DeleteCfsFileSystem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DeleteCfsPGroupOutcome CfsClient::DeleteCfsPGroup(const DeleteCfsPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCfsPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCfsPGroupResponse rsp = DeleteCfsPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCfsPGroupOutcome(rsp);
        else
            return DeleteCfsPGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteCfsPGroupOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteCfsPGroupAsync(const DeleteCfsPGroupRequest& request, const DeleteCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCfsPGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteCfsPGroupOutcomeCallable CfsClient::DeleteCfsPGroupCallable(const DeleteCfsPGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCfsPGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteCfsPGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DeleteCfsRuleOutcome CfsClient::DeleteCfsRule(const DeleteCfsRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCfsRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCfsRuleResponse rsp = DeleteCfsRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCfsRuleOutcome(rsp);
        else
            return DeleteCfsRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCfsRuleOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteCfsRuleAsync(const DeleteCfsRuleRequest& request, const DeleteCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCfsRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteCfsRuleOutcomeCallable CfsClient::DeleteCfsRuleCallable(const DeleteCfsRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCfsRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteCfsRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DeleteMountTargetOutcome CfsClient::DeleteMountTarget(const DeleteMountTargetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMountTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMountTargetResponse rsp = DeleteMountTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMountTargetOutcome(rsp);
        else
            return DeleteMountTargetOutcome(o.GetError());
    }
    else
    {
        return DeleteMountTargetOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteMountTargetAsync(const DeleteMountTargetRequest& request, const DeleteMountTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMountTarget(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteMountTargetOutcomeCallable CfsClient::DeleteMountTargetCallable(const DeleteMountTargetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMountTargetOutcome()>>(
        [this, request]()
        {
            return this->DeleteMountTarget(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeAvailableZoneInfoOutcome CfsClient::DescribeAvailableZoneInfo(const DescribeAvailableZoneInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableZoneInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableZoneInfoResponse rsp = DescribeAvailableZoneInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableZoneInfoOutcome(rsp);
        else
            return DescribeAvailableZoneInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableZoneInfoOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeAvailableZoneInfoAsync(const DescribeAvailableZoneInfoRequest& request, const DescribeAvailableZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableZoneInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeAvailableZoneInfoOutcomeCallable CfsClient::DescribeAvailableZoneInfoCallable(const DescribeAvailableZoneInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableZoneInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableZoneInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeCfsFileSystemsOutcome CfsClient::DescribeCfsFileSystems(const DescribeCfsFileSystemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsFileSystems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsFileSystemsResponse rsp = DescribeCfsFileSystemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsFileSystemsOutcome(rsp);
        else
            return DescribeCfsFileSystemsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsFileSystemsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsFileSystemsAsync(const DescribeCfsFileSystemsRequest& request, const DescribeCfsFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfsFileSystems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeCfsFileSystemsOutcomeCallable CfsClient::DescribeCfsFileSystemsCallable(const DescribeCfsFileSystemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfsFileSystemsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfsFileSystems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeCfsPGroupsOutcome CfsClient::DescribeCfsPGroups(const DescribeCfsPGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsPGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsPGroupsResponse rsp = DescribeCfsPGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsPGroupsOutcome(rsp);
        else
            return DescribeCfsPGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsPGroupsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsPGroupsAsync(const DescribeCfsPGroupsRequest& request, const DescribeCfsPGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfsPGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeCfsPGroupsOutcomeCallable CfsClient::DescribeCfsPGroupsCallable(const DescribeCfsPGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfsPGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfsPGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeCfsRulesOutcome CfsClient::DescribeCfsRules(const DescribeCfsRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsRulesResponse rsp = DescribeCfsRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsRulesOutcome(rsp);
        else
            return DescribeCfsRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsRulesOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsRulesAsync(const DescribeCfsRulesRequest& request, const DescribeCfsRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfsRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeCfsRulesOutcomeCallable CfsClient::DescribeCfsRulesCallable(const DescribeCfsRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfsRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfsRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeCfsServiceStatusOutcome CfsClient::DescribeCfsServiceStatus(const DescribeCfsServiceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsServiceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsServiceStatusResponse rsp = DescribeCfsServiceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsServiceStatusOutcome(rsp);
        else
            return DescribeCfsServiceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsServiceStatusOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsServiceStatusAsync(const DescribeCfsServiceStatusRequest& request, const DescribeCfsServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfsServiceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeCfsServiceStatusOutcomeCallable CfsClient::DescribeCfsServiceStatusCallable(const DescribeCfsServiceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfsServiceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfsServiceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeMountTargetsOutcome CfsClient::DescribeMountTargets(const DescribeMountTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMountTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMountTargetsResponse rsp = DescribeMountTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMountTargetsOutcome(rsp);
        else
            return DescribeMountTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeMountTargetsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeMountTargetsAsync(const DescribeMountTargetsRequest& request, const DescribeMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMountTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeMountTargetsOutcomeCallable CfsClient::DescribeMountTargetsCallable(const DescribeMountTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMountTargetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMountTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::SignUpCfsServiceOutcome CfsClient::SignUpCfsService(const SignUpCfsServiceRequest &request)
{
    auto outcome = MakeRequest(request, "SignUpCfsService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SignUpCfsServiceResponse rsp = SignUpCfsServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SignUpCfsServiceOutcome(rsp);
        else
            return SignUpCfsServiceOutcome(o.GetError());
    }
    else
    {
        return SignUpCfsServiceOutcome(outcome.GetError());
    }
}

void CfsClient::SignUpCfsServiceAsync(const SignUpCfsServiceRequest& request, const SignUpCfsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SignUpCfsService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::SignUpCfsServiceOutcomeCallable CfsClient::SignUpCfsServiceCallable(const SignUpCfsServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SignUpCfsServiceOutcome()>>(
        [this, request]()
        {
            return this->SignUpCfsService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::UpdateCfsFileSystemNameOutcome CfsClient::UpdateCfsFileSystemName(const UpdateCfsFileSystemNameRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsFileSystemName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsFileSystemNameResponse rsp = UpdateCfsFileSystemNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsFileSystemNameOutcome(rsp);
        else
            return UpdateCfsFileSystemNameOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsFileSystemNameOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsFileSystemNameAsync(const UpdateCfsFileSystemNameRequest& request, const UpdateCfsFileSystemNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCfsFileSystemName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::UpdateCfsFileSystemNameOutcomeCallable CfsClient::UpdateCfsFileSystemNameCallable(const UpdateCfsFileSystemNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCfsFileSystemNameOutcome()>>(
        [this, request]()
        {
            return this->UpdateCfsFileSystemName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::UpdateCfsFileSystemPGroupOutcome CfsClient::UpdateCfsFileSystemPGroup(const UpdateCfsFileSystemPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsFileSystemPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsFileSystemPGroupResponse rsp = UpdateCfsFileSystemPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsFileSystemPGroupOutcome(rsp);
        else
            return UpdateCfsFileSystemPGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsFileSystemPGroupOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsFileSystemPGroupAsync(const UpdateCfsFileSystemPGroupRequest& request, const UpdateCfsFileSystemPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCfsFileSystemPGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::UpdateCfsFileSystemPGroupOutcomeCallable CfsClient::UpdateCfsFileSystemPGroupCallable(const UpdateCfsFileSystemPGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCfsFileSystemPGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateCfsFileSystemPGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::UpdateCfsFileSystemSizeLimitOutcome CfsClient::UpdateCfsFileSystemSizeLimit(const UpdateCfsFileSystemSizeLimitRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsFileSystemSizeLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsFileSystemSizeLimitResponse rsp = UpdateCfsFileSystemSizeLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsFileSystemSizeLimitOutcome(rsp);
        else
            return UpdateCfsFileSystemSizeLimitOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsFileSystemSizeLimitOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsFileSystemSizeLimitAsync(const UpdateCfsFileSystemSizeLimitRequest& request, const UpdateCfsFileSystemSizeLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCfsFileSystemSizeLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::UpdateCfsFileSystemSizeLimitOutcomeCallable CfsClient::UpdateCfsFileSystemSizeLimitCallable(const UpdateCfsFileSystemSizeLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCfsFileSystemSizeLimitOutcome()>>(
        [this, request]()
        {
            return this->UpdateCfsFileSystemSizeLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::UpdateCfsPGroupOutcome CfsClient::UpdateCfsPGroup(const UpdateCfsPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsPGroupResponse rsp = UpdateCfsPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsPGroupOutcome(rsp);
        else
            return UpdateCfsPGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsPGroupOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsPGroupAsync(const UpdateCfsPGroupRequest& request, const UpdateCfsPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCfsPGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::UpdateCfsPGroupOutcomeCallable CfsClient::UpdateCfsPGroupCallable(const UpdateCfsPGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCfsPGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateCfsPGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::UpdateCfsRuleOutcome CfsClient::UpdateCfsRule(const UpdateCfsRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsRuleResponse rsp = UpdateCfsRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsRuleOutcome(rsp);
        else
            return UpdateCfsRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsRuleOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsRuleAsync(const UpdateCfsRuleRequest& request, const UpdateCfsRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCfsRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::UpdateCfsRuleOutcomeCallable CfsClient::UpdateCfsRuleCallable(const UpdateCfsRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCfsRuleOutcome()>>(
        [this, request]()
        {
            return this->UpdateCfsRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

