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

#ifndef TENCENTCLOUD_ECC_V20181213_ECCCLIENT_H_
#define TENCENTCLOUD_ECC_V20181213_ECCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ecc/v20181213/model/CorrectMultiImageRequest.h>
#include <tencentcloud/ecc/v20181213/model/CorrectMultiImageResponse.h>
#include <tencentcloud/ecc/v20181213/model/DescribeTaskRequest.h>
#include <tencentcloud/ecc/v20181213/model/DescribeTaskResponse.h>
#include <tencentcloud/ecc/v20181213/model/ECCRequest.h>
#include <tencentcloud/ecc/v20181213/model/ECCResponse.h>
#include <tencentcloud/ecc/v20181213/model/EHOCRRequest.h>
#include <tencentcloud/ecc/v20181213/model/EHOCRResponse.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            class EccClient : public AbstractClient
            {
            public:
                EccClient(const Credential &credential, const std::string &region);
                EccClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CorrectMultiImageResponse> CorrectMultiImageOutcome;
                typedef std::future<CorrectMultiImageOutcome> CorrectMultiImageOutcomeCallable;
                typedef std::function<void(const EccClient*, const Model::CorrectMultiImageRequest&, CorrectMultiImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CorrectMultiImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResponse> DescribeTaskOutcome;
                typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
                typedef std::function<void(const EccClient*, const Model::DescribeTaskRequest&, DescribeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ECCResponse> ECCOutcome;
                typedef std::future<ECCOutcome> ECCOutcomeCallable;
                typedef std::function<void(const EccClient*, const Model::ECCRequest&, ECCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ECCAsyncHandler;
                typedef Outcome<Core::Error, Model::EHOCRResponse> EHOCROutcome;
                typedef std::future<EHOCROutcome> EHOCROutcomeCallable;
                typedef std::function<void(const EccClient*, const Model::EHOCRRequest&, EHOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> EHOCRAsyncHandler;



                /**
                 *https://ecc.tencentcloudapi.com/?Action=CorrectMultiImage
多图像识别批改接口
                 * @param req CorrectMultiImageRequest
                 * @return CorrectMultiImageOutcome
                 */
                CorrectMultiImageOutcome CorrectMultiImage(const Model::CorrectMultiImageRequest &request);
                void CorrectMultiImageAsync(const Model::CorrectMultiImageRequest& request, const CorrectMultiImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CorrectMultiImageOutcomeCallable CorrectMultiImageCallable(const Model::CorrectMultiImageRequest& request);

                /**
                 *异步任务结果查询接口
                 * @param req DescribeTaskRequest
                 * @return DescribeTaskOutcome
                 */
                DescribeTaskOutcome DescribeTask(const Model::DescribeTaskRequest &request);
                void DescribeTaskAsync(const Model::DescribeTaskRequest& request, const DescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskOutcomeCallable DescribeTaskCallable(const Model::DescribeTaskRequest& request);

                /**
                 *纯文本英语作文批改
                 * @param req ECCRequest
                 * @return ECCOutcome
                 */
                ECCOutcome ECC(const Model::ECCRequest &request);
                void ECCAsync(const Model::ECCRequest& request, const ECCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ECCOutcomeCallable ECCCallable(const Model::ECCRequest& request);

                /**
                 *https://ecc.tencentcloudapi.com/?Action=EHOCR
图像识别批改接口
                 * @param req EHOCRRequest
                 * @return EHOCROutcome
                 */
                EHOCROutcome EHOCR(const Model::EHOCRRequest &request);
                void EHOCRAsync(const Model::EHOCRRequest& request, const EHOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EHOCROutcomeCallable EHOCRCallable(const Model::EHOCRRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_ECCCLIENT_H_
