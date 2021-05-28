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
#include <tencentcloud/ecdn/v20191012/model/AddEcdnDomainRequest.h>
#include <tencentcloud/ecdn/v20191012/model/AddEcdnDomainResponse.h>
#include <tencentcloud/ecdn/v20191012/model/CreateVerifyRecordRequest.h>
#include <tencentcloud/ecdn/v20191012/model/CreateVerifyRecordResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DeleteEcdnDomainRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DeleteEcdnDomainResponse.h>
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
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeQuotaRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeQuotaResponse.h>
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/ecdn/v20191012/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/ecdn/v20191012/model/PurgePathCacheRequest.h>
#include <tencentcloud/ecdn/v20191012/model/PurgePathCacheResponse.h>
#include <tencentcloud/ecdn/v20191012/model/PurgeUrlsCacheRequest.h>
#include <tencentcloud/ecdn/v20191012/model/PurgeUrlsCacheResponse.h>
#include <tencentcloud/ecdn/v20191012/model/StartEcdnDomainRequest.h>
#include <tencentcloud/ecdn/v20191012/model/StartEcdnDomainResponse.h>
#include <tencentcloud/ecdn/v20191012/model/StopEcdnDomainRequest.h>
#include <tencentcloud/ecdn/v20191012/model/StopEcdnDomainResponse.h>
#include <tencentcloud/ecdn/v20191012/model/UpdateDomainConfigRequest.h>
#include <tencentcloud/ecdn/v20191012/model/UpdateDomainConfigResponse.h>


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

                typedef Outcome<Error, Model::AddEcdnDomainResponse> AddEcdnDomainOutcome;
                typedef std::future<AddEcdnDomainOutcome> AddEcdnDomainOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::AddEcdnDomainRequest&, AddEcdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEcdnDomainAsyncHandler;
                typedef Outcome<Error, Model::CreateVerifyRecordResponse> CreateVerifyRecordOutcome;
                typedef std::future<CreateVerifyRecordOutcome> CreateVerifyRecordOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::CreateVerifyRecordRequest&, CreateVerifyRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifyRecordAsyncHandler;
                typedef Outcome<Error, Model::DeleteEcdnDomainResponse> DeleteEcdnDomainOutcome;
                typedef std::future<DeleteEcdnDomainOutcome> DeleteEcdnDomainOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DeleteEcdnDomainRequest&, DeleteEcdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEcdnDomainAsyncHandler;
                typedef Outcome<Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDomainsConfigResponse> DescribeDomainsConfigOutcome;
                typedef std::future<DescribeDomainsConfigOutcome> DescribeDomainsConfigOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeDomainsConfigRequest&, DescribeDomainsConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeEcdnDomainLogsResponse> DescribeEcdnDomainLogsOutcome;
                typedef std::future<DescribeEcdnDomainLogsOutcome> DescribeEcdnDomainLogsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeEcdnDomainLogsRequest&, DescribeEcdnDomainLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcdnDomainLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeEcdnDomainStatisticsResponse> DescribeEcdnDomainStatisticsOutcome;
                typedef std::future<DescribeEcdnDomainStatisticsOutcome> DescribeEcdnDomainStatisticsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeEcdnDomainStatisticsRequest&, DescribeEcdnDomainStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcdnDomainStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeEcdnStatisticsResponse> DescribeEcdnStatisticsOutcome;
                typedef std::future<DescribeEcdnStatisticsOutcome> DescribeEcdnStatisticsOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeEcdnStatisticsRequest&, DescribeEcdnStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEcdnStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeIpStatusResponse> DescribeIpStatusOutcome;
                typedef std::future<DescribeIpStatusOutcome> DescribeIpStatusOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribeIpStatusRequest&, DescribeIpStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribePurgeQuotaResponse> DescribePurgeQuotaOutcome;
                typedef std::future<DescribePurgeQuotaOutcome> DescribePurgeQuotaOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribePurgeQuotaRequest&, DescribePurgeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Error, Model::PurgePathCacheResponse> PurgePathCacheOutcome;
                typedef std::future<PurgePathCacheOutcome> PurgePathCacheOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::PurgePathCacheRequest&, PurgePathCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgePathCacheAsyncHandler;
                typedef Outcome<Error, Model::PurgeUrlsCacheResponse> PurgeUrlsCacheOutcome;
                typedef std::future<PurgeUrlsCacheOutcome> PurgeUrlsCacheOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::PurgeUrlsCacheRequest&, PurgeUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgeUrlsCacheAsyncHandler;
                typedef Outcome<Error, Model::StartEcdnDomainResponse> StartEcdnDomainOutcome;
                typedef std::future<StartEcdnDomainOutcome> StartEcdnDomainOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::StartEcdnDomainRequest&, StartEcdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartEcdnDomainAsyncHandler;
                typedef Outcome<Error, Model::StopEcdnDomainResponse> StopEcdnDomainOutcome;
                typedef std::future<StopEcdnDomainOutcome> StopEcdnDomainOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::StopEcdnDomainRequest&, StopEcdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopEcdnDomainAsyncHandler;
                typedef Outcome<Error, Model::UpdateDomainConfigResponse> UpdateDomainConfigOutcome;
                typedef std::future<UpdateDomainConfigOutcome> UpdateDomainConfigOutcomeCallable;
                typedef std::function<void(const EcdnClient*, const Model::UpdateDomainConfigRequest&, UpdateDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainConfigAsyncHandler;



                /**
                 *本接口（AddEcdnDomain）用于创建加速域名。
                 * @param req AddEcdnDomainRequest
                 * @return AddEcdnDomainOutcome
                 */
                AddEcdnDomainOutcome AddEcdnDomain(const Model::AddEcdnDomainRequest &request);
                void AddEcdnDomainAsync(const Model::AddEcdnDomainRequest& request, const AddEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEcdnDomainOutcomeCallable AddEcdnDomainCallable(const Model::AddEcdnDomainRequest& request);

                /**
                 *生成一条子域名解析，提示客户添加到域名解析上，用于泛域名及域名取回校验归属权
                 * @param req CreateVerifyRecordRequest
                 * @return CreateVerifyRecordOutcome
                 */
                CreateVerifyRecordOutcome CreateVerifyRecord(const Model::CreateVerifyRecordRequest &request);
                void CreateVerifyRecordAsync(const Model::CreateVerifyRecordRequest& request, const CreateVerifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVerifyRecordOutcomeCallable CreateVerifyRecordCallable(const Model::CreateVerifyRecordRequest& request);

                /**
                 *本接口（DeleteEcdnDomain）用于删除指定加速域名。待删除域名必须处于已停用状态。
                 * @param req DeleteEcdnDomainRequest
                 * @return DeleteEcdnDomainOutcome
                 */
                DeleteEcdnDomainOutcome DeleteEcdnDomain(const Model::DeleteEcdnDomainRequest &request);
                void DeleteEcdnDomainAsync(const Model::DeleteEcdnDomainRequest& request, const DeleteEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEcdnDomainOutcomeCallable DeleteEcdnDomainCallable(const Model::DeleteEcdnDomainRequest& request);

                /**
                 *本接口（DescribeDomains）用于查询CDN域名基本信息，包括项目id，状态，业务类型，创建时间，更新时间等。
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *本接口（DescribeDomainsConfig）用于查询CDN加速域名详细配置信息。
                 * @param req DescribeDomainsConfigRequest
                 * @return DescribeDomainsConfigOutcome
                 */
                DescribeDomainsConfigOutcome DescribeDomainsConfig(const Model::DescribeDomainsConfigRequest &request);
                void DescribeDomainsConfigAsync(const Model::DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsConfigOutcomeCallable DescribeDomainsConfigCallable(const Model::DescribeDomainsConfigRequest& request);

                /**
                 *本接口（DescribeEcdnDomainLogs）用于查询域名的访问日志下载地址。
                 * @param req DescribeEcdnDomainLogsRequest
                 * @return DescribeEcdnDomainLogsOutcome
                 */
                DescribeEcdnDomainLogsOutcome DescribeEcdnDomainLogs(const Model::DescribeEcdnDomainLogsRequest &request);
                void DescribeEcdnDomainLogsAsync(const Model::DescribeEcdnDomainLogsRequest& request, const DescribeEcdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEcdnDomainLogsOutcomeCallable DescribeEcdnDomainLogsCallable(const Model::DescribeEcdnDomainLogsRequest& request);

                /**
                 *本接口（DescribeEcdnDomainStatistics）用于查询指定时间段内的域名访问统计指标
                 * @param req DescribeEcdnDomainStatisticsRequest
                 * @return DescribeEcdnDomainStatisticsOutcome
                 */
                DescribeEcdnDomainStatisticsOutcome DescribeEcdnDomainStatistics(const Model::DescribeEcdnDomainStatisticsRequest &request);
                void DescribeEcdnDomainStatisticsAsync(const Model::DescribeEcdnDomainStatisticsRequest& request, const DescribeEcdnDomainStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEcdnDomainStatisticsOutcomeCallable DescribeEcdnDomainStatisticsCallable(const Model::DescribeEcdnDomainStatisticsRequest& request);

                /**
                 *DescribeEcdnStatistics用于查询 ECDN 实时访问监控数据，支持以下指标查询：

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
                 *DescribeIpStatus 用于查询域名所在加速平台的所有节点信息, 如果您的源站有白名单设置,可以通过本接口获取ECDN服务的节点IP进行加白, 本接口为内测接口,请联系腾讯云工程师开白。

由于产品服务节点常有更新，对于源站开白的使用场景，请定期调用接口获取最新节点信息，若新增服务节点发布7日后您尚未更新加白导致回源失败等问题，ECDN侧不对此承担责任。
                 * @param req DescribeIpStatusRequest
                 * @return DescribeIpStatusOutcome
                 */
                DescribeIpStatusOutcome DescribeIpStatus(const Model::DescribeIpStatusRequest &request);
                void DescribeIpStatusAsync(const Model::DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpStatusOutcomeCallable DescribeIpStatusCallable(const Model::DescribeIpStatusRequest& request);

                /**
                 *查询刷新接口的用量配额。
                 * @param req DescribePurgeQuotaRequest
                 * @return DescribePurgeQuotaOutcome
                 */
                DescribePurgeQuotaOutcome DescribePurgeQuota(const Model::DescribePurgeQuotaRequest &request);
                void DescribePurgeQuotaAsync(const Model::DescribePurgeQuotaRequest& request, const DescribePurgeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeQuotaOutcomeCallable DescribePurgeQuotaCallable(const Model::DescribePurgeQuotaRequest& request);

                /**
                 *DescribePurgeTasks 用于查询刷新任务提交历史记录及执行进度。
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *PurgePathCache 用于批量刷新目录缓存，一次提交将返回一个刷新任务id。
                 * @param req PurgePathCacheRequest
                 * @return PurgePathCacheOutcome
                 */
                PurgePathCacheOutcome PurgePathCache(const Model::PurgePathCacheRequest &request);
                void PurgePathCacheAsync(const Model::PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgePathCacheOutcomeCallable PurgePathCacheCallable(const Model::PurgePathCacheRequest& request);

                /**
                 *PurgeUrlsCache 用于批量刷新Url，一次提交将返回一个刷新任务id。
                 * @param req PurgeUrlsCacheRequest
                 * @return PurgeUrlsCacheOutcome
                 */
                PurgeUrlsCacheOutcome PurgeUrlsCache(const Model::PurgeUrlsCacheRequest &request);
                void PurgeUrlsCacheAsync(const Model::PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgeUrlsCacheOutcomeCallable PurgeUrlsCacheCallable(const Model::PurgeUrlsCacheRequest& request);

                /**
                 *本接口（StartEcdnDomain）用于启用加速域名，待启用域名必须处于已下线状态。
                 * @param req StartEcdnDomainRequest
                 * @return StartEcdnDomainOutcome
                 */
                StartEcdnDomainOutcome StartEcdnDomain(const Model::StartEcdnDomainRequest &request);
                void StartEcdnDomainAsync(const Model::StartEcdnDomainRequest& request, const StartEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartEcdnDomainOutcomeCallable StartEcdnDomainCallable(const Model::StartEcdnDomainRequest& request);

                /**
                 *本接口（StopCdnDomain）用于停止加速域名，待停用加速域名必须处于已上线或部署中状态。
                 * @param req StopEcdnDomainRequest
                 * @return StopEcdnDomainOutcome
                 */
                StopEcdnDomainOutcome StopEcdnDomain(const Model::StopEcdnDomainRequest &request);
                void StopEcdnDomainAsync(const Model::StopEcdnDomainRequest& request, const StopEcdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopEcdnDomainOutcomeCallable StopEcdnDomainCallable(const Model::StopEcdnDomainRequest& request);

                /**
                 *本接口（UpdateDomainConfig）用于更新ECDN加速域名配置信息。
注意：如果需要更新复杂类型的配置项，必须传递整个对象的所有属性，未传递的属性将使用默认值。建议通过查询接口获取配置属性后，直接修改后传递给本接口。Https配置由于证书的特殊性，更新时不用传递证书和密钥字段。
                 * @param req UpdateDomainConfigRequest
                 * @return UpdateDomainConfigOutcome
                 */
                UpdateDomainConfigOutcome UpdateDomainConfig(const Model::UpdateDomainConfigRequest &request);
                void UpdateDomainConfigAsync(const Model::UpdateDomainConfigRequest& request, const UpdateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDomainConfigOutcomeCallable UpdateDomainConfigCallable(const Model::UpdateDomainConfigRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_ECDNCLIENT_H_
