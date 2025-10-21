/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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


CfsClient::ApplyPathLifecyclePolicyOutcome CfsClient::ApplyPathLifecyclePolicy(const ApplyPathLifecyclePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyPathLifecyclePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyPathLifecyclePolicyResponse rsp = ApplyPathLifecyclePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyPathLifecyclePolicyOutcome(rsp);
        else
            return ApplyPathLifecyclePolicyOutcome(o.GetError());
    }
    else
    {
        return ApplyPathLifecyclePolicyOutcome(outcome.GetError());
    }
}

void CfsClient::ApplyPathLifecyclePolicyAsync(const ApplyPathLifecyclePolicyRequest& request, const ApplyPathLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyPathLifecyclePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::ApplyPathLifecyclePolicyOutcomeCallable CfsClient::ApplyPathLifecyclePolicyCallable(const ApplyPathLifecyclePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyPathLifecyclePolicyOutcome()>>(
        [this, request]()
        {
            return this->ApplyPathLifecyclePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::BindAutoSnapshotPolicyOutcome CfsClient::BindAutoSnapshotPolicy(const BindAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "BindAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAutoSnapshotPolicyResponse rsp = BindAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAutoSnapshotPolicyOutcome(rsp);
        else
            return BindAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return BindAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::BindAutoSnapshotPolicyAsync(const BindAutoSnapshotPolicyRequest& request, const BindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::BindAutoSnapshotPolicyOutcomeCallable CfsClient::BindAutoSnapshotPolicyCallable(const BindAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->BindAutoSnapshotPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::CreateAccessCertOutcome CfsClient::CreateAccessCert(const CreateAccessCertRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessCertResponse rsp = CreateAccessCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessCertOutcome(rsp);
        else
            return CreateAccessCertOutcome(o.GetError());
    }
    else
    {
        return CreateAccessCertOutcome(outcome.GetError());
    }
}

void CfsClient::CreateAccessCertAsync(const CreateAccessCertRequest& request, const CreateAccessCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccessCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateAccessCertOutcomeCallable CfsClient::CreateAccessCertCallable(const CreateAccessCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccessCertOutcome()>>(
        [this, request]()
        {
            return this->CreateAccessCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::CreateAutoSnapshotPolicyOutcome CfsClient::CreateAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoSnapshotPolicyResponse rsp = CreateAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoSnapshotPolicyOutcome(rsp);
        else
            return CreateAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::CreateAutoSnapshotPolicyAsync(const CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateAutoSnapshotPolicyOutcomeCallable CfsClient::CreateAutoSnapshotPolicyCallable(const CreateAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateAutoSnapshotPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

CfsClient::CreateCfsSnapshotOutcome CfsClient::CreateCfsSnapshot(const CreateCfsSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCfsSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCfsSnapshotResponse rsp = CreateCfsSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCfsSnapshotOutcome(rsp);
        else
            return CreateCfsSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateCfsSnapshotOutcome(outcome.GetError());
    }
}

void CfsClient::CreateCfsSnapshotAsync(const CreateCfsSnapshotRequest& request, const CreateCfsSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCfsSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateCfsSnapshotOutcomeCallable CfsClient::CreateCfsSnapshotCallable(const CreateCfsSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCfsSnapshotOutcome()>>(
        [this, request]()
        {
            return this->CreateCfsSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::CreateDataFlowOutcome CfsClient::CreateDataFlow(const CreateDataFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataFlowResponse rsp = CreateDataFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataFlowOutcome(rsp);
        else
            return CreateDataFlowOutcome(o.GetError());
    }
    else
    {
        return CreateDataFlowOutcome(outcome.GetError());
    }
}

void CfsClient::CreateDataFlowAsync(const CreateDataFlowRequest& request, const CreateDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateDataFlowOutcomeCallable CfsClient::CreateDataFlowCallable(const CreateDataFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateDataFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::CreateLifecycleDataTaskOutcome CfsClient::CreateLifecycleDataTask(const CreateLifecycleDataTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLifecycleDataTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLifecycleDataTaskResponse rsp = CreateLifecycleDataTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLifecycleDataTaskOutcome(rsp);
        else
            return CreateLifecycleDataTaskOutcome(o.GetError());
    }
    else
    {
        return CreateLifecycleDataTaskOutcome(outcome.GetError());
    }
}

void CfsClient::CreateLifecycleDataTaskAsync(const CreateLifecycleDataTaskRequest& request, const CreateLifecycleDataTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLifecycleDataTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateLifecycleDataTaskOutcomeCallable CfsClient::CreateLifecycleDataTaskCallable(const CreateLifecycleDataTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLifecycleDataTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateLifecycleDataTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::CreateLifecyclePolicyOutcome CfsClient::CreateLifecyclePolicy(const CreateLifecyclePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLifecyclePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLifecyclePolicyResponse rsp = CreateLifecyclePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLifecyclePolicyOutcome(rsp);
        else
            return CreateLifecyclePolicyOutcome(o.GetError());
    }
    else
    {
        return CreateLifecyclePolicyOutcome(outcome.GetError());
    }
}

void CfsClient::CreateLifecyclePolicyAsync(const CreateLifecyclePolicyRequest& request, const CreateLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLifecyclePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateLifecyclePolicyOutcomeCallable CfsClient::CreateLifecyclePolicyCallable(const CreateLifecyclePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLifecyclePolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateLifecyclePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::CreateLifecyclePolicyDownloadTaskOutcome CfsClient::CreateLifecyclePolicyDownloadTask(const CreateLifecyclePolicyDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLifecyclePolicyDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLifecyclePolicyDownloadTaskResponse rsp = CreateLifecyclePolicyDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLifecyclePolicyDownloadTaskOutcome(rsp);
        else
            return CreateLifecyclePolicyDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return CreateLifecyclePolicyDownloadTaskOutcome(outcome.GetError());
    }
}

void CfsClient::CreateLifecyclePolicyDownloadTaskAsync(const CreateLifecyclePolicyDownloadTaskRequest& request, const CreateLifecyclePolicyDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLifecyclePolicyDownloadTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateLifecyclePolicyDownloadTaskOutcomeCallable CfsClient::CreateLifecyclePolicyDownloadTaskCallable(const CreateLifecyclePolicyDownloadTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLifecyclePolicyDownloadTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateLifecyclePolicyDownloadTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::CreateMigrationTaskOutcome CfsClient::CreateMigrationTask(const CreateMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrationTaskResponse rsp = CreateMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrationTaskOutcome(rsp);
        else
            return CreateMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateMigrationTaskOutcome(outcome.GetError());
    }
}

void CfsClient::CreateMigrationTaskAsync(const CreateMigrationTaskRequest& request, const CreateMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMigrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::CreateMigrationTaskOutcomeCallable CfsClient::CreateMigrationTaskCallable(const CreateMigrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMigrationTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateMigrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DeleteAutoSnapshotPolicyOutcome CfsClient::DeleteAutoSnapshotPolicy(const DeleteAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoSnapshotPolicyResponse rsp = DeleteAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoSnapshotPolicyOutcome(rsp);
        else
            return DeleteAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteAutoSnapshotPolicyAsync(const DeleteAutoSnapshotPolicyRequest& request, const DeleteAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteAutoSnapshotPolicyOutcomeCallable CfsClient::DeleteAutoSnapshotPolicyCallable(const DeleteAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteAutoSnapshotPolicy(request);
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

CfsClient::DeleteCfsSnapshotOutcome CfsClient::DeleteCfsSnapshot(const DeleteCfsSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCfsSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCfsSnapshotResponse rsp = DeleteCfsSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCfsSnapshotOutcome(rsp);
        else
            return DeleteCfsSnapshotOutcome(o.GetError());
    }
    else
    {
        return DeleteCfsSnapshotOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteCfsSnapshotAsync(const DeleteCfsSnapshotRequest& request, const DeleteCfsSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCfsSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteCfsSnapshotOutcomeCallable CfsClient::DeleteCfsSnapshotCallable(const DeleteCfsSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCfsSnapshotOutcome()>>(
        [this, request]()
        {
            return this->DeleteCfsSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DeleteDataFlowOutcome CfsClient::DeleteDataFlow(const DeleteDataFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataFlowResponse rsp = DeleteDataFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataFlowOutcome(rsp);
        else
            return DeleteDataFlowOutcome(o.GetError());
    }
    else
    {
        return DeleteDataFlowOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteDataFlowAsync(const DeleteDataFlowRequest& request, const DeleteDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDataFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteDataFlowOutcomeCallable CfsClient::DeleteDataFlowCallable(const DeleteDataFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDataFlowOutcome()>>(
        [this, request]()
        {
            return this->DeleteDataFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DeleteLifecyclePolicyOutcome CfsClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLifecyclePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLifecyclePolicyResponse rsp = DeleteLifecyclePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLifecyclePolicyOutcome(rsp);
        else
            return DeleteLifecyclePolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteLifecyclePolicyOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLifecyclePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteLifecyclePolicyOutcomeCallable CfsClient::DeleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLifecyclePolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteLifecyclePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DeleteMigrationTaskOutcome CfsClient::DeleteMigrationTask(const DeleteMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMigrationTaskResponse rsp = DeleteMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMigrationTaskOutcome(rsp);
        else
            return DeleteMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteMigrationTaskOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteMigrationTaskAsync(const DeleteMigrationTaskRequest& request, const DeleteMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMigrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteMigrationTaskOutcomeCallable CfsClient::DeleteMigrationTaskCallable(const DeleteMigrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMigrationTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteMigrationTask(request);
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

CfsClient::DeleteUserQuotaOutcome CfsClient::DeleteUserQuota(const DeleteUserQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserQuotaResponse rsp = DeleteUserQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserQuotaOutcome(rsp);
        else
            return DeleteUserQuotaOutcome(o.GetError());
    }
    else
    {
        return DeleteUserQuotaOutcome(outcome.GetError());
    }
}

void CfsClient::DeleteUserQuotaAsync(const DeleteUserQuotaRequest& request, const DeleteUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DeleteUserQuotaOutcomeCallable CfsClient::DeleteUserQuotaCallable(const DeleteUserQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserQuotaOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeAutoSnapshotPoliciesOutcome CfsClient::DescribeAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoSnapshotPoliciesResponse rsp = DescribeAutoSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoSnapshotPoliciesOutcome(rsp);
        else
            return DescribeAutoSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeAutoSnapshotPoliciesAsync(const DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoSnapshotPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeAutoSnapshotPoliciesOutcomeCallable CfsClient::DescribeAutoSnapshotPoliciesCallable(const DescribeAutoSnapshotPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoSnapshotPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoSnapshotPolicies(request);
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

CfsClient::DescribeBucketListOutcome CfsClient::DescribeBucketList(const DescribeBucketListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBucketList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBucketListResponse rsp = DescribeBucketListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBucketListOutcome(rsp);
        else
            return DescribeBucketListOutcome(o.GetError());
    }
    else
    {
        return DescribeBucketListOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeBucketListAsync(const DescribeBucketListRequest& request, const DescribeBucketListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBucketList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeBucketListOutcomeCallable CfsClient::DescribeBucketListCallable(const DescribeBucketListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBucketListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBucketList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeCfsFileSystemClientsOutcome CfsClient::DescribeCfsFileSystemClients(const DescribeCfsFileSystemClientsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsFileSystemClients");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsFileSystemClientsResponse rsp = DescribeCfsFileSystemClientsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsFileSystemClientsOutcome(rsp);
        else
            return DescribeCfsFileSystemClientsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsFileSystemClientsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsFileSystemClientsAsync(const DescribeCfsFileSystemClientsRequest& request, const DescribeCfsFileSystemClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfsFileSystemClients(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeCfsFileSystemClientsOutcomeCallable CfsClient::DescribeCfsFileSystemClientsCallable(const DescribeCfsFileSystemClientsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfsFileSystemClientsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfsFileSystemClients(request);
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

CfsClient::DescribeCfsSnapshotOverviewOutcome CfsClient::DescribeCfsSnapshotOverview(const DescribeCfsSnapshotOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsSnapshotOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsSnapshotOverviewResponse rsp = DescribeCfsSnapshotOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsSnapshotOverviewOutcome(rsp);
        else
            return DescribeCfsSnapshotOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsSnapshotOverviewOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsSnapshotOverviewAsync(const DescribeCfsSnapshotOverviewRequest& request, const DescribeCfsSnapshotOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfsSnapshotOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeCfsSnapshotOverviewOutcomeCallable CfsClient::DescribeCfsSnapshotOverviewCallable(const DescribeCfsSnapshotOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfsSnapshotOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfsSnapshotOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeCfsSnapshotsOutcome CfsClient::DescribeCfsSnapshots(const DescribeCfsSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCfsSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCfsSnapshotsResponse rsp = DescribeCfsSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCfsSnapshotsOutcome(rsp);
        else
            return DescribeCfsSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeCfsSnapshotsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeCfsSnapshotsAsync(const DescribeCfsSnapshotsRequest& request, const DescribeCfsSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCfsSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeCfsSnapshotsOutcomeCallable CfsClient::DescribeCfsSnapshotsCallable(const DescribeCfsSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCfsSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCfsSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeDataFlowOutcome CfsClient::DescribeDataFlow(const DescribeDataFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataFlowResponse rsp = DescribeDataFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataFlowOutcome(rsp);
        else
            return DescribeDataFlowOutcome(o.GetError());
    }
    else
    {
        return DescribeDataFlowOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeDataFlowAsync(const DescribeDataFlowRequest& request, const DescribeDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeDataFlowOutcomeCallable CfsClient::DescribeDataFlowCallable(const DescribeDataFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataFlowOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeLifecycleDataTaskOutcome CfsClient::DescribeLifecycleDataTask(const DescribeLifecycleDataTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLifecycleDataTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLifecycleDataTaskResponse rsp = DescribeLifecycleDataTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLifecycleDataTaskOutcome(rsp);
        else
            return DescribeLifecycleDataTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeLifecycleDataTaskOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeLifecycleDataTaskAsync(const DescribeLifecycleDataTaskRequest& request, const DescribeLifecycleDataTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLifecycleDataTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeLifecycleDataTaskOutcomeCallable CfsClient::DescribeLifecycleDataTaskCallable(const DescribeLifecycleDataTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLifecycleDataTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeLifecycleDataTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeLifecyclePoliciesOutcome CfsClient::DescribeLifecyclePolicies(const DescribeLifecyclePoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLifecyclePolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLifecyclePoliciesResponse rsp = DescribeLifecyclePoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLifecyclePoliciesOutcome(rsp);
        else
            return DescribeLifecyclePoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeLifecyclePoliciesOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeLifecyclePoliciesAsync(const DescribeLifecyclePoliciesRequest& request, const DescribeLifecyclePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLifecyclePolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeLifecyclePoliciesOutcomeCallable CfsClient::DescribeLifecyclePoliciesCallable(const DescribeLifecyclePoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLifecyclePoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLifecyclePolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeMigrationTasksOutcome CfsClient::DescribeMigrationTasks(const DescribeMigrationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationTasksResponse rsp = DescribeMigrationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationTasksOutcome(rsp);
        else
            return DescribeMigrationTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationTasksOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeMigrationTasksAsync(const DescribeMigrationTasksRequest& request, const DescribeMigrationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeMigrationTasksOutcomeCallable CfsClient::DescribeMigrationTasksCallable(const DescribeMigrationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrationTasks(request);
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

CfsClient::DescribeSnapshotOperationLogsOutcome CfsClient::DescribeSnapshotOperationLogs(const DescribeSnapshotOperationLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotOperationLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotOperationLogsResponse rsp = DescribeSnapshotOperationLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotOperationLogsOutcome(rsp);
        else
            return DescribeSnapshotOperationLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotOperationLogsOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeSnapshotOperationLogsAsync(const DescribeSnapshotOperationLogsRequest& request, const DescribeSnapshotOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotOperationLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeSnapshotOperationLogsOutcomeCallable CfsClient::DescribeSnapshotOperationLogsCallable(const DescribeSnapshotOperationLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotOperationLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotOperationLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DescribeUserQuotaOutcome CfsClient::DescribeUserQuota(const DescribeUserQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserQuotaResponse rsp = DescribeUserQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserQuotaOutcome(rsp);
        else
            return DescribeUserQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeUserQuotaOutcome(outcome.GetError());
    }
}

void CfsClient::DescribeUserQuotaAsync(const DescribeUserQuotaRequest& request, const DescribeUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DescribeUserQuotaOutcomeCallable CfsClient::DescribeUserQuotaCallable(const DescribeUserQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::DoDirectoryOperationOutcome CfsClient::DoDirectoryOperation(const DoDirectoryOperationRequest &request)
{
    auto outcome = MakeRequest(request, "DoDirectoryOperation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DoDirectoryOperationResponse rsp = DoDirectoryOperationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DoDirectoryOperationOutcome(rsp);
        else
            return DoDirectoryOperationOutcome(o.GetError());
    }
    else
    {
        return DoDirectoryOperationOutcome(outcome.GetError());
    }
}

void CfsClient::DoDirectoryOperationAsync(const DoDirectoryOperationRequest& request, const DoDirectoryOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DoDirectoryOperation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::DoDirectoryOperationOutcomeCallable CfsClient::DoDirectoryOperationCallable(const DoDirectoryOperationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DoDirectoryOperationOutcome()>>(
        [this, request]()
        {
            return this->DoDirectoryOperation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::ModifyDataFlowOutcome CfsClient::ModifyDataFlow(const ModifyDataFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataFlowResponse rsp = ModifyDataFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataFlowOutcome(rsp);
        else
            return ModifyDataFlowOutcome(o.GetError());
    }
    else
    {
        return ModifyDataFlowOutcome(outcome.GetError());
    }
}

void CfsClient::ModifyDataFlowAsync(const ModifyDataFlowRequest& request, const ModifyDataFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDataFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::ModifyDataFlowOutcomeCallable CfsClient::ModifyDataFlowCallable(const ModifyDataFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDataFlowOutcome()>>(
        [this, request]()
        {
            return this->ModifyDataFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::ModifyFileSystemAutoScaleUpRuleOutcome CfsClient::ModifyFileSystemAutoScaleUpRule(const ModifyFileSystemAutoScaleUpRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileSystemAutoScaleUpRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileSystemAutoScaleUpRuleResponse rsp = ModifyFileSystemAutoScaleUpRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileSystemAutoScaleUpRuleOutcome(rsp);
        else
            return ModifyFileSystemAutoScaleUpRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyFileSystemAutoScaleUpRuleOutcome(outcome.GetError());
    }
}

void CfsClient::ModifyFileSystemAutoScaleUpRuleAsync(const ModifyFileSystemAutoScaleUpRuleRequest& request, const ModifyFileSystemAutoScaleUpRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFileSystemAutoScaleUpRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::ModifyFileSystemAutoScaleUpRuleOutcomeCallable CfsClient::ModifyFileSystemAutoScaleUpRuleCallable(const ModifyFileSystemAutoScaleUpRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFileSystemAutoScaleUpRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyFileSystemAutoScaleUpRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::ModifyLifecyclePolicyOutcome CfsClient::ModifyLifecyclePolicy(const ModifyLifecyclePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLifecyclePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLifecyclePolicyResponse rsp = ModifyLifecyclePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLifecyclePolicyOutcome(rsp);
        else
            return ModifyLifecyclePolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyLifecyclePolicyOutcome(outcome.GetError());
    }
}

void CfsClient::ModifyLifecyclePolicyAsync(const ModifyLifecyclePolicyRequest& request, const ModifyLifecyclePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLifecyclePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::ModifyLifecyclePolicyOutcomeCallable CfsClient::ModifyLifecyclePolicyCallable(const ModifyLifecyclePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLifecyclePolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyLifecyclePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::ScaleUpFileSystemOutcome CfsClient::ScaleUpFileSystem(const ScaleUpFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleUpFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleUpFileSystemResponse rsp = ScaleUpFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleUpFileSystemOutcome(rsp);
        else
            return ScaleUpFileSystemOutcome(o.GetError());
    }
    else
    {
        return ScaleUpFileSystemOutcome(outcome.GetError());
    }
}

void CfsClient::ScaleUpFileSystemAsync(const ScaleUpFileSystemRequest& request, const ScaleUpFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleUpFileSystem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::ScaleUpFileSystemOutcomeCallable CfsClient::ScaleUpFileSystemCallable(const ScaleUpFileSystemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleUpFileSystemOutcome()>>(
        [this, request]()
        {
            return this->ScaleUpFileSystem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::SetUserQuotaOutcome CfsClient::SetUserQuota(const SetUserQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "SetUserQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetUserQuotaResponse rsp = SetUserQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetUserQuotaOutcome(rsp);
        else
            return SetUserQuotaOutcome(o.GetError());
    }
    else
    {
        return SetUserQuotaOutcome(outcome.GetError());
    }
}

void CfsClient::SetUserQuotaAsync(const SetUserQuotaRequest& request, const SetUserQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetUserQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::SetUserQuotaOutcomeCallable CfsClient::SetUserQuotaCallable(const SetUserQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetUserQuotaOutcome()>>(
        [this, request]()
        {
            return this->SetUserQuota(request);
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

CfsClient::StopLifecycleDataTaskOutcome CfsClient::StopLifecycleDataTask(const StopLifecycleDataTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopLifecycleDataTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLifecycleDataTaskResponse rsp = StopLifecycleDataTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLifecycleDataTaskOutcome(rsp);
        else
            return StopLifecycleDataTaskOutcome(o.GetError());
    }
    else
    {
        return StopLifecycleDataTaskOutcome(outcome.GetError());
    }
}

void CfsClient::StopLifecycleDataTaskAsync(const StopLifecycleDataTaskRequest& request, const StopLifecycleDataTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopLifecycleDataTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::StopLifecycleDataTaskOutcomeCallable CfsClient::StopLifecycleDataTaskCallable(const StopLifecycleDataTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopLifecycleDataTaskOutcome()>>(
        [this, request]()
        {
            return this->StopLifecycleDataTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::StopMigrationTaskOutcome CfsClient::StopMigrationTask(const StopMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMigrationTaskResponse rsp = StopMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMigrationTaskOutcome(rsp);
        else
            return StopMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return StopMigrationTaskOutcome(outcome.GetError());
    }
}

void CfsClient::StopMigrationTaskAsync(const StopMigrationTaskRequest& request, const StopMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMigrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::StopMigrationTaskOutcomeCallable CfsClient::StopMigrationTaskCallable(const StopMigrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMigrationTaskOutcome()>>(
        [this, request]()
        {
            return this->StopMigrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::UnbindAutoSnapshotPolicyOutcome CfsClient::UnbindAutoSnapshotPolicy(const UnbindAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindAutoSnapshotPolicyResponse rsp = UnbindAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindAutoSnapshotPolicyOutcome(rsp);
        else
            return UnbindAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return UnbindAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::UnbindAutoSnapshotPolicyAsync(const UnbindAutoSnapshotPolicyRequest& request, const UnbindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::UnbindAutoSnapshotPolicyOutcomeCallable CfsClient::UnbindAutoSnapshotPolicyCallable(const UnbindAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->UnbindAutoSnapshotPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::UpdateAutoSnapshotPolicyOutcome CfsClient::UpdateAutoSnapshotPolicy(const UpdateAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAutoSnapshotPolicyResponse rsp = UpdateAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAutoSnapshotPolicyOutcome(rsp);
        else
            return UpdateAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return UpdateAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateAutoSnapshotPolicyAsync(const UpdateAutoSnapshotPolicyRequest& request, const UpdateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::UpdateAutoSnapshotPolicyOutcomeCallable CfsClient::UpdateAutoSnapshotPolicyCallable(const UpdateAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->UpdateAutoSnapshotPolicy(request);
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

CfsClient::UpdateCfsSnapshotAttributeOutcome CfsClient::UpdateCfsSnapshotAttribute(const UpdateCfsSnapshotAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCfsSnapshotAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCfsSnapshotAttributeResponse rsp = UpdateCfsSnapshotAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCfsSnapshotAttributeOutcome(rsp);
        else
            return UpdateCfsSnapshotAttributeOutcome(o.GetError());
    }
    else
    {
        return UpdateCfsSnapshotAttributeOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateCfsSnapshotAttributeAsync(const UpdateCfsSnapshotAttributeRequest& request, const UpdateCfsSnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateCfsSnapshotAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::UpdateCfsSnapshotAttributeOutcomeCallable CfsClient::UpdateCfsSnapshotAttributeCallable(const UpdateCfsSnapshotAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateCfsSnapshotAttributeOutcome()>>(
        [this, request]()
        {
            return this->UpdateCfsSnapshotAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CfsClient::UpdateFileSystemBandwidthLimitOutcome CfsClient::UpdateFileSystemBandwidthLimit(const UpdateFileSystemBandwidthLimitRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFileSystemBandwidthLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFileSystemBandwidthLimitResponse rsp = UpdateFileSystemBandwidthLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFileSystemBandwidthLimitOutcome(rsp);
        else
            return UpdateFileSystemBandwidthLimitOutcome(o.GetError());
    }
    else
    {
        return UpdateFileSystemBandwidthLimitOutcome(outcome.GetError());
    }
}

void CfsClient::UpdateFileSystemBandwidthLimitAsync(const UpdateFileSystemBandwidthLimitRequest& request, const UpdateFileSystemBandwidthLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateFileSystemBandwidthLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CfsClient::UpdateFileSystemBandwidthLimitOutcomeCallable CfsClient::UpdateFileSystemBandwidthLimitCallable(const UpdateFileSystemBandwidthLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateFileSystemBandwidthLimitOutcome()>>(
        [this, request]()
        {
            return this->UpdateFileSystemBandwidthLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

