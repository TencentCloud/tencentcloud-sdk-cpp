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

#ifndef TENCENTCLOUD_PORTAL_V20230413_PORTALCLIENT_H_
#define TENCENTCLOUD_PORTAL_V20230413_PORTALCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/portal/v20230413/model/SearchDocumentsRequest.h>
#include <tencentcloud/portal/v20230413/model/SearchDocumentsResponse.h>


namespace TencentCloud
{
    namespace Portal
    {
        namespace V20230413
        {
            class PortalClient : public AbstractClient
            {
            public:
                PortalClient(const Credential &credential, const std::string &region);
                PortalClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::SearchDocumentsResponse> SearchDocumentsOutcome;
                typedef std::future<SearchDocumentsOutcome> SearchDocumentsOutcomeCallable;
                typedef std::function<void(const PortalClient*, const Model::SearchDocumentsRequest&, SearchDocumentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchDocumentsAsyncHandler;



                /**
                 *通过关键词搜索文档列表
                 * @param req SearchDocumentsRequest
                 * @return SearchDocumentsOutcome
                 */
                SearchDocumentsOutcome SearchDocuments(const Model::SearchDocumentsRequest &request);
                void SearchDocumentsAsync(const Model::SearchDocumentsRequest& request, const SearchDocumentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchDocumentsOutcomeCallable SearchDocumentsCallable(const Model::SearchDocumentsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_PORTAL_V20230413_PORTALCLIENT_H_
