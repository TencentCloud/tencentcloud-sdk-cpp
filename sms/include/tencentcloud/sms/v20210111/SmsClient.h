/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/sms/v20210111/model/AddSmsSignRequest.h>
#include <tencentcloud/sms/v20210111/model/AddSmsSignResponse.h>
#include <tencentcloud/sms/v20210111/model/AddSmsTemplateRequest.h>
#include <tencentcloud/sms/v20210111/model/AddSmsTemplateResponse.h>
#include <tencentcloud/sms/v20210111/model/CallbackStatusStatisticsRequest.h>
#include <tencentcloud/sms/v20210111/model/CallbackStatusStatisticsResponse.h>
#include <tencentcloud/sms/v20210111/model/DeleteSmsSignRequest.h>
#include <tencentcloud/sms/v20210111/model/DeleteSmsSignResponse.h>
#include <tencentcloud/sms/v20210111/model/DeleteSmsTemplateRequest.h>
#include <tencentcloud/sms/v20210111/model/DeleteSmsTemplateResponse.h>
#include <tencentcloud/sms/v20210111/model/DescribePhoneNumberInfoRequest.h>
#include <tencentcloud/sms/v20210111/model/DescribePhoneNumberInfoResponse.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsSignListRequest.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsSignListResponse.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsTemplateListRequest.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsTemplateListResponse.h>
#include <tencentcloud/sms/v20210111/model/ModifySmsSignRequest.h>
#include <tencentcloud/sms/v20210111/model/ModifySmsSignResponse.h>
#include <tencentcloud/sms/v20210111/model/ModifySmsTemplateRequest.h>
#include <tencentcloud/sms/v20210111/model/ModifySmsTemplateResponse.h>
#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusRequest.h>
#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusResponse.h>
#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusByPhoneNumberRequest.h>
#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusByPhoneNumberResponse.h>
#include <tencentcloud/sms/v20210111/model/PullSmsSendStatusRequest.h>
#include <tencentcloud/sms/v20210111/model/PullSmsSendStatusResponse.h>
#include <tencentcloud/sms/v20210111/model/PullSmsSendStatusByPhoneNumberRequest.h>
#include <tencentcloud/sms/v20210111/model/PullSmsSendStatusByPhoneNumberResponse.h>
#include <tencentcloud/sms/v20210111/model/ReportConversionRequest.h>
#include <tencentcloud/sms/v20210111/model/ReportConversionResponse.h>
#include <tencentcloud/sms/v20210111/model/SendSmsRequest.h>
#include <tencentcloud/sms/v20210111/model/SendSmsResponse.h>
#include <tencentcloud/sms/v20210111/model/SendStatusStatisticsRequest.h>
#include <tencentcloud/sms/v20210111/model/SendStatusStatisticsResponse.h>
#include <tencentcloud/sms/v20210111/model/SmsPackagesStatisticsRequest.h>
#include <tencentcloud/sms/v20210111/model/SmsPackagesStatisticsResponse.h>


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

                typedef Outcome<Core::Error, Model::AddSmsSignResponse> AddSmsSignOutcome;
                typedef std::future<AddSmsSignOutcome> AddSmsSignOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::AddSmsSignRequest&, AddSmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsSignAsyncHandler;
                typedef Outcome<Core::Error, Model::AddSmsTemplateResponse> AddSmsTemplateOutcome;
                typedef std::future<AddSmsTemplateOutcome> AddSmsTemplateOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::AddSmsTemplateRequest&, AddSmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CallbackStatusStatisticsResponse> CallbackStatusStatisticsOutcome;
                typedef std::future<CallbackStatusStatisticsOutcome> CallbackStatusStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::CallbackStatusStatisticsRequest&, CallbackStatusStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallbackStatusStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSmsSignResponse> DeleteSmsSignOutcome;
                typedef std::future<DeleteSmsSignOutcome> DeleteSmsSignOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DeleteSmsSignRequest&, DeleteSmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmsSignAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSmsTemplateResponse> DeleteSmsTemplateOutcome;
                typedef std::future<DeleteSmsTemplateOutcome> DeleteSmsTemplateOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DeleteSmsTemplateRequest&, DeleteSmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePhoneNumberInfoResponse> DescribePhoneNumberInfoOutcome;
                typedef std::future<DescribePhoneNumberInfoOutcome> DescribePhoneNumberInfoOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DescribePhoneNumberInfoRequest&, DescribePhoneNumberInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneNumberInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmsSignListResponse> DescribeSmsSignListOutcome;
                typedef std::future<DescribeSmsSignListOutcome> DescribeSmsSignListOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DescribeSmsSignListRequest&, DescribeSmsSignListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsSignListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmsTemplateListResponse> DescribeSmsTemplateListOutcome;
                typedef std::future<DescribeSmsTemplateListOutcome> DescribeSmsTemplateListOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DescribeSmsTemplateListRequest&, DescribeSmsTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsTemplateListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySmsSignResponse> ModifySmsSignOutcome;
                typedef std::future<ModifySmsSignOutcome> ModifySmsSignOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::ModifySmsSignRequest&, ModifySmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmsSignAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySmsTemplateResponse> ModifySmsTemplateOutcome;
                typedef std::future<ModifySmsTemplateOutcome> ModifySmsTemplateOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::ModifySmsTemplateRequest&, ModifySmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::PullSmsReplyStatusResponse> PullSmsReplyStatusOutcome;
                typedef std::future<PullSmsReplyStatusOutcome> PullSmsReplyStatusOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsReplyStatusRequest&, PullSmsReplyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsReplyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::PullSmsReplyStatusByPhoneNumberResponse> PullSmsReplyStatusByPhoneNumberOutcome;
                typedef std::future<PullSmsReplyStatusByPhoneNumberOutcome> PullSmsReplyStatusByPhoneNumberOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsReplyStatusByPhoneNumberRequest&, PullSmsReplyStatusByPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsReplyStatusByPhoneNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::PullSmsSendStatusResponse> PullSmsSendStatusOutcome;
                typedef std::future<PullSmsSendStatusOutcome> PullSmsSendStatusOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsSendStatusRequest&, PullSmsSendStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsSendStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::PullSmsSendStatusByPhoneNumberResponse> PullSmsSendStatusByPhoneNumberOutcome;
                typedef std::future<PullSmsSendStatusByPhoneNumberOutcome> PullSmsSendStatusByPhoneNumberOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsSendStatusByPhoneNumberRequest&, PullSmsSendStatusByPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsSendStatusByPhoneNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportConversionResponse> ReportConversionOutcome;
                typedef std::future<ReportConversionOutcome> ReportConversionOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::ReportConversionRequest&, ReportConversionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportConversionAsyncHandler;
                typedef Outcome<Core::Error, Model::SendSmsResponse> SendSmsOutcome;
                typedef std::future<SendSmsOutcome> SendSmsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SendSmsRequest&, SendSmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsAsyncHandler;
                typedef Outcome<Core::Error, Model::SendStatusStatisticsResponse> SendStatusStatisticsOutcome;
                typedef std::future<SendStatusStatisticsOutcome> SendStatusStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SendStatusStatisticsRequest&, SendStatusStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendStatusStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::SmsPackagesStatisticsResponse> SmsPackagesStatisticsOutcome;
                typedef std::future<SmsPackagesStatisticsOutcome> SmsPackagesStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SmsPackagesStatisticsRequest&, SmsPackagesStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SmsPackagesStatisticsAsyncHandler;



                /**
                 *本接口 (AddSmsSign) 用于添加短信签名。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>添加短信签名前，请先认真参阅 <a href="https://cloud.tencent.com/document/product/382/39022">腾讯云短信签名审核标准。</a></li><li>个人认证用户不支持使用 API 申请短信签名，请参阅了解 <a href="https://cloud.tencent.com/document/product/378/3629">实名认证基本介绍</a>，如果为个人认证请登录 <a href="https://console.cloud.tencent.com/smsv2">控制台</a> 申请短信签名。</li></ul></blockquote>
                 * @param req AddSmsSignRequest
                 * @return AddSmsSignOutcome
                 */
                AddSmsSignOutcome AddSmsSign(const Model::AddSmsSignRequest &request);
                void AddSmsSignAsync(const Model::AddSmsSignRequest& request, const AddSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsSignOutcomeCallable AddSmsSignCallable(const Model::AddSmsSignRequest& request);

                /**
                 *本接口 (AddSmsTemplate) 用于创建短信模板。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>申请短信模板前，请先认真参阅 <a href="https://cloud.tencent.com/document/product/382/39023">腾讯云短信正文模板审核标准。</a></li><li>个人认证用户不支持使用 API 申请短信正文模板，请参阅了解 <a href="https://cloud.tencent.com/document/product/378/3629">实名认证基本介绍</a>，如果为个人认证请登录 <a href="https://console.cloud.tencent.com/smsv2">控制台</a> 申请短信正文模板。</li></ul></blockquote>
                 * @param req AddSmsTemplateRequest
                 * @return AddSmsTemplateOutcome
                 */
                AddSmsTemplateOutcome AddSmsTemplate(const Model::AddSmsTemplateRequest &request);
                void AddSmsTemplateAsync(const Model::AddSmsTemplateRequest& request, const AddSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsTemplateOutcomeCallable AddSmsTemplateCallable(const Model::AddSmsTemplateRequest& request);

                /**
                 *本接口 (CallbackStatusStatistics) 用于统计用户回执的数据。
                 * @param req CallbackStatusStatisticsRequest
                 * @return CallbackStatusStatisticsOutcome
                 */
                CallbackStatusStatisticsOutcome CallbackStatusStatistics(const Model::CallbackStatusStatisticsRequest &request);
                void CallbackStatusStatisticsAsync(const Model::CallbackStatusStatisticsRequest& request, const CallbackStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallbackStatusStatisticsOutcomeCallable CallbackStatusStatisticsCallable(const Model::CallbackStatusStatisticsRequest& request);

                /**
                 *本接口 (DeleteSmsSign) 用于删除短信签名。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>个人认证用户不支持使用 API 删除短信签名，请参阅了解 <a href="https://cloud.tencent.com/document/product/378/3629">实名认证基本介绍</a>，如果为个人认证请登录 <a href="https://console.cloud.tencent.com/smsv2">控制台</a> 删除短信签名。</li></ul></blockquote>
                 * @param req DeleteSmsSignRequest
                 * @return DeleteSmsSignOutcome
                 */
                DeleteSmsSignOutcome DeleteSmsSign(const Model::DeleteSmsSignRequest &request);
                void DeleteSmsSignAsync(const Model::DeleteSmsSignRequest& request, const DeleteSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmsSignOutcomeCallable DeleteSmsSignCallable(const Model::DeleteSmsSignRequest& request);

                /**
                 *本接口 (DeleteSmsTemplate) 用于删除短信模板。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>个人认证用户不支持使用 API 删除短信正文模板，请参阅了解 <a href="https://cloud.tencent.com/document/product/378/3629">实名认证基本介绍</a>，如果为个人认证请登录 <a href="https://console.cloud.tencent.com/smsv2">控制台</a> 删除短信正文模板。</li></ul></blockquote>
                 * @param req DeleteSmsTemplateRequest
                 * @return DeleteSmsTemplateOutcome
                 */
                DeleteSmsTemplateOutcome DeleteSmsTemplate(const Model::DeleteSmsTemplateRequest &request);
                void DeleteSmsTemplateAsync(const Model::DeleteSmsTemplateRequest& request, const DeleteSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmsTemplateOutcomeCallable DeleteSmsTemplateCallable(const Model::DeleteSmsTemplateRequest& request);

                /**
                 *本接口 (DescribePhoneNumberInfo) 用于提供电话号码的信息查询，包括国家（或地区）码、规范的 E.164 格式号码等。
- 例如：查询号码 +86018501234444，可以得到国家码 86、规范的 E.164 号码 +8618501234444 等信息。
                 * @param req DescribePhoneNumberInfoRequest
                 * @return DescribePhoneNumberInfoOutcome
                 */
                DescribePhoneNumberInfoOutcome DescribePhoneNumberInfo(const Model::DescribePhoneNumberInfoRequest &request);
                void DescribePhoneNumberInfoAsync(const Model::DescribePhoneNumberInfoRequest& request, const DescribePhoneNumberInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePhoneNumberInfoOutcomeCallable DescribePhoneNumberInfoCallable(const Model::DescribePhoneNumberInfoRequest& request);

                /**
                 *本接口 (DescribeSmsSignList) 用于查询短信签名状态。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>个人认证用户不支持使用 API 查询短信签名，请参阅了解 <a href="https://cloud.tencent.com/document/product/378/3629">实名认证基本介绍</a>，如果为个人认证请登录 <a href="https://console.cloud.tencent.com/smsv2">控制台</a> 查询短信签名。</li></ul></blockquote>
                 * @param req DescribeSmsSignListRequest
                 * @return DescribeSmsSignListOutcome
                 */
                DescribeSmsSignListOutcome DescribeSmsSignList(const Model::DescribeSmsSignListRequest &request);
                void DescribeSmsSignListAsync(const Model::DescribeSmsSignListRequest& request, const DescribeSmsSignListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsSignListOutcomeCallable DescribeSmsSignListCallable(const Model::DescribeSmsSignListRequest& request);

                /**
                 *本接口 (DescribeSmsTemplateList) 用于查询短信模板状态。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>个人认证用户不支持使用 API 查询短信正文模板，请参阅了解 <a href="https://cloud.tencent.com/document/product/378/3629">实名认证基本介绍</a>，如果为个人认证请登录 <a href="https://console.cloud.tencent.com/smsv2">控制台</a> 查询短信正文模板。</li></ul></blockquote>
                 * @param req DescribeSmsTemplateListRequest
                 * @return DescribeSmsTemplateListOutcome
                 */
                DescribeSmsTemplateListOutcome DescribeSmsTemplateList(const Model::DescribeSmsTemplateListRequest &request);
                void DescribeSmsTemplateListAsync(const Model::DescribeSmsTemplateListRequest& request, const DescribeSmsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsTemplateListOutcomeCallable DescribeSmsTemplateListCallable(const Model::DescribeSmsTemplateListRequest& request);

                /**
                 *本接口 (ModifySmsSign) 用于修改短信签名。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>修改短信签名前，请先认真参阅 <a href="https://cloud.tencent.com/document/product/382/39022">腾讯云短信签名审核标准。</a></li><li>个人认证用户不支持使用 API 修改短信签名，请参阅了解 <a href="https://cloud.tencent.com/document/product/378/3629">实名认证基本介绍</a>，如果为个人认证请登录 <a href="https://console.cloud.tencent.com/smsv2">控制台</a> 修改短信签名。</li><li>修改短信签名，仅当签名为<b>待审核</b>或<b>已拒绝</b>状态时，才能进行修改，<b>已审核通过</b>的签名不支持修改。</li></ul></blockquote>
                 * @param req ModifySmsSignRequest
                 * @return ModifySmsSignOutcome
                 */
                ModifySmsSignOutcome ModifySmsSign(const Model::ModifySmsSignRequest &request);
                void ModifySmsSignAsync(const Model::ModifySmsSignRequest& request, const ModifySmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmsSignOutcomeCallable ModifySmsSignCallable(const Model::ModifySmsSignRequest& request);

                /**
                 *本接口 (ModifySmsTemplate) 用于修改短信模板。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>修改短信正文模板前，请先认真参阅 <a href="https://cloud.tencent.com/document/product/382/39023">腾讯云短信正文模板审核标准。</a></li><li>个人认证用户不支持使用 API 修改短信正文模板，请参阅了解 <a href="https://cloud.tencent.com/document/product/378/3629">实名认证基本介绍</a>，如果为个人认证请登录 <a href="https://console.cloud.tencent.com/smsv2">控制台</a> 修改短信正文模板。</li><li>修改短信模板，仅当正文模板为<b>待审核</b>或<b>已拒绝</b>状态时，才能进行修改，<b>已审核通过</b>的正文模板不支持修改。</li></ul></blockquote>
                 * @param req ModifySmsTemplateRequest
                 * @return ModifySmsTemplateOutcome
                 */
                ModifySmsTemplateOutcome ModifySmsTemplate(const Model::ModifySmsTemplateRequest &request);
                void ModifySmsTemplateAsync(const Model::ModifySmsTemplateRequest& request, const ModifySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmsTemplateOutcomeCallable ModifySmsTemplateCallable(const Model::ModifySmsTemplateRequest& request);

                /**
                 *本接口 (PullSmsReplyStatus) 用于拉取短信回复状态。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>此接口需要联系  <a href="https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81">腾讯云短信小助手</a> 开通。</li><li>上行回复也支持 <a href="https://cloud.tencent.com/document/product/382/42907">配置回复回调</a> 的方式获取。</li></ul></blockquote>
                 * @param req PullSmsReplyStatusRequest
                 * @return PullSmsReplyStatusOutcome
                 */
                PullSmsReplyStatusOutcome PullSmsReplyStatus(const Model::PullSmsReplyStatusRequest &request);
                void PullSmsReplyStatusAsync(const Model::PullSmsReplyStatusRequest& request, const PullSmsReplyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsReplyStatusOutcomeCallable PullSmsReplyStatusCallable(const Model::PullSmsReplyStatusRequest& request);

                /**
                 *本接口 (PullSmsReplyStatusByPhoneNumber) 用于拉取单个号码短信回复状态。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>上行回复也支持 <a href="https://cloud.tencent.com/document/product/382/42907">配置回复回调</a> 的方式获取。</li></ul></blockquote>
                 * @param req PullSmsReplyStatusByPhoneNumberRequest
                 * @return PullSmsReplyStatusByPhoneNumberOutcome
                 */
                PullSmsReplyStatusByPhoneNumberOutcome PullSmsReplyStatusByPhoneNumber(const Model::PullSmsReplyStatusByPhoneNumberRequest &request);
                void PullSmsReplyStatusByPhoneNumberAsync(const Model::PullSmsReplyStatusByPhoneNumberRequest& request, const PullSmsReplyStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsReplyStatusByPhoneNumberOutcomeCallable PullSmsReplyStatusByPhoneNumberCallable(const Model::PullSmsReplyStatusByPhoneNumberRequest& request);

                /**
                 *本接口 (PullSmsSendStatus) 用于拉取短信下发状态。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>此接口需要联系  <a href="https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81">腾讯云短信小助手</a> 开通。</li><li>下发状态也支持 <a href="https://cloud.tencent.com/document/product/382/37809#.E7.9F.AD.E4.BF.A1.E7.8A.B6.E6.80.81.E5.9B.9E.E8.B0.83.E9.85.8D.E7.BD.AE">配置回调</a> 的方式获取。</li></ul></blockquote>
                 * @param req PullSmsSendStatusRequest
                 * @return PullSmsSendStatusOutcome
                 */
                PullSmsSendStatusOutcome PullSmsSendStatus(const Model::PullSmsSendStatusRequest &request);
                void PullSmsSendStatusAsync(const Model::PullSmsSendStatusRequest& request, const PullSmsSendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsSendStatusOutcomeCallable PullSmsSendStatusCallable(const Model::PullSmsSendStatusRequest& request);

                /**
                 *本接口 (PullSmsSendStatusByPhoneNumber) 用于拉取单个号码短信下发状态。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>下发状态也支持 <a href="https://cloud.tencent.com/document/product/382/37809#.E7.9F.AD.E4.BF.A1.E7.8A.B6.E6.80.81.E5.9B.9E.E8.B0.83.E9.85.8D.E7.BD.AE">配置回调</a> 的方式获取。</li></ul></blockquote>
                 * @param req PullSmsSendStatusByPhoneNumberRequest
                 * @return PullSmsSendStatusByPhoneNumberOutcome
                 */
                PullSmsSendStatusByPhoneNumberOutcome PullSmsSendStatusByPhoneNumber(const Model::PullSmsSendStatusByPhoneNumberRequest &request);
                void PullSmsSendStatusByPhoneNumberAsync(const Model::PullSmsSendStatusByPhoneNumberRequest& request, const PullSmsSendStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsSendStatusByPhoneNumberOutcomeCallable PullSmsSendStatusByPhoneNumberCallable(const Model::PullSmsSendStatusByPhoneNumberRequest& request);

                /**
                 *本接口 (ReportConversion) 用于短信转化率上报。将已接收到短信的流水号上报到腾讯云短信服务。
<blockquote class="d-mod-explain"><div class="d-mod-title d-explain-title" style="line-height: normal;"><i class="d-icon-explain"></i>说明：</div><p></p><ul><li>该接口当前以白名单方式对外开放，如有需要请联系  <a href="https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81">腾讯云短信小助手</a> 开通。</li></ul></blockquote>
                 * @param req ReportConversionRequest
                 * @return ReportConversionOutcome
                 */
                ReportConversionOutcome ReportConversion(const Model::ReportConversionRequest &request);
                void ReportConversionAsync(const Model::ReportConversionRequest& request, const ReportConversionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportConversionOutcomeCallable ReportConversionCallable(const Model::ReportConversionRequest& request);

                /**
                 *本接口 (SendSms) 用于发送验证码、通知类短信和营销短信。支持国内短信与国际/港澳台短信。
- 当前接口属于 2021-01-11 版本，如果您仍在使用 [2019-07-11 版本](https://cloud.tencent.com/document/product/382/38778)，建议您使用当前最新版本的接口，版本差异可参考[版本描述](https://cloud.tencent.com/document/product/382/63195#.E7.89.88.E6.9C.AC.E6.8F.8F.E8.BF.B0)。
                 * @param req SendSmsRequest
                 * @return SendSmsOutcome
                 */
                SendSmsOutcome SendSms(const Model::SendSmsRequest &request);
                void SendSmsAsync(const Model::SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendSmsOutcomeCallable SendSmsCallable(const Model::SendSmsRequest& request);

                /**
                 *本接口 (SendStatusStatistics) 用于统计用户发送短信的数据。
                 * @param req SendStatusStatisticsRequest
                 * @return SendStatusStatisticsOutcome
                 */
                SendStatusStatisticsOutcome SendStatusStatistics(const Model::SendStatusStatisticsRequest &request);
                void SendStatusStatisticsAsync(const Model::SendStatusStatisticsRequest& request, const SendStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendStatusStatisticsOutcomeCallable SendStatusStatisticsCallable(const Model::SendStatusStatisticsRequest& request);

                /**
                 *本接口 (SmsPackagesStatistics) 用于统计用户套餐包数据。
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

#endif // !TENCENTCLOUD_SMS_V20210111_SMSCLIENT_H_
