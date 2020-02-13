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

#ifndef TENCENTCLOUD_SMS_V20190711_SMSCLIENT_H_
#define TENCENTCLOUD_SMS_V20190711_SMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sms/v20190711/model/AddSmsSignRequest.h>
#include <tencentcloud/sms/v20190711/model/AddSmsSignResponse.h>
#include <tencentcloud/sms/v20190711/model/AddSmsTemplateRequest.h>
#include <tencentcloud/sms/v20190711/model/AddSmsTemplateResponse.h>
#include <tencentcloud/sms/v20190711/model/CallbackStatusStatisticsRequest.h>
#include <tencentcloud/sms/v20190711/model/CallbackStatusStatisticsResponse.h>
#include <tencentcloud/sms/v20190711/model/DeleteSmsSignRequest.h>
#include <tencentcloud/sms/v20190711/model/DeleteSmsSignResponse.h>
#include <tencentcloud/sms/v20190711/model/DeleteSmsTemplateRequest.h>
#include <tencentcloud/sms/v20190711/model/DeleteSmsTemplateResponse.h>
#include <tencentcloud/sms/v20190711/model/ModifySmsSignRequest.h>
#include <tencentcloud/sms/v20190711/model/ModifySmsSignResponse.h>
#include <tencentcloud/sms/v20190711/model/ModifySmsTemplateRequest.h>
#include <tencentcloud/sms/v20190711/model/ModifySmsTemplateResponse.h>
#include <tencentcloud/sms/v20190711/model/PullSmsReplyStatusRequest.h>
#include <tencentcloud/sms/v20190711/model/PullSmsReplyStatusResponse.h>
#include <tencentcloud/sms/v20190711/model/PullSmsReplyStatusByPhoneNumberRequest.h>
#include <tencentcloud/sms/v20190711/model/PullSmsReplyStatusByPhoneNumberResponse.h>
#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusRequest.h>
#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusResponse.h>
#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusByPhoneNumberRequest.h>
#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusByPhoneNumberResponse.h>
#include <tencentcloud/sms/v20190711/model/SendSmsRequest.h>
#include <tencentcloud/sms/v20190711/model/SendSmsResponse.h>
#include <tencentcloud/sms/v20190711/model/SendStatusStatisticsRequest.h>
#include <tencentcloud/sms/v20190711/model/SendStatusStatisticsResponse.h>
#include <tencentcloud/sms/v20190711/model/SmsPackagesStatisticsRequest.h>
#include <tencentcloud/sms/v20190711/model/SmsPackagesStatisticsResponse.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            class SmsClient : public AbstractClient
            {
            public:
                SmsClient(const Credential &credential, const std::string &region);
                SmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddSmsSignResponse> AddSmsSignOutcome;
                typedef std::future<AddSmsSignOutcome> AddSmsSignOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::AddSmsSignRequest&, AddSmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsSignAsyncHandler;
                typedef Outcome<Error, Model::AddSmsTemplateResponse> AddSmsTemplateOutcome;
                typedef std::future<AddSmsTemplateOutcome> AddSmsTemplateOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::AddSmsTemplateRequest&, AddSmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsTemplateAsyncHandler;
                typedef Outcome<Error, Model::CallbackStatusStatisticsResponse> CallbackStatusStatisticsOutcome;
                typedef std::future<CallbackStatusStatisticsOutcome> CallbackStatusStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::CallbackStatusStatisticsRequest&, CallbackStatusStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallbackStatusStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DeleteSmsSignResponse> DeleteSmsSignOutcome;
                typedef std::future<DeleteSmsSignOutcome> DeleteSmsSignOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DeleteSmsSignRequest&, DeleteSmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmsSignAsyncHandler;
                typedef Outcome<Error, Model::DeleteSmsTemplateResponse> DeleteSmsTemplateOutcome;
                typedef std::future<DeleteSmsTemplateOutcome> DeleteSmsTemplateOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DeleteSmsTemplateRequest&, DeleteSmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmsTemplateAsyncHandler;
                typedef Outcome<Error, Model::ModifySmsSignResponse> ModifySmsSignOutcome;
                typedef std::future<ModifySmsSignOutcome> ModifySmsSignOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::ModifySmsSignRequest&, ModifySmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmsSignAsyncHandler;
                typedef Outcome<Error, Model::ModifySmsTemplateResponse> ModifySmsTemplateOutcome;
                typedef std::future<ModifySmsTemplateOutcome> ModifySmsTemplateOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::ModifySmsTemplateRequest&, ModifySmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmsTemplateAsyncHandler;
                typedef Outcome<Error, Model::PullSmsReplyStatusResponse> PullSmsReplyStatusOutcome;
                typedef std::future<PullSmsReplyStatusOutcome> PullSmsReplyStatusOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsReplyStatusRequest&, PullSmsReplyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsReplyStatusAsyncHandler;
                typedef Outcome<Error, Model::PullSmsReplyStatusByPhoneNumberResponse> PullSmsReplyStatusByPhoneNumberOutcome;
                typedef std::future<PullSmsReplyStatusByPhoneNumberOutcome> PullSmsReplyStatusByPhoneNumberOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsReplyStatusByPhoneNumberRequest&, PullSmsReplyStatusByPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsReplyStatusByPhoneNumberAsyncHandler;
                typedef Outcome<Error, Model::PullSmsSendStatusResponse> PullSmsSendStatusOutcome;
                typedef std::future<PullSmsSendStatusOutcome> PullSmsSendStatusOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsSendStatusRequest&, PullSmsSendStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsSendStatusAsyncHandler;
                typedef Outcome<Error, Model::PullSmsSendStatusByPhoneNumberResponse> PullSmsSendStatusByPhoneNumberOutcome;
                typedef std::future<PullSmsSendStatusByPhoneNumberOutcome> PullSmsSendStatusByPhoneNumberOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsSendStatusByPhoneNumberRequest&, PullSmsSendStatusByPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsSendStatusByPhoneNumberAsyncHandler;
                typedef Outcome<Error, Model::SendSmsResponse> SendSmsOutcome;
                typedef std::future<SendSmsOutcome> SendSmsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SendSmsRequest&, SendSmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsAsyncHandler;
                typedef Outcome<Error, Model::SendStatusStatisticsResponse> SendStatusStatisticsOutcome;
                typedef std::future<SendStatusStatisticsOutcome> SendStatusStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SendStatusStatisticsRequest&, SendStatusStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendStatusStatisticsAsyncHandler;
                typedef Outcome<Error, Model::SmsPackagesStatisticsResponse> SmsPackagesStatisticsOutcome;
                typedef std::future<SmsPackagesStatisticsOutcome> SmsPackagesStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SmsPackagesStatisticsRequest&, SmsPackagesStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SmsPackagesStatisticsAsyncHandler;



                /**
                 *添加短信签名
                 * @param req AddSmsSignRequest
                 * @return AddSmsSignOutcome
                 */
                AddSmsSignOutcome AddSmsSign(const Model::AddSmsSignRequest &request);
                void AddSmsSignAsync(const Model::AddSmsSignRequest& request, const AddSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsSignOutcomeCallable AddSmsSignCallable(const Model::AddSmsSignRequest& request);

                /**
                 *添加短信模板
                 * @param req AddSmsTemplateRequest
                 * @return AddSmsTemplateOutcome
                 */
                AddSmsTemplateOutcome AddSmsTemplate(const Model::AddSmsTemplateRequest &request);
                void AddSmsTemplateAsync(const Model::AddSmsTemplateRequest& request, const AddSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsTemplateOutcomeCallable AddSmsTemplateCallable(const Model::AddSmsTemplateRequest& request);

                /**
                 *统计用户回执的数据。
                 * @param req CallbackStatusStatisticsRequest
                 * @return CallbackStatusStatisticsOutcome
                 */
                CallbackStatusStatisticsOutcome CallbackStatusStatistics(const Model::CallbackStatusStatisticsRequest &request);
                void CallbackStatusStatisticsAsync(const Model::CallbackStatusStatisticsRequest& request, const CallbackStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallbackStatusStatisticsOutcomeCallable CallbackStatusStatisticsCallable(const Model::CallbackStatusStatisticsRequest& request);

                /**
                 *删除短信签名
                 * @param req DeleteSmsSignRequest
                 * @return DeleteSmsSignOutcome
                 */
                DeleteSmsSignOutcome DeleteSmsSign(const Model::DeleteSmsSignRequest &request);
                void DeleteSmsSignAsync(const Model::DeleteSmsSignRequest& request, const DeleteSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmsSignOutcomeCallable DeleteSmsSignCallable(const Model::DeleteSmsSignRequest& request);

                /**
                 *删除短信模板
                 * @param req DeleteSmsTemplateRequest
                 * @return DeleteSmsTemplateOutcome
                 */
                DeleteSmsTemplateOutcome DeleteSmsTemplate(const Model::DeleteSmsTemplateRequest &request);
                void DeleteSmsTemplateAsync(const Model::DeleteSmsTemplateRequest& request, const DeleteSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmsTemplateOutcomeCallable DeleteSmsTemplateCallable(const Model::DeleteSmsTemplateRequest& request);

                /**
                 *修改短信签名
                 * @param req ModifySmsSignRequest
                 * @return ModifySmsSignOutcome
                 */
                ModifySmsSignOutcome ModifySmsSign(const Model::ModifySmsSignRequest &request);
                void ModifySmsSignAsync(const Model::ModifySmsSignRequest& request, const ModifySmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmsSignOutcomeCallable ModifySmsSignCallable(const Model::ModifySmsSignRequest& request);

                /**
                 *修改短信模板
                 * @param req ModifySmsTemplateRequest
                 * @return ModifySmsTemplateOutcome
                 */
                ModifySmsTemplateOutcome ModifySmsTemplate(const Model::ModifySmsTemplateRequest &request);
                void ModifySmsTemplateAsync(const Model::ModifySmsTemplateRequest& request, const ModifySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmsTemplateOutcomeCallable ModifySmsTemplateCallable(const Model::ModifySmsTemplateRequest& request);

                /**
                 *拉取短信回复状态。
                 * @param req PullSmsReplyStatusRequest
                 * @return PullSmsReplyStatusOutcome
                 */
                PullSmsReplyStatusOutcome PullSmsReplyStatus(const Model::PullSmsReplyStatusRequest &request);
                void PullSmsReplyStatusAsync(const Model::PullSmsReplyStatusRequest& request, const PullSmsReplyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsReplyStatusOutcomeCallable PullSmsReplyStatusCallable(const Model::PullSmsReplyStatusRequest& request);

                /**
                 *拉取单个号码短信回复状态。
                 * @param req PullSmsReplyStatusByPhoneNumberRequest
                 * @return PullSmsReplyStatusByPhoneNumberOutcome
                 */
                PullSmsReplyStatusByPhoneNumberOutcome PullSmsReplyStatusByPhoneNumber(const Model::PullSmsReplyStatusByPhoneNumberRequest &request);
                void PullSmsReplyStatusByPhoneNumberAsync(const Model::PullSmsReplyStatusByPhoneNumberRequest& request, const PullSmsReplyStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsReplyStatusByPhoneNumberOutcomeCallable PullSmsReplyStatusByPhoneNumberCallable(const Model::PullSmsReplyStatusByPhoneNumberRequest& request);

                /**
                 *拉取短信下发状态。
                 * @param req PullSmsSendStatusRequest
                 * @return PullSmsSendStatusOutcome
                 */
                PullSmsSendStatusOutcome PullSmsSendStatus(const Model::PullSmsSendStatusRequest &request);
                void PullSmsSendStatusAsync(const Model::PullSmsSendStatusRequest& request, const PullSmsSendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsSendStatusOutcomeCallable PullSmsSendStatusCallable(const Model::PullSmsSendStatusRequest& request);

                /**
                 *拉取单个号码短信下发状态。
                 * @param req PullSmsSendStatusByPhoneNumberRequest
                 * @return PullSmsSendStatusByPhoneNumberOutcome
                 */
                PullSmsSendStatusByPhoneNumberOutcome PullSmsSendStatusByPhoneNumber(const Model::PullSmsSendStatusByPhoneNumberRequest &request);
                void PullSmsSendStatusByPhoneNumberAsync(const Model::PullSmsSendStatusByPhoneNumberRequest& request, const PullSmsSendStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsSendStatusByPhoneNumberOutcomeCallable PullSmsSendStatusByPhoneNumberCallable(const Model::PullSmsSendStatusByPhoneNumberRequest& request);

                /**
                 *短信发送接口，用户给用户发短信验证码、通知类短信或营销短信。


                 * @param req SendSmsRequest
                 * @return SendSmsOutcome
                 */
                SendSmsOutcome SendSms(const Model::SendSmsRequest &request);
                void SendSmsAsync(const Model::SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendSmsOutcomeCallable SendSmsCallable(const Model::SendSmsRequest& request);

                /**
                 *统计用户发送短信的数据。
                 * @param req SendStatusStatisticsRequest
                 * @return SendStatusStatisticsOutcome
                 */
                SendStatusStatisticsOutcome SendStatusStatistics(const Model::SendStatusStatisticsRequest &request);
                void SendStatusStatisticsAsync(const Model::SendStatusStatisticsRequest& request, const SendStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendStatusStatisticsOutcomeCallable SendStatusStatisticsCallable(const Model::SendStatusStatisticsRequest& request);

                /**
                 *用户套餐包信息统计。
                 * @param req SmsPackagesStatisticsRequest
                 * @return SmsPackagesStatisticsOutcome
                 */
                SmsPackagesStatisticsOutcome SmsPackagesStatistics(const Model::SmsPackagesStatisticsRequest &request);
                void SmsPackagesStatisticsAsync(const Model::SmsPackagesStatisticsRequest& request, const SmsPackagesStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SmsPackagesStatisticsOutcomeCallable SmsPackagesStatisticsCallable(const Model::SmsPackagesStatisticsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_SMSCLIENT_H_
