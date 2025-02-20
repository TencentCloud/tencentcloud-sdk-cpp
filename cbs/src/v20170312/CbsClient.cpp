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

#include <tencentcloud/cbs/v20170312/CbsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cbs::V20170312;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "cbs.tencentcloudapi.com";
}

CbsClient::CbsClient(const Credential &credential, const string &region) :
    CbsClient(credential, region, ClientProfile())
{
}

CbsClient::CbsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CbsClient::ApplyDiskBackupOutcome CbsClient::ApplyDiskBackup(const ApplyDiskBackupRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyDiskBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyDiskBackupResponse rsp = ApplyDiskBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyDiskBackupOutcome(rsp);
        else
            return ApplyDiskBackupOutcome(o.GetError());
    }
    else
    {
        return ApplyDiskBackupOutcome(outcome.GetError());
    }
}

void CbsClient::ApplyDiskBackupAsync(const ApplyDiskBackupRequest& request, const ApplyDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyDiskBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ApplyDiskBackupOutcomeCallable CbsClient::ApplyDiskBackupCallable(const ApplyDiskBackupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyDiskBackupOutcome()>>(
        [this, request]()
        {
            return this->ApplyDiskBackup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ApplySnapshotOutcome CbsClient::ApplySnapshot(const ApplySnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "ApplySnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplySnapshotResponse rsp = ApplySnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplySnapshotOutcome(rsp);
        else
            return ApplySnapshotOutcome(o.GetError());
    }
    else
    {
        return ApplySnapshotOutcome(outcome.GetError());
    }
}

void CbsClient::ApplySnapshotAsync(const ApplySnapshotRequest& request, const ApplySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplySnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ApplySnapshotOutcomeCallable CbsClient::ApplySnapshotCallable(const ApplySnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplySnapshotOutcome()>>(
        [this, request]()
        {
            return this->ApplySnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ApplySnapshotGroupOutcome CbsClient::ApplySnapshotGroup(const ApplySnapshotGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ApplySnapshotGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplySnapshotGroupResponse rsp = ApplySnapshotGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplySnapshotGroupOutcome(rsp);
        else
            return ApplySnapshotGroupOutcome(o.GetError());
    }
    else
    {
        return ApplySnapshotGroupOutcome(outcome.GetError());
    }
}

void CbsClient::ApplySnapshotGroupAsync(const ApplySnapshotGroupRequest& request, const ApplySnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplySnapshotGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ApplySnapshotGroupOutcomeCallable CbsClient::ApplySnapshotGroupCallable(const ApplySnapshotGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplySnapshotGroupOutcome()>>(
        [this, request]()
        {
            return this->ApplySnapshotGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::AttachDisksOutcome CbsClient::AttachDisks(const AttachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "AttachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachDisksResponse rsp = AttachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachDisksOutcome(rsp);
        else
            return AttachDisksOutcome(o.GetError());
    }
    else
    {
        return AttachDisksOutcome(outcome.GetError());
    }
}

void CbsClient::AttachDisksAsync(const AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::AttachDisksOutcomeCallable CbsClient::AttachDisksCallable(const AttachDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachDisksOutcome()>>(
        [this, request]()
        {
            return this->AttachDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::BindAutoSnapshotPolicyOutcome CbsClient::BindAutoSnapshotPolicy(const BindAutoSnapshotPolicyRequest &request)
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

void CbsClient::BindAutoSnapshotPolicyAsync(const BindAutoSnapshotPolicyRequest& request, const BindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::BindAutoSnapshotPolicyOutcomeCallable CbsClient::BindAutoSnapshotPolicyCallable(const BindAutoSnapshotPolicyRequest &request)
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

CbsClient::CopySnapshotCrossRegionsOutcome CbsClient::CopySnapshotCrossRegions(const CopySnapshotCrossRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "CopySnapshotCrossRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopySnapshotCrossRegionsResponse rsp = CopySnapshotCrossRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopySnapshotCrossRegionsOutcome(rsp);
        else
            return CopySnapshotCrossRegionsOutcome(o.GetError());
    }
    else
    {
        return CopySnapshotCrossRegionsOutcome(outcome.GetError());
    }
}

void CbsClient::CopySnapshotCrossRegionsAsync(const CopySnapshotCrossRegionsRequest& request, const CopySnapshotCrossRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopySnapshotCrossRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::CopySnapshotCrossRegionsOutcomeCallable CbsClient::CopySnapshotCrossRegionsCallable(const CopySnapshotCrossRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopySnapshotCrossRegionsOutcome()>>(
        [this, request]()
        {
            return this->CopySnapshotCrossRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::CreateAutoSnapshotPolicyOutcome CbsClient::CreateAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request)
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

void CbsClient::CreateAutoSnapshotPolicyAsync(const CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::CreateAutoSnapshotPolicyOutcomeCallable CbsClient::CreateAutoSnapshotPolicyCallable(const CreateAutoSnapshotPolicyRequest &request)
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

CbsClient::CreateDiskBackupOutcome CbsClient::CreateDiskBackup(const CreateDiskBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDiskBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDiskBackupResponse rsp = CreateDiskBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDiskBackupOutcome(rsp);
        else
            return CreateDiskBackupOutcome(o.GetError());
    }
    else
    {
        return CreateDiskBackupOutcome(outcome.GetError());
    }
}

void CbsClient::CreateDiskBackupAsync(const CreateDiskBackupRequest& request, const CreateDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDiskBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::CreateDiskBackupOutcomeCallable CbsClient::CreateDiskBackupCallable(const CreateDiskBackupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDiskBackupOutcome()>>(
        [this, request]()
        {
            return this->CreateDiskBackup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::CreateDisksOutcome CbsClient::CreateDisks(const CreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisksResponse rsp = CreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisksOutcome(rsp);
        else
            return CreateDisksOutcome(o.GetError());
    }
    else
    {
        return CreateDisksOutcome(outcome.GetError());
    }
}

void CbsClient::CreateDisksAsync(const CreateDisksRequest& request, const CreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::CreateDisksOutcomeCallable CbsClient::CreateDisksCallable(const CreateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDisksOutcome()>>(
        [this, request]()
        {
            return this->CreateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::CreateSnapshotOutcome CbsClient::CreateSnapshot(const CreateSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotResponse rsp = CreateSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotOutcome(rsp);
        else
            return CreateSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotOutcome(outcome.GetError());
    }
}

void CbsClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::CreateSnapshotOutcomeCallable CbsClient::CreateSnapshotCallable(const CreateSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
        [this, request]()
        {
            return this->CreateSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::CreateSnapshotGroupOutcome CbsClient::CreateSnapshotGroup(const CreateSnapshotGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshotGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotGroupResponse rsp = CreateSnapshotGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotGroupOutcome(rsp);
        else
            return CreateSnapshotGroupOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotGroupOutcome(outcome.GetError());
    }
}

void CbsClient::CreateSnapshotGroupAsync(const CreateSnapshotGroupRequest& request, const CreateSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSnapshotGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::CreateSnapshotGroupOutcomeCallable CbsClient::CreateSnapshotGroupCallable(const CreateSnapshotGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSnapshotGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateSnapshotGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DeleteAutoSnapshotPoliciesOutcome CbsClient::DeleteAutoSnapshotPolicies(const DeleteAutoSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoSnapshotPoliciesResponse rsp = DeleteAutoSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoSnapshotPoliciesOutcome(rsp);
        else
            return DeleteAutoSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void CbsClient::DeleteAutoSnapshotPoliciesAsync(const DeleteAutoSnapshotPoliciesRequest& request, const DeleteAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAutoSnapshotPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DeleteAutoSnapshotPoliciesOutcomeCallable CbsClient::DeleteAutoSnapshotPoliciesCallable(const DeleteAutoSnapshotPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAutoSnapshotPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAutoSnapshotPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DeleteDiskBackupsOutcome CbsClient::DeleteDiskBackups(const DeleteDiskBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDiskBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDiskBackupsResponse rsp = DeleteDiskBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDiskBackupsOutcome(rsp);
        else
            return DeleteDiskBackupsOutcome(o.GetError());
    }
    else
    {
        return DeleteDiskBackupsOutcome(outcome.GetError());
    }
}

void CbsClient::DeleteDiskBackupsAsync(const DeleteDiskBackupsRequest& request, const DeleteDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDiskBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DeleteDiskBackupsOutcomeCallable CbsClient::DeleteDiskBackupsCallable(const DeleteDiskBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDiskBackupsOutcome()>>(
        [this, request]()
        {
            return this->DeleteDiskBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DeleteSnapshotGroupOutcome CbsClient::DeleteSnapshotGroup(const DeleteSnapshotGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshotGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotGroupResponse rsp = DeleteSnapshotGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotGroupOutcome(rsp);
        else
            return DeleteSnapshotGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotGroupOutcome(outcome.GetError());
    }
}

void CbsClient::DeleteSnapshotGroupAsync(const DeleteSnapshotGroupRequest& request, const DeleteSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSnapshotGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DeleteSnapshotGroupOutcomeCallable CbsClient::DeleteSnapshotGroupCallable(const DeleteSnapshotGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSnapshotGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteSnapshotGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DeleteSnapshotsOutcome CbsClient::DeleteSnapshots(const DeleteSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotsResponse rsp = DeleteSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotsOutcome(rsp);
        else
            return DeleteSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotsOutcome(outcome.GetError());
    }
}

void CbsClient::DeleteSnapshotsAsync(const DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DeleteSnapshotsOutcomeCallable CbsClient::DeleteSnapshotsCallable(const DeleteSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->DeleteSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeAutoSnapshotPoliciesOutcome CbsClient::DescribeAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesRequest &request)
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

void CbsClient::DescribeAutoSnapshotPoliciesAsync(const DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoSnapshotPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeAutoSnapshotPoliciesOutcomeCallable CbsClient::DescribeAutoSnapshotPoliciesCallable(const DescribeAutoSnapshotPoliciesRequest &request)
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

CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyOutcome CbsClient::DescribeDiskAssociatedAutoSnapshotPolicy(const DescribeDiskAssociatedAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskAssociatedAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskAssociatedAutoSnapshotPolicyResponse rsp = DescribeDiskAssociatedAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskAssociatedAutoSnapshotPolicyOutcome(rsp);
        else
            return DescribeDiskAssociatedAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskAssociatedAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyAsync(const DescribeDiskAssociatedAutoSnapshotPolicyRequest& request, const DescribeDiskAssociatedAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiskAssociatedAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyOutcomeCallable CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyCallable(const DescribeDiskAssociatedAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiskAssociatedAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiskAssociatedAutoSnapshotPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeDiskBackupsOutcome CbsClient::DescribeDiskBackups(const DescribeDiskBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskBackupsResponse rsp = DescribeDiskBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskBackupsOutcome(rsp);
        else
            return DescribeDiskBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskBackupsOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskBackupsAsync(const DescribeDiskBackupsRequest& request, const DescribeDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiskBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeDiskBackupsOutcomeCallable CbsClient::DescribeDiskBackupsCallable(const DescribeDiskBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiskBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiskBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeDiskConfigQuotaOutcome CbsClient::DescribeDiskConfigQuota(const DescribeDiskConfigQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskConfigQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskConfigQuotaResponse rsp = DescribeDiskConfigQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskConfigQuotaOutcome(rsp);
        else
            return DescribeDiskConfigQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskConfigQuotaOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskConfigQuotaAsync(const DescribeDiskConfigQuotaRequest& request, const DescribeDiskConfigQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiskConfigQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeDiskConfigQuotaOutcomeCallable CbsClient::DescribeDiskConfigQuotaCallable(const DescribeDiskConfigQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiskConfigQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiskConfigQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeDiskStoragePoolOutcome CbsClient::DescribeDiskStoragePool(const DescribeDiskStoragePoolRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskStoragePool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskStoragePoolResponse rsp = DescribeDiskStoragePoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskStoragePoolOutcome(rsp);
        else
            return DescribeDiskStoragePoolOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskStoragePoolOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskStoragePoolAsync(const DescribeDiskStoragePoolRequest& request, const DescribeDiskStoragePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiskStoragePool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeDiskStoragePoolOutcomeCallable CbsClient::DescribeDiskStoragePoolCallable(const DescribeDiskStoragePoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiskStoragePoolOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiskStoragePool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeDisksOutcome CbsClient::DescribeDisks(const DescribeDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksResponse rsp = DescribeDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksOutcome(rsp);
        else
            return DescribeDisksOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeDisksOutcomeCallable CbsClient::DescribeDisksCallable(const DescribeDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDisksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeInstancesDiskNumOutcome CbsClient::DescribeInstancesDiskNum(const DescribeInstancesDiskNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDiskNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDiskNumResponse rsp = DescribeInstancesDiskNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDiskNumOutcome(rsp);
        else
            return DescribeInstancesDiskNumOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDiskNumOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeInstancesDiskNumAsync(const DescribeInstancesDiskNumRequest& request, const DescribeInstancesDiskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesDiskNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeInstancesDiskNumOutcomeCallable CbsClient::DescribeInstancesDiskNumCallable(const DescribeInstancesDiskNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesDiskNumOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesDiskNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeSnapshotGroupsOutcome CbsClient::DescribeSnapshotGroups(const DescribeSnapshotGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotGroupsResponse rsp = DescribeSnapshotGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotGroupsOutcome(rsp);
        else
            return DescribeSnapshotGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotGroupsOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeSnapshotGroupsAsync(const DescribeSnapshotGroupsRequest& request, const DescribeSnapshotGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeSnapshotGroupsOutcomeCallable CbsClient::DescribeSnapshotGroupsCallable(const DescribeSnapshotGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeSnapshotOverviewOutcome CbsClient::DescribeSnapshotOverview(const DescribeSnapshotOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotOverviewResponse rsp = DescribeSnapshotOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotOverviewOutcome(rsp);
        else
            return DescribeSnapshotOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotOverviewOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeSnapshotOverviewAsync(const DescribeSnapshotOverviewRequest& request, const DescribeSnapshotOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeSnapshotOverviewOutcomeCallable CbsClient::DescribeSnapshotOverviewCallable(const DescribeSnapshotOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeSnapshotSharePermissionOutcome CbsClient::DescribeSnapshotSharePermission(const DescribeSnapshotSharePermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotSharePermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotSharePermissionResponse rsp = DescribeSnapshotSharePermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotSharePermissionOutcome(rsp);
        else
            return DescribeSnapshotSharePermissionOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotSharePermissionOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeSnapshotSharePermissionAsync(const DescribeSnapshotSharePermissionRequest& request, const DescribeSnapshotSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotSharePermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeSnapshotSharePermissionOutcomeCallable CbsClient::DescribeSnapshotSharePermissionCallable(const DescribeSnapshotSharePermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotSharePermissionOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotSharePermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeSnapshotsOutcome CbsClient::DescribeSnapshots(const DescribeSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotsResponse rsp = DescribeSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotsOutcome(rsp);
        else
            return DescribeSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotsOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeSnapshotsOutcomeCallable CbsClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DetachDisksOutcome CbsClient::DetachDisks(const DetachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DetachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachDisksResponse rsp = DetachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachDisksOutcome(rsp);
        else
            return DetachDisksOutcome(o.GetError());
    }
    else
    {
        return DetachDisksOutcome(outcome.GetError());
    }
}

void CbsClient::DetachDisksAsync(const DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DetachDisksOutcomeCallable CbsClient::DetachDisksCallable(const DetachDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachDisksOutcome()>>(
        [this, request]()
        {
            return this->DetachDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::GetSnapOverviewOutcome CbsClient::GetSnapOverview(const GetSnapOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "GetSnapOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSnapOverviewResponse rsp = GetSnapOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSnapOverviewOutcome(rsp);
        else
            return GetSnapOverviewOutcome(o.GetError());
    }
    else
    {
        return GetSnapOverviewOutcome(outcome.GetError());
    }
}

void CbsClient::GetSnapOverviewAsync(const GetSnapOverviewRequest& request, const GetSnapOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSnapOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::GetSnapOverviewOutcomeCallable CbsClient::GetSnapOverviewCallable(const GetSnapOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSnapOverviewOutcome()>>(
        [this, request]()
        {
            return this->GetSnapOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::InitializeDisksOutcome CbsClient::InitializeDisks(const InitializeDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InitializeDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitializeDisksResponse rsp = InitializeDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitializeDisksOutcome(rsp);
        else
            return InitializeDisksOutcome(o.GetError());
    }
    else
    {
        return InitializeDisksOutcome(outcome.GetError());
    }
}

void CbsClient::InitializeDisksAsync(const InitializeDisksRequest& request, const InitializeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InitializeDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::InitializeDisksOutcomeCallable CbsClient::InitializeDisksCallable(const InitializeDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InitializeDisksOutcome()>>(
        [this, request]()
        {
            return this->InitializeDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::InquirePriceModifyDiskBackupQuotaOutcome CbsClient::InquirePriceModifyDiskBackupQuota(const InquirePriceModifyDiskBackupQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceModifyDiskBackupQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceModifyDiskBackupQuotaResponse rsp = InquirePriceModifyDiskBackupQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceModifyDiskBackupQuotaOutcome(rsp);
        else
            return InquirePriceModifyDiskBackupQuotaOutcome(o.GetError());
    }
    else
    {
        return InquirePriceModifyDiskBackupQuotaOutcome(outcome.GetError());
    }
}

void CbsClient::InquirePriceModifyDiskBackupQuotaAsync(const InquirePriceModifyDiskBackupQuotaRequest& request, const InquirePriceModifyDiskBackupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceModifyDiskBackupQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::InquirePriceModifyDiskBackupQuotaOutcomeCallable CbsClient::InquirePriceModifyDiskBackupQuotaCallable(const InquirePriceModifyDiskBackupQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceModifyDiskBackupQuotaOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceModifyDiskBackupQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::InquirePriceModifyDiskExtraPerformanceOutcome CbsClient::InquirePriceModifyDiskExtraPerformance(const InquirePriceModifyDiskExtraPerformanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceModifyDiskExtraPerformance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceModifyDiskExtraPerformanceResponse rsp = InquirePriceModifyDiskExtraPerformanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceModifyDiskExtraPerformanceOutcome(rsp);
        else
            return InquirePriceModifyDiskExtraPerformanceOutcome(o.GetError());
    }
    else
    {
        return InquirePriceModifyDiskExtraPerformanceOutcome(outcome.GetError());
    }
}

void CbsClient::InquirePriceModifyDiskExtraPerformanceAsync(const InquirePriceModifyDiskExtraPerformanceRequest& request, const InquirePriceModifyDiskExtraPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceModifyDiskExtraPerformance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::InquirePriceModifyDiskExtraPerformanceOutcomeCallable CbsClient::InquirePriceModifyDiskExtraPerformanceCallable(const InquirePriceModifyDiskExtraPerformanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceModifyDiskExtraPerformanceOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceModifyDiskExtraPerformance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::InquiryPriceCreateDisksOutcome CbsClient::InquiryPriceCreateDisks(const InquiryPriceCreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateDisksResponse rsp = InquiryPriceCreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateDisksOutcome(rsp);
        else
            return InquiryPriceCreateDisksOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateDisksOutcome(outcome.GetError());
    }
}

void CbsClient::InquiryPriceCreateDisksAsync(const InquiryPriceCreateDisksRequest& request, const InquiryPriceCreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::InquiryPriceCreateDisksOutcomeCallable CbsClient::InquiryPriceCreateDisksCallable(const InquiryPriceCreateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateDisksOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::InquiryPriceRenewDisksOutcome CbsClient::InquiryPriceRenewDisks(const InquiryPriceRenewDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewDisksResponse rsp = InquiryPriceRenewDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewDisksOutcome(rsp);
        else
            return InquiryPriceRenewDisksOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewDisksOutcome(outcome.GetError());
    }
}

void CbsClient::InquiryPriceRenewDisksAsync(const InquiryPriceRenewDisksRequest& request, const InquiryPriceRenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::InquiryPriceRenewDisksOutcomeCallable CbsClient::InquiryPriceRenewDisksCallable(const InquiryPriceRenewDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewDisksOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::InquiryPriceResizeDiskOutcome CbsClient::InquiryPriceResizeDisk(const InquiryPriceResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceResizeDiskResponse rsp = InquiryPriceResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceResizeDiskOutcome(rsp);
        else
            return InquiryPriceResizeDiskOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceResizeDiskOutcome(outcome.GetError());
    }
}

void CbsClient::InquiryPriceResizeDiskAsync(const InquiryPriceResizeDiskRequest& request, const InquiryPriceResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceResizeDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::InquiryPriceResizeDiskOutcomeCallable CbsClient::InquiryPriceResizeDiskCallable(const InquiryPriceResizeDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceResizeDiskOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceResizeDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifyAutoSnapshotPolicyAttributeOutcome CbsClient::ModifyAutoSnapshotPolicyAttribute(const ModifyAutoSnapshotPolicyAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoSnapshotPolicyAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoSnapshotPolicyAttributeResponse rsp = ModifyAutoSnapshotPolicyAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoSnapshotPolicyAttributeOutcome(rsp);
        else
            return ModifyAutoSnapshotPolicyAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoSnapshotPolicyAttributeOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyAutoSnapshotPolicyAttributeAsync(const ModifyAutoSnapshotPolicyAttributeRequest& request, const ModifyAutoSnapshotPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoSnapshotPolicyAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifyAutoSnapshotPolicyAttributeOutcomeCallable CbsClient::ModifyAutoSnapshotPolicyAttributeCallable(const ModifyAutoSnapshotPolicyAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoSnapshotPolicyAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoSnapshotPolicyAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifyDiskAttributesOutcome CbsClient::ModifyDiskAttributes(const ModifyDiskAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiskAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiskAttributesResponse rsp = ModifyDiskAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiskAttributesOutcome(rsp);
        else
            return ModifyDiskAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyDiskAttributesOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDiskAttributesAsync(const ModifyDiskAttributesRequest& request, const ModifyDiskAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDiskAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifyDiskAttributesOutcomeCallable CbsClient::ModifyDiskAttributesCallable(const ModifyDiskAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDiskAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyDiskAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifyDiskBackupQuotaOutcome CbsClient::ModifyDiskBackupQuota(const ModifyDiskBackupQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiskBackupQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiskBackupQuotaResponse rsp = ModifyDiskBackupQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiskBackupQuotaOutcome(rsp);
        else
            return ModifyDiskBackupQuotaOutcome(o.GetError());
    }
    else
    {
        return ModifyDiskBackupQuotaOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDiskBackupQuotaAsync(const ModifyDiskBackupQuotaRequest& request, const ModifyDiskBackupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDiskBackupQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifyDiskBackupQuotaOutcomeCallable CbsClient::ModifyDiskBackupQuotaCallable(const ModifyDiskBackupQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDiskBackupQuotaOutcome()>>(
        [this, request]()
        {
            return this->ModifyDiskBackupQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifyDiskExtraPerformanceOutcome CbsClient::ModifyDiskExtraPerformance(const ModifyDiskExtraPerformanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiskExtraPerformance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiskExtraPerformanceResponse rsp = ModifyDiskExtraPerformanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiskExtraPerformanceOutcome(rsp);
        else
            return ModifyDiskExtraPerformanceOutcome(o.GetError());
    }
    else
    {
        return ModifyDiskExtraPerformanceOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDiskExtraPerformanceAsync(const ModifyDiskExtraPerformanceRequest& request, const ModifyDiskExtraPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDiskExtraPerformance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifyDiskExtraPerformanceOutcomeCallable CbsClient::ModifyDiskExtraPerformanceCallable(const ModifyDiskExtraPerformanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDiskExtraPerformanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyDiskExtraPerformance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifyDisksChargeTypeOutcome CbsClient::ModifyDisksChargeType(const ModifyDisksChargeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisksChargeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisksChargeTypeResponse rsp = ModifyDisksChargeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisksChargeTypeOutcome(rsp);
        else
            return ModifyDisksChargeTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyDisksChargeTypeOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDisksChargeTypeAsync(const ModifyDisksChargeTypeRequest& request, const ModifyDisksChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDisksChargeType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifyDisksChargeTypeOutcomeCallable CbsClient::ModifyDisksChargeTypeCallable(const ModifyDisksChargeTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDisksChargeTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDisksChargeType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifyDisksRenewFlagOutcome CbsClient::ModifyDisksRenewFlag(const ModifyDisksRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisksRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisksRenewFlagResponse rsp = ModifyDisksRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisksRenewFlagOutcome(rsp);
        else
            return ModifyDisksRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyDisksRenewFlagOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDisksRenewFlagAsync(const ModifyDisksRenewFlagRequest& request, const ModifyDisksRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDisksRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifyDisksRenewFlagOutcomeCallable CbsClient::ModifyDisksRenewFlagCallable(const ModifyDisksRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDisksRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyDisksRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifySnapshotAttributeOutcome CbsClient::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotAttributeResponse rsp = ModifySnapshotAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotAttributeOutcome(rsp);
        else
            return ModifySnapshotAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotAttributeOutcome(outcome.GetError());
    }
}

void CbsClient::ModifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySnapshotAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifySnapshotAttributeOutcomeCallable CbsClient::ModifySnapshotAttributeCallable(const ModifySnapshotAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySnapshotAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySnapshotAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifySnapshotsSharePermissionOutcome CbsClient::ModifySnapshotsSharePermission(const ModifySnapshotsSharePermissionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotsSharePermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotsSharePermissionResponse rsp = ModifySnapshotsSharePermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotsSharePermissionOutcome(rsp);
        else
            return ModifySnapshotsSharePermissionOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotsSharePermissionOutcome(outcome.GetError());
    }
}

void CbsClient::ModifySnapshotsSharePermissionAsync(const ModifySnapshotsSharePermissionRequest& request, const ModifySnapshotsSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySnapshotsSharePermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifySnapshotsSharePermissionOutcomeCallable CbsClient::ModifySnapshotsSharePermissionCallable(const ModifySnapshotsSharePermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySnapshotsSharePermissionOutcome()>>(
        [this, request]()
        {
            return this->ModifySnapshotsSharePermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::RenewDiskOutcome CbsClient::RenewDisk(const RenewDiskRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDiskResponse rsp = RenewDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDiskOutcome(rsp);
        else
            return RenewDiskOutcome(o.GetError());
    }
    else
    {
        return RenewDiskOutcome(outcome.GetError());
    }
}

void CbsClient::RenewDiskAsync(const RenewDiskRequest& request, const RenewDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::RenewDiskOutcomeCallable CbsClient::RenewDiskCallable(const RenewDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewDiskOutcome()>>(
        [this, request]()
        {
            return this->RenewDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ResizeDiskOutcome CbsClient::ResizeDisk(const ResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDiskResponse rsp = ResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDiskOutcome(rsp);
        else
            return ResizeDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeDiskOutcome(outcome.GetError());
    }
}

void CbsClient::ResizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResizeDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ResizeDiskOutcomeCallable CbsClient::ResizeDiskCallable(const ResizeDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResizeDiskOutcome()>>(
        [this, request]()
        {
            return this->ResizeDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::TerminateDisksOutcome CbsClient::TerminateDisks(const TerminateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDisksResponse rsp = TerminateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDisksOutcome(rsp);
        else
            return TerminateDisksOutcome(o.GetError());
    }
    else
    {
        return TerminateDisksOutcome(outcome.GetError());
    }
}

void CbsClient::TerminateDisksAsync(const TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::TerminateDisksOutcomeCallable CbsClient::TerminateDisksCallable(const TerminateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateDisksOutcome()>>(
        [this, request]()
        {
            return this->TerminateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::UnbindAutoSnapshotPolicyOutcome CbsClient::UnbindAutoSnapshotPolicy(const UnbindAutoSnapshotPolicyRequest &request)
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

void CbsClient::UnbindAutoSnapshotPolicyAsync(const UnbindAutoSnapshotPolicyRequest& request, const UnbindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::UnbindAutoSnapshotPolicyOutcomeCallable CbsClient::UnbindAutoSnapshotPolicyCallable(const UnbindAutoSnapshotPolicyRequest &request)
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

