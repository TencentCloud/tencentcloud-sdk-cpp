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

