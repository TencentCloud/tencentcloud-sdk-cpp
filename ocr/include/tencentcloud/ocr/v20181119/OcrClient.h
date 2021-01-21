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

#ifndef TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
#define TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ocr/v20181119/model/AdvertiseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/AdvertiseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/ArithmeticOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/ArithmeticOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/BankCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/BankCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/BizLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/BizLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/BusInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/BusInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/BusinessCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/BusinessCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/CarInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/CarInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/ClassifyDetectOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/ClassifyDetectOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/DriverLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/DriverLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/DutyPaidProofOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/DutyPaidProofOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/EduPaperOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/EduPaperOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/EnglishOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/EnglishOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/EnterpriseLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/EnterpriseLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/EstateCertOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/EstateCertOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/FinanBillOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/FinanBillOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/FinanBillSliceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/FinanBillSliceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/FlightInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/FlightInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/FormulaOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/FormulaOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralEfficientOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralEfficientOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralFastOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralFastOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralHandwritingOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralHandwritingOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/HmtResidentPermitOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/HmtResidentPermitOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/IDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/IDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/InstitutionOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/InstitutionOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/InsuranceBillOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/InsuranceBillOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/InvoiceGeneralOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/InvoiceGeneralOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/LicensePlateOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/LicensePlateOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MainlandPermitOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MainlandPermitOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MixedInvoiceDetectRequest.h>
#include <tencentcloud/ocr/v20181119/model/MixedInvoiceDetectResponse.h>
#include <tencentcloud/ocr/v20181119/model/MixedInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MixedInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/OrgCodeCertOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/OrgCodeCertOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/PassportOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/PassportOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/PermitOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/PermitOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/PropOwnerCertOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/PropOwnerCertOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/QrcodeOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/QrcodeOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/QueryBarCodeRequest.h>
#include <tencentcloud/ocr/v20181119/model/QueryBarCodeResponse.h>
#include <tencentcloud/ocr/v20181119/model/QuotaInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/QuotaInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTableOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTableOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/ResidenceBookletOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/ResidenceBookletOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RideHailingDriverLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RideHailingDriverLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RideHailingTransportLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RideHailingTransportLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/SealOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/SealOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/ShipInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/ShipInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/TaxiInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/TaxiInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/TextDetectRequest.h>
#include <tencentcloud/ocr/v20181119/model/TextDetectResponse.h>
#include <tencentcloud/ocr/v20181119/model/TollInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/TollInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/TrainTicketOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/TrainTicketOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceVerifyRequest.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceVerifyResponse.h>
#include <tencentcloud/ocr/v20181119/model/VatRollInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VatRollInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VehicleLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VehicleLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VehicleRegCertOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VehicleRegCertOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VerifyBasicBizLicenseRequest.h>
#include <tencentcloud/ocr/v20181119/model/VerifyBasicBizLicenseResponse.h>
#include <tencentcloud/ocr/v20181119/model/VerifyBizLicenseRequest.h>
#include <tencentcloud/ocr/v20181119/model/VerifyBizLicenseResponse.h>
#include <tencentcloud/ocr/v20181119/model/VerifyOfdVatInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VerifyOfdVatInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VinOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VinOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/WaybillOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/WaybillOCRResponse.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            class OcrClient : public AbstractClient
            {
            public:
                OcrClient(const Credential &credential, const std::string &region);
                OcrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AdvertiseOCRResponse> AdvertiseOCROutcome;
                typedef std::future<AdvertiseOCROutcome> AdvertiseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::AdvertiseOCRRequest&, AdvertiseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> AdvertiseOCRAsyncHandler;
                typedef Outcome<Error, Model::ArithmeticOCRResponse> ArithmeticOCROutcome;
                typedef std::future<ArithmeticOCROutcome> ArithmeticOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ArithmeticOCRRequest&, ArithmeticOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ArithmeticOCRAsyncHandler;
                typedef Outcome<Error, Model::BankCardOCRResponse> BankCardOCROutcome;
                typedef std::future<BankCardOCROutcome> BankCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BankCardOCRRequest&, BankCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardOCRAsyncHandler;
                typedef Outcome<Error, Model::BizLicenseOCRResponse> BizLicenseOCROutcome;
                typedef std::future<BizLicenseOCROutcome> BizLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BizLicenseOCRRequest&, BizLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BizLicenseOCRAsyncHandler;
                typedef Outcome<Error, Model::BusInvoiceOCRResponse> BusInvoiceOCROutcome;
                typedef std::future<BusInvoiceOCROutcome> BusInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BusInvoiceOCRRequest&, BusInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BusInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::BusinessCardOCRResponse> BusinessCardOCROutcome;
                typedef std::future<BusinessCardOCROutcome> BusinessCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BusinessCardOCRRequest&, BusinessCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BusinessCardOCRAsyncHandler;
                typedef Outcome<Error, Model::CarInvoiceOCRResponse> CarInvoiceOCROutcome;
                typedef std::future<CarInvoiceOCROutcome> CarInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::CarInvoiceOCRRequest&, CarInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> CarInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::ClassifyDetectOCRResponse> ClassifyDetectOCROutcome;
                typedef std::future<ClassifyDetectOCROutcome> ClassifyDetectOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ClassifyDetectOCRRequest&, ClassifyDetectOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClassifyDetectOCRAsyncHandler;
                typedef Outcome<Error, Model::DriverLicenseOCRResponse> DriverLicenseOCROutcome;
                typedef std::future<DriverLicenseOCROutcome> DriverLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::DriverLicenseOCRRequest&, DriverLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> DriverLicenseOCRAsyncHandler;
                typedef Outcome<Error, Model::DutyPaidProofOCRResponse> DutyPaidProofOCROutcome;
                typedef std::future<DutyPaidProofOCROutcome> DutyPaidProofOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::DutyPaidProofOCRRequest&, DutyPaidProofOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> DutyPaidProofOCRAsyncHandler;
                typedef Outcome<Error, Model::EduPaperOCRResponse> EduPaperOCROutcome;
                typedef std::future<EduPaperOCROutcome> EduPaperOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::EduPaperOCRRequest&, EduPaperOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EduPaperOCRAsyncHandler;
                typedef Outcome<Error, Model::EnglishOCRResponse> EnglishOCROutcome;
                typedef std::future<EnglishOCROutcome> EnglishOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::EnglishOCRRequest&, EnglishOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnglishOCRAsyncHandler;
                typedef Outcome<Error, Model::EnterpriseLicenseOCRResponse> EnterpriseLicenseOCROutcome;
                typedef std::future<EnterpriseLicenseOCROutcome> EnterpriseLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::EnterpriseLicenseOCRRequest&, EnterpriseLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnterpriseLicenseOCRAsyncHandler;
                typedef Outcome<Error, Model::EstateCertOCRResponse> EstateCertOCROutcome;
                typedef std::future<EstateCertOCROutcome> EstateCertOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::EstateCertOCRRequest&, EstateCertOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EstateCertOCRAsyncHandler;
                typedef Outcome<Error, Model::FinanBillOCRResponse> FinanBillOCROutcome;
                typedef std::future<FinanBillOCROutcome> FinanBillOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::FinanBillOCRRequest&, FinanBillOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> FinanBillOCRAsyncHandler;
                typedef Outcome<Error, Model::FinanBillSliceOCRResponse> FinanBillSliceOCROutcome;
                typedef std::future<FinanBillSliceOCROutcome> FinanBillSliceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::FinanBillSliceOCRRequest&, FinanBillSliceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> FinanBillSliceOCRAsyncHandler;
                typedef Outcome<Error, Model::FlightInvoiceOCRResponse> FlightInvoiceOCROutcome;
                typedef std::future<FlightInvoiceOCROutcome> FlightInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::FlightInvoiceOCRRequest&, FlightInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> FlightInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::FormulaOCRResponse> FormulaOCROutcome;
                typedef std::future<FormulaOCROutcome> FormulaOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::FormulaOCRRequest&, FormulaOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> FormulaOCRAsyncHandler;
                typedef Outcome<Error, Model::GeneralAccurateOCRResponse> GeneralAccurateOCROutcome;
                typedef std::future<GeneralAccurateOCROutcome> GeneralAccurateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralAccurateOCRRequest&, GeneralAccurateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralAccurateOCRAsyncHandler;
                typedef Outcome<Error, Model::GeneralBasicOCRResponse> GeneralBasicOCROutcome;
                typedef std::future<GeneralBasicOCROutcome> GeneralBasicOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralBasicOCRRequest&, GeneralBasicOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralBasicOCRAsyncHandler;
                typedef Outcome<Error, Model::GeneralEfficientOCRResponse> GeneralEfficientOCROutcome;
                typedef std::future<GeneralEfficientOCROutcome> GeneralEfficientOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralEfficientOCRRequest&, GeneralEfficientOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralEfficientOCRAsyncHandler;
                typedef Outcome<Error, Model::GeneralFastOCRResponse> GeneralFastOCROutcome;
                typedef std::future<GeneralFastOCROutcome> GeneralFastOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralFastOCRRequest&, GeneralFastOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralFastOCRAsyncHandler;
                typedef Outcome<Error, Model::GeneralHandwritingOCRResponse> GeneralHandwritingOCROutcome;
                typedef std::future<GeneralHandwritingOCROutcome> GeneralHandwritingOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralHandwritingOCRRequest&, GeneralHandwritingOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralHandwritingOCRAsyncHandler;
                typedef Outcome<Error, Model::HKIDCardOCRResponse> HKIDCardOCROutcome;
                typedef std::future<HKIDCardOCROutcome> HKIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::HKIDCardOCRRequest&, HKIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> HKIDCardOCRAsyncHandler;
                typedef Outcome<Error, Model::HmtResidentPermitOCRResponse> HmtResidentPermitOCROutcome;
                typedef std::future<HmtResidentPermitOCROutcome> HmtResidentPermitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::HmtResidentPermitOCRRequest&, HmtResidentPermitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> HmtResidentPermitOCRAsyncHandler;
                typedef Outcome<Error, Model::IDCardOCRResponse> IDCardOCROutcome;
                typedef std::future<IDCardOCROutcome> IDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::IDCardOCRRequest&, IDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> IDCardOCRAsyncHandler;
                typedef Outcome<Error, Model::InstitutionOCRResponse> InstitutionOCROutcome;
                typedef std::future<InstitutionOCROutcome> InstitutionOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::InstitutionOCRRequest&, InstitutionOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstitutionOCRAsyncHandler;
                typedef Outcome<Error, Model::InsuranceBillOCRResponse> InsuranceBillOCROutcome;
                typedef std::future<InsuranceBillOCROutcome> InsuranceBillOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::InsuranceBillOCRRequest&, InsuranceBillOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> InsuranceBillOCRAsyncHandler;
                typedef Outcome<Error, Model::InvoiceGeneralOCRResponse> InvoiceGeneralOCROutcome;
                typedef std::future<InvoiceGeneralOCROutcome> InvoiceGeneralOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::InvoiceGeneralOCRRequest&, InvoiceGeneralOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvoiceGeneralOCRAsyncHandler;
                typedef Outcome<Error, Model::LicensePlateOCRResponse> LicensePlateOCROutcome;
                typedef std::future<LicensePlateOCROutcome> LicensePlateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::LicensePlateOCRRequest&, LicensePlateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> LicensePlateOCRAsyncHandler;
                typedef Outcome<Error, Model::MLIDCardOCRResponse> MLIDCardOCROutcome;
                typedef std::future<MLIDCardOCROutcome> MLIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDCardOCRRequest&, MLIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDCardOCRAsyncHandler;
                typedef Outcome<Error, Model::MLIDPassportOCRResponse> MLIDPassportOCROutcome;
                typedef std::future<MLIDPassportOCROutcome> MLIDPassportOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDPassportOCRRequest&, MLIDPassportOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDPassportOCRAsyncHandler;
                typedef Outcome<Error, Model::MainlandPermitOCRResponse> MainlandPermitOCROutcome;
                typedef std::future<MainlandPermitOCROutcome> MainlandPermitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MainlandPermitOCRRequest&, MainlandPermitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MainlandPermitOCRAsyncHandler;
                typedef Outcome<Error, Model::MixedInvoiceDetectResponse> MixedInvoiceDetectOutcome;
                typedef std::future<MixedInvoiceDetectOutcome> MixedInvoiceDetectOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MixedInvoiceDetectRequest&, MixedInvoiceDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MixedInvoiceDetectAsyncHandler;
                typedef Outcome<Error, Model::MixedInvoiceOCRResponse> MixedInvoiceOCROutcome;
                typedef std::future<MixedInvoiceOCROutcome> MixedInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MixedInvoiceOCRRequest&, MixedInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MixedInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::OrgCodeCertOCRResponse> OrgCodeCertOCROutcome;
                typedef std::future<OrgCodeCertOCROutcome> OrgCodeCertOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::OrgCodeCertOCRRequest&, OrgCodeCertOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> OrgCodeCertOCRAsyncHandler;
                typedef Outcome<Error, Model::PassportOCRResponse> PassportOCROutcome;
                typedef std::future<PassportOCROutcome> PassportOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::PassportOCRRequest&, PassportOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> PassportOCRAsyncHandler;
                typedef Outcome<Error, Model::PermitOCRResponse> PermitOCROutcome;
                typedef std::future<PermitOCROutcome> PermitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::PermitOCRRequest&, PermitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> PermitOCRAsyncHandler;
                typedef Outcome<Error, Model::PropOwnerCertOCRResponse> PropOwnerCertOCROutcome;
                typedef std::future<PropOwnerCertOCROutcome> PropOwnerCertOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::PropOwnerCertOCRRequest&, PropOwnerCertOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> PropOwnerCertOCRAsyncHandler;
                typedef Outcome<Error, Model::QrcodeOCRResponse> QrcodeOCROutcome;
                typedef std::future<QrcodeOCROutcome> QrcodeOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::QrcodeOCRRequest&, QrcodeOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> QrcodeOCRAsyncHandler;
                typedef Outcome<Error, Model::QueryBarCodeResponse> QueryBarCodeOutcome;
                typedef std::future<QueryBarCodeOutcome> QueryBarCodeOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::QueryBarCodeRequest&, QueryBarCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBarCodeAsyncHandler;
                typedef Outcome<Error, Model::QuotaInvoiceOCRResponse> QuotaInvoiceOCROutcome;
                typedef std::future<QuotaInvoiceOCROutcome> QuotaInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::QuotaInvoiceOCRRequest&, QuotaInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuotaInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::RecognizeTableOCRResponse> RecognizeTableOCROutcome;
                typedef std::future<RecognizeTableOCROutcome> RecognizeTableOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeTableOCRRequest&, RecognizeTableOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTableOCRAsyncHandler;
                typedef Outcome<Error, Model::RecognizeThaiIDCardOCRResponse> RecognizeThaiIDCardOCROutcome;
                typedef std::future<RecognizeThaiIDCardOCROutcome> RecognizeThaiIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeThaiIDCardOCRRequest&, RecognizeThaiIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeThaiIDCardOCRAsyncHandler;
                typedef Outcome<Error, Model::ResidenceBookletOCRResponse> ResidenceBookletOCROutcome;
                typedef std::future<ResidenceBookletOCROutcome> ResidenceBookletOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ResidenceBookletOCRRequest&, ResidenceBookletOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResidenceBookletOCRAsyncHandler;
                typedef Outcome<Error, Model::RideHailingDriverLicenseOCRResponse> RideHailingDriverLicenseOCROutcome;
                typedef std::future<RideHailingDriverLicenseOCROutcome> RideHailingDriverLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RideHailingDriverLicenseOCRRequest&, RideHailingDriverLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RideHailingDriverLicenseOCRAsyncHandler;
                typedef Outcome<Error, Model::RideHailingTransportLicenseOCRResponse> RideHailingTransportLicenseOCROutcome;
                typedef std::future<RideHailingTransportLicenseOCROutcome> RideHailingTransportLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RideHailingTransportLicenseOCRRequest&, RideHailingTransportLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RideHailingTransportLicenseOCRAsyncHandler;
                typedef Outcome<Error, Model::SealOCRResponse> SealOCROutcome;
                typedef std::future<SealOCROutcome> SealOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::SealOCRRequest&, SealOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> SealOCRAsyncHandler;
                typedef Outcome<Error, Model::ShipInvoiceOCRResponse> ShipInvoiceOCROutcome;
                typedef std::future<ShipInvoiceOCROutcome> ShipInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ShipInvoiceOCRRequest&, ShipInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ShipInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::TableOCRResponse> TableOCROutcome;
                typedef std::future<TableOCROutcome> TableOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TableOCRRequest&, TableOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TableOCRAsyncHandler;
                typedef Outcome<Error, Model::TaxiInvoiceOCRResponse> TaxiInvoiceOCROutcome;
                typedef std::future<TaxiInvoiceOCROutcome> TaxiInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TaxiInvoiceOCRRequest&, TaxiInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TaxiInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::TextDetectResponse> TextDetectOutcome;
                typedef std::future<TextDetectOutcome> TextDetectOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TextDetectRequest&, TextDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextDetectAsyncHandler;
                typedef Outcome<Error, Model::TollInvoiceOCRResponse> TollInvoiceOCROutcome;
                typedef std::future<TollInvoiceOCROutcome> TollInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TollInvoiceOCRRequest&, TollInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TollInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::TrainTicketOCRResponse> TrainTicketOCROutcome;
                typedef std::future<TrainTicketOCROutcome> TrainTicketOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TrainTicketOCRRequest&, TrainTicketOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrainTicketOCRAsyncHandler;
                typedef Outcome<Error, Model::VatInvoiceOCRResponse> VatInvoiceOCROutcome;
                typedef std::future<VatInvoiceOCROutcome> VatInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VatInvoiceOCRRequest&, VatInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VatInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::VatInvoiceVerifyResponse> VatInvoiceVerifyOutcome;
                typedef std::future<VatInvoiceVerifyOutcome> VatInvoiceVerifyOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VatInvoiceVerifyRequest&, VatInvoiceVerifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VatInvoiceVerifyAsyncHandler;
                typedef Outcome<Error, Model::VatRollInvoiceOCRResponse> VatRollInvoiceOCROutcome;
                typedef std::future<VatRollInvoiceOCROutcome> VatRollInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VatRollInvoiceOCRRequest&, VatRollInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VatRollInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::VehicleLicenseOCRResponse> VehicleLicenseOCROutcome;
                typedef std::future<VehicleLicenseOCROutcome> VehicleLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VehicleLicenseOCRRequest&, VehicleLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VehicleLicenseOCRAsyncHandler;
                typedef Outcome<Error, Model::VehicleRegCertOCRResponse> VehicleRegCertOCROutcome;
                typedef std::future<VehicleRegCertOCROutcome> VehicleRegCertOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VehicleRegCertOCRRequest&, VehicleRegCertOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VehicleRegCertOCRAsyncHandler;
                typedef Outcome<Error, Model::VerifyBasicBizLicenseResponse> VerifyBasicBizLicenseOutcome;
                typedef std::future<VerifyBasicBizLicenseOutcome> VerifyBasicBizLicenseOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VerifyBasicBizLicenseRequest&, VerifyBasicBizLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyBasicBizLicenseAsyncHandler;
                typedef Outcome<Error, Model::VerifyBizLicenseResponse> VerifyBizLicenseOutcome;
                typedef std::future<VerifyBizLicenseOutcome> VerifyBizLicenseOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VerifyBizLicenseRequest&, VerifyBizLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyBizLicenseAsyncHandler;
                typedef Outcome<Error, Model::VerifyOfdVatInvoiceOCRResponse> VerifyOfdVatInvoiceOCROutcome;
                typedef std::future<VerifyOfdVatInvoiceOCROutcome> VerifyOfdVatInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VerifyOfdVatInvoiceOCRRequest&, VerifyOfdVatInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyOfdVatInvoiceOCRAsyncHandler;
                typedef Outcome<Error, Model::VinOCRResponse> VinOCROutcome;
                typedef std::future<VinOCROutcome> VinOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VinOCRRequest&, VinOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VinOCRAsyncHandler;
                typedef Outcome<Error, Model::WaybillOCRResponse> WaybillOCROutcome;
                typedef std::future<WaybillOCROutcome> WaybillOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::WaybillOCRRequest&, WaybillOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> WaybillOCRAsyncHandler;



                /**
                 *本接口支持广告商品图片内文字的检测和识别，返回文本框位置与文字内容。

产品优势：针对广告商品图片普遍存在较多繁体字、艺术字的特点，进行了识别能力的增强。支持中英文、横排、竖排以及倾斜场景文字识别。文字识别的召回率和准确率能达到96%以上。
                 * @param req AdvertiseOCRRequest
                 * @return AdvertiseOCROutcome
                 */
                AdvertiseOCROutcome AdvertiseOCR(const Model::AdvertiseOCRRequest &request);
                void AdvertiseOCRAsync(const Model::AdvertiseOCRRequest& request, const AdvertiseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AdvertiseOCROutcomeCallable AdvertiseOCRCallable(const Model::AdvertiseOCRRequest& request);

                /**
                 *本接口支持作业算式题目的自动识别，目前覆盖 K12 学力范围内的 14 种题型，包括加减乘除四则运算、分数四则运算、竖式四则运算、脱式计算等。
                 * @param req ArithmeticOCRRequest
                 * @return ArithmeticOCROutcome
                 */
                ArithmeticOCROutcome ArithmeticOCR(const Model::ArithmeticOCRRequest &request);
                void ArithmeticOCRAsync(const Model::ArithmeticOCRRequest& request, const ArithmeticOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ArithmeticOCROutcomeCallable ArithmeticOCRCallable(const Model::ArithmeticOCRRequest& request);

                /**
                 *本接口支持对中国大陆主流银行卡正反面关键字段的检测与识别，包括卡号、卡类型、卡名字、银行信息、有效期。支持竖排异形卡识别、多角度旋转图片识别。支持对复印件、翻拍件、边框遮挡的银行卡进行告警，可应用于各种银行卡信息有效性校验场景，如金融行业身份认证、第三方支付绑卡等场景。
                 * @param req BankCardOCRRequest
                 * @return BankCardOCROutcome
                 */
                BankCardOCROutcome BankCardOCR(const Model::BankCardOCRRequest &request);
                void BankCardOCRAsync(const Model::BankCardOCRRequest& request, const BankCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCardOCROutcomeCallable BankCardOCRCallable(const Model::BankCardOCRRequest& request);

                /**
                 *本接口支持快速精准识别营业执照上的字段，包括统一社会信用代码、公司名称、经营场所、主体类型、法定代表人、注册资金、组成形式、成立日期、营业期限和经营范围等字段。
                 * @param req BizLicenseOCRRequest
                 * @return BizLicenseOCROutcome
                 */
                BizLicenseOCROutcome BizLicenseOCR(const Model::BizLicenseOCRRequest &request);
                void BizLicenseOCRAsync(const Model::BizLicenseOCRRequest& request, const BizLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BizLicenseOCROutcomeCallable BizLicenseOCRCallable(const Model::BizLicenseOCRRequest& request);

                /**
                 *本接口支持识别公路汽车客票的发票代码、发票号码、日期、姓名、票价等字段。
                 * @param req BusInvoiceOCRRequest
                 * @return BusInvoiceOCROutcome
                 */
                BusInvoiceOCROutcome BusInvoiceOCR(const Model::BusInvoiceOCRRequest &request);
                void BusInvoiceOCRAsync(const Model::BusInvoiceOCRRequest& request, const BusInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BusInvoiceOCROutcomeCallable BusInvoiceOCRCallable(const Model::BusInvoiceOCRRequest& request);

                /**
                 *本接口支持名片各字段的自动定位与识别，包含姓名、电话、手机号、邮箱、公司、部门、职位、网址、地址、QQ、微信、MSN等。
                 * @param req BusinessCardOCRRequest
                 * @return BusinessCardOCROutcome
                 */
                BusinessCardOCROutcome BusinessCardOCR(const Model::BusinessCardOCRRequest &request);
                void BusinessCardOCRAsync(const Model::BusinessCardOCRRequest& request, const BusinessCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BusinessCardOCROutcomeCallable BusinessCardOCRCallable(const Model::BusinessCardOCRRequest& request);

                /**
                 *本接口支持机动车销售统一发票和二手车销售统一发票的识别，包括发票号码、发票代码、合计金额、合计税额等二十多个字段。
                 * @param req CarInvoiceOCRRequest
                 * @return CarInvoiceOCROutcome
                 */
                CarInvoiceOCROutcome CarInvoiceOCR(const Model::CarInvoiceOCRRequest &request);
                void CarInvoiceOCRAsync(const Model::CarInvoiceOCRRequest& request, const CarInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CarInvoiceOCROutcomeCallable CarInvoiceOCRCallable(const Model::CarInvoiceOCRRequest& request);

                /**
                 *支持身份证、护照、名片、银行卡、行驶证、驾驶证、港澳台通行证、户口本、港澳台来往内地通行证、港澳台居住证、不动产证、营业执照的智能分类。

                 * @param req ClassifyDetectOCRRequest
                 * @return ClassifyDetectOCROutcome
                 */
                ClassifyDetectOCROutcome ClassifyDetectOCR(const Model::ClassifyDetectOCRRequest &request);
                void ClassifyDetectOCRAsync(const Model::ClassifyDetectOCRRequest& request, const ClassifyDetectOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClassifyDetectOCROutcomeCallable ClassifyDetectOCRCallable(const Model::ClassifyDetectOCRRequest& request);

                /**
                 *本接口支持驾驶证主页和副页所有字段的自动定位与识别，重点字段的识别准确度达到99%以上。

驾驶证主页：包括证号、姓名、性别、国籍、住址、出生日期、初次领证日期、准驾车型、有效期限、发证单位

驾驶证副页：包括证号、姓名、档案编号、记录。

另外，本接口还支持复印件、翻拍和PS告警功能。
                 * @param req DriverLicenseOCRRequest
                 * @return DriverLicenseOCROutcome
                 */
                DriverLicenseOCROutcome DriverLicenseOCR(const Model::DriverLicenseOCRRequest &request);
                void DriverLicenseOCRAsync(const Model::DriverLicenseOCRRequest& request, const DriverLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DriverLicenseOCROutcomeCallable DriverLicenseOCRCallable(const Model::DriverLicenseOCRRequest& request);

                /**
                 *本接口支持对完税证明的税号、纳税人识别号、纳税人名称、金额合计大写、金额合计小写、填发日期、税务机关、填票人等关键字段的识别。
                 * @param req DutyPaidProofOCRRequest
                 * @return DutyPaidProofOCROutcome
                 */
                DutyPaidProofOCROutcome DutyPaidProofOCR(const Model::DutyPaidProofOCRRequest &request);
                void DutyPaidProofOCRAsync(const Model::DutyPaidProofOCRRequest& request, const DutyPaidProofOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DutyPaidProofOCROutcomeCallable DutyPaidProofOCRCallable(const Model::DutyPaidProofOCRRequest& request);

                /**
                 *本接口支持数学试题内容的识别和结构化输出，包括通用文本解析和小学/初中/高中数学公式解析能力（包括91种题型，180种符号）。
                 * @param req EduPaperOCRRequest
                 * @return EduPaperOCROutcome
                 */
                EduPaperOCROutcome EduPaperOCR(const Model::EduPaperOCRRequest &request);
                void EduPaperOCRAsync(const Model::EduPaperOCRRequest& request, const EduPaperOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EduPaperOCROutcomeCallable EduPaperOCRCallable(const Model::EduPaperOCRRequest& request);

                /**
                 *本接口支持图像英文文字的检测和识别，返回文字框位置与文字内容。支持多场景、任意版面下的英文、字母、数字和常见字符的识别，同时覆盖英文印刷体和英文手写体识别。
                 * @param req EnglishOCRRequest
                 * @return EnglishOCROutcome
                 */
                EnglishOCROutcome EnglishOCR(const Model::EnglishOCRRequest &request);
                void EnglishOCRAsync(const Model::EnglishOCRRequest& request, const EnglishOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnglishOCROutcomeCallable EnglishOCRCallable(const Model::EnglishOCRRequest& request);

                /**
                 *本接口支持智能化识别各类企业登记证书、许可证书、企业执照、三证合一类证书，结构化输出统一社会信用代码、公司名称、法定代表人、公司地址、注册资金、企业类型、经营范围等关键字段。
                 * @param req EnterpriseLicenseOCRRequest
                 * @return EnterpriseLicenseOCROutcome
                 */
                EnterpriseLicenseOCROutcome EnterpriseLicenseOCR(const Model::EnterpriseLicenseOCRRequest &request);
                void EnterpriseLicenseOCRAsync(const Model::EnterpriseLicenseOCRRequest& request, const EnterpriseLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnterpriseLicenseOCROutcomeCallable EnterpriseLicenseOCRCallable(const Model::EnterpriseLicenseOCRRequest& request);

                /**
                 *本接口支持不动产权证关键字段的识别，包括使用期限、面积、用途、权利性质、权利类型、坐落、共有情况、权利人、权利其他状况等。



                 * @param req EstateCertOCRRequest
                 * @return EstateCertOCROutcome
                 */
                EstateCertOCROutcome EstateCertOCR(const Model::EstateCertOCRRequest &request);
                void EstateCertOCRAsync(const Model::EstateCertOCRRequest& request, const EstateCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EstateCertOCROutcomeCallable EstateCertOCRCallable(const Model::EstateCertOCRRequest& request);

                /**
                 *本接口支持常见银行票据的自动分类和识别。整单识别包括支票（含现金支票、普通支票、转账支票），承兑汇票（含银行承兑汇票、商业承兑汇票）以及进账单等，适用于中国人民银行印发的 2010 版银行票据凭证版式（银发[2010]299 号）。
                 * @param req FinanBillOCRRequest
                 * @return FinanBillOCROutcome
                 */
                FinanBillOCROutcome FinanBillOCR(const Model::FinanBillOCRRequest &request);
                void FinanBillOCRAsync(const Model::FinanBillOCRRequest& request, const FinanBillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FinanBillOCROutcomeCallable FinanBillOCRCallable(const Model::FinanBillOCRRequest& request);

                /**
                 *本接口支持常见银行票据的自动分类和识别。切片识别包括金融行业常见票据的重要切片字段识别，包括金额、账号、日期、凭证号码等。（金融票据切片：金融票据中待识别字段及其周围局部区域的裁剪图像。）
                 * @param req FinanBillSliceOCRRequest
                 * @return FinanBillSliceOCROutcome
                 */
                FinanBillSliceOCROutcome FinanBillSliceOCR(const Model::FinanBillSliceOCRRequest &request);
                void FinanBillSliceOCRAsync(const Model::FinanBillSliceOCRRequest& request, const FinanBillSliceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FinanBillSliceOCROutcomeCallable FinanBillSliceOCRCallable(const Model::FinanBillSliceOCRRequest& request);

                /**
                 *本接口支持机票行程单关键字段的识别，包括姓名、身份证件号码、航班号、票价 、合计、电子客票号码、填开日期等。
                 * @param req FlightInvoiceOCRRequest
                 * @return FlightInvoiceOCROutcome
                 */
                FlightInvoiceOCROutcome FlightInvoiceOCR(const Model::FlightInvoiceOCRRequest &request);
                void FlightInvoiceOCRAsync(const Model::FlightInvoiceOCRRequest& request, const FlightInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FlightInvoiceOCROutcomeCallable FlightInvoiceOCRCallable(const Model::FlightInvoiceOCRRequest& request);

                /**
                 *本接口支持识别主流初高中数学符号和公式，返回公式的 Latex 格式文本。
                 * @param req FormulaOCRRequest
                 * @return FormulaOCROutcome
                 */
                FormulaOCROutcome FormulaOCR(const Model::FormulaOCRRequest &request);
                void FormulaOCRAsync(const Model::FormulaOCRRequest& request, const FormulaOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FormulaOCROutcomeCallable FormulaOCRCallable(const Model::FormulaOCRRequest& request);

                /**
                 *本接口支持图像整体文字的检测和识别。支持中文、英文、中英文、数字和特殊字符号的识别，并返回文字框位置和文字内容。

适用于文字较多、版式复杂、对识别准召率要求较高的场景，如试卷试题、网络图片、街景店招牌、法律卷宗等场景。

产品优势：与通用印刷体识别相比，提供更高精度的文字识别服务，在文字较多、长串数字、小字、模糊字、倾斜文本等困难场景下，高精度版的准确率和召回率更高。

通用印刷体识别不同版本的差异如下：
<table style="width:715px">
      <thead>
        <tr>
          <th style="width:150px"></th>
          <th >【荐】通用印刷体识别（高精度版）</th>
          <th style="width:200px"><a href="https://cloud.tencent.com/document/product/866/33526">【荐】通用印刷体识别</a></th>
          <th><a href="https://cloud.tencent.com/document/product/866/37831">通用印刷体识别（精简版）</a></th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td> 适用场景</td>
          <td>适用于文字较多、长串数字、小字、模糊字、倾斜文本等困难场景</td>
          <td>适用于所有通用场景的印刷体识别</td>
          <td>适用于快速文本识别场景，准召率有一定损失，价格更优惠</td>
        </tr>
        <tr>
          <td>识别准确率</td>
          <td>99%</td>
          <td>96%</td>
          <td>91%</td>
        </tr>
        <tr>
          <td>价格</td>
          <td>高</td>
          <td>中</td>
          <td>低</td>
        </tr>
        <tr>
          <td>支持的语言</td>
          <td>中文、英文、中英文</td>
          <td>中文、英文、中英文、日语、韩语、西班牙语、法语、德语、葡萄牙语、越南语、马来语、俄语、意大利语、荷兰语、瑞典语、芬兰语、丹麦语、挪威语、匈牙利语、泰语</td>  
          <td>中文、英文、中英文</td>
        </tr>
        <tr>
          <td>自动语言检测</td>
          <td>支持</td>
          <td>支持</td>  
          <td>支持</td>
        </tr>
        <tr>
          <td>返回文本行坐标</td>
          <td>支持</td>
          <td>支持</td>
          <td>支持</td>
        </tr>
        <tr>
          <td>自动旋转纠正</td>
          <td>支持旋转识别，返回角度信息</td>
          <td>支持旋转识别，返回角度信息</td>
          <td>支持旋转识别，返回角度信息</td>
        </tr>
      </tbody>
    </table>
                 * @param req GeneralAccurateOCRRequest
                 * @return GeneralAccurateOCROutcome
                 */
                GeneralAccurateOCROutcome GeneralAccurateOCR(const Model::GeneralAccurateOCRRequest &request);
                void GeneralAccurateOCRAsync(const Model::GeneralAccurateOCRRequest& request, const GeneralAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralAccurateOCROutcomeCallable GeneralAccurateOCRCallable(const Model::GeneralAccurateOCRRequest& request);

                /**
                 *本接口支持图像整体文字的检测和识别。可以识别中文、英文、中英文、日语、韩语、西班牙语、法语、德语、葡萄牙语、越南语、马来语、俄语、意大利语、荷兰语、瑞典语、芬兰语、丹麦语、挪威语、匈牙利语、泰语，阿拉伯语20种语言，且各种语言均支持与英文混合的文字识别。

适用于印刷文档识别、网络图片识别、广告图文字识别、街景店招牌识别、菜单识别、视频标题识别、头像文字识别等场景。

产品优势：支持自动识别语言类型，可返回文本框坐标信息，对于倾斜文本支持自动旋转纠正。

通用印刷体识别不同版本的差异如下：
<table style="width:715px">
      <thead>
        <tr>
          <th style="width:150px"></th>
          <th style="width:200px">【荐】通用印刷体识别</th>
          <th ><a href="https://cloud.tencent.com/document/product/866/34937">【荐】通用印刷体识别（高精度版）</a></th>
          <th><a href="https://cloud.tencent.com/document/product/866/37831">通用印刷体识别（精简版）</a></th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td> 适用场景</td>
          <td>适用于所有通用场景的印刷体识别</td>
          <td>适用于文字较多、长串数字、小字、模糊字、倾斜文本等困难场景</td>
          <td>适用于快速文本识别场景，准召率有一定损失，价格更优惠</td>
        </tr>
        <tr>
          <td>识别准确率</td>
          <td>96%</td>
          <td>99%</td>
          <td>91%</td>
        </tr>
        <tr>
          <td>价格</td>
          <td>中</td>
          <td>高</td>
          <td>低</td>
        </tr>
        <tr>
          <td>支持的语言</td>
          <td>中文、英文、中英文、日语、韩语、西班牙语、法语、德语、葡萄牙语、越南语、马来语、俄语、意大利语、荷兰语、瑞典语、芬兰语、丹麦语、挪威语、匈牙利语、泰语</td>
          <td>中文、英文、中英文</td>
          <td>中文、英文、中英文</td>
        </tr>
        <tr>
          <td>自动语言检测</td>
          <td>支持</td>
          <td>支持</td>
          <td>支持</td>
        </tr>
        <tr>
          <td>返回文本行坐标</td>
          <td>支持</td>
          <td>支持</td>
          <td>支持</td>
        </tr>
        <tr>
          <td>自动旋转纠正</td>
          <td>支持旋转识别，返回角度信息</td>
          <td>支持旋转识别，不支持角度返回</td>
          <td>支持旋转识别，返回角度信息</td>
        </tr>
      </tbody>
    </table>
                 * @param req GeneralBasicOCRRequest
                 * @return GeneralBasicOCROutcome
                 */
                GeneralBasicOCROutcome GeneralBasicOCR(const Model::GeneralBasicOCRRequest &request);
                void GeneralBasicOCRAsync(const Model::GeneralBasicOCRRequest& request, const GeneralBasicOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralBasicOCROutcomeCallable GeneralBasicOCRCallable(const Model::GeneralBasicOCRRequest& request);

                /**
                 *本接口支持图像整体文字的检测和识别。支持中文、英文、中英文、数字和特殊字符号的识别，并返回文字框位置和文字内容。

适用于快速文本识别场景。

产品优势：与通用印刷体识别接口相比，精简版虽然在准确率和召回率上有一定损失，但价格更加优惠。

通用印刷体识别不同版本的差异如下：
<table style="width:715px">
      <thead>
        <tr>
          <th style="width:150px"></th>
          <th >通用印刷体识别（精简版）</th>
          <th style="width:200px"><a href="https://cloud.tencent.com/document/product/866/33526">【荐】通用印刷体识别</a></th>
          <th><a href="https://cloud.tencent.com/document/product/866/34937">【荐】通用印刷体识别（高精度版）</a></th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td> 适用场景</td>
          <td>适用于快速文本识别场景，准召率有一定损失，价格更优惠</td>
          <td>适用于所有通用场景的印刷体识别</td>
          <td>适用于文字较多、长串数字、小字、模糊字、倾斜文本等困难场景</td>
          
          
        </tr>
        <tr>
          <td>识别准确率</td>
          <td>91%</td>
          <td>96%</td>
          <td>99%</td>
          
          
        </tr>
        <tr>
          <td>价格</td>
          <td>低</td>
          <td>中</td>
          <td>高</td>
          
          
        </tr>
        <tr>
          <td>支持的语言</td>
          <td>中文、英文、中英文</td>
          <td>中文、英文、中英文、日语、韩语、西班牙语、法语、德语、葡萄牙语、越南语、马来语、俄语、意大利语、荷兰语、瑞典语、芬兰语、丹麦语、挪威语、匈牙利语、泰语</td>  
          <td>中文、英文、中英文</td>
          
          
        </tr>
        <tr>
          <td>自动语言检测</td>
          <td>支持</td>
          <td>支持</td>  
          <td>支持</td>
          
          
        </tr>
        <tr>
          <td>返回文本行坐标</td>
          <td>支持</td>
          <td>支持</td>
          <td>支持</td>
          
          
        </tr>
        <tr>
          <td>自动旋转纠正</td>
          <td>支持旋转识别，返回角度信息</td>
          <td>支持旋转识别，返回角度信息</td>
          <td>支持旋转识别，不支持角度返回</td>
          
         
        </tr>
      </tbody>
    </table>
                 * @param req GeneralEfficientOCRRequest
                 * @return GeneralEfficientOCROutcome
                 */
                GeneralEfficientOCROutcome GeneralEfficientOCR(const Model::GeneralEfficientOCRRequest &request);
                void GeneralEfficientOCRAsync(const Model::GeneralEfficientOCRRequest& request, const GeneralEfficientOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralEfficientOCROutcomeCallable GeneralEfficientOCRCallable(const Model::GeneralEfficientOCRRequest& request);

                /**
                 *本接口支持图片中整体文字的检测和识别，返回文字框位置与文字内容。相比通用印刷体识别接口，识别速度更快、支持的 QPS 更高。
                 * @param req GeneralFastOCRRequest
                 * @return GeneralFastOCROutcome
                 */
                GeneralFastOCROutcome GeneralFastOCR(const Model::GeneralFastOCRRequest &request);
                void GeneralFastOCRAsync(const Model::GeneralFastOCRRequest& request, const GeneralFastOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralFastOCROutcomeCallable GeneralFastOCRCallable(const Model::GeneralFastOCRRequest& request);

                /**
                 *本接口支持图片内手写体文字的检测和识别，针对手写字体无规则、字迹潦草、模糊等特点进行了识别能力的增强。
                 * @param req GeneralHandwritingOCRRequest
                 * @return GeneralHandwritingOCROutcome
                 */
                GeneralHandwritingOCROutcome GeneralHandwritingOCR(const Model::GeneralHandwritingOCRRequest &request);
                void GeneralHandwritingOCRAsync(const Model::GeneralHandwritingOCRRequest& request, const GeneralHandwritingOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralHandwritingOCROutcomeCallable GeneralHandwritingOCRCallable(const Model::GeneralHandwritingOCRRequest& request);

                /**
                 *本接口支持中国香港身份证人像面中关键字段的识别，包括中文姓名、英文姓名、姓名电码、出生日期、性别、证件符号、首次签发日期、最近领用日期、身份证号、是否是永久性居民身份证；具备防伪识别、人像照片裁剪等扩展功能。
本接口暂未完全对外开放，如需咨询，请[联系商务](https://cloud.tencent.com/about/connect)

                 * @param req HKIDCardOCRRequest
                 * @return HKIDCardOCROutcome
                 */
                HKIDCardOCROutcome HKIDCardOCR(const Model::HKIDCardOCRRequest &request);
                void HKIDCardOCRAsync(const Model::HKIDCardOCRRequest& request, const HKIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HKIDCardOCROutcomeCallable HKIDCardOCRCallable(const Model::HKIDCardOCRRequest& request);

                /**
                 *港澳台居住证OCR支持港澳台居住证正反面全字段内容检测识别功能，包括姓名、性别、出生日期、地址、身份证ID、签发机关、有效期限、签发次数、通行证号码关键字段识别。可以应用于港澳台居住证信息有效性校验场景，例如银行开户、用户注册等场景。
                 * @param req HmtResidentPermitOCRRequest
                 * @return HmtResidentPermitOCROutcome
                 */
                HmtResidentPermitOCROutcome HmtResidentPermitOCR(const Model::HmtResidentPermitOCRRequest &request);
                void HmtResidentPermitOCRAsync(const Model::HmtResidentPermitOCRRequest& request, const HmtResidentPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HmtResidentPermitOCROutcomeCallable HmtResidentPermitOCRCallable(const Model::HmtResidentPermitOCRRequest& request);

                /**
                 *本接口支持中国大陆居民二代身份证正反面所有字段的识别，包括姓名、性别、民族、出生日期、住址、公民身份证号、签发机关、有效期限，识别准确度达到99%以上。

另外，本接口还支持多种增值能力，满足不同场景的需求。如身份证照片、人像照片的裁剪功能，同时具备9种告警功能，如下表所示。

<table style="width:650px">
      <thead>
        <tr>
       <th width="150">增值能力</th>
          <th width="500">能力项</th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td rowspan="2">裁剪功能</td>
          <td>身份证照片裁剪（去掉证件外多余的边缘、自动矫正拍摄角度）</td>
        </tr>
        <tr>
          <td>人像照片裁剪（自动抠取身份证头像区域）</td>
        </tr>
        <tr>
          <td rowspan="9">告警功能</td>
          <td>身份证有效日期不合法告警</td>
        </tr>
        <tr>
          <td>身份证边框不完整告警</td>
        </tr>
        <tr>
          <td>身份证复印件告警</td>
        </tr>
        <tr>
          <td>身份证翻拍告警</td>
        </tr>
          <tr>
          <td>身份证框内遮挡告警</td>
        </tr>
         <tr>
          <td>临时身份证告警</td>
        </tr>
          <tr>
          <td>身份证 PS 告警</td>
        </tr>
          <tr>
          <td>图片模糊告警（可根据图片质量分数判断）</td>
        </tr>
      </tbody>
    </table>
                 * @param req IDCardOCRRequest
                 * @return IDCardOCROutcome
                 */
                IDCardOCROutcome IDCardOCR(const Model::IDCardOCRRequest &request);
                void IDCardOCRAsync(const Model::IDCardOCRRequest& request, const IDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IDCardOCROutcomeCallable IDCardOCRCallable(const Model::IDCardOCRRequest& request);

                /**
                 *本接口支持事业单位法人证书关键字段识别，包括注册号、有效期、住所、名称、法定代表人等。
                 * @param req InstitutionOCRRequest
                 * @return InstitutionOCROutcome
                 */
                InstitutionOCROutcome InstitutionOCR(const Model::InstitutionOCRRequest &request);
                void InstitutionOCRAsync(const Model::InstitutionOCRRequest& request, const InstitutionOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstitutionOCROutcomeCallable InstitutionOCRCallable(const Model::InstitutionOCRRequest& request);

                /**
                 *本接口支持病案首页、费用清单、结算单、医疗发票四种保险理赔单据的文本识别和结构化输出。
                 * @param req InsuranceBillOCRRequest
                 * @return InsuranceBillOCROutcome
                 */
                InsuranceBillOCROutcome InsuranceBillOCR(const Model::InsuranceBillOCRRequest &request);
                void InsuranceBillOCRAsync(const Model::InsuranceBillOCRRequest& request, const InsuranceBillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InsuranceBillOCROutcomeCallable InsuranceBillOCRCallable(const Model::InsuranceBillOCRRequest& request);

                /**
                 *本接口支持对通用机打发票的发票代码、发票号码、日期、购买方识别号、销售方识别号、校验码、小写金额等关键字段的识别。
                 * @param req InvoiceGeneralOCRRequest
                 * @return InvoiceGeneralOCROutcome
                 */
                InvoiceGeneralOCROutcome InvoiceGeneralOCR(const Model::InvoiceGeneralOCRRequest &request);
                void InvoiceGeneralOCRAsync(const Model::InvoiceGeneralOCRRequest& request, const InvoiceGeneralOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvoiceGeneralOCROutcomeCallable InvoiceGeneralOCRCallable(const Model::InvoiceGeneralOCRRequest& request);

                /**
                 *本接口支持对中国大陆机动车车牌的自动定位和识别，返回地域编号和车牌号信息。
                 * @param req LicensePlateOCRRequest
                 * @return LicensePlateOCROutcome
                 */
                LicensePlateOCROutcome LicensePlateOCR(const Model::LicensePlateOCRRequest &request);
                void LicensePlateOCRAsync(const Model::LicensePlateOCRRequest& request, const LicensePlateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LicensePlateOCROutcomeCallable LicensePlateOCRCallable(const Model::LicensePlateOCRRequest& request);

                /**
                 *本接口支持马来西亚身份证识别，识别字段包括身份证号、姓名、性别、地址；具备身份证人像照片的裁剪功能和翻拍、复印件告警功能。
本接口暂未完全对外开放，如需咨询，请[联系商务](https://cloud.tencent.com/about/connect)

                 * @param req MLIDCardOCRRequest
                 * @return MLIDCardOCROutcome
                 */
                MLIDCardOCROutcome MLIDCardOCR(const Model::MLIDCardOCRRequest &request);
                void MLIDCardOCRAsync(const Model::MLIDCardOCRRequest& request, const MLIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDCardOCROutcomeCallable MLIDCardOCRCallable(const Model::MLIDCardOCRRequest& request);

                /**
                 *本接口支持中国港澳台地区以及其他国家、地区的护照识别。识别字段包括护照ID、姓名、出生日期、性别、有效期、发行国、国籍，具备护照人像照片的裁剪功能和翻拍、复印件告警功能。

                 * @param req MLIDPassportOCRRequest
                 * @return MLIDPassportOCROutcome
                 */
                MLIDPassportOCROutcome MLIDPassportOCR(const Model::MLIDPassportOCRRequest &request);
                void MLIDPassportOCRAsync(const Model::MLIDPassportOCRRequest& request, const MLIDPassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDPassportOCROutcomeCallable MLIDPassportOCRCallable(const Model::MLIDPassportOCRRequest& request);

                /**
                 *智能识别并结构化港澳台居民来往内地通行证正面全部字段，包含中文姓名、英文姓名、性别、出生日期、签发机关、有效期限、证件号、签发地点、签发次数、证件类别。
                 * @param req MainlandPermitOCRRequest
                 * @return MainlandPermitOCROutcome
                 */
                MainlandPermitOCROutcome MainlandPermitOCR(const Model::MainlandPermitOCRRequest &request);
                void MainlandPermitOCRAsync(const Model::MainlandPermitOCRRequest& request, const MainlandPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MainlandPermitOCROutcomeCallable MainlandPermitOCRCallable(const Model::MainlandPermitOCRRequest& request);

                /**
                 *本接口支持多张、多类型票据的混合检测和自动分类，返回对应票据类型。目前已支持增值税发票、增值税发票（卷票）、定额发票、通用机打发票、购车发票、火车票、出租车发票、机票行程单、汽车票、轮船票、过路过桥费发票、酒店账单、客运限额发票、购物小票、完税证明共15种票据。
                 * @param req MixedInvoiceDetectRequest
                 * @return MixedInvoiceDetectOutcome
                 */
                MixedInvoiceDetectOutcome MixedInvoiceDetect(const Model::MixedInvoiceDetectRequest &request);
                void MixedInvoiceDetectAsync(const Model::MixedInvoiceDetectRequest& request, const MixedInvoiceDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MixedInvoiceDetectOutcomeCallable MixedInvoiceDetectCallable(const Model::MixedInvoiceDetectRequest& request);

                /**
                 *本接口支持多张、多类型票据的混合识别，系统自动实现分割、分类和识别，同时支持自选需要识别的票据类型。目前已支持增值税发票、增值税发票（卷票）、定额发票、通用机打发票、购车发票、火车票、出租车发票、机票行程单、汽车票、轮船票、过路过桥费发票共11种票据。
                 * @param req MixedInvoiceOCRRequest
                 * @return MixedInvoiceOCROutcome
                 */
                MixedInvoiceOCROutcome MixedInvoiceOCR(const Model::MixedInvoiceOCRRequest &request);
                void MixedInvoiceOCRAsync(const Model::MixedInvoiceOCRRequest& request, const MixedInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MixedInvoiceOCROutcomeCallable MixedInvoiceOCRCallable(const Model::MixedInvoiceOCRRequest& request);

                /**
                 *本接口支持组织机构代码证关键字段的识别，包括代码、有效期、地址、机构名称等。
                 * @param req OrgCodeCertOCRRequest
                 * @return OrgCodeCertOCROutcome
                 */
                OrgCodeCertOCROutcome OrgCodeCertOCR(const Model::OrgCodeCertOCRRequest &request);
                void OrgCodeCertOCRAsync(const Model::OrgCodeCertOCRRequest& request, const OrgCodeCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OrgCodeCertOCROutcomeCallable OrgCodeCertOCRCallable(const Model::OrgCodeCertOCRRequest& request);

                /**
                 *本接口支持中国大陆地区护照个人资料页多个字段的检测与识别。已支持字段包括英文姓名、中文姓名、国家码、护照号、出生地、出生日期、国籍英文、性别英文、有效期、签发地点英文、签发日期、持证人签名、护照机读码（MRZ码）等。
                 * @param req PassportOCRRequest
                 * @return PassportOCROutcome
                 */
                PassportOCROutcome PassportOCR(const Model::PassportOCRRequest &request);
                void PassportOCRAsync(const Model::PassportOCRRequest& request, const PassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PassportOCROutcomeCallable PassportOCRCallable(const Model::PassportOCRRequest& request);

                /**
                 *本接口支持对卡式港澳台通行证的识别，包括签发地点、签发机关、有效期限、性别、出生日期、英文姓名、姓名、证件号等字段。
                 * @param req PermitOCRRequest
                 * @return PermitOCROutcome
                 */
                PermitOCROutcome PermitOCR(const Model::PermitOCRRequest &request);
                void PermitOCRAsync(const Model::PermitOCRRequest& request, const PermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PermitOCROutcomeCallable PermitOCRCallable(const Model::PermitOCRRequest& request);

                /**
                 *本接口支持房产证关键字段的识别，包括房地产权利人、共有情况、登记时间、规划用途、房屋性质、房屋坐落等。
                 * @param req PropOwnerCertOCRRequest
                 * @return PropOwnerCertOCROutcome
                 */
                PropOwnerCertOCROutcome PropOwnerCertOCR(const Model::PropOwnerCertOCRRequest &request);
                void PropOwnerCertOCRAsync(const Model::PropOwnerCertOCRRequest& request, const PropOwnerCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PropOwnerCertOCROutcomeCallable PropOwnerCertOCRCallable(const Model::PropOwnerCertOCRRequest& request);

                /**
                 *本接口支持条形码和二维码的识别（包括 DataMatrix 和 PDF417）。
                 * @param req QrcodeOCRRequest
                 * @return QrcodeOCROutcome
                 */
                QrcodeOCROutcome QrcodeOCR(const Model::QrcodeOCRRequest &request);
                void QrcodeOCRAsync(const Model::QrcodeOCRRequest& request, const QrcodeOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QrcodeOCROutcomeCallable QrcodeOCRCallable(const Model::QrcodeOCRRequest& request);

                /**
                 *本接口支持条形码备案信息查询，返回条形码查询结果的相关信息，包括产品名称、产品英文名称、品牌名称、规格型号、宽度、高度、深度、关键字、产品描述、厂家名称、厂家地址、企业社会信用代码13个字段信息。

产品优势：直联中国物品编码中心，查询结果更加准确、可靠。
                 * @param req QueryBarCodeRequest
                 * @return QueryBarCodeOutcome
                 */
                QueryBarCodeOutcome QueryBarCode(const Model::QueryBarCodeRequest &request);
                void QueryBarCodeAsync(const Model::QueryBarCodeRequest& request, const QueryBarCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBarCodeOutcomeCallable QueryBarCodeCallable(const Model::QueryBarCodeRequest& request);

                /**
                 *本接口支持定额发票的发票号码、发票代码、金额(大小写)、发票消费类型、地区及是否有公司印章等关键字段的识别。
                 * @param req QuotaInvoiceOCRRequest
                 * @return QuotaInvoiceOCROutcome
                 */
                QuotaInvoiceOCROutcome QuotaInvoiceOCR(const Model::QuotaInvoiceOCRRequest &request);
                void QuotaInvoiceOCRAsync(const Model::QuotaInvoiceOCRRequest& request, const QuotaInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuotaInvoiceOCROutcomeCallable QuotaInvoiceOCRCallable(const Model::QuotaInvoiceOCRRequest& request);

                /**
                 *本接口支持中英文图片/ PDF内常规表格、无线表格、多表格的检测和识别，支持日文有线表格识别，返回每个单元格的文字内容，支持旋转的表格图片识别，且支持将识别结果保存为 Excel 格式。
                 * @param req RecognizeTableOCRRequest
                 * @return RecognizeTableOCROutcome
                 */
                RecognizeTableOCROutcome RecognizeTableOCR(const Model::RecognizeTableOCRRequest &request);
                void RecognizeTableOCRAsync(const Model::RecognizeTableOCRRequest& request, const RecognizeTableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeTableOCROutcomeCallable RecognizeTableOCRCallable(const Model::RecognizeTableOCRRequest& request);

                /**
                 *本接口支持泰国身份证识别，识别字段包括泰文姓名、英文姓名、地址、出生日期、身份证号码。
本接口暂未完全对外开放，如需咨询，请[联系商务](https://cloud.tencent.com/about/connect)

                 * @param req RecognizeThaiIDCardOCRRequest
                 * @return RecognizeThaiIDCardOCROutcome
                 */
                RecognizeThaiIDCardOCROutcome RecognizeThaiIDCardOCR(const Model::RecognizeThaiIDCardOCRRequest &request);
                void RecognizeThaiIDCardOCRAsync(const Model::RecognizeThaiIDCardOCRRequest& request, const RecognizeThaiIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeThaiIDCardOCROutcomeCallable RecognizeThaiIDCardOCRCallable(const Model::RecognizeThaiIDCardOCRRequest& request);

                /**
                 *本接口支持居民户口簿户主页及成员页关键字段的识别，包括姓名、户别、地址、籍贯、身份证号码等。
                 * @param req ResidenceBookletOCRRequest
                 * @return ResidenceBookletOCROutcome
                 */
                ResidenceBookletOCROutcome ResidenceBookletOCR(const Model::ResidenceBookletOCRRequest &request);
                void ResidenceBookletOCRAsync(const Model::ResidenceBookletOCRRequest& request, const ResidenceBookletOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResidenceBookletOCROutcomeCallable ResidenceBookletOCRCallable(const Model::ResidenceBookletOCRRequest& request);

                /**
                 *本接口支持网约车驾驶证关键字段的识别，包括姓名、证号、起始日期、截止日期、发证日期。
                 * @param req RideHailingDriverLicenseOCRRequest
                 * @return RideHailingDriverLicenseOCROutcome
                 */
                RideHailingDriverLicenseOCROutcome RideHailingDriverLicenseOCR(const Model::RideHailingDriverLicenseOCRRequest &request);
                void RideHailingDriverLicenseOCRAsync(const Model::RideHailingDriverLicenseOCRRequest& request, const RideHailingDriverLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RideHailingDriverLicenseOCROutcomeCallable RideHailingDriverLicenseOCRCallable(const Model::RideHailingDriverLicenseOCRRequest& request);

                /**
                 *本接口支持网约车运输证关键字段的识别，包括交运管许可字号、车辆所有人、车辆号牌、起始日期、截止日期、发证日期。
           
                 * @param req RideHailingTransportLicenseOCRRequest
                 * @return RideHailingTransportLicenseOCROutcome
                 */
                RideHailingTransportLicenseOCROutcome RideHailingTransportLicenseOCR(const Model::RideHailingTransportLicenseOCRRequest &request);
                void RideHailingTransportLicenseOCRAsync(const Model::RideHailingTransportLicenseOCRRequest& request, const RideHailingTransportLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RideHailingTransportLicenseOCROutcomeCallable RideHailingTransportLicenseOCRCallable(const Model::RideHailingTransportLicenseOCRRequest& request);

                /**
                 *印章识别已支持各类印章，包括发票章，财务章等，适用于公文，票据等场景。
                 * @param req SealOCRRequest
                 * @return SealOCROutcome
                 */
                SealOCROutcome SealOCR(const Model::SealOCRRequest &request);
                void SealOCRAsync(const Model::SealOCRRequest& request, const SealOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SealOCROutcomeCallable SealOCRCallable(const Model::SealOCRRequest& request);

                /**
                 *本接口支持识别轮船票的发票代码、发票号码、日期、姓名、票价、始发地、目的地、姓名、时间、发票消费类型、省、市、币种字段。
                 * @param req ShipInvoiceOCRRequest
                 * @return ShipInvoiceOCROutcome
                 */
                ShipInvoiceOCROutcome ShipInvoiceOCR(const Model::ShipInvoiceOCRRequest &request);
                void ShipInvoiceOCRAsync(const Model::ShipInvoiceOCRRequest& request, const ShipInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ShipInvoiceOCROutcomeCallable ShipInvoiceOCRCallable(const Model::ShipInvoiceOCRRequest& request);

                /**
                 *<b>此接口为表格识别的旧版本服务，不再进行服务升级，建议您使用识别能力更强、服务性能更优的<a href="https://cloud.tencent.com/document/product/866/49525">新版表格识别</a>。</b>

本接口支持图片内表格文档的检测和识别，返回每个单元格的文字内容，支持将识别结果保存为 Excel 格式。


                 * @param req TableOCRRequest
                 * @return TableOCROutcome
                 */
                TableOCROutcome TableOCR(const Model::TableOCRRequest &request);
                void TableOCRAsync(const Model::TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TableOCROutcomeCallable TableOCRCallable(const Model::TableOCRRequest& request);

                /**
                 *本接口支持出租车发票关键字段的识别，包括发票号码、发票代码、金额、日期、上下车时间、里程、车牌号、发票类型及所属地区等字段。
                 * @param req TaxiInvoiceOCRRequest
                 * @return TaxiInvoiceOCROutcome
                 */
                TaxiInvoiceOCROutcome TaxiInvoiceOCR(const Model::TaxiInvoiceOCRRequest &request);
                void TaxiInvoiceOCRAsync(const Model::TaxiInvoiceOCRRequest& request, const TaxiInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TaxiInvoiceOCROutcomeCallable TaxiInvoiceOCRCallable(const Model::TaxiInvoiceOCRRequest& request);

                /**
                 *本接口通过检测图片中的文字信息特征，快速判断图片中有无文字并返回判断结果，帮助用户过滤无文字的图片。
                 * @param req TextDetectRequest
                 * @return TextDetectOutcome
                 */
                TextDetectOutcome TextDetect(const Model::TextDetectRequest &request);
                void TextDetectAsync(const Model::TextDetectRequest& request, const TextDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextDetectOutcomeCallable TextDetectCallable(const Model::TextDetectRequest& request);

                /**
                 *本接口支持对过路过桥费发票的发票代码、发票号码、日期、小写金额等关键字段的识别。
                 * @param req TollInvoiceOCRRequest
                 * @return TollInvoiceOCROutcome
                 */
                TollInvoiceOCROutcome TollInvoiceOCR(const Model::TollInvoiceOCRRequest &request);
                void TollInvoiceOCRAsync(const Model::TollInvoiceOCRRequest& request, const TollInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TollInvoiceOCROutcomeCallable TollInvoiceOCRCallable(const Model::TollInvoiceOCRRequest& request);

                /**
                 *本接口支持火车票全字段的识别，包括编号、票价、姓名、座位号、出发时间、出发站、到达站、车次、席别、发票类型及序列号等。

                 * @param req TrainTicketOCRRequest
                 * @return TrainTicketOCROutcome
                 */
                TrainTicketOCROutcome TrainTicketOCR(const Model::TrainTicketOCRRequest &request);
                void TrainTicketOCRAsync(const Model::TrainTicketOCRRequest& request, const TrainTicketOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrainTicketOCROutcomeCallable TrainTicketOCRCallable(const Model::TrainTicketOCRRequest& request);

                /**
                 *本接口支持增值税专用发票、增值税普通发票、增值税电子发票全字段的内容检测和识别，包括发票代码、发票号码、打印发票代码、打印发票号码、开票日期、合计金额、校验码、税率、合计税额、价税合计、购买方识别号、复核、销售方识别号、开票人、密码区1、密码区2、密码区3、密码区4、发票名称、购买方名称、销售方名称、服务名称、备注、规格型号、数量、单价、金额、税额、收款人等字段。
                 * @param req VatInvoiceOCRRequest
                 * @return VatInvoiceOCROutcome
                 */
                VatInvoiceOCROutcome VatInvoiceOCR(const Model::VatInvoiceOCRRequest &request);
                void VatInvoiceOCRAsync(const Model::VatInvoiceOCRRequest& request, const VatInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VatInvoiceOCROutcomeCallable VatInvoiceOCRCallable(const Model::VatInvoiceOCRRequest& request);

                /**
                 *本接口支持增值税发票的准确性核验，您可以通过输入增值税发票的关键字段提供所需的验证信息，接口返回真实的票面相关信息，包括发票代码、发票号码、开票日期、金额、消费类型、购方名称、购方税号、销方名称、销方税号等多个常用字段。支持多种发票类型核验，包括增值税专用发票、增值税普通发票（含电子普通发票、卷式发票、通行费发票）、机动车销售统一发票、货物运输业增值税专用发票、二手车销售统一发票。
                 * @param req VatInvoiceVerifyRequest
                 * @return VatInvoiceVerifyOutcome
                 */
                VatInvoiceVerifyOutcome VatInvoiceVerify(const Model::VatInvoiceVerifyRequest &request);
                void VatInvoiceVerifyAsync(const Model::VatInvoiceVerifyRequest& request, const VatInvoiceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VatInvoiceVerifyOutcomeCallable VatInvoiceVerifyCallable(const Model::VatInvoiceVerifyRequest& request);

                /**
                 *本接口支持对增值税发票（卷票）的发票代码、发票号码、日期、校验码、合计金额（小写）等关键字段的识别。
                 * @param req VatRollInvoiceOCRRequest
                 * @return VatRollInvoiceOCROutcome
                 */
                VatRollInvoiceOCROutcome VatRollInvoiceOCR(const Model::VatRollInvoiceOCRRequest &request);
                void VatRollInvoiceOCRAsync(const Model::VatRollInvoiceOCRRequest& request, const VatRollInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VatRollInvoiceOCROutcomeCallable VatRollInvoiceOCRCallable(const Model::VatRollInvoiceOCRRequest& request);

                /**
                 *本接口支持行驶证主页和副页所有字段的自动定位与识别。

行驶证主页：车牌号码、车辆类型、所有人、住址、使用性质、品牌型号、识别代码、发动机号、注册日期、发证日期、发证单位。

行驶证副页：号牌号码、档案编号、核定载人数、总质量、整备质量、核定载质量、外廓尺寸、准牵引总质量、备注、检验记录。

另外，本接口还支持复印件、翻拍和PS告警功能。
                 * @param req VehicleLicenseOCRRequest
                 * @return VehicleLicenseOCROutcome
                 */
                VehicleLicenseOCROutcome VehicleLicenseOCR(const Model::VehicleLicenseOCRRequest &request);
                void VehicleLicenseOCRAsync(const Model::VehicleLicenseOCRRequest& request, const VehicleLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VehicleLicenseOCROutcomeCallable VehicleLicenseOCRCallable(const Model::VehicleLicenseOCRRequest& request);

                /**
                 *本接口支持国内机动车登记证书主要字段的结构化识别，包括机动车所有人、身份证明名称、号码、车辆型号、车辆识别代号、发动机号、制造厂名称等。
                 * @param req VehicleRegCertOCRRequest
                 * @return VehicleRegCertOCROutcome
                 */
                VehicleRegCertOCROutcome VehicleRegCertOCR(const Model::VehicleRegCertOCRRequest &request);
                void VehicleRegCertOCRAsync(const Model::VehicleRegCertOCRRequest& request, const VehicleRegCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VehicleRegCertOCROutcomeCallable VehicleRegCertOCRCallable(const Model::VehicleRegCertOCRRequest& request);

                /**
                 *本接口支持营业执照信息的识别与准确性核验。

您可以通过输入营业执照注册号或营业执照图片（若两者都输入则只用注册号做查询）进行核验，接口返回查询到的工商照面信息，并比对要校验的字段与查询结果的一致性。查询到工商信息包括：统一社会信用代码、经营期限、法人姓名、经营状态、经营业务范围、注册资本等。
                 * @param req VerifyBasicBizLicenseRequest
                 * @return VerifyBasicBizLicenseOutcome
                 */
                VerifyBasicBizLicenseOutcome VerifyBasicBizLicense(const Model::VerifyBasicBizLicenseRequest &request);
                void VerifyBasicBizLicenseAsync(const Model::VerifyBasicBizLicenseRequest& request, const VerifyBasicBizLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyBasicBizLicenseOutcomeCallable VerifyBasicBizLicenseCallable(const Model::VerifyBasicBizLicenseRequest& request);

                /**
                 *本接口支持营业执照信息的识别与准确性核验，返回的真实工商照面信息比营业执照识别及核验（基础版）接口更详细。

您可以输入营业执照注册号或营业执照图片（若两者都输入则只用注册号做查询），接口返回查询到的工商照面信息，并比对要校验的字段与查询结果的一致性。

查询到工商信息包括：统一社会信用代码、组织机构代码、经营期限、法人姓名、经营状态、经营业务范围及方式、注册资金、注册币种、登记机关、开业日期、企业（机构）类型、注销日期、吊销日期、许可经营项目、一般经营项目、核准时间、省、地级市、区/县、住所所在行政区划代码、行业门类代码、行业门类名称、国民经济行业代码、国民经济行业名称、经营（业务）范围等。
                 * @param req VerifyBizLicenseRequest
                 * @return VerifyBizLicenseOutcome
                 */
                VerifyBizLicenseOutcome VerifyBizLicense(const Model::VerifyBizLicenseRequest &request);
                void VerifyBizLicenseAsync(const Model::VerifyBizLicenseRequest& request, const VerifyBizLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyBizLicenseOutcomeCallable VerifyBizLicenseCallable(const Model::VerifyBizLicenseRequest& request);

                /**
                 *本接口支持OFD格式的增值税电子普通发票和增值税电子专用发票的识别，返回发票代码、发票号码、开票日期、验证码、机器编号、密码区，购买方和销售方信息，包括名称、纳税人识别号、地址电话、开户行及账号，以及价税合计、开票人、收款人、复核人、税额、不含税金额等字段信息。
                 * @param req VerifyOfdVatInvoiceOCRRequest
                 * @return VerifyOfdVatInvoiceOCROutcome
                 */
                VerifyOfdVatInvoiceOCROutcome VerifyOfdVatInvoiceOCR(const Model::VerifyOfdVatInvoiceOCRRequest &request);
                void VerifyOfdVatInvoiceOCRAsync(const Model::VerifyOfdVatInvoiceOCRRequest& request, const VerifyOfdVatInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyOfdVatInvoiceOCROutcomeCallable VerifyOfdVatInvoiceOCRCallable(const Model::VerifyOfdVatInvoiceOCRRequest& request);

                /**
                 *本接口支持图片内车辆识别代号（VIN）的检测和识别。
                 * @param req VinOCRRequest
                 * @return VinOCROutcome
                 */
                VinOCROutcome VinOCR(const Model::VinOCRRequest &request);
                void VinOCRAsync(const Model::VinOCRRequest& request, const VinOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VinOCROutcomeCallable VinOCRCallable(const Model::VinOCRRequest& request);

                /**
                 *本接口支持市面上主流版式电子运单的识别，包括收件人和寄件人的姓名、电话、地址以及运单号等字段。
                 * @param req WaybillOCRRequest
                 * @return WaybillOCROutcome
                 */
                WaybillOCROutcome WaybillOCR(const Model::WaybillOCRRequest &request);
                void WaybillOCRAsync(const Model::WaybillOCRRequest& request, const WaybillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WaybillOCROutcomeCallable WaybillOCRCallable(const Model::WaybillOCRRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
