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

#include <tencentcloud/youmall/v20180228/YoumallClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Youmall::V20180228;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-02-28";
    const string ENDPOINT = "youmall.tencentcloudapi.com";
}

YoumallClient::YoumallClient(const Credential &credential, const string &region) :
    YoumallClient(credential, region, ClientProfile())
{
}

YoumallClient::YoumallClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


YoumallClient::CreateAccountOutcome YoumallClient::CreateAccount(const CreateAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountResponse rsp = CreateAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountOutcome(rsp);
        else
            return CreateAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAccountOutcome(outcome.GetError());
    }
}

void YoumallClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::CreateAccountOutcomeCallable YoumallClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::CreateFacePictureOutcome YoumallClient::CreateFacePicture(const CreateFacePictureRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFacePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFacePictureResponse rsp = CreateFacePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFacePictureOutcome(rsp);
        else
            return CreateFacePictureOutcome(o.GetError());
    }
    else
    {
        return CreateFacePictureOutcome(outcome.GetError());
    }
}

void YoumallClient::CreateFacePictureAsync(const CreateFacePictureRequest& request, const CreateFacePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFacePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::CreateFacePictureOutcomeCallable YoumallClient::CreateFacePictureCallable(const CreateFacePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFacePictureOutcome()>>(
        [this, request]()
        {
            return this->CreateFacePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DeletePersonFeatureOutcome YoumallClient::DeletePersonFeature(const DeletePersonFeatureRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePersonFeature");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePersonFeatureResponse rsp = DeletePersonFeatureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePersonFeatureOutcome(rsp);
        else
            return DeletePersonFeatureOutcome(o.GetError());
    }
    else
    {
        return DeletePersonFeatureOutcome(outcome.GetError());
    }
}

void YoumallClient::DeletePersonFeatureAsync(const DeletePersonFeatureRequest& request, const DeletePersonFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePersonFeature(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DeletePersonFeatureOutcomeCallable YoumallClient::DeletePersonFeatureCallable(const DeletePersonFeatureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePersonFeatureOutcome()>>(
        [this, request]()
        {
            return this->DeletePersonFeature(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeCameraPersonOutcome YoumallClient::DescribeCameraPerson(const DescribeCameraPersonRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCameraPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCameraPersonResponse rsp = DescribeCameraPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCameraPersonOutcome(rsp);
        else
            return DescribeCameraPersonOutcome(o.GetError());
    }
    else
    {
        return DescribeCameraPersonOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeCameraPersonAsync(const DescribeCameraPersonRequest& request, const DescribeCameraPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCameraPerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeCameraPersonOutcomeCallable YoumallClient::DescribeCameraPersonCallable(const DescribeCameraPersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCameraPersonOutcome()>>(
        [this, request]()
        {
            return this->DescribeCameraPerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeClusterPersonArrivedMallOutcome YoumallClient::DescribeClusterPersonArrivedMall(const DescribeClusterPersonArrivedMallRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterPersonArrivedMall");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterPersonArrivedMallResponse rsp = DescribeClusterPersonArrivedMallResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterPersonArrivedMallOutcome(rsp);
        else
            return DescribeClusterPersonArrivedMallOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterPersonArrivedMallOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeClusterPersonArrivedMallAsync(const DescribeClusterPersonArrivedMallRequest& request, const DescribeClusterPersonArrivedMallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterPersonArrivedMall(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeClusterPersonArrivedMallOutcomeCallable YoumallClient::DescribeClusterPersonArrivedMallCallable(const DescribeClusterPersonArrivedMallRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterPersonArrivedMallOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterPersonArrivedMall(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeClusterPersonTraceOutcome YoumallClient::DescribeClusterPersonTrace(const DescribeClusterPersonTraceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterPersonTrace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterPersonTraceResponse rsp = DescribeClusterPersonTraceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterPersonTraceOutcome(rsp);
        else
            return DescribeClusterPersonTraceOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterPersonTraceOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeClusterPersonTraceAsync(const DescribeClusterPersonTraceRequest& request, const DescribeClusterPersonTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterPersonTrace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeClusterPersonTraceOutcomeCallable YoumallClient::DescribeClusterPersonTraceCallable(const DescribeClusterPersonTraceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterPersonTraceOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterPersonTrace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeFaceIdByTempIdOutcome YoumallClient::DescribeFaceIdByTempId(const DescribeFaceIdByTempIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFaceIdByTempId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFaceIdByTempIdResponse rsp = DescribeFaceIdByTempIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFaceIdByTempIdOutcome(rsp);
        else
            return DescribeFaceIdByTempIdOutcome(o.GetError());
    }
    else
    {
        return DescribeFaceIdByTempIdOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeFaceIdByTempIdAsync(const DescribeFaceIdByTempIdRequest& request, const DescribeFaceIdByTempIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFaceIdByTempId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeFaceIdByTempIdOutcomeCallable YoumallClient::DescribeFaceIdByTempIdCallable(const DescribeFaceIdByTempIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFaceIdByTempIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeFaceIdByTempId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeHistoryNetworkInfoOutcome YoumallClient::DescribeHistoryNetworkInfo(const DescribeHistoryNetworkInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHistoryNetworkInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHistoryNetworkInfoResponse rsp = DescribeHistoryNetworkInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHistoryNetworkInfoOutcome(rsp);
        else
            return DescribeHistoryNetworkInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeHistoryNetworkInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeHistoryNetworkInfoAsync(const DescribeHistoryNetworkInfoRequest& request, const DescribeHistoryNetworkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHistoryNetworkInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeHistoryNetworkInfoOutcomeCallable YoumallClient::DescribeHistoryNetworkInfoCallable(const DescribeHistoryNetworkInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHistoryNetworkInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeHistoryNetworkInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeNetworkInfoOutcome YoumallClient::DescribeNetworkInfo(const DescribeNetworkInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkInfoResponse rsp = DescribeNetworkInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkInfoOutcome(rsp);
        else
            return DescribeNetworkInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeNetworkInfoAsync(const DescribeNetworkInfoRequest& request, const DescribeNetworkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeNetworkInfoOutcomeCallable YoumallClient::DescribeNetworkInfoCallable(const DescribeNetworkInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribePersonOutcome YoumallClient::DescribePerson(const DescribePersonRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonResponse rsp = DescribePersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonOutcome(rsp);
        else
            return DescribePersonOutcome(o.GetError());
    }
    else
    {
        return DescribePersonOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribePersonAsync(const DescribePersonRequest& request, const DescribePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribePersonOutcomeCallable YoumallClient::DescribePersonCallable(const DescribePersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonOutcome()>>(
        [this, request]()
        {
            return this->DescribePerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribePersonArrivedMallOutcome YoumallClient::DescribePersonArrivedMall(const DescribePersonArrivedMallRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonArrivedMall");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonArrivedMallResponse rsp = DescribePersonArrivedMallResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonArrivedMallOutcome(rsp);
        else
            return DescribePersonArrivedMallOutcome(o.GetError());
    }
    else
    {
        return DescribePersonArrivedMallOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribePersonArrivedMallAsync(const DescribePersonArrivedMallRequest& request, const DescribePersonArrivedMallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonArrivedMall(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribePersonArrivedMallOutcomeCallable YoumallClient::DescribePersonArrivedMallCallable(const DescribePersonArrivedMallRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonArrivedMallOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonArrivedMall(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribePersonInfoOutcome YoumallClient::DescribePersonInfo(const DescribePersonInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonInfoResponse rsp = DescribePersonInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonInfoOutcome(rsp);
        else
            return DescribePersonInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePersonInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribePersonInfoAsync(const DescribePersonInfoRequest& request, const DescribePersonInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribePersonInfoOutcomeCallable YoumallClient::DescribePersonInfoCallable(const DescribePersonInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribePersonInfoByFacePictureOutcome YoumallClient::DescribePersonInfoByFacePicture(const DescribePersonInfoByFacePictureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonInfoByFacePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonInfoByFacePictureResponse rsp = DescribePersonInfoByFacePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonInfoByFacePictureOutcome(rsp);
        else
            return DescribePersonInfoByFacePictureOutcome(o.GetError());
    }
    else
    {
        return DescribePersonInfoByFacePictureOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribePersonInfoByFacePictureAsync(const DescribePersonInfoByFacePictureRequest& request, const DescribePersonInfoByFacePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonInfoByFacePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribePersonInfoByFacePictureOutcomeCallable YoumallClient::DescribePersonInfoByFacePictureCallable(const DescribePersonInfoByFacePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonInfoByFacePictureOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonInfoByFacePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribePersonTraceOutcome YoumallClient::DescribePersonTrace(const DescribePersonTraceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonTrace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonTraceResponse rsp = DescribePersonTraceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonTraceOutcome(rsp);
        else
            return DescribePersonTraceOutcome(o.GetError());
    }
    else
    {
        return DescribePersonTraceOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribePersonTraceAsync(const DescribePersonTraceRequest& request, const DescribePersonTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonTrace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribePersonTraceOutcomeCallable YoumallClient::DescribePersonTraceCallable(const DescribePersonTraceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonTraceOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonTrace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribePersonTraceDetailOutcome YoumallClient::DescribePersonTraceDetail(const DescribePersonTraceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonTraceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonTraceDetailResponse rsp = DescribePersonTraceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonTraceDetailOutcome(rsp);
        else
            return DescribePersonTraceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePersonTraceDetailOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribePersonTraceDetailAsync(const DescribePersonTraceDetailRequest& request, const DescribePersonTraceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonTraceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribePersonTraceDetailOutcomeCallable YoumallClient::DescribePersonTraceDetailCallable(const DescribePersonTraceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonTraceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonTraceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribePersonVisitInfoOutcome YoumallClient::DescribePersonVisitInfo(const DescribePersonVisitInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonVisitInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonVisitInfoResponse rsp = DescribePersonVisitInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonVisitInfoOutcome(rsp);
        else
            return DescribePersonVisitInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePersonVisitInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribePersonVisitInfoAsync(const DescribePersonVisitInfoRequest& request, const DescribePersonVisitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonVisitInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribePersonVisitInfoOutcomeCallable YoumallClient::DescribePersonVisitInfoCallable(const DescribePersonVisitInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonVisitInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonVisitInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeShopHourTrafficInfoOutcome YoumallClient::DescribeShopHourTrafficInfo(const DescribeShopHourTrafficInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShopHourTrafficInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShopHourTrafficInfoResponse rsp = DescribeShopHourTrafficInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShopHourTrafficInfoOutcome(rsp);
        else
            return DescribeShopHourTrafficInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeShopHourTrafficInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeShopHourTrafficInfoAsync(const DescribeShopHourTrafficInfoRequest& request, const DescribeShopHourTrafficInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShopHourTrafficInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeShopHourTrafficInfoOutcomeCallable YoumallClient::DescribeShopHourTrafficInfoCallable(const DescribeShopHourTrafficInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShopHourTrafficInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeShopHourTrafficInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeShopInfoOutcome YoumallClient::DescribeShopInfo(const DescribeShopInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShopInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShopInfoResponse rsp = DescribeShopInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShopInfoOutcome(rsp);
        else
            return DescribeShopInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeShopInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeShopInfoAsync(const DescribeShopInfoRequest& request, const DescribeShopInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShopInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeShopInfoOutcomeCallable YoumallClient::DescribeShopInfoCallable(const DescribeShopInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShopInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeShopInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeShopTrafficInfoOutcome YoumallClient::DescribeShopTrafficInfo(const DescribeShopTrafficInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShopTrafficInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShopTrafficInfoResponse rsp = DescribeShopTrafficInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShopTrafficInfoOutcome(rsp);
        else
            return DescribeShopTrafficInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeShopTrafficInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeShopTrafficInfoAsync(const DescribeShopTrafficInfoRequest& request, const DescribeShopTrafficInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeShopTrafficInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeShopTrafficInfoOutcomeCallable YoumallClient::DescribeShopTrafficInfoCallable(const DescribeShopTrafficInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeShopTrafficInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeShopTrafficInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeTrajectoryDataOutcome YoumallClient::DescribeTrajectoryData(const DescribeTrajectoryDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrajectoryData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrajectoryDataResponse rsp = DescribeTrajectoryDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrajectoryDataOutcome(rsp);
        else
            return DescribeTrajectoryDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTrajectoryDataOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeTrajectoryDataAsync(const DescribeTrajectoryDataRequest& request, const DescribeTrajectoryDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrajectoryData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeTrajectoryDataOutcomeCallable YoumallClient::DescribeTrajectoryDataCallable(const DescribeTrajectoryDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrajectoryDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrajectoryData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeZoneFlowAgeInfoByZoneIdOutcome YoumallClient::DescribeZoneFlowAgeInfoByZoneId(const DescribeZoneFlowAgeInfoByZoneIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneFlowAgeInfoByZoneId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneFlowAgeInfoByZoneIdResponse rsp = DescribeZoneFlowAgeInfoByZoneIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneFlowAgeInfoByZoneIdOutcome(rsp);
        else
            return DescribeZoneFlowAgeInfoByZoneIdOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneFlowAgeInfoByZoneIdOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeZoneFlowAgeInfoByZoneIdAsync(const DescribeZoneFlowAgeInfoByZoneIdRequest& request, const DescribeZoneFlowAgeInfoByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneFlowAgeInfoByZoneId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeZoneFlowAgeInfoByZoneIdOutcomeCallable YoumallClient::DescribeZoneFlowAgeInfoByZoneIdCallable(const DescribeZoneFlowAgeInfoByZoneIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneFlowAgeInfoByZoneIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneFlowAgeInfoByZoneId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeZoneFlowAndStayTimeOutcome YoumallClient::DescribeZoneFlowAndStayTime(const DescribeZoneFlowAndStayTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneFlowAndStayTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneFlowAndStayTimeResponse rsp = DescribeZoneFlowAndStayTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneFlowAndStayTimeOutcome(rsp);
        else
            return DescribeZoneFlowAndStayTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneFlowAndStayTimeOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeZoneFlowAndStayTimeAsync(const DescribeZoneFlowAndStayTimeRequest& request, const DescribeZoneFlowAndStayTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneFlowAndStayTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeZoneFlowAndStayTimeOutcomeCallable YoumallClient::DescribeZoneFlowAndStayTimeCallable(const DescribeZoneFlowAndStayTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneFlowAndStayTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneFlowAndStayTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeZoneFlowDailyByZoneIdOutcome YoumallClient::DescribeZoneFlowDailyByZoneId(const DescribeZoneFlowDailyByZoneIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneFlowDailyByZoneId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneFlowDailyByZoneIdResponse rsp = DescribeZoneFlowDailyByZoneIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneFlowDailyByZoneIdOutcome(rsp);
        else
            return DescribeZoneFlowDailyByZoneIdOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneFlowDailyByZoneIdOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeZoneFlowDailyByZoneIdAsync(const DescribeZoneFlowDailyByZoneIdRequest& request, const DescribeZoneFlowDailyByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneFlowDailyByZoneId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeZoneFlowDailyByZoneIdOutcomeCallable YoumallClient::DescribeZoneFlowDailyByZoneIdCallable(const DescribeZoneFlowDailyByZoneIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneFlowDailyByZoneIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneFlowDailyByZoneId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome YoumallClient::DescribeZoneFlowGenderAvrStayTimeByZoneId(const DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneFlowGenderAvrStayTimeByZoneId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneFlowGenderAvrStayTimeByZoneIdResponse rsp = DescribeZoneFlowGenderAvrStayTimeByZoneIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome(rsp);
        else
            return DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeZoneFlowGenderAvrStayTimeByZoneIdAsync(const DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest& request, const DescribeZoneFlowGenderAvrStayTimeByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneFlowGenderAvrStayTimeByZoneId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcomeCallable YoumallClient::DescribeZoneFlowGenderAvrStayTimeByZoneIdCallable(const DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneFlowGenderAvrStayTimeByZoneId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeZoneFlowGenderInfoByZoneIdOutcome YoumallClient::DescribeZoneFlowGenderInfoByZoneId(const DescribeZoneFlowGenderInfoByZoneIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneFlowGenderInfoByZoneId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneFlowGenderInfoByZoneIdResponse rsp = DescribeZoneFlowGenderInfoByZoneIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneFlowGenderInfoByZoneIdOutcome(rsp);
        else
            return DescribeZoneFlowGenderInfoByZoneIdOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneFlowGenderInfoByZoneIdOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeZoneFlowGenderInfoByZoneIdAsync(const DescribeZoneFlowGenderInfoByZoneIdRequest& request, const DescribeZoneFlowGenderInfoByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneFlowGenderInfoByZoneId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeZoneFlowGenderInfoByZoneIdOutcomeCallable YoumallClient::DescribeZoneFlowGenderInfoByZoneIdCallable(const DescribeZoneFlowGenderInfoByZoneIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneFlowGenderInfoByZoneIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneFlowGenderInfoByZoneId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeZoneFlowHourlyByZoneIdOutcome YoumallClient::DescribeZoneFlowHourlyByZoneId(const DescribeZoneFlowHourlyByZoneIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneFlowHourlyByZoneId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneFlowHourlyByZoneIdResponse rsp = DescribeZoneFlowHourlyByZoneIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneFlowHourlyByZoneIdOutcome(rsp);
        else
            return DescribeZoneFlowHourlyByZoneIdOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneFlowHourlyByZoneIdOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeZoneFlowHourlyByZoneIdAsync(const DescribeZoneFlowHourlyByZoneIdRequest& request, const DescribeZoneFlowHourlyByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneFlowHourlyByZoneId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeZoneFlowHourlyByZoneIdOutcomeCallable YoumallClient::DescribeZoneFlowHourlyByZoneIdCallable(const DescribeZoneFlowHourlyByZoneIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneFlowHourlyByZoneIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneFlowHourlyByZoneId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::DescribeZoneTrafficInfoOutcome YoumallClient::DescribeZoneTrafficInfo(const DescribeZoneTrafficInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneTrafficInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneTrafficInfoResponse rsp = DescribeZoneTrafficInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneTrafficInfoOutcome(rsp);
        else
            return DescribeZoneTrafficInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneTrafficInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::DescribeZoneTrafficInfoAsync(const DescribeZoneTrafficInfoRequest& request, const DescribeZoneTrafficInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneTrafficInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::DescribeZoneTrafficInfoOutcomeCallable YoumallClient::DescribeZoneTrafficInfoCallable(const DescribeZoneTrafficInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneTrafficInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneTrafficInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::ModifyPersonFeatureInfoOutcome YoumallClient::ModifyPersonFeatureInfo(const ModifyPersonFeatureInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonFeatureInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonFeatureInfoResponse rsp = ModifyPersonFeatureInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonFeatureInfoOutcome(rsp);
        else
            return ModifyPersonFeatureInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonFeatureInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::ModifyPersonFeatureInfoAsync(const ModifyPersonFeatureInfoRequest& request, const ModifyPersonFeatureInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPersonFeatureInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::ModifyPersonFeatureInfoOutcomeCallable YoumallClient::ModifyPersonFeatureInfoCallable(const ModifyPersonFeatureInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPersonFeatureInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyPersonFeatureInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::ModifyPersonTagInfoOutcome YoumallClient::ModifyPersonTagInfo(const ModifyPersonTagInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonTagInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonTagInfoResponse rsp = ModifyPersonTagInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonTagInfoOutcome(rsp);
        else
            return ModifyPersonTagInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonTagInfoOutcome(outcome.GetError());
    }
}

void YoumallClient::ModifyPersonTagInfoAsync(const ModifyPersonTagInfoRequest& request, const ModifyPersonTagInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPersonTagInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::ModifyPersonTagInfoOutcomeCallable YoumallClient::ModifyPersonTagInfoCallable(const ModifyPersonTagInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPersonTagInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyPersonTagInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::ModifyPersonTypeOutcome YoumallClient::ModifyPersonType(const ModifyPersonTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonTypeResponse rsp = ModifyPersonTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonTypeOutcome(rsp);
        else
            return ModifyPersonTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonTypeOutcome(outcome.GetError());
    }
}

void YoumallClient::ModifyPersonTypeAsync(const ModifyPersonTypeRequest& request, const ModifyPersonTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPersonType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::ModifyPersonTypeOutcomeCallable YoumallClient::ModifyPersonTypeCallable(const ModifyPersonTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPersonTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyPersonType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

YoumallClient::RegisterCallbackOutcome YoumallClient::RegisterCallback(const RegisterCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterCallbackResponse rsp = RegisterCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterCallbackOutcome(rsp);
        else
            return RegisterCallbackOutcome(o.GetError());
    }
    else
    {
        return RegisterCallbackOutcome(outcome.GetError());
    }
}

void YoumallClient::RegisterCallbackAsync(const RegisterCallbackRequest& request, const RegisterCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterCallback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

YoumallClient::RegisterCallbackOutcomeCallable YoumallClient::RegisterCallbackCallable(const RegisterCallbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterCallbackOutcome()>>(
        [this, request]()
        {
            return this->RegisterCallback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

