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
#include <tencentcloud/faceid/v20180301/model/BankCardVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/BankCardVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/DetectAuthRequest.h>
#include <tencentcloud/faceid/v20180301/model/DetectAuthResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetActionSequenceRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetActionSequenceResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetDetectInfoResponse.h>
#include <tencentcloud/faceid/v20180301/model/GetLiveCodeRequest.h>
#include <tencentcloud/faceid/v20180301/model/GetLiveCodeResponse.h>
#include <tencentcloud/faceid/v20180301/model/IdCardVerificationRequest.h>
#include <tencentcloud/faceid/v20180301/model/IdCardVerificationResponse.h>
#include <tencentcloud/faceid/v20180301/model/ImageRecognitionRequest.h>
#include <tencentcloud/faceid/v20180301/model/ImageRecognitionResponse.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareRequest.h>
#include <tencentcloud/faceid/v20180301/model/LivenessCompareResponse.h>
#include <tencentcloud/faceid/v20180301/model/LivenessRecognitionRequest.h>
#include <tencentcloud/faceid/v20180301/model/LivenessRecognitionResponse.h>


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

                typedef Outcome<Error, Model::BankCardVerificationResponse> BankCardVerificationOutcome;
                typedef std::future<BankCardVerificationOutcome> BankCardVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::BankCardVerificationRequest&, BankCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardVerificationAsyncHandler;
                typedef Outcome<Error, Model::DetectAuthResponse> DetectAuthOutcome;
                typedef std::future<DetectAuthOutcome> DetectAuthOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::DetectAuthRequest&, DetectAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectAuthAsyncHandler;
                typedef Outcome<Error, Model::GetActionSequenceResponse> GetActionSequenceOutcome;
                typedef std::future<GetActionSequenceOutcome> GetActionSequenceOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetActionSequenceRequest&, GetActionSequenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetActionSequenceAsyncHandler;
                typedef Outcome<Error, Model::GetDetectInfoResponse> GetDetectInfoOutcome;
                typedef std::future<GetDetectInfoOutcome> GetDetectInfoOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetDetectInfoRequest&, GetDetectInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectInfoAsyncHandler;
                typedef Outcome<Error, Model::GetLiveCodeResponse> GetLiveCodeOutcome;
                typedef std::future<GetLiveCodeOutcome> GetLiveCodeOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::GetLiveCodeRequest&, GetLiveCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLiveCodeAsyncHandler;
                typedef Outcome<Error, Model::IdCardVerificationResponse> IdCardVerificationOutcome;
                typedef std::future<IdCardVerificationOutcome> IdCardVerificationOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::IdCardVerificationRequest&, IdCardVerificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdCardVerificationAsyncHandler;
                typedef Outcome<Error, Model::ImageRecognitionResponse> ImageRecognitionOutcome;
                typedef std::future<ImageRecognitionOutcome> ImageRecognitionOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::ImageRecognitionRequest&, ImageRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageRecognitionAsyncHandler;
                typedef Outcome<Error, Model::LivenessCompareResponse> LivenessCompareOutcome;
                typedef std::future<LivenessCompareOutcome> LivenessCompareOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessCompareRequest&, LivenessCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessCompareAsyncHandler;
                typedef Outcome<Error, Model::LivenessRecognitionResponse> LivenessRecognitionOutcome;
                typedef std::future<LivenessRecognitionOutcome> LivenessRecognitionOutcomeCallable;
                typedef std::function<void(const FaceidClient*, const Model::LivenessRecognitionRequest&, LivenessRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LivenessRecognitionAsyncHandler;



                /**
                 *银行卡核验
                 * @param req BankCardVerificationRequest
                 * @return BankCardVerificationOutcome
                 */
                BankCardVerificationOutcome BankCardVerification(const Model::BankCardVerificationRequest &request);
                void BankCardVerificationAsync(const Model::BankCardVerificationRequest& request, const BankCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCardVerificationOutcomeCallable BankCardVerificationCallable(const Model::BankCardVerificationRequest& request);

                /**
                 *每次开始核身前，需先调用本接口获取BizToken，用来串联核身流程，在核身完成后，用于获取验证结果信息。
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
                 *使用数字活体检测模式前，需调用本接口获取数字验证码。
                 * @param req GetLiveCodeRequest
                 * @return GetLiveCodeOutcome
                 */
                GetLiveCodeOutcome GetLiveCode(const Model::GetLiveCodeRequest &request);
                void GetLiveCodeAsync(const Model::GetLiveCodeRequest& request, const GetLiveCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLiveCodeOutcomeCallable GetLiveCodeCallable(const Model::GetLiveCodeRequest& request);

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

            };
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_FACEIDCLIENT_H_
