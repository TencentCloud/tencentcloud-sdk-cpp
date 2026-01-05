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

#ifndef TENCENTCLOUD_WIMGS_V20251106_WIMGSCLIENT_H_
#define TENCENTCLOUD_WIMGS_V20251106_WIMGSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wimgs/v20251106/model/SearchByTextRequest.h>
#include <tencentcloud/wimgs/v20251106/model/SearchByTextResponse.h>


namespace TencentCloud
{
    namespace Wimgs
    {
        namespace V20251106
        {
            class WimgsClient : public AbstractClient
            {
            public:
                WimgsClient(const Credential &credential, const std::string &region);
                WimgsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::SearchByTextResponse> SearchByTextOutcome;
                typedef std::future<SearchByTextOutcome> SearchByTextOutcomeCallable;
                typedef std::function<void(const WimgsClient*, const Model::SearchByTextRequest&, SearchByTextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchByTextAsyncHandler;



                /**
                 *文搜图接口，本服务将针对您输入的搜索关键词，检索并以JSON形式返回相关图片的标题、宽高、缩略图、内容来源url等信息。
                 * @param req SearchByTextRequest
                 * @return SearchByTextOutcome
                 */
                SearchByTextOutcome SearchByText(const Model::SearchByTextRequest &request);
                void SearchByTextAsync(const Model::SearchByTextRequest& request, const SearchByTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchByTextOutcomeCallable SearchByTextCallable(const Model::SearchByTextRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WIMGS_V20251106_WIMGSCLIENT_H_
