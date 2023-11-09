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

#include <tencentcloud/drm/v20181115/DrmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Drm::V20181115;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-11-15";
    const string ENDPOINT = "drm.tencentcloudapi.com";
}

DrmClient::DrmClient(const Credential &credential, const string &region) :
    DrmClient(credential, region, ClientProfile())
{
}

DrmClient::DrmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DrmClient::AddFairPlayPemOutcome DrmClient::AddFairPlayPem(const AddFairPlayPemRequest &request)
{
    auto outcome = MakeRequest(request, "AddFairPlayPem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddFairPlayPemResponse rsp = AddFairPlayPemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddFairPlayPemOutcome(rsp);
        else
            return AddFairPlayPemOutcome(o.GetError());
    }
    else
    {
        return AddFairPlayPemOutcome(outcome.GetError());
    }
}

void DrmClient::AddFairPlayPemAsync(const AddFairPlayPemRequest& request, const AddFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddFairPlayPem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::AddFairPlayPemOutcomeCallable DrmClient::AddFairPlayPemCallable(const AddFairPlayPemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddFairPlayPemOutcome()>>(
        [this, request]()
        {
            return this->AddFairPlayPem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::CreateEncryptKeysOutcome DrmClient::CreateEncryptKeys(const CreateEncryptKeysRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEncryptKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEncryptKeysResponse rsp = CreateEncryptKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEncryptKeysOutcome(rsp);
        else
            return CreateEncryptKeysOutcome(o.GetError());
    }
    else
    {
        return CreateEncryptKeysOutcome(outcome.GetError());
    }
}

void DrmClient::CreateEncryptKeysAsync(const CreateEncryptKeysRequest& request, const CreateEncryptKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEncryptKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::CreateEncryptKeysOutcomeCallable DrmClient::CreateEncryptKeysCallable(const CreateEncryptKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEncryptKeysOutcome()>>(
        [this, request]()
        {
            return this->CreateEncryptKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::CreateLicenseOutcome DrmClient::CreateLicense(const CreateLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLicenseResponse rsp = CreateLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLicenseOutcome(rsp);
        else
            return CreateLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateLicenseOutcome(outcome.GetError());
    }
}

void DrmClient::CreateLicenseAsync(const CreateLicenseRequest& request, const CreateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::CreateLicenseOutcomeCallable DrmClient::CreateLicenseCallable(const CreateLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLicenseOutcome()>>(
        [this, request]()
        {
            return this->CreateLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::DeleteFairPlayPemOutcome DrmClient::DeleteFairPlayPem(const DeleteFairPlayPemRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFairPlayPem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFairPlayPemResponse rsp = DeleteFairPlayPemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFairPlayPemOutcome(rsp);
        else
            return DeleteFairPlayPemOutcome(o.GetError());
    }
    else
    {
        return DeleteFairPlayPemOutcome(outcome.GetError());
    }
}

void DrmClient::DeleteFairPlayPemAsync(const DeleteFairPlayPemRequest& request, const DeleteFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFairPlayPem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::DeleteFairPlayPemOutcomeCallable DrmClient::DeleteFairPlayPemCallable(const DeleteFairPlayPemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFairPlayPemOutcome()>>(
        [this, request]()
        {
            return this->DeleteFairPlayPem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::DescribeAllKeysOutcome DrmClient::DescribeAllKeys(const DescribeAllKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllKeysResponse rsp = DescribeAllKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllKeysOutcome(rsp);
        else
            return DescribeAllKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeAllKeysOutcome(outcome.GetError());
    }
}

void DrmClient::DescribeAllKeysAsync(const DescribeAllKeysRequest& request, const DescribeAllKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::DescribeAllKeysOutcomeCallable DrmClient::DescribeAllKeysCallable(const DescribeAllKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllKeysOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::DescribeDRMLicenseOutcome DrmClient::DescribeDRMLicense(const DescribeDRMLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDRMLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDRMLicenseResponse rsp = DescribeDRMLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDRMLicenseOutcome(rsp);
        else
            return DescribeDRMLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeDRMLicenseOutcome(outcome.GetError());
    }
}

void DrmClient::DescribeDRMLicenseAsync(const DescribeDRMLicenseRequest& request, const DescribeDRMLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDRMLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::DescribeDRMLicenseOutcomeCallable DrmClient::DescribeDRMLicenseCallable(const DescribeDRMLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDRMLicenseOutcome()>>(
        [this, request]()
        {
            return this->DescribeDRMLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::DescribeFairPlayPemOutcome DrmClient::DescribeFairPlayPem(const DescribeFairPlayPemRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFairPlayPem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFairPlayPemResponse rsp = DescribeFairPlayPemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFairPlayPemOutcome(rsp);
        else
            return DescribeFairPlayPemOutcome(o.GetError());
    }
    else
    {
        return DescribeFairPlayPemOutcome(outcome.GetError());
    }
}

void DrmClient::DescribeFairPlayPemAsync(const DescribeFairPlayPemRequest& request, const DescribeFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFairPlayPem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::DescribeFairPlayPemOutcomeCallable DrmClient::DescribeFairPlayPemCallable(const DescribeFairPlayPemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFairPlayPemOutcome()>>(
        [this, request]()
        {
            return this->DescribeFairPlayPem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::DescribeKeysOutcome DrmClient::DescribeKeys(const DescribeKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeysResponse rsp = DescribeKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeysOutcome(rsp);
        else
            return DescribeKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeKeysOutcome(outcome.GetError());
    }
}

void DrmClient::DescribeKeysAsync(const DescribeKeysRequest& request, const DescribeKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::DescribeKeysOutcomeCallable DrmClient::DescribeKeysCallable(const DescribeKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKeysOutcome()>>(
        [this, request]()
        {
            return this->DescribeKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::GenerateTDRMKeyOutcome DrmClient::GenerateTDRMKey(const GenerateTDRMKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateTDRMKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateTDRMKeyResponse rsp = GenerateTDRMKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateTDRMKeyOutcome(rsp);
        else
            return GenerateTDRMKeyOutcome(o.GetError());
    }
    else
    {
        return GenerateTDRMKeyOutcome(outcome.GetError());
    }
}

void DrmClient::GenerateTDRMKeyAsync(const GenerateTDRMKeyRequest& request, const GenerateTDRMKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateTDRMKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::GenerateTDRMKeyOutcomeCallable DrmClient::GenerateTDRMKeyCallable(const GenerateTDRMKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateTDRMKeyOutcome()>>(
        [this, request]()
        {
            return this->GenerateTDRMKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::ModifyFairPlayPemOutcome DrmClient::ModifyFairPlayPem(const ModifyFairPlayPemRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFairPlayPem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFairPlayPemResponse rsp = ModifyFairPlayPemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFairPlayPemOutcome(rsp);
        else
            return ModifyFairPlayPemOutcome(o.GetError());
    }
    else
    {
        return ModifyFairPlayPemOutcome(outcome.GetError());
    }
}

void DrmClient::ModifyFairPlayPemAsync(const ModifyFairPlayPemRequest& request, const ModifyFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFairPlayPem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::ModifyFairPlayPemOutcomeCallable DrmClient::ModifyFairPlayPemCallable(const ModifyFairPlayPemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFairPlayPemOutcome()>>(
        [this, request]()
        {
            return this->ModifyFairPlayPem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DrmClient::StartEncryptionOutcome DrmClient::StartEncryption(const StartEncryptionRequest &request)
{
    auto outcome = MakeRequest(request, "StartEncryption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartEncryptionResponse rsp = StartEncryptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartEncryptionOutcome(rsp);
        else
            return StartEncryptionOutcome(o.GetError());
    }
    else
    {
        return StartEncryptionOutcome(outcome.GetError());
    }
}

void DrmClient::StartEncryptionAsync(const StartEncryptionRequest& request, const StartEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartEncryption(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DrmClient::StartEncryptionOutcomeCallable DrmClient::StartEncryptionCallable(const StartEncryptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartEncryptionOutcome()>>(
        [this, request]()
        {
            return this->StartEncryption(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

