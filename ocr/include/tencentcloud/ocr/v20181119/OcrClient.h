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
#include <tencentcloud/ocr/v20181119/model/BankSlipOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/BankSlipOCRResponse.h>
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
#include <tencentcloud/ocr/v20181119/model/ClassifyStoreNameRequest.h>
#include <tencentcloud/ocr/v20181119/model/ClassifyStoreNameResponse.h>
#include <tencentcloud/ocr/v20181119/model/CreateAIFormTaskRequest.h>
#include <tencentcloud/ocr/v20181119/model/CreateAIFormTaskResponse.h>
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
#include <tencentcloud/ocr/v20181119/model/GetOCRResultRequest.h>
#include <tencentcloud/ocr/v20181119/model/GetOCRResultResponse.h>
#include <tencentcloud/ocr/v20181119/model/GetOCRTokenRequest.h>
#include <tencentcloud/ocr/v20181119/model/GetOCRTokenResponse.h>
#include <tencentcloud/ocr/v20181119/model/GetTaskStateRequest.h>
#include <tencentcloud/ocr/v20181119/model/GetTaskStateResponse.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/HmtResidentPermitOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/HmtResidentPermitOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/IDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/IDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/ImageEnhancementRequest.h>
#include <tencentcloud/ocr/v20181119/model/ImageEnhancementResponse.h>
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
#include <tencentcloud/ocr/v20181119/model/QuestionOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/QuestionOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/QuestionSplitOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/QuestionSplitOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/QuotaInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/QuotaInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeContainerOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeContainerOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeEncryptedIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeEncryptedIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeForeignPermanentResidentIdCardRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeForeignPermanentResidentIdCardResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeFormulaOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeFormulaOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralCardWarnRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralCardWarnResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralInvoiceRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralInvoiceResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralTextImageWarnRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralTextImageWarnResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeHealthCodeOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeHealthCodeOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeMedicalInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeMedicalInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeOnlineTaxiItineraryOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeOnlineTaxiItineraryOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeStoreNameRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeStoreNameResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTableAccurateOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTableAccurateOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTableOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTableOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeThaiIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTravelCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeTravelCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeValidIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/RecognizeValidIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/ReconstructDocumentRequest.h>
#include <tencentcloud/ocr/v20181119/model/ReconstructDocumentResponse.h>
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
#include <tencentcloud/ocr/v20181119/model/SmartStructuralOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Request.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Response.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralProRequest.h>
#include <tencentcloud/ocr/v20181119/model/SmartStructuralProResponse.h>
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
#include <tencentcloud/ocr/v20181119/model/VatInvoiceVerifyNewRequest.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceVerifyNewResponse.h>
#include <tencentcloud/ocr/v20181119/model/VatRollInvoiceOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VatRollInvoiceOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VehicleLicenseOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VehicleLicenseOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/VehicleRegCertOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/VehicleRegCertOCRResponse.h>
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

                typedef Outcome<Core::Error, Model::AdvertiseOCRResponse> AdvertiseOCROutcome;
                typedef std::future<AdvertiseOCROutcome> AdvertiseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::AdvertiseOCRRequest&, AdvertiseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> AdvertiseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::ArithmeticOCRResponse> ArithmeticOCROutcome;
                typedef std::future<ArithmeticOCROutcome> ArithmeticOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ArithmeticOCRRequest&, ArithmeticOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ArithmeticOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::BankCardOCRResponse> BankCardOCROutcome;
                typedef std::future<BankCardOCROutcome> BankCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BankCardOCRRequest&, BankCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::BankSlipOCRResponse> BankSlipOCROutcome;
                typedef std::future<BankSlipOCROutcome> BankSlipOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BankSlipOCRRequest&, BankSlipOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankSlipOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::BizLicenseOCRResponse> BizLicenseOCROutcome;
                typedef std::future<BizLicenseOCROutcome> BizLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BizLicenseOCRRequest&, BizLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BizLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::BusInvoiceOCRResponse> BusInvoiceOCROutcome;
                typedef std::future<BusInvoiceOCROutcome> BusInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BusInvoiceOCRRequest&, BusInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BusInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::BusinessCardOCRResponse> BusinessCardOCROutcome;
                typedef std::future<BusinessCardOCROutcome> BusinessCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BusinessCardOCRRequest&, BusinessCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BusinessCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::CarInvoiceOCRResponse> CarInvoiceOCROutcome;
                typedef std::future<CarInvoiceOCROutcome> CarInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::CarInvoiceOCRRequest&, CarInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> CarInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::ClassifyDetectOCRResponse> ClassifyDetectOCROutcome;
                typedef std::future<ClassifyDetectOCROutcome> ClassifyDetectOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ClassifyDetectOCRRequest&, ClassifyDetectOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClassifyDetectOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::ClassifyStoreNameResponse> ClassifyStoreNameOutcome;
                typedef std::future<ClassifyStoreNameOutcome> ClassifyStoreNameOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ClassifyStoreNameRequest&, ClassifyStoreNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClassifyStoreNameAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAIFormTaskResponse> CreateAIFormTaskOutcome;
                typedef std::future<CreateAIFormTaskOutcome> CreateAIFormTaskOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::CreateAIFormTaskRequest&, CreateAIFormTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAIFormTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DriverLicenseOCRResponse> DriverLicenseOCROutcome;
                typedef std::future<DriverLicenseOCROutcome> DriverLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::DriverLicenseOCRRequest&, DriverLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> DriverLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::DutyPaidProofOCRResponse> DutyPaidProofOCROutcome;
                typedef std::future<DutyPaidProofOCROutcome> DutyPaidProofOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::DutyPaidProofOCRRequest&, DutyPaidProofOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> DutyPaidProofOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::EduPaperOCRResponse> EduPaperOCROutcome;
                typedef std::future<EduPaperOCROutcome> EduPaperOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::EduPaperOCRRequest&, EduPaperOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EduPaperOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::EnglishOCRResponse> EnglishOCROutcome;
                typedef std::future<EnglishOCROutcome> EnglishOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::EnglishOCRRequest&, EnglishOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnglishOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::EnterpriseLicenseOCRResponse> EnterpriseLicenseOCROutcome;
                typedef std::future<EnterpriseLicenseOCROutcome> EnterpriseLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::EnterpriseLicenseOCRRequest&, EnterpriseLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnterpriseLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::EstateCertOCRResponse> EstateCertOCROutcome;
                typedef std::future<EstateCertOCROutcome> EstateCertOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::EstateCertOCRRequest&, EstateCertOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EstateCertOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::FinanBillOCRResponse> FinanBillOCROutcome;
                typedef std::future<FinanBillOCROutcome> FinanBillOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::FinanBillOCRRequest&, FinanBillOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> FinanBillOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::FinanBillSliceOCRResponse> FinanBillSliceOCROutcome;
                typedef std::future<FinanBillSliceOCROutcome> FinanBillSliceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::FinanBillSliceOCRRequest&, FinanBillSliceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> FinanBillSliceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::FlightInvoiceOCRResponse> FlightInvoiceOCROutcome;
                typedef std::future<FlightInvoiceOCROutcome> FlightInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::FlightInvoiceOCRRequest&, FlightInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> FlightInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::FormulaOCRResponse> FormulaOCROutcome;
                typedef std::future<FormulaOCROutcome> FormulaOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::FormulaOCRRequest&, FormulaOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> FormulaOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralAccurateOCRResponse> GeneralAccurateOCROutcome;
                typedef std::future<GeneralAccurateOCROutcome> GeneralAccurateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralAccurateOCRRequest&, GeneralAccurateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralAccurateOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralBasicOCRResponse> GeneralBasicOCROutcome;
                typedef std::future<GeneralBasicOCROutcome> GeneralBasicOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralBasicOCRRequest&, GeneralBasicOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralBasicOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralEfficientOCRResponse> GeneralEfficientOCROutcome;
                typedef std::future<GeneralEfficientOCROutcome> GeneralEfficientOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralEfficientOCRRequest&, GeneralEfficientOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralEfficientOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralFastOCRResponse> GeneralFastOCROutcome;
                typedef std::future<GeneralFastOCROutcome> GeneralFastOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralFastOCRRequest&, GeneralFastOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralFastOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralHandwritingOCRResponse> GeneralHandwritingOCROutcome;
                typedef std::future<GeneralHandwritingOCROutcome> GeneralHandwritingOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralHandwritingOCRRequest&, GeneralHandwritingOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralHandwritingOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOCRResultResponse> GetOCRResultOutcome;
                typedef std::future<GetOCRResultOutcome> GetOCRResultOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GetOCRResultRequest&, GetOCRResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOCRResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetOCRTokenResponse> GetOCRTokenOutcome;
                typedef std::future<GetOCRTokenOutcome> GetOCRTokenOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GetOCRTokenRequest&, GetOCRTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetOCRTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTaskStateResponse> GetTaskStateOutcome;
                typedef std::future<GetTaskStateOutcome> GetTaskStateOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GetTaskStateRequest&, GetTaskStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskStateAsyncHandler;
                typedef Outcome<Core::Error, Model::HKIDCardOCRResponse> HKIDCardOCROutcome;
                typedef std::future<HKIDCardOCROutcome> HKIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::HKIDCardOCRRequest&, HKIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> HKIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::HmtResidentPermitOCRResponse> HmtResidentPermitOCROutcome;
                typedef std::future<HmtResidentPermitOCROutcome> HmtResidentPermitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::HmtResidentPermitOCRRequest&, HmtResidentPermitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> HmtResidentPermitOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::IDCardOCRResponse> IDCardOCROutcome;
                typedef std::future<IDCardOCROutcome> IDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::IDCardOCRRequest&, IDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> IDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageEnhancementResponse> ImageEnhancementOutcome;
                typedef std::future<ImageEnhancementOutcome> ImageEnhancementOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ImageEnhancementRequest&, ImageEnhancementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageEnhancementAsyncHandler;
                typedef Outcome<Core::Error, Model::InstitutionOCRResponse> InstitutionOCROutcome;
                typedef std::future<InstitutionOCROutcome> InstitutionOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::InstitutionOCRRequest&, InstitutionOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstitutionOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::InsuranceBillOCRResponse> InsuranceBillOCROutcome;
                typedef std::future<InsuranceBillOCROutcome> InsuranceBillOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::InsuranceBillOCRRequest&, InsuranceBillOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> InsuranceBillOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::InvoiceGeneralOCRResponse> InvoiceGeneralOCROutcome;
                typedef std::future<InvoiceGeneralOCROutcome> InvoiceGeneralOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::InvoiceGeneralOCRRequest&, InvoiceGeneralOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvoiceGeneralOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::LicensePlateOCRResponse> LicensePlateOCROutcome;
                typedef std::future<LicensePlateOCROutcome> LicensePlateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::LicensePlateOCRRequest&, LicensePlateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> LicensePlateOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MLIDCardOCRResponse> MLIDCardOCROutcome;
                typedef std::future<MLIDCardOCROutcome> MLIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDCardOCRRequest&, MLIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MLIDPassportOCRResponse> MLIDPassportOCROutcome;
                typedef std::future<MLIDPassportOCROutcome> MLIDPassportOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDPassportOCRRequest&, MLIDPassportOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDPassportOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MainlandPermitOCRResponse> MainlandPermitOCROutcome;
                typedef std::future<MainlandPermitOCROutcome> MainlandPermitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MainlandPermitOCRRequest&, MainlandPermitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MainlandPermitOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MixedInvoiceDetectResponse> MixedInvoiceDetectOutcome;
                typedef std::future<MixedInvoiceDetectOutcome> MixedInvoiceDetectOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MixedInvoiceDetectRequest&, MixedInvoiceDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MixedInvoiceDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::MixedInvoiceOCRResponse> MixedInvoiceOCROutcome;
                typedef std::future<MixedInvoiceOCROutcome> MixedInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MixedInvoiceOCRRequest&, MixedInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MixedInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::OrgCodeCertOCRResponse> OrgCodeCertOCROutcome;
                typedef std::future<OrgCodeCertOCROutcome> OrgCodeCertOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::OrgCodeCertOCRRequest&, OrgCodeCertOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> OrgCodeCertOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::PassportOCRResponse> PassportOCROutcome;
                typedef std::future<PassportOCROutcome> PassportOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::PassportOCRRequest&, PassportOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> PassportOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::PermitOCRResponse> PermitOCROutcome;
                typedef std::future<PermitOCROutcome> PermitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::PermitOCRRequest&, PermitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> PermitOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::PropOwnerCertOCRResponse> PropOwnerCertOCROutcome;
                typedef std::future<PropOwnerCertOCROutcome> PropOwnerCertOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::PropOwnerCertOCRRequest&, PropOwnerCertOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> PropOwnerCertOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::QrcodeOCRResponse> QrcodeOCROutcome;
                typedef std::future<QrcodeOCROutcome> QrcodeOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::QrcodeOCRRequest&, QrcodeOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> QrcodeOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::QuestionOCRResponse> QuestionOCROutcome;
                typedef std::future<QuestionOCROutcome> QuestionOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::QuestionOCRRequest&, QuestionOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuestionOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::QuestionSplitOCRResponse> QuestionSplitOCROutcome;
                typedef std::future<QuestionSplitOCROutcome> QuestionSplitOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::QuestionSplitOCRRequest&, QuestionSplitOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuestionSplitOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::QuotaInvoiceOCRResponse> QuotaInvoiceOCROutcome;
                typedef std::future<QuotaInvoiceOCROutcome> QuotaInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::QuotaInvoiceOCRRequest&, QuotaInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuotaInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeContainerOCRResponse> RecognizeContainerOCROutcome;
                typedef std::future<RecognizeContainerOCROutcome> RecognizeContainerOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeContainerOCRRequest&, RecognizeContainerOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeContainerOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeEncryptedIDCardOCRResponse> RecognizeEncryptedIDCardOCROutcome;
                typedef std::future<RecognizeEncryptedIDCardOCROutcome> RecognizeEncryptedIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeEncryptedIDCardOCRRequest&, RecognizeEncryptedIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeEncryptedIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeForeignPermanentResidentIdCardResponse> RecognizeForeignPermanentResidentIdCardOutcome;
                typedef std::future<RecognizeForeignPermanentResidentIdCardOutcome> RecognizeForeignPermanentResidentIdCardOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeForeignPermanentResidentIdCardRequest&, RecognizeForeignPermanentResidentIdCardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeForeignPermanentResidentIdCardAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeFormulaOCRResponse> RecognizeFormulaOCROutcome;
                typedef std::future<RecognizeFormulaOCROutcome> RecognizeFormulaOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeFormulaOCRRequest&, RecognizeFormulaOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeFormulaOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeGeneralCardWarnResponse> RecognizeGeneralCardWarnOutcome;
                typedef std::future<RecognizeGeneralCardWarnOutcome> RecognizeGeneralCardWarnOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeGeneralCardWarnRequest&, RecognizeGeneralCardWarnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeGeneralCardWarnAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeGeneralInvoiceResponse> RecognizeGeneralInvoiceOutcome;
                typedef std::future<RecognizeGeneralInvoiceOutcome> RecognizeGeneralInvoiceOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeGeneralInvoiceRequest&, RecognizeGeneralInvoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeGeneralInvoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeGeneralTextImageWarnResponse> RecognizeGeneralTextImageWarnOutcome;
                typedef std::future<RecognizeGeneralTextImageWarnOutcome> RecognizeGeneralTextImageWarnOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeGeneralTextImageWarnRequest&, RecognizeGeneralTextImageWarnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeGeneralTextImageWarnAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeHealthCodeOCRResponse> RecognizeHealthCodeOCROutcome;
                typedef std::future<RecognizeHealthCodeOCROutcome> RecognizeHealthCodeOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeHealthCodeOCRRequest&, RecognizeHealthCodeOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeHealthCodeOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeMedicalInvoiceOCRResponse> RecognizeMedicalInvoiceOCROutcome;
                typedef std::future<RecognizeMedicalInvoiceOCROutcome> RecognizeMedicalInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeMedicalInvoiceOCRRequest&, RecognizeMedicalInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeMedicalInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeOnlineTaxiItineraryOCRResponse> RecognizeOnlineTaxiItineraryOCROutcome;
                typedef std::future<RecognizeOnlineTaxiItineraryOCROutcome> RecognizeOnlineTaxiItineraryOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeOnlineTaxiItineraryOCRRequest&, RecognizeOnlineTaxiItineraryOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeOnlineTaxiItineraryOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeStoreNameResponse> RecognizeStoreNameOutcome;
                typedef std::future<RecognizeStoreNameOutcome> RecognizeStoreNameOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeStoreNameRequest&, RecognizeStoreNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeStoreNameAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeTableAccurateOCRResponse> RecognizeTableAccurateOCROutcome;
                typedef std::future<RecognizeTableAccurateOCROutcome> RecognizeTableAccurateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeTableAccurateOCRRequest&, RecognizeTableAccurateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTableAccurateOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeTableOCRResponse> RecognizeTableOCROutcome;
                typedef std::future<RecognizeTableOCROutcome> RecognizeTableOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeTableOCRRequest&, RecognizeTableOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTableOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeThaiIDCardOCRResponse> RecognizeThaiIDCardOCROutcome;
                typedef std::future<RecognizeThaiIDCardOCROutcome> RecognizeThaiIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeThaiIDCardOCRRequest&, RecognizeThaiIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeThaiIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeTravelCardOCRResponse> RecognizeTravelCardOCROutcome;
                typedef std::future<RecognizeTravelCardOCROutcome> RecognizeTravelCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeTravelCardOCRRequest&, RecognizeTravelCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeTravelCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeValidIDCardOCRResponse> RecognizeValidIDCardOCROutcome;
                typedef std::future<RecognizeValidIDCardOCROutcome> RecognizeValidIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RecognizeValidIDCardOCRRequest&, RecognizeValidIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeValidIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::ReconstructDocumentResponse> ReconstructDocumentOutcome;
                typedef std::future<ReconstructDocumentOutcome> ReconstructDocumentOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ReconstructDocumentRequest&, ReconstructDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReconstructDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::ResidenceBookletOCRResponse> ResidenceBookletOCROutcome;
                typedef std::future<ResidenceBookletOCROutcome> ResidenceBookletOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ResidenceBookletOCRRequest&, ResidenceBookletOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResidenceBookletOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RideHailingDriverLicenseOCRResponse> RideHailingDriverLicenseOCROutcome;
                typedef std::future<RideHailingDriverLicenseOCROutcome> RideHailingDriverLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RideHailingDriverLicenseOCRRequest&, RideHailingDriverLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RideHailingDriverLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::RideHailingTransportLicenseOCRResponse> RideHailingTransportLicenseOCROutcome;
                typedef std::future<RideHailingTransportLicenseOCROutcome> RideHailingTransportLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::RideHailingTransportLicenseOCRRequest&, RideHailingTransportLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> RideHailingTransportLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::SealOCRResponse> SealOCROutcome;
                typedef std::future<SealOCROutcome> SealOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::SealOCRRequest&, SealOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> SealOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::ShipInvoiceOCRResponse> ShipInvoiceOCROutcome;
                typedef std::future<ShipInvoiceOCROutcome> ShipInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::ShipInvoiceOCRRequest&, ShipInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> ShipInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::SmartStructuralOCRResponse> SmartStructuralOCROutcome;
                typedef std::future<SmartStructuralOCROutcome> SmartStructuralOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::SmartStructuralOCRRequest&, SmartStructuralOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> SmartStructuralOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::SmartStructuralOCRV2Response> SmartStructuralOCRV2Outcome;
                typedef std::future<SmartStructuralOCRV2Outcome> SmartStructuralOCRV2OutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::SmartStructuralOCRV2Request&, SmartStructuralOCRV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> SmartStructuralOCRV2AsyncHandler;
                typedef Outcome<Core::Error, Model::SmartStructuralProResponse> SmartStructuralProOutcome;
                typedef std::future<SmartStructuralProOutcome> SmartStructuralProOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::SmartStructuralProRequest&, SmartStructuralProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SmartStructuralProAsyncHandler;
                typedef Outcome<Core::Error, Model::TableOCRResponse> TableOCROutcome;
                typedef std::future<TableOCROutcome> TableOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TableOCRRequest&, TableOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TableOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::TaxiInvoiceOCRResponse> TaxiInvoiceOCROutcome;
                typedef std::future<TaxiInvoiceOCROutcome> TaxiInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TaxiInvoiceOCRRequest&, TaxiInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TaxiInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::TextDetectResponse> TextDetectOutcome;
                typedef std::future<TextDetectOutcome> TextDetectOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TextDetectRequest&, TextDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::TollInvoiceOCRResponse> TollInvoiceOCROutcome;
                typedef std::future<TollInvoiceOCROutcome> TollInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TollInvoiceOCRRequest&, TollInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TollInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::TrainTicketOCRResponse> TrainTicketOCROutcome;
                typedef std::future<TrainTicketOCROutcome> TrainTicketOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TrainTicketOCRRequest&, TrainTicketOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrainTicketOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::VatInvoiceOCRResponse> VatInvoiceOCROutcome;
                typedef std::future<VatInvoiceOCROutcome> VatInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VatInvoiceOCRRequest&, VatInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VatInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::VatInvoiceVerifyResponse> VatInvoiceVerifyOutcome;
                typedef std::future<VatInvoiceVerifyOutcome> VatInvoiceVerifyOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VatInvoiceVerifyRequest&, VatInvoiceVerifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VatInvoiceVerifyAsyncHandler;
                typedef Outcome<Core::Error, Model::VatInvoiceVerifyNewResponse> VatInvoiceVerifyNewOutcome;
                typedef std::future<VatInvoiceVerifyNewOutcome> VatInvoiceVerifyNewOutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VatInvoiceVerifyNewRequest&, VatInvoiceVerifyNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VatInvoiceVerifyNewAsyncHandler;
                typedef Outcome<Core::Error, Model::VatRollInvoiceOCRResponse> VatRollInvoiceOCROutcome;
                typedef std::future<VatRollInvoiceOCROutcome> VatRollInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VatRollInvoiceOCRRequest&, VatRollInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VatRollInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::VehicleLicenseOCRResponse> VehicleLicenseOCROutcome;
                typedef std::future<VehicleLicenseOCROutcome> VehicleLicenseOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VehicleLicenseOCRRequest&, VehicleLicenseOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VehicleLicenseOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::VehicleRegCertOCRResponse> VehicleRegCertOCROutcome;
                typedef std::future<VehicleRegCertOCROutcome> VehicleRegCertOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VehicleRegCertOCRRequest&, VehicleRegCertOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VehicleRegCertOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyOfdVatInvoiceOCRResponse> VerifyOfdVatInvoiceOCROutcome;
                typedef std::future<VerifyOfdVatInvoiceOCROutcome> VerifyOfdVatInvoiceOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VerifyOfdVatInvoiceOCRRequest&, VerifyOfdVatInvoiceOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyOfdVatInvoiceOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::VinOCRResponse> VinOCROutcome;
                typedef std::future<VinOCROutcome> VinOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::VinOCRRequest&, VinOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> VinOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::WaybillOCRResponse> WaybillOCROutcome;
                typedef std::future<WaybillOCROutcome> WaybillOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::WaybillOCRRequest&, WaybillOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> WaybillOCRAsyncHandler;



                /**
                 *本接口支持广告商品图片内文字的检测和识别，返回文本框位置与文字内容。

产品优势：针对广告商品图片普遍存在较多繁体字、艺术字的特点，进行了识别能力的增强。支持中英文、横排、竖排以及倾斜场景文字识别。文字识别的召回率和准确率能达到96%以上。

默认接口请求频率限制：20次/秒。
                 * @param req AdvertiseOCRRequest
                 * @return AdvertiseOCROutcome
                 */
                AdvertiseOCROutcome AdvertiseOCR(const Model::AdvertiseOCRRequest &request);
                void AdvertiseOCRAsync(const Model::AdvertiseOCRRequest& request, const AdvertiseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AdvertiseOCROutcomeCallable AdvertiseOCRCallable(const Model::AdvertiseOCRRequest& request);

                /**
                 *本接口支持作业算式题目的自动识别和判分，目前覆盖 K12 学力范围内的 11 种题型，包括加减乘除四则、加减乘除已知结果求运算因子、判断大小、约等于估算、带余数除法、分数四则运算、单位换算、竖式加减法、竖式乘除法、脱式计算和解方程，平均识别精度达到93%以上。

默认接口请求频率限制：10次/秒。
                 * @param req ArithmeticOCRRequest
                 * @return ArithmeticOCROutcome
                 */
                ArithmeticOCROutcome ArithmeticOCR(const Model::ArithmeticOCRRequest &request);
                void ArithmeticOCRAsync(const Model::ArithmeticOCRRequest& request, const ArithmeticOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ArithmeticOCROutcomeCallable ArithmeticOCRCallable(const Model::ArithmeticOCRRequest& request);

                /**
                 *本接口支持对中国大陆主流银行卡正反面关键字段的检测与识别，包括卡号、卡类型、卡名字、银行信息、有效期。支持竖排异形卡识别、多角度旋转图片识别。支持对复印件、翻拍件、边框遮挡的银行卡进行告警，可应用于各种银行卡信息有效性校验场景，如金融行业身份认证、第三方支付绑卡等场景。

默认接口请求频率限制：10次/秒。
                 * @param req BankCardOCRRequest
                 * @return BankCardOCROutcome
                 */
                BankCardOCROutcome BankCardOCR(const Model::BankCardOCRRequest &request);
                void BankCardOCRAsync(const Model::BankCardOCRRequest& request, const BankCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCardOCROutcomeCallable BankCardOCRCallable(const Model::BankCardOCRRequest& request);

                /**
                 *本接口支持银行回单全字段的识别，包括付款开户行、收款开户行、付款账号、收款账号、回单类型、回单编号、币种、流水号、凭证号码、交易机构、交易金额、手续费、日期等字段信息。

默认接口请求频率限制：10次/秒。
                 * @param req BankSlipOCRRequest
                 * @return BankSlipOCROutcome
                 */
                BankSlipOCROutcome BankSlipOCR(const Model::BankSlipOCRRequest &request);
                void BankSlipOCRAsync(const Model::BankSlipOCRRequest& request, const BankSlipOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankSlipOCROutcomeCallable BankSlipOCRCallable(const Model::BankSlipOCRRequest& request);

                /**
                 *本接口支持快速精准识别营业执照上的字段，包括统一社会信用代码、公司名称、主体类型、法定代表人、注册资本、组成形式、成立日期、营业期限和经营范围等字段。

默认接口请求频率限制：10次/秒。
                 * @param req BizLicenseOCRRequest
                 * @return BizLicenseOCROutcome
                 */
                BizLicenseOCROutcome BizLicenseOCR(const Model::BizLicenseOCRRequest &request);
                void BizLicenseOCRAsync(const Model::BizLicenseOCRRequest& request, const BizLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BizLicenseOCROutcomeCallable BizLicenseOCRCallable(const Model::BizLicenseOCRRequest& request);

                /**
                 *本接口支持识别公路汽车客票关键字段的识别，包括发票代码、发票号码、日期、票价、始发地、目的地、姓名、时间、发票消费类型、身份证号、省、市、开票日期、乘车地点、检票口、客票类型、车型、座位号、车次等。

默认接口请求频率限制：5次/秒。
                 * @param req BusInvoiceOCRRequest
                 * @return BusInvoiceOCROutcome
                 */
                BusInvoiceOCROutcome BusInvoiceOCR(const Model::BusInvoiceOCRRequest &request);
                void BusInvoiceOCRAsync(const Model::BusInvoiceOCRRequest& request, const BusInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BusInvoiceOCROutcomeCallable BusInvoiceOCRCallable(const Model::BusInvoiceOCRRequest& request);

                /**
                 *本接口支持中英文名片各字段的自动定位与识别，包含姓名、电话、手机号、邮箱、公司、部门、职位、网址、地址、QQ、微信、MSN等。

默认接口请求频率限制：10次/秒。
                 * @param req BusinessCardOCRRequest
                 * @return BusinessCardOCROutcome
                 */
                BusinessCardOCROutcome BusinessCardOCR(const Model::BusinessCardOCRRequest &request);
                void BusinessCardOCRAsync(const Model::BusinessCardOCRRequest& request, const BusinessCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BusinessCardOCROutcomeCallable BusinessCardOCRCallable(const Model::BusinessCardOCRRequest& request);

                /**
                 *本接口支持机动车销售统一发票和二手车销售统一发票的识别，包括发票号码、发票代码、合计金额、合计税额等二十多个字段。

默认接口请求频率限制：5次/秒。
                 * @param req CarInvoiceOCRRequest
                 * @return CarInvoiceOCROutcome
                 */
                CarInvoiceOCROutcome CarInvoiceOCR(const Model::CarInvoiceOCRRequest &request);
                void CarInvoiceOCRAsync(const Model::CarInvoiceOCRRequest& request, const CarInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CarInvoiceOCROutcomeCallable CarInvoiceOCRCallable(const Model::CarInvoiceOCRRequest& request);

                /**
                 *支持身份证、护照、名片、银行卡、行驶证、驾驶证、港澳台通行证、户口本、港澳台来往内地通行证、港澳台居住证、不动产证、营业执照的智能分类。

默认接口请求频率限制：20次/秒。
                 * @param req ClassifyDetectOCRRequest
                 * @return ClassifyDetectOCROutcome
                 */
                ClassifyDetectOCROutcome ClassifyDetectOCR(const Model::ClassifyDetectOCRRequest &request);
                void ClassifyDetectOCRAsync(const Model::ClassifyDetectOCRRequest& request, const ClassifyDetectOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClassifyDetectOCROutcomeCallable ClassifyDetectOCRCallable(const Model::ClassifyDetectOCRRequest& request);

                /**
                 *本接口用于识别门头照分类标签信息
默认接口请求频率限制：1次/秒
                 * @param req ClassifyStoreNameRequest
                 * @return ClassifyStoreNameOutcome
                 */
                ClassifyStoreNameOutcome ClassifyStoreName(const Model::ClassifyStoreNameRequest &request);
                void ClassifyStoreNameAsync(const Model::ClassifyStoreNameRequest& request, const ClassifyStoreNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClassifyStoreNameOutcomeCallable ClassifyStoreNameCallable(const Model::ClassifyStoreNameRequest& request);

                /**
                 *智慧表单产品已下线，需要下线相关API

本接口可创建智能表单录入任务，支持多个识别图片和PDF的URL上传，返回含有识别内容的操作页面URL。

智能表单录入产品提供高准确率的表单识别技术和人工核对工具，支持自定义字段，将识别结果自动填入到自定义条目中，并提供人工操作工具，完成整个表单识别过程。适用性强，可对票据、合同、货单等文件的识别，适用于金融、货代、保险、档案等领域。本产品免费公测中，您可以点击demo（超链接：https://ocr.smartform.cloud.tencent.com/）试用，如需购买请与商务团队联系。
                 * @param req CreateAIFormTaskRequest
                 * @return CreateAIFormTaskOutcome
                 */
                CreateAIFormTaskOutcome CreateAIFormTask(const Model::CreateAIFormTaskRequest &request);
                void CreateAIFormTaskAsync(const Model::CreateAIFormTaskRequest& request, const CreateAIFormTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAIFormTaskOutcomeCallable CreateAIFormTaskCallable(const Model::CreateAIFormTaskRequest& request);

                /**
                 *本接口支持驾驶证主页和副页所有字段的自动定位与识别，重点字段的识别准确度达到99%以上。

驾驶证主页：包括证号、姓名、性别、国籍、住址、出生日期、初次领证日期、准驾车型、有效期限、发证单位

驾驶证副页：包括证号、姓名、档案编号、记录。

另外，本接口还支持复印件、翻拍告警功能。同时支持识别交管12123 APP发放的电子驾驶证正页。

电子驾驶证正页：包括证号、姓名、性别、国籍、出生日期、初次领证日期、准驾车型、有效期开始时间、有效期截止时间、档案编号、状态、累积记分。

默认接口请求频率限制：10次/秒。
                 * @param req DriverLicenseOCRRequest
                 * @return DriverLicenseOCROutcome
                 */
                DriverLicenseOCROutcome DriverLicenseOCR(const Model::DriverLicenseOCRRequest &request);
                void DriverLicenseOCRAsync(const Model::DriverLicenseOCRRequest& request, const DriverLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DriverLicenseOCROutcomeCallable DriverLicenseOCRCallable(const Model::DriverLicenseOCRRequest& request);

                /**
                 *本接口支持对完税证明的税号、纳税人识别号、纳税人名称、金额合计大写、金额合计小写、填发日期、税务机关、填票人等关键字段的识别。

默认接口请求频率限制：5次/秒。
                 * @param req DutyPaidProofOCRRequest
                 * @return DutyPaidProofOCROutcome
                 */
                DutyPaidProofOCROutcome DutyPaidProofOCR(const Model::DutyPaidProofOCRRequest &request);
                void DutyPaidProofOCRAsync(const Model::DutyPaidProofOCRRequest& request, const DutyPaidProofOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DutyPaidProofOCROutcomeCallable DutyPaidProofOCRCallable(const Model::DutyPaidProofOCRRequest& request);

                /**
                 *本接口支持数学试题内容的识别和结构化输出，包括通用文本解析和小学/初中/高中数学公式解析能力（包括91种题型，180种符号），公式返回格式为 Latex 格式文本。

默认接口请求频率限制：5次/秒。
                 * @param req EduPaperOCRRequest
                 * @return EduPaperOCROutcome
                 */
                EduPaperOCROutcome EduPaperOCR(const Model::EduPaperOCRRequest &request);
                void EduPaperOCRAsync(const Model::EduPaperOCRRequest& request, const EduPaperOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EduPaperOCROutcomeCallable EduPaperOCRCallable(const Model::EduPaperOCRRequest& request);

                /**
                 *本接口支持图像英文文字的检测和识别，返回文字框位置与文字内容。支持多场景、任意版面下的英文、字母、数字和常见字符的识别，同时覆盖英文印刷体和英文手写体识别。

默认接口请求频率限制：10次/秒。
                 * @param req EnglishOCRRequest
                 * @return EnglishOCROutcome
                 */
                EnglishOCROutcome EnglishOCR(const Model::EnglishOCRRequest &request);
                void EnglishOCRAsync(const Model::EnglishOCRRequest& request, const EnglishOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnglishOCROutcomeCallable EnglishOCRCallable(const Model::EnglishOCRRequest& request);

                /**
                 *本接口支持智能化识别各类企业登记证书、许可证书、企业执照、三证合一类证书，结构化输出统一社会信用代码、公司名称、法定代表人、公司地址、注册资金、企业类型、经营范围、成立日期、有效期、开办资金、经费来源、举办单位等关键字段。

默认接口请求频率限制：5次/秒。
                 * @param req EnterpriseLicenseOCRRequest
                 * @return EnterpriseLicenseOCROutcome
                 */
                EnterpriseLicenseOCROutcome EnterpriseLicenseOCR(const Model::EnterpriseLicenseOCRRequest &request);
                void EnterpriseLicenseOCRAsync(const Model::EnterpriseLicenseOCRRequest& request, const EnterpriseLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnterpriseLicenseOCROutcomeCallable EnterpriseLicenseOCRCallable(const Model::EnterpriseLicenseOCRRequest& request);

                /**
                 *本接口支持不动产权证关键字段的识别，包括使用期限、面积、用途、权利性质、权利类型、坐落、共有情况、权利人、权利其他状况等。

默认接口请求频率限制：5次/秒。
                 * @param req EstateCertOCRRequest
                 * @return EstateCertOCROutcome
                 */
                EstateCertOCROutcome EstateCertOCR(const Model::EstateCertOCRRequest &request);
                void EstateCertOCRAsync(const Model::EstateCertOCRRequest& request, const EstateCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EstateCertOCROutcomeCallable EstateCertOCRCallable(const Model::EstateCertOCRRequest& request);

                /**
                 *本接口支持常见银行票据的自动分类和识别。整单识别包括支票（含现金支票、普通支票、转账支票），承兑汇票（含银行承兑汇票、商业承兑汇票）以及进账单等，适用于中国人民银行印发的 2010 版银行票据凭证版式（银发[2010]299 号）。

默认接口请求频率限制：5次/秒。
                 * @param req FinanBillOCRRequest
                 * @return FinanBillOCROutcome
                 */
                FinanBillOCROutcome FinanBillOCR(const Model::FinanBillOCRRequest &request);
                void FinanBillOCRAsync(const Model::FinanBillOCRRequest& request, const FinanBillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FinanBillOCROutcomeCallable FinanBillOCRCallable(const Model::FinanBillOCRRequest& request);

                /**
                 *本接口支持常见银行票据的自动分类和识别。切片识别包括金融行业常见票据的重要切片字段识别，包括金额、账号、日期、凭证号码等。（金融票据切片：金融票据中待识别字段及其周围局部区域的裁剪图像。）

默认接口请求频率限制：5次/秒。
                 * @param req FinanBillSliceOCRRequest
                 * @return FinanBillSliceOCROutcome
                 */
                FinanBillSliceOCROutcome FinanBillSliceOCR(const Model::FinanBillSliceOCRRequest &request);
                void FinanBillSliceOCRAsync(const Model::FinanBillSliceOCRRequest& request, const FinanBillSliceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FinanBillSliceOCROutcomeCallable FinanBillSliceOCRCallable(const Model::FinanBillSliceOCRRequest& request);

                /**
                 *本接口支持机票行程单关键字段的识别，包括旅客姓名、有效身份证件号码、电子客票号码、验证码、填开单位、其他税费、燃油附加费、民航发展基金、保险费、销售单位代号、始发地、目的地、航班号、时间、日期、座位等级、承运人、发票消费类型、票价、合计金额、填开日期、国内国际标签、印刷序号、客票级别/类别、客票生效日期、有效期截止日期、免费行李等字段，支持航班信息多行明细输出。

默认接口请求频率限制：5次/秒。
                 * @param req FlightInvoiceOCRRequest
                 * @return FlightInvoiceOCROutcome
                 */
                FlightInvoiceOCROutcome FlightInvoiceOCR(const Model::FlightInvoiceOCRRequest &request);
                void FlightInvoiceOCRAsync(const Model::FlightInvoiceOCRRequest& request, const FlightInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FlightInvoiceOCROutcomeCallable FlightInvoiceOCRCallable(const Model::FlightInvoiceOCRRequest& request);

                /**
                 *本接口支持识别主流初高中数学符号和公式，返回公式的 Latex 格式文本。

默认接口请求频率限制：5次/秒。
                 * @param req FormulaOCRRequest
                 * @return FormulaOCROutcome
                 */
                FormulaOCROutcome FormulaOCR(const Model::FormulaOCRRequest &request);
                void FormulaOCRAsync(const Model::FormulaOCRRequest& request, const FormulaOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FormulaOCROutcomeCallable FormulaOCRCallable(const Model::FormulaOCRRequest& request);

                /**
                 *本接口支持图像整体文字的检测和识别。支持中文、英文、中英文、数字和特殊字符号的识别，并返回文字框位置和文字内容。

适用于文字较多、版式复杂、对识别准召率要求较高的场景，如试卷试题、网络图片、街景店招牌、法律卷宗等场景。

产品优势：与通用印刷体识别接口相比，本接口提供更高精度的通用文字识别服务，在手写体、文字较多、长串数字、小字、模糊字、倾斜文本等困难场景下，高精度版的准确率和召回率更高。

通用文字识别不同版本的差异如下：
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

默认接口请求频率限制：10次/秒。
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
          <td>支持旋转识别，返回角度信息</td>
          <td>支持旋转识别，返回角度信息</td>
        </tr>
      </tbody>
    </table>

默认接口请求频率限制：20次/秒。
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
          <td>支持旋转识别，返回角度信息</td>
        </tr>
      </tbody>
    </table>

默认接口请求频率限制：10次/秒。
                 * @param req GeneralEfficientOCRRequest
                 * @return GeneralEfficientOCROutcome
                 */
                GeneralEfficientOCROutcome GeneralEfficientOCR(const Model::GeneralEfficientOCRRequest &request);
                void GeneralEfficientOCRAsync(const Model::GeneralEfficientOCRRequest& request, const GeneralEfficientOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralEfficientOCROutcomeCallable GeneralEfficientOCRCallable(const Model::GeneralEfficientOCRRequest& request);

                /**
                 *本接口支持图片中整体文字的检测和识别，返回文字框位置与文字内容。相比通用印刷体识别接口，识别速度更快。

默认接口请求频率限制：10次/秒。
                 * @param req GeneralFastOCRRequest
                 * @return GeneralFastOCROutcome
                 */
                GeneralFastOCROutcome GeneralFastOCR(const Model::GeneralFastOCRRequest &request);
                void GeneralFastOCRAsync(const Model::GeneralFastOCRRequest& request, const GeneralFastOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralFastOCROutcomeCallable GeneralFastOCRCallable(const Model::GeneralFastOCRRequest& request);

                /**
                 *本接口支持图片内手写体文字的检测和识别，针对手写字体无规则、字迹潦草、模糊等特点进行了识别能力的增强。

默认接口请求频率限制：10次/秒。
                 * @param req GeneralHandwritingOCRRequest
                 * @return GeneralHandwritingOCROutcome
                 */
                GeneralHandwritingOCROutcome GeneralHandwritingOCR(const Model::GeneralHandwritingOCRRequest &request);
                void GeneralHandwritingOCRAsync(const Model::GeneralHandwritingOCRRequest& request, const GeneralHandwritingOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralHandwritingOCROutcomeCallable GeneralHandwritingOCRCallable(const Model::GeneralHandwritingOCRRequest& request);

                /**
                 *获取ocr结果
                 * @param req GetOCRResultRequest
                 * @return GetOCRResultOutcome
                 */
                GetOCRResultOutcome GetOCRResult(const Model::GetOCRResultRequest &request);
                void GetOCRResultAsync(const Model::GetOCRResultRequest& request, const GetOCRResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOCRResultOutcomeCallable GetOCRResultCallable(const Model::GetOCRResultRequest& request);

                /**
                 *获取ocr的token值
                 * @param req GetOCRTokenRequest
                 * @return GetOCRTokenOutcome
                 */
                GetOCRTokenOutcome GetOCRToken(const Model::GetOCRTokenRequest &request);
                void GetOCRTokenAsync(const Model::GetOCRTokenRequest& request, const GetOCRTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetOCRTokenOutcomeCallable GetOCRTokenCallable(const Model::GetOCRTokenRequest& request);

                /**
                 *智慧表单产品已下线，需要下线相关API

支持查询智能表单录入任务的状态。本产品免费公测中，您可以点击demo（超链接：https://ocr.smartform.cloud.tencent.com/）试用，如需购买请与商务团队联系。
                 * @param req GetTaskStateRequest
                 * @return GetTaskStateOutcome
                 */
                GetTaskStateOutcome GetTaskState(const Model::GetTaskStateRequest &request);
                void GetTaskStateAsync(const Model::GetTaskStateRequest& request, const GetTaskStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTaskStateOutcomeCallable GetTaskStateCallable(const Model::GetTaskStateRequest& request);

                /**
                 *本接口支持中国香港身份证人像面中关键字段的识别，包括中文姓名、英文姓名、姓名电码、出生日期、性别、证件符号、首次签发日期、最近领用日期、身份证号、是否是永久性居民身份证；具备人像照片裁剪等扩展功能。

默认接口请求频率限制：5次/秒。
                 * @param req HKIDCardOCRRequest
                 * @return HKIDCardOCROutcome
                 */
                HKIDCardOCROutcome HKIDCardOCR(const Model::HKIDCardOCRRequest &request);
                void HKIDCardOCRAsync(const Model::HKIDCardOCRRequest& request, const HKIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HKIDCardOCROutcomeCallable HKIDCardOCRCallable(const Model::HKIDCardOCRRequest& request);

                /**
                 *港澳台居住证OCR支持港澳台居住证正反面全字段内容检测识别功能，包括姓名、性别、出生日期、地址、身份证号、签发机关、有效期限、签发次数、通行证号码关键字段识别。可以应用于港澳台居住证信息识别场景，例如银行开户、用户注册等。

默认接口请求频率限制：20次/秒。
                 * @param req HmtResidentPermitOCRRequest
                 * @return HmtResidentPermitOCROutcome
                 */
                HmtResidentPermitOCROutcome HmtResidentPermitOCR(const Model::HmtResidentPermitOCRRequest &request);
                void HmtResidentPermitOCRAsync(const Model::HmtResidentPermitOCRRequest& request, const HmtResidentPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HmtResidentPermitOCROutcomeCallable HmtResidentPermitOCRCallable(const Model::HmtResidentPermitOCRRequest& request);

                /**
                 *本接口支持中国大陆居民二代身份证正反面所有字段的识别，包括姓名、性别、民族、出生日期、住址、公民身份证号、签发机关、有效期限，识别准确度达到99%以上。

另外，本接口还支持多种扩展能力，满足不同场景的需求。如身份证照片、人像照片的裁剪功能，同时具备8种告警功能，如下表所示。

<table style="width:650px">
      <thead>
        <tr>
       <th width="150">扩展能力</th>
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
          <td>身份证有效日期不合法，即有效日期不符合5年、10年、20年、长期期限

</td>
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
          <td>身份证疑似存在PS痕迹告警</td>
        </tr>
          <tr>
          <td>图片模糊告警（可根据图片质量分数判断）</td>
        </tr>
      </tbody>
    </table>

默认接口请求频率限制：20次/秒。
                 * @param req IDCardOCRRequest
                 * @return IDCardOCROutcome
                 */
                IDCardOCROutcome IDCardOCR(const Model::IDCardOCRRequest &request);
                void IDCardOCRAsync(const Model::IDCardOCRRequest& request, const IDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IDCardOCROutcomeCallable IDCardOCRCallable(const Model::IDCardOCRRequest& request);

                /**
                 *文本图像增强是面向文档类图片提供的图像增强处理能力，包括切边增强、图像矫正、阴影去除、摩尔纹去除等；可以有效优化文档类的图片质量，提升文字的清晰度。

默认接口请求频率限制：10次/秒。
                 * @param req ImageEnhancementRequest
                 * @return ImageEnhancementOutcome
                 */
                ImageEnhancementOutcome ImageEnhancement(const Model::ImageEnhancementRequest &request);
                void ImageEnhancementAsync(const Model::ImageEnhancementRequest& request, const ImageEnhancementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageEnhancementOutcomeCallable ImageEnhancementCallable(const Model::ImageEnhancementRequest& request);

                /**
                 *本接口支持事业单位法人证书关键字段识别，包括注册号、有效期、住所、名称、法定代表人等。

默认接口请求频率限制：5次/秒。
                 * @param req InstitutionOCRRequest
                 * @return InstitutionOCROutcome
                 */
                InstitutionOCROutcome InstitutionOCR(const Model::InstitutionOCRRequest &request);
                void InstitutionOCRAsync(const Model::InstitutionOCRRequest& request, const InstitutionOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstitutionOCROutcomeCallable InstitutionOCRCallable(const Model::InstitutionOCRRequest& request);

                /**
                 *本接口支持病案首页、费用清单、结算单、医疗发票四种保险理赔单据的文本识别和结构化输出。

默认接口请求频率限制：1次/秒。
                 * @param req InsuranceBillOCRRequest
                 * @return InsuranceBillOCROutcome
                 */
                InsuranceBillOCROutcome InsuranceBillOCR(const Model::InsuranceBillOCRRequest &request);
                void InsuranceBillOCRAsync(const Model::InsuranceBillOCRRequest& request, const InsuranceBillOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InsuranceBillOCROutcomeCallable InsuranceBillOCRCallable(const Model::InsuranceBillOCRRequest& request);

                /**
                 *本接口支持对通用机打发票的发票代码、发票号码、日期、合计金额(小写)、合计金额(大写)、购买方识别号、销售方识别号、校验码、购买方名称、销售方名称、时间、种类、发票消费类型、省、市、是否有公司印章、发票名称、购买方地址、电话、销售方地址、电话、购买方开户行及账号、销售方开户行及账号、经办人取票用户、经办人支付信息、经办人商户号、经办人订单号、货物或应税劳务、服务名称、数量、单价、税率、税额、金额、单位、规格型号、合计税额、合计金额、备注、收款人、复核、开票人、密码区、行业分类等字段的识别。

默认接口请求频率限制：5次/秒。
                 * @param req InvoiceGeneralOCRRequest
                 * @return InvoiceGeneralOCROutcome
                 */
                InvoiceGeneralOCROutcome InvoiceGeneralOCR(const Model::InvoiceGeneralOCRRequest &request);
                void InvoiceGeneralOCRAsync(const Model::InvoiceGeneralOCRRequest& request, const InvoiceGeneralOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvoiceGeneralOCROutcomeCallable InvoiceGeneralOCRCallable(const Model::InvoiceGeneralOCRRequest& request);

                /**
                 *本接口支持对中国大陆机动车车牌的自动定位和识别，返回地域编号和车牌号码与车牌颜色信息。

默认接口请求频率限制：10次/秒。
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
                 *本接口支持以及其他国家、地区的护照识别。识别字段包括护照ID、姓名、出生日期、性别、有效期、发行国、国籍、国家地区代码，具备护照人像照片的裁剪功能和翻拍、复印件告警功能。
本接口支持地区范围：可机读护照国家。包括中国港澳台地区、新加坡、马来西亚、泰国、美国、韩国、越南、澳大利亚、缅甸、印度尼西亚、日本、加拿大、老挝、巴基斯坦、哈萨克斯坦、法国、英国、德国、菲律宾、新西兰、印度、意大利、蒙古、孟加拉国、尼日利亚、柬埔寨、西班牙、摩洛哥、吉尔吉斯斯坦、埃及、荷兰、塔吉克斯坦、巴西、乌兹别克斯坦、伊拉克、阿尔及利亚、土耳其、南非、墨西哥、尼泊尔、白俄罗斯、叶门、阿富汗、沙特、肯尼亚、波兰、比利时、瑞典、奥地利、坦桑尼亚、委内瑞拉、阿根廷、喀麦隆、斯里兰卡、衣索比亚、约旦、瑞士、加纳、爱尔兰、哥伦比亚、苏丹、匈牙利、罗马尼亚、阿联酋、文莱、希腊、以色列、巴拿马、丹麦、伊朗、乌干达、挪威、秘鲁、葡萄牙、智利、塞尔维亚、芬兰、尚比亚、亚美尼亚、叙利亚、黎巴嫩、斯洛伐克、卡塔尔、古巴、朝鲜。

默认接口请求频率限制：5次/秒。
                 * @param req MLIDPassportOCRRequest
                 * @return MLIDPassportOCROutcome
                 */
                MLIDPassportOCROutcome MLIDPassportOCR(const Model::MLIDPassportOCRRequest &request);
                void MLIDPassportOCRAsync(const Model::MLIDPassportOCRRequest& request, const MLIDPassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDPassportOCROutcomeCallable MLIDPassportOCRCallable(const Model::MLIDPassportOCRRequest& request);

                /**
                 *智能识别并结构化港澳台居民来往内地通行证正面全部字段，包含中文姓名、英文姓名、性别、出生日期、签发机关、有效期限、证件号、签发地点、签发次数、证件类别。

默认接口请求频率限制：20次/秒。
                 * @param req MainlandPermitOCRRequest
                 * @return MainlandPermitOCROutcome
                 */
                MainlandPermitOCROutcome MainlandPermitOCR(const Model::MainlandPermitOCRRequest &request);
                void MainlandPermitOCRAsync(const Model::MainlandPermitOCRRequest& request, const MainlandPermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MainlandPermitOCROutcomeCallable MainlandPermitOCRCallable(const Model::MainlandPermitOCRRequest& request);

                /**
                 *本接口支持多张、多类型票据的混合检测和自动分类，返回对应票据类型。目前已支持增值税发票、增值税发票（卷票）、定额发票、通用机打发票、购车发票、火车票、出租车发票、机票行程单、汽车票、轮船票、过路过桥费发票、酒店账单、客运限额发票、购物小票、完税证明共15种票据。
默认接口请求频率限制：5次/秒。
                 * @param req MixedInvoiceDetectRequest
                 * @return MixedInvoiceDetectOutcome
                 */
                MixedInvoiceDetectOutcome MixedInvoiceDetect(const Model::MixedInvoiceDetectRequest &request);
                void MixedInvoiceDetectAsync(const Model::MixedInvoiceDetectRequest& request, const MixedInvoiceDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MixedInvoiceDetectOutcomeCallable MixedInvoiceDetectCallable(const Model::MixedInvoiceDetectRequest& request);

                /**
                 *本接口支持 单张、多张、多类型 票据的混合识别，同时支持自选需要识别的票据类型，已支持票种包括：增值税发票（专票、普票、卷票）、全电发票、非税发票、定额发票、通用机打发票、购车发票、火车票、出租车发票、机票行程单、汽车票、轮船票、过路过桥费发票共14种标准报销发票，并支持其他类发票的识别。

默认接口请求频率限制：5次/秒。
                 * @param req MixedInvoiceOCRRequest
                 * @return MixedInvoiceOCROutcome
                 */
                MixedInvoiceOCROutcome MixedInvoiceOCR(const Model::MixedInvoiceOCRRequest &request);
                void MixedInvoiceOCRAsync(const Model::MixedInvoiceOCRRequest& request, const MixedInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MixedInvoiceOCROutcomeCallable MixedInvoiceOCRCallable(const Model::MixedInvoiceOCRRequest& request);

                /**
                 *本接口支持组织机构代码证关键字段的识别，包括代码、有效期、地址、机构名称等。

默认接口请求频率限制：5次/秒。
                 * @param req OrgCodeCertOCRRequest
                 * @return OrgCodeCertOCROutcome
                 */
                OrgCodeCertOCROutcome OrgCodeCertOCR(const Model::OrgCodeCertOCRRequest &request);
                void OrgCodeCertOCRAsync(const Model::OrgCodeCertOCRRequest& request, const OrgCodeCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OrgCodeCertOCROutcomeCallable OrgCodeCertOCRCallable(const Model::OrgCodeCertOCRRequest& request);

                /**
                 *本接口支持中国大陆地区护照个人资料页多个字段的检测与识别。已支持字段包括英文姓名、中文姓名、国家码、护照号、出生地、出生日期、国籍英文、性别英文、有效期、签发地点英文、签发日期、持证人签名、护照机读码（MRZ码）等。

默认接口请求频率限制：10次/秒。
                 * @param req PassportOCRRequest
                 * @return PassportOCROutcome
                 */
                PassportOCROutcome PassportOCR(const Model::PassportOCRRequest &request);
                void PassportOCRAsync(const Model::PassportOCRRequest& request, const PassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PassportOCROutcomeCallable PassportOCRCallable(const Model::PassportOCRRequest& request);

                /**
                 *本接口支持对卡式港澳台通行证的识别，包括签发地点、签发机关、有效期限、性别、出生日期、英文姓名、姓名、证件号等字段。

默认接口请求频率限制：10次/秒。
                 * @param req PermitOCRRequest
                 * @return PermitOCROutcome
                 */
                PermitOCROutcome PermitOCR(const Model::PermitOCRRequest &request);
                void PermitOCRAsync(const Model::PermitOCRRequest& request, const PermitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PermitOCROutcomeCallable PermitOCRCallable(const Model::PermitOCRRequest& request);

                /**
                 *本接口支持房产证关键字段的识别，包括房地产权利人、共有情况、登记时间、规划用途、房屋性质、房屋坐落等。
目前接口对合肥、成都、佛山三个城市的房产证版式识别较好。

默认接口请求频率限制：5次/秒。
                 * @param req PropOwnerCertOCRRequest
                 * @return PropOwnerCertOCROutcome
                 */
                PropOwnerCertOCROutcome PropOwnerCertOCR(const Model::PropOwnerCertOCRRequest &request);
                void PropOwnerCertOCRAsync(const Model::PropOwnerCertOCRRequest& request, const PropOwnerCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PropOwnerCertOCROutcomeCallable PropOwnerCertOCRCallable(const Model::PropOwnerCertOCRRequest& request);

                /**
                 *本接口支持条形码和二维码的识别（包括 DataMatrix 和 PDF417）。

默认接口请求频率限制：5次/秒。
                 * @param req QrcodeOCRRequest
                 * @return QrcodeOCROutcome
                 */
                QrcodeOCROutcome QrcodeOCR(const Model::QrcodeOCRRequest &request);
                void QrcodeOCRAsync(const Model::QrcodeOCRRequest& request, const QrcodeOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QrcodeOCROutcomeCallable QrcodeOCRCallable(const Model::QrcodeOCRRequest& request);

                /**
                 *题目识别是教育的基础OCR识别能力。可支持扫描、拍照场景的单题题目识别。接口支持印刷体文本、手写体文本及公式的OCR识别和坐标返回，此外，接口还可对题目中的配图位置进行检测并返回坐标位置。适用于智能批改等场景的题目内容识别作为检索输入。

默认接口请求频率限制：2次/秒。
                 * @param req QuestionOCRRequest
                 * @return QuestionOCROutcome
                 */
                QuestionOCROutcome QuestionOCR(const Model::QuestionOCRRequest &request);
                void QuestionOCRAsync(const Model::QuestionOCRRequest& request, const QuestionOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuestionOCROutcomeCallable QuestionOCRCallable(const Model::QuestionOCRRequest& request);

                /**
                 *试卷切题识别可将整页练习册、试卷或教辅中的题目进行自动切题，并识别出其中的文字内容和坐标位置。

默认接口请求频率限制：2次/秒。
                 * @param req QuestionSplitOCRRequest
                 * @return QuestionSplitOCROutcome
                 */
                QuestionSplitOCROutcome QuestionSplitOCR(const Model::QuestionSplitOCRRequest &request);
                void QuestionSplitOCRAsync(const Model::QuestionSplitOCRRequest& request, const QuestionSplitOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuestionSplitOCROutcomeCallable QuestionSplitOCRCallable(const Model::QuestionSplitOCRRequest& request);

                /**
                 *本接口支持定额发票的发票号码、发票代码、金额(大小写)、发票消费类型、地区及是否有公司印章等关键字段的识别。

默认接口请求频率限制：5次/秒。
                 * @param req QuotaInvoiceOCRRequest
                 * @return QuotaInvoiceOCROutcome
                 */
                QuotaInvoiceOCROutcome QuotaInvoiceOCR(const Model::QuotaInvoiceOCRRequest &request);
                void QuotaInvoiceOCRAsync(const Model::QuotaInvoiceOCRRequest& request, const QuotaInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuotaInvoiceOCROutcomeCallable QuotaInvoiceOCRCallable(const Model::QuotaInvoiceOCRRequest& request);

                /**
                 *本接口支持集装箱箱门信息识别，识别字段包括集装箱箱号、类型、总重量、有效承重、容量、自身重量，具备集装箱箱号、类型不完整或者不清晰的告警功能。
默认接口请求频率限制：5次/秒。
                 * @param req RecognizeContainerOCRRequest
                 * @return RecognizeContainerOCROutcome
                 */
                RecognizeContainerOCROutcome RecognizeContainerOCR(const Model::RecognizeContainerOCRRequest &request);
                void RecognizeContainerOCRAsync(const Model::RecognizeContainerOCRRequest& request, const RecognizeContainerOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeContainerOCROutcomeCallable RecognizeContainerOCRCallable(const Model::RecognizeContainerOCRRequest& request);

                /**
                 *身份证识别（安全加密版）接口实现了数据加密传输，能够有效防止个人身份证隐私信息不被窃取泄露。

本接口支持中国大陆居民二代身份证正反面所有字段的识别，包括姓名、性别、民族、出生日期、住址、公民身份证号、签发机关、有效期限，识别准确度达到99%以上。

另外，本接口还支持多种扩展能力，满足不同场景的需求。如身份证照片、人像照片的裁剪功能，同时具备9种告警功能，如下表所示。

<table style="width:650px">
      <thead>
        <tr>
       <th width="150">扩展能力</th>
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
          <td>身份证有效日期不合法，即有效日期不符合5年、10年、20年、长期期限

</td>
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
          <td>身份证疑似存在PS痕迹告警</td>
        </tr>
          <tr>
          <td>图片模糊告警（可根据图片质量分数判断）</td>
        </tr>
      </tbody>
    </table>

默认接口请求频率限制：20次/秒。
                 * @param req RecognizeEncryptedIDCardOCRRequest
                 * @return RecognizeEncryptedIDCardOCROutcome
                 */
                RecognizeEncryptedIDCardOCROutcome RecognizeEncryptedIDCardOCR(const Model::RecognizeEncryptedIDCardOCRRequest &request);
                void RecognizeEncryptedIDCardOCRAsync(const Model::RecognizeEncryptedIDCardOCRRequest& request, const RecognizeEncryptedIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeEncryptedIDCardOCROutcomeCallable RecognizeEncryptedIDCardOCRCallable(const Model::RecognizeEncryptedIDCardOCRRequest& request);

                /**
                 *外国人永久居留身份证识别
                 * @param req RecognizeForeignPermanentResidentIdCardRequest
                 * @return RecognizeForeignPermanentResidentIdCardOutcome
                 */
                RecognizeForeignPermanentResidentIdCardOutcome RecognizeForeignPermanentResidentIdCard(const Model::RecognizeForeignPermanentResidentIdCardRequest &request);
                void RecognizeForeignPermanentResidentIdCardAsync(const Model::RecognizeForeignPermanentResidentIdCardRequest& request, const RecognizeForeignPermanentResidentIdCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeForeignPermanentResidentIdCardOutcomeCallable RecognizeForeignPermanentResidentIdCardCallable(const Model::RecognizeForeignPermanentResidentIdCardRequest& request);

                /**
                 *公式识别是教育的基础OCR识别能力，可支持理科（数学、物理、化学、生物）的印刷体和手写体的公式识别。

默认接口请求频率限制：2次/秒。
                 * @param req RecognizeFormulaOCRRequest
                 * @return RecognizeFormulaOCROutcome
                 */
                RecognizeFormulaOCROutcome RecognizeFormulaOCR(const Model::RecognizeFormulaOCRRequest &request);
                void RecognizeFormulaOCRAsync(const Model::RecognizeFormulaOCRRequest& request, const RecognizeFormulaOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeFormulaOCROutcomeCallable RecognizeFormulaOCRCallable(const Model::RecognizeFormulaOCRRequest& request);

                /**
                 *支持通用证照的有效性检测告警，包括卡证复印件告警、卡证翻拍告警等功能，支持通用证照的ps伪造检测，可以应用于各种证件信息有效性校验场景。
                 * @param req RecognizeGeneralCardWarnRequest
                 * @return RecognizeGeneralCardWarnOutcome
                 */
                RecognizeGeneralCardWarnOutcome RecognizeGeneralCardWarn(const Model::RecognizeGeneralCardWarnRequest &request);
                void RecognizeGeneralCardWarnAsync(const Model::RecognizeGeneralCardWarnRequest& request, const RecognizeGeneralCardWarnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeGeneralCardWarnOutcomeCallable RecognizeGeneralCardWarnCallable(const Model::RecognizeGeneralCardWarnRequest& request);

                /**
                 *本接口支持 PDF多页（最多30页）、一页中单张、多张、类型票据的混合识别，同时支持单选识别某类票据，已支持票种包括：增值税发票（专票、普票、卷票、区块链发票、通行费发票）、全电发票（专票、普票）、非税发票（通用票据、统一缴纳书）、定额发票、通用机打发票、购车发票（机动车销售发票、二手车发票）、火车票、出租车发票、机票行程单、汽车票、轮船票、过路过桥费发票共14种标准报销发票，支持OFD格式的 增值税电子普通发票、增值税电子专用发票、电子发票（普通发票）、电子发票（增值税专用发票）、电子发票（机票行程单）、电子发票（铁路电子客票）的第一页识别，并支持非上述类型的其他发票的智能识别，点击[立即试用](https://cloud.tencent.com/product/ocr)。

默认接口请求频率限制：5次/秒。


支持返回的细项目子票种SubType、子票种中文TypeDescription、以及对应所属大类票种Type 的说明如下列表：
<table style="width:715px">
      <thead>
        <tr>
          <th style="width:200px">SubType 子票种英文</th>
          <th style="width:200px">TypeDescription子票种中文</th>
          <th >Type 所属大类票种</th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td> VatSpecialInvoice</td>
          <td> 增值税专用发票 </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatCommonInvoice</td>
          <td> 增值税普通发票 </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicCommonInvoice </td>
          <td> 增值税电子普通发票 </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicSpecialInvoice </td>
          <td> 增值税电子专用发票 </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicInvoiceBlockchain</td>
          <td> 区块链电子发票 </td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicInvoiceToll</td>
          <td> 增值税电子普通发票(通行费)</td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatSalesList</td>
          <td> 增值税销货清单</td>
          <td> 3 </td>
        </tr>
        <tr>
          <td> VatElectronicSpecialInvoiceFull</td>
          <td> 电子发票(专用发票)</td>
          <td> 16 </td>
        </tr>
        <tr>
          <td> VatElectronicInvoiceFull</td>
          <td> 电子发票(普通发票) </td>
          <td> 16 </td>
        </tr>
         <tr>
          <td> ElectronicFlightTicketFull</td>
          <td> 电子发票(机票行程单)</td>
          <td> 16 </td>
        </tr>
         <tr>
          <td> ElectronicTrainTicketFull</td>
          <td> 电子发票(铁路电子客票)</td>
          <td> 16 </td>
        </tr>
        <tr>
          <td> MotorVehicleSaleInvoice </td>
          <td> 机动车销售统一发票 </td>
          <td> 12 </td>
        </tr>
        <tr>
          <td> UsedCarPurchaseInvoice </td>
          <td> 二手车销售统一发票 </td>
          <td> 12 </td>
        </tr>
        <tr>
          <td> VatInvoiceRoll </td>
          <td> 增值税普通发票(卷票) </td>
          <td> 11 </td>
        </tr>
        <tr>
          <td> TaxiTicket </td>
          <td> 出租车发票 </td>
          <td> 0 </td>
        </tr>
        <tr>
          <td> QuotaInvoice </td>
          <td> 定额发票 </td>
          <td> 1 </td>
        </tr>
        <tr>
          <td> TrainTicket </td>
          <td> 火车票 </td>
          <td> 2 </td>
        </tr>
        <tr>
          <td> AirTransport </td>
          <td> 机票行程单 </td>
          <td> 5 </td>
        </tr>
        <tr>
          <td> MachinePrintedInvoice </td>
          <td> 通用机打发票 </td>
          <td> 8 </td>
        </tr>
        <tr>
          <td> BusInvoice </td>
          <td> 汽车票 </td>
          <td> 9 </td>
        </tr>
        <tr>
          <td> ShippingInvoice </td>
          <td> 轮船票 </td>
          <td> 10 </td>
        </tr>
        <tr>
          <td> NonTaxIncomeGeneralBill </td>
          <td> 非税收入通用票据 </td>
          <td> 15 </td>
        </tr>
        <tr>
          <td> NonTaxIncomeElectronicBill </td>
          <td> 非税收入一般缴款书(电子) </td>
          <td> 15 </td>
        </tr>
        <tr>
          <td> TollInvoice </td>
          <td> 过路过桥费发票 </td>
          <td> 13 </td>
        </tr>
        <tr>
          <td> MedicalOutpatientInvoice </td>
          <td> 医疗门诊收费票据（电子） </td>
          <td> 17 </td>
        </tr>
        <tr>
          <td> MedicalHospitalizedInvoice </td>
          <td> 医疗住院收费票据（电子） </td>
          <td> 17 </td>
        </tr>
        <tr>
          <td> OtherInvoice </td>
          <td> 其他发票 </td>
          <td> -1 </td>
        </tr>
      </tbody>
    </table>
                 * @param req RecognizeGeneralInvoiceRequest
                 * @return RecognizeGeneralInvoiceOutcome
                 */
                RecognizeGeneralInvoiceOutcome RecognizeGeneralInvoice(const Model::RecognizeGeneralInvoiceRequest &request);
                void RecognizeGeneralInvoiceAsync(const Model::RecognizeGeneralInvoiceRequest& request, const RecognizeGeneralInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeGeneralInvoiceOutcomeCallable RecognizeGeneralInvoiceCallable(const Model::RecognizeGeneralInvoiceRequest& request);

                /**
                 *本接口支持多种类型证件有效性检测告警，包括卡证复印件告警、卡证翻拍告警等功能。可以应用于各种证件信息有效性校验场景，例如银行开户、用户注册等场景。
                 * @param req RecognizeGeneralTextImageWarnRequest
                 * @return RecognizeGeneralTextImageWarnOutcome
                 */
                RecognizeGeneralTextImageWarnOutcome RecognizeGeneralTextImageWarn(const Model::RecognizeGeneralTextImageWarnRequest &request);
                void RecognizeGeneralTextImageWarnAsync(const Model::RecognizeGeneralTextImageWarnRequest& request, const RecognizeGeneralTextImageWarnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeGeneralTextImageWarnOutcomeCallable RecognizeGeneralTextImageWarnCallable(const Model::RecognizeGeneralTextImageWarnRequest& request);

                /**
                 *本接口支持北京、上海、广东、江苏、吉林、黑龙江、天津、辽宁、浙江、河南、四川、贵州、山东、安徽、福建、江西、湖北、湖南等省份健康码的识别，包括持码人姓名、持码人身份证号、健康码更新时间、健康码颜色、核酸检测结果、核酸检测间隔时长、核酸检测时间，疫苗接种信息，八个字段的识别结果输出。不同省市健康码显示的字段信息有所不同，上述字段的识别结果可能为空，以图片上具体展示的信息为准。

默认接口请求频率限制：10次/秒。
                 * @param req RecognizeHealthCodeOCRRequest
                 * @return RecognizeHealthCodeOCROutcome
                 */
                RecognizeHealthCodeOCROutcome RecognizeHealthCodeOCR(const Model::RecognizeHealthCodeOCRRequest &request);
                void RecognizeHealthCodeOCRAsync(const Model::RecognizeHealthCodeOCRRequest& request, const RecognizeHealthCodeOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeHealthCodeOCROutcomeCallable RecognizeHealthCodeOCRCallable(const Model::RecognizeHealthCodeOCRRequest& request);

                /**
                 *医疗发票识别目前支持全国统一门诊发票、全国统一住院发票、以及部分地方的门诊和住院发票的识别。

默认接口请求频率限制：5次/秒。
                 * @param req RecognizeMedicalInvoiceOCRRequest
                 * @return RecognizeMedicalInvoiceOCROutcome
                 */
                RecognizeMedicalInvoiceOCROutcome RecognizeMedicalInvoiceOCR(const Model::RecognizeMedicalInvoiceOCRRequest &request);
                void RecognizeMedicalInvoiceOCRAsync(const Model::RecognizeMedicalInvoiceOCRRequest& request, const RecognizeMedicalInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeMedicalInvoiceOCROutcomeCallable RecognizeMedicalInvoiceOCRCallable(const Model::RecognizeMedicalInvoiceOCRRequest& request);

                /**
                 *本接口支持网约车行程单关键字段的识别，包括行程起止日期、上车时间、起点、终点、里程、金额等字段。

默认接口请求频率限制：20次/秒。
                 * @param req RecognizeOnlineTaxiItineraryOCRRequest
                 * @return RecognizeOnlineTaxiItineraryOCROutcome
                 */
                RecognizeOnlineTaxiItineraryOCROutcome RecognizeOnlineTaxiItineraryOCR(const Model::RecognizeOnlineTaxiItineraryOCRRequest &request);
                void RecognizeOnlineTaxiItineraryOCRAsync(const Model::RecognizeOnlineTaxiItineraryOCRRequest& request, const RecognizeOnlineTaxiItineraryOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeOnlineTaxiItineraryOCROutcomeCallable RecognizeOnlineTaxiItineraryOCRCallable(const Model::RecognizeOnlineTaxiItineraryOCRRequest& request);

                /**
                 *本接口用于识别门头照文字识别结果以及对应分类标签信息
默认接口请求频率限制：1次/秒
                 * @param req RecognizeStoreNameRequest
                 * @return RecognizeStoreNameOutcome
                 */
                RecognizeStoreNameOutcome RecognizeStoreName(const Model::RecognizeStoreNameRequest &request);
                void RecognizeStoreNameAsync(const Model::RecognizeStoreNameRequest& request, const RecognizeStoreNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeStoreNameOutcomeCallable RecognizeStoreNameCallable(const Model::RecognizeStoreNameRequest& request);

                /**
                 *本接口支持中英文图片/PDF内常规表格、无线表格、多表格的检测和识别，返回每个单元格的文字内容，支持旋转的表格图片识别，且支持将识别结果保存为 Excel 格式。识别效果比表格识别V2更好，覆盖场景更加广泛，对表格难例场景，如无线表格、嵌套表格（有线表格中包含无线表格）的识别效果均优于表格识别V2。

默认接口请求频率限制：2次/秒。
                 * @param req RecognizeTableAccurateOCRRequest
                 * @return RecognizeTableAccurateOCROutcome
                 */
                RecognizeTableAccurateOCROutcome RecognizeTableAccurateOCR(const Model::RecognizeTableAccurateOCRRequest &request);
                void RecognizeTableAccurateOCRAsync(const Model::RecognizeTableAccurateOCRRequest& request, const RecognizeTableAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeTableAccurateOCROutcomeCallable RecognizeTableAccurateOCRCallable(const Model::RecognizeTableAccurateOCRRequest& request);

                /**
                 *本接口支持中英文图片/ PDF内常规表格、无线表格、多表格的检测和识别，支持日文有线表格识别，返回每个单元格的文字内容，支持旋转的表格图片识别，且支持将识别结果保存为 Excel 格式。

默认接口请求频率限制：10次/秒。
                 * @param req RecognizeTableOCRRequest
                 * @return RecognizeTableOCROutcome
                 */
                RecognizeTableOCROutcome RecognizeTableOCR(const Model::RecognizeTableOCRRequest &request);
                void RecognizeTableOCRAsync(const Model::RecognizeTableOCRRequest& request, const RecognizeTableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeTableOCROutcomeCallable RecognizeTableOCRCallable(const Model::RecognizeTableOCRRequest& request);

                /**
                 *本接口支持泰国身份证识别，识别字段包括泰文姓名、英文姓名、地址、出生日期、身份证号码、首次领用日期、签发日期等字段。
本接口暂未完全对外开放，如需咨询，请[联系商务](https://cloud.tencent.com/about/connect)

默认接口请求频率限制：10次/秒
                 * @param req RecognizeThaiIDCardOCRRequest
                 * @return RecognizeThaiIDCardOCROutcome
                 */
                RecognizeThaiIDCardOCROutcome RecognizeThaiIDCardOCR(const Model::RecognizeThaiIDCardOCRRequest &request);
                void RecognizeThaiIDCardOCRAsync(const Model::RecognizeThaiIDCardOCRRequest& request, const RecognizeThaiIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeThaiIDCardOCROutcomeCallable RecognizeThaiIDCardOCRCallable(const Model::RecognizeThaiIDCardOCRRequest& request);

                /**
                 *本接口支持通信大数据行程卡识别，包括行程卡颜色、更新时间、途经地、存在中高风险地区的城市、电话号码，五个字段的识别结果输出。

默认接口请求频率限制：20次/秒。
                 * @param req RecognizeTravelCardOCRRequest
                 * @return RecognizeTravelCardOCROutcome
                 */
                RecognizeTravelCardOCROutcome RecognizeTravelCardOCR(const Model::RecognizeTravelCardOCRRequest &request);
                void RecognizeTravelCardOCRAsync(const Model::RecognizeTravelCardOCRRequest& request, const RecognizeTravelCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeTravelCardOCROutcomeCallable RecognizeTravelCardOCRCallable(const Model::RecognizeTravelCardOCRRequest& request);

                /**
                 *本接口支持二代身份证、临时身份证、港澳台居住证、外国人永久居留证，字段内容识别功能，包括姓名、性别、民族、出生、出生日期、住址、公民身份号码、签发机关、有效期限、国籍、通行证号码、持证人持有号码；支持返回证件类型；支持翻拍、复印、边框不完整、遮挡、字段级反光和字段级完整性告警；支持卡片主体框裁剪和头像裁剪。

默认接口请求频率限制：20次/秒。
                 * @param req RecognizeValidIDCardOCRRequest
                 * @return RecognizeValidIDCardOCROutcome
                 */
                RecognizeValidIDCardOCROutcome RecognizeValidIDCardOCR(const Model::RecognizeValidIDCardOCRRequest &request);
                void RecognizeValidIDCardOCRAsync(const Model::RecognizeValidIDCardOCRRequest& request, const RecognizeValidIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeValidIDCardOCROutcomeCallable RecognizeValidIDCardOCRCallable(const Model::RecognizeValidIDCardOCRRequest& request);

                /**
                 *服务已迁移至 [文档解析](https://cloud.tencent.com/document/product/1759/107504)，请跳转查看接口文档。该接口支持将图片或PDF文件转换成Markdown格式文件，可解析包括表格、公式、图片、标题、段落、页眉、页脚等内容元素，并将内容智能转换成阅读顺序。
                 * @param req ReconstructDocumentRequest
                 * @return ReconstructDocumentOutcome
                 */
                ReconstructDocumentOutcome ReconstructDocument(const Model::ReconstructDocumentRequest &request);
                void ReconstructDocumentAsync(const Model::ReconstructDocumentRequest& request, const ReconstructDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReconstructDocumentOutcomeCallable ReconstructDocumentCallable(const Model::ReconstructDocumentRequest& request);

                /**
                 *本接口支持居民户口簿户主页及成员页关键字段的识别，包括姓名、户别、地址、籍贯、身份证号码等。

默认接口请求频率限制：5次/秒。
                 * @param req ResidenceBookletOCRRequest
                 * @return ResidenceBookletOCROutcome
                 */
                ResidenceBookletOCROutcome ResidenceBookletOCR(const Model::ResidenceBookletOCRRequest &request);
                void ResidenceBookletOCRAsync(const Model::ResidenceBookletOCRRequest& request, const ResidenceBookletOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResidenceBookletOCROutcomeCallable ResidenceBookletOCRCallable(const Model::ResidenceBookletOCRRequest& request);

                /**
                 *本接口支持网约车驾驶证关键字段的识别，包括姓名、证号、起始日期、截止日期、发证日期。

默认接口请求频率限制：5次/秒。
                 * @param req RideHailingDriverLicenseOCRRequest
                 * @return RideHailingDriverLicenseOCROutcome
                 */
                RideHailingDriverLicenseOCROutcome RideHailingDriverLicenseOCR(const Model::RideHailingDriverLicenseOCRRequest &request);
                void RideHailingDriverLicenseOCRAsync(const Model::RideHailingDriverLicenseOCRRequest& request, const RideHailingDriverLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RideHailingDriverLicenseOCROutcomeCallable RideHailingDriverLicenseOCRCallable(const Model::RideHailingDriverLicenseOCRRequest& request);

                /**
                 *本接口支持网约车运输证关键字段的识别，包括交运管许可字号、车辆所有人、车辆号牌、起始日期、截止日期、发证日期。

默认接口请求频率限制：5次/秒。
                 * @param req RideHailingTransportLicenseOCRRequest
                 * @return RideHailingTransportLicenseOCROutcome
                 */
                RideHailingTransportLicenseOCROutcome RideHailingTransportLicenseOCR(const Model::RideHailingTransportLicenseOCRRequest &request);
                void RideHailingTransportLicenseOCRAsync(const Model::RideHailingTransportLicenseOCRRequest& request, const RideHailingTransportLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RideHailingTransportLicenseOCROutcomeCallable RideHailingTransportLicenseOCRCallable(const Model::RideHailingTransportLicenseOCRRequest& request);

                /**
                 *本接口支持各类印章主体内容、印章其他内容及形状识别，支持单图多印章识别，包括发票章、财务章等，适用于公文票据等场景。

默认接口请求频率限制：5次/秒。
                 * @param req SealOCRRequest
                 * @return SealOCROutcome
                 */
                SealOCROutcome SealOCR(const Model::SealOCRRequest &request);
                void SealOCRAsync(const Model::SealOCRRequest& request, const SealOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SealOCROutcomeCallable SealOCRCallable(const Model::SealOCRRequest& request);

                /**
                 *本接口支持识别轮船票的发票代码、发票号码、日期、姓名、票价、始发地、目的地、姓名、时间、发票消费类型、省、市、币种字段。

默认接口请求频率限制：5次/秒。
                 * @param req ShipInvoiceOCRRequest
                 * @return ShipInvoiceOCROutcome
                 */
                ShipInvoiceOCROutcome ShipInvoiceOCR(const Model::ShipInvoiceOCRRequest &request);
                void ShipInvoiceOCRAsync(const Model::ShipInvoiceOCRRequest& request, const ShipInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ShipInvoiceOCROutcomeCallable ShipInvoiceOCRCallable(const Model::ShipInvoiceOCRRequest& request);

                /**
                 *本接口支持识别并提取各类证照、票据、表单、合同等结构化场景的字段信息。无需任何配置，灵活高效。适用于各类结构化信息录入场景。

默认接口请求频率限制：5次/秒。
                 * @param req SmartStructuralOCRRequest
                 * @return SmartStructuralOCROutcome
                 */
                SmartStructuralOCROutcome SmartStructuralOCR(const Model::SmartStructuralOCRRequest &request);
                void SmartStructuralOCRAsync(const Model::SmartStructuralOCRRequest& request, const SmartStructuralOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SmartStructuralOCROutcomeCallable SmartStructuralOCRCallable(const Model::SmartStructuralOCRRequest& request);

                /**
                 *本接口支持智能提取各类证照、票据、表单、合同等结构化场景的key:value字段信息，并支持提取表格信息的key:value组的结构化，灵活高效，适用于各类非标准材料的信息录入场景，点击[立即体验](https://ocrdemo.cloud.tencent.com/)。

默认接口请求频率限制：5次/秒。
                 * @param req SmartStructuralOCRV2Request
                 * @return SmartStructuralOCRV2Outcome
                 */
                SmartStructuralOCRV2Outcome SmartStructuralOCRV2(const Model::SmartStructuralOCRV2Request &request);
                void SmartStructuralOCRV2Async(const Model::SmartStructuralOCRV2Request& request, const SmartStructuralOCRV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SmartStructuralOCRV2OutcomeCallable SmartStructuralOCRV2Callable(const Model::SmartStructuralOCRV2Request& request);

                /**
                 *本接口支持智能提取各类证照、票据、表单、合同等结构化场景的key:value字段信息，并支持提取表格信息的key:value组的结构化，灵活高效，适用于各类非标准材料的信息录入场景，点击[立即体验](https://ocrdemo.cloud.tencent.com/)。

默认接口请求频率限制：5次/秒。
                 * @param req SmartStructuralProRequest
                 * @return SmartStructuralProOutcome
                 */
                SmartStructuralProOutcome SmartStructuralPro(const Model::SmartStructuralProRequest &request);
                void SmartStructuralProAsync(const Model::SmartStructuralProRequest& request, const SmartStructuralProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SmartStructuralProOutcomeCallable SmartStructuralProCallable(const Model::SmartStructuralProRequest& request);

                /**
                 *<b>此接口为表格识别的旧版本服务，不再进行服务升级，建议您使用识别能力更强、服务性能更优的<a href="https://cloud.tencent.com/document/product/866/49525">新版表格识别</a>。</b>

本接口支持图片内表格文档的检测和识别，返回每个单元格的文字内容，支持将识别结果保存为 Excel 格式。

默认接口请求频率限制：10次/秒。
                 * @param req TableOCRRequest
                 * @return TableOCROutcome
                 */
                TableOCROutcome TableOCR(const Model::TableOCRRequest &request);
                void TableOCRAsync(const Model::TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TableOCROutcomeCallable TableOCRCallable(const Model::TableOCRRequest& request);

                /**
                 *本接口支持出租车发票关键字段的识别，包括发票号码、发票代码、金额、日期、上下车时间、里程、车牌号、发票类型及所属地区等字段。

默认接口请求频率限制：5次/秒。
                 * @param req TaxiInvoiceOCRRequest
                 * @return TaxiInvoiceOCROutcome
                 */
                TaxiInvoiceOCROutcome TaxiInvoiceOCR(const Model::TaxiInvoiceOCRRequest &request);
                void TaxiInvoiceOCRAsync(const Model::TaxiInvoiceOCRRequest& request, const TaxiInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TaxiInvoiceOCROutcomeCallable TaxiInvoiceOCRCallable(const Model::TaxiInvoiceOCRRequest& request);

                /**
                 *本接口通过检测图片中的文字信息特征，快速判断图片中有无文字并返回判断结果，帮助用户过滤无文字的图片。

默认接口请求频率限制：5次/秒。
                 * @param req TextDetectRequest
                 * @return TextDetectOutcome
                 */
                TextDetectOutcome TextDetect(const Model::TextDetectRequest &request);
                void TextDetectAsync(const Model::TextDetectRequest& request, const TextDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextDetectOutcomeCallable TextDetectCallable(const Model::TextDetectRequest& request);

                /**
                 *本接口支持过路过桥费发票关键字段的识别，包括发票代码、发票号码、日期、金额、入口、出口、时间、发票消费类型、高速标志等。

默认接口请求频率限制：5次/秒。
                 * @param req TollInvoiceOCRRequest
                 * @return TollInvoiceOCROutcome
                 */
                TollInvoiceOCROutcome TollInvoiceOCR(const Model::TollInvoiceOCRRequest &request);
                void TollInvoiceOCRAsync(const Model::TollInvoiceOCRRequest& request, const TollInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TollInvoiceOCROutcomeCallable TollInvoiceOCRCallable(const Model::TollInvoiceOCRRequest& request);

                /**
                 *本接口支持火车票全字段的识别，包括编号、出发站、到达站、出发时间、车次、座位号、姓名、票价、席别、身份证号、发票消费类型、序列号、加收票价、手续费、大写金额、售票站、原票价、发票类型、收据号码、是否仅供报销使用等字段的识别。

默认接口请求频率限制：5次/秒。
                 * @param req TrainTicketOCRRequest
                 * @return TrainTicketOCROutcome
                 */
                TrainTicketOCROutcome TrainTicketOCR(const Model::TrainTicketOCRRequest &request);
                void TrainTicketOCRAsync(const Model::TrainTicketOCRRequest& request, const TrainTicketOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrainTicketOCROutcomeCallable TrainTicketOCRCallable(const Model::TrainTicketOCRRequest& request);

                /**
                 *本接口支持增值税专用发票、增值税普通发票、增值税电子专票、增值税电子普票、电子发票（普通发票）、电子发票（增值税专用发票）全字段的内容检测和识别，包括发票代码、发票号码、打印发票代码、打印发票号码、开票日期、合计金额、校验码、税率、合计税额、价税合计、购买方识别号、复核、销售方识别号、开票人、密码区1、密码区2、密码区3、密码区4、发票名称、购买方名称、销售方名称、服务名称、备注、规格型号、数量、单价、金额、税额、收款人等字段，点击[立即试用](https://cloud.tencent.com/product/ocr)。

默认接口请求频率限制：10次/秒。
                 * @param req VatInvoiceOCRRequest
                 * @return VatInvoiceOCROutcome
                 */
                VatInvoiceOCROutcome VatInvoiceOCR(const Model::VatInvoiceOCRRequest &request);
                void VatInvoiceOCRAsync(const Model::VatInvoiceOCRRequest& request, const VatInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VatInvoiceOCROutcomeCallable VatInvoiceOCRCallable(const Model::VatInvoiceOCRRequest& request);

                /**
                 *已上线VatInvoiceVerifyNew，VatInvoiceVerify需要下线，产品在官网已发通告

本接口支持增值税发票的准确性核验，您可以通过输入增值税发票的关键字段提供所需的验证信息，接口返回真实的票面相关信息，包括发票代码、发票号码、开票日期、金额、消费类型、购方名称、购方税号、销方名称、销方税号等多个常用字段。支持多种发票类型核验，包括增值税专用发票、增值税普通发票（含电子普通发票、卷式发票、通行费发票）、全电发票、机动车销售统一发票、货物运输业增值税专用发票、二手车销售统一发票。

默认接口请求频率限制：20次/秒。
                 * @param req VatInvoiceVerifyRequest
                 * @return VatInvoiceVerifyOutcome
                 */
                VatInvoiceVerifyOutcome VatInvoiceVerify(const Model::VatInvoiceVerifyRequest &request);
                void VatInvoiceVerifyAsync(const Model::VatInvoiceVerifyRequest& request, const VatInvoiceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VatInvoiceVerifyOutcomeCallable VatInvoiceVerifyCallable(const Model::VatInvoiceVerifyRequest& request);

                /**
                 *本接口支持增值税发票的准确性核验，您可以通过输入增值税发票的关键字段提供所需的验证信息，接口返回真实的票面相关信息，包括发票代码、发票号码、开票日期、金额、消费类型、购方名称、购方税号、销方名称、销方税号等多个常用字段。支持多种发票类型核验，包括增值税专用发票、增值税普通发票（含电子普通发票、卷式发票、通行费发票）、全电发票、机动车销售统一发票、货物运输业增值税专用发票、二手车销售统一发票、通用机打电子发票（广东和浙江）。

默认接口请求频率限制：20次/秒。
                 * @param req VatInvoiceVerifyNewRequest
                 * @return VatInvoiceVerifyNewOutcome
                 */
                VatInvoiceVerifyNewOutcome VatInvoiceVerifyNew(const Model::VatInvoiceVerifyNewRequest &request);
                void VatInvoiceVerifyNewAsync(const Model::VatInvoiceVerifyNewRequest& request, const VatInvoiceVerifyNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VatInvoiceVerifyNewOutcomeCallable VatInvoiceVerifyNewCallable(const Model::VatInvoiceVerifyNewRequest& request);

                /**
                 *本接口支持对增值税发票（卷票）关键字段的识别，包括的发票代码、合计金额(小写)、合计金额(大写)、开票日期、发票号码、购买方识别号、销售方识别号、校验码、销售方名称、购买方名称、发票消费类型、省、市、是否有公司印章、单价、金额、数量、服务类型、品名、种类等。

默认接口请求频率限制：5次/秒。
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

另外，本接口还支持复印件、翻拍告警功能。

默认接口请求频率限制：10次/秒。
                 * @param req VehicleLicenseOCRRequest
                 * @return VehicleLicenseOCROutcome
                 */
                VehicleLicenseOCROutcome VehicleLicenseOCR(const Model::VehicleLicenseOCRRequest &request);
                void VehicleLicenseOCRAsync(const Model::VehicleLicenseOCRRequest& request, const VehicleLicenseOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VehicleLicenseOCROutcomeCallable VehicleLicenseOCRCallable(const Model::VehicleLicenseOCRRequest& request);

                /**
                 *本接口支持国内机动车登记证书主要字段的结构化识别，包括机动车所有人、身份证明名称、号码、车辆型号、车辆识别代号、发动机号、制造厂名称等。

默认接口请求频率限制：5次/秒。
                 * @param req VehicleRegCertOCRRequest
                 * @return VehicleRegCertOCROutcome
                 */
                VehicleRegCertOCROutcome VehicleRegCertOCR(const Model::VehicleRegCertOCRRequest &request);
                void VehicleRegCertOCRAsync(const Model::VehicleRegCertOCRRequest& request, const VehicleRegCertOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VehicleRegCertOCROutcomeCallable VehicleRegCertOCRCallable(const Model::VehicleRegCertOCRRequest& request);

                /**
                 *本接口支持OFD格式的 增值税电子普通发票、增值税电子专用发票、电子发票（普通发票）、电子发票（增值税专用发票）、电子发票（铁路电子客票）、电子发票（航空运输电子客票行程单）识别，返回发票代码、发票号码、开票日期、验证码、机器编号、密码区，购买方和销售方信息，包括名称、纳税人识别号、地址电话、开户行及账号，以及价税合计、开票人、收款人、复核人、税额、不含税金额等字段信息。
                 * @param req VerifyOfdVatInvoiceOCRRequest
                 * @return VerifyOfdVatInvoiceOCROutcome
                 */
                VerifyOfdVatInvoiceOCROutcome VerifyOfdVatInvoiceOCR(const Model::VerifyOfdVatInvoiceOCRRequest &request);
                void VerifyOfdVatInvoiceOCRAsync(const Model::VerifyOfdVatInvoiceOCRRequest& request, const VerifyOfdVatInvoiceOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyOfdVatInvoiceOCROutcomeCallable VerifyOfdVatInvoiceOCRCallable(const Model::VerifyOfdVatInvoiceOCRRequest& request);

                /**
                 *本接口支持图片内车辆识别代号（VIN）的检测和识别。
默认接口请求频率限制：10次/秒。
                 * @param req VinOCRRequest
                 * @return VinOCROutcome
                 */
                VinOCROutcome VinOCR(const Model::VinOCRRequest &request);
                void VinOCRAsync(const Model::VinOCRRequest& request, const VinOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VinOCROutcomeCallable VinOCRCallable(const Model::VinOCRRequest& request);

                /**
                 *本接口支持市面上主流版式电子运单的识别，包括收件人和寄件人的姓名、电话、地址以及运单号等字段。

默认接口请求频率限制：10次/秒。
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
