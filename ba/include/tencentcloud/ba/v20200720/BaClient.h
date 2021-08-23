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

#ifndef TENCENTCLOUD_BA_V20200720_BACLIENT_H_
#define TENCENTCLOUD_BA_V20200720_BACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ba/v20200720/model/CreateWeappQRUrlRequest.h>
#include <tencentcloud/ba/v20200720/model/CreateWeappQRUrlResponse.h>
#include <tencentcloud/ba/v20200720/model/DescribeGetAuthInfoRequest.h>
#include <tencentcloud/ba/v20200720/model/DescribeGetAuthInfoResponse.h>
#include <tencentcloud/ba/v20200720/model/SyncIcpOrderWebInfoRequest.h>
#include <tencentcloud/ba/v20200720/model/SyncIcpOrderWebInfoResponse.h>


namespace TencentCloud
{
    namespace Ba
    {
        namespace V20200720
        {
            class BaClient : public AbstractClient
            {
            public:
                BaClient(const Credential &credential, const std::string &region);
                BaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateWeappQRUrlResponse> CreateWeappQRUrlOutcome;
                typedef std::future<CreateWeappQRUrlOutcome> CreateWeappQRUrlOutcomeCallable;
                typedef std::function<void(const BaClient*, const Model::CreateWeappQRUrlRequest&, CreateWeappQRUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWeappQRUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGetAuthInfoResponse> DescribeGetAuthInfoOutcome;
                typedef std::future<DescribeGetAuthInfoOutcome> DescribeGetAuthInfoOutcomeCallable;
                typedef std::function<void(const BaClient*, const Model::DescribeGetAuthInfoRequest&, DescribeGetAuthInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGetAuthInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncIcpOrderWebInfoResponse> SyncIcpOrderWebInfoOutcome;
                typedef std::future<SyncIcpOrderWebInfoOutcome> SyncIcpOrderWebInfoOutcomeCallable;
                typedef std::function<void(const BaClient*, const Model::SyncIcpOrderWebInfoRequest&, SyncIcpOrderWebInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncIcpOrderWebInfoAsyncHandler;



                /**
                 *创建渠道备案小程序二维码
                 * @param req CreateWeappQRUrlRequest
                 * @return CreateWeappQRUrlOutcome
                 */
                CreateWeappQRUrlOutcome CreateWeappQRUrl(const Model::CreateWeappQRUrlRequest &request);
                void CreateWeappQRUrlAsync(const Model::CreateWeappQRUrlRequest& request, const CreateWeappQRUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWeappQRUrlOutcomeCallable CreateWeappQRUrlCallable(const Model::CreateWeappQRUrlRequest& request);

                /**
                 *获取实名认证信息
                 * @param req DescribeGetAuthInfoRequest
                 * @return DescribeGetAuthInfoOutcome
                 */
                DescribeGetAuthInfoOutcome DescribeGetAuthInfo(const Model::DescribeGetAuthInfoRequest &request);
                void DescribeGetAuthInfoAsync(const Model::DescribeGetAuthInfoRequest& request, const DescribeGetAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGetAuthInfoOutcomeCallable DescribeGetAuthInfoCallable(const Model::DescribeGetAuthInfoRequest& request);

                /**
                 *将备案ICP订单下的一个网站信息 同步给订单下其他网站，需要被同步的网站被检查通过(isCheck:true)；
只有指定的网站信息字段能被同步
                 * @param req SyncIcpOrderWebInfoRequest
                 * @return SyncIcpOrderWebInfoOutcome
                 */
                SyncIcpOrderWebInfoOutcome SyncIcpOrderWebInfo(const Model::SyncIcpOrderWebInfoRequest &request);
                void SyncIcpOrderWebInfoAsync(const Model::SyncIcpOrderWebInfoRequest& request, const SyncIcpOrderWebInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncIcpOrderWebInfoOutcomeCallable SyncIcpOrderWebInfoCallable(const Model::SyncIcpOrderWebInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BA_V20200720_BACLIENT_H_
