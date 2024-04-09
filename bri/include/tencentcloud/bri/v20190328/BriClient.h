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

#ifndef TENCENTCLOUD_BRI_V20190328_BRICLIENT_H_
#define TENCENTCLOUD_BRI_V20190328_BRICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bri/v20190328/model/DescribeBRIRequest.h>
#include <tencentcloud/bri/v20190328/model/DescribeBRIResponse.h>


namespace TencentCloud
{
    namespace Bri
    {
        namespace V20190328
        {
            class BriClient : public AbstractClient
            {
            public:
                BriClient(const Credential &credential, const std::string &region);
                BriClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeBRIResponse> DescribeBRIOutcome;
                typedef std::future<DescribeBRIOutcome> DescribeBRIOutcomeCallable;
                typedef std::function<void(const BriClient*, const Model::DescribeBRIRequest&, DescribeBRIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBRIAsyncHandler;



                /**
                 *产品不在使用，业务已经下线

输入业务名 (bri_num, bri_dev, bri_ip, bri_apk, bri_url, bri_social 六种之一)  及其 相应字段, 获取业务风险分数和标签。

当业务名为bri_num时，必须填PhoneNumber字段.

当业务名为bri_dev时, 必须填Imei字段.

当业务名为bri_ip时，必须填IP字段.

当业务名为bri_apk时，必须填 (PackageName,CertMd5,FileSize) 三个字段 或者 FileMd5一个字段.

当业务名为bri_url时，必须填Url字段.

当业务名为bri_social时，必须填QQ和Wechat字段两者其中一个或者两个.
                 * @param req DescribeBRIRequest
                 * @return DescribeBRIOutcome
                 */
                DescribeBRIOutcome DescribeBRI(const Model::DescribeBRIRequest &request);
                void DescribeBRIAsync(const Model::DescribeBRIRequest& request, const DescribeBRIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBRIOutcomeCallable DescribeBRICallable(const Model::DescribeBRIRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BRI_V20190328_BRICLIENT_H_
