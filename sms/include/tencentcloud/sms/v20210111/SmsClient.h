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

#ifndef TENCENTCLOUD_SMS_V20210111_SMSCLIENT_H_
#define TENCENTCLOUD_SMS_V20210111_SMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsTemplateListRequest.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsTemplateListResponse.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            class SmsClient : public AbstractClient
            {
            public:
                SmsClient(const Credential &credential, const std::string &region);
                SmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeSmsTemplateListResponse> DescribeSmsTemplateListOutcome;
                typedef std::future<DescribeSmsTemplateListOutcome> DescribeSmsTemplateListOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DescribeSmsTemplateListRequest&, DescribeSmsTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsTemplateListAsyncHandler;



                /**
                 *⚠️注意：个人认证用户不支持使用 API 查询短信正文模版，请参阅了解 [实名认证基本介绍](https://cloud.tencent.com/document/product/378/3629)。
>- 注：由于云 **API3.0 安全性**有所提升，所以**接口鉴权**较为复杂，建议使用 [SDK](https://cloud.tencent.com/document/product/382/43193) 来使用云短信服务。
>- 您可以在 [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2019-07-11&Action=SendSms) 中直接运行该接口，可以先免去签名计算步骤。运行成功后，API Explorer可以**自动生成**SDK代码示例。

                 * @param req DescribeSmsTemplateListRequest
                 * @return DescribeSmsTemplateListOutcome
                 */
                DescribeSmsTemplateListOutcome DescribeSmsTemplateList(const Model::DescribeSmsTemplateListRequest &request);
                void DescribeSmsTemplateListAsync(const Model::DescribeSmsTemplateListRequest& request, const DescribeSmsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsTemplateListOutcomeCallable DescribeSmsTemplateListCallable(const Model::DescribeSmsTemplateListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_SMSCLIENT_H_
