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

#ifndef TENCENTCLOUD_IC_V20190307_ICCLIENT_H_
#define TENCENTCLOUD_IC_V20190307_ICCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ic/v20190307/model/DescribeAppRequest.h>
#include <tencentcloud/ic/v20190307/model/DescribeAppResponse.h>
#include <tencentcloud/ic/v20190307/model/DescribeCardRequest.h>
#include <tencentcloud/ic/v20190307/model/DescribeCardResponse.h>
#include <tencentcloud/ic/v20190307/model/DescribeCardsRequest.h>
#include <tencentcloud/ic/v20190307/model/DescribeCardsResponse.h>
#include <tencentcloud/ic/v20190307/model/DescribeSmsRequest.h>
#include <tencentcloud/ic/v20190307/model/DescribeSmsResponse.h>
#include <tencentcloud/ic/v20190307/model/ModifyUserCardRemarkRequest.h>
#include <tencentcloud/ic/v20190307/model/ModifyUserCardRemarkResponse.h>
#include <tencentcloud/ic/v20190307/model/PayForExtendDataRequest.h>
#include <tencentcloud/ic/v20190307/model/PayForExtendDataResponse.h>
#include <tencentcloud/ic/v20190307/model/RenewCardsRequest.h>
#include <tencentcloud/ic/v20190307/model/RenewCardsResponse.h>
#include <tencentcloud/ic/v20190307/model/SendMultiSmsRequest.h>
#include <tencentcloud/ic/v20190307/model/SendMultiSmsResponse.h>
#include <tencentcloud/ic/v20190307/model/SendSmsRequest.h>
#include <tencentcloud/ic/v20190307/model/SendSmsResponse.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            class IcClient : public AbstractClient
            {
            public:
                IcClient(const Credential &credential, const std::string &region);
                IcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeAppResponse> DescribeAppOutcome;
                typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
                typedef std::function<void(const IcClient*, const Model::DescribeAppRequest&, DescribeAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCardResponse> DescribeCardOutcome;
                typedef std::future<DescribeCardOutcome> DescribeCardOutcomeCallable;
                typedef std::function<void(const IcClient*, const Model::DescribeCardRequest&, DescribeCardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCardsResponse> DescribeCardsOutcome;
                typedef std::future<DescribeCardsOutcome> DescribeCardsOutcomeCallable;
                typedef std::function<void(const IcClient*, const Model::DescribeCardsRequest&, DescribeCardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCardsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmsResponse> DescribeSmsOutcome;
                typedef std::future<DescribeSmsOutcome> DescribeSmsOutcomeCallable;
                typedef std::function<void(const IcClient*, const Model::DescribeSmsRequest&, DescribeSmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserCardRemarkResponse> ModifyUserCardRemarkOutcome;
                typedef std::future<ModifyUserCardRemarkOutcome> ModifyUserCardRemarkOutcomeCallable;
                typedef std::function<void(const IcClient*, const Model::ModifyUserCardRemarkRequest&, ModifyUserCardRemarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserCardRemarkAsyncHandler;
                typedef Outcome<Core::Error, Model::PayForExtendDataResponse> PayForExtendDataOutcome;
                typedef std::future<PayForExtendDataOutcome> PayForExtendDataOutcomeCallable;
                typedef std::function<void(const IcClient*, const Model::PayForExtendDataRequest&, PayForExtendDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PayForExtendDataAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewCardsResponse> RenewCardsOutcome;
                typedef std::future<RenewCardsOutcome> RenewCardsOutcomeCallable;
                typedef std::function<void(const IcClient*, const Model::RenewCardsRequest&, RenewCardsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewCardsAsyncHandler;
                typedef Outcome<Core::Error, Model::SendMultiSmsResponse> SendMultiSmsOutcome;
                typedef std::future<SendMultiSmsOutcome> SendMultiSmsOutcomeCallable;
                typedef std::function<void(const IcClient*, const Model::SendMultiSmsRequest&, SendMultiSmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendMultiSmsAsyncHandler;
                typedef Outcome<Core::Error, Model::SendSmsResponse> SendSmsOutcome;
                typedef std::future<SendSmsOutcome> SendSmsOutcomeCallable;
                typedef std::function<void(const IcClient*, const Model::SendSmsRequest&, SendSmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsAsyncHandler;



                /**
                 *根据应用id查询物联卡应用详情
                 * @param req DescribeAppRequest
                 * @return DescribeAppOutcome
                 */
                DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest &request);
                void DescribeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppOutcomeCallable DescribeAppCallable(const Model::DescribeAppRequest& request);

                /**
                 *查询卡片详细信息
                 * @param req DescribeCardRequest
                 * @return DescribeCardOutcome
                 */
                DescribeCardOutcome DescribeCard(const Model::DescribeCardRequest &request);
                void DescribeCardAsync(const Model::DescribeCardRequest& request, const DescribeCardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCardOutcomeCallable DescribeCardCallable(const Model::DescribeCardRequest& request);

                /**
                 *查询卡片列表信息
                 * @param req DescribeCardsRequest
                 * @return DescribeCardsOutcome
                 */
                DescribeCardsOutcome DescribeCards(const Model::DescribeCardsRequest &request);
                void DescribeCardsAsync(const Model::DescribeCardsRequest& request, const DescribeCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCardsOutcomeCallable DescribeCardsCallable(const Model::DescribeCardsRequest& request);

                /**
                 *查询短信列表
                 * @param req DescribeSmsRequest
                 * @return DescribeSmsOutcome
                 */
                DescribeSmsOutcome DescribeSms(const Model::DescribeSmsRequest &request);
                void DescribeSmsAsync(const Model::DescribeSmsRequest& request, const DescribeSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsOutcomeCallable DescribeSmsCallable(const Model::DescribeSmsRequest& request);

                /**
                 *编辑卡片备注
                 * @param req ModifyUserCardRemarkRequest
                 * @return ModifyUserCardRemarkOutcome
                 */
                ModifyUserCardRemarkOutcome ModifyUserCardRemark(const Model::ModifyUserCardRemarkRequest &request);
                void ModifyUserCardRemarkAsync(const Model::ModifyUserCardRemarkRequest& request, const ModifyUserCardRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserCardRemarkOutcomeCallable ModifyUserCardRemarkCallable(const Model::ModifyUserCardRemarkRequest& request);

                /**
                 *购买套外流量包
                 * @param req PayForExtendDataRequest
                 * @return PayForExtendDataOutcome
                 */
                PayForExtendDataOutcome PayForExtendData(const Model::PayForExtendDataRequest &request);
                void PayForExtendDataAsync(const Model::PayForExtendDataRequest& request, const PayForExtendDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PayForExtendDataOutcomeCallable PayForExtendDataCallable(const Model::PayForExtendDataRequest& request);

                /**
                 *批量为卡片续费，此接口建议调用至少间隔10s,如果出现返回deal lock failed相关的错误，请过10s再重试。
续费的必要条件：
1、单次续费的卡片不可以超过 100张。
2、接口只支持在控制台购买的卡片进行续费
3、销户和未激活的卡片不支持续费。
4、每张物联网卡，续费总周期不能超过24个月
                 * @param req RenewCardsRequest
                 * @return RenewCardsOutcome
                 */
                RenewCardsOutcome RenewCards(const Model::RenewCardsRequest &request);
                void RenewCardsAsync(const Model::RenewCardsRequest& request, const RenewCardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewCardsOutcomeCallable RenewCardsCallable(const Model::RenewCardsRequest& request);

                /**
                 *群发短信
                 * @param req SendMultiSmsRequest
                 * @return SendMultiSmsOutcome
                 */
                SendMultiSmsOutcome SendMultiSms(const Model::SendMultiSmsRequest &request);
                void SendMultiSmsAsync(const Model::SendMultiSmsRequest& request, const SendMultiSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendMultiSmsOutcomeCallable SendMultiSmsCallable(const Model::SendMultiSmsRequest& request);

                /**
                 *发送短信息接口
                 * @param req SendSmsRequest
                 * @return SendSmsOutcome
                 */
                SendSmsOutcome SendSms(const Model::SendSmsRequest &request);
                void SendSmsAsync(const Model::SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendSmsOutcomeCallable SendSmsCallable(const Model::SendSmsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_ICCLIENT_H_
