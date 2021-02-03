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

#include <tencentcloud/ape/v20200513/ApeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ape::V20200513;
using namespace TencentCloud::Ape::V20200513::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-05-13";
    const string ENDPOINT = "ape.tencentcloudapi.com";
}

ApeClient::ApeClient(const Credential &credential, const string &region) :
    ApeClient(credential, region, ClientProfile())
{
}

ApeClient::ApeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ApeClient::BatchDescribeOrderCertificateOutcome ApeClient::BatchDescribeOrderCertificate(const BatchDescribeOrderCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDescribeOrderCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDescribeOrderCertificateResponse rsp = BatchDescribeOrderCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDescribeOrderCertificateOutcome(rsp);
        else
            return BatchDescribeOrderCertificateOutcome(o.GetError());
    }
    else
    {
        return BatchDescribeOrderCertificateOutcome(outcome.GetError());
    }
}

void ApeClient::BatchDescribeOrderCertificateAsync(const BatchDescribeOrderCertificateRequest& request, const BatchDescribeOrderCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDescribeOrderCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApeClient::BatchDescribeOrderCertificateOutcomeCallable ApeClient::BatchDescribeOrderCertificateCallable(const BatchDescribeOrderCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDescribeOrderCertificateOutcome()>>(
        [this, request]()
        {
            return this->BatchDescribeOrderCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApeClient::BatchDescribeOrderImageOutcome ApeClient::BatchDescribeOrderImage(const BatchDescribeOrderImageRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDescribeOrderImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDescribeOrderImageResponse rsp = BatchDescribeOrderImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDescribeOrderImageOutcome(rsp);
        else
            return BatchDescribeOrderImageOutcome(o.GetError());
    }
    else
    {
        return BatchDescribeOrderImageOutcome(outcome.GetError());
    }
}

void ApeClient::BatchDescribeOrderImageAsync(const BatchDescribeOrderImageRequest& request, const BatchDescribeOrderImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDescribeOrderImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApeClient::BatchDescribeOrderImageOutcomeCallable ApeClient::BatchDescribeOrderImageCallable(const BatchDescribeOrderImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDescribeOrderImageOutcome()>>(
        [this, request]()
        {
            return this->BatchDescribeOrderImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApeClient::CreateOrderAndDownloadsOutcome ApeClient::CreateOrderAndDownloads(const CreateOrderAndDownloadsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrderAndDownloads");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrderAndDownloadsResponse rsp = CreateOrderAndDownloadsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrderAndDownloadsOutcome(rsp);
        else
            return CreateOrderAndDownloadsOutcome(o.GetError());
    }
    else
    {
        return CreateOrderAndDownloadsOutcome(outcome.GetError());
    }
}

void ApeClient::CreateOrderAndDownloadsAsync(const CreateOrderAndDownloadsRequest& request, const CreateOrderAndDownloadsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrderAndDownloads(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApeClient::CreateOrderAndDownloadsOutcomeCallable ApeClient::CreateOrderAndDownloadsCallable(const CreateOrderAndDownloadsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrderAndDownloadsOutcome()>>(
        [this, request]()
        {
            return this->CreateOrderAndDownloads(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApeClient::CreateOrderAndPayOutcome ApeClient::CreateOrderAndPay(const CreateOrderAndPayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrderAndPay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrderAndPayResponse rsp = CreateOrderAndPayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrderAndPayOutcome(rsp);
        else
            return CreateOrderAndPayOutcome(o.GetError());
    }
    else
    {
        return CreateOrderAndPayOutcome(outcome.GetError());
    }
}

void ApeClient::CreateOrderAndPayAsync(const CreateOrderAndPayRequest& request, const CreateOrderAndPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrderAndPay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApeClient::CreateOrderAndPayOutcomeCallable ApeClient::CreateOrderAndPayCallable(const CreateOrderAndPayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrderAndPayOutcome()>>(
        [this, request]()
        {
            return this->CreateOrderAndPay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApeClient::DescribeAuthUsersOutcome ApeClient::DescribeAuthUsers(const DescribeAuthUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthUsersResponse rsp = DescribeAuthUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthUsersOutcome(rsp);
        else
            return DescribeAuthUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthUsersOutcome(outcome.GetError());
    }
}

void ApeClient::DescribeAuthUsersAsync(const DescribeAuthUsersRequest& request, const DescribeAuthUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuthUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApeClient::DescribeAuthUsersOutcomeCallable ApeClient::DescribeAuthUsersCallable(const DescribeAuthUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuthUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuthUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApeClient::DescribeDownloadInfosOutcome ApeClient::DescribeDownloadInfos(const DescribeDownloadInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDownloadInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDownloadInfosResponse rsp = DescribeDownloadInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDownloadInfosOutcome(rsp);
        else
            return DescribeDownloadInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeDownloadInfosOutcome(outcome.GetError());
    }
}

void ApeClient::DescribeDownloadInfosAsync(const DescribeDownloadInfosRequest& request, const DescribeDownloadInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDownloadInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApeClient::DescribeDownloadInfosOutcomeCallable ApeClient::DescribeDownloadInfosCallable(const DescribeDownloadInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDownloadInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeDownloadInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApeClient::DescribeImageOutcome ApeClient::DescribeImage(const DescribeImageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageResponse rsp = DescribeImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageOutcome(rsp);
        else
            return DescribeImageOutcome(o.GetError());
    }
    else
    {
        return DescribeImageOutcome(outcome.GetError());
    }
}

void ApeClient::DescribeImageAsync(const DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApeClient::DescribeImageOutcomeCallable ApeClient::DescribeImageCallable(const DescribeImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageOutcome()>>(
        [this, request]()
        {
            return this->DescribeImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApeClient::DescribeImagesOutcome ApeClient::DescribeImages(const DescribeImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesResponse rsp = DescribeImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesOutcome(rsp);
        else
            return DescribeImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesOutcome(outcome.GetError());
    }
}

void ApeClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApeClient::DescribeImagesOutcomeCallable ApeClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

