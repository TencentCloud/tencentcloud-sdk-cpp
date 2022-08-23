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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_YINSUDACLIENT_H_
#define TENCENTCLOUD_YINSUDA_V20220527_YINSUDACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/yinsuda/v20220527/model/BatchDescribeKTVMusicDetailsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/BatchDescribeKTVMusicDetailsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVMatchMusicsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVMatchMusicsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistDetailRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistDetailResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVPlaylistsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVSuggestionsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/DescribeKTVSuggestionsResponse.h>
#include <tencentcloud/yinsuda/v20220527/model/SearchKTVMusicsRequest.h>
#include <tencentcloud/yinsuda/v20220527/model/SearchKTVMusicsResponse.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            class YinsudaClient : public AbstractClient
            {
            public:
                YinsudaClient(const Credential &credential, const std::string &region);
                YinsudaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchDescribeKTVMusicDetailsResponse> BatchDescribeKTVMusicDetailsOutcome;
                typedef std::future<BatchDescribeKTVMusicDetailsOutcome> BatchDescribeKTVMusicDetailsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::BatchDescribeKTVMusicDetailsRequest&, BatchDescribeKTVMusicDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDescribeKTVMusicDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVMatchMusicsResponse> DescribeKTVMatchMusicsOutcome;
                typedef std::future<DescribeKTVMatchMusicsOutcome> DescribeKTVMatchMusicsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVMatchMusicsRequest&, DescribeKTVMatchMusicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVMatchMusicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVPlaylistDetailResponse> DescribeKTVPlaylistDetailOutcome;
                typedef std::future<DescribeKTVPlaylistDetailOutcome> DescribeKTVPlaylistDetailOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVPlaylistDetailRequest&, DescribeKTVPlaylistDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVPlaylistDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVPlaylistsResponse> DescribeKTVPlaylistsOutcome;
                typedef std::future<DescribeKTVPlaylistsOutcome> DescribeKTVPlaylistsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVPlaylistsRequest&, DescribeKTVPlaylistsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVPlaylistsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKTVSuggestionsResponse> DescribeKTVSuggestionsOutcome;
                typedef std::future<DescribeKTVSuggestionsOutcome> DescribeKTVSuggestionsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::DescribeKTVSuggestionsRequest&, DescribeKTVSuggestionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKTVSuggestionsAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchKTVMusicsResponse> SearchKTVMusicsOutcome;
                typedef std::future<SearchKTVMusicsOutcome> SearchKTVMusicsOutcomeCallable;
                typedef std::function<void(const YinsudaClient*, const Model::SearchKTVMusicsRequest&, SearchKTVMusicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchKTVMusicsAsyncHandler;



                /**
                 *批量获取歌曲详细信息，包括：歌词下载链接、播放凭证、音高数据下载链接信息等。
                 * @param req BatchDescribeKTVMusicDetailsRequest
                 * @return BatchDescribeKTVMusicDetailsOutcome
                 */
                BatchDescribeKTVMusicDetailsOutcome BatchDescribeKTVMusicDetails(const Model::BatchDescribeKTVMusicDetailsRequest &request);
                void BatchDescribeKTVMusicDetailsAsync(const Model::BatchDescribeKTVMusicDetailsRequest& request, const BatchDescribeKTVMusicDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDescribeKTVMusicDetailsOutcomeCallable BatchDescribeKTVMusicDetailsCallable(const Model::BatchDescribeKTVMusicDetailsRequest& request);

                /**
                 *根据输入的规则匹配曲库中的歌曲。
                 * @param req DescribeKTVMatchMusicsRequest
                 * @return DescribeKTVMatchMusicsOutcome
                 */
                DescribeKTVMatchMusicsOutcome DescribeKTVMatchMusics(const Model::DescribeKTVMatchMusicsRequest &request);
                void DescribeKTVMatchMusicsAsync(const Model::DescribeKTVMatchMusicsRequest& request, const DescribeKTVMatchMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVMatchMusicsOutcomeCallable DescribeKTVMatchMusicsCallable(const Model::DescribeKTVMatchMusicsRequest& request);

                /**
                 *根据歌单 Id 获取歌单详情。
                 * @param req DescribeKTVPlaylistDetailRequest
                 * @return DescribeKTVPlaylistDetailOutcome
                 */
                DescribeKTVPlaylistDetailOutcome DescribeKTVPlaylistDetail(const Model::DescribeKTVPlaylistDetailRequest &request);
                void DescribeKTVPlaylistDetailAsync(const Model::DescribeKTVPlaylistDetailRequest& request, const DescribeKTVPlaylistDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVPlaylistDetailOutcomeCallable DescribeKTVPlaylistDetailCallable(const Model::DescribeKTVPlaylistDetailRequest& request);

                /**
                 *获取歌单列表。
                 * @param req DescribeKTVPlaylistsRequest
                 * @return DescribeKTVPlaylistsOutcome
                 */
                DescribeKTVPlaylistsOutcome DescribeKTVPlaylists(const Model::DescribeKTVPlaylistsRequest &request);
                void DescribeKTVPlaylistsAsync(const Model::DescribeKTVPlaylistsRequest& request, const DescribeKTVPlaylistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVPlaylistsOutcomeCallable DescribeKTVPlaylistsCallable(const Model::DescribeKTVPlaylistsRequest& request);

                /**
                 *根据关键词获取联想词列表。
                 * @param req DescribeKTVSuggestionsRequest
                 * @return DescribeKTVSuggestionsOutcome
                 */
                DescribeKTVSuggestionsOutcome DescribeKTVSuggestions(const Model::DescribeKTVSuggestionsRequest &request);
                void DescribeKTVSuggestionsAsync(const Model::DescribeKTVSuggestionsRequest& request, const DescribeKTVSuggestionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKTVSuggestionsOutcomeCallable DescribeKTVSuggestionsCallable(const Model::DescribeKTVSuggestionsRequest& request);

                /**
                 *根据关键词搜索歌曲，返回相关歌曲列表。
                 * @param req SearchKTVMusicsRequest
                 * @return SearchKTVMusicsOutcome
                 */
                SearchKTVMusicsOutcome SearchKTVMusics(const Model::SearchKTVMusicsRequest &request);
                void SearchKTVMusicsAsync(const Model::SearchKTVMusicsRequest& request, const SearchKTVMusicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchKTVMusicsOutcomeCallable SearchKTVMusicsCallable(const Model::SearchKTVMusicsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_YINSUDACLIENT_H_
