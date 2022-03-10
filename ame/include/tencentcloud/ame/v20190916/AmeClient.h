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

#ifndef TENCENTCLOUD_AME_V20190916_AMECLIENT_H_
#define TENCENTCLOUD_AME_V20190916_AMECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ame/v20190916/model/BatchDescribeKTVMusicDetailsRequest.h>
#include <tencentcloud/ame/v20190916/model/BatchDescribeKTVMusicDetailsResponse.h>
#include <tencentcloud/ame/v20190916/model/CreateKTVRobotRequest.h>
#include <tencentcloud/ame/v20190916/model/CreateKTVRobotResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeAuthInfoRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeAuthInfoResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeCloudMusicPurchasedResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeItemByIdRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeItemByIdResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeItemsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeItemsResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVMusicDetailRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVMusicDetailResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVMusicTagsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVMusicTagsResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVPlaylistDetailRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVPlaylistDetailResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVPlaylistsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVPlaylistsResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVRobotsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVRobotsResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVSingerCategoriesRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVSingerCategoriesResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVSingerMusicsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVSingerMusicsResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVSingersRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVSingersResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVSuggestionsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVSuggestionsResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVTopListRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeKTVTopListResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeLyricRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeLyricResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeMusicRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeMusicResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeMusicSaleStatusRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeMusicSaleStatusResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribePackageItemsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribePackageItemsResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribePackagesRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribePackagesResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribePkgOfflineMusicRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribePkgOfflineMusicResponse.h>
#include <tencentcloud/ame/v20190916/model/DescribeStationsRequest.h>
#include <tencentcloud/ame/v20190916/model/DescribeStationsResponse.h>
#include <tencentcloud/ame/v20190916/model/DestroyKTVRobotRequest.h>
#include <tencentcloud/ame/v20190916/model/DestroyKTVRobotResponse.h>
#include <tencentcloud/ame/v20190916/model/ModifyMusicOnShelvesRequest.h>
#include <tencentcloud/ame/v20190916/model/ModifyMusicOnShelvesResponse.h>
#include <tencentcloud/ame/v20190916/model/PutMusicOnTheShelvesRequest.h>
#include <tencentcloud/ame/v20190916/model/PutMusicOnTheShelvesResponse.h>
#include <tencentcloud/ame/v20190916/model/ReportDataRequest.h>
#include <tencentcloud/ame/v20190916/model/ReportDataResponse.h>
#include <tencentcloud/ame/v20190916/model/SearchKTVMusicsRequest.h>
#include <tencentcloud/ame/v20190916/model/SearchKTVMusicsResponse.h>
#include <tencentcloud/ame/v20190916/model/SyncKTVRobotCommandRequest.h>
#include <tencentcloud/ame/v20190916/model/SyncKTVRobotCommandResponse.h>
#include <tencentcloud/ame/v20190916/model/TakeMusicOffShelvesRequest.h>
#include <tencentcloud/ame/v20190916/model/TakeMusicOffShelvesResponse.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            class AmeClient : public AbstractClient
            {
            public:
                AmeClient(const Credential &credential, const std::string &region);
                AmeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchDescribeKTVMusicDetailsResponse> BatchDescribeKTVMusicDetailsOutcome;
                typedef std::future<BatchDescribeKTVMusicDetailsOutcome> BatchDescribeKTVMusicDetailsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::BatchDescribeKTVMusicDetailsRequest&, BatchDescribeKTVMusicDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDescribeKTVMusicDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKTVRobotResponse> CreateKTVRobotOutcome;
                typedef std::future<CreateKTVRobotOutcome> CreateKTVRobotOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::CreateKTVRobotRequest&, CreateKTVRobotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKTVRobotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthInfoResponse> DescribeAuthInfoOutcome;
                typedef std::future<DescribeAuthInfoOutcome> DescribeAuthInfoOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeAuthInfoRequest&, DescribeAuthInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudMusicResponse> DescribeCloudMusicOutcome;
                typedef std::future<DescribeCloudMusicOutcome> DescribeCloudMusicOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeCloudMusicRequest&, DescribeCloudMusicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudMusicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudMusicPurchasedResponse> DescribeCloudMusicPurchasedOutcome;
                typedef std::future<DescribeCloudMusicPurchasedOutcome> DescribeCloudMusicPurchasedOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeCloudMusicPurchasedRequest&, DescribeCloudMusicPurchasedOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudMusicPurchasedAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeItemByIdResponse> DescribeItemByIdOutcome;
                typedef std::future<DescribeItemByIdOutcome> DescribeItemByIdOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeItemByIdRequest&, DescribeItemByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeItemByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeItemsResponse> DescribeItemsOutcome;
                typedef std::future<DescribeItemsOutcome> DescribeItemsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeItemsRequest&, DescribeItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVMusicDetailResponse> DescribeKTVMusicDetailOutcome;
                typedef std::future<DescribeKTVMusicDetailOutcome> DescribeKTVMusicDetailOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVMusicDetailRequest&, DescribeKTVMusicDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVMusicDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVMusicTagsResponse> DescribeKTVMusicTagsOutcome;
                typedef std::future<DescribeKTVMusicTagsOutcome> DescribeKTVMusicTagsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVMusicTagsRequest&, DescribeKTVMusicTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVMusicTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVPlaylistDetailResponse> DescribeKTVPlaylistDetailOutcome;
                typedef std::future<DescribeKTVPlaylistDetailOutcome> DescribeKTVPlaylistDetailOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVPlaylistDetailRequest&, DescribeKTVPlaylistDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVPlaylistDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVPlaylistsResponse> DescribeKTVPlaylistsOutcome;
                typedef std::future<DescribeKTVPlaylistsOutcome> DescribeKTVPlaylistsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVPlaylistsRequest&, DescribeKTVPlaylistsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVPlaylistsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVRobotsResponse> DescribeKTVRobotsOutcome;
                typedef std::future<DescribeKTVRobotsOutcome> DescribeKTVRobotsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVRobotsRequest&, DescribeKTVRobotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVRobotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVSingerCategoriesResponse> DescribeKTVSingerCategoriesOutcome;
                typedef std::future<DescribeKTVSingerCategoriesOutcome> DescribeKTVSingerCategoriesOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVSingerCategoriesRequest&, DescribeKTVSingerCategoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVSingerCategoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVSingerMusicsResponse> DescribeKTVSingerMusicsOutcome;
                typedef std::future<DescribeKTVSingerMusicsOutcome> DescribeKTVSingerMusicsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVSingerMusicsRequest&, DescribeKTVSingerMusicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVSingerMusicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVSingersResponse> DescribeKTVSingersOutcome;
                typedef std::future<DescribeKTVSingersOutcome> DescribeKTVSingersOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVSingersRequest&, DescribeKTVSingersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVSingersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVSuggestionsResponse> DescribeKTVSuggestionsOutcome;
                typedef std::future<DescribeKTVSuggestionsOutcome> DescribeKTVSuggestionsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVSuggestionsRequest&, DescribeKTVSuggestionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVSuggestionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVTopListResponse> DescribeKTVTopListOutcome;
                typedef std::future<DescribeKTVTopListOutcome> DescribeKTVTopListOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeKTVTopListRequest&, DescribeKTVTopListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVTopListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLyricResponse> DescribeLyricOutcome;
                typedef std::future<DescribeLyricOutcome> DescribeLyricOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeLyricRequest&, DescribeLyricOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLyricAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMusicResponse> DescribeMusicOutcome;
                typedef std::future<DescribeMusicOutcome> DescribeMusicOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeMusicRequest&, DescribeMusicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMusicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMusicSaleStatusResponse> DescribeMusicSaleStatusOutcome;
                typedef std::future<DescribeMusicSaleStatusOutcome> DescribeMusicSaleStatusOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeMusicSaleStatusRequest&, DescribeMusicSaleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMusicSaleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePackageItemsResponse> DescribePackageItemsOutcome;
                typedef std::future<DescribePackageItemsOutcome> DescribePackageItemsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribePackageItemsRequest&, DescribePackageItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackageItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePackagesResponse> DescribePackagesOutcome;
                typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribePackagesRequest&, DescribePackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePkgOfflineMusicResponse> DescribePkgOfflineMusicOutcome;
                typedef std::future<DescribePkgOfflineMusicOutcome> DescribePkgOfflineMusicOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribePkgOfflineMusicRequest&, DescribePkgOfflineMusicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePkgOfflineMusicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStationsResponse> DescribeStationsOutcome;
                typedef std::future<DescribeStationsOutcome> DescribeStationsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DescribeStationsRequest&, DescribeStationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyKTVRobotResponse> DestroyKTVRobotOutcome;
                typedef std::future<DestroyKTVRobotOutcome> DestroyKTVRobotOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::DestroyKTVRobotRequest&, DestroyKTVRobotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyKTVRobotAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMusicOnShelvesResponse> ModifyMusicOnShelvesOutcome;
                typedef std::future<ModifyMusicOnShelvesOutcome> ModifyMusicOnShelvesOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::ModifyMusicOnShelvesRequest&, ModifyMusicOnShelvesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMusicOnShelvesAsyncHandler;
                typedef Outcome<Core::Error, Model::PutMusicOnTheShelvesResponse> PutMusicOnTheShelvesOutcome;
                typedef std::future<PutMusicOnTheShelvesOutcome> PutMusicOnTheShelvesOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::PutMusicOnTheShelvesRequest&, PutMusicOnTheShelvesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutMusicOnTheShelvesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportDataResponse> ReportDataOutcome;
                typedef std::future<ReportDataOutcome> ReportDataOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::ReportDataRequest&, ReportDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportDataAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchKTVMusicsResponse> SearchKTVMusicsOutcome;
                typedef std::future<SearchKTVMusicsOutcome> SearchKTVMusicsOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::SearchKTVMusicsRequest&, SearchKTVMusicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchKTVMusicsAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncKTVRobotCommandResponse> SyncKTVRobotCommandOutcome;
                typedef std::future<SyncKTVRobotCommandOutcome> SyncKTVRobotCommandOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::SyncKTVRobotCommandRequest&, SyncKTVRobotCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncKTVRobotCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::TakeMusicOffShelvesResponse> TakeMusicOffShelvesOutcome;
                typedef std::future<TakeMusicOffShelvesOutcome> TakeMusicOffShelvesOutcomeCallable;
                typedef std::function<void(const AmeClient*, const Model::TakeMusicOffShelvesRequest&, TakeMusicOffShelvesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TakeMusicOffShelvesAsyncHandler;



                /**
                 *根据 Id 列表查询歌曲的详细信息，包含基础信息及播放信息。
                 * @param req BatchDescribeKTVMusicDetailsRequest
                 * @return BatchDescribeKTVMusicDetailsOutcome
                 */
                BatchDescribeKTVMusicDetailsOutcome BatchDescribeKTVMusicDetails(const Model::BatchDescribeKTVMusicDetailsRequest &request);
                void BatchDescribeKTVMusicDetailsAsync(const Model::BatchDescribeKTVMusicDetailsRequest& request, const BatchDescribeKTVMusicDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDescribeKTVMusicDetailsOutcomeCallable BatchDescribeKTVMusicDetailsCallable(const Model::BatchDescribeKTVMusicDetailsRequest& request);

                /**
                 *创建机器人，支持进入 RTC 房间，播放直播互动曲库歌曲。
                 * @param req CreateKTVRobotRequest
                 * @return CreateKTVRobotOutcome
                 */
                CreateKTVRobotOutcome CreateKTVRobot(const Model::CreateKTVRobotRequest &request);
                void CreateKTVRobotAsync(const Model::CreateKTVRobotRequest& request, const CreateKTVRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKTVRobotOutcomeCallable CreateKTVRobotCallable(const Model::CreateKTVRobotRequest& request);

                /**
                 *获取授权项目信息列表
                 * @param req DescribeAuthInfoRequest
                 * @return DescribeAuthInfoOutcome
                 */
                DescribeAuthInfoOutcome DescribeAuthInfo(const Model::DescribeAuthInfoRequest &request);
                void DescribeAuthInfoAsync(const Model::DescribeAuthInfoRequest& request, const DescribeAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthInfoOutcomeCallable DescribeAuthInfoCallable(const Model::DescribeAuthInfoRequest& request);

                /**
                 *获取云音乐播放信息接口
                 * @param req DescribeCloudMusicRequest
                 * @return DescribeCloudMusicOutcome
                 */
                DescribeCloudMusicOutcome DescribeCloudMusic(const Model::DescribeCloudMusicRequest &request);
                void DescribeCloudMusicAsync(const Model::DescribeCloudMusicRequest& request, const DescribeCloudMusicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudMusicOutcomeCallable DescribeCloudMusicCallable(const Model::DescribeCloudMusicRequest& request);

                /**
                 *获取授权项目下已购云音乐列表
                 * @param req DescribeCloudMusicPurchasedRequest
                 * @return DescribeCloudMusicPurchasedOutcome
                 */
                DescribeCloudMusicPurchasedOutcome DescribeCloudMusicPurchased(const Model::DescribeCloudMusicPurchasedRequest &request);
                void DescribeCloudMusicPurchasedAsync(const Model::DescribeCloudMusicPurchasedRequest& request, const DescribeCloudMusicPurchasedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudMusicPurchasedOutcomeCallable DescribeCloudMusicPurchasedCallable(const Model::DescribeCloudMusicPurchasedRequest& request);

                /**
                 *根据歌曲ID查询歌曲信息
                 * @param req DescribeItemByIdRequest
                 * @return DescribeItemByIdOutcome
                 */
                DescribeItemByIdOutcome DescribeItemById(const Model::DescribeItemByIdRequest &request);
                void DescribeItemByIdAsync(const Model::DescribeItemByIdRequest& request, const DescribeItemByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeItemByIdOutcomeCallable DescribeItemByIdCallable(const Model::DescribeItemByIdRequest& request);

                /**
                 *该服务后续会停用，不再建议使用
                 * @param req DescribeItemsRequest
                 * @return DescribeItemsOutcome
                 */
                DescribeItemsOutcome DescribeItems(const Model::DescribeItemsRequest &request);
                void DescribeItemsAsync(const Model::DescribeItemsRequest& request, const DescribeItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeItemsOutcomeCallable DescribeItemsCallable(const Model::DescribeItemsRequest& request);

                /**
                 *根据 Id 查询歌曲的详细信息，包含基础信息及播放信息。
                 * @param req DescribeKTVMusicDetailRequest
                 * @return DescribeKTVMusicDetailOutcome
                 */
                DescribeKTVMusicDetailOutcome DescribeKTVMusicDetail(const Model::DescribeKTVMusicDetailRequest &request);
                void DescribeKTVMusicDetailAsync(const Model::DescribeKTVMusicDetailRequest& request, const DescribeKTVMusicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVMusicDetailOutcomeCallable DescribeKTVMusicDetailCallable(const Model::DescribeKTVMusicDetailRequest& request);

                /**
                 *获取直播互动曲库标签分组信息和标签信息
                 * @param req DescribeKTVMusicTagsRequest
                 * @return DescribeKTVMusicTagsOutcome
                 */
                DescribeKTVMusicTagsOutcome DescribeKTVMusicTags(const Model::DescribeKTVMusicTagsRequest &request);
                void DescribeKTVMusicTagsAsync(const Model::DescribeKTVMusicTagsRequest& request, const DescribeKTVMusicTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVMusicTagsOutcomeCallable DescribeKTVMusicTagsCallable(const Model::DescribeKTVMusicTagsRequest& request);

                /**
                 *根据歌单 Id 获取歌单详情，包括歌单的基础信息以及歌曲列表。
                 * @param req DescribeKTVPlaylistDetailRequest
                 * @return DescribeKTVPlaylistDetailOutcome
                 */
                DescribeKTVPlaylistDetailOutcome DescribeKTVPlaylistDetail(const Model::DescribeKTVPlaylistDetailRequest &request);
                void DescribeKTVPlaylistDetailAsync(const Model::DescribeKTVPlaylistDetailRequest& request, const DescribeKTVPlaylistDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVPlaylistDetailOutcomeCallable DescribeKTVPlaylistDetailCallable(const Model::DescribeKTVPlaylistDetailRequest& request);

                /**
                 *获取直播互动曲库推荐歌单列表。
                 * @param req DescribeKTVPlaylistsRequest
                 * @return DescribeKTVPlaylistsOutcome
                 */
                DescribeKTVPlaylistsOutcome DescribeKTVPlaylists(const Model::DescribeKTVPlaylistsRequest &request);
                void DescribeKTVPlaylistsAsync(const Model::DescribeKTVPlaylistsRequest& request, const DescribeKTVPlaylistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVPlaylistsOutcomeCallable DescribeKTVPlaylistsCallable(const Model::DescribeKTVPlaylistsRequest& request);

                /**
                 *获取机器人列表，支持 Id、状态等过滤条件。
                 * @param req DescribeKTVRobotsRequest
                 * @return DescribeKTVRobotsOutcome
                 */
                DescribeKTVRobotsOutcome DescribeKTVRobots(const Model::DescribeKTVRobotsRequest &request);
                void DescribeKTVRobotsAsync(const Model::DescribeKTVRobotsRequest& request, const DescribeKTVRobotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVRobotsOutcomeCallable DescribeKTVRobotsCallable(const Model::DescribeKTVRobotsRequest& request);

                /**
                 *获取直播互动曲库歌手分类信息
                 * @param req DescribeKTVSingerCategoriesRequest
                 * @return DescribeKTVSingerCategoriesOutcome
                 */
                DescribeKTVSingerCategoriesOutcome DescribeKTVSingerCategories(const Model::DescribeKTVSingerCategoriesRequest &request);
                void DescribeKTVSingerCategoriesAsync(const Model::DescribeKTVSingerCategoriesRequest& request, const DescribeKTVSingerCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVSingerCategoriesOutcomeCallable DescribeKTVSingerCategoriesCallable(const Model::DescribeKTVSingerCategoriesRequest& request);

                /**
                 *根据歌手id，返回该歌手下歌曲列表。



                 * @param req DescribeKTVSingerMusicsRequest
                 * @return DescribeKTVSingerMusicsOutcome
                 */
                DescribeKTVSingerMusicsOutcome DescribeKTVSingerMusics(const Model::DescribeKTVSingerMusicsRequest &request);
                void DescribeKTVSingerMusicsAsync(const Model::DescribeKTVSingerMusicsRequest& request, const DescribeKTVSingerMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVSingerMusicsOutcomeCallable DescribeKTVSingerMusicsCallable(const Model::DescribeKTVSingerMusicsRequest& request);

                /**
                 *根据过滤条件，返回匹配的歌手列表。
                 * @param req DescribeKTVSingersRequest
                 * @return DescribeKTVSingersOutcome
                 */
                DescribeKTVSingersOutcome DescribeKTVSingers(const Model::DescribeKTVSingersRequest &request);
                void DescribeKTVSingersAsync(const Model::DescribeKTVSingersRequest& request, const DescribeKTVSingersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVSingersOutcomeCallable DescribeKTVSingersCallable(const Model::DescribeKTVSingersRequest& request);

                /**
                 *获取直播互动曲库联想词
                 * @param req DescribeKTVSuggestionsRequest
                 * @return DescribeKTVSuggestionsOutcome
                 */
                DescribeKTVSuggestionsOutcome DescribeKTVSuggestions(const Model::DescribeKTVSuggestionsRequest &request);
                void DescribeKTVSuggestionsAsync(const Model::DescribeKTVSuggestionsRequest& request, const DescribeKTVSuggestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVSuggestionsOutcomeCallable DescribeKTVSuggestionsCallable(const Model::DescribeKTVSuggestionsRequest& request);

                /**
                 *获取直播互动曲库歌曲的周榜和月榜
                 * @param req DescribeKTVTopListRequest
                 * @return DescribeKTVTopListOutcome
                 */
                DescribeKTVTopListOutcome DescribeKTVTopList(const Model::DescribeKTVTopListRequest &request);
                void DescribeKTVTopListAsync(const Model::DescribeKTVTopListRequest& request, const DescribeKTVTopListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVTopListOutcomeCallable DescribeKTVTopListCallable(const Model::DescribeKTVTopListRequest& request);

                /**
                 *根据接口的模式及歌曲ID来取得歌词信息或者波形图信息。
                 * @param req DescribeLyricRequest
                 * @return DescribeLyricOutcome
                 */
                DescribeLyricOutcome DescribeLyric(const Model::DescribeLyricRequest &request);
                void DescribeLyricAsync(const Model::DescribeLyricRequest& request, const DescribeLyricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLyricOutcomeCallable DescribeLyricCallable(const Model::DescribeLyricRequest& request);

                /**
                 *获取曲库包歌曲播放信息接口
                 * @param req DescribeMusicRequest
                 * @return DescribeMusicOutcome
                 */
                DescribeMusicOutcome DescribeMusic(const Model::DescribeMusicRequest &request);
                void DescribeMusicAsync(const Model::DescribeMusicRequest& request, const DescribeMusicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMusicOutcomeCallable DescribeMusicCallable(const Model::DescribeMusicRequest& request);

                /**
                 *根据音乐信息查询音乐是否在售
                 * @param req DescribeMusicSaleStatusRequest
                 * @return DescribeMusicSaleStatusOutcome
                 */
                DescribeMusicSaleStatusOutcome DescribeMusicSaleStatus(const Model::DescribeMusicSaleStatusRequest &request);
                void DescribeMusicSaleStatusAsync(const Model::DescribeMusicSaleStatusRequest& request, const DescribeMusicSaleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMusicSaleStatusOutcomeCallable DescribeMusicSaleStatusCallable(const Model::DescribeMusicSaleStatusRequest& request);

                /**
                 *获取曲库包下已核销歌曲列表接口
                 * @param req DescribePackageItemsRequest
                 * @return DescribePackageItemsOutcome
                 */
                DescribePackageItemsOutcome DescribePackageItems(const Model::DescribePackageItemsRequest &request);
                void DescribePackageItemsAsync(const Model::DescribePackageItemsRequest& request, const DescribePackageItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePackageItemsOutcomeCallable DescribePackageItemsCallable(const Model::DescribePackageItemsRequest& request);

                /**
                 *获取已购曲库包列表接口
                 * @param req DescribePackagesRequest
                 * @return DescribePackagesOutcome
                 */
                DescribePackagesOutcome DescribePackages(const Model::DescribePackagesRequest &request);
                void DescribePackagesAsync(const Model::DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePackagesOutcomeCallable DescribePackagesCallable(const Model::DescribePackagesRequest& request);

                /**
                 *根据购买曲库包用户可查询已回退的歌曲信息
                 * @param req DescribePkgOfflineMusicRequest
                 * @return DescribePkgOfflineMusicOutcome
                 */
                DescribePkgOfflineMusicOutcome DescribePkgOfflineMusic(const Model::DescribePkgOfflineMusicRequest &request);
                void DescribePkgOfflineMusicAsync(const Model::DescribePkgOfflineMusicRequest& request, const DescribePkgOfflineMusicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePkgOfflineMusicOutcomeCallable DescribePkgOfflineMusicCallable(const Model::DescribePkgOfflineMusicRequest& request);

                /**
                 *该服务后续会停用，不再建议使用
                 * @param req DescribeStationsRequest
                 * @return DescribeStationsOutcome
                 */
                DescribeStationsOutcome DescribeStations(const Model::DescribeStationsRequest &request);
                void DescribeStationsAsync(const Model::DescribeStationsRequest& request, const DescribeStationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStationsOutcomeCallable DescribeStationsCallable(const Model::DescribeStationsRequest& request);

                /**
                 *销毁机器人，机器人退出 RTC 房间。
                 * @param req DestroyKTVRobotRequest
                 * @return DestroyKTVRobotOutcome
                 */
                DestroyKTVRobotOutcome DestroyKTVRobot(const Model::DestroyKTVRobotRequest &request);
                void DestroyKTVRobotAsync(const Model::DestroyKTVRobotRequest& request, const DestroyKTVRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyKTVRobotOutcomeCallable DestroyKTVRobotCallable(const Model::DestroyKTVRobotRequest& request);

                /**
                 *根据资源方，需要变更的参数，请求该接口进行变更，为空的参数默认为无变更
                 * @param req ModifyMusicOnShelvesRequest
                 * @return ModifyMusicOnShelvesOutcome
                 */
                ModifyMusicOnShelvesOutcome ModifyMusicOnShelves(const Model::ModifyMusicOnShelvesRequest &request);
                void ModifyMusicOnShelvesAsync(const Model::ModifyMusicOnShelvesRequest& request, const ModifyMusicOnShelvesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMusicOnShelvesOutcomeCallable ModifyMusicOnShelvesCallable(const Model::ModifyMusicOnShelvesRequest& request);

                /**
                 *根据资源方所传歌曲信息，进行歌曲上架，多个歌曲同时请求时，需构造复合结构进行请求
                 * @param req PutMusicOnTheShelvesRequest
                 * @return PutMusicOnTheShelvesOutcome
                 */
                PutMusicOnTheShelvesOutcome PutMusicOnTheShelves(const Model::PutMusicOnTheShelvesRequest &request);
                void PutMusicOnTheShelvesAsync(const Model::PutMusicOnTheShelvesRequest& request, const PutMusicOnTheShelvesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutMusicOnTheShelvesOutcomeCallable PutMusicOnTheShelvesCallable(const Model::PutMusicOnTheShelvesRequest& request);

                /**
                 *客户上报用户数据功能，为了更好地为用户提供优质服务
                 * @param req ReportDataRequest
                 * @return ReportDataOutcome
                 */
                ReportDataOutcome ReportData(const Model::ReportDataRequest &request);
                void ReportDataAsync(const Model::ReportDataRequest& request, const ReportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportDataOutcomeCallable ReportDataCallable(const Model::ReportDataRequest& request);

                /**
                 *根据搜索条件，返回匹配的歌曲列表。
                 * @param req SearchKTVMusicsRequest
                 * @return SearchKTVMusicsOutcome
                 */
                SearchKTVMusicsOutcome SearchKTVMusics(const Model::SearchKTVMusicsRequest &request);
                void SearchKTVMusicsAsync(const Model::SearchKTVMusicsRequest& request, const SearchKTVMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchKTVMusicsOutcomeCallable SearchKTVMusicsCallable(const Model::SearchKTVMusicsRequest& request);

                /**
                 *下发操作机器人指令，支持播放、暂停、恢复、歌单设置等操作指令，实现对机器人行为的控制。
                 * @param req SyncKTVRobotCommandRequest
                 * @return SyncKTVRobotCommandOutcome
                 */
                SyncKTVRobotCommandOutcome SyncKTVRobotCommand(const Model::SyncKTVRobotCommandRequest &request);
                void SyncKTVRobotCommandAsync(const Model::SyncKTVRobotCommandRequest& request, const SyncKTVRobotCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncKTVRobotCommandOutcomeCallable SyncKTVRobotCommandCallable(const Model::SyncKTVRobotCommandRequest& request);

                /**
                 *根据资源方所传MusicId进行将歌曲进行下架，多个MusicId使用逗号隔开
                 * @param req TakeMusicOffShelvesRequest
                 * @return TakeMusicOffShelvesOutcome
                 */
                TakeMusicOffShelvesOutcome TakeMusicOffShelves(const Model::TakeMusicOffShelvesRequest &request);
                void TakeMusicOffShelvesAsync(const Model::TakeMusicOffShelvesRequest& request, const TakeMusicOffShelvesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TakeMusicOffShelvesOutcomeCallable TakeMusicOffShelvesCallable(const Model::TakeMusicOffShelvesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_AMECLIENT_H_
