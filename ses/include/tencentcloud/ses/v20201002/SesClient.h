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

#ifndef TENCENTCLOUD_SES_V20201002_SESCLIENT_H_
#define TENCENTCLOUD_SES_V20201002_SESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ses/v20201002/model/BatchSendEmailRequest.h>
#include <tencentcloud/ses/v20201002/model/BatchSendEmailResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateAddressUnsubscribeConfigRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateAddressUnsubscribeConfigResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateCustomBlacklistRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateCustomBlacklistResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailTemplateResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverDetailRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverDetailResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverDetailWithDataRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverDetailWithDataResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteAddressUnsubscribeConfigRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteAddressUnsubscribeConfigResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteBlackListRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteBlackListResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteCustomBlackListRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteCustomBlackListResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailTemplateResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteReceiverRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteReceiverResponse.h>
#include <tencentcloud/ses/v20201002/model/GetEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/GetEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/GetEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/GetEmailTemplateResponse.h>
#include <tencentcloud/ses/v20201002/model/GetSendEmailStatusRequest.h>
#include <tencentcloud/ses/v20201002/model/GetSendEmailStatusResponse.h>
#include <tencentcloud/ses/v20201002/model/GetStatisticsReportRequest.h>
#include <tencentcloud/ses/v20201002/model/GetStatisticsReportResponse.h>
#include <tencentcloud/ses/v20201002/model/ListAddressUnsubscribeConfigRequest.h>
#include <tencentcloud/ses/v20201002/model/ListAddressUnsubscribeConfigResponse.h>
#include <tencentcloud/ses/v20201002/model/ListBlackEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/ListBlackEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/ListCustomBlacklistRequest.h>
#include <tencentcloud/ses/v20201002/model/ListCustomBlacklistResponse.h>
#include <tencentcloud/ses/v20201002/model/ListEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/ListEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/ListEmailIdentitiesRequest.h>
#include <tencentcloud/ses/v20201002/model/ListEmailIdentitiesResponse.h>
#include <tencentcloud/ses/v20201002/model/ListEmailTemplatesRequest.h>
#include <tencentcloud/ses/v20201002/model/ListEmailTemplatesResponse.h>
#include <tencentcloud/ses/v20201002/model/ListReceiverDetailsRequest.h>
#include <tencentcloud/ses/v20201002/model/ListReceiverDetailsResponse.h>
#include <tencentcloud/ses/v20201002/model/ListReceiversRequest.h>
#include <tencentcloud/ses/v20201002/model/ListReceiversResponse.h>
#include <tencentcloud/ses/v20201002/model/ListSendTasksRequest.h>
#include <tencentcloud/ses/v20201002/model/ListSendTasksResponse.h>
#include <tencentcloud/ses/v20201002/model/SendEmailRequest.h>
#include <tencentcloud/ses/v20201002/model/SendEmailResponse.h>
#include <tencentcloud/ses/v20201002/model/UpdateAddressUnsubscribeConfigRequest.h>
#include <tencentcloud/ses/v20201002/model/UpdateAddressUnsubscribeConfigResponse.h>
#include <tencentcloud/ses/v20201002/model/UpdateCustomBlackListRequest.h>
#include <tencentcloud/ses/v20201002/model/UpdateCustomBlackListResponse.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailSmtpPassWordRequest.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailSmtpPassWordResponse.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailTemplateResponse.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            class SesClient : public AbstractClient
            {
            public:
                SesClient(const Credential &credential, const std::string &region);
                SesClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchSendEmailResponse> BatchSendEmailOutcome;
                typedef std::future<BatchSendEmailOutcome> BatchSendEmailOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::BatchSendEmailRequest&, BatchSendEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchSendEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAddressUnsubscribeConfigResponse> CreateAddressUnsubscribeConfigOutcome;
                typedef std::future<CreateAddressUnsubscribeConfigOutcome> CreateAddressUnsubscribeConfigOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateAddressUnsubscribeConfigRequest&, CreateAddressUnsubscribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressUnsubscribeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomBlacklistResponse> CreateCustomBlacklistOutcome;
                typedef std::future<CreateCustomBlacklistOutcome> CreateCustomBlacklistOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateCustomBlacklistRequest&, CreateCustomBlacklistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomBlacklistAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmailAddressResponse> CreateEmailAddressOutcome;
                typedef std::future<CreateEmailAddressOutcome> CreateEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateEmailAddressRequest&, CreateEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmailAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmailIdentityResponse> CreateEmailIdentityOutcome;
                typedef std::future<CreateEmailIdentityOutcome> CreateEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateEmailIdentityRequest&, CreateEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmailIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmailTemplateResponse> CreateEmailTemplateOutcome;
                typedef std::future<CreateEmailTemplateOutcome> CreateEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateEmailTemplateRequest&, CreateEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReceiverResponse> CreateReceiverOutcome;
                typedef std::future<CreateReceiverOutcome> CreateReceiverOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateReceiverRequest&, CreateReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReceiverDetailResponse> CreateReceiverDetailOutcome;
                typedef std::future<CreateReceiverDetailOutcome> CreateReceiverDetailOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateReceiverDetailRequest&, CreateReceiverDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReceiverDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReceiverDetailWithDataResponse> CreateReceiverDetailWithDataOutcome;
                typedef std::future<CreateReceiverDetailWithDataOutcome> CreateReceiverDetailWithDataOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateReceiverDetailWithDataRequest&, CreateReceiverDetailWithDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReceiverDetailWithDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAddressUnsubscribeConfigResponse> DeleteAddressUnsubscribeConfigOutcome;
                typedef std::future<DeleteAddressUnsubscribeConfigOutcome> DeleteAddressUnsubscribeConfigOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteAddressUnsubscribeConfigRequest&, DeleteAddressUnsubscribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressUnsubscribeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBlackListResponse> DeleteBlackListOutcome;
                typedef std::future<DeleteBlackListOutcome> DeleteBlackListOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteBlackListRequest&, DeleteBlackListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlackListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomBlackListResponse> DeleteCustomBlackListOutcome;
                typedef std::future<DeleteCustomBlackListOutcome> DeleteCustomBlackListOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteCustomBlackListRequest&, DeleteCustomBlackListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomBlackListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEmailAddressResponse> DeleteEmailAddressOutcome;
                typedef std::future<DeleteEmailAddressOutcome> DeleteEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteEmailAddressRequest&, DeleteEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEmailIdentityResponse> DeleteEmailIdentityOutcome;
                typedef std::future<DeleteEmailIdentityOutcome> DeleteEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteEmailIdentityRequest&, DeleteEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEmailTemplateResponse> DeleteEmailTemplateOutcome;
                typedef std::future<DeleteEmailTemplateOutcome> DeleteEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteEmailTemplateRequest&, DeleteEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReceiverResponse> DeleteReceiverOutcome;
                typedef std::future<DeleteReceiverOutcome> DeleteReceiverOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteReceiverRequest&, DeleteReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEmailIdentityResponse> GetEmailIdentityOutcome;
                typedef std::future<GetEmailIdentityOutcome> GetEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetEmailIdentityRequest&, GetEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEmailIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEmailTemplateResponse> GetEmailTemplateOutcome;
                typedef std::future<GetEmailTemplateOutcome> GetEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetEmailTemplateRequest&, GetEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEmailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSendEmailStatusResponse> GetSendEmailStatusOutcome;
                typedef std::future<GetSendEmailStatusOutcome> GetSendEmailStatusOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetSendEmailStatusRequest&, GetSendEmailStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSendEmailStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetStatisticsReportResponse> GetStatisticsReportOutcome;
                typedef std::future<GetStatisticsReportOutcome> GetStatisticsReportOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetStatisticsReportRequest&, GetStatisticsReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticsReportAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAddressUnsubscribeConfigResponse> ListAddressUnsubscribeConfigOutcome;
                typedef std::future<ListAddressUnsubscribeConfigOutcome> ListAddressUnsubscribeConfigOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListAddressUnsubscribeConfigRequest&, ListAddressUnsubscribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAddressUnsubscribeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ListBlackEmailAddressResponse> ListBlackEmailAddressOutcome;
                typedef std::future<ListBlackEmailAddressOutcome> ListBlackEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListBlackEmailAddressRequest&, ListBlackEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListBlackEmailAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ListCustomBlacklistResponse> ListCustomBlacklistOutcome;
                typedef std::future<ListCustomBlacklistOutcome> ListCustomBlacklistOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListCustomBlacklistRequest&, ListCustomBlacklistOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomBlacklistAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEmailAddressResponse> ListEmailAddressOutcome;
                typedef std::future<ListEmailAddressOutcome> ListEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListEmailAddressRequest&, ListEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEmailIdentitiesResponse> ListEmailIdentitiesOutcome;
                typedef std::future<ListEmailIdentitiesOutcome> ListEmailIdentitiesOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListEmailIdentitiesRequest&, ListEmailIdentitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailIdentitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEmailTemplatesResponse> ListEmailTemplatesOutcome;
                typedef std::future<ListEmailTemplatesOutcome> ListEmailTemplatesOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListEmailTemplatesRequest&, ListEmailTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReceiverDetailsResponse> ListReceiverDetailsOutcome;
                typedef std::future<ListReceiverDetailsOutcome> ListReceiverDetailsOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListReceiverDetailsRequest&, ListReceiverDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReceiverDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReceiversResponse> ListReceiversOutcome;
                typedef std::future<ListReceiversOutcome> ListReceiversOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListReceiversRequest&, ListReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSendTasksResponse> ListSendTasksOutcome;
                typedef std::future<ListSendTasksOutcome> ListSendTasksOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListSendTasksRequest&, ListSendTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSendTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::SendEmailResponse> SendEmailOutcome;
                typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::SendEmailRequest&, SendEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAddressUnsubscribeConfigResponse> UpdateAddressUnsubscribeConfigOutcome;
                typedef std::future<UpdateAddressUnsubscribeConfigOutcome> UpdateAddressUnsubscribeConfigOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::UpdateAddressUnsubscribeConfigRequest&, UpdateAddressUnsubscribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAddressUnsubscribeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateCustomBlackListResponse> UpdateCustomBlackListOutcome;
                typedef std::future<UpdateCustomBlackListOutcome> UpdateCustomBlackListOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::UpdateCustomBlackListRequest&, UpdateCustomBlackListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomBlackListAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEmailIdentityResponse> UpdateEmailIdentityOutcome;
                typedef std::future<UpdateEmailIdentityOutcome> UpdateEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::UpdateEmailIdentityRequest&, UpdateEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEmailIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEmailSmtpPassWordResponse> UpdateEmailSmtpPassWordOutcome;
                typedef std::future<UpdateEmailSmtpPassWordOutcome> UpdateEmailSmtpPassWordOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::UpdateEmailSmtpPassWordRequest&, UpdateEmailSmtpPassWordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEmailSmtpPassWordAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEmailTemplateResponse> UpdateEmailTemplateOutcome;
                typedef std::future<UpdateEmailTemplateOutcome> UpdateEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::UpdateEmailTemplateRequest&, UpdateEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEmailTemplateAsyncHandler;



                /**
                 *您可以通过此API批量发送TEXT或者HTML邮件，适用于营销类、通知类邮件。默认仅支持使用模板发送邮件。批量发送之前，需先创建收件人列表，和收件人地址，并通过收件人列表id来进行发送。批量发送任务支持定时发送和周期重复发送，定时发送需传TimedParam，周期重复发送需传CycleParam
                 * @param req BatchSendEmailRequest
                 * @return BatchSendEmailOutcome
                 */
                BatchSendEmailOutcome BatchSendEmail(const Model::BatchSendEmailRequest &request);
                void BatchSendEmailAsync(const Model::BatchSendEmailRequest& request, const BatchSendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchSendEmailOutcomeCallable BatchSendEmailCallable(const Model::BatchSendEmailRequest& request);

                /**
                 *创建地址级退订配置
                 * @param req CreateAddressUnsubscribeConfigRequest
                 * @return CreateAddressUnsubscribeConfigOutcome
                 */
                CreateAddressUnsubscribeConfigOutcome CreateAddressUnsubscribeConfig(const Model::CreateAddressUnsubscribeConfigRequest &request);
                void CreateAddressUnsubscribeConfigAsync(const Model::CreateAddressUnsubscribeConfigRequest& request, const CreateAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressUnsubscribeConfigOutcomeCallable CreateAddressUnsubscribeConfigCallable(const Model::CreateAddressUnsubscribeConfigRequest& request);

                /**
                 *添加自定义黑名单
                 * @param req CreateCustomBlacklistRequest
                 * @return CreateCustomBlacklistOutcome
                 */
                CreateCustomBlacklistOutcome CreateCustomBlacklist(const Model::CreateCustomBlacklistRequest &request);
                void CreateCustomBlacklistAsync(const Model::CreateCustomBlacklistRequest& request, const CreateCustomBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomBlacklistOutcomeCallable CreateCustomBlacklistCallable(const Model::CreateCustomBlacklistRequest& request);

                /**
                 *在验证了发信域名之后，您需要一个发信地址来发送邮件。例如发信域名是mail.qcloud.com，那么发信地址可以为 service@mail.qcloud.com。如果您想要收件人在收件箱列表中显示您的别名，例如"腾讯云邮件通知"。那么发信地址为： 别名 空格 尖括号 邮箱地址。请注意中间需要有空格
                 * @param req CreateEmailAddressRequest
                 * @return CreateEmailAddressOutcome
                 */
                CreateEmailAddressOutcome CreateEmailAddress(const Model::CreateEmailAddressRequest &request);
                void CreateEmailAddressAsync(const Model::CreateEmailAddressRequest& request, const CreateEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmailAddressOutcomeCallable CreateEmailAddressCallable(const Model::CreateEmailAddressRequest& request);

                /**
                 *在使用身份发送电子邮件之前，您需要有一个电子邮件域名，该域名可以是您的网站或者移动应用的域名。您首先必须进行验证，证明自己是该域名的所有者，并且授权给腾讯云SES发送许可，才可以从该域名发送电子邮件。
                 * @param req CreateEmailIdentityRequest
                 * @return CreateEmailIdentityOutcome
                 */
                CreateEmailIdentityOutcome CreateEmailIdentity(const Model::CreateEmailIdentityRequest &request);
                void CreateEmailIdentityAsync(const Model::CreateEmailIdentityRequest& request, const CreateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmailIdentityOutcomeCallable CreateEmailIdentityCallable(const Model::CreateEmailIdentityRequest& request);

                /**
                 *创建模板，该模板可以是TXT或者HTML，请注意如果HTML不要包含外部文件的CSS。模板中的变量使用 {{变量名}} 表示。
注意：模板需要审核通过才可以使用。
                 * @param req CreateEmailTemplateRequest
                 * @return CreateEmailTemplateOutcome
                 */
                CreateEmailTemplateOutcome CreateEmailTemplate(const Model::CreateEmailTemplateRequest &request);
                void CreateEmailTemplateAsync(const Model::CreateEmailTemplateRequest& request, const CreateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmailTemplateOutcomeCallable CreateEmailTemplateCallable(const Model::CreateEmailTemplateRequest& request);

                /**
                 *创建收件人列表，收件人列表是发送批量邮件的目标邮件地址列表。创建列表后，需要上传收件人邮箱地址。之后创建发送任务，关联列表，便可以实现批量发送邮件的功能
                 * @param req CreateReceiverRequest
                 * @return CreateReceiverOutcome
                 */
                CreateReceiverOutcome CreateReceiver(const Model::CreateReceiverRequest &request);
                void CreateReceiverAsync(const Model::CreateReceiverRequest& request, const CreateReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReceiverOutcomeCallable CreateReceiverCallable(const Model::CreateReceiverRequest& request);

                /**
                 *在创建完收件人列表后，向这个收件人列表中批量增加收件人邮箱地址，一次最大支持2万，异步完成处理。数据量比较大的时候，上传可能需要一点时间，可以通过查询收件人列表了解上传状态和上传数量。本接口与接口CreateReceiverDetailWithData的功能特性基本一致，只是不支持上传发信时的模板参数。用户首先调用创建收件人列表接口-CreateReceiver后，然后调用本接口传入收件人地址，最后使用批量发送邮件接口-BatchSendEmail，即可完成批量发信。本接口也支持追加收件人地址，也不支持去重，需要用户自己保证收件人地址不重复。本接口一次请求的收件人地址数量限制为2W条，但收件人列表中收件人地址的总量不能超过一定的数量，目前是限制5万条。
                 * @param req CreateReceiverDetailRequest
                 * @return CreateReceiverDetailOutcome
                 */
                CreateReceiverDetailOutcome CreateReceiverDetail(const Model::CreateReceiverDetailRequest &request);
                void CreateReceiverDetailAsync(const Model::CreateReceiverDetailRequest& request, const CreateReceiverDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReceiverDetailOutcomeCallable CreateReceiverDetailCallable(const Model::CreateReceiverDetailRequest& request);

                /**
                 *添加收件人地址附带模板参数，使用本接口在添加收件人地址的同时传入模板参数，使每一个收件人地址在发信的时候使用的模板变量取值不同。用户首先调用创建收件人列表接口-CreateReceiver后，然后调用本接口传入收件人地址和发信时的模板参数，最后使用批量发送邮件接口-BatchSendEmail，即可完成批量发信。需要注意的是在使用本接口后BatchSendEmail接口中的Template参数不需再传。用户也可以在控制台上邮件发送-收件人列表菜单中，通过导入文件的方式，导入收件人地址和模板变量和参数值。本接口一次请求的收件人地址数量限制为2W条，本接口同时也可以用来向已经上传完成的收件人列表追加收件人地址，但收件人列表中收件人地址的总量不能超过一定的数量，目前是限制5万条。本接口不支持去除重复的收件人地址，用户需要自己保证上传和追加地址不重复，不与之前上传的地址重复。
                 * @param req CreateReceiverDetailWithDataRequest
                 * @return CreateReceiverDetailWithDataOutcome
                 */
                CreateReceiverDetailWithDataOutcome CreateReceiverDetailWithData(const Model::CreateReceiverDetailWithDataRequest &request);
                void CreateReceiverDetailWithDataAsync(const Model::CreateReceiverDetailWithDataRequest& request, const CreateReceiverDetailWithDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReceiverDetailWithDataOutcomeCallable CreateReceiverDetailWithDataCallable(const Model::CreateReceiverDetailWithDataRequest& request);

                /**
                 *删除地址级退订配置
                 * @param req DeleteAddressUnsubscribeConfigRequest
                 * @return DeleteAddressUnsubscribeConfigOutcome
                 */
                DeleteAddressUnsubscribeConfigOutcome DeleteAddressUnsubscribeConfig(const Model::DeleteAddressUnsubscribeConfigRequest &request);
                void DeleteAddressUnsubscribeConfigAsync(const Model::DeleteAddressUnsubscribeConfigRequest& request, const DeleteAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddressUnsubscribeConfigOutcomeCallable DeleteAddressUnsubscribeConfigCallable(const Model::DeleteAddressUnsubscribeConfigRequest& request);

                /**
                 *邮箱被拉黑之后，用户如果确认收件邮箱有效或者已经处于激活状态，可以从腾讯云地址库中删除该黑名单之后继续投递。
                 * @param req DeleteBlackListRequest
                 * @return DeleteBlackListOutcome
                 */
                DeleteBlackListOutcome DeleteBlackList(const Model::DeleteBlackListRequest &request);
                void DeleteBlackListAsync(const Model::DeleteBlackListRequest& request, const DeleteBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlackListOutcomeCallable DeleteBlackListCallable(const Model::DeleteBlackListRequest& request);

                /**
                 *删除自定义黑名单邮箱地址
                 * @param req DeleteCustomBlackListRequest
                 * @return DeleteCustomBlackListOutcome
                 */
                DeleteCustomBlackListOutcome DeleteCustomBlackList(const Model::DeleteCustomBlackListRequest &request);
                void DeleteCustomBlackListAsync(const Model::DeleteCustomBlackListRequest& request, const DeleteCustomBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomBlackListOutcomeCallable DeleteCustomBlackListCallable(const Model::DeleteCustomBlackListRequest& request);

                /**
                 *删除发信人地址
                 * @param req DeleteEmailAddressRequest
                 * @return DeleteEmailAddressOutcome
                 */
                DeleteEmailAddressOutcome DeleteEmailAddress(const Model::DeleteEmailAddressRequest &request);
                void DeleteEmailAddressAsync(const Model::DeleteEmailAddressRequest& request, const DeleteEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEmailAddressOutcomeCallable DeleteEmailAddressCallable(const Model::DeleteEmailAddressRequest& request);

                /**
                 *删除发信域名，删除后，将不可再使用该域名进行发信
                 * @param req DeleteEmailIdentityRequest
                 * @return DeleteEmailIdentityOutcome
                 */
                DeleteEmailIdentityOutcome DeleteEmailIdentity(const Model::DeleteEmailIdentityRequest &request);
                void DeleteEmailIdentityAsync(const Model::DeleteEmailIdentityRequest& request, const DeleteEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEmailIdentityOutcomeCallable DeleteEmailIdentityCallable(const Model::DeleteEmailIdentityRequest& request);

                /**
                 *删除发信模板
                 * @param req DeleteEmailTemplateRequest
                 * @return DeleteEmailTemplateOutcome
                 */
                DeleteEmailTemplateOutcome DeleteEmailTemplate(const Model::DeleteEmailTemplateRequest &request);
                void DeleteEmailTemplateAsync(const Model::DeleteEmailTemplateRequest& request, const DeleteEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEmailTemplateOutcomeCallable DeleteEmailTemplateCallable(const Model::DeleteEmailTemplateRequest& request);

                /**
                 *根据收件id删除收件人列表,同时删除列表中的所有收件邮箱
                 * @param req DeleteReceiverRequest
                 * @return DeleteReceiverOutcome
                 */
                DeleteReceiverOutcome DeleteReceiver(const Model::DeleteReceiverRequest &request);
                void DeleteReceiverAsync(const Model::DeleteReceiverRequest& request, const DeleteReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReceiverOutcomeCallable DeleteReceiverCallable(const Model::DeleteReceiverRequest& request);

                /**
                 *获取某个发信域名的配置详情
                 * @param req GetEmailIdentityRequest
                 * @return GetEmailIdentityOutcome
                 */
                GetEmailIdentityOutcome GetEmailIdentity(const Model::GetEmailIdentityRequest &request);
                void GetEmailIdentityAsync(const Model::GetEmailIdentityRequest& request, const GetEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEmailIdentityOutcomeCallable GetEmailIdentityCallable(const Model::GetEmailIdentityRequest& request);

                /**
                 *根据模板ID获取模板详情
                 * @param req GetEmailTemplateRequest
                 * @return GetEmailTemplateOutcome
                 */
                GetEmailTemplateOutcome GetEmailTemplate(const Model::GetEmailTemplateRequest &request);
                void GetEmailTemplateAsync(const Model::GetEmailTemplateRequest& request, const GetEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEmailTemplateOutcomeCallable GetEmailTemplateCallable(const Model::GetEmailTemplateRequest& request);

                /**
                 *获取邮件发送状态。仅支持查询30天之内的数据
                 * @param req GetSendEmailStatusRequest
                 * @return GetSendEmailStatusOutcome
                 */
                GetSendEmailStatusOutcome GetSendEmailStatus(const Model::GetSendEmailStatusRequest &request);
                void GetSendEmailStatusAsync(const Model::GetSendEmailStatusRequest& request, const GetSendEmailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSendEmailStatusOutcomeCallable GetSendEmailStatusCallable(const Model::GetSendEmailStatusRequest& request);

                /**
                 *获取近期发送的统计情况，包含发送量、送达率、打开率、退信率等一系列数据。
                 * @param req GetStatisticsReportRequest
                 * @return GetStatisticsReportOutcome
                 */
                GetStatisticsReportOutcome GetStatisticsReport(const Model::GetStatisticsReportRequest &request);
                void GetStatisticsReportAsync(const Model::GetStatisticsReportRequest& request, const GetStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetStatisticsReportOutcomeCallable GetStatisticsReportCallable(const Model::GetStatisticsReportRequest& request);

                /**
                 *获取地址级退订配置列表
                 * @param req ListAddressUnsubscribeConfigRequest
                 * @return ListAddressUnsubscribeConfigOutcome
                 */
                ListAddressUnsubscribeConfigOutcome ListAddressUnsubscribeConfig(const Model::ListAddressUnsubscribeConfigRequest &request);
                void ListAddressUnsubscribeConfigAsync(const Model::ListAddressUnsubscribeConfigRequest& request, const ListAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAddressUnsubscribeConfigOutcomeCallable ListAddressUnsubscribeConfigCallable(const Model::ListAddressUnsubscribeConfigRequest& request);

                /**
                 *腾讯云发送的邮件一旦被收件方判断为硬退(Hard Bounce)，腾讯云会拉黑该地址，并不允许所有用户向该地址发送邮件。成为邮箱黑名单。如果业务方确认是误判，可以从黑名单中删除。
                 * @param req ListBlackEmailAddressRequest
                 * @return ListBlackEmailAddressOutcome
                 */
                ListBlackEmailAddressOutcome ListBlackEmailAddress(const Model::ListBlackEmailAddressRequest &request);
                void ListBlackEmailAddressAsync(const Model::ListBlackEmailAddressRequest& request, const ListBlackEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListBlackEmailAddressOutcomeCallable ListBlackEmailAddressCallable(const Model::ListBlackEmailAddressRequest& request);

                /**
                 *获取自定义黑名单列表
                 * @param req ListCustomBlacklistRequest
                 * @return ListCustomBlacklistOutcome
                 */
                ListCustomBlacklistOutcome ListCustomBlacklist(const Model::ListCustomBlacklistRequest &request);
                void ListCustomBlacklistAsync(const Model::ListCustomBlacklistRequest& request, const ListCustomBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListCustomBlacklistOutcomeCallable ListCustomBlacklistCallable(const Model::ListCustomBlacklistRequest& request);

                /**
                 *获取发信地址列表
                 * @param req ListEmailAddressRequest
                 * @return ListEmailAddressOutcome
                 */
                ListEmailAddressOutcome ListEmailAddress(const Model::ListEmailAddressRequest &request);
                void ListEmailAddressAsync(const Model::ListEmailAddressRequest& request, const ListEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEmailAddressOutcomeCallable ListEmailAddressCallable(const Model::ListEmailAddressRequest& request);

                /**
                 *获取当前发信域名列表，包含已验证通过与未验证的域名
                 * @param req ListEmailIdentitiesRequest
                 * @return ListEmailIdentitiesOutcome
                 */
                ListEmailIdentitiesOutcome ListEmailIdentities(const Model::ListEmailIdentitiesRequest &request);
                void ListEmailIdentitiesAsync(const Model::ListEmailIdentitiesRequest& request, const ListEmailIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEmailIdentitiesOutcomeCallable ListEmailIdentitiesCallable(const Model::ListEmailIdentitiesRequest& request);

                /**
                 *获取当前邮件模板列表
                 * @param req ListEmailTemplatesRequest
                 * @return ListEmailTemplatesOutcome
                 */
                ListEmailTemplatesOutcome ListEmailTemplates(const Model::ListEmailTemplatesRequest &request);
                void ListEmailTemplatesAsync(const Model::ListEmailTemplatesRequest& request, const ListEmailTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEmailTemplatesOutcomeCallable ListEmailTemplatesCallable(const Model::ListEmailTemplatesRequest& request);

                /**
                 *根据收件人列表id查询收件人列表中的所有收件人邮箱地址，分页查询，可以根据收件邮箱地址来过滤查询
                 * @param req ListReceiverDetailsRequest
                 * @return ListReceiverDetailsOutcome
                 */
                ListReceiverDetailsOutcome ListReceiverDetails(const Model::ListReceiverDetailsRequest &request);
                void ListReceiverDetailsAsync(const Model::ListReceiverDetailsRequest& request, const ListReceiverDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReceiverDetailsOutcomeCallable ListReceiverDetailsCallable(const Model::ListReceiverDetailsRequest& request);

                /**
                 *根据条件查询收件人列表，支持分页，模糊查询，状态查询
                 * @param req ListReceiversRequest
                 * @return ListReceiversOutcome
                 */
                ListReceiversOutcome ListReceivers(const Model::ListReceiversRequest &request);
                void ListReceiversAsync(const Model::ListReceiversRequest& request, const ListReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReceiversOutcomeCallable ListReceiversCallable(const Model::ListReceiversRequest& request);

                /**
                 *分页查询批量发送邮件任务，包含即时发送任务，定时发送任务，周期重复发送任务，查询发送情况，包括请求数量，已发数量，缓存数量，任务状态等信息
                 * @param req ListSendTasksRequest
                 * @return ListSendTasksOutcome
                 */
                ListSendTasksOutcome ListSendTasks(const Model::ListSendTasksRequest &request);
                void ListSendTasksAsync(const Model::ListSendTasksRequest& request, const ListSendTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSendTasksOutcomeCallable ListSendTasksCallable(const Model::ListSendTasksRequest& request);

                /**
                 *您可以通过此API发送HTML或者TEXT邮件，适用于触发类邮件（验证码、交易类）。默认仅支持使用模板发送邮件。
                 * @param req SendEmailRequest
                 * @return SendEmailOutcome
                 */
                SendEmailOutcome SendEmail(const Model::SendEmailRequest &request);
                void SendEmailAsync(const Model::SendEmailRequest& request, const SendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request);

                /**
                 *用于更新地址级退订配置
                 * @param req UpdateAddressUnsubscribeConfigRequest
                 * @return UpdateAddressUnsubscribeConfigOutcome
                 */
                UpdateAddressUnsubscribeConfigOutcome UpdateAddressUnsubscribeConfig(const Model::UpdateAddressUnsubscribeConfigRequest &request);
                void UpdateAddressUnsubscribeConfigAsync(const Model::UpdateAddressUnsubscribeConfigRequest& request, const UpdateAddressUnsubscribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAddressUnsubscribeConfigOutcomeCallable UpdateAddressUnsubscribeConfigCallable(const Model::UpdateAddressUnsubscribeConfigRequest& request);

                /**
                 *更新自定义黑名单
                 * @param req UpdateCustomBlackListRequest
                 * @return UpdateCustomBlackListOutcome
                 */
                UpdateCustomBlackListOutcome UpdateCustomBlackList(const Model::UpdateCustomBlackListRequest &request);
                void UpdateCustomBlackListAsync(const Model::UpdateCustomBlackListRequest& request, const UpdateCustomBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateCustomBlackListOutcomeCallable UpdateCustomBlackListCallable(const Model::UpdateCustomBlackListRequest& request);

                /**
                 *您已经成功配置好了您的DNS，接下来请求腾讯云验证您的DNS配置是否正确
                 * @param req UpdateEmailIdentityRequest
                 * @return UpdateEmailIdentityOutcome
                 */
                UpdateEmailIdentityOutcome UpdateEmailIdentity(const Model::UpdateEmailIdentityRequest &request);
                void UpdateEmailIdentityAsync(const Model::UpdateEmailIdentityRequest& request, const UpdateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEmailIdentityOutcomeCallable UpdateEmailIdentityCallable(const Model::UpdateEmailIdentityRequest& request);

                /**
                 *设置邮箱的smtp密码。若要通过smtp发送邮件，必须为邮箱设置smtp密码。初始时，邮箱没有设置smtp密码，不能使用smtp的方式发送邮件。设置smtp密码后，可以修改密码。
                 * @param req UpdateEmailSmtpPassWordRequest
                 * @return UpdateEmailSmtpPassWordOutcome
                 */
                UpdateEmailSmtpPassWordOutcome UpdateEmailSmtpPassWord(const Model::UpdateEmailSmtpPassWordRequest &request);
                void UpdateEmailSmtpPassWordAsync(const Model::UpdateEmailSmtpPassWordRequest& request, const UpdateEmailSmtpPassWordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEmailSmtpPassWordOutcomeCallable UpdateEmailSmtpPassWordCallable(const Model::UpdateEmailSmtpPassWordRequest& request);

                /**
                 *更新邮件模板，更新后需再次审核
                 * @param req UpdateEmailTemplateRequest
                 * @return UpdateEmailTemplateOutcome
                 */
                UpdateEmailTemplateOutcome UpdateEmailTemplate(const Model::UpdateEmailTemplateRequest &request);
                void UpdateEmailTemplateAsync(const Model::UpdateEmailTemplateRequest& request, const UpdateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEmailTemplateOutcomeCallable UpdateEmailTemplateCallable(const Model::UpdateEmailTemplateRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_SESCLIENT_H_
