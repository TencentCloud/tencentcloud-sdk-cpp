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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_SSLPODCLIENT_H_
#define TENCENTCLOUD_SSLPOD_V20190605_SSLPODCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sslpod/v20190605/model/CreateDomainRequest.h>
#include <tencentcloud/sslpod/v20190605/model/CreateDomainResponse.h>
#include <tencentcloud/sslpod/v20190605/model/DeleteDomainRequest.h>
#include <tencentcloud/sslpod/v20190605/model/DeleteDomainResponse.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeDashboardRequest.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeDashboardResponse.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeDomainCertsRequest.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeDomainCertsResponse.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeDomainTagsRequest.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeDomainTagsResponse.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeDomainsRequest.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeDomainsResponse.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeNoticeInfoRequest.h>
#include <tencentcloud/sslpod/v20190605/model/DescribeNoticeInfoResponse.h>
#include <tencentcloud/sslpod/v20190605/model/ModifyDomainTagsRequest.h>
#include <tencentcloud/sslpod/v20190605/model/ModifyDomainTagsResponse.h>
#include <tencentcloud/sslpod/v20190605/model/RefreshDomainRequest.h>
#include <tencentcloud/sslpod/v20190605/model/RefreshDomainResponse.h>
#include <tencentcloud/sslpod/v20190605/model/ResolveDomainRequest.h>
#include <tencentcloud/sslpod/v20190605/model/ResolveDomainResponse.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            class SslpodClient : public AbstractClient
            {
            public:
                SslpodClient(const Credential &credential, const std::string &region);
                SslpodClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateDomainResponse> CreateDomainOutcome;
                typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::CreateDomainRequest&, CreateDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainResponse> DeleteDomainOutcome;
                typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::DeleteDomainRequest&, DeleteDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDashboardResponse> DescribeDashboardOutcome;
                typedef std::future<DescribeDashboardOutcome> DescribeDashboardOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::DescribeDashboardRequest&, DescribeDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainCertsResponse> DescribeDomainCertsOutcome;
                typedef std::future<DescribeDomainCertsOutcome> DescribeDomainCertsOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::DescribeDomainCertsRequest&, DescribeDomainCertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCertsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainTagsResponse> DescribeDomainTagsOutcome;
                typedef std::future<DescribeDomainTagsOutcome> DescribeDomainTagsOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::DescribeDomainTagsRequest&, DescribeDomainTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNoticeInfoResponse> DescribeNoticeInfoOutcome;
                typedef std::future<DescribeNoticeInfoOutcome> DescribeNoticeInfoOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::DescribeNoticeInfoRequest&, DescribeNoticeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoticeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainTagsResponse> ModifyDomainTagsOutcome;
                typedef std::future<ModifyDomainTagsOutcome> ModifyDomainTagsOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::ModifyDomainTagsRequest&, ModifyDomainTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::RefreshDomainResponse> RefreshDomainOutcome;
                typedef std::future<RefreshDomainOutcome> RefreshDomainOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::RefreshDomainRequest&, RefreshDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ResolveDomainResponse> ResolveDomainOutcome;
                typedef std::future<ResolveDomainOutcome> ResolveDomainOutcomeCallable;
                typedef std::function<void(const SslpodClient*, const Model::ResolveDomainRequest&, ResolveDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResolveDomainAsyncHandler;



                /**
                 *通过域名端口添加监控
                 * @param req CreateDomainRequest
                 * @return CreateDomainOutcome
                 */
                CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest &request);
                void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request);

                /**
                 *通过域名ID删除监控的域名
                 * @param req DeleteDomainRequest
                 * @return DeleteDomainOutcome
                 */
                DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest &request);
                void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request);

                /**
                 *获取仪表盘数据
                 * @param req DescribeDashboardRequest
                 * @return DescribeDashboardOutcome
                 */
                DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest &request);
                void DescribeDashboardAsync(const Model::DescribeDashboardRequest& request, const DescribeDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDashboardOutcomeCallable DescribeDashboardCallable(const Model::DescribeDashboardRequest& request);

                /**
                 *获取域名关联证书
                 * @param req DescribeDomainCertsRequest
                 * @return DescribeDomainCertsOutcome
                 */
                DescribeDomainCertsOutcome DescribeDomainCerts(const Model::DescribeDomainCertsRequest &request);
                void DescribeDomainCertsAsync(const Model::DescribeDomainCertsRequest& request, const DescribeDomainCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainCertsOutcomeCallable DescribeDomainCertsCallable(const Model::DescribeDomainCertsRequest& request);

                /**
                 *获取账号下所有tag
                 * @param req DescribeDomainTagsRequest
                 * @return DescribeDomainTagsOutcome
                 */
                DescribeDomainTagsOutcome DescribeDomainTags(const Model::DescribeDomainTagsRequest &request);
                void DescribeDomainTagsAsync(const Model::DescribeDomainTagsRequest& request, const DescribeDomainTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainTagsOutcomeCallable DescribeDomainTagsCallable(const Model::DescribeDomainTagsRequest& request);

                /**
                 *通过searchType搜索已经添加的域名
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *获取通知额度信息
                 * @param req DescribeNoticeInfoRequest
                 * @return DescribeNoticeInfoOutcome
                 */
                DescribeNoticeInfoOutcome DescribeNoticeInfo(const Model::DescribeNoticeInfoRequest &request);
                void DescribeNoticeInfoAsync(const Model::DescribeNoticeInfoRequest& request, const DescribeNoticeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNoticeInfoOutcomeCallable DescribeNoticeInfoCallable(const Model::DescribeNoticeInfoRequest& request);

                /**
                 *修改域名tag
                 * @param req ModifyDomainTagsRequest
                 * @return ModifyDomainTagsOutcome
                 */
                ModifyDomainTagsOutcome ModifyDomainTags(const Model::ModifyDomainTagsRequest &request);
                void ModifyDomainTagsAsync(const Model::ModifyDomainTagsRequest& request, const ModifyDomainTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainTagsOutcomeCallable ModifyDomainTagsCallable(const Model::ModifyDomainTagsRequest& request);

                /**
                 *强制重新检测域名
                 * @param req RefreshDomainRequest
                 * @return RefreshDomainOutcome
                 */
                RefreshDomainOutcome RefreshDomain(const Model::RefreshDomainRequest &request);
                void RefreshDomainAsync(const Model::RefreshDomainRequest& request, const RefreshDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshDomainOutcomeCallable RefreshDomainCallable(const Model::RefreshDomainRequest& request);

                /**
                 *解析域名获得多个IP地址
                 * @param req ResolveDomainRequest
                 * @return ResolveDomainOutcome
                 */
                ResolveDomainOutcome ResolveDomain(const Model::ResolveDomainRequest &request);
                void ResolveDomainAsync(const Model::ResolveDomainRequest& request, const ResolveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResolveDomainOutcomeCallable ResolveDomainCallable(const Model::ResolveDomainRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_SSLPODCLIENT_H_
