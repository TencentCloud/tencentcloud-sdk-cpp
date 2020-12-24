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
#include <tencentcloud/faceid/v20180301/model/BankCard2EVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCard2EVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/BankCard4EVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCard4EVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/BankCardVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCardVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckBankCardInformationRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckBankCardInformationResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdCardInformationRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckIdCardInformationResponse.h>
#include <tencentcloud/faceid/v20180301/model/CheckPhoneAndNameRequest.h>
#include <tencentcloud/faceid/v20180301/model/CheckPhoneAndNameResponse.h>
#include <tencentcloud/faceid/v20180301/model/DetectAuthRequest.h>
#include <tencentcloud/faceid/v20180301/model/DetectAuthResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetActionSequenceRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetActionSequenceResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoEnhancedRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoEnhancedResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetFaceIdTokenResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetLiveCodeRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetLiveCodeResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetRealNameAuthResultRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetRealNameAuthResultResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetRealNameAuthTokenRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetRealNameAuthTokenResponse.h>
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
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/PhoneVerificationResponse.h>


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

                typedef Outcome<Error, Model::BankCard2EVerificationResponse> BankCard2EVerificationOutcome;
                typedef std::future<BankCard2EVerificationOutcome> BankCard2EVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCard2EVerificationRequest&, BankCard2EVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCard2EVerificationAsyncHandler;
                typedef Outcome<Error, Model::BankCard4EVerificationResponse> BankCard4EVerificationOutcome;
                typedef std::future<BankCard4EVerificationOutcome> BankCard4EVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCard4EVerificationRequest&, BankCard4EVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCard4EVerificationAsyncHandler;
                typedef Outcome<Error, Model::BankCardVerificationResponse> BankCardVerificationOutcome;
                typedef std::future<BankCardVerificationOutcome> BankCardVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCardVerificationRequest&, BankCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardVerificationAsyncHandler;
                typedef Outcome<Error, Model::CheckBankCardInformationResponse> CheckBankCardInformationOutcome;
                typedef std::future<CheckBankCardInformationOutcome> CheckBankCardInformationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckBankCardInformationRequest&, CheckBankCardInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckBankCardInformationAsyncHandler;
                typedef Outcome<Error, Model::CheckIdCardInformationResponse> CheckIdCardInformationOutcome;
                typedef std::future<CheckIdCardInformationOutcome> CheckIdCardInformationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckIdCardInformationRequest&, CheckIdCardInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIdCardInformationAsyncHandler;
                typedef Outcome<Error, Model::CheckPhoneAndNameResponse> CheckPhoneAndNameOutcome;
                typedef std::future<CheckPhoneAndNameOutcome> CheckPhoneAndNameOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::CheckPhoneAndNameRequest&, CheckPhoneAndNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckPhoneAndNameAsyncHandler;
                typedef Outcome<Error, Model::DetectAuthResponse> DetectAuthOutcome;
                typedef std::future<DetectAuthOutcome> DetectAuthOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::DetectAuthRequest&, DetectAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectAuthAsyncHandler;
                typedef Outcome<Error, Model::GetActionSequenceResponse> GetActionSequenceOutcome;
                typedef std::future<GetActionSequenceOutcome> GetActionSequenceOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetActionSequenceRequest&, GetActionSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetActionSequenceAsyncHandler;
                typedef Outcome<Error, Model::GetDetectInfoResponse> GetDetectInfoOutcome;
                typedef std::future<GetDetectInfoOutcome> GetDetectInfoOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetDetectInfoRequest&, GetDetectInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectInfoAsyncHandler;
                typedef Outcome<Error, Model::GetDetectInfoEnhancedResponse> GetDetectInfoEnhancedOutcome;
                typedef std::future<GetDetectInfoEnhancedOutcome> GetDetectInfoEnhancedOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetDetectInfoEnhancedRequest&, GetDetectInfoEnhancedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectInfoEnhancedAsyncHandler;
                typedef Outcome<Error, Model::GetFaceIdResultResponse> GetFaceIdResultOutcome;
                typedef std::future<GetFaceIdResultOutcome> GetFaceIdResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetFaceIdResultRequest&, GetFaceIdResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceIdResultAsyncHandler;
                typedef Outcome<Error, Model::GetFaceIdTokenResponse> GetFaceIdTokenOutcome;
                typedef std::future<GetFaceIdTokenOutcome> GetFaceIdTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetFaceIdTokenRequest&, GetFaceIdTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceIdTokenAsyncHandler;
                typedef Outcome<Error, Model::GetLiveCodeResponse> GetLiveCodeOutcome;
                typedef std::future<GetLiveCodeOutcome> GetLiveCodeOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetLiveCodeRequest&, GetLiveCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveCodeAsyncHandler;
                typedef Outcome<Error, Model::GetRealNameAuthResultResponse> GetRealNameAuthResultOutcome;
                typedef std::future<GetRealNameAuthResultOutcome> GetRealNameAuthResultOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetRealNameAuthResultRequest&, GetRealNameAuthResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRealNameAuthResultAsyncHandler;
                typedef Outcome<Error, Model::GetRealNameAuthTokenResponse> GetRealNameAuthTokenOutcome;
                typedef std::future<GetRealNameAuthTokenOutcome> GetRealNameAuthTokenOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetRealNameAuthTokenRequest&, GetRealNameAuthTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRealNameAuthTokenAsyncHandler;
                typedef Outcome<Error, Model::IdCardOCRVerificationResponse> IdCardOCRVerificationOutcome;
                typedef std::future<IdCardOCRVerificationOutcome> IdCardOCRVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::IdCardOCRVerificationRequest&, IdCardOCRVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdCardOCRVerificationAsyncHandler;
                typedef Outcome<Error, Model::IdCardVerificationResponse> IdCardVerificationOutcome;
                typedef std::future<IdCardVerificationOutcome> IdCardVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::IdCardVerificationRequest&, IdCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdCardVerificationAsyncHandler;
                typedef Outcome<Error, Model::ImageRecognitionResponse> ImageRecognitionOutcome;
                typedef std::future<ImageRecognitionOutcome> ImageRecognitionOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ImageRecognitionRequest&, ImageRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageRecognitionAsyncHandler;
                typedef Outcome<Error, Model::LivenessResponse> LivenessOutcome;
                typedef std::future<LivenessOutcome> LivenessOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessRequest&, LivenessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessAsyncHandler;
                typedef Outcome<Error, Model::LivenessCompareResponse> LivenessCompareOutcome;
                typedef std::future<LivenessCompareOutcome> LivenessCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessCompareRequest&, LivenessCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessCompareAsyncHandler;
                typedef Outcome<Error, Model::LivenessRecognitionResponse> LivenessRecognitionOutcome;
                typedef std::future<LivenessRecognitionOutcome> LivenessRecognitionOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessRecognitionRequest&, LivenessRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessRecognitionAsyncHandler;
                typedef Outcome<Error, Model::MinorsVerificationResponse> MinorsVerificationOutcome;
                typedef std::future<MinorsVerificationOutcome> MinorsVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::MinorsVerificationRequest&, MinorsVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MinorsVerificationAsyncHandler;
                typedef Outcome<Error, Model::MobileNetworkTimeVerificationResponse> MobileNetworkTimeVerificationOutcome;
                typedef std::future<MobileNetworkTimeVerificationOutcome> MobileNetworkTimeVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::MobileNetworkTimeVerificationRequest&, MobileNetworkTimeVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MobileNetworkTimeVerificationAsyncHandler;
                typedef Outcome<Error, Model::MobileStatusResponse> MobileStatusOutcome;
                typedef std::future<MobileStatusOutcome> MobileStatusOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::MobileStatusRequest&, MobileStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MobileStatusAsyncHandler;
                typedef Outcome<Error, Model::PhoneVerificationResponse> PhoneVerificationOutcome;
                typedef std::future<PhoneVerificationOutcome> PhoneVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::PhoneVerificationRequest&, PhoneVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PhoneVerificationAsyncHandler;



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
                 *传入身份证人像面照片，识别身份证照片上的信息，并将姓名、身份证号、身份证人像照片与公安权威库的证件照进行比对，是否属于同一个人，从而验证身份证信息的真实性。
                 * @param req CheckIdCardInformationRequest
                 * @return CheckIdCardInformationOutcome
                 */
                CheckIdCardInformationOutcome CheckIdCardInformation(const Model::CheckIdCardInformationRequest &request);
                void CheckIdCardInformationAsync(const Model::CheckIdCardInformationRequest& request, const CheckIdCardInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIdCardInformationOutcomeCallable CheckIdCardInformationCallable(const Model::CheckIdCardInformationRequest& request);

                /**
                 *本接口用于校验手机号和姓名的真实性和一致性。
                 * @param req CheckPhoneAndNameRequest
                 * @return CheckPhoneAndNameOutcome
                 */
                CheckPhoneAndNameOutcome CheckPhoneAndName(const Model::CheckPhoneAndNameRequest &request);
                void CheckPhoneAndNameAsync(const Model::CheckPhoneAndNameRequest& request, const CheckPhoneAndNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckPhoneAndNameOutcomeCallable CheckPhoneAndNameCallable(const Model::CheckPhoneAndNameRequest& request);

                /**
                 *每次调用人脸核身SaaS化服务前，需先调用本接口获取BizToken，用来串联核身流程，在验证完成后，用于获取验证结果信息。
                 * @param req DetectAuthRequest
                 * @return DetectAuthOutcome
                 */
                DetectAuthOutcome DetectAuth(const Model::DetectAuthRequest &request);
                void DetectAuthAsync(const Model::DetectAuthRequest& request, const DetectAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectAuthOutcomeCallable DetectAuthCallable(const Model::DetectAuthRequest& request);

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
                 *获取微信实名认证结果
                 * @param req GetRealNameAuthResultRequest
                 * @return GetRealNameAuthResultOutcome
                 */
                GetRealNameAuthResultOutcome GetRealNameAuthResult(const Model::GetRealNameAuthResultRequest &request);
                void GetRealNameAuthResultAsync(const Model::GetRealNameAuthResultRequest& request, const GetRealNameAuthResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRealNameAuthResultOutcomeCallable GetRealNameAuthResultCallable(const Model::GetRealNameAuthResultRequest& request);

                /**
                 *微信实名认证授权
                 * @param req GetRealNameAuthTokenRequest
                 * @return GetRealNameAuthTokenOutcome
                 */
                GetRealNameAuthTokenOutcome GetRealNameAuthToken(const Model::GetRealNameAuthTokenRequest &request);
                void GetRealNameAuthTokenAsync(const Model::GetRealNameAuthTokenRequest& request, const GetRealNameAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRealNameAuthTokenOutcomeCallable GetRealNameAuthTokenCallable(const Model::GetRealNameAuthTokenRequest& request);

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
                 *传入照片和身份信息，判断该照片与公安权威库的证件照是否属于同一个人。
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
                 *传入视频和身份信息，先判断视频中是否为真人，判断为真人后，再判断该视频中的人与公安权威库的证件照是否属于同一个人。
                 * @param req LivenessRecognitionRequest
                 * @return LivenessRecognitionOutcome
                 */
                LivenessRecognitionOutcome LivenessRecognition(const Model::LivenessRecognitionRequest &request);
                void LivenessRecognitionAsync(const Model::LivenessRecognitionRequest& request, const LivenessRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LivenessRecognitionOutcomeCallable LivenessRecognitionCallable(const Model::LivenessRecognitionRequest& request);

                /**
                 *未成年人守护接口是通过传入手机号或姓名和身份证号，结合权威数据源和腾讯健康守护可信模型，判断该信息是否真实且年满18周岁。腾讯健康守护可信模型覆盖了上十亿手机库源，覆盖率高、准确率高，如果不在库中的手机号，还可以通过姓名+身份证进行兜底验证。
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
                 *本接口用于校验手机号、姓名和身份证号的真实性和一致性。
                 * @param req PhoneVerificationRequest
                 * @return PhoneVerificationOutcome
                 */
                PhoneVerificationOutcome PhoneVerification(const Model::PhoneVerificationRequest &request);
                void PhoneVerificationAsync(const Model::PhoneVerificationRequest& request, const PhoneVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PhoneVerificationOutcomeCallable PhoneVerificationCallable(const Model::PhoneVerificationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
