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

#ifndef TENCENTCLOUD_WSA_V20250508_WSACLIENT_H_
#define TENCENTCLOUD_WSA_V20250508_WSACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wsa/v20250508/model/SearchProRequest.h>
#include <tencentcloud/wsa/v20250508/model/SearchProResponse.h>


namespace TencentCloud
{
    namespace Wsa
    {
        namespace V20250508
        {
            class WsaClient : public AbstractClient
            {
            public:
                WsaClient(const Credential &credential, const std::string &region);
                WsaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::SearchProResponse> SearchProOutcome;
                typedef std::future<SearchProOutcome> SearchProOutcomeCallable;
                typedef std::function<void(const WsaClient*, const Model::SearchProRequest&, SearchProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchProAsyncHandler;



                /**
                 *元宝搜索（Tencent Yuanbao Search，wsa）以互联网全网公开资源为基础，叠加腾讯优质内容生态，结合元宝 App 联网搜索应用实践，从数据收录到智能检索召回，全链路构建 AI 友好搜索引擎。合作伙伴通过检索词发起请求，接口以 JSON 形式返回搜索结果对应的排序信息、数据字段，合作伙伴可在业务场景中结合搜索结果的内容，扩充信息内容源，丰富展现效果，提升用户的查询满意度。
                 * @param req SearchProRequest
                 * @return SearchProOutcome
                 */
                SearchProOutcome SearchPro(const Model::SearchProRequest &request);
                void SearchProAsync(const Model::SearchProRequest& request, const SearchProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchProOutcomeCallable SearchProCallable(const Model::SearchProRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WSA_V20250508_WSACLIENT_H_
