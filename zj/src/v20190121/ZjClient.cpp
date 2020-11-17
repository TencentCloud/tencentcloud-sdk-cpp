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

#include <tencentcloud/zj/v20190121/ZjClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Zj::V20190121;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-21";
    const string ENDPOINT = "zj.tencentcloudapi.com";
}

ZjClient::ZjClient(const Credential &credential, const string &region) :
    ZjClient(credential, region, ClientProfile())
{
}

ZjClient::ZjClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ZjClient::AddCrowdPackInfoOutcome ZjClient::AddCrowdPackInfo(const AddCrowdPackInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCrowdPackInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCrowdPackInfoResponse rsp = AddCrowdPackInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCrowdPackInfoOutcome(rsp);
        else
            return AddCrowdPackInfoOutcome(o.GetError());
    }
    else
    {
        return AddCrowdPackInfoOutcome(outcome.GetError());
    }
}

void ZjClient::AddCrowdPackInfoAsync(const AddCrowdPackInfoRequest& request, const AddCrowdPackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCrowdPackInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::AddCrowdPackInfoOutcomeCallable ZjClient::AddCrowdPackInfoCallable(const AddCrowdPackInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCrowdPackInfoOutcome()>>(
        [this, request]()
        {
            return this->AddCrowdPackInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::AddSmsSignOutcome ZjClient::AddSmsSign(const AddSmsSignRequest &request)
{
    auto outcome = MakeRequest(request, "AddSmsSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSmsSignResponse rsp = AddSmsSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSmsSignOutcome(rsp);
        else
            return AddSmsSignOutcome(o.GetError());
    }
    else
    {
        return AddSmsSignOutcome(outcome.GetError());
    }
}

void ZjClient::AddSmsSignAsync(const AddSmsSignRequest& request, const AddSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddSmsSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::AddSmsSignOutcomeCallable ZjClient::AddSmsSignCallable(const AddSmsSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddSmsSignOutcome()>>(
        [this, request]()
        {
            return this->AddSmsSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::AddSmsTemplateOutcome ZjClient::AddSmsTemplate(const AddSmsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "AddSmsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSmsTemplateResponse rsp = AddSmsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSmsTemplateOutcome(rsp);
        else
            return AddSmsTemplateOutcome(o.GetError());
    }
    else
    {
        return AddSmsTemplateOutcome(outcome.GetError());
    }
}

void ZjClient::AddSmsTemplateAsync(const AddSmsTemplateRequest& request, const AddSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddSmsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::AddSmsTemplateOutcomeCallable ZjClient::AddSmsTemplateCallable(const AddSmsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddSmsTemplateOutcome()>>(
        [this, request]()
        {
            return this->AddSmsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::CancelCampaignOutcome ZjClient::CancelCampaign(const CancelCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "CancelCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelCampaignResponse rsp = CancelCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelCampaignOutcome(rsp);
        else
            return CancelCampaignOutcome(o.GetError());
    }
    else
    {
        return CancelCampaignOutcome(outcome.GetError());
    }
}

void ZjClient::CancelCampaignAsync(const CancelCampaignRequest& request, const CancelCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::CancelCampaignOutcomeCallable ZjClient::CancelCampaignCallable(const CancelCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelCampaignOutcome()>>(
        [this, request]()
        {
            return this->CancelCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::CreateCampaignOutcome ZjClient::CreateCampaign(const CreateCampaignRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCampaign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCampaignResponse rsp = CreateCampaignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCampaignOutcome(rsp);
        else
            return CreateCampaignOutcome(o.GetError());
    }
    else
    {
        return CreateCampaignOutcome(outcome.GetError());
    }
}

void ZjClient::CreateCampaignAsync(const CreateCampaignRequest& request, const CreateCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCampaign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::CreateCampaignOutcomeCallable ZjClient::CreateCampaignCallable(const CreateCampaignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCampaignOutcome()>>(
        [this, request]()
        {
            return this->CreateCampaign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::CreateMmsInstanceOutcome ZjClient::CreateMmsInstance(const CreateMmsInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMmsInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMmsInstanceResponse rsp = CreateMmsInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMmsInstanceOutcome(rsp);
        else
            return CreateMmsInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateMmsInstanceOutcome(outcome.GetError());
    }
}

void ZjClient::CreateMmsInstanceAsync(const CreateMmsInstanceRequest& request, const CreateMmsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMmsInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::CreateMmsInstanceOutcomeCallable ZjClient::CreateMmsInstanceCallable(const CreateMmsInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMmsInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateMmsInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::DelCrowdPackOutcome ZjClient::DelCrowdPack(const DelCrowdPackRequest &request)
{
    auto outcome = MakeRequest(request, "DelCrowdPack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DelCrowdPackResponse rsp = DelCrowdPackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DelCrowdPackOutcome(rsp);
        else
            return DelCrowdPackOutcome(o.GetError());
    }
    else
    {
        return DelCrowdPackOutcome(outcome.GetError());
    }
}

void ZjClient::DelCrowdPackAsync(const DelCrowdPackRequest& request, const DelCrowdPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DelCrowdPack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::DelCrowdPackOutcomeCallable ZjClient::DelCrowdPackCallable(const DelCrowdPackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DelCrowdPackOutcome()>>(
        [this, request]()
        {
            return this->DelCrowdPack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::DelTemplateOutcome ZjClient::DelTemplate(const DelTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DelTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DelTemplateResponse rsp = DelTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DelTemplateOutcome(rsp);
        else
            return DelTemplateOutcome(o.GetError());
    }
    else
    {
        return DelTemplateOutcome(outcome.GetError());
    }
}

void ZjClient::DelTemplateAsync(const DelTemplateRequest& request, const DelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DelTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::DelTemplateOutcomeCallable ZjClient::DelTemplateCallable(const DelTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DelTemplateOutcome()>>(
        [this, request]()
        {
            return this->DelTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::DeleteMmsInstanceOutcome ZjClient::DeleteMmsInstance(const DeleteMmsInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMmsInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMmsInstanceResponse rsp = DeleteMmsInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMmsInstanceOutcome(rsp);
        else
            return DeleteMmsInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteMmsInstanceOutcome(outcome.GetError());
    }
}

void ZjClient::DeleteMmsInstanceAsync(const DeleteMmsInstanceRequest& request, const DeleteMmsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMmsInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::DeleteMmsInstanceOutcomeCallable ZjClient::DeleteMmsInstanceCallable(const DeleteMmsInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMmsInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteMmsInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::DescribeMmsInstanceInfoOutcome ZjClient::DescribeMmsInstanceInfo(const DescribeMmsInstanceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMmsInstanceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMmsInstanceInfoResponse rsp = DescribeMmsInstanceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMmsInstanceInfoOutcome(rsp);
        else
            return DescribeMmsInstanceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMmsInstanceInfoOutcome(outcome.GetError());
    }
}

void ZjClient::DescribeMmsInstanceInfoAsync(const DescribeMmsInstanceInfoRequest& request, const DescribeMmsInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMmsInstanceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::DescribeMmsInstanceInfoOutcomeCallable ZjClient::DescribeMmsInstanceInfoCallable(const DescribeMmsInstanceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMmsInstanceInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeMmsInstanceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::DescribeMmsInstanceListOutcome ZjClient::DescribeMmsInstanceList(const DescribeMmsInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMmsInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMmsInstanceListResponse rsp = DescribeMmsInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMmsInstanceListOutcome(rsp);
        else
            return DescribeMmsInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeMmsInstanceListOutcome(outcome.GetError());
    }
}

void ZjClient::DescribeMmsInstanceListAsync(const DescribeMmsInstanceListRequest& request, const DescribeMmsInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMmsInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::DescribeMmsInstanceListOutcomeCallable ZjClient::DescribeMmsInstanceListCallable(const DescribeMmsInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMmsInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMmsInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::DescribeSmsCampaignStatisticsOutcome ZjClient::DescribeSmsCampaignStatistics(const DescribeSmsCampaignStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmsCampaignStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmsCampaignStatisticsResponse rsp = DescribeSmsCampaignStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmsCampaignStatisticsOutcome(rsp);
        else
            return DescribeSmsCampaignStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSmsCampaignStatisticsOutcome(outcome.GetError());
    }
}

void ZjClient::DescribeSmsCampaignStatisticsAsync(const DescribeSmsCampaignStatisticsRequest& request, const DescribeSmsCampaignStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmsCampaignStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::DescribeSmsCampaignStatisticsOutcomeCallable ZjClient::DescribeSmsCampaignStatisticsCallable(const DescribeSmsCampaignStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmsCampaignStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmsCampaignStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::DescribeSmsSignListOutcome ZjClient::DescribeSmsSignList(const DescribeSmsSignListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmsSignList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmsSignListResponse rsp = DescribeSmsSignListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmsSignListOutcome(rsp);
        else
            return DescribeSmsSignListOutcome(o.GetError());
    }
    else
    {
        return DescribeSmsSignListOutcome(outcome.GetError());
    }
}

void ZjClient::DescribeSmsSignListAsync(const DescribeSmsSignListRequest& request, const DescribeSmsSignListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmsSignList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::DescribeSmsSignListOutcomeCallable ZjClient::DescribeSmsSignListCallable(const DescribeSmsSignListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmsSignListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmsSignList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::DescribeSmsTemplateListOutcome ZjClient::DescribeSmsTemplateList(const DescribeSmsTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmsTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmsTemplateListResponse rsp = DescribeSmsTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmsTemplateListOutcome(rsp);
        else
            return DescribeSmsTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeSmsTemplateListOutcome(outcome.GetError());
    }
}

void ZjClient::DescribeSmsTemplateListAsync(const DescribeSmsTemplateListRequest& request, const DescribeSmsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmsTemplateList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::DescribeSmsTemplateListOutcomeCallable ZjClient::DescribeSmsTemplateListCallable(const DescribeSmsTemplateListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmsTemplateListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmsTemplateList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::GetCrowdPackListOutcome ZjClient::GetCrowdPackList(const GetCrowdPackListRequest &request)
{
    auto outcome = MakeRequest(request, "GetCrowdPackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCrowdPackListResponse rsp = GetCrowdPackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCrowdPackListOutcome(rsp);
        else
            return GetCrowdPackListOutcome(o.GetError());
    }
    else
    {
        return GetCrowdPackListOutcome(outcome.GetError());
    }
}

void ZjClient::GetCrowdPackListAsync(const GetCrowdPackListRequest& request, const GetCrowdPackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCrowdPackList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::GetCrowdPackListOutcomeCallable ZjClient::GetCrowdPackListCallable(const GetCrowdPackListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCrowdPackListOutcome()>>(
        [this, request]()
        {
            return this->GetCrowdPackList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::GetCrowdUploadInfoOutcome ZjClient::GetCrowdUploadInfo(const GetCrowdUploadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetCrowdUploadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCrowdUploadInfoResponse rsp = GetCrowdUploadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCrowdUploadInfoOutcome(rsp);
        else
            return GetCrowdUploadInfoOutcome(o.GetError());
    }
    else
    {
        return GetCrowdUploadInfoOutcome(outcome.GetError());
    }
}

void ZjClient::GetCrowdUploadInfoAsync(const GetCrowdUploadInfoRequest& request, const GetCrowdUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCrowdUploadInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::GetCrowdUploadInfoOutcomeCallable ZjClient::GetCrowdUploadInfoCallable(const GetCrowdUploadInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCrowdUploadInfoOutcome()>>(
        [this, request]()
        {
            return this->GetCrowdUploadInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::GetSmsAmountInfoOutcome ZjClient::GetSmsAmountInfo(const GetSmsAmountInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetSmsAmountInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSmsAmountInfoResponse rsp = GetSmsAmountInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSmsAmountInfoOutcome(rsp);
        else
            return GetSmsAmountInfoOutcome(o.GetError());
    }
    else
    {
        return GetSmsAmountInfoOutcome(outcome.GetError());
    }
}

void ZjClient::GetSmsAmountInfoAsync(const GetSmsAmountInfoRequest& request, const GetSmsAmountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSmsAmountInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::GetSmsAmountInfoOutcomeCallable ZjClient::GetSmsAmountInfoCallable(const GetSmsAmountInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSmsAmountInfoOutcome()>>(
        [this, request]()
        {
            return this->GetSmsAmountInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::GetSmsCampaignStatusOutcome ZjClient::GetSmsCampaignStatus(const GetSmsCampaignStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetSmsCampaignStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSmsCampaignStatusResponse rsp = GetSmsCampaignStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSmsCampaignStatusOutcome(rsp);
        else
            return GetSmsCampaignStatusOutcome(o.GetError());
    }
    else
    {
        return GetSmsCampaignStatusOutcome(outcome.GetError());
    }
}

void ZjClient::GetSmsCampaignStatusAsync(const GetSmsCampaignStatusRequest& request, const GetSmsCampaignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSmsCampaignStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::GetSmsCampaignStatusOutcomeCallable ZjClient::GetSmsCampaignStatusCallable(const GetSmsCampaignStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSmsCampaignStatusOutcome()>>(
        [this, request]()
        {
            return this->GetSmsCampaignStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::ModifySmsTemplateOutcome ZjClient::ModifySmsTemplate(const ModifySmsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySmsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySmsTemplateResponse rsp = ModifySmsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySmsTemplateOutcome(rsp);
        else
            return ModifySmsTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySmsTemplateOutcome(outcome.GetError());
    }
}

void ZjClient::ModifySmsTemplateAsync(const ModifySmsTemplateRequest& request, const ModifySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySmsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::ModifySmsTemplateOutcomeCallable ZjClient::ModifySmsTemplateCallable(const ModifySmsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySmsTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifySmsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::PushMmsContentOutcome ZjClient::PushMmsContent(const PushMmsContentRequest &request)
{
    auto outcome = MakeRequest(request, "PushMmsContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PushMmsContentResponse rsp = PushMmsContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PushMmsContentOutcome(rsp);
        else
            return PushMmsContentOutcome(o.GetError());
    }
    else
    {
        return PushMmsContentOutcome(outcome.GetError());
    }
}

void ZjClient::PushMmsContentAsync(const PushMmsContentRequest& request, const PushMmsContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PushMmsContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::PushMmsContentOutcomeCallable ZjClient::PushMmsContentCallable(const PushMmsContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PushMmsContentOutcome()>>(
        [this, request]()
        {
            return this->PushMmsContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ZjClient::SendSmsOutcome ZjClient::SendSms(const SendSmsRequest &request)
{
    auto outcome = MakeRequest(request, "SendSms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendSmsResponse rsp = SendSmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendSmsOutcome(rsp);
        else
            return SendSmsOutcome(o.GetError());
    }
    else
    {
        return SendSmsOutcome(outcome.GetError());
    }
}

void ZjClient::SendSmsAsync(const SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendSms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ZjClient::SendSmsOutcomeCallable ZjClient::SendSmsCallable(const SendSmsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendSmsOutcome()>>(
        [this, request]()
        {
            return this->SendSms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

