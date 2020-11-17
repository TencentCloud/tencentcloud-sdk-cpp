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

#ifndef TENCENTCLOUD_ZJ_V20190121_ZJCLIENT_H_
#define TENCENTCLOUD_ZJ_V20190121_ZJCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/zj/v20190121/model/AddCrowdPackInfoRequest.h>
#include <tencentcloud/zj/v20190121/model/AddCrowdPackInfoResponse.h>
#include <tencentcloud/zj/v20190121/model/AddSmsSignRequest.h>
#include <tencentcloud/zj/v20190121/model/AddSmsSignResponse.h>
#include <tencentcloud/zj/v20190121/model/AddSmsTemplateRequest.h>
#include <tencentcloud/zj/v20190121/model/AddSmsTemplateResponse.h>
#include <tencentcloud/zj/v20190121/model/CancelCampaignRequest.h>
#include <tencentcloud/zj/v20190121/model/CancelCampaignResponse.h>
#include <tencentcloud/zj/v20190121/model/CreateCampaignRequest.h>
#include <tencentcloud/zj/v20190121/model/CreateCampaignResponse.h>
#include <tencentcloud/zj/v20190121/model/CreateMmsInstanceRequest.h>
#include <tencentcloud/zj/v20190121/model/CreateMmsInstanceResponse.h>
#include <tencentcloud/zj/v20190121/model/DelCrowdPackRequest.h>
#include <tencentcloud/zj/v20190121/model/DelCrowdPackResponse.h>
#include <tencentcloud/zj/v20190121/model/DelTemplateRequest.h>
#include <tencentcloud/zj/v20190121/model/DelTemplateResponse.h>
#include <tencentcloud/zj/v20190121/model/DeleteMmsInstanceRequest.h>
#include <tencentcloud/zj/v20190121/model/DeleteMmsInstanceResponse.h>
#include <tencentcloud/zj/v20190121/model/DescribeMmsInstanceInfoRequest.h>
#include <tencentcloud/zj/v20190121/model/DescribeMmsInstanceInfoResponse.h>
#include <tencentcloud/zj/v20190121/model/DescribeMmsInstanceListRequest.h>
#include <tencentcloud/zj/v20190121/model/DescribeMmsInstanceListResponse.h>
#include <tencentcloud/zj/v20190121/model/DescribeSmsCampaignStatisticsRequest.h>
#include <tencentcloud/zj/v20190121/model/DescribeSmsCampaignStatisticsResponse.h>
#include <tencentcloud/zj/v20190121/model/DescribeSmsSignListRequest.h>
#include <tencentcloud/zj/v20190121/model/DescribeSmsSignListResponse.h>
#include <tencentcloud/zj/v20190121/model/DescribeSmsTemplateListRequest.h>
#include <tencentcloud/zj/v20190121/model/DescribeSmsTemplateListResponse.h>
#include <tencentcloud/zj/v20190121/model/GetCrowdPackListRequest.h>
#include <tencentcloud/zj/v20190121/model/GetCrowdPackListResponse.h>
#include <tencentcloud/zj/v20190121/model/GetCrowdUploadInfoRequest.h>
#include <tencentcloud/zj/v20190121/model/GetCrowdUploadInfoResponse.h>
#include <tencentcloud/zj/v20190121/model/GetSmsAmountInfoRequest.h>
#include <tencentcloud/zj/v20190121/model/GetSmsAmountInfoResponse.h>
#include <tencentcloud/zj/v20190121/model/GetSmsCampaignStatusRequest.h>
#include <tencentcloud/zj/v20190121/model/GetSmsCampaignStatusResponse.h>
#include <tencentcloud/zj/v20190121/model/ModifySmsTemplateRequest.h>
#include <tencentcloud/zj/v20190121/model/ModifySmsTemplateResponse.h>
#include <tencentcloud/zj/v20190121/model/PushMmsContentRequest.h>
#include <tencentcloud/zj/v20190121/model/PushMmsContentResponse.h>
#include <tencentcloud/zj/v20190121/model/SendSmsRequest.h>
#include <tencentcloud/zj/v20190121/model/SendSmsResponse.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            class ZjClient : public AbstractClient
            {
            public:
                ZjClient(const Credential &credential, const std::string &region);
                ZjClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddCrowdPackInfoResponse> AddCrowdPackInfoOutcome;
                typedef std::future<AddCrowdPackInfoOutcome> AddCrowdPackInfoOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::AddCrowdPackInfoRequest&, AddCrowdPackInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCrowdPackInfoAsyncHandler;
                typedef Outcome<Error, Model::AddSmsSignResponse> AddSmsSignOutcome;
                typedef std::future<AddSmsSignOutcome> AddSmsSignOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::AddSmsSignRequest&, AddSmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsSignAsyncHandler;
                typedef Outcome<Error, Model::AddSmsTemplateResponse> AddSmsTemplateOutcome;
                typedef std::future<AddSmsTemplateOutcome> AddSmsTemplateOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::AddSmsTemplateRequest&, AddSmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsTemplateAsyncHandler;
                typedef Outcome<Error, Model::CancelCampaignResponse> CancelCampaignOutcome;
                typedef std::future<CancelCampaignOutcome> CancelCampaignOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::CancelCampaignRequest&, CancelCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelCampaignAsyncHandler;
                typedef Outcome<Error, Model::CreateCampaignResponse> CreateCampaignOutcome;
                typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::CreateCampaignRequest&, CreateCampaignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCampaignAsyncHandler;
                typedef Outcome<Error, Model::CreateMmsInstanceResponse> CreateMmsInstanceOutcome;
                typedef std::future<CreateMmsInstanceOutcome> CreateMmsInstanceOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::CreateMmsInstanceRequest&, CreateMmsInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMmsInstanceAsyncHandler;
                typedef Outcome<Error, Model::DelCrowdPackResponse> DelCrowdPackOutcome;
                typedef std::future<DelCrowdPackOutcome> DelCrowdPackOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::DelCrowdPackRequest&, DelCrowdPackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DelCrowdPackAsyncHandler;
                typedef Outcome<Error, Model::DelTemplateResponse> DelTemplateOutcome;
                typedef std::future<DelTemplateOutcome> DelTemplateOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::DelTemplateRequest&, DelTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DelTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteMmsInstanceResponse> DeleteMmsInstanceOutcome;
                typedef std::future<DeleteMmsInstanceOutcome> DeleteMmsInstanceOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::DeleteMmsInstanceRequest&, DeleteMmsInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMmsInstanceAsyncHandler;
                typedef Outcome<Error, Model::DescribeMmsInstanceInfoResponse> DescribeMmsInstanceInfoOutcome;
                typedef std::future<DescribeMmsInstanceInfoOutcome> DescribeMmsInstanceInfoOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::DescribeMmsInstanceInfoRequest&, DescribeMmsInstanceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMmsInstanceInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeMmsInstanceListResponse> DescribeMmsInstanceListOutcome;
                typedef std::future<DescribeMmsInstanceListOutcome> DescribeMmsInstanceListOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::DescribeMmsInstanceListRequest&, DescribeMmsInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMmsInstanceListAsyncHandler;
                typedef Outcome<Error, Model::DescribeSmsCampaignStatisticsResponse> DescribeSmsCampaignStatisticsOutcome;
                typedef std::future<DescribeSmsCampaignStatisticsOutcome> DescribeSmsCampaignStatisticsOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::DescribeSmsCampaignStatisticsRequest&, DescribeSmsCampaignStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsCampaignStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSmsSignListResponse> DescribeSmsSignListOutcome;
                typedef std::future<DescribeSmsSignListOutcome> DescribeSmsSignListOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::DescribeSmsSignListRequest&, DescribeSmsSignListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsSignListAsyncHandler;
                typedef Outcome<Error, Model::DescribeSmsTemplateListResponse> DescribeSmsTemplateListOutcome;
                typedef std::future<DescribeSmsTemplateListOutcome> DescribeSmsTemplateListOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::DescribeSmsTemplateListRequest&, DescribeSmsTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsTemplateListAsyncHandler;
                typedef Outcome<Error, Model::GetCrowdPackListResponse> GetCrowdPackListOutcome;
                typedef std::future<GetCrowdPackListOutcome> GetCrowdPackListOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::GetCrowdPackListRequest&, GetCrowdPackListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCrowdPackListAsyncHandler;
                typedef Outcome<Error, Model::GetCrowdUploadInfoResponse> GetCrowdUploadInfoOutcome;
                typedef std::future<GetCrowdUploadInfoOutcome> GetCrowdUploadInfoOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::GetCrowdUploadInfoRequest&, GetCrowdUploadInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCrowdUploadInfoAsyncHandler;
                typedef Outcome<Error, Model::GetSmsAmountInfoResponse> GetSmsAmountInfoOutcome;
                typedef std::future<GetSmsAmountInfoOutcome> GetSmsAmountInfoOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::GetSmsAmountInfoRequest&, GetSmsAmountInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSmsAmountInfoAsyncHandler;
                typedef Outcome<Error, Model::GetSmsCampaignStatusResponse> GetSmsCampaignStatusOutcome;
                typedef std::future<GetSmsCampaignStatusOutcome> GetSmsCampaignStatusOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::GetSmsCampaignStatusRequest&, GetSmsCampaignStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSmsCampaignStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifySmsTemplateResponse> ModifySmsTemplateOutcome;
                typedef std::future<ModifySmsTemplateOutcome> ModifySmsTemplateOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::ModifySmsTemplateRequest&, ModifySmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmsTemplateAsyncHandler;
                typedef Outcome<Error, Model::PushMmsContentResponse> PushMmsContentOutcome;
                typedef std::future<PushMmsContentOutcome> PushMmsContentOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::PushMmsContentRequest&, PushMmsContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushMmsContentAsyncHandler;
                typedef Outcome<Error, Model::SendSmsResponse> SendSmsOutcome;
                typedef std::future<SendSmsOutcome> SendSmsOutcomeCallable;
                typedef std::function<void(const ZjClient*, const Model::SendSmsRequest&, SendSmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsAsyncHandler;



                /**
                 *添加短信人群包信息
                 * @param req AddCrowdPackInfoRequest
                 * @return AddCrowdPackInfoOutcome
                 */
                AddCrowdPackInfoOutcome AddCrowdPackInfo(const Model::AddCrowdPackInfoRequest &request);
                void AddCrowdPackInfoAsync(const Model::AddCrowdPackInfoRequest& request, const AddCrowdPackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCrowdPackInfoOutcomeCallable AddCrowdPackInfoCallable(const Model::AddCrowdPackInfoRequest& request);

                /**
                 *创建普通短信签名信息
                 * @param req AddSmsSignRequest
                 * @return AddSmsSignOutcome
                 */
                AddSmsSignOutcome AddSmsSign(const Model::AddSmsSignRequest &request);
                void AddSmsSignAsync(const Model::AddSmsSignRequest& request, const AddSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsSignOutcomeCallable AddSmsSignCallable(const Model::AddSmsSignRequest& request);

                /**
                 *根据短信标题、模板内容等创建短信模板
                 * @param req AddSmsTemplateRequest
                 * @return AddSmsTemplateOutcome
                 */
                AddSmsTemplateOutcome AddSmsTemplate(const Model::AddSmsTemplateRequest &request);
                void AddSmsTemplateAsync(const Model::AddSmsTemplateRequest& request, const AddSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsTemplateOutcomeCallable AddSmsTemplateCallable(const Model::AddSmsTemplateRequest& request);

                /**
                 *取消短信推送活动
                 * @param req CancelCampaignRequest
                 * @return CancelCampaignOutcome
                 */
                CancelCampaignOutcome CancelCampaign(const Model::CancelCampaignRequest &request);
                void CancelCampaignAsync(const Model::CancelCampaignRequest& request, const CancelCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelCampaignOutcomeCallable CancelCampaignCallable(const Model::CancelCampaignRequest& request);

                /**
                 *创建短信推送活动
                 * @param req CreateCampaignRequest
                 * @return CreateCampaignOutcome
                 */
                CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest &request);
                void CreateCampaignAsync(const Model::CreateCampaignRequest& request, const CreateCampaignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCampaignOutcomeCallable CreateCampaignCallable(const Model::CreateCampaignRequest& request);

                /**
                 *创建超级短信的素材样例内容
                 * @param req CreateMmsInstanceRequest
                 * @return CreateMmsInstanceOutcome
                 */
                CreateMmsInstanceOutcome CreateMmsInstance(const Model::CreateMmsInstanceRequest &request);
                void CreateMmsInstanceAsync(const Model::CreateMmsInstanceRequest& request, const CreateMmsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMmsInstanceOutcomeCallable CreateMmsInstanceCallable(const Model::CreateMmsInstanceRequest& request);

                /**
                 *删除人群包
                 * @param req DelCrowdPackRequest
                 * @return DelCrowdPackOutcome
                 */
                DelCrowdPackOutcome DelCrowdPack(const Model::DelCrowdPackRequest &request);
                void DelCrowdPackAsync(const Model::DelCrowdPackRequest& request, const DelCrowdPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DelCrowdPackOutcomeCallable DelCrowdPackCallable(const Model::DelCrowdPackRequest& request);

                /**
                 *删除短信模板
                 * @param req DelTemplateRequest
                 * @return DelTemplateOutcome
                 */
                DelTemplateOutcome DelTemplate(const Model::DelTemplateRequest &request);
                void DelTemplateAsync(const Model::DelTemplateRequest& request, const DelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DelTemplateOutcomeCallable DelTemplateCallable(const Model::DelTemplateRequest& request);

                /**
                 *删除超级短信样例
                 * @param req DeleteMmsInstanceRequest
                 * @return DeleteMmsInstanceOutcome
                 */
                DeleteMmsInstanceOutcome DeleteMmsInstance(const Model::DeleteMmsInstanceRequest &request);
                void DeleteMmsInstanceAsync(const Model::DeleteMmsInstanceRequest& request, const DeleteMmsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMmsInstanceOutcomeCallable DeleteMmsInstanceCallable(const Model::DeleteMmsInstanceRequest& request);

                /**
                 *获取彩信实例信息
                 * @param req DescribeMmsInstanceInfoRequest
                 * @return DescribeMmsInstanceInfoOutcome
                 */
                DescribeMmsInstanceInfoOutcome DescribeMmsInstanceInfo(const Model::DescribeMmsInstanceInfoRequest &request);
                void DescribeMmsInstanceInfoAsync(const Model::DescribeMmsInstanceInfoRequest& request, const DescribeMmsInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMmsInstanceInfoOutcomeCallable DescribeMmsInstanceInfoCallable(const Model::DescribeMmsInstanceInfoRequest& request);

                /**
                 *获取彩信实例列表
                 * @param req DescribeMmsInstanceListRequest
                 * @return DescribeMmsInstanceListOutcome
                 */
                DescribeMmsInstanceListOutcome DescribeMmsInstanceList(const Model::DescribeMmsInstanceListRequest &request);
                void DescribeMmsInstanceListAsync(const Model::DescribeMmsInstanceListRequest& request, const DescribeMmsInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMmsInstanceListOutcomeCallable DescribeMmsInstanceListCallable(const Model::DescribeMmsInstanceListRequest& request);

                /**
                 *获取短信超短活动统计数据
                 * @param req DescribeSmsCampaignStatisticsRequest
                 * @return DescribeSmsCampaignStatisticsOutcome
                 */
                DescribeSmsCampaignStatisticsOutcome DescribeSmsCampaignStatistics(const Model::DescribeSmsCampaignStatisticsRequest &request);
                void DescribeSmsCampaignStatisticsAsync(const Model::DescribeSmsCampaignStatisticsRequest& request, const DescribeSmsCampaignStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsCampaignStatisticsOutcomeCallable DescribeSmsCampaignStatisticsCallable(const Model::DescribeSmsCampaignStatisticsRequest& request);

                /**
                 *获取普通短信签名信息
                 * @param req DescribeSmsSignListRequest
                 * @return DescribeSmsSignListOutcome
                 */
                DescribeSmsSignListOutcome DescribeSmsSignList(const Model::DescribeSmsSignListRequest &request);
                void DescribeSmsSignListAsync(const Model::DescribeSmsSignListRequest& request, const DescribeSmsSignListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsSignListOutcomeCallable DescribeSmsSignListCallable(const Model::DescribeSmsSignListRequest& request);

                /**
                 *获取模板信息
                 * @param req DescribeSmsTemplateListRequest
                 * @return DescribeSmsTemplateListOutcome
                 */
                DescribeSmsTemplateListOutcome DescribeSmsTemplateList(const Model::DescribeSmsTemplateListRequest &request);
                void DescribeSmsTemplateListAsync(const Model::DescribeSmsTemplateListRequest& request, const DescribeSmsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsTemplateListOutcomeCallable DescribeSmsTemplateListCallable(const Model::DescribeSmsTemplateListRequest& request);

                /**
                 *获取人群包列表接口
                 * @param req GetCrowdPackListRequest
                 * @return GetCrowdPackListOutcome
                 */
                GetCrowdPackListOutcome GetCrowdPackList(const Model::GetCrowdPackListRequest &request);
                void GetCrowdPackListAsync(const Model::GetCrowdPackListRequest& request, const GetCrowdPackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCrowdPackListOutcomeCallable GetCrowdPackListCallable(const Model::GetCrowdPackListRequest& request);

                /**
                 *获取短信人群包cos上传需要的信息
                 * @param req GetCrowdUploadInfoRequest
                 * @return GetCrowdUploadInfoOutcome
                 */
                GetCrowdUploadInfoOutcome GetCrowdUploadInfo(const Model::GetCrowdUploadInfoRequest &request);
                void GetCrowdUploadInfoAsync(const Model::GetCrowdUploadInfoRequest& request, const GetCrowdUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCrowdUploadInfoOutcomeCallable GetCrowdUploadInfoCallable(const Model::GetCrowdUploadInfoRequest& request);

                /**
                 *获取账号短信额度配置信息
                 * @param req GetSmsAmountInfoRequest
                 * @return GetSmsAmountInfoOutcome
                 */
                GetSmsAmountInfoOutcome GetSmsAmountInfo(const Model::GetSmsAmountInfoRequest &request);
                void GetSmsAmountInfoAsync(const Model::GetSmsAmountInfoRequest& request, const GetSmsAmountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSmsAmountInfoOutcomeCallable GetSmsAmountInfoCallable(const Model::GetSmsAmountInfoRequest& request);

                /**
                 *获取短信活动状态信息
                 * @param req GetSmsCampaignStatusRequest
                 * @return GetSmsCampaignStatusOutcome
                 */
                GetSmsCampaignStatusOutcome GetSmsCampaignStatus(const Model::GetSmsCampaignStatusRequest &request);
                void GetSmsCampaignStatusAsync(const Model::GetSmsCampaignStatusRequest& request, const GetSmsCampaignStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSmsCampaignStatusOutcomeCallable GetSmsCampaignStatusCallable(const Model::GetSmsCampaignStatusRequest& request);

                /**
                 *对未审核或者审核未通过的短信模板内容进行编辑修改
                 * @param req ModifySmsTemplateRequest
                 * @return ModifySmsTemplateOutcome
                 */
                ModifySmsTemplateOutcome ModifySmsTemplate(const Model::ModifySmsTemplateRequest &request);
                void ModifySmsTemplateAsync(const Model::ModifySmsTemplateRequest& request, const ModifySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmsTemplateOutcomeCallable ModifySmsTemplateCallable(const Model::ModifySmsTemplateRequest& request);

                /**
                 *推送超级短信
                 * @param req PushMmsContentRequest
                 * @return PushMmsContentOutcome
                 */
                PushMmsContentOutcome PushMmsContent(const Model::PushMmsContentRequest &request);
                void PushMmsContentAsync(const Model::PushMmsContentRequest& request, const PushMmsContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushMmsContentOutcomeCallable PushMmsContentCallable(const Model::PushMmsContentRequest& request);

                /**
                 *发送短信
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

#endif // !TENCENTCLOUD_ZJ_V20190121_ZJCLIENT_H_
