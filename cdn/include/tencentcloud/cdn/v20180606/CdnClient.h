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

#ifndef TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_
#define TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDomainLogsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDomainLogsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnIpRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnIpResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpVisitRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpVisitResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeMapInfoRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeMapInfoResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePayTypeRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePayTypeResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushTasksRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushTasksResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeTrafficPackagesRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeTrafficPackagesResponse.h>
#include <tencentcloud/cdn/v20180606/model/DisableCachesRequest.h>
#include <tencentcloud/cdn/v20180606/model/DisableCachesResponse.h>
#include <tencentcloud/cdn/v20180606/model/EnableCachesRequest.h>
#include <tencentcloud/cdn/v20180606/model/EnableCachesResponse.h>
#include <tencentcloud/cdn/v20180606/model/GetDisableRecordsRequest.h>
#include <tencentcloud/cdn/v20180606/model/GetDisableRecordsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/PurgeUrlsCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PurgeUrlsCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheResponse.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            class CdnClient : public AbstractClient
            {
            public:
                CdnClient(const Credential &credential, const std::string &region);
                CdnClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeCdnDataResponse> DescribeCdnDataOutcome;
                typedef std::future<DescribeCdnDataOutcome> DescribeCdnDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnDataRequest&, DescribeCdnDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeCdnDomainLogsResponse> DescribeCdnDomainLogsOutcome;
                typedef std::future<DescribeCdnDomainLogsOutcome> DescribeCdnDomainLogsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainLogsRequest&, DescribeCdnDomainLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCdnIpResponse> DescribeCdnIpOutcome;
                typedef std::future<DescribeCdnIpOutcome> DescribeCdnIpOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnIpRequest&, DescribeCdnIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnIpAsyncHandler;
                typedef Outcome<Error, Model::DescribeIpVisitResponse> DescribeIpVisitOutcome;
                typedef std::future<DescribeIpVisitOutcome> DescribeIpVisitOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeIpVisitRequest&, DescribeIpVisitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpVisitAsyncHandler;
                typedef Outcome<Error, Model::DescribeMapInfoResponse> DescribeMapInfoOutcome;
                typedef std::future<DescribeMapInfoOutcome> DescribeMapInfoOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeMapInfoRequest&, DescribeMapInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMapInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeOriginDataResponse> DescribeOriginDataOutcome;
                typedef std::future<DescribeOriginDataOutcome> DescribeOriginDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeOriginDataRequest&, DescribeOriginDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginDataAsyncHandler;
                typedef Outcome<Error, Model::DescribePayTypeResponse> DescribePayTypeOutcome;
                typedef std::future<DescribePayTypeOutcome> DescribePayTypeOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePayTypeRequest&, DescribePayTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePayTypeAsyncHandler;
                typedef Outcome<Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribePushTasksResponse> DescribePushTasksOutcome;
                typedef std::future<DescribePushTasksOutcome> DescribePushTasksOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePushTasksRequest&, DescribePushTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeTrafficPackagesResponse> DescribeTrafficPackagesOutcome;
                typedef std::future<DescribeTrafficPackagesOutcome> DescribeTrafficPackagesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeTrafficPackagesRequest&, DescribeTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficPackagesAsyncHandler;
                typedef Outcome<Error, Model::DisableCachesResponse> DisableCachesOutcome;
                typedef std::future<DisableCachesOutcome> DisableCachesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DisableCachesRequest&, DisableCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCachesAsyncHandler;
                typedef Outcome<Error, Model::EnableCachesResponse> EnableCachesOutcome;
                typedef std::future<EnableCachesOutcome> EnableCachesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::EnableCachesRequest&, EnableCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableCachesAsyncHandler;
                typedef Outcome<Error, Model::GetDisableRecordsResponse> GetDisableRecordsOutcome;
                typedef std::future<GetDisableRecordsOutcome> GetDisableRecordsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::GetDisableRecordsRequest&, GetDisableRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDisableRecordsAsyncHandler;
                typedef Outcome<Error, Model::ListTopDataResponse> ListTopDataOutcome;
                typedef std::future<ListTopDataOutcome> ListTopDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListTopDataRequest&, ListTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopDataAsyncHandler;
                typedef Outcome<Error, Model::PurgePathCacheResponse> PurgePathCacheOutcome;
                typedef std::future<PurgePathCacheOutcome> PurgePathCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PurgePathCacheRequest&, PurgePathCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgePathCacheAsyncHandler;
                typedef Outcome<Error, Model::PurgeUrlsCacheResponse> PurgeUrlsCacheOutcome;
                typedef std::future<PurgeUrlsCacheOutcome> PurgeUrlsCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PurgeUrlsCacheRequest&, PurgeUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgeUrlsCacheAsyncHandler;
                typedef Outcome<Error, Model::PushUrlsCacheResponse> PushUrlsCacheOutcome;
                typedef std::future<PushUrlsCacheOutcome> PushUrlsCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PushUrlsCacheRequest&, PushUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushUrlsCacheAsyncHandler;



                /**
                 *DescribeCdnData 用于查询 CDN 实时访问监控数据，支持以下指标查询：

+ 流量（单位为 byte）
+ 带宽（单位为 bps）
+ 请求数（单位为 次）
+ 流量命中率（单位为 %，小数点后保留两位）
+ 状态码 2xx 汇总及各 2 开头状态码明细（单位为 个）
+ 状态码 3xx 汇总及各 3 开头状态码明细（单位为 个）
+ 状态码 4xx 汇总及各 4 开头状态码明细（单位为 个）
+ 状态码 5xx 汇总及各 5 开头状态码明细（单位为 个）
                 * @param req DescribeCdnDataRequest
                 * @return DescribeCdnDataOutcome
                 */
                DescribeCdnDataOutcome DescribeCdnData(const Model::DescribeCdnDataRequest &request);
                void DescribeCdnDataAsync(const Model::DescribeCdnDataRequest& request, const DescribeCdnDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnDataOutcomeCallable DescribeCdnDataCallable(const Model::DescribeCdnDataRequest& request);

                /**
                 *DescribeCdnDomainLogs 用于查询访问日志下载地址，仅支持 30 天以内的境内、境外访问日志下载链接查询。
                 * @param req DescribeCdnDomainLogsRequest
                 * @return DescribeCdnDomainLogsOutcome
                 */
                DescribeCdnDomainLogsOutcome DescribeCdnDomainLogs(const Model::DescribeCdnDomainLogsRequest &request);
                void DescribeCdnDomainLogsAsync(const Model::DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnDomainLogsOutcomeCallable DescribeCdnDomainLogsCallable(const Model::DescribeCdnDomainLogsRequest& request);

                /**
                 *DescribeCdnIp 用于查询 CDN IP 归属。
                 * @param req DescribeCdnIpRequest
                 * @return DescribeCdnIpOutcome
                 */
                DescribeCdnIpOutcome DescribeCdnIp(const Model::DescribeCdnIpRequest &request);
                void DescribeCdnIpAsync(const Model::DescribeCdnIpRequest& request, const DescribeCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnIpOutcomeCallable DescribeCdnIpCallable(const Model::DescribeCdnIpRequest& request);

                /**
                 *DescribeIpVisit 用于查询 5 分钟活跃用户数，及日活跃用户数明细

+ 5 分钟活跃用户数：根据日志中客户端 IP，5 分钟粒度去重统计
+ 日活跃用户数：根据日志中客户端 IP，按天粒度去重统计
                 * @param req DescribeIpVisitRequest
                 * @return DescribeIpVisitOutcome
                 */
                DescribeIpVisitOutcome DescribeIpVisit(const Model::DescribeIpVisitRequest &request);
                void DescribeIpVisitAsync(const Model::DescribeIpVisitRequest& request, const DescribeIpVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpVisitOutcomeCallable DescribeIpVisitCallable(const Model::DescribeIpVisitRequest& request);

                /**
                 *DescribeMapInfo 用于查询省份对应的 ID，运营商对应的 ID 信息。
                 * @param req DescribeMapInfoRequest
                 * @return DescribeMapInfoOutcome
                 */
                DescribeMapInfoOutcome DescribeMapInfo(const Model::DescribeMapInfoRequest &request);
                void DescribeMapInfoAsync(const Model::DescribeMapInfoRequest& request, const DescribeMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMapInfoOutcomeCallable DescribeMapInfoCallable(const Model::DescribeMapInfoRequest& request);

                /**
                 *DescribeOriginData 用于查询 CDN 实时回源监控数据，支持以下指标查询：

+ 回源流量（单位为 byte）
+ 回源带宽（单位为 bps）
+ 回源请求数（单位为 次）
+ 回源失败请求数（单位为 次）
+ 回源失败率（单位为 %，小数点后保留两位）
+ 回源状态码 2xx 汇总及各 2 开头回源状态码明细（单位为 个）
+ 回源状态码 3xx 汇总及各 3 开头回源状态码明细（单位为 个）
+ 回源状态码 4xx 汇总及各 4 开头回源状态码明细（单位为 个）
+ 回源状态码 5xx 汇总及各 5 开头回源状态码明细（单位为 个）
                 * @param req DescribeOriginDataRequest
                 * @return DescribeOriginDataOutcome
                 */
                DescribeOriginDataOutcome DescribeOriginData(const Model::DescribeOriginDataRequest &request);
                void DescribeOriginDataAsync(const Model::DescribeOriginDataRequest& request, const DescribeOriginDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginDataOutcomeCallable DescribeOriginDataCallable(const Model::DescribeOriginDataRequest& request);

                /**
                 *DescribePayType 用于查询用户的计费类型，计费周期等信息。
                 * @param req DescribePayTypeRequest
                 * @return DescribePayTypeOutcome
                 */
                DescribePayTypeOutcome DescribePayType(const Model::DescribePayTypeRequest &request);
                void DescribePayTypeAsync(const Model::DescribePayTypeRequest& request, const DescribePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePayTypeOutcomeCallable DescribePayTypeCallable(const Model::DescribePayTypeRequest& request);

                /**
                 *DescribePurgeTasks 用于查询提交的 URL 刷新、目录刷新记录及执行进度，通过 PurgePathCache 与 PurgeUrlsCache 接口提交的任务均可通过此接口进行查询。
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *DescribePushTasks  用于查询预热任务提交历史记录及执行进度。
接口灰度中，暂未全量开放，敬请期待。
                 * @param req DescribePushTasksRequest
                 * @return DescribePushTasksOutcome
                 */
                DescribePushTasksOutcome DescribePushTasks(const Model::DescribePushTasksRequest &request);
                void DescribePushTasksAsync(const Model::DescribePushTasksRequest& request, const DescribePushTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePushTasksOutcomeCallable DescribePushTasksCallable(const Model::DescribePushTasksRequest& request);

                /**
                 *DescribeTrafficPackages 用于查询境内 CDN 流量包详情。
                 * @param req DescribeTrafficPackagesRequest
                 * @return DescribeTrafficPackagesOutcome
                 */
                DescribeTrafficPackagesOutcome DescribeTrafficPackages(const Model::DescribeTrafficPackagesRequest &request);
                void DescribeTrafficPackagesAsync(const Model::DescribeTrafficPackagesRequest& request, const DescribeTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficPackagesOutcomeCallable DescribeTrafficPackagesCallable(const Model::DescribeTrafficPackagesRequest& request);

                /**
                 *DisableCaches 用于禁用 CDN 上指定 URL 的访问，禁用完成后，全网访问会直接返回 403。（接口尚在内测中，暂未全量开放使用）
                 * @param req DisableCachesRequest
                 * @return DisableCachesOutcome
                 */
                DisableCachesOutcome DisableCaches(const Model::DisableCachesRequest &request);
                void DisableCachesAsync(const Model::DisableCachesRequest& request, const DisableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCachesOutcomeCallable DisableCachesCallable(const Model::DisableCachesRequest& request);

                /**
                 *EnableCaches 用于解禁手工封禁的 URL，解禁成功后，全网生效时间约 5~10 分钟。（接口尚在内测中，暂未全量开放使用）
                 * @param req EnableCachesRequest
                 * @return EnableCachesOutcome
                 */
                EnableCachesOutcome EnableCaches(const Model::EnableCachesRequest &request);
                void EnableCachesAsync(const Model::EnableCachesRequest& request, const EnableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableCachesOutcomeCallable EnableCachesCallable(const Model::EnableCachesRequest& request);

                /**
                 *GetDisableRecords 用户查询资源禁用历史，及 URL 当前状态。（接口尚在内测中，暂未全量开放使用）
                 * @param req GetDisableRecordsRequest
                 * @return GetDisableRecordsOutcome
                 */
                GetDisableRecordsOutcome GetDisableRecords(const Model::GetDisableRecordsRequest &request);
                void GetDisableRecordsAsync(const Model::GetDisableRecordsRequest& request, const GetDisableRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDisableRecordsOutcomeCallable GetDisableRecordsCallable(const Model::GetDisableRecordsRequest& request);

                /**
                 *ListTopData 通过入参 Metric 和 Filter 组合不同，可以查询以下排序数据：

+ 依据总流量、总请求数对访问 URL 排序，从大至小返回 TOP 1000 URL
+ 依据总流量、总请求数对客户端省份排序，从大至小返回省份列表
+ 依据总流量、总请求数对客户端运营商排序，从大至小返回运营商列表
+ 依据总流量、峰值带宽、总请求数、平均命中率、2XX/3XX/4XX/5XX 状态码对域名排序，从大至小返回域名列表
+ 依据总回源流量、回源峰值带宽、总回源请求数、平均回源失败率、2XX/3XX/4XX/5XX 回源状态码对域名排序，从大至小返回域名列表
                 * @param req ListTopDataRequest
                 * @return ListTopDataOutcome
                 */
                ListTopDataOutcome ListTopData(const Model::ListTopDataRequest &request);
                void ListTopDataAsync(const Model::ListTopDataRequest& request, const ListTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopDataOutcomeCallable ListTopDataCallable(const Model::ListTopDataRequest& request);

                /**
                 *PurgePathCache 用于批量提交目录刷新，根据域名的加速区域进行对应区域的刷新。
默认情况下境内、境外加速区域每日目录刷新额度为各 100 条，每次最多可提交 20 条。
                 * @param req PurgePathCacheRequest
                 * @return PurgePathCacheOutcome
                 */
                PurgePathCacheOutcome PurgePathCache(const Model::PurgePathCacheRequest &request);
                void PurgePathCacheAsync(const Model::PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgePathCacheOutcomeCallable PurgePathCacheCallable(const Model::PurgePathCacheRequest& request);

                /**
                 *PurgeUrlsCache 用于批量提交 URL 进行刷新，根据 URL 中域名的当前加速区域进行对应区域的刷新。
默认情况下境内、境外加速区域每日 URL 刷新额度各为 10000 条，每次最多可提交 1000 条。
                 * @param req PurgeUrlsCacheRequest
                 * @return PurgeUrlsCacheOutcome
                 */
                PurgeUrlsCacheOutcome PurgeUrlsCache(const Model::PurgeUrlsCacheRequest &request);
                void PurgeUrlsCacheAsync(const Model::PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgeUrlsCacheOutcomeCallable PurgeUrlsCacheCallable(const Model::PurgeUrlsCacheRequest& request);

                /**
                 *PushUrlsCache 用于将指定 URL 资源列表加载至 CDN 节点，支持指定加速区域预热。
默认情况下境内、境外每日预热 URL 限额为各 1000 条，每次最多可提交 20 条。
接口灰度中，暂未全量开放，敬请期待。
                 * @param req PushUrlsCacheRequest
                 * @return PushUrlsCacheOutcome
                 */
                PushUrlsCacheOutcome PushUrlsCache(const Model::PushUrlsCacheRequest &request);
                void PushUrlsCacheAsync(const Model::PushUrlsCacheRequest& request, const PushUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushUrlsCacheOutcomeCallable PushUrlsCacheCallable(const Model::PushUrlsCacheRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_
