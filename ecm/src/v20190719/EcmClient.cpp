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

#include <tencentcloud/ecm/v20190719/EcmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ecm::V20190719;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-19";
    const string ENDPOINT = "ecm.tencentcloudapi.com";
}

EcmClient::EcmClient(const Credential &credential, const string &region) :
    EcmClient(credential, region, ClientProfile())
{
}

EcmClient::EcmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EcmClient::CreateModuleOutcome EcmClient::CreateModule(const CreateModuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModuleResponse rsp = CreateModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModuleOutcome(rsp);
        else
            return CreateModuleOutcome(o.GetError());
    }
    else
    {
        return CreateModuleOutcome(outcome.GetError());
    }
}

void EcmClient::CreateModuleAsync(const CreateModuleRequest& request, const CreateModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateModule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::CreateModuleOutcomeCallable EcmClient::CreateModuleCallable(const CreateModuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateModuleOutcome()>>(
        [this, request]()
        {
            return this->CreateModule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteImageOutcome EcmClient::DeleteImage(const DeleteImageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageResponse rsp = DeleteImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageOutcome(rsp);
        else
            return DeleteImageOutcome(o.GetError());
    }
    else
    {
        return DeleteImageOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteImageAsync(const DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteImageOutcomeCallable EcmClient::DeleteImageCallable(const DeleteImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageOutcome()>>(
        [this, request]()
        {
            return this->DeleteImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DeleteModuleOutcome EcmClient::DeleteModule(const DeleteModuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModuleResponse rsp = DeleteModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModuleOutcome(rsp);
        else
            return DeleteModuleOutcome(o.GetError());
    }
    else
    {
        return DeleteModuleOutcome(outcome.GetError());
    }
}

void EcmClient::DeleteModuleAsync(const DeleteModuleRequest& request, const DeleteModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteModule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DeleteModuleOutcomeCallable EcmClient::DeleteModuleCallable(const DeleteModuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteModuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteModule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeBaseOverviewOutcome EcmClient::DescribeBaseOverview(const DescribeBaseOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaseOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaseOverviewResponse rsp = DescribeBaseOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaseOverviewOutcome(rsp);
        else
            return DescribeBaseOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBaseOverviewOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeBaseOverviewAsync(const DescribeBaseOverviewRequest& request, const DescribeBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaseOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeBaseOverviewOutcomeCallable EcmClient::DescribeBaseOverviewCallable(const DescribeBaseOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaseOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaseOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeConfigOutcome EcmClient::DescribeConfig(const DescribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigResponse rsp = DescribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigOutcome(rsp);
        else
            return DescribeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeConfigAsync(const DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeConfigOutcomeCallable EcmClient::DescribeConfigCallable(const DescribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeImageOutcome EcmClient::DescribeImage(const DescribeImageRequest &request)
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

void EcmClient::DescribeImageAsync(const DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeImageOutcomeCallable EcmClient::DescribeImageCallable(const DescribeImageRequest &request)
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

EcmClient::DescribeInstanceTypeConfigOutcome EcmClient::DescribeInstanceTypeConfig(const DescribeInstanceTypeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTypeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTypeConfigResponse rsp = DescribeInstanceTypeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTypeConfigOutcome(rsp);
        else
            return DescribeInstanceTypeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTypeConfigOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstanceTypeConfigAsync(const DescribeInstanceTypeConfigRequest& request, const DescribeInstanceTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceTypeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeInstanceTypeConfigOutcomeCallable EcmClient::DescribeInstanceTypeConfigCallable(const DescribeInstanceTypeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceTypeConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceTypeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeInstancesOutcome EcmClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeInstancesOutcomeCallable EcmClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeInstancesDeniedActionsOutcome EcmClient::DescribeInstancesDeniedActions(const DescribeInstancesDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDeniedActionsResponse rsp = DescribeInstancesDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDeniedActionsOutcome(rsp);
        else
            return DescribeInstancesDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDeniedActionsOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeInstancesDeniedActionsAsync(const DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesDeniedActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeInstancesDeniedActionsOutcomeCallable EcmClient::DescribeInstancesDeniedActionsCallable(const DescribeInstancesDeniedActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesDeniedActionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesDeniedActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeModuleOutcome EcmClient::DescribeModule(const DescribeModuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModuleResponse rsp = DescribeModuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModuleOutcome(rsp);
        else
            return DescribeModuleOutcome(o.GetError());
    }
    else
    {
        return DescribeModuleOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeModuleAsync(const DescribeModuleRequest& request, const DescribeModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeModuleOutcomeCallable EcmClient::DescribeModuleCallable(const DescribeModuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeModule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeModuleDetailOutcome EcmClient::DescribeModuleDetail(const DescribeModuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModuleDetailResponse rsp = DescribeModuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModuleDetailOutcome(rsp);
        else
            return DescribeModuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeModuleDetailOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeModuleDetailAsync(const DescribeModuleDetailRequest& request, const DescribeModuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeModuleDetailOutcomeCallable EcmClient::DescribeModuleDetailCallable(const DescribeModuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeModuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribeNodeOutcome EcmClient::DescribeNode(const DescribeNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeResponse rsp = DescribeNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeOutcome(rsp);
        else
            return DescribeNodeOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeOutcome(outcome.GetError());
    }
}

void EcmClient::DescribeNodeAsync(const DescribeNodeRequest& request, const DescribeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribeNodeOutcomeCallable EcmClient::DescribeNodeCallable(const DescribeNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodeOutcome()>>(
        [this, request]()
        {
            return this->DescribeNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribePeakBaseOverviewOutcome EcmClient::DescribePeakBaseOverview(const DescribePeakBaseOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePeakBaseOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePeakBaseOverviewResponse rsp = DescribePeakBaseOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePeakBaseOverviewOutcome(rsp);
        else
            return DescribePeakBaseOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribePeakBaseOverviewOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePeakBaseOverviewAsync(const DescribePeakBaseOverviewRequest& request, const DescribePeakBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePeakBaseOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribePeakBaseOverviewOutcomeCallable EcmClient::DescribePeakBaseOverviewCallable(const DescribePeakBaseOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePeakBaseOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribePeakBaseOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::DescribePeakNetworkOverviewOutcome EcmClient::DescribePeakNetworkOverview(const DescribePeakNetworkOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePeakNetworkOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePeakNetworkOverviewResponse rsp = DescribePeakNetworkOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePeakNetworkOverviewOutcome(rsp);
        else
            return DescribePeakNetworkOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribePeakNetworkOverviewOutcome(outcome.GetError());
    }
}

void EcmClient::DescribePeakNetworkOverviewAsync(const DescribePeakNetworkOverviewRequest& request, const DescribePeakNetworkOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePeakNetworkOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::DescribePeakNetworkOverviewOutcomeCallable EcmClient::DescribePeakNetworkOverviewCallable(const DescribePeakNetworkOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePeakNetworkOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribePeakNetworkOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ImportImageOutcome EcmClient::ImportImage(const ImportImageRequest &request)
{
    auto outcome = MakeRequest(request, "ImportImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportImageResponse rsp = ImportImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportImageOutcome(rsp);
        else
            return ImportImageOutcome(o.GetError());
    }
    else
    {
        return ImportImageOutcome(outcome.GetError());
    }
}

void EcmClient::ImportImageAsync(const ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ImportImageOutcomeCallable EcmClient::ImportImageCallable(const ImportImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportImageOutcome()>>(
        [this, request]()
        {
            return this->ImportImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyInstancesAttributeOutcome EcmClient::ModifyInstancesAttribute(const ModifyInstancesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesAttributeResponse rsp = ModifyInstancesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesAttributeOutcome(rsp);
        else
            return ModifyInstancesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesAttributeOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyInstancesAttributeAsync(const ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyInstancesAttributeOutcomeCallable EcmClient::ModifyInstancesAttributeCallable(const ModifyInstancesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleImageOutcome EcmClient::ModifyModuleImage(const ModifyModuleImageRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleImageResponse rsp = ModifyModuleImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleImageOutcome(rsp);
        else
            return ModifyModuleImageOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleImageOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleImageAsync(const ModifyModuleImageRequest& request, const ModifyModuleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleImageOutcomeCallable EcmClient::ModifyModuleImageCallable(const ModifyModuleImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleImageOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleNameOutcome EcmClient::ModifyModuleName(const ModifyModuleNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleNameResponse rsp = ModifyModuleNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleNameOutcome(rsp);
        else
            return ModifyModuleNameOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleNameOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleNameAsync(const ModifyModuleNameRequest& request, const ModifyModuleNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleNameOutcomeCallable EcmClient::ModifyModuleNameCallable(const ModifyModuleNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ModifyModuleNetworkOutcome EcmClient::ModifyModuleNetwork(const ModifyModuleNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModuleNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModuleNetworkResponse rsp = ModifyModuleNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModuleNetworkOutcome(rsp);
        else
            return ModifyModuleNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyModuleNetworkOutcome(outcome.GetError());
    }
}

void EcmClient::ModifyModuleNetworkAsync(const ModifyModuleNetworkRequest& request, const ModifyModuleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModuleNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ModifyModuleNetworkOutcomeCallable EcmClient::ModifyModuleNetworkCallable(const ModifyModuleNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModuleNetworkOutcome()>>(
        [this, request]()
        {
            return this->ModifyModuleNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::RebootInstancesOutcome EcmClient::RebootInstances(const RebootInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootInstancesResponse rsp = RebootInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootInstancesOutcome(rsp);
        else
            return RebootInstancesOutcome(o.GetError());
    }
    else
    {
        return RebootInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebootInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::RebootInstancesOutcomeCallable EcmClient::RebootInstancesCallable(const RebootInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebootInstancesOutcome()>>(
        [this, request]()
        {
            return this->RebootInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ResetInstancesOutcome EcmClient::ResetInstances(const ResetInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesResponse rsp = ResetInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesOutcome(rsp);
        else
            return ResetInstancesOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::ResetInstancesAsync(const ResetInstancesRequest& request, const ResetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ResetInstancesOutcomeCallable EcmClient::ResetInstancesCallable(const ResetInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesOutcome()>>(
        [this, request]()
        {
            return this->ResetInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::ResetInstancesMaxBandwidthOutcome EcmClient::ResetInstancesMaxBandwidth(const ResetInstancesMaxBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesMaxBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesMaxBandwidthResponse rsp = ResetInstancesMaxBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesMaxBandwidthOutcome(rsp);
        else
            return ResetInstancesMaxBandwidthOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesMaxBandwidthOutcome(outcome.GetError());
    }
}

void EcmClient::ResetInstancesMaxBandwidthAsync(const ResetInstancesMaxBandwidthRequest& request, const ResetInstancesMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstancesMaxBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::ResetInstancesMaxBandwidthOutcomeCallable EcmClient::ResetInstancesMaxBandwidthCallable(const ResetInstancesMaxBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesMaxBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ResetInstancesMaxBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EcmClient::TerminateInstancesOutcome EcmClient::TerminateInstances(const TerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstancesResponse rsp = TerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstancesOutcome(rsp);
        else
            return TerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateInstancesOutcome(outcome.GetError());
    }
}

void EcmClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EcmClient::TerminateInstancesOutcomeCallable EcmClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateInstancesOutcome()>>(
        [this, request]()
        {
            return this->TerminateInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

