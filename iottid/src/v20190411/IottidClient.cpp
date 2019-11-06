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

#include <tencentcloud/iottid/v20190411/IottidClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iottid::V20190411;
using namespace TencentCloud::Iottid::V20190411::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-11";
    const string ENDPOINT = "iottid.tencentcloudapi.com";
}

IottidClient::IottidClient(const Credential &credential, const string &region) :
    IottidClient(credential, region, ClientProfile())
{
}

IottidClient::IottidClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IottidClient::AuthTestTidOutcome IottidClient::AuthTestTid(const AuthTestTidRequest &request)
{
    auto outcome = MakeRequest(request, "AuthTestTid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuthTestTidResponse rsp = AuthTestTidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuthTestTidOutcome(rsp);
        else
            return AuthTestTidOutcome(o.GetError());
    }
    else
    {
        return AuthTestTidOutcome(outcome.GetError());
    }
}

void IottidClient::AuthTestTidAsync(const AuthTestTidRequest& request, const AuthTestTidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AuthTestTid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IottidClient::AuthTestTidOutcomeCallable IottidClient::AuthTestTidCallable(const AuthTestTidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AuthTestTidOutcome()>>(
        [this, request]()
        {
            return this->AuthTestTid(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IottidClient::BurnTidNotifyOutcome IottidClient::BurnTidNotify(const BurnTidNotifyRequest &request)
{
    auto outcome = MakeRequest(request, "BurnTidNotify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BurnTidNotifyResponse rsp = BurnTidNotifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BurnTidNotifyOutcome(rsp);
        else
            return BurnTidNotifyOutcome(o.GetError());
    }
    else
    {
        return BurnTidNotifyOutcome(outcome.GetError());
    }
}

void IottidClient::BurnTidNotifyAsync(const BurnTidNotifyRequest& request, const BurnTidNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BurnTidNotify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IottidClient::BurnTidNotifyOutcomeCallable IottidClient::BurnTidNotifyCallable(const BurnTidNotifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BurnTidNotifyOutcome()>>(
        [this, request]()
        {
            return this->BurnTidNotify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IottidClient::DeliverTidNotifyOutcome IottidClient::DeliverTidNotify(const DeliverTidNotifyRequest &request)
{
    auto outcome = MakeRequest(request, "DeliverTidNotify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeliverTidNotifyResponse rsp = DeliverTidNotifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeliverTidNotifyOutcome(rsp);
        else
            return DeliverTidNotifyOutcome(o.GetError());
    }
    else
    {
        return DeliverTidNotifyOutcome(outcome.GetError());
    }
}

void IottidClient::DeliverTidNotifyAsync(const DeliverTidNotifyRequest& request, const DeliverTidNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeliverTidNotify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IottidClient::DeliverTidNotifyOutcomeCallable IottidClient::DeliverTidNotifyCallable(const DeliverTidNotifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeliverTidNotifyOutcome()>>(
        [this, request]()
        {
            return this->DeliverTidNotify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IottidClient::DeliverTidsOutcome IottidClient::DeliverTids(const DeliverTidsRequest &request)
{
    auto outcome = MakeRequest(request, "DeliverTids");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeliverTidsResponse rsp = DeliverTidsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeliverTidsOutcome(rsp);
        else
            return DeliverTidsOutcome(o.GetError());
    }
    else
    {
        return DeliverTidsOutcome(outcome.GetError());
    }
}

void IottidClient::DeliverTidsAsync(const DeliverTidsRequest& request, const DeliverTidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeliverTids(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IottidClient::DeliverTidsOutcomeCallable IottidClient::DeliverTidsCallable(const DeliverTidsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeliverTidsOutcome()>>(
        [this, request]()
        {
            return this->DeliverTids(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IottidClient::DescribeAvailableLibCountOutcome IottidClient::DescribeAvailableLibCount(const DescribeAvailableLibCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableLibCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableLibCountResponse rsp = DescribeAvailableLibCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableLibCountOutcome(rsp);
        else
            return DescribeAvailableLibCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableLibCountOutcome(outcome.GetError());
    }
}

void IottidClient::DescribeAvailableLibCountAsync(const DescribeAvailableLibCountRequest& request, const DescribeAvailableLibCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableLibCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IottidClient::DescribeAvailableLibCountOutcomeCallable IottidClient::DescribeAvailableLibCountCallable(const DescribeAvailableLibCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableLibCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableLibCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IottidClient::DescribePermissionOutcome IottidClient::DescribePermission(const DescribePermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePermissionResponse rsp = DescribePermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePermissionOutcome(rsp);
        else
            return DescribePermissionOutcome(o.GetError());
    }
    else
    {
        return DescribePermissionOutcome(outcome.GetError());
    }
}

void IottidClient::DescribePermissionAsync(const DescribePermissionRequest& request, const DescribePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IottidClient::DescribePermissionOutcomeCallable IottidClient::DescribePermissionCallable(const DescribePermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePermissionOutcome()>>(
        [this, request]()
        {
            return this->DescribePermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IottidClient::DownloadTidsOutcome IottidClient::DownloadTids(const DownloadTidsRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadTids");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadTidsResponse rsp = DownloadTidsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadTidsOutcome(rsp);
        else
            return DownloadTidsOutcome(o.GetError());
    }
    else
    {
        return DownloadTidsOutcome(outcome.GetError());
    }
}

void IottidClient::DownloadTidsAsync(const DownloadTidsRequest& request, const DownloadTidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadTids(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IottidClient::DownloadTidsOutcomeCallable IottidClient::DownloadTidsCallable(const DownloadTidsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadTidsOutcome()>>(
        [this, request]()
        {
            return this->DownloadTids(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IottidClient::UploadDeviceUniqueCodeOutcome IottidClient::UploadDeviceUniqueCode(const UploadDeviceUniqueCodeRequest &request)
{
    auto outcome = MakeRequest(request, "UploadDeviceUniqueCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadDeviceUniqueCodeResponse rsp = UploadDeviceUniqueCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadDeviceUniqueCodeOutcome(rsp);
        else
            return UploadDeviceUniqueCodeOutcome(o.GetError());
    }
    else
    {
        return UploadDeviceUniqueCodeOutcome(outcome.GetError());
    }
}

void IottidClient::UploadDeviceUniqueCodeAsync(const UploadDeviceUniqueCodeRequest& request, const UploadDeviceUniqueCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadDeviceUniqueCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IottidClient::UploadDeviceUniqueCodeOutcomeCallable IottidClient::UploadDeviceUniqueCodeCallable(const UploadDeviceUniqueCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadDeviceUniqueCodeOutcome()>>(
        [this, request]()
        {
            return this->UploadDeviceUniqueCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IottidClient::VerifyChipBurnInfoOutcome IottidClient::VerifyChipBurnInfo(const VerifyChipBurnInfoRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyChipBurnInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyChipBurnInfoResponse rsp = VerifyChipBurnInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyChipBurnInfoOutcome(rsp);
        else
            return VerifyChipBurnInfoOutcome(o.GetError());
    }
    else
    {
        return VerifyChipBurnInfoOutcome(outcome.GetError());
    }
}

void IottidClient::VerifyChipBurnInfoAsync(const VerifyChipBurnInfoRequest& request, const VerifyChipBurnInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyChipBurnInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IottidClient::VerifyChipBurnInfoOutcomeCallable IottidClient::VerifyChipBurnInfoCallable(const VerifyChipBurnInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyChipBurnInfoOutcome()>>(
        [this, request]()
        {
            return this->VerifyChipBurnInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

