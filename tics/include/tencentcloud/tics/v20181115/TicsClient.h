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

#ifndef TENCENTCLOUD_TICS_V20181115_TICSCLIENT_H_
#define TENCENTCLOUD_TICS_V20181115_TICSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tics/v20181115/model/DescribeDomainInfoRequest.h>
#include <tencentcloud/tics/v20181115/model/DescribeDomainInfoResponse.h>
#include <tencentcloud/tics/v20181115/model/DescribeFileInfoRequest.h>
#include <tencentcloud/tics/v20181115/model/DescribeFileInfoResponse.h>
#include <tencentcloud/tics/v20181115/model/DescribeIpInfoRequest.h>
#include <tencentcloud/tics/v20181115/model/DescribeIpInfoResponse.h>
#include <tencentcloud/tics/v20181115/model/DescribeThreatInfoRequest.h>
#include <tencentcloud/tics/v20181115/model/DescribeThreatInfoResponse.h>


namespace TencentCloud
{
    namespace Tics
    {
        namespace V20181115
        {
            class TicsClient : public AbstractClient
            {
            public:
                TicsClient(const Credential &credential, const std::string &region);
                TicsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeDomainInfoResponse> DescribeDomainInfoOutcome;
                typedef std::future<DescribeDomainInfoOutcome> DescribeDomainInfoOutcomeCallable;
                typedef std::function<void(const TicsClient*, const Model::DescribeDomainInfoRequest&, DescribeDomainInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileInfoResponse> DescribeFileInfoOutcome;
                typedef std::future<DescribeFileInfoOutcome> DescribeFileInfoOutcomeCallable;
                typedef std::function<void(const TicsClient*, const Model::DescribeFileInfoRequest&, DescribeFileInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpInfoResponse> DescribeIpInfoOutcome;
                typedef std::future<DescribeIpInfoOutcome> DescribeIpInfoOutcomeCallable;
                typedef std::function<void(const TicsClient*, const Model::DescribeIpInfoRequest&, DescribeIpInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeThreatInfoResponse> DescribeThreatInfoOutcome;
                typedef std::future<DescribeThreatInfoOutcome> DescribeThreatInfoOutcomeCallable;
                typedef std::function<void(const TicsClient*, const Model::DescribeThreatInfoRequest&, DescribeThreatInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeThreatInfoAsyncHandler;



                /**
                 *提供域名相关的基础信息以及与攻击事件（团伙、家族）、恶意文件等相关联信息。
                 * @param req DescribeDomainInfoRequest
                 * @return DescribeDomainInfoOutcome
                 */
                DescribeDomainInfoOutcome DescribeDomainInfo(const Model::DescribeDomainInfoRequest &request);
                void DescribeDomainInfoAsync(const Model::DescribeDomainInfoRequest& request, const DescribeDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainInfoOutcomeCallable DescribeDomainInfoCallable(const Model::DescribeDomainInfoRequest& request);

                /**
                 *提供文件相关的基础信息以及与攻击事件（团伙、家族）、恶意文件等相关联信息。
                 * @param req DescribeFileInfoRequest
                 * @return DescribeFileInfoOutcome
                 */
                DescribeFileInfoOutcome DescribeFileInfo(const Model::DescribeFileInfoRequest &request);
                void DescribeFileInfoAsync(const Model::DescribeFileInfoRequest& request, const DescribeFileInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileInfoOutcomeCallable DescribeFileInfoCallable(const Model::DescribeFileInfoRequest& request);

                /**
                 *提供IP相关的基础信息以及与攻击事件（团伙、家族）、恶意文件等相关联信息。
                 * @param req DescribeIpInfoRequest
                 * @return DescribeIpInfoOutcome
                 */
                DescribeIpInfoOutcome DescribeIpInfo(const Model::DescribeIpInfoRequest &request);
                void DescribeIpInfoAsync(const Model::DescribeIpInfoRequest& request, const DescribeIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpInfoOutcomeCallable DescribeIpInfoCallable(const Model::DescribeIpInfoRequest& request);

                /**
                 *提供IP和域名相关威胁情报信息查询，这些信息可以辅助检测失陷主机、帮助SIEM/SOC等系统做研判决策、帮助运营团队对设备报警的编排处理。
                 * @param req DescribeThreatInfoRequest
                 * @return DescribeThreatInfoOutcome
                 */
                DescribeThreatInfoOutcome DescribeThreatInfo(const Model::DescribeThreatInfoRequest &request);
                void DescribeThreatInfoAsync(const Model::DescribeThreatInfoRequest& request, const DescribeThreatInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeThreatInfoOutcomeCallable DescribeThreatInfoCallable(const Model::DescribeThreatInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TICS_V20181115_TICSCLIENT_H_
