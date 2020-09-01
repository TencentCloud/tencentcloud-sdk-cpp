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
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaAppIdInfoRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaAppIdInfoResponse.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaDataRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaDataResponse.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaDataSumRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaDataSumResponse.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaOperDataRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaOperDataResponse.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaResultRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaResultResponse.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaTicketDataRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaTicketDataResponse.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaUserAllAppIdRequest.h>
#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaUserAllAppIdResponse.h>
#include <tencentcloud/captcha/v20190722/model/UpdateCaptchaAppIdInfoRequest.h>
#include <tencentcloud/captcha/v20190722/model/UpdateCaptchaAppIdInfoResponse.h>


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

                typedef Outcome<Error, Model::DescribeCaptchaAppIdInfoResponse> DescribeCaptchaAppIdInfoOutcome;
                typedef std::future<DescribeCaptchaAppIdInfoOutcome> DescribeCaptchaAppIdInfoOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaAppIdInfoRequest&, DescribeCaptchaAppIdInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaAppIdInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeCaptchaDataResponse> DescribeCaptchaDataOutcome;
                typedef std::future<DescribeCaptchaDataOutcome> DescribeCaptchaDataOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaDataRequest&, DescribeCaptchaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeCaptchaDataSumResponse> DescribeCaptchaDataSumOutcome;
                typedef std::future<DescribeCaptchaDataSumOutcome> DescribeCaptchaDataSumOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaDataSumRequest&, DescribeCaptchaDataSumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaDataSumAsyncHandler;
                typedef Outcome<Error, Model::DescribeCaptchaOperDataResponse> DescribeCaptchaOperDataOutcome;
                typedef std::future<DescribeCaptchaOperDataOutcome> DescribeCaptchaOperDataOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaOperDataRequest&, DescribeCaptchaOperDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaOperDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeCaptchaResultResponse> DescribeCaptchaResultOutcome;
                typedef std::future<DescribeCaptchaResultOutcome> DescribeCaptchaResultOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaResultRequest&, DescribeCaptchaResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeCaptchaTicketDataResponse> DescribeCaptchaTicketDataOutcome;
                typedef std::future<DescribeCaptchaTicketDataOutcome> DescribeCaptchaTicketDataOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaTicketDataRequest&, DescribeCaptchaTicketDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaTicketDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeCaptchaUserAllAppIdResponse> DescribeCaptchaUserAllAppIdOutcome;
                typedef std::future<DescribeCaptchaUserAllAppIdOutcome> DescribeCaptchaUserAllAppIdOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::DescribeCaptchaUserAllAppIdRequest&, DescribeCaptchaUserAllAppIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCaptchaUserAllAppIdAsyncHandler;
                typedef Outcome<Error, Model::UpdateCaptchaAppIdInfoResponse> UpdateCaptchaAppIdInfoOutcome;
                typedef std::future<UpdateCaptchaAppIdInfoOutcome> UpdateCaptchaAppIdInfoOutcomeCallable;
                typedef std::function<void(const CaptchaClient*, const Model::UpdateCaptchaAppIdInfoRequest&, UpdateCaptchaAppIdInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCaptchaAppIdInfoAsyncHandler;



                /**
                 *查询安全验证码应用APPId信息
                 * @param req DescribeCaptchaAppIdInfoRequest
                 * @return DescribeCaptchaAppIdInfoOutcome
                 */
                DescribeCaptchaAppIdInfoOutcome DescribeCaptchaAppIdInfo(const Model::DescribeCaptchaAppIdInfoRequest &request);
                void DescribeCaptchaAppIdInfoAsync(const Model::DescribeCaptchaAppIdInfoRequest& request, const DescribeCaptchaAppIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaAppIdInfoOutcomeCallable DescribeCaptchaAppIdInfoCallable(const Model::DescribeCaptchaAppIdInfoRequest& request);

                /**
                 *安全验证码分类查询数据接口，请求量type=0、验证量type=1、通过量type=2、拦截量type=3  分钟级查询
                 * @param req DescribeCaptchaDataRequest
                 * @return DescribeCaptchaDataOutcome
                 */
                DescribeCaptchaDataOutcome DescribeCaptchaData(const Model::DescribeCaptchaDataRequest &request);
                void DescribeCaptchaDataAsync(const Model::DescribeCaptchaDataRequest& request, const DescribeCaptchaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaDataOutcomeCallable DescribeCaptchaDataCallable(const Model::DescribeCaptchaDataRequest& request);

                /**
                 *安全验证码查询请求数据概况，例如：按照时间段查询数据  昨日请求量、昨日恶意比例、昨日验证量、昨日通过量、昨日恶意拦截量……
                 * @param req DescribeCaptchaDataSumRequest
                 * @return DescribeCaptchaDataSumOutcome
                 */
                DescribeCaptchaDataSumOutcome DescribeCaptchaDataSum(const Model::DescribeCaptchaDataSumRequest &request);
                void DescribeCaptchaDataSumAsync(const Model::DescribeCaptchaDataSumRequest& request, const DescribeCaptchaDataSumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaDataSumOutcomeCallable DescribeCaptchaDataSumCallable(const Model::DescribeCaptchaDataSumRequest& request);

                /**
                 *安全验证码用户操作数据查询，验证码加载耗时type = 1 、拦截情况type = 2、 一周通过平均尝试次数 type = 3、尝试次数分布 type = 4
                 * @param req DescribeCaptchaOperDataRequest
                 * @return DescribeCaptchaOperDataOutcome
                 */
                DescribeCaptchaOperDataOutcome DescribeCaptchaOperData(const Model::DescribeCaptchaOperDataRequest &request);
                void DescribeCaptchaOperDataAsync(const Model::DescribeCaptchaOperDataRequest& request, const DescribeCaptchaOperDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaOperDataOutcomeCallable DescribeCaptchaOperDataCallable(const Model::DescribeCaptchaOperDataRequest& request);

                /**
                 *核查验证码票据结果
                 * @param req DescribeCaptchaResultRequest
                 * @return DescribeCaptchaResultOutcome
                 */
                DescribeCaptchaResultOutcome DescribeCaptchaResult(const Model::DescribeCaptchaResultRequest &request);
                void DescribeCaptchaResultAsync(const Model::DescribeCaptchaResultRequest& request, const DescribeCaptchaResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaResultOutcomeCallable DescribeCaptchaResultCallable(const Model::DescribeCaptchaResultRequest& request);

                /**
                 *验证码控制台票据验证信息
                 * @param req DescribeCaptchaTicketDataRequest
                 * @return DescribeCaptchaTicketDataOutcome
                 */
                DescribeCaptchaTicketDataOutcome DescribeCaptchaTicketData(const Model::DescribeCaptchaTicketDataRequest &request);
                void DescribeCaptchaTicketDataAsync(const Model::DescribeCaptchaTicketDataRequest& request, const DescribeCaptchaTicketDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaTicketDataOutcomeCallable DescribeCaptchaTicketDataCallable(const Model::DescribeCaptchaTicketDataRequest& request);

                /**
                 *安全验证码获取用户注册所有APPId和应用名称
                 * @param req DescribeCaptchaUserAllAppIdRequest
                 * @return DescribeCaptchaUserAllAppIdOutcome
                 */
                DescribeCaptchaUserAllAppIdOutcome DescribeCaptchaUserAllAppId(const Model::DescribeCaptchaUserAllAppIdRequest &request);
                void DescribeCaptchaUserAllAppIdAsync(const Model::DescribeCaptchaUserAllAppIdRequest& request, const DescribeCaptchaUserAllAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCaptchaUserAllAppIdOutcomeCallable DescribeCaptchaUserAllAppIdCallable(const Model::DescribeCaptchaUserAllAppIdRequest& request);

                /**
                 *更新验证码应用APPId信息
                 * @param req UpdateCaptchaAppIdInfoRequest
                 * @return UpdateCaptchaAppIdInfoOutcome
                 */
                UpdateCaptchaAppIdInfoOutcome UpdateCaptchaAppIdInfo(const Model::UpdateCaptchaAppIdInfoRequest &request);
                void UpdateCaptchaAppIdInfoAsync(const Model::UpdateCaptchaAppIdInfoRequest& request, const UpdateCaptchaAppIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCaptchaAppIdInfoOutcomeCallable UpdateCaptchaAppIdInfoCallable(const Model::UpdateCaptchaAppIdInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_CAPTCHACLIENT_H_
