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

#include <tencentcloud/cvd/v20201104/CvdClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cvd::V20201104;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-04";
    const string ENDPOINT = "cvd.tencentcloudapi.com";
}

CvdClient::CvdClient(const Credential &credential, const string &region) :
    CvdClient(credential, region, ClientProfile())
{
}

CvdClient::CvdClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CvdClient::AssociateSecurityGroupOutcome CvdClient::AssociateSecurityGroup(const AssociateSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateSecurityGroupResponse rsp = AssociateSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateSecurityGroupOutcome(rsp);
        else
            return AssociateSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return AssociateSecurityGroupOutcome(outcome.GetError());
    }
}

void CvdClient::AssociateSecurityGroupAsync(const AssociateSecurityGroupRequest& request, const AssociateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateSecurityGroupRequest&;
    using Resp = AssociateSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::AssociateSecurityGroupOutcomeCallable CvdClient::AssociateSecurityGroupCallable(const AssociateSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupOutcome>>();
    AssociateSecurityGroupAsync(
    request,
    [prom](
        const CvdClient*,
        const AssociateSecurityGroupRequest&,
        AssociateSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::BindInstancesOutcome CvdClient::BindInstances(const BindInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "BindInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindInstancesResponse rsp = BindInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindInstancesOutcome(rsp);
        else
            return BindInstancesOutcome(o.GetError());
    }
    else
    {
        return BindInstancesOutcome(outcome.GetError());
    }
}

void CvdClient::BindInstancesAsync(const BindInstancesRequest& request, const BindInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindInstancesRequest&;
    using Resp = BindInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "BindInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::BindInstancesOutcomeCallable CvdClient::BindInstancesCallable(const BindInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindInstancesOutcome>>();
    BindInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const BindInstancesRequest&,
        BindInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::CreateCommandTaskOutcome CvdClient::CreateCommandTask(const CreateCommandTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCommandTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCommandTaskResponse rsp = CreateCommandTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCommandTaskOutcome(rsp);
        else
            return CreateCommandTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCommandTaskOutcome(outcome.GetError());
    }
}

void CvdClient::CreateCommandTaskAsync(const CreateCommandTaskRequest& request, const CreateCommandTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCommandTaskRequest&;
    using Resp = CreateCommandTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCommandTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::CreateCommandTaskOutcomeCallable CvdClient::CreateCommandTaskCallable(const CreateCommandTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCommandTaskOutcome>>();
    CreateCommandTaskAsync(
    request,
    [prom](
        const CvdClient*,
        const CreateCommandTaskRequest&,
        CreateCommandTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::CreateDataDiskOutcome CvdClient::CreateDataDisk(const CreateDataDiskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataDiskResponse rsp = CreateDataDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataDiskOutcome(rsp);
        else
            return CreateDataDiskOutcome(o.GetError());
    }
    else
    {
        return CreateDataDiskOutcome(outcome.GetError());
    }
}

void CvdClient::CreateDataDiskAsync(const CreateDataDiskRequest& request, const CreateDataDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDataDiskRequest&;
    using Resp = CreateDataDiskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataDisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::CreateDataDiskOutcomeCallable CvdClient::CreateDataDiskCallable(const CreateDataDiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataDiskOutcome>>();
    CreateDataDiskAsync(
    request,
    [prom](
        const CvdClient*,
        const CreateDataDiskRequest&,
        CreateDataDiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::CreateDomainControlPolicyOutcome CvdClient::CreateDomainControlPolicy(const CreateDomainControlPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainControlPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainControlPolicyResponse rsp = CreateDomainControlPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainControlPolicyOutcome(rsp);
        else
            return CreateDomainControlPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateDomainControlPolicyOutcome(outcome.GetError());
    }
}

void CvdClient::CreateDomainControlPolicyAsync(const CreateDomainControlPolicyRequest& request, const CreateDomainControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainControlPolicyRequest&;
    using Resp = CreateDomainControlPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainControlPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::CreateDomainControlPolicyOutcomeCallable CvdClient::CreateDomainControlPolicyCallable(const CreateDomainControlPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainControlPolicyOutcome>>();
    CreateDomainControlPolicyAsync(
    request,
    [prom](
        const CvdClient*,
        const CreateDomainControlPolicyRequest&,
        CreateDomainControlPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::CreateImageOutcome CvdClient::CreateImage(const CreateImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageResponse rsp = CreateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageOutcome(rsp);
        else
            return CreateImageOutcome(o.GetError());
    }
    else
    {
        return CreateImageOutcome(outcome.GetError());
    }
}

void CvdClient::CreateImageAsync(const CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateImageRequest&;
    using Resp = CreateImageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::CreateImageOutcomeCallable CvdClient::CreateImageCallable(const CreateImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageOutcome>>();
    CreateImageAsync(
    request,
    [prom](
        const CvdClient*,
        const CreateImageRequest&,
        CreateImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::CreateInstancesOutcome CvdClient::CreateInstances(const CreateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstancesResponse rsp = CreateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstancesOutcome(rsp);
        else
            return CreateInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateInstancesOutcome(outcome.GetError());
    }
}

void CvdClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstancesRequest&;
    using Resp = CreateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::CreateInstancesOutcomeCallable CvdClient::CreateInstancesCallable(const CreateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstancesOutcome>>();
    CreateInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const CreateInstancesRequest&,
        CreateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::CreatePolicyOutcome CvdClient::CreatePolicy(const CreatePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePolicyResponse rsp = CreatePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePolicyOutcome(rsp);
        else
            return CreatePolicyOutcome(o.GetError());
    }
    else
    {
        return CreatePolicyOutcome(outcome.GetError());
    }
}

void CvdClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePolicyRequest&;
    using Resp = CreatePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::CreatePolicyOutcomeCallable CvdClient::CreatePolicyCallable(const CreatePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePolicyOutcome>>();
    CreatePolicyAsync(
    request,
    [prom](
        const CvdClient*,
        const CreatePolicyRequest&,
        CreatePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DeleteCommandTasksOutcome CvdClient::DeleteCommandTasks(const DeleteCommandTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCommandTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCommandTasksResponse rsp = DeleteCommandTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCommandTasksOutcome(rsp);
        else
            return DeleteCommandTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteCommandTasksOutcome(outcome.GetError());
    }
}

void CvdClient::DeleteCommandTasksAsync(const DeleteCommandTasksRequest& request, const DeleteCommandTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCommandTasksRequest&;
    using Resp = DeleteCommandTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCommandTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DeleteCommandTasksOutcomeCallable CvdClient::DeleteCommandTasksCallable(const DeleteCommandTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCommandTasksOutcome>>();
    DeleteCommandTasksAsync(
    request,
    [prom](
        const CvdClient*,
        const DeleteCommandTasksRequest&,
        DeleteCommandTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DeleteDomainControlPolicyOutcome CvdClient::DeleteDomainControlPolicy(const DeleteDomainControlPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainControlPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainControlPolicyResponse rsp = DeleteDomainControlPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainControlPolicyOutcome(rsp);
        else
            return DeleteDomainControlPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainControlPolicyOutcome(outcome.GetError());
    }
}

void CvdClient::DeleteDomainControlPolicyAsync(const DeleteDomainControlPolicyRequest& request, const DeleteDomainControlPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainControlPolicyRequest&;
    using Resp = DeleteDomainControlPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomainControlPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DeleteDomainControlPolicyOutcomeCallable CvdClient::DeleteDomainControlPolicyCallable(const DeleteDomainControlPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainControlPolicyOutcome>>();
    DeleteDomainControlPolicyAsync(
    request,
    [prom](
        const CvdClient*,
        const DeleteDomainControlPolicyRequest&,
        DeleteDomainControlPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DeleteImagesOutcome CvdClient::DeleteImages(const DeleteImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImagesResponse rsp = DeleteImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImagesOutcome(rsp);
        else
            return DeleteImagesOutcome(o.GetError());
    }
    else
    {
        return DeleteImagesOutcome(outcome.GetError());
    }
}

void CvdClient::DeleteImagesAsync(const DeleteImagesRequest& request, const DeleteImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteImagesRequest&;
    using Resp = DeleteImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DeleteImagesOutcomeCallable CvdClient::DeleteImagesCallable(const DeleteImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImagesOutcome>>();
    DeleteImagesAsync(
    request,
    [prom](
        const CvdClient*,
        const DeleteImagesRequest&,
        DeleteImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeCommandTasksOutcome CvdClient::DescribeCommandTasks(const DescribeCommandTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCommandTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCommandTasksResponse rsp = DescribeCommandTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCommandTasksOutcome(rsp);
        else
            return DescribeCommandTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeCommandTasksOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeCommandTasksAsync(const DescribeCommandTasksRequest& request, const DescribeCommandTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCommandTasksRequest&;
    using Resp = DescribeCommandTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCommandTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeCommandTasksOutcomeCallable CvdClient::DescribeCommandTasksCallable(const DescribeCommandTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCommandTasksOutcome>>();
    DescribeCommandTasksAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeCommandTasksRequest&,
        DescribeCommandTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeImagesOutcome CvdClient::DescribeImages(const DescribeImagesRequest &request)
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

void CvdClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImagesRequest&;
    using Resp = DescribeImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeImagesOutcomeCallable CvdClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImagesOutcome>>();
    DescribeImagesAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeImagesRequest&,
        DescribeImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInstanceFetchMsgOutcome CvdClient::DescribeInstanceFetchMsg(const DescribeInstanceFetchMsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceFetchMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceFetchMsgResponse rsp = DescribeInstanceFetchMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceFetchMsgOutcome(rsp);
        else
            return DescribeInstanceFetchMsgOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceFetchMsgOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeInstanceFetchMsgAsync(const DescribeInstanceFetchMsgRequest& request, const DescribeInstanceFetchMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceFetchMsgRequest&;
    using Resp = DescribeInstanceFetchMsgResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceFetchMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInstanceFetchMsgOutcomeCallable CvdClient::DescribeInstanceFetchMsgCallable(const DescribeInstanceFetchMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceFetchMsgOutcome>>();
    DescribeInstanceFetchMsgAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInstanceFetchMsgRequest&,
        DescribeInstanceFetchMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInstanceGraphDataOutcome CvdClient::DescribeInstanceGraphData(const DescribeInstanceGraphDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceGraphData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceGraphDataResponse rsp = DescribeInstanceGraphDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceGraphDataOutcome(rsp);
        else
            return DescribeInstanceGraphDataOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceGraphDataOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeInstanceGraphDataAsync(const DescribeInstanceGraphDataRequest& request, const DescribeInstanceGraphDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceGraphDataRequest&;
    using Resp = DescribeInstanceGraphDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceGraphData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInstanceGraphDataOutcomeCallable CvdClient::DescribeInstanceGraphDataCallable(const DescribeInstanceGraphDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceGraphDataOutcome>>();
    DescribeInstanceGraphDataAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInstanceGraphDataRequest&,
        DescribeInstanceGraphDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInstanceLoginMsgOutcome CvdClient::DescribeInstanceLoginMsg(const DescribeInstanceLoginMsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLoginMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLoginMsgResponse rsp = DescribeInstanceLoginMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLoginMsgOutcome(rsp);
        else
            return DescribeInstanceLoginMsgOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLoginMsgOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeInstanceLoginMsgAsync(const DescribeInstanceLoginMsgRequest& request, const DescribeInstanceLoginMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceLoginMsgRequest&;
    using Resp = DescribeInstanceLoginMsgResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceLoginMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInstanceLoginMsgOutcomeCallable CvdClient::DescribeInstanceLoginMsgCallable(const DescribeInstanceLoginMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceLoginMsgOutcome>>();
    DescribeInstanceLoginMsgAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInstanceLoginMsgRequest&,
        DescribeInstanceLoginMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInstanceMonitorDataOutcome CvdClient::DescribeInstanceMonitorData(const DescribeInstanceMonitorDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorDataResponse rsp = DescribeInstanceMonitorDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorDataOutcome(rsp);
        else
            return DescribeInstanceMonitorDataOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorDataOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeInstanceMonitorDataAsync(const DescribeInstanceMonitorDataRequest& request, const DescribeInstanceMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMonitorDataRequest&;
    using Resp = DescribeInstanceMonitorDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMonitorData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInstanceMonitorDataOutcomeCallable CvdClient::DescribeInstanceMonitorDataCallable(const DescribeInstanceMonitorDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMonitorDataOutcome>>();
    DescribeInstanceMonitorDataAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInstanceMonitorDataRequest&,
        DescribeInstanceMonitorDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInstanceRegionDistributionOutcome CvdClient::DescribeInstanceRegionDistribution(const DescribeInstanceRegionDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceRegionDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceRegionDistributionResponse rsp = DescribeInstanceRegionDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceRegionDistributionOutcome(rsp);
        else
            return DescribeInstanceRegionDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceRegionDistributionOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeInstanceRegionDistributionAsync(const DescribeInstanceRegionDistributionRequest& request, const DescribeInstanceRegionDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceRegionDistributionRequest&;
    using Resp = DescribeInstanceRegionDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceRegionDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInstanceRegionDistributionOutcomeCallable CvdClient::DescribeInstanceRegionDistributionCallable(const DescribeInstanceRegionDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceRegionDistributionOutcome>>();
    DescribeInstanceRegionDistributionAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInstanceRegionDistributionRequest&,
        DescribeInstanceRegionDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInstancesOutcome CvdClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void CvdClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInstancesOutcomeCallable CvdClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInstancesBindStatusOutcome CvdClient::DescribeInstancesBindStatus(const DescribeInstancesBindStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesBindStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesBindStatusResponse rsp = DescribeInstancesBindStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesBindStatusOutcome(rsp);
        else
            return DescribeInstancesBindStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesBindStatusOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeInstancesBindStatusAsync(const DescribeInstancesBindStatusRequest& request, const DescribeInstancesBindStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesBindStatusRequest&;
    using Resp = DescribeInstancesBindStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesBindStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInstancesBindStatusOutcomeCallable CvdClient::DescribeInstancesBindStatusCallable(const DescribeInstancesBindStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesBindStatusOutcome>>();
    DescribeInstancesBindStatusAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInstancesBindStatusRequest&,
        DescribeInstancesBindStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInstancesStatusOutcome CvdClient::DescribeInstancesStatus(const DescribeInstancesStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesStatusResponse rsp = DescribeInstancesStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesStatusOutcome(rsp);
        else
            return DescribeInstancesStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesStatusOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeInstancesStatusAsync(const DescribeInstancesStatusRequest& request, const DescribeInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesStatusRequest&;
    using Resp = DescribeInstancesStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInstancesStatusOutcomeCallable CvdClient::DescribeInstancesStatusCallable(const DescribeInstancesStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesStatusOutcome>>();
    DescribeInstancesStatusAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInstancesStatusRequest&,
        DescribeInstancesStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInvocationDetailOutcome CvdClient::DescribeInvocationDetail(const DescribeInvocationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvocationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvocationDetailResponse rsp = DescribeInvocationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvocationDetailOutcome(rsp);
        else
            return DescribeInvocationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInvocationDetailOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeInvocationDetailAsync(const DescribeInvocationDetailRequest& request, const DescribeInvocationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInvocationDetailRequest&;
    using Resp = DescribeInvocationDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvocationDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInvocationDetailOutcomeCallable CvdClient::DescribeInvocationDetailCallable(const DescribeInvocationDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvocationDetailOutcome>>();
    DescribeInvocationDetailAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInvocationDetailRequest&,
        DescribeInvocationDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeInvocationsOutcome CvdClient::DescribeInvocations(const DescribeInvocationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvocations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvocationsResponse rsp = DescribeInvocationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvocationsOutcome(rsp);
        else
            return DescribeInvocationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInvocationsOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeInvocationsAsync(const DescribeInvocationsRequest& request, const DescribeInvocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInvocationsRequest&;
    using Resp = DescribeInvocationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvocations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeInvocationsOutcomeCallable CvdClient::DescribeInvocationsCallable(const DescribeInvocationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvocationsOutcome>>();
    DescribeInvocationsAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeInvocationsRequest&,
        DescribeInvocationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribePolicyDetailOutcome CvdClient::DescribePolicyDetail(const DescribePolicyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyDetailResponse rsp = DescribePolicyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyDetailOutcome(rsp);
        else
            return DescribePolicyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyDetailOutcome(outcome.GetError());
    }
}

void CvdClient::DescribePolicyDetailAsync(const DescribePolicyDetailRequest& request, const DescribePolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePolicyDetailRequest&;
    using Resp = DescribePolicyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribePolicyDetailOutcomeCallable CvdClient::DescribePolicyDetailCallable(const DescribePolicyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyDetailOutcome>>();
    DescribePolicyDetailAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribePolicyDetailRequest&,
        DescribePolicyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeSecurityGroupsOutcome CvdClient::DescribeSecurityGroups(const DescribeSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupsResponse rsp = DescribeSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupsOutcome(rsp);
        else
            return DescribeSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupsOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeSecurityGroupsAsync(const DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupsRequest&;
    using Resp = DescribeSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeSecurityGroupsOutcomeCallable CvdClient::DescribeSecurityGroupsCallable(const DescribeSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupsOutcome>>();
    DescribeSecurityGroupsAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeSecurityGroupsRequest&,
        DescribeSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeSnapshotsOutcome CvdClient::DescribeSnapshots(const DescribeSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotsResponse rsp = DescribeSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotsOutcome(rsp);
        else
            return DescribeSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotsOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSnapshotsRequest&;
    using Resp = DescribeSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeSnapshotsOutcomeCallable CvdClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotsOutcome>>();
    DescribeSnapshotsAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeSnapshotsRequest&,
        DescribeSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeUsageOutcome CvdClient::DescribeUsage(const DescribeUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageResponse rsp = DescribeUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageOutcome(rsp);
        else
            return DescribeUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeUsageAsync(const DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsageRequest&;
    using Resp = DescribeUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeUsageOutcomeCallable CvdClient::DescribeUsageCallable(const DescribeUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsageOutcome>>();
    DescribeUsageAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeUsageRequest&,
        DescribeUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DescribeUsersOutcome CvdClient::DescribeUsers(const DescribeUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersResponse rsp = DescribeUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersOutcome(rsp);
        else
            return DescribeUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersOutcome(outcome.GetError());
    }
}

void CvdClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsersRequest&;
    using Resp = DescribeUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DescribeUsersOutcomeCallable CvdClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsersOutcome>>();
    DescribeUsersAsync(
    request,
    [prom](
        const CvdClient*,
        const DescribeUsersRequest&,
        DescribeUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::DisassociateSecurityGroupOutcome CvdClient::DisassociateSecurityGroup(const DisassociateSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateSecurityGroupResponse rsp = DisassociateSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateSecurityGroupOutcome(rsp);
        else
            return DisassociateSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DisassociateSecurityGroupOutcome(outcome.GetError());
    }
}

void CvdClient::DisassociateSecurityGroupAsync(const DisassociateSecurityGroupRequest& request, const DisassociateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateSecurityGroupRequest&;
    using Resp = DisassociateSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::DisassociateSecurityGroupOutcomeCallable CvdClient::DisassociateSecurityGroupCallable(const DisassociateSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupOutcome>>();
    DisassociateSecurityGroupAsync(
    request,
    [prom](
        const CvdClient*,
        const DisassociateSecurityGroupRequest&,
        DisassociateSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::ModifyDiskConfigurationOutcome CvdClient::ModifyDiskConfiguration(const ModifyDiskConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiskConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiskConfigurationResponse rsp = ModifyDiskConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiskConfigurationOutcome(rsp);
        else
            return ModifyDiskConfigurationOutcome(o.GetError());
    }
    else
    {
        return ModifyDiskConfigurationOutcome(outcome.GetError());
    }
}

void CvdClient::ModifyDiskConfigurationAsync(const ModifyDiskConfigurationRequest& request, const ModifyDiskConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDiskConfigurationRequest&;
    using Resp = ModifyDiskConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDiskConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::ModifyDiskConfigurationOutcomeCallable CvdClient::ModifyDiskConfigurationCallable(const ModifyDiskConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDiskConfigurationOutcome>>();
    ModifyDiskConfigurationAsync(
    request,
    [prom](
        const CvdClient*,
        const ModifyDiskConfigurationRequest&,
        ModifyDiskConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::ModifyImageAttrsOutcome CvdClient::ModifyImageAttrs(const ModifyImageAttrsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImageAttrs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImageAttrsResponse rsp = ModifyImageAttrsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImageAttrsOutcome(rsp);
        else
            return ModifyImageAttrsOutcome(o.GetError());
    }
    else
    {
        return ModifyImageAttrsOutcome(outcome.GetError());
    }
}

void CvdClient::ModifyImageAttrsAsync(const ModifyImageAttrsRequest& request, const ModifyImageAttrsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyImageAttrsRequest&;
    using Resp = ModifyImageAttrsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyImageAttrs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::ModifyImageAttrsOutcomeCallable CvdClient::ModifyImageAttrsCallable(const ModifyImageAttrsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyImageAttrsOutcome>>();
    ModifyImageAttrsAsync(
    request,
    [prom](
        const CvdClient*,
        const ModifyImageAttrsRequest&,
        ModifyImageAttrsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::ModifyInstanceBasicAttributeOutcome CvdClient::ModifyInstanceBasicAttribute(const ModifyInstanceBasicAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceBasicAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceBasicAttributeResponse rsp = ModifyInstanceBasicAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceBasicAttributeOutcome(rsp);
        else
            return ModifyInstanceBasicAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceBasicAttributeOutcome(outcome.GetError());
    }
}

void CvdClient::ModifyInstanceBasicAttributeAsync(const ModifyInstanceBasicAttributeRequest& request, const ModifyInstanceBasicAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceBasicAttributeRequest&;
    using Resp = ModifyInstanceBasicAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceBasicAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::ModifyInstanceBasicAttributeOutcomeCallable CvdClient::ModifyInstanceBasicAttributeCallable(const ModifyInstanceBasicAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceBasicAttributeOutcome>>();
    ModifyInstanceBasicAttributeAsync(
    request,
    [prom](
        const CvdClient*,
        const ModifyInstanceBasicAttributeRequest&,
        ModifyInstanceBasicAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::ModifyInstancesTypeOutcome CvdClient::ModifyInstancesType(const ModifyInstancesTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesTypeResponse rsp = ModifyInstancesTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesTypeOutcome(rsp);
        else
            return ModifyInstancesTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesTypeOutcome(outcome.GetError());
    }
}

void CvdClient::ModifyInstancesTypeAsync(const ModifyInstancesTypeRequest& request, const ModifyInstancesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstancesTypeRequest&;
    using Resp = ModifyInstancesTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::ModifyInstancesTypeOutcomeCallable CvdClient::ModifyInstancesTypeCallable(const ModifyInstancesTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesTypeOutcome>>();
    ModifyInstancesTypeAsync(
    request,
    [prom](
        const CvdClient*,
        const ModifyInstancesTypeRequest&,
        ModifyInstancesTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::ModifyInstancesVpcOutcome CvdClient::ModifyInstancesVpc(const ModifyInstancesVpcRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesVpcResponse rsp = ModifyInstancesVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesVpcOutcome(rsp);
        else
            return ModifyInstancesVpcOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesVpcOutcome(outcome.GetError());
    }
}

void CvdClient::ModifyInstancesVpcAsync(const ModifyInstancesVpcRequest& request, const ModifyInstancesVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstancesVpcRequest&;
    using Resp = ModifyInstancesVpcResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::ModifyInstancesVpcOutcomeCallable CvdClient::ModifyInstancesVpcCallable(const ModifyInstancesVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesVpcOutcome>>();
    ModifyInstancesVpcAsync(
    request,
    [prom](
        const CvdClient*,
        const ModifyInstancesVpcRequest&,
        ModifyInstancesVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::RebootInstancesOutcome CvdClient::RebootInstances(const RebootInstancesRequest &request)
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

void CvdClient::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RebootInstancesRequest&;
    using Resp = RebootInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RebootInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::RebootInstancesOutcomeCallable CvdClient::RebootInstancesCallable(const RebootInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebootInstancesOutcome>>();
    RebootInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const RebootInstancesRequest&,
        RebootInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::RemoveDataDisksOutcome CvdClient::RemoveDataDisks(const RemoveDataDisksRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveDataDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveDataDisksResponse rsp = RemoveDataDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveDataDisksOutcome(rsp);
        else
            return RemoveDataDisksOutcome(o.GetError());
    }
    else
    {
        return RemoveDataDisksOutcome(outcome.GetError());
    }
}

void CvdClient::RemoveDataDisksAsync(const RemoveDataDisksRequest& request, const RemoveDataDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveDataDisksRequest&;
    using Resp = RemoveDataDisksResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveDataDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::RemoveDataDisksOutcomeCallable CvdClient::RemoveDataDisksCallable(const RemoveDataDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveDataDisksOutcome>>();
    RemoveDataDisksAsync(
    request,
    [prom](
        const CvdClient*,
        const RemoveDataDisksRequest&,
        RemoveDataDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::RemovePolicyOutcome CvdClient::RemovePolicy(const RemovePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "RemovePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemovePolicyResponse rsp = RemovePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemovePolicyOutcome(rsp);
        else
            return RemovePolicyOutcome(o.GetError());
    }
    else
    {
        return RemovePolicyOutcome(outcome.GetError());
    }
}

void CvdClient::RemovePolicyAsync(const RemovePolicyRequest& request, const RemovePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemovePolicyRequest&;
    using Resp = RemovePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "RemovePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::RemovePolicyOutcomeCallable CvdClient::RemovePolicyCallable(const RemovePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemovePolicyOutcome>>();
    RemovePolicyAsync(
    request,
    [prom](
        const CvdClient*,
        const RemovePolicyRequest&,
        RemovePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::RenewInstancesOutcome CvdClient::RenewInstances(const RenewInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstancesResponse rsp = RenewInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstancesOutcome(rsp);
        else
            return RenewInstancesOutcome(o.GetError());
    }
    else
    {
        return RenewInstancesOutcome(outcome.GetError());
    }
}

void CvdClient::RenewInstancesAsync(const RenewInstancesRequest& request, const RenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewInstancesRequest&;
    using Resp = RenewInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RenewInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::RenewInstancesOutcomeCallable CvdClient::RenewInstancesCallable(const RenewInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewInstancesOutcome>>();
    RenewInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const RenewInstancesRequest&,
        RenewInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::ResetInstancesOutcome CvdClient::ResetInstances(const ResetInstancesRequest &request)
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

void CvdClient::ResetInstancesAsync(const ResetInstancesRequest& request, const ResetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetInstancesRequest&;
    using Resp = ResetInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::ResetInstancesOutcomeCallable CvdClient::ResetInstancesCallable(const ResetInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstancesOutcome>>();
    ResetInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const ResetInstancesRequest&,
        ResetInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::RunCommandOutcome CvdClient::RunCommand(const RunCommandRequest &request)
{
    auto outcome = MakeRequest(request, "RunCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunCommandResponse rsp = RunCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunCommandOutcome(rsp);
        else
            return RunCommandOutcome(o.GetError());
    }
    else
    {
        return RunCommandOutcome(outcome.GetError());
    }
}

void CvdClient::RunCommandAsync(const RunCommandRequest& request, const RunCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunCommandRequest&;
    using Resp = RunCommandResponse;

    DoRequestAsync<Req, Resp>(
        "RunCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::RunCommandOutcomeCallable CvdClient::RunCommandCallable(const RunCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunCommandOutcome>>();
    RunCommandAsync(
    request,
    [prom](
        const CvdClient*,
        const RunCommandRequest&,
        RunCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::StartInstancesOutcome CvdClient::StartInstances(const StartInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstancesResponse rsp = StartInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstancesOutcome(rsp);
        else
            return StartInstancesOutcome(o.GetError());
    }
    else
    {
        return StartInstancesOutcome(outcome.GetError());
    }
}

void CvdClient::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartInstancesRequest&;
    using Resp = StartInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StartInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::StartInstancesOutcomeCallable CvdClient::StartInstancesCallable(const StartInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartInstancesOutcome>>();
    StartInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const StartInstancesRequest&,
        StartInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::StopCommandTasksOutcome CvdClient::StopCommandTasks(const StopCommandTasksRequest &request)
{
    auto outcome = MakeRequest(request, "StopCommandTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCommandTasksResponse rsp = StopCommandTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCommandTasksOutcome(rsp);
        else
            return StopCommandTasksOutcome(o.GetError());
    }
    else
    {
        return StopCommandTasksOutcome(outcome.GetError());
    }
}

void CvdClient::StopCommandTasksAsync(const StopCommandTasksRequest& request, const StopCommandTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopCommandTasksRequest&;
    using Resp = StopCommandTasksResponse;

    DoRequestAsync<Req, Resp>(
        "StopCommandTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::StopCommandTasksOutcomeCallable CvdClient::StopCommandTasksCallable(const StopCommandTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopCommandTasksOutcome>>();
    StopCommandTasksAsync(
    request,
    [prom](
        const CvdClient*,
        const StopCommandTasksRequest&,
        StopCommandTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::StopInstancesOutcome CvdClient::StopInstances(const StopInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstancesResponse rsp = StopInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstancesOutcome(rsp);
        else
            return StopInstancesOutcome(o.GetError());
    }
    else
    {
        return StopInstancesOutcome(outcome.GetError());
    }
}

void CvdClient::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopInstancesRequest&;
    using Resp = StopInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StopInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::StopInstancesOutcomeCallable CvdClient::StopInstancesCallable(const StopInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInstancesOutcome>>();
    StopInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const StopInstancesRequest&,
        StopInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::StopInvocationOutcome CvdClient::StopInvocation(const StopInvocationRequest &request)
{
    auto outcome = MakeRequest(request, "StopInvocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInvocationResponse rsp = StopInvocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInvocationOutcome(rsp);
        else
            return StopInvocationOutcome(o.GetError());
    }
    else
    {
        return StopInvocationOutcome(outcome.GetError());
    }
}

void CvdClient::StopInvocationAsync(const StopInvocationRequest& request, const StopInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopInvocationRequest&;
    using Resp = StopInvocationResponse;

    DoRequestAsync<Req, Resp>(
        "StopInvocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::StopInvocationOutcomeCallable CvdClient::StopInvocationCallable(const StopInvocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInvocationOutcome>>();
    StopInvocationAsync(
    request,
    [prom](
        const CvdClient*,
        const StopInvocationRequest&,
        StopInvocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::StopSessionOutcome CvdClient::StopSession(const StopSessionRequest &request)
{
    auto outcome = MakeRequest(request, "StopSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSessionResponse rsp = StopSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSessionOutcome(rsp);
        else
            return StopSessionOutcome(o.GetError());
    }
    else
    {
        return StopSessionOutcome(outcome.GetError());
    }
}

void CvdClient::StopSessionAsync(const StopSessionRequest& request, const StopSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopSessionRequest&;
    using Resp = StopSessionResponse;

    DoRequestAsync<Req, Resp>(
        "StopSession", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::StopSessionOutcomeCallable CvdClient::StopSessionCallable(const StopSessionRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopSessionOutcome>>();
    StopSessionAsync(
    request,
    [prom](
        const CvdClient*,
        const StopSessionRequest&,
        StopSessionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::TerminateInstancesOutcome CvdClient::TerminateInstances(const TerminateInstancesRequest &request)
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

void CvdClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateInstancesRequest&;
    using Resp = TerminateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::TerminateInstancesOutcomeCallable CvdClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateInstancesOutcome>>();
    TerminateInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const TerminateInstancesRequest&,
        TerminateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::UnbindInstancesOutcome CvdClient::UnbindInstances(const UnbindInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindInstancesResponse rsp = UnbindInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindInstancesOutcome(rsp);
        else
            return UnbindInstancesOutcome(o.GetError());
    }
    else
    {
        return UnbindInstancesOutcome(outcome.GetError());
    }
}

void CvdClient::UnbindInstancesAsync(const UnbindInstancesRequest& request, const UnbindInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindInstancesRequest&;
    using Resp = UnbindInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::UnbindInstancesOutcomeCallable CvdClient::UnbindInstancesCallable(const UnbindInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindInstancesOutcome>>();
    UnbindInstancesAsync(
    request,
    [prom](
        const CvdClient*,
        const UnbindInstancesRequest&,
        UnbindInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CvdClient::UpdatePolicyOutcome CvdClient::UpdatePolicy(const UpdatePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePolicyResponse rsp = UpdatePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePolicyOutcome(rsp);
        else
            return UpdatePolicyOutcome(o.GetError());
    }
    else
    {
        return UpdatePolicyOutcome(outcome.GetError());
    }
}

void CvdClient::UpdatePolicyAsync(const UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePolicyRequest&;
    using Resp = UpdatePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvdClient::UpdatePolicyOutcomeCallable CvdClient::UpdatePolicyCallable(const UpdatePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePolicyOutcome>>();
    UpdatePolicyAsync(
    request,
    [prom](
        const CvdClient*,
        const UpdatePolicyRequest&,
        UpdatePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

