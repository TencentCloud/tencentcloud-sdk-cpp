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

#include <tencentcloud/trtc/v20190722/TrtcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trtc::V20190722;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-22";
    const string ENDPOINT = "trtc.tencentcloudapi.com";
}

TrtcClient::TrtcClient(const Credential &credential, const string &region) :
    TrtcClient(credential, region, ClientProfile())
{
}

TrtcClient::TrtcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrtcClient::CreatePictureOutcome TrtcClient::CreatePicture(const CreatePictureRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePictureResponse rsp = CreatePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePictureOutcome(rsp);
        else
            return CreatePictureOutcome(o.GetError());
    }
    else
    {
        return CreatePictureOutcome(outcome.GetError());
    }
}

void TrtcClient::CreatePictureAsync(const CreatePictureRequest& request, const CreatePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::CreatePictureOutcomeCallable TrtcClient::CreatePictureCallable(const CreatePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePictureOutcome()>>(
        [this, request]()
        {
            return this->CreatePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::CreateTroubleInfoOutcome TrtcClient::CreateTroubleInfo(const CreateTroubleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTroubleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTroubleInfoResponse rsp = CreateTroubleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTroubleInfoOutcome(rsp);
        else
            return CreateTroubleInfoOutcome(o.GetError());
    }
    else
    {
        return CreateTroubleInfoOutcome(outcome.GetError());
    }
}

void TrtcClient::CreateTroubleInfoAsync(const CreateTroubleInfoRequest& request, const CreateTroubleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTroubleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::CreateTroubleInfoOutcomeCallable TrtcClient::CreateTroubleInfoCallable(const CreateTroubleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTroubleInfoOutcome()>>(
        [this, request]()
        {
            return this->CreateTroubleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DeletePictureOutcome TrtcClient::DeletePicture(const DeletePictureRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePictureResponse rsp = DeletePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePictureOutcome(rsp);
        else
            return DeletePictureOutcome(o.GetError());
    }
    else
    {
        return DeletePictureOutcome(outcome.GetError());
    }
}

void TrtcClient::DeletePictureAsync(const DeletePictureRequest& request, const DeletePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DeletePictureOutcomeCallable TrtcClient::DeletePictureCallable(const DeletePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePictureOutcome()>>(
        [this, request]()
        {
            return this->DeletePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeAbnormalEventOutcome TrtcClient::DescribeAbnormalEvent(const DescribeAbnormalEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalEventResponse rsp = DescribeAbnormalEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalEventOutcome(rsp);
        else
            return DescribeAbnormalEventOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalEventOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeAbnormalEventAsync(const DescribeAbnormalEventRequest& request, const DescribeAbnormalEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAbnormalEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeAbnormalEventOutcomeCallable TrtcClient::DescribeAbnormalEventCallable(const DescribeAbnormalEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAbnormalEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeAbnormalEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeCallDetailOutcome TrtcClient::DescribeCallDetail(const DescribeCallDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallDetailResponse rsp = DescribeCallDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallDetailOutcome(rsp);
        else
            return DescribeCallDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCallDetailOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCallDetailAsync(const DescribeCallDetailRequest& request, const DescribeCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeCallDetailOutcomeCallable TrtcClient::DescribeCallDetailCallable(const DescribeCallDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeDetailEventOutcome TrtcClient::DescribeDetailEvent(const DescribeDetailEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDetailEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDetailEventResponse rsp = DescribeDetailEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDetailEventOutcome(rsp);
        else
            return DescribeDetailEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDetailEventOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeDetailEventAsync(const DescribeDetailEventRequest& request, const DescribeDetailEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDetailEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeDetailEventOutcomeCallable TrtcClient::DescribeDetailEventCallable(const DescribeDetailEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDetailEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDetailEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeHistoryScaleOutcome TrtcClient::DescribeHistoryScale(const DescribeHistoryScaleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHistoryScale");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHistoryScaleResponse rsp = DescribeHistoryScaleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHistoryScaleOutcome(rsp);
        else
            return DescribeHistoryScaleOutcome(o.GetError());
    }
    else
    {
        return DescribeHistoryScaleOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeHistoryScaleAsync(const DescribeHistoryScaleRequest& request, const DescribeHistoryScaleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHistoryScale(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeHistoryScaleOutcomeCallable TrtcClient::DescribeHistoryScaleCallable(const DescribeHistoryScaleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHistoryScaleOutcome()>>(
        [this, request]()
        {
            return this->DescribeHistoryScale(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribePictureOutcome TrtcClient::DescribePicture(const DescribePictureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePictureResponse rsp = DescribePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePictureOutcome(rsp);
        else
            return DescribePictureOutcome(o.GetError());
    }
    else
    {
        return DescribePictureOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribePictureAsync(const DescribePictureRequest& request, const DescribePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribePictureOutcomeCallable TrtcClient::DescribePictureCallable(const DescribePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePictureOutcome()>>(
        [this, request]()
        {
            return this->DescribePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRecordStatisticOutcome TrtcClient::DescribeRecordStatistic(const DescribeRecordStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordStatisticResponse rsp = DescribeRecordStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordStatisticOutcome(rsp);
        else
            return DescribeRecordStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordStatisticOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRecordStatisticAsync(const DescribeRecordStatisticRequest& request, const DescribeRecordStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRecordStatisticOutcomeCallable TrtcClient::DescribeRecordStatisticCallable(const DescribeRecordStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeRoomInformationOutcome TrtcClient::DescribeRoomInformation(const DescribeRoomInformationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomInformationResponse rsp = DescribeRoomInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomInformationOutcome(rsp);
        else
            return DescribeRoomInformationOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomInformationOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRoomInformationAsync(const DescribeRoomInformationRequest& request, const DescribeRoomInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoomInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRoomInformationOutcomeCallable TrtcClient::DescribeRoomInformationCallable(const DescribeRoomInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomInformationOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoomInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeTrtcInteractiveTimeOutcome TrtcClient::DescribeTrtcInteractiveTime(const DescribeTrtcInteractiveTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrtcInteractiveTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrtcInteractiveTimeResponse rsp = DescribeTrtcInteractiveTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrtcInteractiveTimeOutcome(rsp);
        else
            return DescribeTrtcInteractiveTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeTrtcInteractiveTimeOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTrtcInteractiveTimeAsync(const DescribeTrtcInteractiveTimeRequest& request, const DescribeTrtcInteractiveTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrtcInteractiveTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTrtcInteractiveTimeOutcomeCallable TrtcClient::DescribeTrtcInteractiveTimeCallable(const DescribeTrtcInteractiveTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrtcInteractiveTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrtcInteractiveTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeTrtcMcuTranscodeTimeOutcome TrtcClient::DescribeTrtcMcuTranscodeTime(const DescribeTrtcMcuTranscodeTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrtcMcuTranscodeTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrtcMcuTranscodeTimeResponse rsp = DescribeTrtcMcuTranscodeTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrtcMcuTranscodeTimeOutcome(rsp);
        else
            return DescribeTrtcMcuTranscodeTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeTrtcMcuTranscodeTimeOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTrtcMcuTranscodeTimeAsync(const DescribeTrtcMcuTranscodeTimeRequest& request, const DescribeTrtcMcuTranscodeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrtcMcuTranscodeTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTrtcMcuTranscodeTimeOutcomeCallable TrtcClient::DescribeTrtcMcuTranscodeTimeCallable(const DescribeTrtcMcuTranscodeTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrtcMcuTranscodeTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrtcMcuTranscodeTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeUserInformationOutcome TrtcClient::DescribeUserInformation(const DescribeUserInformationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInformationResponse rsp = DescribeUserInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInformationOutcome(rsp);
        else
            return DescribeUserInformationOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInformationOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeUserInformationAsync(const DescribeUserInformationRequest& request, const DescribeUserInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeUserInformationOutcomeCallable TrtcClient::DescribeUserInformationCallable(const DescribeUserInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserInformationOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DismissRoomOutcome TrtcClient::DismissRoom(const DismissRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomResponse rsp = DismissRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomOutcome(rsp);
        else
            return DismissRoomOutcome(o.GetError());
    }
    else
    {
        return DismissRoomOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomAsync(const DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomOutcomeCallable TrtcClient::DismissRoomCallable(const DismissRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomOutcome()>>(
        [this, request]()
        {
            return this->DismissRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DismissRoomByStrRoomIdOutcome TrtcClient::DismissRoomByStrRoomId(const DismissRoomByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoomByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomByStrRoomIdResponse rsp = DismissRoomByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomByStrRoomIdOutcome(rsp);
        else
            return DismissRoomByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return DismissRoomByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomByStrRoomIdAsync(const DismissRoomByStrRoomIdRequest& request, const DismissRoomByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoomByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomByStrRoomIdOutcomeCallable TrtcClient::DismissRoomByStrRoomIdCallable(const DismissRoomByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->DismissRoomByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::ModifyPictureOutcome TrtcClient::ModifyPicture(const ModifyPictureRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPictureResponse rsp = ModifyPictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPictureOutcome(rsp);
        else
            return ModifyPictureOutcome(o.GetError());
    }
    else
    {
        return ModifyPictureOutcome(outcome.GetError());
    }
}

void TrtcClient::ModifyPictureAsync(const ModifyPictureRequest& request, const ModifyPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::ModifyPictureOutcomeCallable TrtcClient::ModifyPictureCallable(const ModifyPictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPictureOutcome()>>(
        [this, request]()
        {
            return this->ModifyPicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::RemoveUserOutcome TrtcClient::RemoveUser(const RemoveUserRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserResponse rsp = RemoveUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserOutcome(rsp);
        else
            return RemoveUserOutcome(o.GetError());
    }
    else
    {
        return RemoveUserOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserAsync(const RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserOutcomeCallable TrtcClient::RemoveUserCallable(const RemoveUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserOutcome()>>(
        [this, request]()
        {
            return this->RemoveUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::RemoveUserByStrRoomIdOutcome TrtcClient::RemoveUserByStrRoomId(const RemoveUserByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserByStrRoomIdResponse rsp = RemoveUserByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserByStrRoomIdOutcome(rsp);
        else
            return RemoveUserByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return RemoveUserByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserByStrRoomIdAsync(const RemoveUserByStrRoomIdRequest& request, const RemoveUserByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUserByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserByStrRoomIdOutcomeCallable TrtcClient::RemoveUserByStrRoomIdCallable(const RemoveUserByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->RemoveUserByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StartMCUMixTranscodeOutcome TrtcClient::StartMCUMixTranscode(const StartMCUMixTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "StartMCUMixTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMCUMixTranscodeResponse rsp = StartMCUMixTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMCUMixTranscodeOutcome(rsp);
        else
            return StartMCUMixTranscodeOutcome(o.GetError());
    }
    else
    {
        return StartMCUMixTranscodeOutcome(outcome.GetError());
    }
}

void TrtcClient::StartMCUMixTranscodeAsync(const StartMCUMixTranscodeRequest& request, const StartMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMCUMixTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartMCUMixTranscodeOutcomeCallable TrtcClient::StartMCUMixTranscodeCallable(const StartMCUMixTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMCUMixTranscodeOutcome()>>(
        [this, request]()
        {
            return this->StartMCUMixTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StartMCUMixTranscodeByStrRoomIdOutcome TrtcClient::StartMCUMixTranscodeByStrRoomId(const StartMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "StartMCUMixTranscodeByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMCUMixTranscodeByStrRoomIdResponse rsp = StartMCUMixTranscodeByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMCUMixTranscodeByStrRoomIdOutcome(rsp);
        else
            return StartMCUMixTranscodeByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return StartMCUMixTranscodeByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::StartMCUMixTranscodeByStrRoomIdAsync(const StartMCUMixTranscodeByStrRoomIdRequest& request, const StartMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMCUMixTranscodeByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartMCUMixTranscodeByStrRoomIdOutcomeCallable TrtcClient::StartMCUMixTranscodeByStrRoomIdCallable(const StartMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMCUMixTranscodeByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->StartMCUMixTranscodeByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StopMCUMixTranscodeOutcome TrtcClient::StopMCUMixTranscode(const StopMCUMixTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "StopMCUMixTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMCUMixTranscodeResponse rsp = StopMCUMixTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMCUMixTranscodeOutcome(rsp);
        else
            return StopMCUMixTranscodeOutcome(o.GetError());
    }
    else
    {
        return StopMCUMixTranscodeOutcome(outcome.GetError());
    }
}

void TrtcClient::StopMCUMixTranscodeAsync(const StopMCUMixTranscodeRequest& request, const StopMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMCUMixTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopMCUMixTranscodeOutcomeCallable TrtcClient::StopMCUMixTranscodeCallable(const StopMCUMixTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMCUMixTranscodeOutcome()>>(
        [this, request]()
        {
            return this->StopMCUMixTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::StopMCUMixTranscodeByStrRoomIdOutcome TrtcClient::StopMCUMixTranscodeByStrRoomId(const StopMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "StopMCUMixTranscodeByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMCUMixTranscodeByStrRoomIdResponse rsp = StopMCUMixTranscodeByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMCUMixTranscodeByStrRoomIdOutcome(rsp);
        else
            return StopMCUMixTranscodeByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return StopMCUMixTranscodeByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::StopMCUMixTranscodeByStrRoomIdAsync(const StopMCUMixTranscodeByStrRoomIdRequest& request, const StopMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMCUMixTranscodeByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopMCUMixTranscodeByStrRoomIdOutcomeCallable TrtcClient::StopMCUMixTranscodeByStrRoomIdCallable(const StopMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMCUMixTranscodeByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->StopMCUMixTranscodeByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

