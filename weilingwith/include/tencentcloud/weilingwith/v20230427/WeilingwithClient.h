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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_WEILINGWITHCLIENT_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_WEILINGWITHCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeApplicationListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeApplicationListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeEdgeApplicationTokenRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeEdgeApplicationTokenResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeInterfaceListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeInterfaceListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceListResponse.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceUserListRequest.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeWorkspaceUserListResponse.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            class WeilingwithClient : public AbstractClient
            {
            public:
                WeilingwithClient(const Credential &credential, const std::string &region);
                WeilingwithClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeApplicationListResponse> DescribeApplicationListOutcome;
                typedef std::future<DescribeApplicationListOutcome> DescribeApplicationListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeApplicationListRequest&, DescribeApplicationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeApplicationTokenResponse> DescribeEdgeApplicationTokenOutcome;
                typedef std::future<DescribeEdgeApplicationTokenOutcome> DescribeEdgeApplicationTokenOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeEdgeApplicationTokenRequest&, DescribeEdgeApplicationTokenOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeApplicationTokenAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInterfaceListResponse> DescribeInterfaceListOutcome;
                typedef std::future<DescribeInterfaceListOutcome> DescribeInterfaceListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeInterfaceListRequest&, DescribeInterfaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInterfaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceListResponse> DescribeWorkspaceListOutcome;
                typedef std::future<DescribeWorkspaceListOutcome> DescribeWorkspaceListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeWorkspaceListRequest&, DescribeWorkspaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWorkspaceUserListResponse> DescribeWorkspaceUserListOutcome;
                typedef std::future<DescribeWorkspaceUserListOutcome> DescribeWorkspaceUserListOutcomeCallable;
                typedef std::function<void(const WeilingwithClient*, const Model::DescribeWorkspaceUserListRequest&, DescribeWorkspaceUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWorkspaceUserListAsyncHandler;



                /**
                 *查询指定空间关联的应用列表
                 * @param req DescribeApplicationListRequest
                 * @return DescribeApplicationListOutcome
                 */
                DescribeApplicationListOutcome DescribeApplicationList(const Model::DescribeApplicationListRequest &request);
                void DescribeApplicationListAsync(const Model::DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationListOutcomeCallable DescribeApplicationListCallable(const Model::DescribeApplicationListRequest& request);

                /**
                 *查询边缘应用凭证
                 * @param req DescribeEdgeApplicationTokenRequest
                 * @return DescribeEdgeApplicationTokenOutcome
                 */
                DescribeEdgeApplicationTokenOutcome DescribeEdgeApplicationToken(const Model::DescribeEdgeApplicationTokenRequest &request);
                void DescribeEdgeApplicationTokenAsync(const Model::DescribeEdgeApplicationTokenRequest& request, const DescribeEdgeApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeApplicationTokenOutcomeCallable DescribeEdgeApplicationTokenCallable(const Model::DescribeEdgeApplicationTokenRequest& request);

                /**
                 *查询接口列表
                 * @param req DescribeInterfaceListRequest
                 * @return DescribeInterfaceListOutcome
                 */
                DescribeInterfaceListOutcome DescribeInterfaceList(const Model::DescribeInterfaceListRequest &request);
                void DescribeInterfaceListAsync(const Model::DescribeInterfaceListRequest& request, const DescribeInterfaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInterfaceListOutcomeCallable DescribeInterfaceListCallable(const Model::DescribeInterfaceListRequest& request);

                /**
                 *获取租户下的空间列表
                 * @param req DescribeWorkspaceListRequest
                 * @return DescribeWorkspaceListOutcome
                 */
                DescribeWorkspaceListOutcome DescribeWorkspaceList(const Model::DescribeWorkspaceListRequest &request);
                void DescribeWorkspaceListAsync(const Model::DescribeWorkspaceListRequest& request, const DescribeWorkspaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceListOutcomeCallable DescribeWorkspaceListCallable(const Model::DescribeWorkspaceListRequest& request);

                /**
                 *查询项目空间人员列表
                 * @param req DescribeWorkspaceUserListRequest
                 * @return DescribeWorkspaceUserListOutcome
                 */
                DescribeWorkspaceUserListOutcome DescribeWorkspaceUserList(const Model::DescribeWorkspaceUserListRequest &request);
                void DescribeWorkspaceUserListAsync(const Model::DescribeWorkspaceUserListRequest& request, const DescribeWorkspaceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWorkspaceUserListOutcomeCallable DescribeWorkspaceUserListCallable(const Model::DescribeWorkspaceUserListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_WEILINGWITHCLIENT_H_
