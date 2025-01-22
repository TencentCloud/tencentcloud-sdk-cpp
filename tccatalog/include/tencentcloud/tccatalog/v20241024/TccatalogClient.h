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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_TCCATALOGCLIENT_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_TCCATALOGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tccatalog/v20241024/model/AcceptTccVpcEndPointConnectRequest.h>
#include <tencentcloud/tccatalog/v20241024/model/AcceptTccVpcEndPointConnectResponse.h>
#include <tencentcloud/tccatalog/v20241024/model/BindTccVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/tccatalog/v20241024/model/BindTccVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/tccatalog/v20241024/model/DescribeTccCatalogRequest.h>
#include <tencentcloud/tccatalog/v20241024/model/DescribeTccCatalogResponse.h>
#include <tencentcloud/tccatalog/v20241024/model/DescribeTccCatalogsRequest.h>
#include <tencentcloud/tccatalog/v20241024/model/DescribeTccCatalogsResponse.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            class TccatalogClient : public AbstractClient
            {
            public:
                TccatalogClient(const Credential &credential, const std::string &region);
                TccatalogClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcceptTccVpcEndPointConnectResponse> AcceptTccVpcEndPointConnectOutcome;
                typedef std::future<AcceptTccVpcEndPointConnectOutcome> AcceptTccVpcEndPointConnectOutcomeCallable;
                typedef std::function<void(const TccatalogClient*, const Model::AcceptTccVpcEndPointConnectRequest&, AcceptTccVpcEndPointConnectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptTccVpcEndPointConnectAsyncHandler;
                typedef Outcome<Core::Error, Model::BindTccVpcEndPointServiceWhiteListResponse> BindTccVpcEndPointServiceWhiteListOutcome;
                typedef std::future<BindTccVpcEndPointServiceWhiteListOutcome> BindTccVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const TccatalogClient*, const Model::BindTccVpcEndPointServiceWhiteListRequest&, BindTccVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindTccVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTccCatalogResponse> DescribeTccCatalogOutcome;
                typedef std::future<DescribeTccCatalogOutcome> DescribeTccCatalogOutcomeCallable;
                typedef std::function<void(const TccatalogClient*, const Model::DescribeTccCatalogRequest&, DescribeTccCatalogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTccCatalogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTccCatalogsResponse> DescribeTccCatalogsOutcome;
                typedef std::future<DescribeTccCatalogsOutcome> DescribeTccCatalogsOutcomeCallable;
                typedef std::function<void(const TccatalogClient*, const Model::DescribeTccCatalogsRequest&, DescribeTccCatalogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTccCatalogsAsyncHandler;



                /**
                 *接受终端节点连接
                 * @param req AcceptTccVpcEndPointConnectRequest
                 * @return AcceptTccVpcEndPointConnectOutcome
                 */
                AcceptTccVpcEndPointConnectOutcome AcceptTccVpcEndPointConnect(const Model::AcceptTccVpcEndPointConnectRequest &request);
                void AcceptTccVpcEndPointConnectAsync(const Model::AcceptTccVpcEndPointConnectRequest& request, const AcceptTccVpcEndPointConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptTccVpcEndPointConnectOutcomeCallable AcceptTccVpcEndPointConnectCallable(const Model::AcceptTccVpcEndPointConnectRequest& request);

                /**
                 *绑定终端节点服务白名单用户
                 * @param req BindTccVpcEndPointServiceWhiteListRequest
                 * @return BindTccVpcEndPointServiceWhiteListOutcome
                 */
                BindTccVpcEndPointServiceWhiteListOutcome BindTccVpcEndPointServiceWhiteList(const Model::BindTccVpcEndPointServiceWhiteListRequest &request);
                void BindTccVpcEndPointServiceWhiteListAsync(const Model::BindTccVpcEndPointServiceWhiteListRequest& request, const BindTccVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindTccVpcEndPointServiceWhiteListOutcomeCallable BindTccVpcEndPointServiceWhiteListCallable(const Model::BindTccVpcEndPointServiceWhiteListRequest& request);

                /**
                 *获取Tcc数据目录详情
                 * @param req DescribeTccCatalogRequest
                 * @return DescribeTccCatalogOutcome
                 */
                DescribeTccCatalogOutcome DescribeTccCatalog(const Model::DescribeTccCatalogRequest &request);
                void DescribeTccCatalogAsync(const Model::DescribeTccCatalogRequest& request, const DescribeTccCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTccCatalogOutcomeCallable DescribeTccCatalogCallable(const Model::DescribeTccCatalogRequest& request);

                /**
                 *获取Tcc数据目录列表
                 * @param req DescribeTccCatalogsRequest
                 * @return DescribeTccCatalogsOutcome
                 */
                DescribeTccCatalogsOutcome DescribeTccCatalogs(const Model::DescribeTccCatalogsRequest &request);
                void DescribeTccCatalogsAsync(const Model::DescribeTccCatalogsRequest& request, const DescribeTccCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTccCatalogsOutcomeCallable DescribeTccCatalogsCallable(const Model::DescribeTccCatalogsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_TCCATALOGCLIENT_H_
