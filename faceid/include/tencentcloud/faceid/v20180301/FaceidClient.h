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

#ifndef TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
#define TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/faceid/v20180301/model/ApplyLivenessTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/ApplyLivenessTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/ApplyWebVerificationTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/ApplyWebVerificationTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/BankCard2EVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCard2EVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/BankCard4EVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCard4EVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/BankCardVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCardVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckBankCardInformationRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckBankCardInformationResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckEidTokenStatusRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckEidTokenStatusResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdCardInformationRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdCardInformationResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdNameDateRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdNameDateResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckPhoneAndNameRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckPhoneAndNameResponse.h>
#include <tencentcloud/faceid/v20180301/model/CreateUploadUrlRequest.h>
#include <tencentcloud/faceid/v20180301/model/CreateUploadUrlResponse.h>
#include <tencentcloud/faceid/v20180301/model/DetectAuthRequest.h>
#include <tencentcloud/faceid/v20180301/model/DetectAuthResponse.h>
#include <tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareResponse.h>
#include <tencentcloud/faceid/v20180301/model/EncryptedPhoneVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/EncryptedPhoneVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/GenerateReflectSequenceRequest.h>
#include <tencentcloud/faceid/v20180301/model/GenerateReflectSequenceResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetActionSequenceRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetActionSequenceResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoEnhancedRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoEnhancedResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetEidResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetEidResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetEidTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetEidTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetLiveCodeRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetLiveCodeResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetLivenessResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetLivenessResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetRealNameAuthResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetRealNameAuthResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetRealNameAuthTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetRealNameAuthTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetSdkVerificationResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetSdkVerificationResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetWeChatBillDetailsRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetWeChatBillDetailsResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetWebVerificationResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/IdCardOCRVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/IdCardOCRVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/IdCardVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/IdCardVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/ImageRecognitionRequest.h>
#include <tencentcloud/faceid/v20180301/model/ImageRecognitionResponse.h>
#include <tencentcloud/faceid/v20180301/model/LivenessRequest.h>
#include <tencentcloud/faceid/v20180301/model/LivenessResponse.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareResponse.h>
#include <tencentcloud/faceid/v20180301/model/LivenessRecognitionRequest.h>
#include <tencentcloud/faceid/v20180301/model/LivenessRecognitionResponse.h>
#include <tencentcloud/faceid/v20180301/model/MinorsVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/MinorsVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/MobileNetworkTimeVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/MobileNetworkTimeVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/MobileStatusRequest.h>
#include <tencentcloud/faceid/v20180301/model/MobileStatusResponse.h>
#include <tencentcloud/faceid/v20180301/model/ParseNfcDataRequest.h>
#include <tencentcloud/faceid/v20180301/model/ParseNfcDataResponse.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationCMCCRequest.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationCMCCResponse.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationCTCCRequest.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationCTCCResponse.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationCUCCRequest.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationCUCCResponse.h>
#include <tencentcloud/faceid/v20180301/model/VideoLivenessCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/VideoLivenessCompareResponse.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            class FaceidClient : public AbstractClient
            {
            public:
                FaceidClient(const Credential &credential, const std::string &region);
                FaceidClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyLivenessTokenResponse> ApplyLivenessTokenOutcome;
                typedef std::future<ApplyLivenessTokenOutcome> ApplyLivenessTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ApplyLivenessTokenRequest&, ApplyLivenessTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyLivenessTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplySdkVerificationTokenResponse> ApplySdkVerificationTokenOutcome;
                typedef std::future<ApplySdkVerificationTokenOutcome> ApplySdkVerificationTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ApplySdkVerificationTokenRequest&, ApplySdkVerificationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplySdkVerificationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyWebVerificationTokenResponse> ApplyWebVerificationTokenOutcome;
                typedef std::future<ApplyWebVerificationTokenOutcome> ApplyWebVerificationTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ApplyWebVerificationTokenRequest&, ApplyWebVerificationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyWebVerificationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::BankCard2EVerificationResponse> BankCard2EVerificationOutcome;
                typedef std::future<BankCard2EVerificationOutcome> BankCard2EVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCard2EVerificationRequest&, BankCard2EVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCard2EVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::BankCard4EVerificationResponse> BankCard4EVerificationOutcome;
                typedef std::future<BankCard4EVerificationOutcome> BankCard4EVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCard4EVerificationRequest&, BankCard4EVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCard4EVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::BankCardVerificationResponse> BankCardVerificationOutcome;
                typedef std::future<BankCardVerificationOutcome> BankCardVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCardVerificationRequest&, BankCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckBankCardInformationResponse> CheckBankCardInformationOutcome;
                typedef std::future<CheckBankCardInformationOutcome> CheckBankCardInformationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckBankCardInformationRequest&, CheckBankCardInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBankCardInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckEidTokenStatusResponse> CheckEidTokenStatusOutcome;
                typedef std::future<CheckEidTokenStatusOutcome> CheckEidTokenStatusOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckEidTokenStatusRequest&, CheckEidTokenStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckEidTokenStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIdCardInformationResponse> CheckIdCardInformationOutcome;
                typedef std::future<CheckIdCardInformationOutcome> CheckIdCardInformationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckIdCardInformationRequest&, CheckIdCardInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIdCardInformationAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIdNameDateResponse> CheckIdNameDateOutcome;
                typedef std::future<CheckIdNameDateOutcome> CheckIdNameDateOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckIdNameDateRequest&, CheckIdNameDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIdNameDateAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckPhoneAndNameResponse> CheckPhoneAndNameOutcome;
                typedef std::future<CheckPhoneAndNameOutcome> CheckPhoneAndNameOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckPhoneAndNameRequest&, CheckPhoneAndNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckPhoneAndNameAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUploadUrlResponse> CreateUploadUrlOutcome;
                typedef std::future<CreateUploadUrlOutcome> CreateUploadUrlOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CreateUploadUrlRequest&, CreateUploadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUploadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectAuthResponse> DetectAuthOutcome;
                typedef std::future<DetectAuthOutcome> DetectAuthOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::DetectAuthRequest&, DetectAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectAuthAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectReflectLivenessAndCompareResponse> DetectReflectLivenessAndCompareOutcome;
                typedef std::future<DetectReflectLivenessAndCompareOutcome> DetectReflectLivenessAndCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::DetectReflectLivenessAndCompareRequest&, DetectReflectLivenessAndCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectReflectLivenessAndCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::EncryptedPhoneVerificationResponse> EncryptedPhoneVerificationOutcome;
                typedef std::future<EncryptedPhoneVerificationOutcome> EncryptedPhoneVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::EncryptedPhoneVerificationRequest&, EncryptedPhoneVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EncryptedPhoneVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateReflectSequenceResponse> GenerateReflectSequenceOutcome;
                typedef std::future<GenerateReflectSequenceOutcome> GenerateReflectSequenceOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GenerateReflectSequenceRequest&, GenerateReflectSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateReflectSequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetActionSequenceResponse> GetActionSequenceOutcome;
                typedef std::future<GetActionSequenceOutcome> GetActionSequenceOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetActionSequenceRequest&, GetActionSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetActionSequenceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDetectInfoResponse> GetDetectInfoOutcome;
                typedef std::future<GetDetectInfoOutcome> GetDetectInfoOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetDetectInfoRequest&, GetDetectInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDetectInfoEnhancedResponse> GetDetectInfoEnhancedOutcome;
                typedef std::future<GetDetectInfoEnhancedOutcome> GetDetectInfoEnhancedOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetDetectInfoEnhancedRequest&, GetDetectInfoEnhancedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectInfoEnhancedAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEidResultResponse> GetEidResultOutcome;
                typedef std::future<GetEidResultOutcome> GetEidResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetEidResultRequest&, GetEidResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEidResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEidTokenResponse> GetEidTokenOutcome;
                typedef std::future<GetEidTokenOutcome> GetEidTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetEidTokenRequest&, GetEidTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEidTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFaceIdResultResponse> GetFaceIdResultOutcome;
                typedef std::future<GetFaceIdResultOutcome> GetFaceIdResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetFaceIdResultRequest&, GetFaceIdResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceIdResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFaceIdTokenResponse> GetFaceIdTokenOutcome;
                typedef std::future<GetFaceIdTokenOutcome> GetFaceIdTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetFaceIdTokenRequest&, GetFaceIdTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceIdTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLiveCodeResponse> GetLiveCodeOutcome;
                typedef std::future<GetLiveCodeOutcome> GetLiveCodeOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetLiveCodeRequest&, GetLiveCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLivenessResultResponse> GetLivenessResultOutcome;
                typedef std::future<GetLivenessResultOutcome> GetLivenessResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetLivenessResultRequest&, GetLivenessResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLivenessResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRealNameAuthResultResponse> GetRealNameAuthResultOutcome;
                typedef std::future<GetRealNameAuthResultOutcome> GetRealNameAuthResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetRealNameAuthResultRequest&, GetRealNameAuthResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRealNameAuthResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRealNameAuthTokenResponse> GetRealNameAuthTokenOutcome;
                typedef std::future<GetRealNameAuthTokenOutcome> GetRealNameAuthTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetRealNameAuthTokenRequest&, GetRealNameAuthTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRealNameAuthTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSdkVerificationResultResponse> GetSdkVerificationResultOutcome;
                typedef std::future<GetSdkVerificationResultOutcome> GetSdkVerificationResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetSdkVerificationResultRequest&, GetSdkVerificationResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSdkVerificationResultAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWeChatBillDetailsResponse> GetWeChatBillDetailsOutcome;
                typedef std::future<GetWeChatBillDetailsOutcome> GetWeChatBillDetailsOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetWeChatBillDetailsRequest&, GetWeChatBillDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWeChatBillDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWebVerificationResultResponse> GetWebVerificationResultOutcome;
                typedef std::future<GetWebVerificationResultOutcome> GetWebVerificationResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetWebVerificationResultRequest&, GetWebVerificationResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWebVerificationResultAsyncHandler;
                typedef Outcome<Core::Error, Model::IdCardOCRVerificationResponse> IdCardOCRVerificationOutcome;
                typedef std::future<IdCardOCRVerificationOutcome> IdCardOCRVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::IdCardOCRVerificationRequest&, IdCardOCRVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdCardOCRVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::IdCardVerificationResponse> IdCardVerificationOutcome;
                typedef std::future<IdCardVerificationOutcome> IdCardVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::IdCardVerificationRequest&, IdCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdCardVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageRecognitionResponse> ImageRecognitionOutcome;
                typedef std::future<ImageRecognitionOutcome> ImageRecognitionOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ImageRecognitionRequest&, ImageRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageRecognitionAsyncHandler;
                typedef Outcome<Core::Error, Model::LivenessResponse> LivenessOutcome;
                typedef std::future<LivenessOutcome> LivenessOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessRequest&, LivenessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessAsyncHandler;
                typedef Outcome<Core::Error, Model::LivenessCompareResponse> LivenessCompareOutcome;
                typedef std::future<LivenessCompareOutcome> LivenessCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessCompareRequest&, LivenessCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::LivenessRecognitionResponse> LivenessRecognitionOutcome;
                typedef std::future<LivenessRecognitionOutcome> LivenessRecognitionOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessRecognitionRequest&, LivenessRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessRecognitionAsyncHandler;
                typedef Outcome<Core::Error, Model::MinorsVerificationResponse> MinorsVerificationOutcome;
                typedef std::future<MinorsVerificationOutcome> MinorsVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::MinorsVerificationRequest&, MinorsVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MinorsVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::MobileNetworkTimeVerificationResponse> MobileNetworkTimeVerificationOutcome;
                typedef std::future<MobileNetworkTimeVerificationOutcome> MobileNetworkTimeVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::MobileNetworkTimeVerificationRequest&, MobileNetworkTimeVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MobileNetworkTimeVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::MobileStatusResponse> MobileStatusOutcome;
                typedef std::future<MobileStatusOutcome> MobileStatusOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::MobileStatusRequest&, MobileStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MobileStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseNfcDataResponse> ParseNfcDataOutcome;
                typedef std::future<ParseNfcDataOutcome> ParseNfcDataOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ParseNfcDataRequest&, ParseNfcDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseNfcDataAsyncHandler;
                typedef Outcome<Core::Error, Model::PhoneVerificationResponse> PhoneVerificationOutcome;
                typedef std::future<PhoneVerificationOutcome> PhoneVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::PhoneVerificationRequest&, PhoneVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PhoneVerificationAsyncHandler;
                typedef Outcome<Core::Error, Model::PhoneVerificationCMCCResponse> PhoneVerificationCMCCOutcome;
                typedef std::future<PhoneVerificationCMCCOutcome> PhoneVerificationCMCCOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::PhoneVerificationCMCCRequest&, PhoneVerificationCMCCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PhoneVerificationCMCCAsyncHandler;
                typedef Outcome<Core::Error, Model::PhoneVerificationCTCCResponse> PhoneVerificationCTCCOutcome;
                typedef std::future<PhoneVerificationCTCCOutcome> PhoneVerificationCTCCOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::PhoneVerificationCTCCRequest&, PhoneVerificationCTCCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PhoneVerificationCTCCAsyncHandler;
                typedef Outcome<Core::Error, Model::PhoneVerificationCUCCResponse> PhoneVerificationCUCCOutcome;
                typedef std::future<PhoneVerificationCUCCOutcome> PhoneVerificationCUCCOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::PhoneVerificationCUCCRequest&, PhoneVerificationCUCCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PhoneVerificationCUCCAsyncHandler;
                typedef Outcome<Core::Error, Model::VideoLivenessCompareResponse> VideoLivenessCompareOutcome;
                typedef std::future<VideoLivenessCompareOutcome> VideoLivenessCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::VideoLivenessCompareRequest&, VideoLivenessCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VideoLivenessCompareAsyncHandler;



                /**
                 *每次调用活体服务前，需要先调用本接口获取Token，需要保存此Token用来发起核验流程，并且在核验完成后获取结果信息。
                 * @param req ApplyLivenessTokenRequest
                 * @return ApplyLivenessTokenOutcome
                 */
                ApplyLivenessTokenOutcome ApplyLivenessToken(const Model::ApplyLivenessTokenRequest &request);
                void ApplyLivenessTokenAsync(const Model::ApplyLivenessTokenRequest& request, const ApplyLivenessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyLivenessTokenOutcomeCallable ApplyLivenessTokenCallable(const Model::ApplyLivenessTokenRequest& request);

                /**
                 *每次调用Web核验服务前，需要先调用本接口获取Token，需要保存此Token用来发起核验流程，并且在核验完成后获取结果信息。
                 * @param req ApplySdkVerificationTokenRequest
                 * @return ApplySdkVerificationTokenOutcome
                 */
                ApplySdkVerificationTokenOutcome ApplySdkVerificationToken(const Model::ApplySdkVerificationTokenRequest &request);
                void ApplySdkVerificationTokenAsync(const Model::ApplySdkVerificationTokenRequest& request, const ApplySdkVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplySdkVerificationTokenOutcomeCallable ApplySdkVerificationTokenCallable(const Model::ApplySdkVerificationTokenRequest& request);

                /**
                 *每次调用Web核验服务前，需要先调用本接口获取BizToken，需要保存此BizToken用来发起核验流程，并且在核验完成后获取结果信息。
                 * @param req ApplyWebVerificationTokenRequest
                 * @return ApplyWebVerificationTokenOutcome
                 */
                ApplyWebVerificationTokenOutcome ApplyWebVerificationToken(const Model::ApplyWebVerificationTokenRequest &request);
                void ApplyWebVerificationTokenAsync(const Model::ApplyWebVerificationTokenRequest& request, const ApplyWebVerificationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyWebVerificationTokenOutcomeCallable ApplyWebVerificationTokenCallable(const Model::ApplyWebVerificationTokenRequest& request);

                /**
                 *本接口用于校验姓名和银行卡号的真实性和一致性。
                 * @param req BankCard2EVerificationRequest
                 * @return BankCard2EVerificationOutcome
                 */
                BankCard2EVerificationOutcome BankCard2EVerification(const Model::BankCard2EVerificationRequest &request);
                void BankCard2EVerificationAsync(const Model::BankCard2EVerificationRequest& request, const BankCard2EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCard2EVerificationOutcomeCallable BankCard2EVerificationCallable(const Model::BankCard2EVerificationRequest& request);

                /**
                 *本接口用于输入银行卡号、姓名、开户证件号、开户手机号，校验信息的真实性和一致性。
                 * @param req BankCard4EVerificationRequest
                 * @return BankCard4EVerificationOutcome
                 */
                BankCard4EVerificationOutcome BankCard4EVerification(const Model::BankCard4EVerificationRequest &request);
                void BankCard4EVerificationAsync(const Model::BankCard4EVerificationRequest& request, const BankCard4EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCard4EVerificationOutcomeCallable BankCard4EVerificationCallable(const Model::BankCard4EVerificationRequest& request);

                /**
                 *本接口用于银行卡号、姓名、开户证件号信息的真实性和一致性。
                 * @param req BankCardVerificationRequest
                 * @return BankCardVerificationOutcome
                 */
                BankCardVerificationOutcome BankCardVerification(const Model::BankCardVerificationRequest &request);
                void BankCardVerificationAsync(const Model::BankCardVerificationRequest& request, const BankCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCardVerificationOutcomeCallable BankCardVerificationCallable(const Model::BankCardVerificationRequest& request);

                /**
                 *银行卡基础信息查询
                 * @param req CheckBankCardInformationRequest
                 * @return CheckBankCardInformationOutcome
                 */
                CheckBankCardInformationOutcome CheckBankCardInformation(const Model::CheckBankCardInformationRequest &request);
                void CheckBankCardInformationAsync(const Model::CheckBankCardInformationRequest& request, const CheckBankCardInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckBankCardInformationOutcomeCallable CheckBankCardInformationCallable(const Model::CheckBankCardInformationRequest& request);

                /**
                 *用于轮询E证通H5场景EidToken验证状态。
                 * @param req CheckEidTokenStatusRequest
                 * @return CheckEidTokenStatusOutcome
                 */
                CheckEidTokenStatusOutcome CheckEidTokenStatus(const Model::CheckEidTokenStatusRequest &request);
                void CheckEidTokenStatusAsync(const Model::CheckEidTokenStatusRequest& request, const CheckEidTokenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckEidTokenStatusOutcomeCallable CheckEidTokenStatusCallable(const Model::CheckEidTokenStatusRequest& request);

                /**
                 *传入身份证人像面照片，识别身份证照片上的信息，并将姓名、身份证号、身份证人像照片与权威库的证件照进行比对，是否属于同一个人，从而验证身份证信息的真实性。
                 * @param req CheckIdCardInformationRequest
                 * @return CheckIdCardInformationOutcome
                 */
                CheckIdCardInformationOutcome CheckIdCardInformation(const Model::CheckIdCardInformationRequest &request);
                void CheckIdCardInformationAsync(const Model::CheckIdCardInformationRequest& request, const CheckIdCardInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIdCardInformationOutcomeCallable CheckIdCardInformationCallable(const Model::CheckIdCardInformationRequest& request);

                /**
                 *本接口用于校验姓名、身份证号、身份证有效期的真实性和一致性。
                 * @param req CheckIdNameDateRequest
                 * @return CheckIdNameDateOutcome
                 */
                CheckIdNameDateOutcome CheckIdNameDate(const Model::CheckIdNameDateRequest &request);
                void CheckIdNameDateAsync(const Model::CheckIdNameDateRequest& request, const CheckIdNameDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIdNameDateOutcomeCallable CheckIdNameDateCallable(const Model::CheckIdNameDateRequest& request);

                /**
                 *手机号二要素核验接口用于校验手机号和姓名的真实性和一致性，支持的手机号段详情请查阅<a href="https://cloud.tencent.com/document/product/1007/46063">运营商类</a>文档。

                 * @param req CheckPhoneAndNameRequest
                 * @return CheckPhoneAndNameOutcome
                 */
                CheckPhoneAndNameOutcome CheckPhoneAndName(const Model::CheckPhoneAndNameRequest &request);
                void CheckPhoneAndNameAsync(const Model::CheckPhoneAndNameRequest& request, const CheckPhoneAndNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckPhoneAndNameOutcomeCallable CheckPhoneAndNameCallable(const Model::CheckPhoneAndNameRequest& request);

                /**
                 *生成一个临时的UploadUrl用于上传资源文件，客户需要使用HTTP PUT方法上传，上传完成后将ResourceUrl传给TargetAction对应接口完成资源传递（具体字段由使用场景确定）。
数据存储于Region参数对应地域的腾讯云COS Bucket，存储有效期2小时。
                 * @param req CreateUploadUrlRequest
                 * @return CreateUploadUrlOutcome
                 */
                CreateUploadUrlOutcome CreateUploadUrl(const Model::CreateUploadUrlRequest &request);
                void CreateUploadUrlAsync(const Model::CreateUploadUrlRequest& request, const CreateUploadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUploadUrlOutcomeCallable CreateUploadUrlCallable(const Model::CreateUploadUrlRequest& request);

                /**
                 *每次调用人脸核身SaaS化服务前，需先调用本接口获取BizToken，用来串联核身流程，在验证完成后，用于获取验证结果信息。
                 * @param req DetectAuthRequest
                 * @return DetectAuthOutcome
                 */
                DetectAuthOutcome DetectAuth(const Model::DetectAuthRequest &request);
                void DetectAuthAsync(const Model::DetectAuthRequest& request, const DetectAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectAuthOutcomeCallable DetectAuthCallable(const Model::DetectAuthRequest& request);

                /**
                 *使用活体比对（光线）SDK生成的数据包检测活体，并和传入的图片进行比对。
图片和SDK生成的数据内容必须存储在腾讯云COS，COS Bucket所在的Region需要和本接口请求的Region保持一致，推荐使用生成上传链接接口来完成资源传递。
                 * @param req DetectReflectLivenessAndCompareRequest
                 * @return DetectReflectLivenessAndCompareOutcome
                 */
                DetectReflectLivenessAndCompareOutcome DetectReflectLivenessAndCompare(const Model::DetectReflectLivenessAndCompareRequest &request);
                void DetectReflectLivenessAndCompareAsync(const Model::DetectReflectLivenessAndCompareRequest& request, const DetectReflectLivenessAndCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectReflectLivenessAndCompareOutcomeCallable DetectReflectLivenessAndCompareCallable(const Model::DetectReflectLivenessAndCompareRequest& request);

                /**
                 *本接口用于校验手机号、姓名和身份证号的真实性和一致性，入参支持明文、MD5和SHA256加密传输。
                 * @param req EncryptedPhoneVerificationRequest
                 * @return EncryptedPhoneVerificationOutcome
                 */
                EncryptedPhoneVerificationOutcome EncryptedPhoneVerification(const Model::EncryptedPhoneVerificationRequest &request);
                void EncryptedPhoneVerificationAsync(const Model::EncryptedPhoneVerificationRequest& request, const EncryptedPhoneVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EncryptedPhoneVerificationOutcomeCallable EncryptedPhoneVerificationCallable(const Model::EncryptedPhoneVerificationRequest& request);

                /**
                 *根据活体比对（光线）SDK采集的机器信息生成适合的光线序列，将光线序列传入SDK后开启核身。
SDK生成的数据内容必须存储在腾讯云COS，COS Bucket所在的Region需要和本接口请求的Region保持一致，推荐使用生成上传链接接口来完成资源传递。
                 * @param req GenerateReflectSequenceRequest
                 * @return GenerateReflectSequenceOutcome
                 */
                GenerateReflectSequenceOutcome GenerateReflectSequence(const Model::GenerateReflectSequenceRequest &request);
                void GenerateReflectSequenceAsync(const Model::GenerateReflectSequenceRequest& request, const GenerateReflectSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateReflectSequenceOutcomeCallable GenerateReflectSequenceCallable(const Model::GenerateReflectSequenceRequest& request);

                /**
                 *使用动作活体检测模式前，需调用本接口获取动作顺序。
                 * @param req GetActionSequenceRequest
                 * @return GetActionSequenceOutcome
                 */
                GetActionSequenceOutcome GetActionSequence(const Model::GetActionSequenceRequest &request);
                void GetActionSequenceAsync(const Model::GetActionSequenceRequest& request, const GetActionSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetActionSequenceOutcomeCallable GetActionSequenceCallable(const Model::GetActionSequenceRequest& request);

                /**
                 *完成验证后，用BizToken调用本接口获取结果信息，BizToken生成后三天内（3\*24\*3,600秒）可多次拉取。
                 * @param req GetDetectInfoRequest
                 * @return GetDetectInfoOutcome
                 */
                GetDetectInfoOutcome GetDetectInfo(const Model::GetDetectInfoRequest &request);
                void GetDetectInfoAsync(const Model::GetDetectInfoRequest& request, const GetDetectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDetectInfoOutcomeCallable GetDetectInfoCallable(const Model::GetDetectInfoRequest& request);

                /**
                 *完成验证后，用BizToken调用本接口获取结果信息，BizToken生成后三天内（3\*24\*3,600秒）可多次拉取。
                 * @param req GetDetectInfoEnhancedRequest
                 * @return GetDetectInfoEnhancedOutcome
                 */
                GetDetectInfoEnhancedOutcome GetDetectInfoEnhanced(const Model::GetDetectInfoEnhancedRequest &request);
                void GetDetectInfoEnhancedAsync(const Model::GetDetectInfoEnhancedRequest& request, const GetDetectInfoEnhancedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDetectInfoEnhancedOutcomeCallable GetDetectInfoEnhancedCallable(const Model::GetDetectInfoEnhancedRequest& request);

                /**
                 *完成验证后，用EidToken调用本接口获取结果信息，EidToken生成后三天内（3\*24\*3,600秒）可多次拉取。
                 * @param req GetEidResultRequest
                 * @return GetEidResultOutcome
                 */
                GetEidResultOutcome GetEidResult(const Model::GetEidResultRequest &request);
                void GetEidResultAsync(const Model::GetEidResultRequest& request, const GetEidResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEidResultOutcomeCallable GetEidResultCallable(const Model::GetEidResultRequest& request);

                /**
                 *每次调用E证通服务前，需先调用本接口获取EidToken，用来串联E证通流程，在验证完成后，用于获取E证通结果信息。
                 * @param req GetEidTokenRequest
                 * @return GetEidTokenOutcome
                 */
                GetEidTokenOutcome GetEidToken(const Model::GetEidTokenRequest &request);
                void GetEidTokenAsync(const Model::GetEidTokenRequest& request, const GetEidTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEidTokenOutcomeCallable GetEidTokenCallable(const Model::GetEidTokenRequest& request);

                /**
                 *完成验证后，用FaceIdToken调用本接口获取结果信息，FaceIdToken生成后三天内（3\*24\*3,600秒）可多次拉取。
                 * @param req GetFaceIdResultRequest
                 * @return GetFaceIdResultOutcome
                 */
                GetFaceIdResultOutcome GetFaceIdResult(const Model::GetFaceIdResultRequest &request);
                void GetFaceIdResultAsync(const Model::GetFaceIdResultRequest& request, const GetFaceIdResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFaceIdResultOutcomeCallable GetFaceIdResultCallable(const Model::GetFaceIdResultRequest& request);

                /**
                 *每次调用人脸核身SDK服务前，需先调用本接口获取SDKToken，用来串联核身流程，在验证完成后，用于获取验证结果信息，该token仅能核身一次。
                 * @param req GetFaceIdTokenRequest
                 * @return GetFaceIdTokenOutcome
                 */
                GetFaceIdTokenOutcome GetFaceIdToken(const Model::GetFaceIdTokenRequest &request);
                void GetFaceIdTokenAsync(const Model::GetFaceIdTokenRequest& request, const GetFaceIdTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFaceIdTokenOutcomeCallable GetFaceIdTokenCallable(const Model::GetFaceIdTokenRequest& request);

                /**
                 *使用数字活体检测模式前，需调用本接口获取数字验证码。
                 * @param req GetLiveCodeRequest
                 * @return GetLiveCodeOutcome
                 */
                GetLiveCodeOutcome GetLiveCode(const Model::GetLiveCodeRequest &request);
                void GetLiveCodeAsync(const Model::GetLiveCodeRequest& request, const GetLiveCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLiveCodeOutcomeCallable GetLiveCodeCallable(const Model::GetLiveCodeRequest& request);

                /**
                 *完成活体检测流程后，用核验令牌（SdkToken）调用本接口查询对应核验结果信息。Token申请后2小时内有效，可多次调用。
                 * @param req GetLivenessResultRequest
                 * @return GetLivenessResultOutcome
                 */
                GetLivenessResultOutcome GetLivenessResult(const Model::GetLivenessResultRequest &request);
                void GetLivenessResultAsync(const Model::GetLivenessResultRequest& request, const GetLivenessResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLivenessResultOutcomeCallable GetLivenessResultCallable(const Model::GetLivenessResultRequest& request);

                /**
                 *获取微信实名认证结果
                 * @param req GetRealNameAuthResultRequest
                 * @return GetRealNameAuthResultOutcome
                 */
                GetRealNameAuthResultOutcome GetRealNameAuthResult(const Model::GetRealNameAuthResultRequest &request);
                void GetRealNameAuthResultAsync(const Model::GetRealNameAuthResultRequest& request, const GetRealNameAuthResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRealNameAuthResultOutcomeCallable GetRealNameAuthResultCallable(const Model::GetRealNameAuthResultRequest& request);

                /**
                 *该接口仅限微信公众号中使用，传入姓名和身份证号获取回调URL，在微信公众号中打开验证姓名和身份证号与微信实名的信息是否一致。

                 * @param req GetRealNameAuthTokenRequest
                 * @return GetRealNameAuthTokenOutcome
                 */
                GetRealNameAuthTokenOutcome GetRealNameAuthToken(const Model::GetRealNameAuthTokenRequest &request);
                void GetRealNameAuthTokenAsync(const Model::GetRealNameAuthTokenRequest& request, const GetRealNameAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRealNameAuthTokenOutcomeCallable GetRealNameAuthTokenCallable(const Model::GetRealNameAuthTokenRequest& request);

                /**
                 *完成Sdk核验流程后，用核验令牌（Token）调用本接口查询对应核验结果信息。Token申请后三天内有效，可多次调用。
                 * @param req GetSdkVerificationResultRequest
                 * @return GetSdkVerificationResultOutcome
                 */
                GetSdkVerificationResultOutcome GetSdkVerificationResult(const Model::GetSdkVerificationResultRequest &request);
                void GetSdkVerificationResultAsync(const Model::GetSdkVerificationResultRequest& request, const GetSdkVerificationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSdkVerificationResultOutcomeCallable GetSdkVerificationResultCallable(const Model::GetSdkVerificationResultRequest& request);

                /**
                 *查询微信渠道服务（微信小程序、微信原生H5、微信普通H5）的账单明细及计费状态。
                 * @param req GetWeChatBillDetailsRequest
                 * @return GetWeChatBillDetailsOutcome
                 */
                GetWeChatBillDetailsOutcome GetWeChatBillDetails(const Model::GetWeChatBillDetailsRequest &request);
                void GetWeChatBillDetailsAsync(const Model::GetWeChatBillDetailsRequest& request, const GetWeChatBillDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWeChatBillDetailsOutcomeCallable GetWeChatBillDetailsCallable(const Model::GetWeChatBillDetailsRequest& request);

                /**
                 *完成Web核验流程后，用核验令牌（BizToken）调用本接口查询对应核验结果信息。BizToken申请后三天内（3\*24\*3,600秒）有效，可多次调用。
                 * @param req GetWebVerificationResultRequest
                 * @return GetWebVerificationResultOutcome
                 */
                GetWebVerificationResultOutcome GetWebVerificationResult(const Model::GetWebVerificationResultRequest &request);
                void GetWebVerificationResultAsync(const Model::GetWebVerificationResultRequest& request, const GetWebVerificationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWebVerificationResultOutcomeCallable GetWebVerificationResultCallable(const Model::GetWebVerificationResultRequest& request);

                /**
                 *本接口用于校验姓名和身份证号的真实性和一致性，您可以通过输入姓名和身份证号或传入身份证人像面照片提供所需验证信息。
                 * @param req IdCardOCRVerificationRequest
                 * @return IdCardOCRVerificationOutcome
                 */
                IdCardOCRVerificationOutcome IdCardOCRVerification(const Model::IdCardOCRVerificationRequest &request);
                void IdCardOCRVerificationAsync(const Model::IdCardOCRVerificationRequest& request, const IdCardOCRVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdCardOCRVerificationOutcomeCallable IdCardOCRVerificationCallable(const Model::IdCardOCRVerificationRequest& request);

                /**
                 *传入姓名和身份证号，校验两者的真实性和一致性。
                 * @param req IdCardVerificationRequest
                 * @return IdCardVerificationOutcome
                 */
                IdCardVerificationOutcome IdCardVerification(const Model::IdCardVerificationRequest &request);
                void IdCardVerificationAsync(const Model::IdCardVerificationRequest& request, const IdCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdCardVerificationOutcomeCallable IdCardVerificationCallable(const Model::IdCardVerificationRequest& request);

                /**
                 *传入照片和身份信息，判断该照片与权威库的证件照是否属于同一个人。
                 * @param req ImageRecognitionRequest
                 * @return ImageRecognitionOutcome
                 */
                ImageRecognitionOutcome ImageRecognition(const Model::ImageRecognitionRequest &request);
                void ImageRecognitionAsync(const Model::ImageRecognitionRequest& request, const ImageRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageRecognitionOutcomeCallable ImageRecognitionCallable(const Model::ImageRecognitionRequest& request);

                /**
                 *活体检测
                 * @param req LivenessRequest
                 * @return LivenessOutcome
                 */
                LivenessOutcome Liveness(const Model::LivenessRequest &request);
                void LivenessAsync(const Model::LivenessRequest& request, const LivenessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LivenessOutcomeCallable LivenessCallable(const Model::LivenessRequest& request);

                /**
                 *传入视频和照片，先判断视频中是否为真人，判断为真人后，再判断该视频中的人与上传照片是否属于同一个人。
                 * @param req LivenessCompareRequest
                 * @return LivenessCompareOutcome
                 */
                LivenessCompareOutcome LivenessCompare(const Model::LivenessCompareRequest &request);
                void LivenessCompareAsync(const Model::LivenessCompareRequest& request, const LivenessCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LivenessCompareOutcomeCallable LivenessCompareCallable(const Model::LivenessCompareRequest& request);

                /**
                 *传入视频和身份信息，先判断视频中是否为真人，判断为真人后，再判断该视频中的人与权威库的证件照是否属于同一个人。
                 * @param req LivenessRecognitionRequest
                 * @return LivenessRecognitionOutcome
                 */
                LivenessRecognitionOutcome LivenessRecognition(const Model::LivenessRecognitionRequest &request);
                void LivenessRecognitionAsync(const Model::LivenessRecognitionRequest& request, const LivenessRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LivenessRecognitionOutcomeCallable LivenessRecognitionCallable(const Model::LivenessRecognitionRequest& request);

                /**
                 *通过传入手机号或姓名和身份证号，结合权威数据源和腾讯健康守护可信模型，判断该信息是否真实且年满18周岁。腾讯健康守护可信模型覆盖了上十亿手机库源，覆盖率高、准确率高，如果不在库中的手机号，还可以通过姓名+身份证进行兜底验证。
                 * @param req MinorsVerificationRequest
                 * @return MinorsVerificationOutcome
                 */
                MinorsVerificationOutcome MinorsVerification(const Model::MinorsVerificationRequest &request);
                void MinorsVerificationAsync(const Model::MinorsVerificationRequest& request, const MinorsVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MinorsVerificationOutcomeCallable MinorsVerificationCallable(const Model::MinorsVerificationRequest& request);

                /**
                 *本接口用于查询手机号在网时长，输入手机号进行查询。
                 * @param req MobileNetworkTimeVerificationRequest
                 * @return MobileNetworkTimeVerificationOutcome
                 */
                MobileNetworkTimeVerificationOutcome MobileNetworkTimeVerification(const Model::MobileNetworkTimeVerificationRequest &request);
                void MobileNetworkTimeVerificationAsync(const Model::MobileNetworkTimeVerificationRequest& request, const MobileNetworkTimeVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MobileNetworkTimeVerificationOutcomeCallable MobileNetworkTimeVerificationCallable(const Model::MobileNetworkTimeVerificationRequest& request);

                /**
                 *本接口用于验证手机号的状态，您可以输入手机号进行查询。
                 * @param req MobileStatusRequest
                 * @return MobileStatusOutcome
                 */
                MobileStatusOutcome MobileStatus(const Model::MobileStatusRequest &request);
                void MobileStatusAsync(const Model::MobileStatusRequest& request, const MobileStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MobileStatusOutcomeCallable MobileStatusCallable(const Model::MobileStatusRequest& request);

                /**
                 *解析SDK获取到的证件NFC数据，接口传入SDK返回的ReqId，返回证件信息（个别字段为特定证件类型特有）。SDK生成的ReqId五分钟内有效，重复查询仅收一次费。支持身份证类证件（二代身份证、港澳居住证、台湾居住证、外国人永居证）以及旅行类证件（港澳通行证、台湾通行证、台胞证、回乡证）的NFC识别及核验。
                 * @param req ParseNfcDataRequest
                 * @return ParseNfcDataOutcome
                 */
                ParseNfcDataOutcome ParseNfcData(const Model::ParseNfcDataRequest &request);
                void ParseNfcDataAsync(const Model::ParseNfcDataRequest& request, const ParseNfcDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseNfcDataOutcomeCallable ParseNfcDataCallable(const Model::ParseNfcDataRequest& request);

                /**
                 *本接口用于校验手机号、姓名和身份证号的真实性和一致性。支持的手机号段详情请查阅<a href="https://cloud.tencent.com/document/product/1007/46063">运营商类</a>文档。
                 * @param req PhoneVerificationRequest
                 * @return PhoneVerificationOutcome
                 */
                PhoneVerificationOutcome PhoneVerification(const Model::PhoneVerificationRequest &request);
                void PhoneVerificationAsync(const Model::PhoneVerificationRequest& request, const PhoneVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PhoneVerificationOutcomeCallable PhoneVerificationCallable(const Model::PhoneVerificationRequest& request);

                /**
                 *本接口用于校验中国移动手机号、姓名和身份证号的真实性和一致性。中国移动支持的手机号段详情请查阅<a href="https://cloud.tencent.com/document/product/1007/46063">运营商类</a>文档。
                 * @param req PhoneVerificationCMCCRequest
                 * @return PhoneVerificationCMCCOutcome
                 */
                PhoneVerificationCMCCOutcome PhoneVerificationCMCC(const Model::PhoneVerificationCMCCRequest &request);
                void PhoneVerificationCMCCAsync(const Model::PhoneVerificationCMCCRequest& request, const PhoneVerificationCMCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PhoneVerificationCMCCOutcomeCallable PhoneVerificationCMCCCallable(const Model::PhoneVerificationCMCCRequest& request);

                /**
                 *本接口用于校验中国电信手机号、姓名和身份证号的真实性和一致性。中国电信支持的手机号段详情请查阅<a href="https://cloud.tencent.com/document/product/1007/46063">运营商类</a>文档。
                 * @param req PhoneVerificationCTCCRequest
                 * @return PhoneVerificationCTCCOutcome
                 */
                PhoneVerificationCTCCOutcome PhoneVerificationCTCC(const Model::PhoneVerificationCTCCRequest &request);
                void PhoneVerificationCTCCAsync(const Model::PhoneVerificationCTCCRequest& request, const PhoneVerificationCTCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PhoneVerificationCTCCOutcomeCallable PhoneVerificationCTCCCallable(const Model::PhoneVerificationCTCCRequest& request);

                /**
                 *本接口用于校验中国联通手机号、姓名和身份证号的真实性和一致性。中国联通支持的手机号段详情请查阅<a href="https://cloud.tencent.com/document/product/1007/46063">运营商类</a>文档。
                 * @param req PhoneVerificationCUCCRequest
                 * @return PhoneVerificationCUCCOutcome
                 */
                PhoneVerificationCUCCOutcome PhoneVerificationCUCC(const Model::PhoneVerificationCUCCRequest &request);
                void PhoneVerificationCUCCAsync(const Model::PhoneVerificationCUCCRequest& request, const PhoneVerificationCUCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PhoneVerificationCUCCOutcomeCallable PhoneVerificationCUCCCallable(const Model::PhoneVerificationCUCCRequest& request);

                /**
                 *传入视频和照片地址，先判断视频中是否为真人，判断为真人后，再判断该视频中的人与上传照片是否属于同一个人。
                 * @param req VideoLivenessCompareRequest
                 * @return VideoLivenessCompareOutcome
                 */
                VideoLivenessCompareOutcome VideoLivenessCompare(const Model::VideoLivenessCompareRequest &request);
                void VideoLivenessCompareAsync(const Model::VideoLivenessCompareRequest& request, const VideoLivenessCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VideoLivenessCompareOutcomeCallable VideoLivenessCompareCallable(const Model::VideoLivenessCompareRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
