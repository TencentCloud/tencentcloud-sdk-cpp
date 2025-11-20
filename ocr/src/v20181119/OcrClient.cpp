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

#include <tencentcloud/ocr/v20181119/OcrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ocr::V20181119;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-11-19";
    const string ENDPOINT = "ocr.tencentcloudapi.com";
}

OcrClient::OcrClient(const Credential &credential, const string &region) :
    OcrClient(credential, region, ClientProfile())
{
}

OcrClient::OcrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OcrClient::AdvertiseOCROutcome OcrClient::AdvertiseOCR(const AdvertiseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "AdvertiseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AdvertiseOCRResponse rsp = AdvertiseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AdvertiseOCROutcome(rsp);
        else
            return AdvertiseOCROutcome(o.GetError());
    }
    else
    {
        return AdvertiseOCROutcome(outcome.GetError());
    }
}

void OcrClient::AdvertiseOCRAsync(const AdvertiseOCRRequest& request, const AdvertiseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AdvertiseOCRRequest&;
    using Resp = AdvertiseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "AdvertiseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::AdvertiseOCROutcomeCallable OcrClient::AdvertiseOCRCallable(const AdvertiseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<AdvertiseOCROutcome>>();
    AdvertiseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const AdvertiseOCRRequest&,
        AdvertiseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ArithmeticOCROutcome OcrClient::ArithmeticOCR(const ArithmeticOCRRequest &request)
{
    auto outcome = MakeRequest(request, "ArithmeticOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ArithmeticOCRResponse rsp = ArithmeticOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ArithmeticOCROutcome(rsp);
        else
            return ArithmeticOCROutcome(o.GetError());
    }
    else
    {
        return ArithmeticOCROutcome(outcome.GetError());
    }
}

void OcrClient::ArithmeticOCRAsync(const ArithmeticOCRRequest& request, const ArithmeticOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ArithmeticOCRRequest&;
    using Resp = ArithmeticOCRResponse;

    DoRequestAsync<Req, Resp>(
        "ArithmeticOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ArithmeticOCROutcomeCallable OcrClient::ArithmeticOCRCallable(const ArithmeticOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<ArithmeticOCROutcome>>();
    ArithmeticOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const ArithmeticOCRRequest&,
        ArithmeticOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::BankCardOCROutcome OcrClient::BankCardOCR(const BankCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BankCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankCardOCRResponse rsp = BankCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankCardOCROutcome(rsp);
        else
            return BankCardOCROutcome(o.GetError());
    }
    else
    {
        return BankCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::BankCardOCRAsync(const BankCardOCRRequest& request, const BankCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BankCardOCRRequest&;
    using Resp = BankCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "BankCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::BankCardOCROutcomeCallable OcrClient::BankCardOCRCallable(const BankCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<BankCardOCROutcome>>();
    BankCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const BankCardOCRRequest&,
        BankCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::BankSlipOCROutcome OcrClient::BankSlipOCR(const BankSlipOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BankSlipOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankSlipOCRResponse rsp = BankSlipOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankSlipOCROutcome(rsp);
        else
            return BankSlipOCROutcome(o.GetError());
    }
    else
    {
        return BankSlipOCROutcome(outcome.GetError());
    }
}

void OcrClient::BankSlipOCRAsync(const BankSlipOCRRequest& request, const BankSlipOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BankSlipOCRRequest&;
    using Resp = BankSlipOCRResponse;

    DoRequestAsync<Req, Resp>(
        "BankSlipOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::BankSlipOCROutcomeCallable OcrClient::BankSlipOCRCallable(const BankSlipOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<BankSlipOCROutcome>>();
    BankSlipOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const BankSlipOCRRequest&,
        BankSlipOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::BizLicenseOCROutcome OcrClient::BizLicenseOCR(const BizLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BizLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BizLicenseOCRResponse rsp = BizLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BizLicenseOCROutcome(rsp);
        else
            return BizLicenseOCROutcome(o.GetError());
    }
    else
    {
        return BizLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::BizLicenseOCRAsync(const BizLicenseOCRRequest& request, const BizLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BizLicenseOCRRequest&;
    using Resp = BizLicenseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "BizLicenseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::BizLicenseOCROutcomeCallable OcrClient::BizLicenseOCRCallable(const BizLicenseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<BizLicenseOCROutcome>>();
    BizLicenseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const BizLicenseOCRRequest&,
        BizLicenseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::BusInvoiceOCROutcome OcrClient::BusInvoiceOCR(const BusInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BusInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BusInvoiceOCRResponse rsp = BusInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BusInvoiceOCROutcome(rsp);
        else
            return BusInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return BusInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::BusInvoiceOCRAsync(const BusInvoiceOCRRequest& request, const BusInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BusInvoiceOCRRequest&;
    using Resp = BusInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "BusInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::BusInvoiceOCROutcomeCallable OcrClient::BusInvoiceOCRCallable(const BusInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<BusInvoiceOCROutcome>>();
    BusInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const BusInvoiceOCRRequest&,
        BusInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::BusinessCardOCROutcome OcrClient::BusinessCardOCR(const BusinessCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "BusinessCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BusinessCardOCRResponse rsp = BusinessCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BusinessCardOCROutcome(rsp);
        else
            return BusinessCardOCROutcome(o.GetError());
    }
    else
    {
        return BusinessCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::BusinessCardOCRAsync(const BusinessCardOCRRequest& request, const BusinessCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BusinessCardOCRRequest&;
    using Resp = BusinessCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "BusinessCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::BusinessCardOCROutcomeCallable OcrClient::BusinessCardOCRCallable(const BusinessCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<BusinessCardOCROutcome>>();
    BusinessCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const BusinessCardOCRRequest&,
        BusinessCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::CarInvoiceOCROutcome OcrClient::CarInvoiceOCR(const CarInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "CarInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CarInvoiceOCRResponse rsp = CarInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CarInvoiceOCROutcome(rsp);
        else
            return CarInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return CarInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::CarInvoiceOCRAsync(const CarInvoiceOCRRequest& request, const CarInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CarInvoiceOCRRequest&;
    using Resp = CarInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "CarInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::CarInvoiceOCROutcomeCallable OcrClient::CarInvoiceOCRCallable(const CarInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<CarInvoiceOCROutcome>>();
    CarInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const CarInvoiceOCRRequest&,
        CarInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ClassifyDetectOCROutcome OcrClient::ClassifyDetectOCR(const ClassifyDetectOCRRequest &request)
{
    auto outcome = MakeRequest(request, "ClassifyDetectOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClassifyDetectOCRResponse rsp = ClassifyDetectOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClassifyDetectOCROutcome(rsp);
        else
            return ClassifyDetectOCROutcome(o.GetError());
    }
    else
    {
        return ClassifyDetectOCROutcome(outcome.GetError());
    }
}

void OcrClient::ClassifyDetectOCRAsync(const ClassifyDetectOCRRequest& request, const ClassifyDetectOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClassifyDetectOCRRequest&;
    using Resp = ClassifyDetectOCRResponse;

    DoRequestAsync<Req, Resp>(
        "ClassifyDetectOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ClassifyDetectOCROutcomeCallable OcrClient::ClassifyDetectOCRCallable(const ClassifyDetectOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClassifyDetectOCROutcome>>();
    ClassifyDetectOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const ClassifyDetectOCRRequest&,
        ClassifyDetectOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ClassifyStoreNameOutcome OcrClient::ClassifyStoreName(const ClassifyStoreNameRequest &request)
{
    auto outcome = MakeRequest(request, "ClassifyStoreName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClassifyStoreNameResponse rsp = ClassifyStoreNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClassifyStoreNameOutcome(rsp);
        else
            return ClassifyStoreNameOutcome(o.GetError());
    }
    else
    {
        return ClassifyStoreNameOutcome(outcome.GetError());
    }
}

void OcrClient::ClassifyStoreNameAsync(const ClassifyStoreNameRequest& request, const ClassifyStoreNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClassifyStoreNameRequest&;
    using Resp = ClassifyStoreNameResponse;

    DoRequestAsync<Req, Resp>(
        "ClassifyStoreName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ClassifyStoreNameOutcomeCallable OcrClient::ClassifyStoreNameCallable(const ClassifyStoreNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClassifyStoreNameOutcome>>();
    ClassifyStoreNameAsync(
    request,
    [prom](
        const OcrClient*,
        const ClassifyStoreNameRequest&,
        ClassifyStoreNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::DescribeExtractDocAgentJobOutcome OcrClient::DescribeExtractDocAgentJob(const DescribeExtractDocAgentJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExtractDocAgentJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExtractDocAgentJobResponse rsp = DescribeExtractDocAgentJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExtractDocAgentJobOutcome(rsp);
        else
            return DescribeExtractDocAgentJobOutcome(o.GetError());
    }
    else
    {
        return DescribeExtractDocAgentJobOutcome(outcome.GetError());
    }
}

void OcrClient::DescribeExtractDocAgentJobAsync(const DescribeExtractDocAgentJobRequest& request, const DescribeExtractDocAgentJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExtractDocAgentJobRequest&;
    using Resp = DescribeExtractDocAgentJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExtractDocAgentJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::DescribeExtractDocAgentJobOutcomeCallable OcrClient::DescribeExtractDocAgentJobCallable(const DescribeExtractDocAgentJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExtractDocAgentJobOutcome>>();
    DescribeExtractDocAgentJobAsync(
    request,
    [prom](
        const OcrClient*,
        const DescribeExtractDocAgentJobRequest&,
        DescribeExtractDocAgentJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::DriverLicenseOCROutcome OcrClient::DriverLicenseOCR(const DriverLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "DriverLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DriverLicenseOCRResponse rsp = DriverLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DriverLicenseOCROutcome(rsp);
        else
            return DriverLicenseOCROutcome(o.GetError());
    }
    else
    {
        return DriverLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::DriverLicenseOCRAsync(const DriverLicenseOCRRequest& request, const DriverLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DriverLicenseOCRRequest&;
    using Resp = DriverLicenseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "DriverLicenseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::DriverLicenseOCROutcomeCallable OcrClient::DriverLicenseOCRCallable(const DriverLicenseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<DriverLicenseOCROutcome>>();
    DriverLicenseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const DriverLicenseOCRRequest&,
        DriverLicenseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::DutyPaidProofOCROutcome OcrClient::DutyPaidProofOCR(const DutyPaidProofOCRRequest &request)
{
    auto outcome = MakeRequest(request, "DutyPaidProofOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DutyPaidProofOCRResponse rsp = DutyPaidProofOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DutyPaidProofOCROutcome(rsp);
        else
            return DutyPaidProofOCROutcome(o.GetError());
    }
    else
    {
        return DutyPaidProofOCROutcome(outcome.GetError());
    }
}

void OcrClient::DutyPaidProofOCRAsync(const DutyPaidProofOCRRequest& request, const DutyPaidProofOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DutyPaidProofOCRRequest&;
    using Resp = DutyPaidProofOCRResponse;

    DoRequestAsync<Req, Resp>(
        "DutyPaidProofOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::DutyPaidProofOCROutcomeCallable OcrClient::DutyPaidProofOCRCallable(const DutyPaidProofOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<DutyPaidProofOCROutcome>>();
    DutyPaidProofOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const DutyPaidProofOCRRequest&,
        DutyPaidProofOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::EduPaperOCROutcome OcrClient::EduPaperOCR(const EduPaperOCRRequest &request)
{
    auto outcome = MakeRequest(request, "EduPaperOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EduPaperOCRResponse rsp = EduPaperOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EduPaperOCROutcome(rsp);
        else
            return EduPaperOCROutcome(o.GetError());
    }
    else
    {
        return EduPaperOCROutcome(outcome.GetError());
    }
}

void OcrClient::EduPaperOCRAsync(const EduPaperOCRRequest& request, const EduPaperOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EduPaperOCRRequest&;
    using Resp = EduPaperOCRResponse;

    DoRequestAsync<Req, Resp>(
        "EduPaperOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::EduPaperOCROutcomeCallable OcrClient::EduPaperOCRCallable(const EduPaperOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<EduPaperOCROutcome>>();
    EduPaperOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const EduPaperOCRRequest&,
        EduPaperOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::EnglishOCROutcome OcrClient::EnglishOCR(const EnglishOCRRequest &request)
{
    auto outcome = MakeRequest(request, "EnglishOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnglishOCRResponse rsp = EnglishOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnglishOCROutcome(rsp);
        else
            return EnglishOCROutcome(o.GetError());
    }
    else
    {
        return EnglishOCROutcome(outcome.GetError());
    }
}

void OcrClient::EnglishOCRAsync(const EnglishOCRRequest& request, const EnglishOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnglishOCRRequest&;
    using Resp = EnglishOCRResponse;

    DoRequestAsync<Req, Resp>(
        "EnglishOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::EnglishOCROutcomeCallable OcrClient::EnglishOCRCallable(const EnglishOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnglishOCROutcome>>();
    EnglishOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const EnglishOCRRequest&,
        EnglishOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::EnterpriseLicenseOCROutcome OcrClient::EnterpriseLicenseOCR(const EnterpriseLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "EnterpriseLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnterpriseLicenseOCRResponse rsp = EnterpriseLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnterpriseLicenseOCROutcome(rsp);
        else
            return EnterpriseLicenseOCROutcome(o.GetError());
    }
    else
    {
        return EnterpriseLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::EnterpriseLicenseOCRAsync(const EnterpriseLicenseOCRRequest& request, const EnterpriseLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnterpriseLicenseOCRRequest&;
    using Resp = EnterpriseLicenseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "EnterpriseLicenseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::EnterpriseLicenseOCROutcomeCallable OcrClient::EnterpriseLicenseOCRCallable(const EnterpriseLicenseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnterpriseLicenseOCROutcome>>();
    EnterpriseLicenseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const EnterpriseLicenseOCRRequest&,
        EnterpriseLicenseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::EstateCertOCROutcome OcrClient::EstateCertOCR(const EstateCertOCRRequest &request)
{
    auto outcome = MakeRequest(request, "EstateCertOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EstateCertOCRResponse rsp = EstateCertOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EstateCertOCROutcome(rsp);
        else
            return EstateCertOCROutcome(o.GetError());
    }
    else
    {
        return EstateCertOCROutcome(outcome.GetError());
    }
}

void OcrClient::EstateCertOCRAsync(const EstateCertOCRRequest& request, const EstateCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EstateCertOCRRequest&;
    using Resp = EstateCertOCRResponse;

    DoRequestAsync<Req, Resp>(
        "EstateCertOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::EstateCertOCROutcomeCallable OcrClient::EstateCertOCRCallable(const EstateCertOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<EstateCertOCROutcome>>();
    EstateCertOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const EstateCertOCRRequest&,
        EstateCertOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ExtractDocBasicOutcome OcrClient::ExtractDocBasic(const ExtractDocBasicRequest &request)
{
    auto outcome = MakeRequest(request, "ExtractDocBasic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExtractDocBasicResponse rsp = ExtractDocBasicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExtractDocBasicOutcome(rsp);
        else
            return ExtractDocBasicOutcome(o.GetError());
    }
    else
    {
        return ExtractDocBasicOutcome(outcome.GetError());
    }
}

void OcrClient::ExtractDocBasicAsync(const ExtractDocBasicRequest& request, const ExtractDocBasicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExtractDocBasicRequest&;
    using Resp = ExtractDocBasicResponse;

    DoRequestAsync<Req, Resp>(
        "ExtractDocBasic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ExtractDocBasicOutcomeCallable OcrClient::ExtractDocBasicCallable(const ExtractDocBasicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExtractDocBasicOutcome>>();
    ExtractDocBasicAsync(
    request,
    [prom](
        const OcrClient*,
        const ExtractDocBasicRequest&,
        ExtractDocBasicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ExtractDocMultiOutcome OcrClient::ExtractDocMulti(const ExtractDocMultiRequest &request)
{
    auto outcome = MakeRequest(request, "ExtractDocMulti");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExtractDocMultiResponse rsp = ExtractDocMultiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExtractDocMultiOutcome(rsp);
        else
            return ExtractDocMultiOutcome(o.GetError());
    }
    else
    {
        return ExtractDocMultiOutcome(outcome.GetError());
    }
}

void OcrClient::ExtractDocMultiAsync(const ExtractDocMultiRequest& request, const ExtractDocMultiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExtractDocMultiRequest&;
    using Resp = ExtractDocMultiResponse;

    DoRequestAsync<Req, Resp>(
        "ExtractDocMulti", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ExtractDocMultiOutcomeCallable OcrClient::ExtractDocMultiCallable(const ExtractDocMultiRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExtractDocMultiOutcome>>();
    ExtractDocMultiAsync(
    request,
    [prom](
        const OcrClient*,
        const ExtractDocMultiRequest&,
        ExtractDocMultiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ExtractDocMultiProOutcome OcrClient::ExtractDocMultiPro(const ExtractDocMultiProRequest &request)
{
    auto outcome = MakeRequest(request, "ExtractDocMultiPro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExtractDocMultiProResponse rsp = ExtractDocMultiProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExtractDocMultiProOutcome(rsp);
        else
            return ExtractDocMultiProOutcome(o.GetError());
    }
    else
    {
        return ExtractDocMultiProOutcome(outcome.GetError());
    }
}

void OcrClient::ExtractDocMultiProAsync(const ExtractDocMultiProRequest& request, const ExtractDocMultiProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExtractDocMultiProRequest&;
    using Resp = ExtractDocMultiProResponse;

    DoRequestAsync<Req, Resp>(
        "ExtractDocMultiPro", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ExtractDocMultiProOutcomeCallable OcrClient::ExtractDocMultiProCallable(const ExtractDocMultiProRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExtractDocMultiProOutcome>>();
    ExtractDocMultiProAsync(
    request,
    [prom](
        const OcrClient*,
        const ExtractDocMultiProRequest&,
        ExtractDocMultiProOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::FinanBillOCROutcome OcrClient::FinanBillOCR(const FinanBillOCRRequest &request)
{
    auto outcome = MakeRequest(request, "FinanBillOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FinanBillOCRResponse rsp = FinanBillOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FinanBillOCROutcome(rsp);
        else
            return FinanBillOCROutcome(o.GetError());
    }
    else
    {
        return FinanBillOCROutcome(outcome.GetError());
    }
}

void OcrClient::FinanBillOCRAsync(const FinanBillOCRRequest& request, const FinanBillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FinanBillOCRRequest&;
    using Resp = FinanBillOCRResponse;

    DoRequestAsync<Req, Resp>(
        "FinanBillOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::FinanBillOCROutcomeCallable OcrClient::FinanBillOCRCallable(const FinanBillOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<FinanBillOCROutcome>>();
    FinanBillOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const FinanBillOCRRequest&,
        FinanBillOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::FinanBillSliceOCROutcome OcrClient::FinanBillSliceOCR(const FinanBillSliceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "FinanBillSliceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FinanBillSliceOCRResponse rsp = FinanBillSliceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FinanBillSliceOCROutcome(rsp);
        else
            return FinanBillSliceOCROutcome(o.GetError());
    }
    else
    {
        return FinanBillSliceOCROutcome(outcome.GetError());
    }
}

void OcrClient::FinanBillSliceOCRAsync(const FinanBillSliceOCRRequest& request, const FinanBillSliceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FinanBillSliceOCRRequest&;
    using Resp = FinanBillSliceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "FinanBillSliceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::FinanBillSliceOCROutcomeCallable OcrClient::FinanBillSliceOCRCallable(const FinanBillSliceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<FinanBillSliceOCROutcome>>();
    FinanBillSliceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const FinanBillSliceOCRRequest&,
        FinanBillSliceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::FlightInvoiceOCROutcome OcrClient::FlightInvoiceOCR(const FlightInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "FlightInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlightInvoiceOCRResponse rsp = FlightInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlightInvoiceOCROutcome(rsp);
        else
            return FlightInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return FlightInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::FlightInvoiceOCRAsync(const FlightInvoiceOCRRequest& request, const FlightInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FlightInvoiceOCRRequest&;
    using Resp = FlightInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "FlightInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::FlightInvoiceOCROutcomeCallable OcrClient::FlightInvoiceOCRCallable(const FlightInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<FlightInvoiceOCROutcome>>();
    FlightInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const FlightInvoiceOCRRequest&,
        FlightInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::FormulaOCROutcome OcrClient::FormulaOCR(const FormulaOCRRequest &request)
{
    auto outcome = MakeRequest(request, "FormulaOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FormulaOCRResponse rsp = FormulaOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FormulaOCROutcome(rsp);
        else
            return FormulaOCROutcome(o.GetError());
    }
    else
    {
        return FormulaOCROutcome(outcome.GetError());
    }
}

void OcrClient::FormulaOCRAsync(const FormulaOCRRequest& request, const FormulaOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FormulaOCRRequest&;
    using Resp = FormulaOCRResponse;

    DoRequestAsync<Req, Resp>(
        "FormulaOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::FormulaOCROutcomeCallable OcrClient::FormulaOCRCallable(const FormulaOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<FormulaOCROutcome>>();
    FormulaOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const FormulaOCRRequest&,
        FormulaOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::GeneralAccurateOCROutcome OcrClient::GeneralAccurateOCR(const GeneralAccurateOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralAccurateOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralAccurateOCRResponse rsp = GeneralAccurateOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralAccurateOCROutcome(rsp);
        else
            return GeneralAccurateOCROutcome(o.GetError());
    }
    else
    {
        return GeneralAccurateOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralAccurateOCRAsync(const GeneralAccurateOCRRequest& request, const GeneralAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GeneralAccurateOCRRequest&;
    using Resp = GeneralAccurateOCRResponse;

    DoRequestAsync<Req, Resp>(
        "GeneralAccurateOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::GeneralAccurateOCROutcomeCallable OcrClient::GeneralAccurateOCRCallable(const GeneralAccurateOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<GeneralAccurateOCROutcome>>();
    GeneralAccurateOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const GeneralAccurateOCRRequest&,
        GeneralAccurateOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::GeneralBasicOCROutcome OcrClient::GeneralBasicOCR(const GeneralBasicOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralBasicOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralBasicOCRResponse rsp = GeneralBasicOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralBasicOCROutcome(rsp);
        else
            return GeneralBasicOCROutcome(o.GetError());
    }
    else
    {
        return GeneralBasicOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralBasicOCRAsync(const GeneralBasicOCRRequest& request, const GeneralBasicOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GeneralBasicOCRRequest&;
    using Resp = GeneralBasicOCRResponse;

    DoRequestAsync<Req, Resp>(
        "GeneralBasicOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::GeneralBasicOCROutcomeCallable OcrClient::GeneralBasicOCRCallable(const GeneralBasicOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<GeneralBasicOCROutcome>>();
    GeneralBasicOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const GeneralBasicOCRRequest&,
        GeneralBasicOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::GeneralEfficientOCROutcome OcrClient::GeneralEfficientOCR(const GeneralEfficientOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralEfficientOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralEfficientOCRResponse rsp = GeneralEfficientOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralEfficientOCROutcome(rsp);
        else
            return GeneralEfficientOCROutcome(o.GetError());
    }
    else
    {
        return GeneralEfficientOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralEfficientOCRAsync(const GeneralEfficientOCRRequest& request, const GeneralEfficientOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GeneralEfficientOCRRequest&;
    using Resp = GeneralEfficientOCRResponse;

    DoRequestAsync<Req, Resp>(
        "GeneralEfficientOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::GeneralEfficientOCROutcomeCallable OcrClient::GeneralEfficientOCRCallable(const GeneralEfficientOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<GeneralEfficientOCROutcome>>();
    GeneralEfficientOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const GeneralEfficientOCRRequest&,
        GeneralEfficientOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::GeneralFastOCROutcome OcrClient::GeneralFastOCR(const GeneralFastOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralFastOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralFastOCRResponse rsp = GeneralFastOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralFastOCROutcome(rsp);
        else
            return GeneralFastOCROutcome(o.GetError());
    }
    else
    {
        return GeneralFastOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralFastOCRAsync(const GeneralFastOCRRequest& request, const GeneralFastOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GeneralFastOCRRequest&;
    using Resp = GeneralFastOCRResponse;

    DoRequestAsync<Req, Resp>(
        "GeneralFastOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::GeneralFastOCROutcomeCallable OcrClient::GeneralFastOCRCallable(const GeneralFastOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<GeneralFastOCROutcome>>();
    GeneralFastOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const GeneralFastOCRRequest&,
        GeneralFastOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::GeneralHandwritingOCROutcome OcrClient::GeneralHandwritingOCR(const GeneralHandwritingOCRRequest &request)
{
    auto outcome = MakeRequest(request, "GeneralHandwritingOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GeneralHandwritingOCRResponse rsp = GeneralHandwritingOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GeneralHandwritingOCROutcome(rsp);
        else
            return GeneralHandwritingOCROutcome(o.GetError());
    }
    else
    {
        return GeneralHandwritingOCROutcome(outcome.GetError());
    }
}

void OcrClient::GeneralHandwritingOCRAsync(const GeneralHandwritingOCRRequest& request, const GeneralHandwritingOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GeneralHandwritingOCRRequest&;
    using Resp = GeneralHandwritingOCRResponse;

    DoRequestAsync<Req, Resp>(
        "GeneralHandwritingOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::GeneralHandwritingOCROutcomeCallable OcrClient::GeneralHandwritingOCRCallable(const GeneralHandwritingOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<GeneralHandwritingOCROutcome>>();
    GeneralHandwritingOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const GeneralHandwritingOCRRequest&,
        GeneralHandwritingOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::GetOCRResultOutcome OcrClient::GetOCRResult(const GetOCRResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetOCRResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOCRResultResponse rsp = GetOCRResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOCRResultOutcome(rsp);
        else
            return GetOCRResultOutcome(o.GetError());
    }
    else
    {
        return GetOCRResultOutcome(outcome.GetError());
    }
}

void OcrClient::GetOCRResultAsync(const GetOCRResultRequest& request, const GetOCRResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOCRResultRequest&;
    using Resp = GetOCRResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetOCRResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::GetOCRResultOutcomeCallable OcrClient::GetOCRResultCallable(const GetOCRResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOCRResultOutcome>>();
    GetOCRResultAsync(
    request,
    [prom](
        const OcrClient*,
        const GetOCRResultRequest&,
        GetOCRResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::GetOCRTokenOutcome OcrClient::GetOCRToken(const GetOCRTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetOCRToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOCRTokenResponse rsp = GetOCRTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOCRTokenOutcome(rsp);
        else
            return GetOCRTokenOutcome(o.GetError());
    }
    else
    {
        return GetOCRTokenOutcome(outcome.GetError());
    }
}

void OcrClient::GetOCRTokenAsync(const GetOCRTokenRequest& request, const GetOCRTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOCRTokenRequest&;
    using Resp = GetOCRTokenResponse;

    DoRequestAsync<Req, Resp>(
        "GetOCRToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::GetOCRTokenOutcomeCallable OcrClient::GetOCRTokenCallable(const GetOCRTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOCRTokenOutcome>>();
    GetOCRTokenAsync(
    request,
    [prom](
        const OcrClient*,
        const GetOCRTokenRequest&,
        GetOCRTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::HKIDCardOCROutcome OcrClient::HKIDCardOCR(const HKIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "HKIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HKIDCardOCRResponse rsp = HKIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HKIDCardOCROutcome(rsp);
        else
            return HKIDCardOCROutcome(o.GetError());
    }
    else
    {
        return HKIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::HKIDCardOCRAsync(const HKIDCardOCRRequest& request, const HKIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const HKIDCardOCRRequest&;
    using Resp = HKIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "HKIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::HKIDCardOCROutcomeCallable OcrClient::HKIDCardOCRCallable(const HKIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<HKIDCardOCROutcome>>();
    HKIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const HKIDCardOCRRequest&,
        HKIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::HandwritingEssayOCROutcome OcrClient::HandwritingEssayOCR(const HandwritingEssayOCRRequest &request)
{
    auto outcome = MakeRequest(request, "HandwritingEssayOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HandwritingEssayOCRResponse rsp = HandwritingEssayOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HandwritingEssayOCROutcome(rsp);
        else
            return HandwritingEssayOCROutcome(o.GetError());
    }
    else
    {
        return HandwritingEssayOCROutcome(outcome.GetError());
    }
}

void OcrClient::HandwritingEssayOCRAsync(const HandwritingEssayOCRRequest& request, const HandwritingEssayOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const HandwritingEssayOCRRequest&;
    using Resp = HandwritingEssayOCRResponse;

    DoRequestAsync<Req, Resp>(
        "HandwritingEssayOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::HandwritingEssayOCROutcomeCallable OcrClient::HandwritingEssayOCRCallable(const HandwritingEssayOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<HandwritingEssayOCROutcome>>();
    HandwritingEssayOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const HandwritingEssayOCRRequest&,
        HandwritingEssayOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::HmtResidentPermitOCROutcome OcrClient::HmtResidentPermitOCR(const HmtResidentPermitOCRRequest &request)
{
    auto outcome = MakeRequest(request, "HmtResidentPermitOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HmtResidentPermitOCRResponse rsp = HmtResidentPermitOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HmtResidentPermitOCROutcome(rsp);
        else
            return HmtResidentPermitOCROutcome(o.GetError());
    }
    else
    {
        return HmtResidentPermitOCROutcome(outcome.GetError());
    }
}

void OcrClient::HmtResidentPermitOCRAsync(const HmtResidentPermitOCRRequest& request, const HmtResidentPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const HmtResidentPermitOCRRequest&;
    using Resp = HmtResidentPermitOCRResponse;

    DoRequestAsync<Req, Resp>(
        "HmtResidentPermitOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::HmtResidentPermitOCROutcomeCallable OcrClient::HmtResidentPermitOCRCallable(const HmtResidentPermitOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<HmtResidentPermitOCROutcome>>();
    HmtResidentPermitOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const HmtResidentPermitOCRRequest&,
        HmtResidentPermitOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::IDCardOCROutcome OcrClient::IDCardOCR(const IDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "IDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IDCardOCRResponse rsp = IDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IDCardOCROutcome(rsp);
        else
            return IDCardOCROutcome(o.GetError());
    }
    else
    {
        return IDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::IDCardOCRAsync(const IDCardOCRRequest& request, const IDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IDCardOCRRequest&;
    using Resp = IDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "IDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::IDCardOCROutcomeCallable OcrClient::IDCardOCRCallable(const IDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<IDCardOCROutcome>>();
    IDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const IDCardOCRRequest&,
        IDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ImageEnhancementOutcome OcrClient::ImageEnhancement(const ImageEnhancementRequest &request)
{
    auto outcome = MakeRequest(request, "ImageEnhancement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageEnhancementResponse rsp = ImageEnhancementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageEnhancementOutcome(rsp);
        else
            return ImageEnhancementOutcome(o.GetError());
    }
    else
    {
        return ImageEnhancementOutcome(outcome.GetError());
    }
}

void OcrClient::ImageEnhancementAsync(const ImageEnhancementRequest& request, const ImageEnhancementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImageEnhancementRequest&;
    using Resp = ImageEnhancementResponse;

    DoRequestAsync<Req, Resp>(
        "ImageEnhancement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ImageEnhancementOutcomeCallable OcrClient::ImageEnhancementCallable(const ImageEnhancementRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageEnhancementOutcome>>();
    ImageEnhancementAsync(
    request,
    [prom](
        const OcrClient*,
        const ImageEnhancementRequest&,
        ImageEnhancementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::InsuranceBillOCROutcome OcrClient::InsuranceBillOCR(const InsuranceBillOCRRequest &request)
{
    auto outcome = MakeRequest(request, "InsuranceBillOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InsuranceBillOCRResponse rsp = InsuranceBillOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InsuranceBillOCROutcome(rsp);
        else
            return InsuranceBillOCROutcome(o.GetError());
    }
    else
    {
        return InsuranceBillOCROutcome(outcome.GetError());
    }
}

void OcrClient::InsuranceBillOCRAsync(const InsuranceBillOCRRequest& request, const InsuranceBillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InsuranceBillOCRRequest&;
    using Resp = InsuranceBillOCRResponse;

    DoRequestAsync<Req, Resp>(
        "InsuranceBillOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::InsuranceBillOCROutcomeCallable OcrClient::InsuranceBillOCRCallable(const InsuranceBillOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<InsuranceBillOCROutcome>>();
    InsuranceBillOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const InsuranceBillOCRRequest&,
        InsuranceBillOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::InvoiceGeneralOCROutcome OcrClient::InvoiceGeneralOCR(const InvoiceGeneralOCRRequest &request)
{
    auto outcome = MakeRequest(request, "InvoiceGeneralOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvoiceGeneralOCRResponse rsp = InvoiceGeneralOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvoiceGeneralOCROutcome(rsp);
        else
            return InvoiceGeneralOCROutcome(o.GetError());
    }
    else
    {
        return InvoiceGeneralOCROutcome(outcome.GetError());
    }
}

void OcrClient::InvoiceGeneralOCRAsync(const InvoiceGeneralOCRRequest& request, const InvoiceGeneralOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvoiceGeneralOCRRequest&;
    using Resp = InvoiceGeneralOCRResponse;

    DoRequestAsync<Req, Resp>(
        "InvoiceGeneralOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::InvoiceGeneralOCROutcomeCallable OcrClient::InvoiceGeneralOCRCallable(const InvoiceGeneralOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvoiceGeneralOCROutcome>>();
    InvoiceGeneralOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const InvoiceGeneralOCRRequest&,
        InvoiceGeneralOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::LicensePlateOCROutcome OcrClient::LicensePlateOCR(const LicensePlateOCRRequest &request)
{
    auto outcome = MakeRequest(request, "LicensePlateOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LicensePlateOCRResponse rsp = LicensePlateOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LicensePlateOCROutcome(rsp);
        else
            return LicensePlateOCROutcome(o.GetError());
    }
    else
    {
        return LicensePlateOCROutcome(outcome.GetError());
    }
}

void OcrClient::LicensePlateOCRAsync(const LicensePlateOCRRequest& request, const LicensePlateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LicensePlateOCRRequest&;
    using Resp = LicensePlateOCRResponse;

    DoRequestAsync<Req, Resp>(
        "LicensePlateOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::LicensePlateOCROutcomeCallable OcrClient::LicensePlateOCRCallable(const LicensePlateOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<LicensePlateOCROutcome>>();
    LicensePlateOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const LicensePlateOCRRequest&,
        LicensePlateOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::MLIDCardOCROutcome OcrClient::MLIDCardOCR(const MLIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MLIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MLIDCardOCRResponse rsp = MLIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MLIDCardOCROutcome(rsp);
        else
            return MLIDCardOCROutcome(o.GetError());
    }
    else
    {
        return MLIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::MLIDCardOCRAsync(const MLIDCardOCRRequest& request, const MLIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MLIDCardOCRRequest&;
    using Resp = MLIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "MLIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::MLIDCardOCROutcomeCallable OcrClient::MLIDCardOCRCallable(const MLIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<MLIDCardOCROutcome>>();
    MLIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const MLIDCardOCRRequest&,
        MLIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::MLIDPassportOCROutcome OcrClient::MLIDPassportOCR(const MLIDPassportOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MLIDPassportOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MLIDPassportOCRResponse rsp = MLIDPassportOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MLIDPassportOCROutcome(rsp);
        else
            return MLIDPassportOCROutcome(o.GetError());
    }
    else
    {
        return MLIDPassportOCROutcome(outcome.GetError());
    }
}

void OcrClient::MLIDPassportOCRAsync(const MLIDPassportOCRRequest& request, const MLIDPassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MLIDPassportOCRRequest&;
    using Resp = MLIDPassportOCRResponse;

    DoRequestAsync<Req, Resp>(
        "MLIDPassportOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::MLIDPassportOCROutcomeCallable OcrClient::MLIDPassportOCRCallable(const MLIDPassportOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<MLIDPassportOCROutcome>>();
    MLIDPassportOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const MLIDPassportOCRRequest&,
        MLIDPassportOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::MainlandPermitOCROutcome OcrClient::MainlandPermitOCR(const MainlandPermitOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MainlandPermitOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MainlandPermitOCRResponse rsp = MainlandPermitOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MainlandPermitOCROutcome(rsp);
        else
            return MainlandPermitOCROutcome(o.GetError());
    }
    else
    {
        return MainlandPermitOCROutcome(outcome.GetError());
    }
}

void OcrClient::MainlandPermitOCRAsync(const MainlandPermitOCRRequest& request, const MainlandPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MainlandPermitOCRRequest&;
    using Resp = MainlandPermitOCRResponse;

    DoRequestAsync<Req, Resp>(
        "MainlandPermitOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::MainlandPermitOCROutcomeCallable OcrClient::MainlandPermitOCRCallable(const MainlandPermitOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<MainlandPermitOCROutcome>>();
    MainlandPermitOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const MainlandPermitOCRRequest&,
        MainlandPermitOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::MixedInvoiceDetectOutcome OcrClient::MixedInvoiceDetect(const MixedInvoiceDetectRequest &request)
{
    auto outcome = MakeRequest(request, "MixedInvoiceDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MixedInvoiceDetectResponse rsp = MixedInvoiceDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MixedInvoiceDetectOutcome(rsp);
        else
            return MixedInvoiceDetectOutcome(o.GetError());
    }
    else
    {
        return MixedInvoiceDetectOutcome(outcome.GetError());
    }
}

void OcrClient::MixedInvoiceDetectAsync(const MixedInvoiceDetectRequest& request, const MixedInvoiceDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MixedInvoiceDetectRequest&;
    using Resp = MixedInvoiceDetectResponse;

    DoRequestAsync<Req, Resp>(
        "MixedInvoiceDetect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::MixedInvoiceDetectOutcomeCallable OcrClient::MixedInvoiceDetectCallable(const MixedInvoiceDetectRequest &request)
{
    const auto prom = std::make_shared<std::promise<MixedInvoiceDetectOutcome>>();
    MixedInvoiceDetectAsync(
    request,
    [prom](
        const OcrClient*,
        const MixedInvoiceDetectRequest&,
        MixedInvoiceDetectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::MixedInvoiceOCROutcome OcrClient::MixedInvoiceOCR(const MixedInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "MixedInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MixedInvoiceOCRResponse rsp = MixedInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MixedInvoiceOCROutcome(rsp);
        else
            return MixedInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return MixedInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::MixedInvoiceOCRAsync(const MixedInvoiceOCRRequest& request, const MixedInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MixedInvoiceOCRRequest&;
    using Resp = MixedInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "MixedInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::MixedInvoiceOCROutcomeCallable OcrClient::MixedInvoiceOCRCallable(const MixedInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<MixedInvoiceOCROutcome>>();
    MixedInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const MixedInvoiceOCRRequest&,
        MixedInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::PassportOCROutcome OcrClient::PassportOCR(const PassportOCRRequest &request)
{
    auto outcome = MakeRequest(request, "PassportOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PassportOCRResponse rsp = PassportOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PassportOCROutcome(rsp);
        else
            return PassportOCROutcome(o.GetError());
    }
    else
    {
        return PassportOCROutcome(outcome.GetError());
    }
}

void OcrClient::PassportOCRAsync(const PassportOCRRequest& request, const PassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PassportOCRRequest&;
    using Resp = PassportOCRResponse;

    DoRequestAsync<Req, Resp>(
        "PassportOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::PassportOCROutcomeCallable OcrClient::PassportOCRCallable(const PassportOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<PassportOCROutcome>>();
    PassportOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const PassportOCRRequest&,
        PassportOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::PermitOCROutcome OcrClient::PermitOCR(const PermitOCRRequest &request)
{
    auto outcome = MakeRequest(request, "PermitOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PermitOCRResponse rsp = PermitOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PermitOCROutcome(rsp);
        else
            return PermitOCROutcome(o.GetError());
    }
    else
    {
        return PermitOCROutcome(outcome.GetError());
    }
}

void OcrClient::PermitOCRAsync(const PermitOCRRequest& request, const PermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PermitOCRRequest&;
    using Resp = PermitOCRResponse;

    DoRequestAsync<Req, Resp>(
        "PermitOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::PermitOCROutcomeCallable OcrClient::PermitOCRCallable(const PermitOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<PermitOCROutcome>>();
    PermitOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const PermitOCRRequest&,
        PermitOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::QrcodeOCROutcome OcrClient::QrcodeOCR(const QrcodeOCRRequest &request)
{
    auto outcome = MakeRequest(request, "QrcodeOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QrcodeOCRResponse rsp = QrcodeOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QrcodeOCROutcome(rsp);
        else
            return QrcodeOCROutcome(o.GetError());
    }
    else
    {
        return QrcodeOCROutcome(outcome.GetError());
    }
}

void OcrClient::QrcodeOCRAsync(const QrcodeOCRRequest& request, const QrcodeOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QrcodeOCRRequest&;
    using Resp = QrcodeOCRResponse;

    DoRequestAsync<Req, Resp>(
        "QrcodeOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::QrcodeOCROutcomeCallable OcrClient::QrcodeOCRCallable(const QrcodeOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<QrcodeOCROutcome>>();
    QrcodeOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const QrcodeOCRRequest&,
        QrcodeOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::QuestionOCROutcome OcrClient::QuestionOCR(const QuestionOCRRequest &request)
{
    auto outcome = MakeRequest(request, "QuestionOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuestionOCRResponse rsp = QuestionOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuestionOCROutcome(rsp);
        else
            return QuestionOCROutcome(o.GetError());
    }
    else
    {
        return QuestionOCROutcome(outcome.GetError());
    }
}

void OcrClient::QuestionOCRAsync(const QuestionOCRRequest& request, const QuestionOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QuestionOCRRequest&;
    using Resp = QuestionOCRResponse;

    DoRequestAsync<Req, Resp>(
        "QuestionOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::QuestionOCROutcomeCallable OcrClient::QuestionOCRCallable(const QuestionOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<QuestionOCROutcome>>();
    QuestionOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const QuestionOCRRequest&,
        QuestionOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::QuestionSplitLayoutOCROutcome OcrClient::QuestionSplitLayoutOCR(const QuestionSplitLayoutOCRRequest &request)
{
    auto outcome = MakeRequest(request, "QuestionSplitLayoutOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuestionSplitLayoutOCRResponse rsp = QuestionSplitLayoutOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuestionSplitLayoutOCROutcome(rsp);
        else
            return QuestionSplitLayoutOCROutcome(o.GetError());
    }
    else
    {
        return QuestionSplitLayoutOCROutcome(outcome.GetError());
    }
}

void OcrClient::QuestionSplitLayoutOCRAsync(const QuestionSplitLayoutOCRRequest& request, const QuestionSplitLayoutOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QuestionSplitLayoutOCRRequest&;
    using Resp = QuestionSplitLayoutOCRResponse;

    DoRequestAsync<Req, Resp>(
        "QuestionSplitLayoutOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::QuestionSplitLayoutOCROutcomeCallable OcrClient::QuestionSplitLayoutOCRCallable(const QuestionSplitLayoutOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<QuestionSplitLayoutOCROutcome>>();
    QuestionSplitLayoutOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const QuestionSplitLayoutOCRRequest&,
        QuestionSplitLayoutOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::QuestionSplitOCROutcome OcrClient::QuestionSplitOCR(const QuestionSplitOCRRequest &request)
{
    auto outcome = MakeRequest(request, "QuestionSplitOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuestionSplitOCRResponse rsp = QuestionSplitOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuestionSplitOCROutcome(rsp);
        else
            return QuestionSplitOCROutcome(o.GetError());
    }
    else
    {
        return QuestionSplitOCROutcome(outcome.GetError());
    }
}

void OcrClient::QuestionSplitOCRAsync(const QuestionSplitOCRRequest& request, const QuestionSplitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QuestionSplitOCRRequest&;
    using Resp = QuestionSplitOCRResponse;

    DoRequestAsync<Req, Resp>(
        "QuestionSplitOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::QuestionSplitOCROutcomeCallable OcrClient::QuestionSplitOCRCallable(const QuestionSplitOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<QuestionSplitOCROutcome>>();
    QuestionSplitOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const QuestionSplitOCRRequest&,
        QuestionSplitOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::QuotaInvoiceOCROutcome OcrClient::QuotaInvoiceOCR(const QuotaInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "QuotaInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuotaInvoiceOCRResponse rsp = QuotaInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuotaInvoiceOCROutcome(rsp);
        else
            return QuotaInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return QuotaInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::QuotaInvoiceOCRAsync(const QuotaInvoiceOCRRequest& request, const QuotaInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QuotaInvoiceOCRRequest&;
    using Resp = QuotaInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "QuotaInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::QuotaInvoiceOCROutcomeCallable OcrClient::QuotaInvoiceOCRCallable(const QuotaInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<QuotaInvoiceOCROutcome>>();
    QuotaInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const QuotaInvoiceOCRRequest&,
        QuotaInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeContainerOCROutcome OcrClient::RecognizeContainerOCR(const RecognizeContainerOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeContainerOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeContainerOCRResponse rsp = RecognizeContainerOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeContainerOCROutcome(rsp);
        else
            return RecognizeContainerOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeContainerOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeContainerOCRAsync(const RecognizeContainerOCRRequest& request, const RecognizeContainerOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeContainerOCRRequest&;
    using Resp = RecognizeContainerOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeContainerOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeContainerOCROutcomeCallable OcrClient::RecognizeContainerOCRCallable(const RecognizeContainerOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeContainerOCROutcome>>();
    RecognizeContainerOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeContainerOCRRequest&,
        RecognizeContainerOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeEncryptedIDCardOCROutcome OcrClient::RecognizeEncryptedIDCardOCR(const RecognizeEncryptedIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeEncryptedIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeEncryptedIDCardOCRResponse rsp = RecognizeEncryptedIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeEncryptedIDCardOCROutcome(rsp);
        else
            return RecognizeEncryptedIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeEncryptedIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeEncryptedIDCardOCRAsync(const RecognizeEncryptedIDCardOCRRequest& request, const RecognizeEncryptedIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeEncryptedIDCardOCRRequest&;
    using Resp = RecognizeEncryptedIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeEncryptedIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeEncryptedIDCardOCROutcomeCallable OcrClient::RecognizeEncryptedIDCardOCRCallable(const RecognizeEncryptedIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeEncryptedIDCardOCROutcome>>();
    RecognizeEncryptedIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeEncryptedIDCardOCRRequest&,
        RecognizeEncryptedIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeFormulaOCROutcome OcrClient::RecognizeFormulaOCR(const RecognizeFormulaOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeFormulaOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeFormulaOCRResponse rsp = RecognizeFormulaOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeFormulaOCROutcome(rsp);
        else
            return RecognizeFormulaOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeFormulaOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeFormulaOCRAsync(const RecognizeFormulaOCRRequest& request, const RecognizeFormulaOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeFormulaOCRRequest&;
    using Resp = RecognizeFormulaOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeFormulaOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeFormulaOCROutcomeCallable OcrClient::RecognizeFormulaOCRCallable(const RecognizeFormulaOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeFormulaOCROutcome>>();
    RecognizeFormulaOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeFormulaOCRRequest&,
        RecognizeFormulaOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeGeneralCardWarnOutcome OcrClient::RecognizeGeneralCardWarn(const RecognizeGeneralCardWarnRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeGeneralCardWarn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeGeneralCardWarnResponse rsp = RecognizeGeneralCardWarnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeGeneralCardWarnOutcome(rsp);
        else
            return RecognizeGeneralCardWarnOutcome(o.GetError());
    }
    else
    {
        return RecognizeGeneralCardWarnOutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeGeneralCardWarnAsync(const RecognizeGeneralCardWarnRequest& request, const RecognizeGeneralCardWarnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeGeneralCardWarnRequest&;
    using Resp = RecognizeGeneralCardWarnResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeGeneralCardWarn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeGeneralCardWarnOutcomeCallable OcrClient::RecognizeGeneralCardWarnCallable(const RecognizeGeneralCardWarnRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeGeneralCardWarnOutcome>>();
    RecognizeGeneralCardWarnAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeGeneralCardWarnRequest&,
        RecognizeGeneralCardWarnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeGeneralInvoiceOutcome OcrClient::RecognizeGeneralInvoice(const RecognizeGeneralInvoiceRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeGeneralInvoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeGeneralInvoiceResponse rsp = RecognizeGeneralInvoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeGeneralInvoiceOutcome(rsp);
        else
            return RecognizeGeneralInvoiceOutcome(o.GetError());
    }
    else
    {
        return RecognizeGeneralInvoiceOutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeGeneralInvoiceAsync(const RecognizeGeneralInvoiceRequest& request, const RecognizeGeneralInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeGeneralInvoiceRequest&;
    using Resp = RecognizeGeneralInvoiceResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeGeneralInvoice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeGeneralInvoiceOutcomeCallable OcrClient::RecognizeGeneralInvoiceCallable(const RecognizeGeneralInvoiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeGeneralInvoiceOutcome>>();
    RecognizeGeneralInvoiceAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeGeneralInvoiceRequest&,
        RecognizeGeneralInvoiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeHealthCodeOCROutcome OcrClient::RecognizeHealthCodeOCR(const RecognizeHealthCodeOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeHealthCodeOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeHealthCodeOCRResponse rsp = RecognizeHealthCodeOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeHealthCodeOCROutcome(rsp);
        else
            return RecognizeHealthCodeOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeHealthCodeOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeHealthCodeOCRAsync(const RecognizeHealthCodeOCRRequest& request, const RecognizeHealthCodeOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeHealthCodeOCRRequest&;
    using Resp = RecognizeHealthCodeOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeHealthCodeOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeHealthCodeOCROutcomeCallable OcrClient::RecognizeHealthCodeOCRCallable(const RecognizeHealthCodeOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeHealthCodeOCROutcome>>();
    RecognizeHealthCodeOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeHealthCodeOCRRequest&,
        RecognizeHealthCodeOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeMedicalInvoiceOCROutcome OcrClient::RecognizeMedicalInvoiceOCR(const RecognizeMedicalInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeMedicalInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeMedicalInvoiceOCRResponse rsp = RecognizeMedicalInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeMedicalInvoiceOCROutcome(rsp);
        else
            return RecognizeMedicalInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeMedicalInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeMedicalInvoiceOCRAsync(const RecognizeMedicalInvoiceOCRRequest& request, const RecognizeMedicalInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeMedicalInvoiceOCRRequest&;
    using Resp = RecognizeMedicalInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeMedicalInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeMedicalInvoiceOCROutcomeCallable OcrClient::RecognizeMedicalInvoiceOCRCallable(const RecognizeMedicalInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeMedicalInvoiceOCROutcome>>();
    RecognizeMedicalInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeMedicalInvoiceOCRRequest&,
        RecognizeMedicalInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeOnlineTaxiItineraryOCROutcome OcrClient::RecognizeOnlineTaxiItineraryOCR(const RecognizeOnlineTaxiItineraryOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeOnlineTaxiItineraryOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeOnlineTaxiItineraryOCRResponse rsp = RecognizeOnlineTaxiItineraryOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeOnlineTaxiItineraryOCROutcome(rsp);
        else
            return RecognizeOnlineTaxiItineraryOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeOnlineTaxiItineraryOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeOnlineTaxiItineraryOCRAsync(const RecognizeOnlineTaxiItineraryOCRRequest& request, const RecognizeOnlineTaxiItineraryOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeOnlineTaxiItineraryOCRRequest&;
    using Resp = RecognizeOnlineTaxiItineraryOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeOnlineTaxiItineraryOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeOnlineTaxiItineraryOCROutcomeCallable OcrClient::RecognizeOnlineTaxiItineraryOCRCallable(const RecognizeOnlineTaxiItineraryOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeOnlineTaxiItineraryOCROutcome>>();
    RecognizeOnlineTaxiItineraryOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeOnlineTaxiItineraryOCRRequest&,
        RecognizeOnlineTaxiItineraryOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeStoreNameOutcome OcrClient::RecognizeStoreName(const RecognizeStoreNameRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeStoreName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeStoreNameResponse rsp = RecognizeStoreNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeStoreNameOutcome(rsp);
        else
            return RecognizeStoreNameOutcome(o.GetError());
    }
    else
    {
        return RecognizeStoreNameOutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeStoreNameAsync(const RecognizeStoreNameRequest& request, const RecognizeStoreNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeStoreNameRequest&;
    using Resp = RecognizeStoreNameResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeStoreName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeStoreNameOutcomeCallable OcrClient::RecognizeStoreNameCallable(const RecognizeStoreNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeStoreNameOutcome>>();
    RecognizeStoreNameAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeStoreNameRequest&,
        RecognizeStoreNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeTableAccurateOCROutcome OcrClient::RecognizeTableAccurateOCR(const RecognizeTableAccurateOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeTableAccurateOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeTableAccurateOCRResponse rsp = RecognizeTableAccurateOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeTableAccurateOCROutcome(rsp);
        else
            return RecognizeTableAccurateOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeTableAccurateOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeTableAccurateOCRAsync(const RecognizeTableAccurateOCRRequest& request, const RecognizeTableAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeTableAccurateOCRRequest&;
    using Resp = RecognizeTableAccurateOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeTableAccurateOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeTableAccurateOCROutcomeCallable OcrClient::RecognizeTableAccurateOCRCallable(const RecognizeTableAccurateOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeTableAccurateOCROutcome>>();
    RecognizeTableAccurateOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeTableAccurateOCRRequest&,
        RecognizeTableAccurateOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeTableMultiOCROutcome OcrClient::RecognizeTableMultiOCR(const RecognizeTableMultiOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeTableMultiOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeTableMultiOCRResponse rsp = RecognizeTableMultiOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeTableMultiOCROutcome(rsp);
        else
            return RecognizeTableMultiOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeTableMultiOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeTableMultiOCRAsync(const RecognizeTableMultiOCRRequest& request, const RecognizeTableMultiOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeTableMultiOCRRequest&;
    using Resp = RecognizeTableMultiOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeTableMultiOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeTableMultiOCROutcomeCallable OcrClient::RecognizeTableMultiOCRCallable(const RecognizeTableMultiOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeTableMultiOCROutcome>>();
    RecognizeTableMultiOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeTableMultiOCRRequest&,
        RecognizeTableMultiOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeTableOCROutcome OcrClient::RecognizeTableOCR(const RecognizeTableOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeTableOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeTableOCRResponse rsp = RecognizeTableOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeTableOCROutcome(rsp);
        else
            return RecognizeTableOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeTableOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeTableOCRAsync(const RecognizeTableOCRRequest& request, const RecognizeTableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeTableOCRRequest&;
    using Resp = RecognizeTableOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeTableOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeTableOCROutcomeCallable OcrClient::RecognizeTableOCRCallable(const RecognizeTableOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeTableOCROutcome>>();
    RecognizeTableOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeTableOCRRequest&,
        RecognizeTableOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeThaiIDCardOCROutcome OcrClient::RecognizeThaiIDCardOCR(const RecognizeThaiIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeThaiIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeThaiIDCardOCRResponse rsp = RecognizeThaiIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeThaiIDCardOCROutcome(rsp);
        else
            return RecognizeThaiIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeThaiIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeThaiIDCardOCRAsync(const RecognizeThaiIDCardOCRRequest& request, const RecognizeThaiIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeThaiIDCardOCRRequest&;
    using Resp = RecognizeThaiIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeThaiIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeThaiIDCardOCROutcomeCallable OcrClient::RecognizeThaiIDCardOCRCallable(const RecognizeThaiIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeThaiIDCardOCROutcome>>();
    RecognizeThaiIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeThaiIDCardOCRRequest&,
        RecognizeThaiIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeTravelCardOCROutcome OcrClient::RecognizeTravelCardOCR(const RecognizeTravelCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeTravelCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeTravelCardOCRResponse rsp = RecognizeTravelCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeTravelCardOCROutcome(rsp);
        else
            return RecognizeTravelCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeTravelCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeTravelCardOCRAsync(const RecognizeTravelCardOCRRequest& request, const RecognizeTravelCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeTravelCardOCRRequest&;
    using Resp = RecognizeTravelCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeTravelCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeTravelCardOCROutcomeCallable OcrClient::RecognizeTravelCardOCRCallable(const RecognizeTravelCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeTravelCardOCROutcome>>();
    RecognizeTravelCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeTravelCardOCRRequest&,
        RecognizeTravelCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RecognizeValidIDCardOCROutcome OcrClient::RecognizeValidIDCardOCR(const RecognizeValidIDCardOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeValidIDCardOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeValidIDCardOCRResponse rsp = RecognizeValidIDCardOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeValidIDCardOCROutcome(rsp);
        else
            return RecognizeValidIDCardOCROutcome(o.GetError());
    }
    else
    {
        return RecognizeValidIDCardOCROutcome(outcome.GetError());
    }
}

void OcrClient::RecognizeValidIDCardOCRAsync(const RecognizeValidIDCardOCRRequest& request, const RecognizeValidIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecognizeValidIDCardOCRRequest&;
    using Resp = RecognizeValidIDCardOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeValidIDCardOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RecognizeValidIDCardOCROutcomeCallable OcrClient::RecognizeValidIDCardOCRCallable(const RecognizeValidIDCardOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeValidIDCardOCROutcome>>();
    RecognizeValidIDCardOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RecognizeValidIDCardOCRRequest&,
        RecognizeValidIDCardOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ResidenceBookletOCROutcome OcrClient::ResidenceBookletOCR(const ResidenceBookletOCRRequest &request)
{
    auto outcome = MakeRequest(request, "ResidenceBookletOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResidenceBookletOCRResponse rsp = ResidenceBookletOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResidenceBookletOCROutcome(rsp);
        else
            return ResidenceBookletOCROutcome(o.GetError());
    }
    else
    {
        return ResidenceBookletOCROutcome(outcome.GetError());
    }
}

void OcrClient::ResidenceBookletOCRAsync(const ResidenceBookletOCRRequest& request, const ResidenceBookletOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResidenceBookletOCRRequest&;
    using Resp = ResidenceBookletOCRResponse;

    DoRequestAsync<Req, Resp>(
        "ResidenceBookletOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ResidenceBookletOCROutcomeCallable OcrClient::ResidenceBookletOCRCallable(const ResidenceBookletOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResidenceBookletOCROutcome>>();
    ResidenceBookletOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const ResidenceBookletOCRRequest&,
        ResidenceBookletOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RideHailingDriverLicenseOCROutcome OcrClient::RideHailingDriverLicenseOCR(const RideHailingDriverLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RideHailingDriverLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RideHailingDriverLicenseOCRResponse rsp = RideHailingDriverLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RideHailingDriverLicenseOCROutcome(rsp);
        else
            return RideHailingDriverLicenseOCROutcome(o.GetError());
    }
    else
    {
        return RideHailingDriverLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::RideHailingDriverLicenseOCRAsync(const RideHailingDriverLicenseOCRRequest& request, const RideHailingDriverLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RideHailingDriverLicenseOCRRequest&;
    using Resp = RideHailingDriverLicenseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RideHailingDriverLicenseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RideHailingDriverLicenseOCROutcomeCallable OcrClient::RideHailingDriverLicenseOCRCallable(const RideHailingDriverLicenseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RideHailingDriverLicenseOCROutcome>>();
    RideHailingDriverLicenseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RideHailingDriverLicenseOCRRequest&,
        RideHailingDriverLicenseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::RideHailingTransportLicenseOCROutcome OcrClient::RideHailingTransportLicenseOCR(const RideHailingTransportLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "RideHailingTransportLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RideHailingTransportLicenseOCRResponse rsp = RideHailingTransportLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RideHailingTransportLicenseOCROutcome(rsp);
        else
            return RideHailingTransportLicenseOCROutcome(o.GetError());
    }
    else
    {
        return RideHailingTransportLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::RideHailingTransportLicenseOCRAsync(const RideHailingTransportLicenseOCRRequest& request, const RideHailingTransportLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RideHailingTransportLicenseOCRRequest&;
    using Resp = RideHailingTransportLicenseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "RideHailingTransportLicenseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::RideHailingTransportLicenseOCROutcomeCallable OcrClient::RideHailingTransportLicenseOCRCallable(const RideHailingTransportLicenseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<RideHailingTransportLicenseOCROutcome>>();
    RideHailingTransportLicenseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const RideHailingTransportLicenseOCRRequest&,
        RideHailingTransportLicenseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::SealOCROutcome OcrClient::SealOCR(const SealOCRRequest &request)
{
    auto outcome = MakeRequest(request, "SealOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SealOCRResponse rsp = SealOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SealOCROutcome(rsp);
        else
            return SealOCROutcome(o.GetError());
    }
    else
    {
        return SealOCROutcome(outcome.GetError());
    }
}

void OcrClient::SealOCRAsync(const SealOCRRequest& request, const SealOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SealOCRRequest&;
    using Resp = SealOCRResponse;

    DoRequestAsync<Req, Resp>(
        "SealOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::SealOCROutcomeCallable OcrClient::SealOCRCallable(const SealOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<SealOCROutcome>>();
    SealOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const SealOCRRequest&,
        SealOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::ShipInvoiceOCROutcome OcrClient::ShipInvoiceOCR(const ShipInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "ShipInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ShipInvoiceOCRResponse rsp = ShipInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ShipInvoiceOCROutcome(rsp);
        else
            return ShipInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return ShipInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::ShipInvoiceOCRAsync(const ShipInvoiceOCRRequest& request, const ShipInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ShipInvoiceOCRRequest&;
    using Resp = ShipInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "ShipInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::ShipInvoiceOCROutcomeCallable OcrClient::ShipInvoiceOCRCallable(const ShipInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<ShipInvoiceOCROutcome>>();
    ShipInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const ShipInvoiceOCRRequest&,
        ShipInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::SmartStructuralOCROutcome OcrClient::SmartStructuralOCR(const SmartStructuralOCRRequest &request)
{
    auto outcome = MakeRequest(request, "SmartStructuralOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SmartStructuralOCRResponse rsp = SmartStructuralOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SmartStructuralOCROutcome(rsp);
        else
            return SmartStructuralOCROutcome(o.GetError());
    }
    else
    {
        return SmartStructuralOCROutcome(outcome.GetError());
    }
}

void OcrClient::SmartStructuralOCRAsync(const SmartStructuralOCRRequest& request, const SmartStructuralOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SmartStructuralOCRRequest&;
    using Resp = SmartStructuralOCRResponse;

    DoRequestAsync<Req, Resp>(
        "SmartStructuralOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::SmartStructuralOCROutcomeCallable OcrClient::SmartStructuralOCRCallable(const SmartStructuralOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<SmartStructuralOCROutcome>>();
    SmartStructuralOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const SmartStructuralOCRRequest&,
        SmartStructuralOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::SubmitExtractDocAgentJobOutcome OcrClient::SubmitExtractDocAgentJob(const SubmitExtractDocAgentJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitExtractDocAgentJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitExtractDocAgentJobResponse rsp = SubmitExtractDocAgentJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitExtractDocAgentJobOutcome(rsp);
        else
            return SubmitExtractDocAgentJobOutcome(o.GetError());
    }
    else
    {
        return SubmitExtractDocAgentJobOutcome(outcome.GetError());
    }
}

void OcrClient::SubmitExtractDocAgentJobAsync(const SubmitExtractDocAgentJobRequest& request, const SubmitExtractDocAgentJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitExtractDocAgentJobRequest&;
    using Resp = SubmitExtractDocAgentJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitExtractDocAgentJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::SubmitExtractDocAgentJobOutcomeCallable OcrClient::SubmitExtractDocAgentJobCallable(const SubmitExtractDocAgentJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitExtractDocAgentJobOutcome>>();
    SubmitExtractDocAgentJobAsync(
    request,
    [prom](
        const OcrClient*,
        const SubmitExtractDocAgentJobRequest&,
        SubmitExtractDocAgentJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::TableOCROutcome OcrClient::TableOCR(const TableOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TableOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TableOCRResponse rsp = TableOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TableOCROutcome(rsp);
        else
            return TableOCROutcome(o.GetError());
    }
    else
    {
        return TableOCROutcome(outcome.GetError());
    }
}

void OcrClient::TableOCRAsync(const TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TableOCRRequest&;
    using Resp = TableOCRResponse;

    DoRequestAsync<Req, Resp>(
        "TableOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::TableOCROutcomeCallable OcrClient::TableOCRCallable(const TableOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<TableOCROutcome>>();
    TableOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const TableOCRRequest&,
        TableOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::TaxiInvoiceOCROutcome OcrClient::TaxiInvoiceOCR(const TaxiInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TaxiInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TaxiInvoiceOCRResponse rsp = TaxiInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TaxiInvoiceOCROutcome(rsp);
        else
            return TaxiInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return TaxiInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::TaxiInvoiceOCRAsync(const TaxiInvoiceOCRRequest& request, const TaxiInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TaxiInvoiceOCRRequest&;
    using Resp = TaxiInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "TaxiInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::TaxiInvoiceOCROutcomeCallable OcrClient::TaxiInvoiceOCRCallable(const TaxiInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<TaxiInvoiceOCROutcome>>();
    TaxiInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const TaxiInvoiceOCRRequest&,
        TaxiInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::TextDetectOutcome OcrClient::TextDetect(const TextDetectRequest &request)
{
    auto outcome = MakeRequest(request, "TextDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextDetectResponse rsp = TextDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextDetectOutcome(rsp);
        else
            return TextDetectOutcome(o.GetError());
    }
    else
    {
        return TextDetectOutcome(outcome.GetError());
    }
}

void OcrClient::TextDetectAsync(const TextDetectRequest& request, const TextDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextDetectRequest&;
    using Resp = TextDetectResponse;

    DoRequestAsync<Req, Resp>(
        "TextDetect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::TextDetectOutcomeCallable OcrClient::TextDetectCallable(const TextDetectRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextDetectOutcome>>();
    TextDetectAsync(
    request,
    [prom](
        const OcrClient*,
        const TextDetectRequest&,
        TextDetectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::TollInvoiceOCROutcome OcrClient::TollInvoiceOCR(const TollInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TollInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TollInvoiceOCRResponse rsp = TollInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TollInvoiceOCROutcome(rsp);
        else
            return TollInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return TollInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::TollInvoiceOCRAsync(const TollInvoiceOCRRequest& request, const TollInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TollInvoiceOCRRequest&;
    using Resp = TollInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "TollInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::TollInvoiceOCROutcomeCallable OcrClient::TollInvoiceOCRCallable(const TollInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<TollInvoiceOCROutcome>>();
    TollInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const TollInvoiceOCRRequest&,
        TollInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::TrainTicketOCROutcome OcrClient::TrainTicketOCR(const TrainTicketOCRRequest &request)
{
    auto outcome = MakeRequest(request, "TrainTicketOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrainTicketOCRResponse rsp = TrainTicketOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrainTicketOCROutcome(rsp);
        else
            return TrainTicketOCROutcome(o.GetError());
    }
    else
    {
        return TrainTicketOCROutcome(outcome.GetError());
    }
}

void OcrClient::TrainTicketOCRAsync(const TrainTicketOCRRequest& request, const TrainTicketOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TrainTicketOCRRequest&;
    using Resp = TrainTicketOCRResponse;

    DoRequestAsync<Req, Resp>(
        "TrainTicketOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::TrainTicketOCROutcomeCallable OcrClient::TrainTicketOCRCallable(const TrainTicketOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<TrainTicketOCROutcome>>();
    TrainTicketOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const TrainTicketOCRRequest&,
        TrainTicketOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::VatInvoiceOCROutcome OcrClient::VatInvoiceOCR(const VatInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VatInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VatInvoiceOCRResponse rsp = VatInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VatInvoiceOCROutcome(rsp);
        else
            return VatInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return VatInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::VatInvoiceOCRAsync(const VatInvoiceOCRRequest& request, const VatInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VatInvoiceOCRRequest&;
    using Resp = VatInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "VatInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::VatInvoiceOCROutcomeCallable OcrClient::VatInvoiceOCRCallable(const VatInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<VatInvoiceOCROutcome>>();
    VatInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const VatInvoiceOCRRequest&,
        VatInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::VatInvoiceVerifyNewOutcome OcrClient::VatInvoiceVerifyNew(const VatInvoiceVerifyNewRequest &request)
{
    auto outcome = MakeRequest(request, "VatInvoiceVerifyNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VatInvoiceVerifyNewResponse rsp = VatInvoiceVerifyNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VatInvoiceVerifyNewOutcome(rsp);
        else
            return VatInvoiceVerifyNewOutcome(o.GetError());
    }
    else
    {
        return VatInvoiceVerifyNewOutcome(outcome.GetError());
    }
}

void OcrClient::VatInvoiceVerifyNewAsync(const VatInvoiceVerifyNewRequest& request, const VatInvoiceVerifyNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VatInvoiceVerifyNewRequest&;
    using Resp = VatInvoiceVerifyNewResponse;

    DoRequestAsync<Req, Resp>(
        "VatInvoiceVerifyNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::VatInvoiceVerifyNewOutcomeCallable OcrClient::VatInvoiceVerifyNewCallable(const VatInvoiceVerifyNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<VatInvoiceVerifyNewOutcome>>();
    VatInvoiceVerifyNewAsync(
    request,
    [prom](
        const OcrClient*,
        const VatInvoiceVerifyNewRequest&,
        VatInvoiceVerifyNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::VatRollInvoiceOCROutcome OcrClient::VatRollInvoiceOCR(const VatRollInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VatRollInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VatRollInvoiceOCRResponse rsp = VatRollInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VatRollInvoiceOCROutcome(rsp);
        else
            return VatRollInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return VatRollInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::VatRollInvoiceOCRAsync(const VatRollInvoiceOCRRequest& request, const VatRollInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VatRollInvoiceOCRRequest&;
    using Resp = VatRollInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "VatRollInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::VatRollInvoiceOCROutcomeCallable OcrClient::VatRollInvoiceOCRCallable(const VatRollInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<VatRollInvoiceOCROutcome>>();
    VatRollInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const VatRollInvoiceOCRRequest&,
        VatRollInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::VehicleLicenseOCROutcome OcrClient::VehicleLicenseOCR(const VehicleLicenseOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VehicleLicenseOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VehicleLicenseOCRResponse rsp = VehicleLicenseOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VehicleLicenseOCROutcome(rsp);
        else
            return VehicleLicenseOCROutcome(o.GetError());
    }
    else
    {
        return VehicleLicenseOCROutcome(outcome.GetError());
    }
}

void OcrClient::VehicleLicenseOCRAsync(const VehicleLicenseOCRRequest& request, const VehicleLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VehicleLicenseOCRRequest&;
    using Resp = VehicleLicenseOCRResponse;

    DoRequestAsync<Req, Resp>(
        "VehicleLicenseOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::VehicleLicenseOCROutcomeCallable OcrClient::VehicleLicenseOCRCallable(const VehicleLicenseOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<VehicleLicenseOCROutcome>>();
    VehicleLicenseOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const VehicleLicenseOCRRequest&,
        VehicleLicenseOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::VehicleRegCertOCROutcome OcrClient::VehicleRegCertOCR(const VehicleRegCertOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VehicleRegCertOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VehicleRegCertOCRResponse rsp = VehicleRegCertOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VehicleRegCertOCROutcome(rsp);
        else
            return VehicleRegCertOCROutcome(o.GetError());
    }
    else
    {
        return VehicleRegCertOCROutcome(outcome.GetError());
    }
}

void OcrClient::VehicleRegCertOCRAsync(const VehicleRegCertOCRRequest& request, const VehicleRegCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VehicleRegCertOCRRequest&;
    using Resp = VehicleRegCertOCRResponse;

    DoRequestAsync<Req, Resp>(
        "VehicleRegCertOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::VehicleRegCertOCROutcomeCallable OcrClient::VehicleRegCertOCRCallable(const VehicleRegCertOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<VehicleRegCertOCROutcome>>();
    VehicleRegCertOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const VehicleRegCertOCRRequest&,
        VehicleRegCertOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::VerifyOfdVatInvoiceOCROutcome OcrClient::VerifyOfdVatInvoiceOCR(const VerifyOfdVatInvoiceOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyOfdVatInvoiceOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyOfdVatInvoiceOCRResponse rsp = VerifyOfdVatInvoiceOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyOfdVatInvoiceOCROutcome(rsp);
        else
            return VerifyOfdVatInvoiceOCROutcome(o.GetError());
    }
    else
    {
        return VerifyOfdVatInvoiceOCROutcome(outcome.GetError());
    }
}

void OcrClient::VerifyOfdVatInvoiceOCRAsync(const VerifyOfdVatInvoiceOCRRequest& request, const VerifyOfdVatInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyOfdVatInvoiceOCRRequest&;
    using Resp = VerifyOfdVatInvoiceOCRResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyOfdVatInvoiceOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::VerifyOfdVatInvoiceOCROutcomeCallable OcrClient::VerifyOfdVatInvoiceOCRCallable(const VerifyOfdVatInvoiceOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyOfdVatInvoiceOCROutcome>>();
    VerifyOfdVatInvoiceOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const VerifyOfdVatInvoiceOCRRequest&,
        VerifyOfdVatInvoiceOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::VinOCROutcome OcrClient::VinOCR(const VinOCRRequest &request)
{
    auto outcome = MakeRequest(request, "VinOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VinOCRResponse rsp = VinOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VinOCROutcome(rsp);
        else
            return VinOCROutcome(o.GetError());
    }
    else
    {
        return VinOCROutcome(outcome.GetError());
    }
}

void OcrClient::VinOCRAsync(const VinOCRRequest& request, const VinOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VinOCRRequest&;
    using Resp = VinOCRResponse;

    DoRequestAsync<Req, Resp>(
        "VinOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::VinOCROutcomeCallable OcrClient::VinOCRCallable(const VinOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<VinOCROutcome>>();
    VinOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const VinOCRRequest&,
        VinOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OcrClient::WaybillOCROutcome OcrClient::WaybillOCR(const WaybillOCRRequest &request)
{
    auto outcome = MakeRequest(request, "WaybillOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WaybillOCRResponse rsp = WaybillOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WaybillOCROutcome(rsp);
        else
            return WaybillOCROutcome(o.GetError());
    }
    else
    {
        return WaybillOCROutcome(outcome.GetError());
    }
}

void OcrClient::WaybillOCRAsync(const WaybillOCRRequest& request, const WaybillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const WaybillOCRRequest&;
    using Resp = WaybillOCRResponse;

    DoRequestAsync<Req, Resp>(
        "WaybillOCR", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OcrClient::WaybillOCROutcomeCallable OcrClient::WaybillOCRCallable(const WaybillOCRRequest &request)
{
    const auto prom = std::make_shared<std::promise<WaybillOCROutcome>>();
    WaybillOCRAsync(
    request,
    [prom](
        const OcrClient*,
        const WaybillOCRRequest&,
        WaybillOCROutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

