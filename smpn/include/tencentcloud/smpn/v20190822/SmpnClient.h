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

#ifndef TENCENTCLOUD_SMPN_V20190822_SMPNCLIENT_H_
#define TENCENTCLOUD_SMPN_V20190822_SMPNCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/smpn/v20190822/model/DescribeSmpnChpRequest.h>
#include <tencentcloud/smpn/v20190822/model/DescribeSmpnChpResponse.h>
#include <tencentcloud/smpn/v20190822/model/DescribeSmpnFnrRequest.h>
#include <tencentcloud/smpn/v20190822/model/DescribeSmpnFnrResponse.h>


namespace TencentCloud
{
    namespace Smpn
    {
        namespace V20190822
        {
            class SmpnClient : public AbstractClient
            {
            public:
                SmpnClient(const Credential &credential, const std::string &region);
                SmpnClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeSmpnChpResponse> DescribeSmpnChpOutcome;
                typedef std::future<DescribeSmpnChpOutcome> DescribeSmpnChpOutcomeCallable;
                typedef std::function<void(const SmpnClient*, const Model::DescribeSmpnChpRequest&, DescribeSmpnChpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmpnChpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmpnFnrResponse> DescribeSmpnFnrOutcome;
                typedef std::future<DescribeSmpnFnrOutcome> DescribeSmpnFnrOutcomeCallable;
                typedef std::function<void(const SmpnClient*, const Model::DescribeSmpnFnrRequest&, DescribeSmpnFnrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmpnFnrAsyncHandler;



                /**
                 *不在使用的API

查询号码的标记和标记次数
                 * @param req DescribeSmpnChpRequest
                 * @return DescribeSmpnChpOutcome
                 */
                DescribeSmpnChpOutcome DescribeSmpnChp(const Model::DescribeSmpnChpRequest &request);
                void DescribeSmpnChpAsync(const Model::DescribeSmpnChpRequest& request, const DescribeSmpnChpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmpnChpOutcomeCallable DescribeSmpnChpCallable(const Model::DescribeSmpnChpRequest& request);

                /**
                 *不在使用的API

虚假号码识别
                 * @param req DescribeSmpnFnrRequest
                 * @return DescribeSmpnFnrOutcome
                 */
                DescribeSmpnFnrOutcome DescribeSmpnFnr(const Model::DescribeSmpnFnrRequest &request);
                void DescribeSmpnFnrAsync(const Model::DescribeSmpnFnrRequest& request, const DescribeSmpnFnrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmpnFnrOutcomeCallable DescribeSmpnFnrCallable(const Model::DescribeSmpnFnrRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SMPN_V20190822_SMPNCLIENT_H_
