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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AdvertiseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::AdvertiseOCROutcomeCallable OcrClient::AdvertiseOCRCallable(const AdvertiseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AdvertiseOCROutcome()>>(
        [this, request]()
        {
            return this->AdvertiseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ArithmeticOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::ArithmeticOCROutcomeCallable OcrClient::ArithmeticOCRCallable(const ArithmeticOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ArithmeticOCROutcome()>>(
        [this, request]()
        {
            return this->ArithmeticOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BankCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BankCardOCROutcomeCallable OcrClient::BankCardOCRCallable(const BankCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BankCardOCROutcome()>>(
        [this, request]()
        {
            return this->BankCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BankSlipOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BankSlipOCROutcomeCallable OcrClient::BankSlipOCRCallable(const BankSlipOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BankSlipOCROutcome()>>(
        [this, request]()
        {
            return this->BankSlipOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BizLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BizLicenseOCROutcomeCallable OcrClient::BizLicenseOCRCallable(const BizLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BizLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->BizLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BusInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BusInvoiceOCROutcomeCallable OcrClient::BusInvoiceOCRCallable(const BusInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BusInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->BusInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BusinessCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::BusinessCardOCROutcomeCallable OcrClient::BusinessCardOCRCallable(const BusinessCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BusinessCardOCROutcome()>>(
        [this, request]()
        {
            return this->BusinessCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CarInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::CarInvoiceOCROutcomeCallable OcrClient::CarInvoiceOCRCallable(const CarInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CarInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->CarInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClassifyDetectOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::ClassifyDetectOCROutcomeCallable OcrClient::ClassifyDetectOCRCallable(const ClassifyDetectOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClassifyDetectOCROutcome()>>(
        [this, request]()
        {
            return this->ClassifyDetectOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DriverLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::DriverLicenseOCROutcomeCallable OcrClient::DriverLicenseOCRCallable(const DriverLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DriverLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->DriverLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DutyPaidProofOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::DutyPaidProofOCROutcomeCallable OcrClient::DutyPaidProofOCRCallable(const DutyPaidProofOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DutyPaidProofOCROutcome()>>(
        [this, request]()
        {
            return this->DutyPaidProofOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EduPaperOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::EduPaperOCROutcomeCallable OcrClient::EduPaperOCRCallable(const EduPaperOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EduPaperOCROutcome()>>(
        [this, request]()
        {
            return this->EduPaperOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnglishOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::EnglishOCROutcomeCallable OcrClient::EnglishOCRCallable(const EnglishOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnglishOCROutcome()>>(
        [this, request]()
        {
            return this->EnglishOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnterpriseLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::EnterpriseLicenseOCROutcomeCallable OcrClient::EnterpriseLicenseOCRCallable(const EnterpriseLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnterpriseLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->EnterpriseLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EstateCertOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::EstateCertOCROutcomeCallable OcrClient::EstateCertOCRCallable(const EstateCertOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EstateCertOCROutcome()>>(
        [this, request]()
        {
            return this->EstateCertOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FinanBillOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::FinanBillOCROutcomeCallable OcrClient::FinanBillOCRCallable(const FinanBillOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FinanBillOCROutcome()>>(
        [this, request]()
        {
            return this->FinanBillOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FinanBillSliceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::FinanBillSliceOCROutcomeCallable OcrClient::FinanBillSliceOCRCallable(const FinanBillSliceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FinanBillSliceOCROutcome()>>(
        [this, request]()
        {
            return this->FinanBillSliceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FlightInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::FlightInvoiceOCROutcomeCallable OcrClient::FlightInvoiceOCRCallable(const FlightInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FlightInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->FlightInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FormulaOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::FormulaOCROutcomeCallable OcrClient::FormulaOCRCallable(const FormulaOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FormulaOCROutcome()>>(
        [this, request]()
        {
            return this->FormulaOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralAccurateOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralAccurateOCROutcomeCallable OcrClient::GeneralAccurateOCRCallable(const GeneralAccurateOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralAccurateOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralAccurateOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralBasicOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralBasicOCROutcomeCallable OcrClient::GeneralBasicOCRCallable(const GeneralBasicOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralBasicOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralBasicOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralEfficientOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralEfficientOCROutcomeCallable OcrClient::GeneralEfficientOCRCallable(const GeneralEfficientOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralEfficientOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralEfficientOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralFastOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralFastOCROutcomeCallable OcrClient::GeneralFastOCRCallable(const GeneralFastOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralFastOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralFastOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GeneralHandwritingOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::GeneralHandwritingOCROutcomeCallable OcrClient::GeneralHandwritingOCRCallable(const GeneralHandwritingOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GeneralHandwritingOCROutcome()>>(
        [this, request]()
        {
            return this->GeneralHandwritingOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HKIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::HKIDCardOCROutcomeCallable OcrClient::HKIDCardOCRCallable(const HKIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HKIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->HKIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HmtResidentPermitOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::HmtResidentPermitOCROutcomeCallable OcrClient::HmtResidentPermitOCRCallable(const HmtResidentPermitOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HmtResidentPermitOCROutcome()>>(
        [this, request]()
        {
            return this->HmtResidentPermitOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::IDCardOCROutcomeCallable OcrClient::IDCardOCRCallable(const IDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IDCardOCROutcome()>>(
        [this, request]()
        {
            return this->IDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::InstitutionOCROutcome OcrClient::InstitutionOCR(const InstitutionOCRRequest &request)
{
    auto outcome = MakeRequest(request, "InstitutionOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstitutionOCRResponse rsp = InstitutionOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstitutionOCROutcome(rsp);
        else
            return InstitutionOCROutcome(o.GetError());
    }
    else
    {
        return InstitutionOCROutcome(outcome.GetError());
    }
}

void OcrClient::InstitutionOCRAsync(const InstitutionOCRRequest& request, const InstitutionOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InstitutionOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::InstitutionOCROutcomeCallable OcrClient::InstitutionOCRCallable(const InstitutionOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InstitutionOCROutcome()>>(
        [this, request]()
        {
            return this->InstitutionOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InsuranceBillOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::InsuranceBillOCROutcomeCallable OcrClient::InsuranceBillOCRCallable(const InsuranceBillOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InsuranceBillOCROutcome()>>(
        [this, request]()
        {
            return this->InsuranceBillOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InvoiceGeneralOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::InvoiceGeneralOCROutcomeCallable OcrClient::InvoiceGeneralOCRCallable(const InvoiceGeneralOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InvoiceGeneralOCROutcome()>>(
        [this, request]()
        {
            return this->InvoiceGeneralOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LicensePlateOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::LicensePlateOCROutcomeCallable OcrClient::LicensePlateOCRCallable(const LicensePlateOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LicensePlateOCROutcome()>>(
        [this, request]()
        {
            return this->LicensePlateOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MLIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MLIDCardOCROutcomeCallable OcrClient::MLIDCardOCRCallable(const MLIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MLIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->MLIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MLIDPassportOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MLIDPassportOCROutcomeCallable OcrClient::MLIDPassportOCRCallable(const MLIDPassportOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MLIDPassportOCROutcome()>>(
        [this, request]()
        {
            return this->MLIDPassportOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MainlandPermitOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MainlandPermitOCROutcomeCallable OcrClient::MainlandPermitOCRCallable(const MainlandPermitOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MainlandPermitOCROutcome()>>(
        [this, request]()
        {
            return this->MainlandPermitOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MixedInvoiceDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MixedInvoiceDetectOutcomeCallable OcrClient::MixedInvoiceDetectCallable(const MixedInvoiceDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MixedInvoiceDetectOutcome()>>(
        [this, request]()
        {
            return this->MixedInvoiceDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MixedInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::MixedInvoiceOCROutcomeCallable OcrClient::MixedInvoiceOCRCallable(const MixedInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MixedInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->MixedInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::OrgCodeCertOCROutcome OcrClient::OrgCodeCertOCR(const OrgCodeCertOCRRequest &request)
{
    auto outcome = MakeRequest(request, "OrgCodeCertOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OrgCodeCertOCRResponse rsp = OrgCodeCertOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OrgCodeCertOCROutcome(rsp);
        else
            return OrgCodeCertOCROutcome(o.GetError());
    }
    else
    {
        return OrgCodeCertOCROutcome(outcome.GetError());
    }
}

void OcrClient::OrgCodeCertOCRAsync(const OrgCodeCertOCRRequest& request, const OrgCodeCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OrgCodeCertOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::OrgCodeCertOCROutcomeCallable OcrClient::OrgCodeCertOCRCallable(const OrgCodeCertOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OrgCodeCertOCROutcome()>>(
        [this, request]()
        {
            return this->OrgCodeCertOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PassportOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::PassportOCROutcomeCallable OcrClient::PassportOCRCallable(const PassportOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PassportOCROutcome()>>(
        [this, request]()
        {
            return this->PassportOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PermitOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::PermitOCROutcomeCallable OcrClient::PermitOCRCallable(const PermitOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PermitOCROutcome()>>(
        [this, request]()
        {
            return this->PermitOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::PropOwnerCertOCROutcome OcrClient::PropOwnerCertOCR(const PropOwnerCertOCRRequest &request)
{
    auto outcome = MakeRequest(request, "PropOwnerCertOCR");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PropOwnerCertOCRResponse rsp = PropOwnerCertOCRResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PropOwnerCertOCROutcome(rsp);
        else
            return PropOwnerCertOCROutcome(o.GetError());
    }
    else
    {
        return PropOwnerCertOCROutcome(outcome.GetError());
    }
}

void OcrClient::PropOwnerCertOCRAsync(const PropOwnerCertOCRRequest& request, const PropOwnerCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PropOwnerCertOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::PropOwnerCertOCROutcomeCallable OcrClient::PropOwnerCertOCRCallable(const PropOwnerCertOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PropOwnerCertOCROutcome()>>(
        [this, request]()
        {
            return this->PropOwnerCertOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QrcodeOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::QrcodeOCROutcomeCallable OcrClient::QrcodeOCRCallable(const QrcodeOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QrcodeOCROutcome()>>(
        [this, request]()
        {
            return this->QrcodeOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::QueryBarCodeOutcome OcrClient::QueryBarCode(const QueryBarCodeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryBarCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryBarCodeResponse rsp = QueryBarCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryBarCodeOutcome(rsp);
        else
            return QueryBarCodeOutcome(o.GetError());
    }
    else
    {
        return QueryBarCodeOutcome(outcome.GetError());
    }
}

void OcrClient::QueryBarCodeAsync(const QueryBarCodeRequest& request, const QueryBarCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryBarCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::QueryBarCodeOutcomeCallable OcrClient::QueryBarCodeCallable(const QueryBarCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryBarCodeOutcome()>>(
        [this, request]()
        {
            return this->QueryBarCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QuotaInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::QuotaInvoiceOCROutcomeCallable OcrClient::QuotaInvoiceOCRCallable(const QuotaInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QuotaInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->QuotaInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeOnlineTaxiItineraryOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeOnlineTaxiItineraryOCROutcomeCallable OcrClient::RecognizeOnlineTaxiItineraryOCRCallable(const RecognizeOnlineTaxiItineraryOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeOnlineTaxiItineraryOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeOnlineTaxiItineraryOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeTableOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeTableOCROutcomeCallable OcrClient::RecognizeTableOCRCallable(const RecognizeTableOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeTableOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeTableOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeThaiIDCardOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RecognizeThaiIDCardOCROutcomeCallable OcrClient::RecognizeThaiIDCardOCRCallable(const RecognizeThaiIDCardOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeThaiIDCardOCROutcome()>>(
        [this, request]()
        {
            return this->RecognizeThaiIDCardOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResidenceBookletOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::ResidenceBookletOCROutcomeCallable OcrClient::ResidenceBookletOCRCallable(const ResidenceBookletOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResidenceBookletOCROutcome()>>(
        [this, request]()
        {
            return this->ResidenceBookletOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RideHailingDriverLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RideHailingDriverLicenseOCROutcomeCallable OcrClient::RideHailingDriverLicenseOCRCallable(const RideHailingDriverLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RideHailingDriverLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->RideHailingDriverLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RideHailingTransportLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::RideHailingTransportLicenseOCROutcomeCallable OcrClient::RideHailingTransportLicenseOCRCallable(const RideHailingTransportLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RideHailingTransportLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->RideHailingTransportLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SealOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::SealOCROutcomeCallable OcrClient::SealOCRCallable(const SealOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SealOCROutcome()>>(
        [this, request]()
        {
            return this->SealOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ShipInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::ShipInvoiceOCROutcomeCallable OcrClient::ShipInvoiceOCRCallable(const ShipInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ShipInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->ShipInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SmartStructuralOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::SmartStructuralOCROutcomeCallable OcrClient::SmartStructuralOCRCallable(const SmartStructuralOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SmartStructuralOCROutcome()>>(
        [this, request]()
        {
            return this->SmartStructuralOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TableOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TableOCROutcomeCallable OcrClient::TableOCRCallable(const TableOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TableOCROutcome()>>(
        [this, request]()
        {
            return this->TableOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TaxiInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TaxiInvoiceOCROutcomeCallable OcrClient::TaxiInvoiceOCRCallable(const TaxiInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TaxiInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->TaxiInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextDetect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TextDetectOutcomeCallable OcrClient::TextDetectCallable(const TextDetectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextDetectOutcome()>>(
        [this, request]()
        {
            return this->TextDetect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TollInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TollInvoiceOCROutcomeCallable OcrClient::TollInvoiceOCRCallable(const TollInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TollInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->TollInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TrainTicketOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::TrainTicketOCROutcomeCallable OcrClient::TrainTicketOCRCallable(const TrainTicketOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TrainTicketOCROutcome()>>(
        [this, request]()
        {
            return this->TrainTicketOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VatInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VatInvoiceOCROutcomeCallable OcrClient::VatInvoiceOCRCallable(const VatInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VatInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->VatInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::VatInvoiceVerifyOutcome OcrClient::VatInvoiceVerify(const VatInvoiceVerifyRequest &request)
{
    auto outcome = MakeRequest(request, "VatInvoiceVerify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VatInvoiceVerifyResponse rsp = VatInvoiceVerifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VatInvoiceVerifyOutcome(rsp);
        else
            return VatInvoiceVerifyOutcome(o.GetError());
    }
    else
    {
        return VatInvoiceVerifyOutcome(outcome.GetError());
    }
}

void OcrClient::VatInvoiceVerifyAsync(const VatInvoiceVerifyRequest& request, const VatInvoiceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VatInvoiceVerify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VatInvoiceVerifyOutcomeCallable OcrClient::VatInvoiceVerifyCallable(const VatInvoiceVerifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VatInvoiceVerifyOutcome()>>(
        [this, request]()
        {
            return this->VatInvoiceVerify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VatRollInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VatRollInvoiceOCROutcomeCallable OcrClient::VatRollInvoiceOCRCallable(const VatRollInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VatRollInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->VatRollInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VehicleLicenseOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VehicleLicenseOCROutcomeCallable OcrClient::VehicleLicenseOCRCallable(const VehicleLicenseOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VehicleLicenseOCROutcome()>>(
        [this, request]()
        {
            return this->VehicleLicenseOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VehicleRegCertOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VehicleRegCertOCROutcomeCallable OcrClient::VehicleRegCertOCRCallable(const VehicleRegCertOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VehicleRegCertOCROutcome()>>(
        [this, request]()
        {
            return this->VehicleRegCertOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::VerifyBasicBizLicenseOutcome OcrClient::VerifyBasicBizLicense(const VerifyBasicBizLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyBasicBizLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyBasicBizLicenseResponse rsp = VerifyBasicBizLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyBasicBizLicenseOutcome(rsp);
        else
            return VerifyBasicBizLicenseOutcome(o.GetError());
    }
    else
    {
        return VerifyBasicBizLicenseOutcome(outcome.GetError());
    }
}

void OcrClient::VerifyBasicBizLicenseAsync(const VerifyBasicBizLicenseRequest& request, const VerifyBasicBizLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyBasicBizLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VerifyBasicBizLicenseOutcomeCallable OcrClient::VerifyBasicBizLicenseCallable(const VerifyBasicBizLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyBasicBizLicenseOutcome()>>(
        [this, request]()
        {
            return this->VerifyBasicBizLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::VerifyBizLicenseOutcome OcrClient::VerifyBizLicense(const VerifyBizLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyBizLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyBizLicenseResponse rsp = VerifyBizLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyBizLicenseOutcome(rsp);
        else
            return VerifyBizLicenseOutcome(o.GetError());
    }
    else
    {
        return VerifyBizLicenseOutcome(outcome.GetError());
    }
}

void OcrClient::VerifyBizLicenseAsync(const VerifyBizLicenseRequest& request, const VerifyBizLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyBizLicense(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VerifyBizLicenseOutcomeCallable OcrClient::VerifyBizLicenseCallable(const VerifyBizLicenseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyBizLicenseOutcome()>>(
        [this, request]()
        {
            return this->VerifyBizLicense(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OcrClient::VerifyEnterpriseFourFactorsOutcome OcrClient::VerifyEnterpriseFourFactors(const VerifyEnterpriseFourFactorsRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyEnterpriseFourFactors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyEnterpriseFourFactorsResponse rsp = VerifyEnterpriseFourFactorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyEnterpriseFourFactorsOutcome(rsp);
        else
            return VerifyEnterpriseFourFactorsOutcome(o.GetError());
    }
    else
    {
        return VerifyEnterpriseFourFactorsOutcome(outcome.GetError());
    }
}

void OcrClient::VerifyEnterpriseFourFactorsAsync(const VerifyEnterpriseFourFactorsRequest& request, const VerifyEnterpriseFourFactorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyEnterpriseFourFactors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VerifyEnterpriseFourFactorsOutcomeCallable OcrClient::VerifyEnterpriseFourFactorsCallable(const VerifyEnterpriseFourFactorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyEnterpriseFourFactorsOutcome()>>(
        [this, request]()
        {
            return this->VerifyEnterpriseFourFactors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyOfdVatInvoiceOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VerifyOfdVatInvoiceOCROutcomeCallable OcrClient::VerifyOfdVatInvoiceOCRCallable(const VerifyOfdVatInvoiceOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyOfdVatInvoiceOCROutcome()>>(
        [this, request]()
        {
            return this->VerifyOfdVatInvoiceOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VinOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::VinOCROutcomeCallable OcrClient::VinOCRCallable(const VinOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VinOCROutcome()>>(
        [this, request]()
        {
            return this->VinOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->WaybillOCR(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OcrClient::WaybillOCROutcomeCallable OcrClient::WaybillOCRCallable(const WaybillOCRRequest &request)
{
    auto task = std::make_shared<std::packaged_task<WaybillOCROutcome()>>(
        [this, request]()
        {
            return this->WaybillOCR(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

