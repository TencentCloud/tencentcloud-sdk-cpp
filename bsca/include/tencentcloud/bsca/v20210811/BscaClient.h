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

#ifndef TENCENTCLOUD_BSCA_V20210811_BSCACLIENT_H_
#define TENCENTCLOUD_BSCA_V20210811_BSCACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBComponentRequest.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBComponentResponse.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBComponentVersionListRequest.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBComponentVersionListResponse.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBComponentVulnerabilityRequest.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBComponentVulnerabilityResponse.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBLicenseRequest.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBLicenseResponse.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBVulnerabilityRequest.h>
#include <tencentcloud/bsca/v20210811/model/DescribeKBVulnerabilityResponse.h>
#include <tencentcloud/bsca/v20210811/model/MatchKBPURLListRequest.h>
#include <tencentcloud/bsca/v20210811/model/MatchKBPURLListResponse.h>
#include <tencentcloud/bsca/v20210811/model/SearchKBComponentRequest.h>
#include <tencentcloud/bsca/v20210811/model/SearchKBComponentResponse.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            class BscaClient : public AbstractClient
            {
            public:
                BscaClient(const Credential &credential, const std::string &region);
                BscaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeKBComponentResponse> DescribeKBComponentOutcome;
                typedef std::future<DescribeKBComponentOutcome> DescribeKBComponentOutcomeCallable;
                typedef std::function<void(const BscaClient*, const Model::DescribeKBComponentRequest&, DescribeKBComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBComponentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBComponentVersionListResponse> DescribeKBComponentVersionListOutcome;
                typedef std::future<DescribeKBComponentVersionListOutcome> DescribeKBComponentVersionListOutcomeCallable;
                typedef std::function<void(const BscaClient*, const Model::DescribeKBComponentVersionListRequest&, DescribeKBComponentVersionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBComponentVersionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBComponentVulnerabilityResponse> DescribeKBComponentVulnerabilityOutcome;
                typedef std::future<DescribeKBComponentVulnerabilityOutcome> DescribeKBComponentVulnerabilityOutcomeCallable;
                typedef std::function<void(const BscaClient*, const Model::DescribeKBComponentVulnerabilityRequest&, DescribeKBComponentVulnerabilityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBComponentVulnerabilityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBLicenseResponse> DescribeKBLicenseOutcome;
                typedef std::future<DescribeKBLicenseOutcome> DescribeKBLicenseOutcomeCallable;
                typedef std::function<void(const BscaClient*, const Model::DescribeKBLicenseRequest&, DescribeKBLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKBVulnerabilityResponse> DescribeKBVulnerabilityOutcome;
                typedef std::future<DescribeKBVulnerabilityOutcome> DescribeKBVulnerabilityOutcomeCallable;
                typedef std::function<void(const BscaClient*, const Model::DescribeKBVulnerabilityRequest&, DescribeKBVulnerabilityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKBVulnerabilityAsyncHandler;
                typedef Outcome<Core::Error, Model::MatchKBPURLListResponse> MatchKBPURLListOutcome;
                typedef std::future<MatchKBPURLListOutcome> MatchKBPURLListOutcomeCallable;
                typedef std::function<void(const BscaClient*, const Model::MatchKBPURLListRequest&, MatchKBPURLListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MatchKBPURLListAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchKBComponentResponse> SearchKBComponentOutcome;
                typedef std::future<SearchKBComponentOutcome> SearchKBComponentOutcomeCallable;
                typedef std::function<void(const BscaClient*, const Model::SearchKBComponentRequest&, SearchKBComponentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchKBComponentAsyncHandler;



                /**
                 *本接口(DescribeKBComponent)用于在知识库中查询开源组件信息。本接口根据用户输入的PURL在知识库中寻找对应的开源组件，其中Name为必填字段。
                 * @param req DescribeKBComponentRequest
                 * @return DescribeKBComponentOutcome
                 */
                DescribeKBComponentOutcome DescribeKBComponent(const Model::DescribeKBComponentRequest &request);
                void DescribeKBComponentAsync(const Model::DescribeKBComponentRequest& request, const DescribeKBComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBComponentOutcomeCallable DescribeKBComponentCallable(const Model::DescribeKBComponentRequest& request);

                /**
                 *查询特定组件的版本列表
                 * @param req DescribeKBComponentVersionListRequest
                 * @return DescribeKBComponentVersionListOutcome
                 */
                DescribeKBComponentVersionListOutcome DescribeKBComponentVersionList(const Model::DescribeKBComponentVersionListRequest &request);
                void DescribeKBComponentVersionListAsync(const Model::DescribeKBComponentVersionListRequest& request, const DescribeKBComponentVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBComponentVersionListOutcomeCallable DescribeKBComponentVersionListCallable(const Model::DescribeKBComponentVersionListRequest& request);

                /**
                 *本接口(DescribeKBComponentVulnerability)用于在知识库中查询开源组件的漏洞信息。
                 * @param req DescribeKBComponentVulnerabilityRequest
                 * @return DescribeKBComponentVulnerabilityOutcome
                 */
                DescribeKBComponentVulnerabilityOutcome DescribeKBComponentVulnerability(const Model::DescribeKBComponentVulnerabilityRequest &request);
                void DescribeKBComponentVulnerabilityAsync(const Model::DescribeKBComponentVulnerabilityRequest& request, const DescribeKBComponentVulnerabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBComponentVulnerabilityOutcomeCallable DescribeKBComponentVulnerabilityCallable(const Model::DescribeKBComponentVulnerabilityRequest& request);

                /**
                 *本接口(DescribeKBLicense)用于在知识库中查询许可证信息。
                 * @param req DescribeKBLicenseRequest
                 * @return DescribeKBLicenseOutcome
                 */
                DescribeKBLicenseOutcome DescribeKBLicense(const Model::DescribeKBLicenseRequest &request);
                void DescribeKBLicenseAsync(const Model::DescribeKBLicenseRequest& request, const DescribeKBLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBLicenseOutcomeCallable DescribeKBLicenseCallable(const Model::DescribeKBLicenseRequest& request);

                /**
                 *本接口(DescribeKBVulnerability)用于在知识库中查询漏洞详细信息，支持根据CVE、Vul ID、CNVD ID、CNNVD ID查询。
                 * @param req DescribeKBVulnerabilityRequest
                 * @return DescribeKBVulnerabilityOutcome
                 */
                DescribeKBVulnerabilityOutcome DescribeKBVulnerability(const Model::DescribeKBVulnerabilityRequest &request);
                void DescribeKBVulnerabilityAsync(const Model::DescribeKBVulnerabilityRequest& request, const DescribeKBVulnerabilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKBVulnerabilityOutcomeCallable DescribeKBVulnerabilityCallable(const Model::DescribeKBVulnerabilityRequest& request);

                /**
                 *本接口(MatchKBPURLList)用于在知识库中匹配与特征对应的开源组件列表。
                 * @param req MatchKBPURLListRequest
                 * @return MatchKBPURLListOutcome
                 */
                MatchKBPURLListOutcome MatchKBPURLList(const Model::MatchKBPURLListRequest &request);
                void MatchKBPURLListAsync(const Model::MatchKBPURLListRequest& request, const MatchKBPURLListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MatchKBPURLListOutcomeCallable MatchKBPURLListCallable(const Model::MatchKBPURLListRequest& request);

                /**
                 *根据输入的组件名、组件类型搜索相应的组件，返回符合条件的组件列表
                 * @param req SearchKBComponentRequest
                 * @return SearchKBComponentOutcome
                 */
                SearchKBComponentOutcome SearchKBComponent(const Model::SearchKBComponentRequest &request);
                void SearchKBComponentAsync(const Model::SearchKBComponentRequest& request, const SearchKBComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchKBComponentOutcomeCallable SearchKBComponentCallable(const Model::SearchKBComponentRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_BSCACLIENT_H_
