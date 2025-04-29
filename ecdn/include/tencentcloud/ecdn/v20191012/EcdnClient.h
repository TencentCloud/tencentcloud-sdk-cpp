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

#ifndef TENCENTCLOUD_ECDN_V20191012_ECDNCLIENT_H_
#define TENCENTCLOUD_ECDN_V20191012_ECDNCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeDomainsRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeDomainsResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeDomainsConfigRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeDomainsConfigResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainLogsRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainLogsResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainStatisticsRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainStatisticsResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnStatisticsRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnStatisticsResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeIpStatusRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribeIpStatusResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/ecdn/v20191012/model/PurgeUrlsCacheRequest.h>
#include <tencentcloud/ecdn/v20191012/model/PurgeUrlsCacheResponse.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            class EcdnClient : public AbstractClient
            {
            public:
                EcdnClient(const Credential &credential, const std::string &region);
                EcdnClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsConfigResponse> DescribeDomainsConfigOutcome;
                typedef std::future<DescribeDomainsConfigOutcome> DescribeDomainsConfigOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeDomainsConfigRequest&, DescribeDomainsConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEcdnDomainLogsResponse> DescribeEcdnDomainLogsOutcome;
                typedef std::future<DescribeEcdnDomainLogsOutcome> DescribeEcdnDomainLogsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeEcdnDomainLogsRequest&, DescribeEcdnDomainLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcdnDomainLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEcdnDomainStatisticsResponse> DescribeEcdnDomainStatisticsOutcome;
                typedef std::future<DescribeEcdnDomainStatisticsOutcome> DescribeEcdnDomainStatisticsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeEcdnDomainStatisticsRequest&, DescribeEcdnDomainStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcdnDomainStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEcdnStatisticsResponse> DescribeEcdnStatisticsOutcome;
                typedef std::future<DescribeEcdnStatisticsOutcome> DescribeEcdnStatisticsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeEcdnStatisticsRequest&, DescribeEcdnStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcdnStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpStatusResponse> DescribeIpStatusOutcome;
                typedef std::future<DescribeIpStatusOutcome> DescribeIpStatusOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeIpStatusRequest&, DescribeIpStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::PurgeUrlsCacheResponse> PurgeUrlsCacheOutcome;
                typedef std::future<PurgeUrlsCacheOutcome> PurgeUrlsCacheOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::PurgeUrlsCacheRequest&, PurgeUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgeUrlsCacheAsyncHandler;



                /**
                 *ECDN平台下线，接口开始预下线处理

本接口（DescribeDomains）用于查询CDN域名基本信息，包括项目id，状态，业务类型，创建时间，更新时间等。

>?  若您的业务已迁移至 CDN 控制台，请参考<a href="https://cloud.tencent.com/document/api/228/41118"> CDN 接口文档</a>，使用  CDN 相关API 进行操作。
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *ECDN平台下线，接口开始预下线处理

本接口（DescribeDomainsConfig）用于查询CDN加速域名详细配置信息。

>?  若您的业务已迁移至 CDN 控制台，请参考<a href="https://cloud.tencent.com/document/api/228/41117"> CDN 接口文档</a>，使用  CDN 相关API 进行操作。
                 * @param req DescribeDomainsConfigRequest
                 * @return DescribeDomainsConfigOutcome
                 */
                DescribeDomainsConfigOutcome DescribeDomainsConfig(const Model::DescribeDomainsConfigRequest &request);
                void DescribeDomainsConfigAsync(const Model::DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsConfigOutcomeCallable DescribeDomainsConfigCallable(const Model::DescribeDomainsConfigRequest& request);

                /**
                 *ECDN平台下线，接口开始预下线处理

本接口（DescribeEcdnDomainLogs）用于查询域名的访问日志下载地址。
                 * @param req DescribeEcdnDomainLogsRequest
                 * @return DescribeEcdnDomainLogsOutcome
                 */
                DescribeEcdnDomainLogsOutcome DescribeEcdnDomainLogs(const Model::DescribeEcdnDomainLogsRequest &request);
                void DescribeEcdnDomainLogsAsync(const Model::DescribeEcdnDomainLogsRequest& request, const DescribeEcdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEcdnDomainLogsOutcomeCallable DescribeEcdnDomainLogsCallable(const Model::DescribeEcdnDomainLogsRequest& request);

                /**
                 *ECDN平台下线，接口开始预下线处理

本接口（DescribeEcdnDomainStatistics）用于查询指定时间段内的域名访问统计指标。

>?  若您的业务已迁移至 CDN 控制台，请参考<a href="https://cloud.tencent.com/document/api/228/30986"> CDN 接口文档</a>，使用  CDN 相关API 进行操作。
                 * @param req DescribeEcdnDomainStatisticsRequest
                 * @return DescribeEcdnDomainStatisticsOutcome
                 */
                DescribeEcdnDomainStatisticsOutcome DescribeEcdnDomainStatistics(const Model::DescribeEcdnDomainStatisticsRequest &request);
                void DescribeEcdnDomainStatisticsAsync(const Model::DescribeEcdnDomainStatisticsRequest& request, const DescribeEcdnDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEcdnDomainStatisticsOutcomeCallable DescribeEcdnDomainStatisticsCallable(const Model::DescribeEcdnDomainStatisticsRequest& request);

                /**
                 *ECDN平台下线，接口开始预下线处理

DescribeEcdnStatistics用于查询 ECDN 实时访问监控数据，支持以下指标查询：

+ 流量（单位为 byte）
+ 带宽（单位为 bps）
+ 请求数（单位为 次）
+ 状态码 2xx 汇总及各 2 开头状态码明细（单位为 个）
+ 状态码 3xx 汇总及各 3 开头状态码明细（单位为 个）
+ 状态码 4xx 汇总及各 4 开头状态码明细（单位为 个）
+ 状态码 5xx 汇总及各 5 开头状态码明细（单位为 个）
                 * @param req DescribeEcdnStatisticsRequest
                 * @return DescribeEcdnStatisticsOutcome
                 */
                DescribeEcdnStatisticsOutcome DescribeEcdnStatistics(const Model::DescribeEcdnStatisticsRequest &request);
                void DescribeEcdnStatisticsAsync(const Model::DescribeEcdnStatisticsRequest& request, const DescribeEcdnStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEcdnStatisticsOutcomeCallable DescribeEcdnStatisticsCallable(const Model::DescribeEcdnStatisticsRequest& request);

                /**
                 *ECDN平台下线，接口开始预下线处理

DescribeIpStatus 用于查询域名所在加速平台的所有节点信息, 如果您的源站有白名单设置,可以通过本接口获取ECDN服务的节点IP进行加白, 本接口为内测接口,请联系腾讯云工程师开白。

由于产品服务节点常有更新，对于源站开白的使用场景，请定期调用接口获取最新节点信息，若新增服务节点发布7日后您尚未更新加白导致回源失败等问题，ECDN侧不对此承担责任。
                 * @param req DescribeIpStatusRequest
                 * @return DescribeIpStatusOutcome
                 */
                DescribeIpStatusOutcome DescribeIpStatus(const Model::DescribeIpStatusRequest &request);
                void DescribeIpStatusAsync(const Model::DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpStatusOutcomeCallable DescribeIpStatusCallable(const Model::DescribeIpStatusRequest& request);

                /**
                 *ECDN即将下线，如需要动态加速请使用EdgeOne

DescribePurgeTasks 用于查询刷新任务提交历史记录及执行进度。

>?  若您的业务已迁移至 CDN 控制台，请参考<a href="https://cloud.tencent.com/document/api/228/37873"> CDN 接口文档</a>，使用  CDN 相关API 进行操作。
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *ECDN即将下线，如需要动态加速请使用EdgeOne

PurgeUrlsCache 用于批量刷新Url，一次提交将返回一个刷新任务id。

>?  若您的业务已迁移至 CDN 控制台，请参考<a href="https://cloud.tencent.com/document/api/228/37870"> CDN 接口文档</a>，使用  CDN 相关API 进行操作。
                 * @param req PurgeUrlsCacheRequest
                 * @return PurgeUrlsCacheOutcome
                 */
                PurgeUrlsCacheOutcome PurgeUrlsCache(const Model::PurgeUrlsCacheRequest &request);
                void PurgeUrlsCacheAsync(const Model::PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgeUrlsCacheOutcomeCallable PurgeUrlsCacheCallable(const Model::PurgeUrlsCacheRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_ECDNCLIENT_H_
