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

#ifndef TENCENTCLOUD_WAV_V20210129_WAVCLIENT_H_
#define TENCENTCLOUD_WAV_V20210129_WAVCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wav/v20210129/model/CreateChannelCodeRequest.h>
#include <tencentcloud/wav/v20210129/model/CreateChannelCodeResponse.h>
#include <tencentcloud/wav/v20210129/model/CreateCorpTagRequest.h>
#include <tencentcloud/wav/v20210129/model/CreateCorpTagResponse.h>
#include <tencentcloud/wav/v20210129/model/CreateLeadRequest.h>
#include <tencentcloud/wav/v20210129/model/CreateLeadResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryActivityJoinListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryActivityJoinListResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryActivityListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryActivityListResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryActivityLiveCodeListResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryChannelCodeListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryChannelCodeListResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryChatArchivingListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryChatArchivingListResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryClueInfoListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryClueInfoListResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryDealerInfoListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryDealerInfoListResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryExternalContactDetailRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryExternalContactDetailResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryExternalContactListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryExternalContactListResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryExternalUserMappingInfoRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryExternalUserMappingInfoResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryLicenseInfoRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryLicenseInfoResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryMiniAppCodeListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryMiniAppCodeListResponse.h>
#include <tencentcloud/wav/v20210129/model/QueryVehicleInfoListRequest.h>
#include <tencentcloud/wav/v20210129/model/QueryVehicleInfoListResponse.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            class WavClient : public AbstractClient
            {
            public:
                WavClient(const Credential &credential, const std::string &region);
                WavClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateChannelCodeResponse> CreateChannelCodeOutcome;
                typedef std::future<CreateChannelCodeOutcome> CreateChannelCodeOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::CreateChannelCodeRequest&, CreateChannelCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChannelCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCorpTagResponse> CreateCorpTagOutcome;
                typedef std::future<CreateCorpTagOutcome> CreateCorpTagOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::CreateCorpTagRequest&, CreateCorpTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCorpTagAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLeadResponse> CreateLeadOutcome;
                typedef std::future<CreateLeadOutcome> CreateLeadOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::CreateLeadRequest&, CreateLeadOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLeadAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryActivityJoinListResponse> QueryActivityJoinListOutcome;
                typedef std::future<QueryActivityJoinListOutcome> QueryActivityJoinListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryActivityJoinListRequest&, QueryActivityJoinListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryActivityJoinListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryActivityListResponse> QueryActivityListOutcome;
                typedef std::future<QueryActivityListOutcome> QueryActivityListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryActivityListRequest&, QueryActivityListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryActivityListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryActivityLiveCodeListResponse> QueryActivityLiveCodeListOutcome;
                typedef std::future<QueryActivityLiveCodeListOutcome> QueryActivityLiveCodeListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryActivityLiveCodeListRequest&, QueryActivityLiveCodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryActivityLiveCodeListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryChannelCodeListResponse> QueryChannelCodeListOutcome;
                typedef std::future<QueryChannelCodeListOutcome> QueryChannelCodeListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryChannelCodeListRequest&, QueryChannelCodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryChannelCodeListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryChatArchivingListResponse> QueryChatArchivingListOutcome;
                typedef std::future<QueryChatArchivingListOutcome> QueryChatArchivingListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryChatArchivingListRequest&, QueryChatArchivingListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryChatArchivingListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryClueInfoListResponse> QueryClueInfoListOutcome;
                typedef std::future<QueryClueInfoListOutcome> QueryClueInfoListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryClueInfoListRequest&, QueryClueInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryClueInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryDealerInfoListResponse> QueryDealerInfoListOutcome;
                typedef std::future<QueryDealerInfoListOutcome> QueryDealerInfoListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryDealerInfoListRequest&, QueryDealerInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDealerInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryExternalContactDetailResponse> QueryExternalContactDetailOutcome;
                typedef std::future<QueryExternalContactDetailOutcome> QueryExternalContactDetailOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryExternalContactDetailRequest&, QueryExternalContactDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryExternalContactDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryExternalContactListResponse> QueryExternalContactListOutcome;
                typedef std::future<QueryExternalContactListOutcome> QueryExternalContactListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryExternalContactListRequest&, QueryExternalContactListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryExternalContactListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryExternalUserMappingInfoResponse> QueryExternalUserMappingInfoOutcome;
                typedef std::future<QueryExternalUserMappingInfoOutcome> QueryExternalUserMappingInfoOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryExternalUserMappingInfoRequest&, QueryExternalUserMappingInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryExternalUserMappingInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryLicenseInfoResponse> QueryLicenseInfoOutcome;
                typedef std::future<QueryLicenseInfoOutcome> QueryLicenseInfoOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryLicenseInfoRequest&, QueryLicenseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryLicenseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMiniAppCodeListResponse> QueryMiniAppCodeListOutcome;
                typedef std::future<QueryMiniAppCodeListOutcome> QueryMiniAppCodeListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryMiniAppCodeListRequest&, QueryMiniAppCodeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMiniAppCodeListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryVehicleInfoListResponse> QueryVehicleInfoListOutcome;
                typedef std::future<QueryVehicleInfoListOutcome> QueryVehicleInfoListOutcomeCallable;
                typedef std::function<void(const WavClient*, const Model::QueryVehicleInfoListRequest&, QueryVehicleInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryVehicleInfoListAsyncHandler;



                /**
                 *新增渠道活码接口
                 * @param req CreateChannelCodeRequest
                 * @return CreateChannelCodeOutcome
                 */
                CreateChannelCodeOutcome CreateChannelCode(const Model::CreateChannelCodeRequest &request);
                void CreateChannelCodeAsync(const Model::CreateChannelCodeRequest& request, const CreateChannelCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChannelCodeOutcomeCallable CreateChannelCodeCallable(const Model::CreateChannelCodeRequest& request);

                /**
                 *该接口用户设置标签库, 每个企业最多可配置3000个企业标签。
                 * @param req CreateCorpTagRequest
                 * @return CreateCorpTagOutcome
                 */
                CreateCorpTagOutcome CreateCorpTag(const Model::CreateCorpTagRequest &request);
                void CreateCorpTagAsync(const Model::CreateCorpTagRequest& request, const CreateCorpTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCorpTagOutcomeCallable CreateCorpTagCallable(const Model::CreateCorpTagRequest& request);

                /**
                 *线索回收接口
                 * @param req CreateLeadRequest
                 * @return CreateLeadOutcome
                 */
                CreateLeadOutcome CreateLead(const Model::CreateLeadRequest &request);
                void CreateLeadAsync(const Model::CreateLeadRequest& request, const CreateLeadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLeadOutcomeCallable CreateLeadCallable(const Model::CreateLeadRequest& request);

                /**
                 *根据游标拉取活动参与列表信息
                 * @param req QueryActivityJoinListRequest
                 * @return QueryActivityJoinListOutcome
                 */
                QueryActivityJoinListOutcome QueryActivityJoinList(const Model::QueryActivityJoinListRequest &request);
                void QueryActivityJoinListAsync(const Model::QueryActivityJoinListRequest& request, const QueryActivityJoinListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryActivityJoinListOutcomeCallable QueryActivityJoinListCallable(const Model::QueryActivityJoinListRequest& request);

                /**
                 *根据游标拉取活动列表信息
                 * @param req QueryActivityListRequest
                 * @return QueryActivityListOutcome
                 */
                QueryActivityListOutcome QueryActivityList(const Model::QueryActivityListRequest &request);
                void QueryActivityListAsync(const Model::QueryActivityListRequest& request, const QueryActivityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryActivityListOutcomeCallable QueryActivityListCallable(const Model::QueryActivityListRequest& request);

                /**
                 *根据游标拉取活动活码列表信息
                 * @param req QueryActivityLiveCodeListRequest
                 * @return QueryActivityLiveCodeListOutcome
                 */
                QueryActivityLiveCodeListOutcome QueryActivityLiveCodeList(const Model::QueryActivityLiveCodeListRequest &request);
                void QueryActivityLiveCodeListAsync(const Model::QueryActivityLiveCodeListRequest& request, const QueryActivityLiveCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryActivityLiveCodeListOutcomeCallable QueryActivityLiveCodeListCallable(const Model::QueryActivityLiveCodeListRequest& request);

                /**
                 *根据游标拉取渠道活码列表信息
                 * @param req QueryChannelCodeListRequest
                 * @return QueryChannelCodeListOutcome
                 */
                QueryChannelCodeListOutcome QueryChannelCodeList(const Model::QueryChannelCodeListRequest &request);
                void QueryChannelCodeListAsync(const Model::QueryChannelCodeListRequest& request, const QueryChannelCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryChannelCodeListOutcomeCallable QueryChannelCodeListCallable(const Model::QueryChannelCodeListRequest& request);

                /**
                 *根据游标拉取会话存档列表信息
                 * @param req QueryChatArchivingListRequest
                 * @return QueryChatArchivingListOutcome
                 */
                QueryChatArchivingListOutcome QueryChatArchivingList(const Model::QueryChatArchivingListRequest &request);
                void QueryChatArchivingListAsync(const Model::QueryChatArchivingListRequest& request, const QueryChatArchivingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryChatArchivingListOutcomeCallable QueryChatArchivingListCallable(const Model::QueryChatArchivingListRequest& request);

                /**
                 *企业可通过此接口获取线索列表。
                 * @param req QueryClueInfoListRequest
                 * @return QueryClueInfoListOutcome
                 */
                QueryClueInfoListOutcome QueryClueInfoList(const Model::QueryClueInfoListRequest &request);
                void QueryClueInfoListAsync(const Model::QueryClueInfoListRequest& request, const QueryClueInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryClueInfoListOutcomeCallable QueryClueInfoListCallable(const Model::QueryClueInfoListRequest& request);

                /**
                 *企业可通过此接口获取录入在企微SaaS平台上的经销商信息。
                 * @param req QueryDealerInfoListRequest
                 * @return QueryDealerInfoListOutcome
                 */
                QueryDealerInfoListOutcome QueryDealerInfoList(const Model::QueryDealerInfoListRequest &request);
                void QueryDealerInfoListAsync(const Model::QueryDealerInfoListRequest& request, const QueryDealerInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDealerInfoListOutcomeCallable QueryDealerInfoListCallable(const Model::QueryDealerInfoListRequest& request);

                /**
                 *企业可通过此接口，根据外部联系人的userid，拉取外部联系人详情
                 * @param req QueryExternalContactDetailRequest
                 * @return QueryExternalContactDetailOutcome
                 */
                QueryExternalContactDetailOutcome QueryExternalContactDetail(const Model::QueryExternalContactDetailRequest &request);
                void QueryExternalContactDetailAsync(const Model::QueryExternalContactDetailRequest& request, const QueryExternalContactDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryExternalContactDetailOutcomeCallable QueryExternalContactDetailCallable(const Model::QueryExternalContactDetailRequest& request);

                /**
                 *企业可通过此接口基于外部联系人获取指定成员添加的客户列表。客户是指配置了客户联系功能的成员所添加的外部联系人。没有配置客户联系功能的成员，所添加的外部联系人将不会作为客户返回。
                 * @param req QueryExternalContactListRequest
                 * @return QueryExternalContactListOutcome
                 */
                QueryExternalContactListOutcome QueryExternalContactList(const Model::QueryExternalContactListRequest &request);
                void QueryExternalContactListAsync(const Model::QueryExternalContactListRequest& request, const QueryExternalContactListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryExternalContactListOutcomeCallable QueryExternalContactListCallable(const Model::QueryExternalContactListRequest& request);

                /**
                 *企业可通过此接口将企业主体对应的外部联系人id转换为乐销车应用主体对应的外部联系人。
                 * @param req QueryExternalUserMappingInfoRequest
                 * @return QueryExternalUserMappingInfoOutcome
                 */
                QueryExternalUserMappingInfoOutcome QueryExternalUserMappingInfo(const Model::QueryExternalUserMappingInfoRequest &request);
                void QueryExternalUserMappingInfoAsync(const Model::QueryExternalUserMappingInfoRequest& request, const QueryExternalUserMappingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryExternalUserMappingInfoOutcomeCallable QueryExternalUserMappingInfoCallable(const Model::QueryExternalUserMappingInfoRequest& request);

                /**
                 *该接口获取license对应的详细信息
                 * @param req QueryLicenseInfoRequest
                 * @return QueryLicenseInfoOutcome
                 */
                QueryLicenseInfoOutcome QueryLicenseInfo(const Model::QueryLicenseInfoRequest &request);
                void QueryLicenseInfoAsync(const Model::QueryLicenseInfoRequest& request, const QueryLicenseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryLicenseInfoOutcomeCallable QueryLicenseInfoCallable(const Model::QueryLicenseInfoRequest& request);

                /**
                 *查询小程序码列表接口
                 * @param req QueryMiniAppCodeListRequest
                 * @return QueryMiniAppCodeListOutcome
                 */
                QueryMiniAppCodeListOutcome QueryMiniAppCodeList(const Model::QueryMiniAppCodeListRequest &request);
                void QueryMiniAppCodeListAsync(const Model::QueryMiniAppCodeListRequest& request, const QueryMiniAppCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMiniAppCodeListOutcomeCallable QueryMiniAppCodeListCallable(const Model::QueryMiniAppCodeListRequest& request);

                /**
                 *企业可通过此接口获取企微SaaS平台上的车系车型信息。
                 * @param req QueryVehicleInfoListRequest
                 * @return QueryVehicleInfoListOutcome
                 */
                QueryVehicleInfoListOutcome QueryVehicleInfoList(const Model::QueryVehicleInfoListRequest &request);
                void QueryVehicleInfoListAsync(const Model::QueryVehicleInfoListRequest& request, const QueryVehicleInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryVehicleInfoListOutcomeCallable QueryVehicleInfoListCallable(const Model::QueryVehicleInfoListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_WAVCLIENT_H_
