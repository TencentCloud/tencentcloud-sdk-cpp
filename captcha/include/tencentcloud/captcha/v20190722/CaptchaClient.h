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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_CAPTCHACLIENT_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_CAPTCHACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaResultRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaResultResponse.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            class CaptchaClient : public AbstractClient
            {
            public:
                CaptchaClient(const Credential &credential, const std::string &region);
                CaptchaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeCaptchaResultResponse> DescribeCaptchaResultOutcome;
                typedef std::future<DescribeCaptchaResultOutcome> DescribeCaptchaResultOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaResultRequest&, DescribeCaptchaResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaResultAsyncHandler;



                /**
                 *核查验证码票据结果
                 * @param req DescribeCaptchaResultRequest
                 * @return DescribeCaptchaResultOutcome
                 */
                DescribeCaptchaResultOutcome DescribeCaptchaResult(const Model::DescribeCaptchaResultRequest &request);
                void DescribeCaptchaResultAsync(const Model::DescribeCaptchaResultRequest& request, const DescribeCaptchaResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaResultOutcomeCallable DescribeCaptchaResultCallable(const Model::DescribeCaptchaResultRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_CAPTCHACLIENT_H_
