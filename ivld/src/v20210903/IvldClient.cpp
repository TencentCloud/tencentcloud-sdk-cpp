/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ivld/v20210903/IvldClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ivld::V20210903;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-09-03";
    const string ENDPOINT = "ivld.tencentcloudapi.com";
}

IvldClient::IvldClient(const Credential &credential, const string &region) :
    IvldClient(credential, region, ClientProfile())
{
}

IvldClient::IvldClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IvldClient::AddCustomPersonImageOutcome IvldClient::AddCustomPersonImage(const AddCustomPersonImageRequest &request)
{
    auto outcome = MakeRequest(request, "AddCustomPersonImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCustomPersonImageResponse rsp = AddCustomPersonImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCustomPersonImageOutcome(rsp);
        else
            return AddCustomPersonImageOutcome(o.GetError());
    }
    else
    {
        return AddCustomPersonImageOutcome(outcome.GetError());
    }
}

void IvldClient::AddCustomPersonImageAsync(const AddCustomPersonImageRequest& request, const AddCustomPersonImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCustomPersonImageRequest&;
    using Resp = AddCustomPersonImageResponse;

    DoRequestAsync<Req, Resp>(
        "AddCustomPersonImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::AddCustomPersonImageOutcomeCallable IvldClient::AddCustomPersonImageCallable(const AddCustomPersonImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCustomPersonImageOutcome>>();
    AddCustomPersonImageAsync(
    request,
    [prom](
        const IvldClient*,
        const AddCustomPersonImageRequest&,
        AddCustomPersonImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::CreateCustomCategoryOutcome IvldClient::CreateCustomCategory(const CreateCustomCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomCategoryResponse rsp = CreateCustomCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomCategoryOutcome(rsp);
        else
            return CreateCustomCategoryOutcome(o.GetError());
    }
    else
    {
        return CreateCustomCategoryOutcome(outcome.GetError());
    }
}

void IvldClient::CreateCustomCategoryAsync(const CreateCustomCategoryRequest& request, const CreateCustomCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomCategoryRequest&;
    using Resp = CreateCustomCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::CreateCustomCategoryOutcomeCallable IvldClient::CreateCustomCategoryCallable(const CreateCustomCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomCategoryOutcome>>();
    CreateCustomCategoryAsync(
    request,
    [prom](
        const IvldClient*,
        const CreateCustomCategoryRequest&,
        CreateCustomCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::CreateCustomGroupOutcome IvldClient::CreateCustomGroup(const CreateCustomGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomGroupResponse rsp = CreateCustomGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomGroupOutcome(rsp);
        else
            return CreateCustomGroupOutcome(o.GetError());
    }
    else
    {
        return CreateCustomGroupOutcome(outcome.GetError());
    }
}

void IvldClient::CreateCustomGroupAsync(const CreateCustomGroupRequest& request, const CreateCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomGroupRequest&;
    using Resp = CreateCustomGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::CreateCustomGroupOutcomeCallable IvldClient::CreateCustomGroupCallable(const CreateCustomGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomGroupOutcome>>();
    CreateCustomGroupAsync(
    request,
    [prom](
        const IvldClient*,
        const CreateCustomGroupRequest&,
        CreateCustomGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::CreateCustomPersonOutcome IvldClient::CreateCustomPerson(const CreateCustomPersonRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomPersonResponse rsp = CreateCustomPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomPersonOutcome(rsp);
        else
            return CreateCustomPersonOutcome(o.GetError());
    }
    else
    {
        return CreateCustomPersonOutcome(outcome.GetError());
    }
}

void IvldClient::CreateCustomPersonAsync(const CreateCustomPersonRequest& request, const CreateCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomPersonRequest&;
    using Resp = CreateCustomPersonResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomPerson", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::CreateCustomPersonOutcomeCallable IvldClient::CreateCustomPersonCallable(const CreateCustomPersonRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomPersonOutcome>>();
    CreateCustomPersonAsync(
    request,
    [prom](
        const IvldClient*,
        const CreateCustomPersonRequest&,
        CreateCustomPersonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::CreateDefaultCategoriesOutcome IvldClient::CreateDefaultCategories(const CreateDefaultCategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDefaultCategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDefaultCategoriesResponse rsp = CreateDefaultCategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDefaultCategoriesOutcome(rsp);
        else
            return CreateDefaultCategoriesOutcome(o.GetError());
    }
    else
    {
        return CreateDefaultCategoriesOutcome(outcome.GetError());
    }
}

void IvldClient::CreateDefaultCategoriesAsync(const CreateDefaultCategoriesRequest& request, const CreateDefaultCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDefaultCategoriesRequest&;
    using Resp = CreateDefaultCategoriesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDefaultCategories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::CreateDefaultCategoriesOutcomeCallable IvldClient::CreateDefaultCategoriesCallable(const CreateDefaultCategoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDefaultCategoriesOutcome>>();
    CreateDefaultCategoriesAsync(
    request,
    [prom](
        const IvldClient*,
        const CreateDefaultCategoriesRequest&,
        CreateDefaultCategoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::CreateTaskOutcome IvldClient::CreateTask(const CreateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskResponse rsp = CreateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutcome(rsp);
        else
            return CreateTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutcome(outcome.GetError());
    }
}

void IvldClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskRequest&;
    using Resp = CreateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::CreateTaskOutcomeCallable IvldClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskOutcome>>();
    CreateTaskAsync(
    request,
    [prom](
        const IvldClient*,
        const CreateTaskRequest&,
        CreateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::CreateVideoSummaryTaskOutcome IvldClient::CreateVideoSummaryTask(const CreateVideoSummaryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoSummaryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoSummaryTaskResponse rsp = CreateVideoSummaryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoSummaryTaskOutcome(rsp);
        else
            return CreateVideoSummaryTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoSummaryTaskOutcome(outcome.GetError());
    }
}

void IvldClient::CreateVideoSummaryTaskAsync(const CreateVideoSummaryTaskRequest& request, const CreateVideoSummaryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVideoSummaryTaskRequest&;
    using Resp = CreateVideoSummaryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVideoSummaryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::CreateVideoSummaryTaskOutcomeCallable IvldClient::CreateVideoSummaryTaskCallable(const CreateVideoSummaryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVideoSummaryTaskOutcome>>();
    CreateVideoSummaryTaskAsync(
    request,
    [prom](
        const IvldClient*,
        const CreateVideoSummaryTaskRequest&,
        CreateVideoSummaryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DeleteCustomCategoryOutcome IvldClient::DeleteCustomCategory(const DeleteCustomCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomCategoryResponse rsp = DeleteCustomCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomCategoryOutcome(rsp);
        else
            return DeleteCustomCategoryOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomCategoryOutcome(outcome.GetError());
    }
}

void IvldClient::DeleteCustomCategoryAsync(const DeleteCustomCategoryRequest& request, const DeleteCustomCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomCategoryRequest&;
    using Resp = DeleteCustomCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DeleteCustomCategoryOutcomeCallable IvldClient::DeleteCustomCategoryCallable(const DeleteCustomCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomCategoryOutcome>>();
    DeleteCustomCategoryAsync(
    request,
    [prom](
        const IvldClient*,
        const DeleteCustomCategoryRequest&,
        DeleteCustomCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DeleteCustomPersonOutcome IvldClient::DeleteCustomPerson(const DeleteCustomPersonRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomPersonResponse rsp = DeleteCustomPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomPersonOutcome(rsp);
        else
            return DeleteCustomPersonOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomPersonOutcome(outcome.GetError());
    }
}

void IvldClient::DeleteCustomPersonAsync(const DeleteCustomPersonRequest& request, const DeleteCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomPersonRequest&;
    using Resp = DeleteCustomPersonResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomPerson", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DeleteCustomPersonOutcomeCallable IvldClient::DeleteCustomPersonCallable(const DeleteCustomPersonRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomPersonOutcome>>();
    DeleteCustomPersonAsync(
    request,
    [prom](
        const IvldClient*,
        const DeleteCustomPersonRequest&,
        DeleteCustomPersonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DeleteCustomPersonImageOutcome IvldClient::DeleteCustomPersonImage(const DeleteCustomPersonImageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomPersonImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomPersonImageResponse rsp = DeleteCustomPersonImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomPersonImageOutcome(rsp);
        else
            return DeleteCustomPersonImageOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomPersonImageOutcome(outcome.GetError());
    }
}

void IvldClient::DeleteCustomPersonImageAsync(const DeleteCustomPersonImageRequest& request, const DeleteCustomPersonImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomPersonImageRequest&;
    using Resp = DeleteCustomPersonImageResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomPersonImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DeleteCustomPersonImageOutcomeCallable IvldClient::DeleteCustomPersonImageCallable(const DeleteCustomPersonImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomPersonImageOutcome>>();
    DeleteCustomPersonImageAsync(
    request,
    [prom](
        const IvldClient*,
        const DeleteCustomPersonImageRequest&,
        DeleteCustomPersonImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DeleteMediaOutcome IvldClient::DeleteMedia(const DeleteMediaRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMediaResponse rsp = DeleteMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMediaOutcome(rsp);
        else
            return DeleteMediaOutcome(o.GetError());
    }
    else
    {
        return DeleteMediaOutcome(outcome.GetError());
    }
}

void IvldClient::DeleteMediaAsync(const DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMediaRequest&;
    using Resp = DeleteMediaResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DeleteMediaOutcomeCallable IvldClient::DeleteMediaCallable(const DeleteMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMediaOutcome>>();
    DeleteMediaAsync(
    request,
    [prom](
        const IvldClient*,
        const DeleteMediaRequest&,
        DeleteMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DeleteTaskOutcome IvldClient::DeleteTask(const DeleteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskResponse rsp = DeleteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskOutcome(rsp);
        else
            return DeleteTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskOutcome(outcome.GetError());
    }
}

void IvldClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTaskRequest&;
    using Resp = DeleteTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DeleteTaskOutcomeCallable IvldClient::DeleteTaskCallable(const DeleteTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTaskOutcome>>();
    DeleteTaskAsync(
    request,
    [prom](
        const IvldClient*,
        const DeleteTaskRequest&,
        DeleteTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeCustomCategoriesOutcome IvldClient::DescribeCustomCategories(const DescribeCustomCategoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomCategories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomCategoriesResponse rsp = DescribeCustomCategoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomCategoriesOutcome(rsp);
        else
            return DescribeCustomCategoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomCategoriesOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeCustomCategoriesAsync(const DescribeCustomCategoriesRequest& request, const DescribeCustomCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomCategoriesRequest&;
    using Resp = DescribeCustomCategoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomCategories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeCustomCategoriesOutcomeCallable IvldClient::DescribeCustomCategoriesCallable(const DescribeCustomCategoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomCategoriesOutcome>>();
    DescribeCustomCategoriesAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeCustomCategoriesRequest&,
        DescribeCustomCategoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeCustomGroupOutcome IvldClient::DescribeCustomGroup(const DescribeCustomGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomGroupResponse rsp = DescribeCustomGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomGroupOutcome(rsp);
        else
            return DescribeCustomGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomGroupOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeCustomGroupAsync(const DescribeCustomGroupRequest& request, const DescribeCustomGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomGroupRequest&;
    using Resp = DescribeCustomGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeCustomGroupOutcomeCallable IvldClient::DescribeCustomGroupCallable(const DescribeCustomGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomGroupOutcome>>();
    DescribeCustomGroupAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeCustomGroupRequest&,
        DescribeCustomGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeCustomPersonDetailOutcome IvldClient::DescribeCustomPersonDetail(const DescribeCustomPersonDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomPersonDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomPersonDetailResponse rsp = DescribeCustomPersonDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomPersonDetailOutcome(rsp);
        else
            return DescribeCustomPersonDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomPersonDetailOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeCustomPersonDetailAsync(const DescribeCustomPersonDetailRequest& request, const DescribeCustomPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomPersonDetailRequest&;
    using Resp = DescribeCustomPersonDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomPersonDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeCustomPersonDetailOutcomeCallable IvldClient::DescribeCustomPersonDetailCallable(const DescribeCustomPersonDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomPersonDetailOutcome>>();
    DescribeCustomPersonDetailAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeCustomPersonDetailRequest&,
        DescribeCustomPersonDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeCustomPersonsOutcome IvldClient::DescribeCustomPersons(const DescribeCustomPersonsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomPersons");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomPersonsResponse rsp = DescribeCustomPersonsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomPersonsOutcome(rsp);
        else
            return DescribeCustomPersonsOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomPersonsOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeCustomPersonsAsync(const DescribeCustomPersonsRequest& request, const DescribeCustomPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomPersonsRequest&;
    using Resp = DescribeCustomPersonsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomPersons", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeCustomPersonsOutcomeCallable IvldClient::DescribeCustomPersonsCallable(const DescribeCustomPersonsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomPersonsOutcome>>();
    DescribeCustomPersonsAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeCustomPersonsRequest&,
        DescribeCustomPersonsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeMediaOutcome IvldClient::DescribeMedia(const DescribeMediaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaResponse rsp = DescribeMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaOutcome(rsp);
        else
            return DescribeMediaOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeMediaAsync(const DescribeMediaRequest& request, const DescribeMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMediaRequest&;
    using Resp = DescribeMediaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeMediaOutcomeCallable IvldClient::DescribeMediaCallable(const DescribeMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMediaOutcome>>();
    DescribeMediaAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeMediaRequest&,
        DescribeMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeMediasOutcome IvldClient::DescribeMedias(const DescribeMediasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMedias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediasResponse rsp = DescribeMediasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediasOutcome(rsp);
        else
            return DescribeMediasOutcome(o.GetError());
    }
    else
    {
        return DescribeMediasOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeMediasAsync(const DescribeMediasRequest& request, const DescribeMediasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMediasRequest&;
    using Resp = DescribeMediasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMedias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeMediasOutcomeCallable IvldClient::DescribeMediasCallable(const DescribeMediasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMediasOutcome>>();
    DescribeMediasAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeMediasRequest&,
        DescribeMediasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeTaskOutcome IvldClient::DescribeTask(const DescribeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResponse rsp = DescribeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskOutcome(rsp);
        else
            return DescribeTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskRequest&;
    using Resp = DescribeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeTaskOutcomeCallable IvldClient::DescribeTaskCallable(const DescribeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskOutcome>>();
    DescribeTaskAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeTaskRequest&,
        DescribeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeTaskDetailOutcome IvldClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskDetailRequest&;
    using Resp = DescribeTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeTaskDetailOutcomeCallable IvldClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskDetailOutcome>>();
    DescribeTaskDetailAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeTaskDetailRequest&,
        DescribeTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeTasksOutcome IvldClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTasksRequest&;
    using Resp = DescribeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeTasksOutcomeCallable IvldClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeUsageAmountOutcome IvldClient::DescribeUsageAmount(const DescribeUsageAmountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsageAmount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageAmountResponse rsp = DescribeUsageAmountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageAmountOutcome(rsp);
        else
            return DescribeUsageAmountOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageAmountOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeUsageAmountAsync(const DescribeUsageAmountRequest& request, const DescribeUsageAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsageAmountRequest&;
    using Resp = DescribeUsageAmountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsageAmount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeUsageAmountOutcomeCallable IvldClient::DescribeUsageAmountCallable(const DescribeUsageAmountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsageAmountOutcome>>();
    DescribeUsageAmountAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeUsageAmountRequest&,
        DescribeUsageAmountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::DescribeVideoSummaryDetailOutcome IvldClient::DescribeVideoSummaryDetail(const DescribeVideoSummaryDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoSummaryDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoSummaryDetailResponse rsp = DescribeVideoSummaryDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoSummaryDetailOutcome(rsp);
        else
            return DescribeVideoSummaryDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoSummaryDetailOutcome(outcome.GetError());
    }
}

void IvldClient::DescribeVideoSummaryDetailAsync(const DescribeVideoSummaryDetailRequest& request, const DescribeVideoSummaryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoSummaryDetailRequest&;
    using Resp = DescribeVideoSummaryDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoSummaryDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::DescribeVideoSummaryDetailOutcomeCallable IvldClient::DescribeVideoSummaryDetailCallable(const DescribeVideoSummaryDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoSummaryDetailOutcome>>();
    DescribeVideoSummaryDetailAsync(
    request,
    [prom](
        const IvldClient*,
        const DescribeVideoSummaryDetailRequest&,
        DescribeVideoSummaryDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::ImportMediaOutcome IvldClient::ImportMedia(const ImportMediaRequest &request)
{
    auto outcome = MakeRequest(request, "ImportMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportMediaResponse rsp = ImportMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportMediaOutcome(rsp);
        else
            return ImportMediaOutcome(o.GetError());
    }
    else
    {
        return ImportMediaOutcome(outcome.GetError());
    }
}

void IvldClient::ImportMediaAsync(const ImportMediaRequest& request, const ImportMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportMediaRequest&;
    using Resp = ImportMediaResponse;

    DoRequestAsync<Req, Resp>(
        "ImportMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::ImportMediaOutcomeCallable IvldClient::ImportMediaCallable(const ImportMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportMediaOutcome>>();
    ImportMediaAsync(
    request,
    [prom](
        const IvldClient*,
        const ImportMediaRequest&,
        ImportMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::ModifyCallbackOutcome IvldClient::ModifyCallback(const ModifyCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCallbackResponse rsp = ModifyCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCallbackOutcome(rsp);
        else
            return ModifyCallbackOutcome(o.GetError());
    }
    else
    {
        return ModifyCallbackOutcome(outcome.GetError());
    }
}

void IvldClient::ModifyCallbackAsync(const ModifyCallbackRequest& request, const ModifyCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCallbackRequest&;
    using Resp = ModifyCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::ModifyCallbackOutcomeCallable IvldClient::ModifyCallbackCallable(const ModifyCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCallbackOutcome>>();
    ModifyCallbackAsync(
    request,
    [prom](
        const IvldClient*,
        const ModifyCallbackRequest&,
        ModifyCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::QueryCallbackOutcome IvldClient::QueryCallback(const QueryCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCallbackResponse rsp = QueryCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCallbackOutcome(rsp);
        else
            return QueryCallbackOutcome(o.GetError());
    }
    else
    {
        return QueryCallbackOutcome(outcome.GetError());
    }
}

void IvldClient::QueryCallbackAsync(const QueryCallbackRequest& request, const QueryCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCallbackRequest&;
    using Resp = QueryCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::QueryCallbackOutcomeCallable IvldClient::QueryCallbackCallable(const QueryCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCallbackOutcome>>();
    QueryCallbackAsync(
    request,
    [prom](
        const IvldClient*,
        const QueryCallbackRequest&,
        QueryCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::UpdateCustomCategoryOutcome IvldClient::UpdateCustomCategory(const UpdateCustomCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCustomCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCustomCategoryResponse rsp = UpdateCustomCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCustomCategoryOutcome(rsp);
        else
            return UpdateCustomCategoryOutcome(o.GetError());
    }
    else
    {
        return UpdateCustomCategoryOutcome(outcome.GetError());
    }
}

void IvldClient::UpdateCustomCategoryAsync(const UpdateCustomCategoryRequest& request, const UpdateCustomCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCustomCategoryRequest&;
    using Resp = UpdateCustomCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCustomCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::UpdateCustomCategoryOutcomeCallable IvldClient::UpdateCustomCategoryCallable(const UpdateCustomCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCustomCategoryOutcome>>();
    UpdateCustomCategoryAsync(
    request,
    [prom](
        const IvldClient*,
        const UpdateCustomCategoryRequest&,
        UpdateCustomCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IvldClient::UpdateCustomPersonOutcome IvldClient::UpdateCustomPerson(const UpdateCustomPersonRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCustomPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCustomPersonResponse rsp = UpdateCustomPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCustomPersonOutcome(rsp);
        else
            return UpdateCustomPersonOutcome(o.GetError());
    }
    else
    {
        return UpdateCustomPersonOutcome(outcome.GetError());
    }
}

void IvldClient::UpdateCustomPersonAsync(const UpdateCustomPersonRequest& request, const UpdateCustomPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCustomPersonRequest&;
    using Resp = UpdateCustomPersonResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCustomPerson", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IvldClient::UpdateCustomPersonOutcomeCallable IvldClient::UpdateCustomPersonCallable(const UpdateCustomPersonRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCustomPersonOutcome>>();
    UpdateCustomPersonAsync(
    request,
    [prom](
        const IvldClient*,
        const UpdateCustomPersonRequest&,
        UpdateCustomPersonOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

