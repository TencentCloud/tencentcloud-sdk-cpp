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

#include <tencentcloud/gs/v20191118/GsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gs::V20191118;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-11-18";
    const string ENDPOINT = "gs.tencentcloudapi.com";
}

GsClient::GsClient(const Credential &credential, const string &region) :
    GsClient(credential, region, ClientProfile())
{
}

GsClient::GsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GsClient::BackUpAndroidInstanceToStorageOutcome GsClient::BackUpAndroidInstanceToStorage(const BackUpAndroidInstanceToStorageRequest &request)
{
    auto outcome = MakeRequest(request, "BackUpAndroidInstanceToStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BackUpAndroidInstanceToStorageResponse rsp = BackUpAndroidInstanceToStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BackUpAndroidInstanceToStorageOutcome(rsp);
        else
            return BackUpAndroidInstanceToStorageOutcome(o.GetError());
    }
    else
    {
        return BackUpAndroidInstanceToStorageOutcome(outcome.GetError());
    }
}

void GsClient::BackUpAndroidInstanceToStorageAsync(const BackUpAndroidInstanceToStorageRequest& request, const BackUpAndroidInstanceToStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BackUpAndroidInstanceToStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::BackUpAndroidInstanceToStorageOutcomeCallable GsClient::BackUpAndroidInstanceToStorageCallable(const BackUpAndroidInstanceToStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BackUpAndroidInstanceToStorageOutcome()>>(
        [this, request]()
        {
            return this->BackUpAndroidInstanceToStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CleanAndroidInstancesAppDataOutcome GsClient::CleanAndroidInstancesAppData(const CleanAndroidInstancesAppDataRequest &request)
{
    auto outcome = MakeRequest(request, "CleanAndroidInstancesAppData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CleanAndroidInstancesAppDataResponse rsp = CleanAndroidInstancesAppDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CleanAndroidInstancesAppDataOutcome(rsp);
        else
            return CleanAndroidInstancesAppDataOutcome(o.GetError());
    }
    else
    {
        return CleanAndroidInstancesAppDataOutcome(outcome.GetError());
    }
}

void GsClient::CleanAndroidInstancesAppDataAsync(const CleanAndroidInstancesAppDataRequest& request, const CleanAndroidInstancesAppDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CleanAndroidInstancesAppData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CleanAndroidInstancesAppDataOutcomeCallable GsClient::CleanAndroidInstancesAppDataCallable(const CleanAndroidInstancesAppDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CleanAndroidInstancesAppDataOutcome()>>(
        [this, request]()
        {
            return this->CleanAndroidInstancesAppData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ConnectAndroidInstanceOutcome GsClient::ConnectAndroidInstance(const ConnectAndroidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ConnectAndroidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConnectAndroidInstanceResponse rsp = ConnectAndroidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConnectAndroidInstanceOutcome(rsp);
        else
            return ConnectAndroidInstanceOutcome(o.GetError());
    }
    else
    {
        return ConnectAndroidInstanceOutcome(outcome.GetError());
    }
}

void GsClient::ConnectAndroidInstanceAsync(const ConnectAndroidInstanceRequest& request, const ConnectAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConnectAndroidInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ConnectAndroidInstanceOutcomeCallable GsClient::ConnectAndroidInstanceCallable(const ConnectAndroidInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConnectAndroidInstanceOutcome()>>(
        [this, request]()
        {
            return this->ConnectAndroidInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CopyAndroidInstanceOutcome GsClient::CopyAndroidInstance(const CopyAndroidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CopyAndroidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyAndroidInstanceResponse rsp = CopyAndroidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyAndroidInstanceOutcome(rsp);
        else
            return CopyAndroidInstanceOutcome(o.GetError());
    }
    else
    {
        return CopyAndroidInstanceOutcome(outcome.GetError());
    }
}

void GsClient::CopyAndroidInstanceAsync(const CopyAndroidInstanceRequest& request, const CopyAndroidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyAndroidInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CopyAndroidInstanceOutcomeCallable GsClient::CopyAndroidInstanceCallable(const CopyAndroidInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyAndroidInstanceOutcome()>>(
        [this, request]()
        {
            return this->CopyAndroidInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidAppOutcome GsClient::CreateAndroidApp(const CreateAndroidAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidAppResponse rsp = CreateAndroidAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidAppOutcome(rsp);
        else
            return CreateAndroidAppOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidAppOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidAppAsync(const CreateAndroidAppRequest& request, const CreateAndroidAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidAppOutcomeCallable GsClient::CreateAndroidAppCallable(const CreateAndroidAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidAppOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidAppVersionOutcome GsClient::CreateAndroidAppVersion(const CreateAndroidAppVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidAppVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidAppVersionResponse rsp = CreateAndroidAppVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidAppVersionOutcome(rsp);
        else
            return CreateAndroidAppVersionOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidAppVersionOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidAppVersionAsync(const CreateAndroidAppVersionRequest& request, const CreateAndroidAppVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidAppVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidAppVersionOutcomeCallable GsClient::CreateAndroidAppVersionCallable(const CreateAndroidAppVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidAppVersionOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidAppVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidInstanceADBOutcome GsClient::CreateAndroidInstanceADB(const CreateAndroidInstanceADBRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceADB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceADBResponse rsp = CreateAndroidInstanceADBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceADBOutcome(rsp);
        else
            return CreateAndroidInstanceADBOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceADBOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceADBAsync(const CreateAndroidInstanceADBRequest& request, const CreateAndroidInstanceADBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidInstanceADB(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidInstanceADBOutcomeCallable GsClient::CreateAndroidInstanceADBCallable(const CreateAndroidInstanceADBRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidInstanceADBOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidInstanceADB(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidInstanceImageOutcome GsClient::CreateAndroidInstanceImage(const CreateAndroidInstanceImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceImageResponse rsp = CreateAndroidInstanceImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceImageOutcome(rsp);
        else
            return CreateAndroidInstanceImageOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceImageOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceImageAsync(const CreateAndroidInstanceImageRequest& request, const CreateAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidInstanceImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidInstanceImageOutcomeCallable GsClient::CreateAndroidInstanceImageCallable(const CreateAndroidInstanceImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidInstanceImageOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidInstanceImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidInstanceLabelOutcome GsClient::CreateAndroidInstanceLabel(const CreateAndroidInstanceLabelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceLabelResponse rsp = CreateAndroidInstanceLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceLabelOutcome(rsp);
        else
            return CreateAndroidInstanceLabelOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceLabelOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceLabelAsync(const CreateAndroidInstanceLabelRequest& request, const CreateAndroidInstanceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidInstanceLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidInstanceLabelOutcomeCallable GsClient::CreateAndroidInstanceLabelCallable(const CreateAndroidInstanceLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidInstanceLabelOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidInstanceLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidInstanceSSHOutcome GsClient::CreateAndroidInstanceSSH(const CreateAndroidInstanceSSHRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceSSH");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceSSHResponse rsp = CreateAndroidInstanceSSHResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceSSHOutcome(rsp);
        else
            return CreateAndroidInstanceSSHOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceSSHOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceSSHAsync(const CreateAndroidInstanceSSHRequest& request, const CreateAndroidInstanceSSHAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidInstanceSSH(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidInstanceSSHOutcomeCallable GsClient::CreateAndroidInstanceSSHCallable(const CreateAndroidInstanceSSHRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidInstanceSSHOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidInstanceSSH(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidInstanceWebShellOutcome GsClient::CreateAndroidInstanceWebShell(const CreateAndroidInstanceWebShellRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstanceWebShell");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstanceWebShellResponse rsp = CreateAndroidInstanceWebShellResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstanceWebShellOutcome(rsp);
        else
            return CreateAndroidInstanceWebShellOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstanceWebShellOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstanceWebShellAsync(const CreateAndroidInstanceWebShellRequest& request, const CreateAndroidInstanceWebShellAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidInstanceWebShell(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidInstanceWebShellOutcomeCallable GsClient::CreateAndroidInstanceWebShellCallable(const CreateAndroidInstanceWebShellRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidInstanceWebShellOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidInstanceWebShell(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidInstancesOutcome GsClient::CreateAndroidInstances(const CreateAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstancesResponse rsp = CreateAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstancesOutcome(rsp);
        else
            return CreateAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstancesAsync(const CreateAndroidInstancesRequest& request, const CreateAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidInstancesOutcomeCallable GsClient::CreateAndroidInstancesCallable(const CreateAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidInstancesAccessTokenOutcome GsClient::CreateAndroidInstancesAccessToken(const CreateAndroidInstancesAccessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstancesAccessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstancesAccessTokenResponse rsp = CreateAndroidInstancesAccessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstancesAccessTokenOutcome(rsp);
        else
            return CreateAndroidInstancesAccessTokenOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstancesAccessTokenOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstancesAccessTokenAsync(const CreateAndroidInstancesAccessTokenRequest& request, const CreateAndroidInstancesAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidInstancesAccessToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidInstancesAccessTokenOutcomeCallable GsClient::CreateAndroidInstancesAccessTokenCallable(const CreateAndroidInstancesAccessTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidInstancesAccessTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidInstancesAccessToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateAndroidInstancesScreenshotOutcome GsClient::CreateAndroidInstancesScreenshot(const CreateAndroidInstancesScreenshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAndroidInstancesScreenshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAndroidInstancesScreenshotResponse rsp = CreateAndroidInstancesScreenshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAndroidInstancesScreenshotOutcome(rsp);
        else
            return CreateAndroidInstancesScreenshotOutcome(o.GetError());
    }
    else
    {
        return CreateAndroidInstancesScreenshotOutcome(outcome.GetError());
    }
}

void GsClient::CreateAndroidInstancesScreenshotAsync(const CreateAndroidInstancesScreenshotRequest& request, const CreateAndroidInstancesScreenshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAndroidInstancesScreenshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateAndroidInstancesScreenshotOutcomeCallable GsClient::CreateAndroidInstancesScreenshotCallable(const CreateAndroidInstancesScreenshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAndroidInstancesScreenshotOutcome()>>(
        [this, request]()
        {
            return this->CreateAndroidInstancesScreenshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateCosCredentialOutcome GsClient::CreateCosCredential(const CreateCosCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosCredentialResponse rsp = CreateCosCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosCredentialOutcome(rsp);
        else
            return CreateCosCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateCosCredentialOutcome(outcome.GetError());
    }
}

void GsClient::CreateCosCredentialAsync(const CreateCosCredentialRequest& request, const CreateCosCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCosCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateCosCredentialOutcomeCallable GsClient::CreateCosCredentialCallable(const CreateCosCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCosCredentialOutcome()>>(
        [this, request]()
        {
            return this->CreateCosCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::CreateSessionOutcome GsClient::CreateSession(const CreateSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSessionResponse rsp = CreateSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSessionOutcome(rsp);
        else
            return CreateSessionOutcome(o.GetError());
    }
    else
    {
        return CreateSessionOutcome(outcome.GetError());
    }
}

void GsClient::CreateSessionAsync(const CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::CreateSessionOutcomeCallable GsClient::CreateSessionCallable(const CreateSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSessionOutcome()>>(
        [this, request]()
        {
            return this->CreateSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DeleteAndroidAppOutcome GsClient::DeleteAndroidApp(const DeleteAndroidAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidAppResponse rsp = DeleteAndroidAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidAppOutcome(rsp);
        else
            return DeleteAndroidAppOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidAppOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidAppAsync(const DeleteAndroidAppRequest& request, const DeleteAndroidAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAndroidApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DeleteAndroidAppOutcomeCallable GsClient::DeleteAndroidAppCallable(const DeleteAndroidAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAndroidAppOutcome()>>(
        [this, request]()
        {
            return this->DeleteAndroidApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DeleteAndroidAppVersionOutcome GsClient::DeleteAndroidAppVersion(const DeleteAndroidAppVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidAppVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidAppVersionResponse rsp = DeleteAndroidAppVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidAppVersionOutcome(rsp);
        else
            return DeleteAndroidAppVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidAppVersionOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidAppVersionAsync(const DeleteAndroidAppVersionRequest& request, const DeleteAndroidAppVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAndroidAppVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DeleteAndroidAppVersionOutcomeCallable GsClient::DeleteAndroidAppVersionCallable(const DeleteAndroidAppVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAndroidAppVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteAndroidAppVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DeleteAndroidInstanceBackupFilesOutcome GsClient::DeleteAndroidInstanceBackupFiles(const DeleteAndroidInstanceBackupFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidInstanceBackupFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidInstanceBackupFilesResponse rsp = DeleteAndroidInstanceBackupFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidInstanceBackupFilesOutcome(rsp);
        else
            return DeleteAndroidInstanceBackupFilesOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidInstanceBackupFilesOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidInstanceBackupFilesAsync(const DeleteAndroidInstanceBackupFilesRequest& request, const DeleteAndroidInstanceBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAndroidInstanceBackupFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DeleteAndroidInstanceBackupFilesOutcomeCallable GsClient::DeleteAndroidInstanceBackupFilesCallable(const DeleteAndroidInstanceBackupFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAndroidInstanceBackupFilesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAndroidInstanceBackupFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DeleteAndroidInstanceImagesOutcome GsClient::DeleteAndroidInstanceImages(const DeleteAndroidInstanceImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidInstanceImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidInstanceImagesResponse rsp = DeleteAndroidInstanceImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidInstanceImagesOutcome(rsp);
        else
            return DeleteAndroidInstanceImagesOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidInstanceImagesOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidInstanceImagesAsync(const DeleteAndroidInstanceImagesRequest& request, const DeleteAndroidInstanceImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAndroidInstanceImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DeleteAndroidInstanceImagesOutcomeCallable GsClient::DeleteAndroidInstanceImagesCallable(const DeleteAndroidInstanceImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAndroidInstanceImagesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAndroidInstanceImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DeleteAndroidInstanceLabelOutcome GsClient::DeleteAndroidInstanceLabel(const DeleteAndroidInstanceLabelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAndroidInstanceLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAndroidInstanceLabelResponse rsp = DeleteAndroidInstanceLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAndroidInstanceLabelOutcome(rsp);
        else
            return DeleteAndroidInstanceLabelOutcome(o.GetError());
    }
    else
    {
        return DeleteAndroidInstanceLabelOutcome(outcome.GetError());
    }
}

void GsClient::DeleteAndroidInstanceLabelAsync(const DeleteAndroidInstanceLabelRequest& request, const DeleteAndroidInstanceLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAndroidInstanceLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DeleteAndroidInstanceLabelOutcomeCallable GsClient::DeleteAndroidInstanceLabelCallable(const DeleteAndroidInstanceLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAndroidInstanceLabelOutcome()>>(
        [this, request]()
        {
            return this->DeleteAndroidInstanceLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DescribeAndroidAppsOutcome GsClient::DescribeAndroidApps(const DescribeAndroidAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidAppsResponse rsp = DescribeAndroidAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidAppsOutcome(rsp);
        else
            return DescribeAndroidAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidAppsOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidAppsAsync(const DescribeAndroidAppsRequest& request, const DescribeAndroidAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAndroidApps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeAndroidAppsOutcomeCallable GsClient::DescribeAndroidAppsCallable(const DescribeAndroidAppsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAndroidAppsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAndroidApps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DescribeAndroidInstanceAppsOutcome GsClient::DescribeAndroidInstanceApps(const DescribeAndroidInstanceAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstanceApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstanceAppsResponse rsp = DescribeAndroidInstanceAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstanceAppsOutcome(rsp);
        else
            return DescribeAndroidInstanceAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstanceAppsOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstanceAppsAsync(const DescribeAndroidInstanceAppsRequest& request, const DescribeAndroidInstanceAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAndroidInstanceApps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeAndroidInstanceAppsOutcomeCallable GsClient::DescribeAndroidInstanceAppsCallable(const DescribeAndroidInstanceAppsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAndroidInstanceAppsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAndroidInstanceApps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DescribeAndroidInstanceImagesOutcome GsClient::DescribeAndroidInstanceImages(const DescribeAndroidInstanceImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstanceImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstanceImagesResponse rsp = DescribeAndroidInstanceImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstanceImagesOutcome(rsp);
        else
            return DescribeAndroidInstanceImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstanceImagesOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstanceImagesAsync(const DescribeAndroidInstanceImagesRequest& request, const DescribeAndroidInstanceImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAndroidInstanceImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeAndroidInstanceImagesOutcomeCallable GsClient::DescribeAndroidInstanceImagesCallable(const DescribeAndroidInstanceImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAndroidInstanceImagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAndroidInstanceImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DescribeAndroidInstanceLabelsOutcome GsClient::DescribeAndroidInstanceLabels(const DescribeAndroidInstanceLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstanceLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstanceLabelsResponse rsp = DescribeAndroidInstanceLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstanceLabelsOutcome(rsp);
        else
            return DescribeAndroidInstanceLabelsOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstanceLabelsOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstanceLabelsAsync(const DescribeAndroidInstanceLabelsRequest& request, const DescribeAndroidInstanceLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAndroidInstanceLabels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeAndroidInstanceLabelsOutcomeCallable GsClient::DescribeAndroidInstanceLabelsCallable(const DescribeAndroidInstanceLabelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAndroidInstanceLabelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAndroidInstanceLabels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DescribeAndroidInstanceTasksStatusOutcome GsClient::DescribeAndroidInstanceTasksStatus(const DescribeAndroidInstanceTasksStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstanceTasksStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstanceTasksStatusResponse rsp = DescribeAndroidInstanceTasksStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstanceTasksStatusOutcome(rsp);
        else
            return DescribeAndroidInstanceTasksStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstanceTasksStatusOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstanceTasksStatusAsync(const DescribeAndroidInstanceTasksStatusRequest& request, const DescribeAndroidInstanceTasksStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAndroidInstanceTasksStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeAndroidInstanceTasksStatusOutcomeCallable GsClient::DescribeAndroidInstanceTasksStatusCallable(const DescribeAndroidInstanceTasksStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAndroidInstanceTasksStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeAndroidInstanceTasksStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DescribeAndroidInstancesOutcome GsClient::DescribeAndroidInstances(const DescribeAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstancesResponse rsp = DescribeAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstancesOutcome(rsp);
        else
            return DescribeAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstancesAsync(const DescribeAndroidInstancesRequest& request, const DescribeAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeAndroidInstancesOutcomeCallable GsClient::DescribeAndroidInstancesCallable(const DescribeAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DescribeAndroidInstancesAppBlacklistOutcome GsClient::DescribeAndroidInstancesAppBlacklist(const DescribeAndroidInstancesAppBlacklistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstancesAppBlacklist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstancesAppBlacklistResponse rsp = DescribeAndroidInstancesAppBlacklistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstancesAppBlacklistOutcome(rsp);
        else
            return DescribeAndroidInstancesAppBlacklistOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstancesAppBlacklistOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstancesAppBlacklistAsync(const DescribeAndroidInstancesAppBlacklistRequest& request, const DescribeAndroidInstancesAppBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAndroidInstancesAppBlacklist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeAndroidInstancesAppBlacklistOutcomeCallable GsClient::DescribeAndroidInstancesAppBlacklistCallable(const DescribeAndroidInstancesAppBlacklistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAndroidInstancesAppBlacklistOutcome()>>(
        [this, request]()
        {
            return this->DescribeAndroidInstancesAppBlacklist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DescribeAndroidInstancesByAppsOutcome GsClient::DescribeAndroidInstancesByApps(const DescribeAndroidInstancesByAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAndroidInstancesByApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAndroidInstancesByAppsResponse rsp = DescribeAndroidInstancesByAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAndroidInstancesByAppsOutcome(rsp);
        else
            return DescribeAndroidInstancesByAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAndroidInstancesByAppsOutcome(outcome.GetError());
    }
}

void GsClient::DescribeAndroidInstancesByAppsAsync(const DescribeAndroidInstancesByAppsRequest& request, const DescribeAndroidInstancesByAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAndroidInstancesByApps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeAndroidInstancesByAppsOutcomeCallable GsClient::DescribeAndroidInstancesByAppsCallable(const DescribeAndroidInstancesByAppsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAndroidInstancesByAppsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAndroidInstancesByApps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DescribeInstancesCountOutcome GsClient::DescribeInstancesCount(const DescribeInstancesCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesCountResponse rsp = DescribeInstancesCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesCountOutcome(rsp);
        else
            return DescribeInstancesCountOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesCountOutcome(outcome.GetError());
    }
}

void GsClient::DescribeInstancesCountAsync(const DescribeInstancesCountRequest& request, const DescribeInstancesCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DescribeInstancesCountOutcomeCallable GsClient::DescribeInstancesCountCallable(const DescribeInstancesCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DestroyAndroidInstancesOutcome GsClient::DestroyAndroidInstances(const DestroyAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyAndroidInstancesResponse rsp = DestroyAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyAndroidInstancesOutcome(rsp);
        else
            return DestroyAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return DestroyAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::DestroyAndroidInstancesAsync(const DestroyAndroidInstancesRequest& request, const DestroyAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DestroyAndroidInstancesOutcomeCallable GsClient::DestroyAndroidInstancesCallable(const DestroyAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->DestroyAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DisableAndroidInstancesAppOutcome GsClient::DisableAndroidInstancesApp(const DisableAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "DisableAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableAndroidInstancesAppResponse rsp = DisableAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableAndroidInstancesAppOutcome(rsp);
        else
            return DisableAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return DisableAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::DisableAndroidInstancesAppAsync(const DisableAndroidInstancesAppRequest& request, const DisableAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableAndroidInstancesApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DisableAndroidInstancesAppOutcomeCallable GsClient::DisableAndroidInstancesAppCallable(const DisableAndroidInstancesAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableAndroidInstancesAppOutcome()>>(
        [this, request]()
        {
            return this->DisableAndroidInstancesApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DistributeFileToAndroidInstancesOutcome GsClient::DistributeFileToAndroidInstances(const DistributeFileToAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeFileToAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeFileToAndroidInstancesResponse rsp = DistributeFileToAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeFileToAndroidInstancesOutcome(rsp);
        else
            return DistributeFileToAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return DistributeFileToAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::DistributeFileToAndroidInstancesAsync(const DistributeFileToAndroidInstancesRequest& request, const DistributeFileToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributeFileToAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DistributeFileToAndroidInstancesOutcomeCallable GsClient::DistributeFileToAndroidInstancesCallable(const DistributeFileToAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributeFileToAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->DistributeFileToAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::DistributePhotoToAndroidInstancesOutcome GsClient::DistributePhotoToAndroidInstances(const DistributePhotoToAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DistributePhotoToAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributePhotoToAndroidInstancesResponse rsp = DistributePhotoToAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributePhotoToAndroidInstancesOutcome(rsp);
        else
            return DistributePhotoToAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return DistributePhotoToAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::DistributePhotoToAndroidInstancesAsync(const DistributePhotoToAndroidInstancesRequest& request, const DistributePhotoToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributePhotoToAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::DistributePhotoToAndroidInstancesOutcomeCallable GsClient::DistributePhotoToAndroidInstancesCallable(const DistributePhotoToAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributePhotoToAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->DistributePhotoToAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::EnableAndroidInstancesAppOutcome GsClient::EnableAndroidInstancesApp(const EnableAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "EnableAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableAndroidInstancesAppResponse rsp = EnableAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableAndroidInstancesAppOutcome(rsp);
        else
            return EnableAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return EnableAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::EnableAndroidInstancesAppAsync(const EnableAndroidInstancesAppRequest& request, const EnableAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableAndroidInstancesApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::EnableAndroidInstancesAppOutcomeCallable GsClient::EnableAndroidInstancesAppCallable(const EnableAndroidInstancesAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableAndroidInstancesAppOutcome()>>(
        [this, request]()
        {
            return this->EnableAndroidInstancesApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ExecuteCommandOnAndroidInstancesOutcome GsClient::ExecuteCommandOnAndroidInstances(const ExecuteCommandOnAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteCommandOnAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteCommandOnAndroidInstancesResponse rsp = ExecuteCommandOnAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteCommandOnAndroidInstancesOutcome(rsp);
        else
            return ExecuteCommandOnAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return ExecuteCommandOnAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::ExecuteCommandOnAndroidInstancesAsync(const ExecuteCommandOnAndroidInstancesRequest& request, const ExecuteCommandOnAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteCommandOnAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ExecuteCommandOnAndroidInstancesOutcomeCallable GsClient::ExecuteCommandOnAndroidInstancesCallable(const ExecuteCommandOnAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteCommandOnAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->ExecuteCommandOnAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::FetchAndroidInstancesLogsOutcome GsClient::FetchAndroidInstancesLogs(const FetchAndroidInstancesLogsRequest &request)
{
    auto outcome = MakeRequest(request, "FetchAndroidInstancesLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchAndroidInstancesLogsResponse rsp = FetchAndroidInstancesLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchAndroidInstancesLogsOutcome(rsp);
        else
            return FetchAndroidInstancesLogsOutcome(o.GetError());
    }
    else
    {
        return FetchAndroidInstancesLogsOutcome(outcome.GetError());
    }
}

void GsClient::FetchAndroidInstancesLogsAsync(const FetchAndroidInstancesLogsRequest& request, const FetchAndroidInstancesLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FetchAndroidInstancesLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::FetchAndroidInstancesLogsOutcomeCallable GsClient::FetchAndroidInstancesLogsCallable(const FetchAndroidInstancesLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FetchAndroidInstancesLogsOutcome()>>(
        [this, request]()
        {
            return this->FetchAndroidInstancesLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ImportAndroidInstanceImageOutcome GsClient::ImportAndroidInstanceImage(const ImportAndroidInstanceImageRequest &request)
{
    auto outcome = MakeRequest(request, "ImportAndroidInstanceImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportAndroidInstanceImageResponse rsp = ImportAndroidInstanceImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportAndroidInstanceImageOutcome(rsp);
        else
            return ImportAndroidInstanceImageOutcome(o.GetError());
    }
    else
    {
        return ImportAndroidInstanceImageOutcome(outcome.GetError());
    }
}

void GsClient::ImportAndroidInstanceImageAsync(const ImportAndroidInstanceImageRequest& request, const ImportAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportAndroidInstanceImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ImportAndroidInstanceImageOutcomeCallable GsClient::ImportAndroidInstanceImageCallable(const ImportAndroidInstanceImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportAndroidInstanceImageOutcome()>>(
        [this, request]()
        {
            return this->ImportAndroidInstanceImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::InstallAndroidInstancesAppOutcome GsClient::InstallAndroidInstancesApp(const InstallAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "InstallAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallAndroidInstancesAppResponse rsp = InstallAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallAndroidInstancesAppOutcome(rsp);
        else
            return InstallAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return InstallAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::InstallAndroidInstancesAppAsync(const InstallAndroidInstancesAppRequest& request, const InstallAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InstallAndroidInstancesApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::InstallAndroidInstancesAppOutcomeCallable GsClient::InstallAndroidInstancesAppCallable(const InstallAndroidInstancesAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InstallAndroidInstancesAppOutcome()>>(
        [this, request]()
        {
            return this->InstallAndroidInstancesApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::InstallAndroidInstancesAppWithURLOutcome GsClient::InstallAndroidInstancesAppWithURL(const InstallAndroidInstancesAppWithURLRequest &request)
{
    auto outcome = MakeRequest(request, "InstallAndroidInstancesAppWithURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstallAndroidInstancesAppWithURLResponse rsp = InstallAndroidInstancesAppWithURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstallAndroidInstancesAppWithURLOutcome(rsp);
        else
            return InstallAndroidInstancesAppWithURLOutcome(o.GetError());
    }
    else
    {
        return InstallAndroidInstancesAppWithURLOutcome(outcome.GetError());
    }
}

void GsClient::InstallAndroidInstancesAppWithURLAsync(const InstallAndroidInstancesAppWithURLRequest& request, const InstallAndroidInstancesAppWithURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InstallAndroidInstancesAppWithURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::InstallAndroidInstancesAppWithURLOutcomeCallable GsClient::InstallAndroidInstancesAppWithURLCallable(const InstallAndroidInstancesAppWithURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InstallAndroidInstancesAppWithURLOutcome()>>(
        [this, request]()
        {
            return this->InstallAndroidInstancesAppWithURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidAppOutcome GsClient::ModifyAndroidApp(const ModifyAndroidAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidAppResponse rsp = ModifyAndroidAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidAppOutcome(rsp);
        else
            return ModifyAndroidAppOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidAppOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidAppAsync(const ModifyAndroidAppRequest& request, const ModifyAndroidAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidAppOutcomeCallable GsClient::ModifyAndroidAppCallable(const ModifyAndroidAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidAppOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidAppVersionOutcome GsClient::ModifyAndroidAppVersion(const ModifyAndroidAppVersionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidAppVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidAppVersionResponse rsp = ModifyAndroidAppVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidAppVersionOutcome(rsp);
        else
            return ModifyAndroidAppVersionOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidAppVersionOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidAppVersionAsync(const ModifyAndroidAppVersionRequest& request, const ModifyAndroidAppVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidAppVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidAppVersionOutcomeCallable GsClient::ModifyAndroidAppVersionCallable(const ModifyAndroidAppVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidAppVersionOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidAppVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidInstanceInformationOutcome GsClient::ModifyAndroidInstanceInformation(const ModifyAndroidInstanceInformationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstanceInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstanceInformationResponse rsp = ModifyAndroidInstanceInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstanceInformationOutcome(rsp);
        else
            return ModifyAndroidInstanceInformationOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstanceInformationOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstanceInformationAsync(const ModifyAndroidInstanceInformationRequest& request, const ModifyAndroidInstanceInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidInstanceInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidInstanceInformationOutcomeCallable GsClient::ModifyAndroidInstanceInformationCallable(const ModifyAndroidInstanceInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidInstanceInformationOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidInstanceInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidInstanceResolutionOutcome GsClient::ModifyAndroidInstanceResolution(const ModifyAndroidInstanceResolutionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstanceResolution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstanceResolutionResponse rsp = ModifyAndroidInstanceResolutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstanceResolutionOutcome(rsp);
        else
            return ModifyAndroidInstanceResolutionOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstanceResolutionOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstanceResolutionAsync(const ModifyAndroidInstanceResolutionRequest& request, const ModifyAndroidInstanceResolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidInstanceResolution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidInstanceResolutionOutcomeCallable GsClient::ModifyAndroidInstanceResolutionCallable(const ModifyAndroidInstanceResolutionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidInstanceResolutionOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidInstanceResolution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidInstancesAppBlacklistOutcome GsClient::ModifyAndroidInstancesAppBlacklist(const ModifyAndroidInstancesAppBlacklistRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesAppBlacklist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesAppBlacklistResponse rsp = ModifyAndroidInstancesAppBlacklistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesAppBlacklistOutcome(rsp);
        else
            return ModifyAndroidInstancesAppBlacklistOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesAppBlacklistOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesAppBlacklistAsync(const ModifyAndroidInstancesAppBlacklistRequest& request, const ModifyAndroidInstancesAppBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidInstancesAppBlacklist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidInstancesAppBlacklistOutcomeCallable GsClient::ModifyAndroidInstancesAppBlacklistCallable(const ModifyAndroidInstancesAppBlacklistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidInstancesAppBlacklistOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidInstancesAppBlacklist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidInstancesInformationOutcome GsClient::ModifyAndroidInstancesInformation(const ModifyAndroidInstancesInformationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesInformationResponse rsp = ModifyAndroidInstancesInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesInformationOutcome(rsp);
        else
            return ModifyAndroidInstancesInformationOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesInformationOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesInformationAsync(const ModifyAndroidInstancesInformationRequest& request, const ModifyAndroidInstancesInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidInstancesInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidInstancesInformationOutcomeCallable GsClient::ModifyAndroidInstancesInformationCallable(const ModifyAndroidInstancesInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidInstancesInformationOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidInstancesInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidInstancesLabelsOutcome GsClient::ModifyAndroidInstancesLabels(const ModifyAndroidInstancesLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesLabelsResponse rsp = ModifyAndroidInstancesLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesLabelsOutcome(rsp);
        else
            return ModifyAndroidInstancesLabelsOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesLabelsOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesLabelsAsync(const ModifyAndroidInstancesLabelsRequest& request, const ModifyAndroidInstancesLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidInstancesLabels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidInstancesLabelsOutcomeCallable GsClient::ModifyAndroidInstancesLabelsCallable(const ModifyAndroidInstancesLabelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidInstancesLabelsOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidInstancesLabels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidInstancesPropertiesOutcome GsClient::ModifyAndroidInstancesProperties(const ModifyAndroidInstancesPropertiesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesProperties");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesPropertiesResponse rsp = ModifyAndroidInstancesPropertiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesPropertiesOutcome(rsp);
        else
            return ModifyAndroidInstancesPropertiesOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesPropertiesOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesPropertiesAsync(const ModifyAndroidInstancesPropertiesRequest& request, const ModifyAndroidInstancesPropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidInstancesProperties(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidInstancesPropertiesOutcomeCallable GsClient::ModifyAndroidInstancesPropertiesCallable(const ModifyAndroidInstancesPropertiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidInstancesPropertiesOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidInstancesProperties(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidInstancesResolutionOutcome GsClient::ModifyAndroidInstancesResolution(const ModifyAndroidInstancesResolutionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesResolution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesResolutionResponse rsp = ModifyAndroidInstancesResolutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesResolutionOutcome(rsp);
        else
            return ModifyAndroidInstancesResolutionOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesResolutionOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesResolutionAsync(const ModifyAndroidInstancesResolutionRequest& request, const ModifyAndroidInstancesResolutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidInstancesResolution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidInstancesResolutionOutcomeCallable GsClient::ModifyAndroidInstancesResolutionCallable(const ModifyAndroidInstancesResolutionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidInstancesResolutionOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidInstancesResolution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidInstancesResourcesOutcome GsClient::ModifyAndroidInstancesResources(const ModifyAndroidInstancesResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesResourcesResponse rsp = ModifyAndroidInstancesResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesResourcesOutcome(rsp);
        else
            return ModifyAndroidInstancesResourcesOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesResourcesOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesResourcesAsync(const ModifyAndroidInstancesResourcesRequest& request, const ModifyAndroidInstancesResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidInstancesResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidInstancesResourcesOutcomeCallable GsClient::ModifyAndroidInstancesResourcesCallable(const ModifyAndroidInstancesResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidInstancesResourcesOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidInstancesResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ModifyAndroidInstancesUserIdOutcome GsClient::ModifyAndroidInstancesUserId(const ModifyAndroidInstancesUserIdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAndroidInstancesUserId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAndroidInstancesUserIdResponse rsp = ModifyAndroidInstancesUserIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAndroidInstancesUserIdOutcome(rsp);
        else
            return ModifyAndroidInstancesUserIdOutcome(o.GetError());
    }
    else
    {
        return ModifyAndroidInstancesUserIdOutcome(outcome.GetError());
    }
}

void GsClient::ModifyAndroidInstancesUserIdAsync(const ModifyAndroidInstancesUserIdRequest& request, const ModifyAndroidInstancesUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAndroidInstancesUserId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ModifyAndroidInstancesUserIdOutcomeCallable GsClient::ModifyAndroidInstancesUserIdCallable(const ModifyAndroidInstancesUserIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAndroidInstancesUserIdOutcome()>>(
        [this, request]()
        {
            return this->ModifyAndroidInstancesUserId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::RebootAndroidInstanceHostsOutcome GsClient::RebootAndroidInstanceHosts(const RebootAndroidInstanceHostsRequest &request)
{
    auto outcome = MakeRequest(request, "RebootAndroidInstanceHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootAndroidInstanceHostsResponse rsp = RebootAndroidInstanceHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootAndroidInstanceHostsOutcome(rsp);
        else
            return RebootAndroidInstanceHostsOutcome(o.GetError());
    }
    else
    {
        return RebootAndroidInstanceHostsOutcome(outcome.GetError());
    }
}

void GsClient::RebootAndroidInstanceHostsAsync(const RebootAndroidInstanceHostsRequest& request, const RebootAndroidInstanceHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebootAndroidInstanceHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::RebootAndroidInstanceHostsOutcomeCallable GsClient::RebootAndroidInstanceHostsCallable(const RebootAndroidInstanceHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebootAndroidInstanceHostsOutcome()>>(
        [this, request]()
        {
            return this->RebootAndroidInstanceHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::RebootAndroidInstancesOutcome GsClient::RebootAndroidInstances(const RebootAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootAndroidInstancesResponse rsp = RebootAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootAndroidInstancesOutcome(rsp);
        else
            return RebootAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return RebootAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::RebootAndroidInstancesAsync(const RebootAndroidInstancesRequest& request, const RebootAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebootAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::RebootAndroidInstancesOutcomeCallable GsClient::RebootAndroidInstancesCallable(const RebootAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebootAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->RebootAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::RenewAndroidInstancesAccessTokenOutcome GsClient::RenewAndroidInstancesAccessToken(const RenewAndroidInstancesAccessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "RenewAndroidInstancesAccessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewAndroidInstancesAccessTokenResponse rsp = RenewAndroidInstancesAccessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewAndroidInstancesAccessTokenOutcome(rsp);
        else
            return RenewAndroidInstancesAccessTokenOutcome(o.GetError());
    }
    else
    {
        return RenewAndroidInstancesAccessTokenOutcome(outcome.GetError());
    }
}

void GsClient::RenewAndroidInstancesAccessTokenAsync(const RenewAndroidInstancesAccessTokenRequest& request, const RenewAndroidInstancesAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewAndroidInstancesAccessToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::RenewAndroidInstancesAccessTokenOutcomeCallable GsClient::RenewAndroidInstancesAccessTokenCallable(const RenewAndroidInstancesAccessTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewAndroidInstancesAccessTokenOutcome()>>(
        [this, request]()
        {
            return this->RenewAndroidInstancesAccessToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::ResetAndroidInstancesOutcome GsClient::ResetAndroidInstances(const ResetAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAndroidInstancesResponse rsp = ResetAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAndroidInstancesOutcome(rsp);
        else
            return ResetAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return ResetAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::ResetAndroidInstancesAsync(const ResetAndroidInstancesRequest& request, const ResetAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::ResetAndroidInstancesOutcomeCallable GsClient::ResetAndroidInstancesCallable(const ResetAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->ResetAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::RestartAndroidInstancesAppOutcome GsClient::RestartAndroidInstancesApp(const RestartAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "RestartAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartAndroidInstancesAppResponse rsp = RestartAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartAndroidInstancesAppOutcome(rsp);
        else
            return RestartAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return RestartAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::RestartAndroidInstancesAppAsync(const RestartAndroidInstancesAppRequest& request, const RestartAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartAndroidInstancesApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::RestartAndroidInstancesAppOutcomeCallable GsClient::RestartAndroidInstancesAppCallable(const RestartAndroidInstancesAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartAndroidInstancesAppOutcome()>>(
        [this, request]()
        {
            return this->RestartAndroidInstancesApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::RestoreAndroidInstanceFromStorageOutcome GsClient::RestoreAndroidInstanceFromStorage(const RestoreAndroidInstanceFromStorageRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreAndroidInstanceFromStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreAndroidInstanceFromStorageResponse rsp = RestoreAndroidInstanceFromStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreAndroidInstanceFromStorageOutcome(rsp);
        else
            return RestoreAndroidInstanceFromStorageOutcome(o.GetError());
    }
    else
    {
        return RestoreAndroidInstanceFromStorageOutcome(outcome.GetError());
    }
}

void GsClient::RestoreAndroidInstanceFromStorageAsync(const RestoreAndroidInstanceFromStorageRequest& request, const RestoreAndroidInstanceFromStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestoreAndroidInstanceFromStorage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::RestoreAndroidInstanceFromStorageOutcomeCallable GsClient::RestoreAndroidInstanceFromStorageCallable(const RestoreAndroidInstanceFromStorageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestoreAndroidInstanceFromStorageOutcome()>>(
        [this, request]()
        {
            return this->RestoreAndroidInstanceFromStorage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::SaveGameArchiveOutcome GsClient::SaveGameArchive(const SaveGameArchiveRequest &request)
{
    auto outcome = MakeRequest(request, "SaveGameArchive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveGameArchiveResponse rsp = SaveGameArchiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveGameArchiveOutcome(rsp);
        else
            return SaveGameArchiveOutcome(o.GetError());
    }
    else
    {
        return SaveGameArchiveOutcome(outcome.GetError());
    }
}

void GsClient::SaveGameArchiveAsync(const SaveGameArchiveRequest& request, const SaveGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SaveGameArchive(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::SaveGameArchiveOutcomeCallable GsClient::SaveGameArchiveCallable(const SaveGameArchiveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SaveGameArchiveOutcome()>>(
        [this, request]()
        {
            return this->SaveGameArchive(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::SetAndroidInstancesBGAppKeepAliveOutcome GsClient::SetAndroidInstancesBGAppKeepAlive(const SetAndroidInstancesBGAppKeepAliveRequest &request)
{
    auto outcome = MakeRequest(request, "SetAndroidInstancesBGAppKeepAlive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAndroidInstancesBGAppKeepAliveResponse rsp = SetAndroidInstancesBGAppKeepAliveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAndroidInstancesBGAppKeepAliveOutcome(rsp);
        else
            return SetAndroidInstancesBGAppKeepAliveOutcome(o.GetError());
    }
    else
    {
        return SetAndroidInstancesBGAppKeepAliveOutcome(outcome.GetError());
    }
}

void GsClient::SetAndroidInstancesBGAppKeepAliveAsync(const SetAndroidInstancesBGAppKeepAliveRequest& request, const SetAndroidInstancesBGAppKeepAliveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetAndroidInstancesBGAppKeepAlive(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::SetAndroidInstancesBGAppKeepAliveOutcomeCallable GsClient::SetAndroidInstancesBGAppKeepAliveCallable(const SetAndroidInstancesBGAppKeepAliveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetAndroidInstancesBGAppKeepAliveOutcome()>>(
        [this, request]()
        {
            return this->SetAndroidInstancesBGAppKeepAlive(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::SetAndroidInstancesFGAppKeepAliveOutcome GsClient::SetAndroidInstancesFGAppKeepAlive(const SetAndroidInstancesFGAppKeepAliveRequest &request)
{
    auto outcome = MakeRequest(request, "SetAndroidInstancesFGAppKeepAlive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAndroidInstancesFGAppKeepAliveResponse rsp = SetAndroidInstancesFGAppKeepAliveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAndroidInstancesFGAppKeepAliveOutcome(rsp);
        else
            return SetAndroidInstancesFGAppKeepAliveOutcome(o.GetError());
    }
    else
    {
        return SetAndroidInstancesFGAppKeepAliveOutcome(outcome.GetError());
    }
}

void GsClient::SetAndroidInstancesFGAppKeepAliveAsync(const SetAndroidInstancesFGAppKeepAliveRequest& request, const SetAndroidInstancesFGAppKeepAliveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetAndroidInstancesFGAppKeepAlive(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::SetAndroidInstancesFGAppKeepAliveOutcomeCallable GsClient::SetAndroidInstancesFGAppKeepAliveCallable(const SetAndroidInstancesFGAppKeepAliveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetAndroidInstancesFGAppKeepAliveOutcome()>>(
        [this, request]()
        {
            return this->SetAndroidInstancesFGAppKeepAlive(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StartAndroidInstancesOutcome GsClient::StartAndroidInstances(const StartAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAndroidInstancesResponse rsp = StartAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAndroidInstancesOutcome(rsp);
        else
            return StartAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return StartAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::StartAndroidInstancesAsync(const StartAndroidInstancesRequest& request, const StartAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StartAndroidInstancesOutcomeCallable GsClient::StartAndroidInstancesCallable(const StartAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->StartAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StartAndroidInstancesAppOutcome GsClient::StartAndroidInstancesApp(const StartAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "StartAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAndroidInstancesAppResponse rsp = StartAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAndroidInstancesAppOutcome(rsp);
        else
            return StartAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return StartAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::StartAndroidInstancesAppAsync(const StartAndroidInstancesAppRequest& request, const StartAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartAndroidInstancesApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StartAndroidInstancesAppOutcomeCallable GsClient::StartAndroidInstancesAppCallable(const StartAndroidInstancesAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartAndroidInstancesAppOutcome()>>(
        [this, request]()
        {
            return this->StartAndroidInstancesApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StartPublishStreamOutcome GsClient::StartPublishStream(const StartPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamResponse rsp = StartPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamOutcome(rsp);
        else
            return StartPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamOutcome(outcome.GetError());
    }
}

void GsClient::StartPublishStreamAsync(const StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartPublishStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StartPublishStreamOutcomeCallable GsClient::StartPublishStreamCallable(const StartPublishStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartPublishStreamOutcome()>>(
        [this, request]()
        {
            return this->StartPublishStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StartPublishStreamToCSSOutcome GsClient::StartPublishStreamToCSS(const StartPublishStreamToCSSRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishStreamToCSS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishStreamToCSSResponse rsp = StartPublishStreamToCSSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishStreamToCSSOutcome(rsp);
        else
            return StartPublishStreamToCSSOutcome(o.GetError());
    }
    else
    {
        return StartPublishStreamToCSSOutcome(outcome.GetError());
    }
}

void GsClient::StartPublishStreamToCSSAsync(const StartPublishStreamToCSSRequest& request, const StartPublishStreamToCSSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartPublishStreamToCSS(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StartPublishStreamToCSSOutcomeCallable GsClient::StartPublishStreamToCSSCallable(const StartPublishStreamToCSSRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartPublishStreamToCSSOutcome()>>(
        [this, request]()
        {
            return this->StartPublishStreamToCSS(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StopAndroidInstancesOutcome GsClient::StopAndroidInstances(const StopAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAndroidInstancesResponse rsp = StopAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAndroidInstancesOutcome(rsp);
        else
            return StopAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return StopAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::StopAndroidInstancesAsync(const StopAndroidInstancesRequest& request, const StopAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StopAndroidInstancesOutcomeCallable GsClient::StopAndroidInstancesCallable(const StopAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->StopAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StopAndroidInstancesAppOutcome GsClient::StopAndroidInstancesApp(const StopAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "StopAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAndroidInstancesAppResponse rsp = StopAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAndroidInstancesAppOutcome(rsp);
        else
            return StopAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return StopAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::StopAndroidInstancesAppAsync(const StopAndroidInstancesAppRequest& request, const StopAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopAndroidInstancesApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StopAndroidInstancesAppOutcomeCallable GsClient::StopAndroidInstancesAppCallable(const StopAndroidInstancesAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopAndroidInstancesAppOutcome()>>(
        [this, request]()
        {
            return this->StopAndroidInstancesApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StopGameOutcome GsClient::StopGame(const StopGameRequest &request)
{
    auto outcome = MakeRequest(request, "StopGame");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopGameResponse rsp = StopGameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopGameOutcome(rsp);
        else
            return StopGameOutcome(o.GetError());
    }
    else
    {
        return StopGameOutcome(outcome.GetError());
    }
}

void GsClient::StopGameAsync(const StopGameRequest& request, const StopGameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopGame(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StopGameOutcomeCallable GsClient::StopGameCallable(const StopGameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopGameOutcome()>>(
        [this, request]()
        {
            return this->StopGame(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::StopPublishStreamOutcome GsClient::StopPublishStream(const StopPublishStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopPublishStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopPublishStreamResponse rsp = StopPublishStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopPublishStreamOutcome(rsp);
        else
            return StopPublishStreamOutcome(o.GetError());
    }
    else
    {
        return StopPublishStreamOutcome(outcome.GetError());
    }
}

void GsClient::StopPublishStreamAsync(const StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopPublishStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::StopPublishStreamOutcomeCallable GsClient::StopPublishStreamCallable(const StopPublishStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopPublishStreamOutcome()>>(
        [this, request]()
        {
            return this->StopPublishStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::SwitchGameArchiveOutcome GsClient::SwitchGameArchive(const SwitchGameArchiveRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchGameArchive");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchGameArchiveResponse rsp = SwitchGameArchiveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchGameArchiveOutcome(rsp);
        else
            return SwitchGameArchiveOutcome(o.GetError());
    }
    else
    {
        return SwitchGameArchiveOutcome(outcome.GetError());
    }
}

void GsClient::SwitchGameArchiveAsync(const SwitchGameArchiveRequest& request, const SwitchGameArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchGameArchive(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::SwitchGameArchiveOutcomeCallable GsClient::SwitchGameArchiveCallable(const SwitchGameArchiveRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchGameArchiveOutcome()>>(
        [this, request]()
        {
            return this->SwitchGameArchive(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::SyncAndroidInstanceImageOutcome GsClient::SyncAndroidInstanceImage(const SyncAndroidInstanceImageRequest &request)
{
    auto outcome = MakeRequest(request, "SyncAndroidInstanceImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncAndroidInstanceImageResponse rsp = SyncAndroidInstanceImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncAndroidInstanceImageOutcome(rsp);
        else
            return SyncAndroidInstanceImageOutcome(o.GetError());
    }
    else
    {
        return SyncAndroidInstanceImageOutcome(outcome.GetError());
    }
}

void GsClient::SyncAndroidInstanceImageAsync(const SyncAndroidInstanceImageRequest& request, const SyncAndroidInstanceImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncAndroidInstanceImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::SyncAndroidInstanceImageOutcomeCallable GsClient::SyncAndroidInstanceImageCallable(const SyncAndroidInstanceImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncAndroidInstanceImageOutcome()>>(
        [this, request]()
        {
            return this->SyncAndroidInstanceImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::SyncExecuteCommandOnAndroidInstancesOutcome GsClient::SyncExecuteCommandOnAndroidInstances(const SyncExecuteCommandOnAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "SyncExecuteCommandOnAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncExecuteCommandOnAndroidInstancesResponse rsp = SyncExecuteCommandOnAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncExecuteCommandOnAndroidInstancesOutcome(rsp);
        else
            return SyncExecuteCommandOnAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return SyncExecuteCommandOnAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::SyncExecuteCommandOnAndroidInstancesAsync(const SyncExecuteCommandOnAndroidInstancesRequest& request, const SyncExecuteCommandOnAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncExecuteCommandOnAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::SyncExecuteCommandOnAndroidInstancesOutcomeCallable GsClient::SyncExecuteCommandOnAndroidInstancesCallable(const SyncExecuteCommandOnAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncExecuteCommandOnAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->SyncExecuteCommandOnAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::TrylockWorkerOutcome GsClient::TrylockWorker(const TrylockWorkerRequest &request)
{
    auto outcome = MakeRequest(request, "TrylockWorker");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrylockWorkerResponse rsp = TrylockWorkerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrylockWorkerOutcome(rsp);
        else
            return TrylockWorkerOutcome(o.GetError());
    }
    else
    {
        return TrylockWorkerOutcome(outcome.GetError());
    }
}

void GsClient::TrylockWorkerAsync(const TrylockWorkerRequest& request, const TrylockWorkerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TrylockWorker(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::TrylockWorkerOutcomeCallable GsClient::TrylockWorkerCallable(const TrylockWorkerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TrylockWorkerOutcome()>>(
        [this, request]()
        {
            return this->TrylockWorker(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::UninstallAndroidInstancesAppOutcome GsClient::UninstallAndroidInstancesApp(const UninstallAndroidInstancesAppRequest &request)
{
    auto outcome = MakeRequest(request, "UninstallAndroidInstancesApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UninstallAndroidInstancesAppResponse rsp = UninstallAndroidInstancesAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UninstallAndroidInstancesAppOutcome(rsp);
        else
            return UninstallAndroidInstancesAppOutcome(o.GetError());
    }
    else
    {
        return UninstallAndroidInstancesAppOutcome(outcome.GetError());
    }
}

void GsClient::UninstallAndroidInstancesAppAsync(const UninstallAndroidInstancesAppRequest& request, const UninstallAndroidInstancesAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UninstallAndroidInstancesApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::UninstallAndroidInstancesAppOutcomeCallable GsClient::UninstallAndroidInstancesAppCallable(const UninstallAndroidInstancesAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UninstallAndroidInstancesAppOutcome()>>(
        [this, request]()
        {
            return this->UninstallAndroidInstancesApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::UploadFileToAndroidInstancesOutcome GsClient::UploadFileToAndroidInstances(const UploadFileToAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFileToAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFileToAndroidInstancesResponse rsp = UploadFileToAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFileToAndroidInstancesOutcome(rsp);
        else
            return UploadFileToAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return UploadFileToAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::UploadFileToAndroidInstancesAsync(const UploadFileToAndroidInstancesRequest& request, const UploadFileToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFileToAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::UploadFileToAndroidInstancesOutcomeCallable GsClient::UploadFileToAndroidInstancesCallable(const UploadFileToAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadFileToAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->UploadFileToAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GsClient::UploadFilesToAndroidInstancesOutcome GsClient::UploadFilesToAndroidInstances(const UploadFilesToAndroidInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFilesToAndroidInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFilesToAndroidInstancesResponse rsp = UploadFilesToAndroidInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFilesToAndroidInstancesOutcome(rsp);
        else
            return UploadFilesToAndroidInstancesOutcome(o.GetError());
    }
    else
    {
        return UploadFilesToAndroidInstancesOutcome(outcome.GetError());
    }
}

void GsClient::UploadFilesToAndroidInstancesAsync(const UploadFilesToAndroidInstancesRequest& request, const UploadFilesToAndroidInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFilesToAndroidInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GsClient::UploadFilesToAndroidInstancesOutcomeCallable GsClient::UploadFilesToAndroidInstancesCallable(const UploadFilesToAndroidInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadFilesToAndroidInstancesOutcome()>>(
        [this, request]()
        {
            return this->UploadFilesToAndroidInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

