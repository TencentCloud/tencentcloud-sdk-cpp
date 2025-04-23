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

#ifndef TENCENTCLOUD_CDC_V20201214_CDCCLIENT_H_
#define TENCENTCLOUD_CDC_V20201214_CDCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdc/v20201214/model/CreateDedicatedClusterRequest.h>
#include <tencentcloud/cdc/v20201214/model/CreateDedicatedClusterResponse.h>
#include <tencentcloud/cdc/v20201214/model/CreateDedicatedClusterImageCacheRequest.h>
#include <tencentcloud/cdc/v20201214/model/CreateDedicatedClusterImageCacheResponse.h>
#include <tencentcloud/cdc/v20201214/model/CreateDedicatedClusterOrderRequest.h>
#include <tencentcloud/cdc/v20201214/model/CreateDedicatedClusterOrderResponse.h>
#include <tencentcloud/cdc/v20201214/model/CreateSiteRequest.h>
#include <tencentcloud/cdc/v20201214/model/CreateSiteResponse.h>
#include <tencentcloud/cdc/v20201214/model/DeleteDedicatedClusterImageCacheRequest.h>
#include <tencentcloud/cdc/v20201214/model/DeleteDedicatedClusterImageCacheResponse.h>
#include <tencentcloud/cdc/v20201214/model/DeleteDedicatedClustersRequest.h>
#include <tencentcloud/cdc/v20201214/model/DeleteDedicatedClustersResponse.h>
#include <tencentcloud/cdc/v20201214/model/DeleteSitesRequest.h>
#include <tencentcloud/cdc/v20201214/model/DeleteSitesResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterCbsStatisticsRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterCbsStatisticsResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterCosCapacityRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterCosCapacityResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterHostStatisticsRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterHostStatisticsResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterHostsRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterHostsResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterInstanceTypesRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterInstanceTypesResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOrdersRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOrdersResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOverviewRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterOverviewResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterTypesRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterTypesResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClustersRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClustersResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedSupportedZonesRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedSupportedZonesResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeSitesRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeSitesResponse.h>
#include <tencentcloud/cdc/v20201214/model/DescribeSitesDetailRequest.h>
#include <tencentcloud/cdc/v20201214/model/DescribeSitesDetailResponse.h>
#include <tencentcloud/cdc/v20201214/model/ModifyDedicatedClusterInfoRequest.h>
#include <tencentcloud/cdc/v20201214/model/ModifyDedicatedClusterInfoResponse.h>
#include <tencentcloud/cdc/v20201214/model/ModifyOrderStatusRequest.h>
#include <tencentcloud/cdc/v20201214/model/ModifyOrderStatusResponse.h>
#include <tencentcloud/cdc/v20201214/model/ModifySiteDeviceInfoRequest.h>
#include <tencentcloud/cdc/v20201214/model/ModifySiteDeviceInfoResponse.h>
#include <tencentcloud/cdc/v20201214/model/ModifySiteInfoRequest.h>
#include <tencentcloud/cdc/v20201214/model/ModifySiteInfoResponse.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            class CdcClient : public AbstractClient
            {
            public:
                CdcClient(const Credential &credential, const std::string &region);
                CdcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateDedicatedClusterResponse> CreateDedicatedClusterOutcome;
                typedef std::future<CreateDedicatedClusterOutcome> CreateDedicatedClusterOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::CreateDedicatedClusterRequest&, CreateDedicatedClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDedicatedClusterImageCacheResponse> CreateDedicatedClusterImageCacheOutcome;
                typedef std::future<CreateDedicatedClusterImageCacheOutcome> CreateDedicatedClusterImageCacheOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::CreateDedicatedClusterImageCacheRequest&, CreateDedicatedClusterImageCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedClusterImageCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDedicatedClusterOrderResponse> CreateDedicatedClusterOrderOutcome;
                typedef std::future<CreateDedicatedClusterOrderOutcome> CreateDedicatedClusterOrderOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::CreateDedicatedClusterOrderRequest&, CreateDedicatedClusterOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedClusterOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSiteResponse> CreateSiteOutcome;
                typedef std::future<CreateSiteOutcome> CreateSiteOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::CreateSiteRequest&, CreateSiteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSiteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDedicatedClusterImageCacheResponse> DeleteDedicatedClusterImageCacheOutcome;
                typedef std::future<DeleteDedicatedClusterImageCacheOutcome> DeleteDedicatedClusterImageCacheOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DeleteDedicatedClusterImageCacheRequest&, DeleteDedicatedClusterImageCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDedicatedClusterImageCacheAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDedicatedClustersResponse> DeleteDedicatedClustersOutcome;
                typedef std::future<DeleteDedicatedClustersOutcome> DeleteDedicatedClustersOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DeleteDedicatedClustersRequest&, DeleteDedicatedClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDedicatedClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSitesResponse> DeleteSitesOutcome;
                typedef std::future<DeleteSitesOutcome> DeleteSitesOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DeleteSitesRequest&, DeleteSitesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSitesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClusterCbsStatisticsResponse> DescribeDedicatedClusterCbsStatisticsOutcome;
                typedef std::future<DescribeDedicatedClusterCbsStatisticsOutcome> DescribeDedicatedClusterCbsStatisticsOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedClusterCbsStatisticsRequest&, DescribeDedicatedClusterCbsStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterCbsStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClusterCosCapacityResponse> DescribeDedicatedClusterCosCapacityOutcome;
                typedef std::future<DescribeDedicatedClusterCosCapacityOutcome> DescribeDedicatedClusterCosCapacityOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedClusterCosCapacityRequest&, DescribeDedicatedClusterCosCapacityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterCosCapacityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClusterHostStatisticsResponse> DescribeDedicatedClusterHostStatisticsOutcome;
                typedef std::future<DescribeDedicatedClusterHostStatisticsOutcome> DescribeDedicatedClusterHostStatisticsOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedClusterHostStatisticsRequest&, DescribeDedicatedClusterHostStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterHostStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClusterHostsResponse> DescribeDedicatedClusterHostsOutcome;
                typedef std::future<DescribeDedicatedClusterHostsOutcome> DescribeDedicatedClusterHostsOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedClusterHostsRequest&, DescribeDedicatedClusterHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClusterInstanceTypesResponse> DescribeDedicatedClusterInstanceTypesOutcome;
                typedef std::future<DescribeDedicatedClusterInstanceTypesOutcome> DescribeDedicatedClusterInstanceTypesOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedClusterInstanceTypesRequest&, DescribeDedicatedClusterInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClusterOrdersResponse> DescribeDedicatedClusterOrdersOutcome;
                typedef std::future<DescribeDedicatedClusterOrdersOutcome> DescribeDedicatedClusterOrdersOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedClusterOrdersRequest&, DescribeDedicatedClusterOrdersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterOrdersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClusterOverviewResponse> DescribeDedicatedClusterOverviewOutcome;
                typedef std::future<DescribeDedicatedClusterOverviewOutcome> DescribeDedicatedClusterOverviewOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedClusterOverviewRequest&, DescribeDedicatedClusterOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClusterTypesResponse> DescribeDedicatedClusterTypesOutcome;
                typedef std::future<DescribeDedicatedClusterTypesOutcome> DescribeDedicatedClusterTypesOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedClusterTypesRequest&, DescribeDedicatedClusterTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClusterTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedClustersResponse> DescribeDedicatedClustersOutcome;
                typedef std::future<DescribeDedicatedClustersOutcome> DescribeDedicatedClustersOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedClustersRequest&, DescribeDedicatedClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDedicatedSupportedZonesResponse> DescribeDedicatedSupportedZonesOutcome;
                typedef std::future<DescribeDedicatedSupportedZonesOutcome> DescribeDedicatedSupportedZonesOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeDedicatedSupportedZonesRequest&, DescribeDedicatedSupportedZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDedicatedSupportedZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSitesResponse> DescribeSitesOutcome;
                typedef std::future<DescribeSitesOutcome> DescribeSitesOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeSitesRequest&, DescribeSitesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSitesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSitesDetailResponse> DescribeSitesDetailOutcome;
                typedef std::future<DescribeSitesDetailOutcome> DescribeSitesDetailOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::DescribeSitesDetailRequest&, DescribeSitesDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSitesDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDedicatedClusterInfoResponse> ModifyDedicatedClusterInfoOutcome;
                typedef std::future<ModifyDedicatedClusterInfoOutcome> ModifyDedicatedClusterInfoOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::ModifyDedicatedClusterInfoRequest&, ModifyDedicatedClusterInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDedicatedClusterInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOrderStatusResponse> ModifyOrderStatusOutcome;
                typedef std::future<ModifyOrderStatusOutcome> ModifyOrderStatusOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::ModifyOrderStatusRequest&, ModifyOrderStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOrderStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySiteDeviceInfoResponse> ModifySiteDeviceInfoOutcome;
                typedef std::future<ModifySiteDeviceInfoOutcome> ModifySiteDeviceInfoOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::ModifySiteDeviceInfoRequest&, ModifySiteDeviceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySiteDeviceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySiteInfoResponse> ModifySiteInfoOutcome;
                typedef std::future<ModifySiteInfoOutcome> ModifySiteInfoOutcomeCallable;
                typedef std::function<void(const CdcClient*, const Model::ModifySiteInfoRequest&, ModifySiteInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySiteInfoAsyncHandler;



                /**
                 *创建专用集群
                 * @param req CreateDedicatedClusterRequest
                 * @return CreateDedicatedClusterOutcome
                 */
                CreateDedicatedClusterOutcome CreateDedicatedCluster(const Model::CreateDedicatedClusterRequest &request);
                void CreateDedicatedClusterAsync(const Model::CreateDedicatedClusterRequest& request, const CreateDedicatedClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDedicatedClusterOutcomeCallable CreateDedicatedClusterCallable(const Model::CreateDedicatedClusterRequest& request);

                /**
                 *创建云上镜像缓存到本地专用集群中
                 * @param req CreateDedicatedClusterImageCacheRequest
                 * @return CreateDedicatedClusterImageCacheOutcome
                 */
                CreateDedicatedClusterImageCacheOutcome CreateDedicatedClusterImageCache(const Model::CreateDedicatedClusterImageCacheRequest &request);
                void CreateDedicatedClusterImageCacheAsync(const Model::CreateDedicatedClusterImageCacheRequest& request, const CreateDedicatedClusterImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDedicatedClusterImageCacheOutcomeCallable CreateDedicatedClusterImageCacheCallable(const Model::CreateDedicatedClusterImageCacheRequest& request);

                /**
                 *创建专用集群订单
                 * @param req CreateDedicatedClusterOrderRequest
                 * @return CreateDedicatedClusterOrderOutcome
                 */
                CreateDedicatedClusterOrderOutcome CreateDedicatedClusterOrder(const Model::CreateDedicatedClusterOrderRequest &request);
                void CreateDedicatedClusterOrderAsync(const Model::CreateDedicatedClusterOrderRequest& request, const CreateDedicatedClusterOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDedicatedClusterOrderOutcomeCallable CreateDedicatedClusterOrderCallable(const Model::CreateDedicatedClusterOrderRequest& request);

                /**
                 *创建站点
                 * @param req CreateSiteRequest
                 * @return CreateSiteOutcome
                 */
                CreateSiteOutcome CreateSite(const Model::CreateSiteRequest &request);
                void CreateSiteAsync(const Model::CreateSiteRequest& request, const CreateSiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSiteOutcomeCallable CreateSiteCallable(const Model::CreateSiteRequest& request);

                /**
                 *删除本地专用集群的云上镜像缓存
                 * @param req DeleteDedicatedClusterImageCacheRequest
                 * @return DeleteDedicatedClusterImageCacheOutcome
                 */
                DeleteDedicatedClusterImageCacheOutcome DeleteDedicatedClusterImageCache(const Model::DeleteDedicatedClusterImageCacheRequest &request);
                void DeleteDedicatedClusterImageCacheAsync(const Model::DeleteDedicatedClusterImageCacheRequest& request, const DeleteDedicatedClusterImageCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDedicatedClusterImageCacheOutcomeCallable DeleteDedicatedClusterImageCacheCallable(const Model::DeleteDedicatedClusterImageCacheRequest& request);

                /**
                 *删除专用集群
                 * @param req DeleteDedicatedClustersRequest
                 * @return DeleteDedicatedClustersOutcome
                 */
                DeleteDedicatedClustersOutcome DeleteDedicatedClusters(const Model::DeleteDedicatedClustersRequest &request);
                void DeleteDedicatedClustersAsync(const Model::DeleteDedicatedClustersRequest& request, const DeleteDedicatedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDedicatedClustersOutcomeCallable DeleteDedicatedClustersCallable(const Model::DeleteDedicatedClustersRequest& request);

                /**
                 *删除站点
                 * @param req DeleteSitesRequest
                 * @return DeleteSitesOutcome
                 */
                DeleteSitesOutcome DeleteSites(const Model::DeleteSitesRequest &request);
                void DeleteSitesAsync(const Model::DeleteSitesRequest& request, const DeleteSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSitesOutcomeCallable DeleteSitesCallable(const Model::DeleteSitesRequest& request);

                /**
                 *查询本地专用集群云硬盘仓库信息
                 * @param req DescribeDedicatedClusterCbsStatisticsRequest
                 * @return DescribeDedicatedClusterCbsStatisticsOutcome
                 */
                DescribeDedicatedClusterCbsStatisticsOutcome DescribeDedicatedClusterCbsStatistics(const Model::DescribeDedicatedClusterCbsStatisticsRequest &request);
                void DescribeDedicatedClusterCbsStatisticsAsync(const Model::DescribeDedicatedClusterCbsStatisticsRequest& request, const DescribeDedicatedClusterCbsStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClusterCbsStatisticsOutcomeCallable DescribeDedicatedClusterCbsStatisticsCallable(const Model::DescribeDedicatedClusterCbsStatisticsRequest& request);

                /**
                 *查询专用集群内cos的容量信息
                 * @param req DescribeDedicatedClusterCosCapacityRequest
                 * @return DescribeDedicatedClusterCosCapacityOutcome
                 */
                DescribeDedicatedClusterCosCapacityOutcome DescribeDedicatedClusterCosCapacity(const Model::DescribeDedicatedClusterCosCapacityRequest &request);
                void DescribeDedicatedClusterCosCapacityAsync(const Model::DescribeDedicatedClusterCosCapacityRequest& request, const DescribeDedicatedClusterCosCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClusterCosCapacityOutcomeCallable DescribeDedicatedClusterCosCapacityCallable(const Model::DescribeDedicatedClusterCosCapacityRequest& request);

                /**
                 *查询专用集群内宿主机的统计信息
                 * @param req DescribeDedicatedClusterHostStatisticsRequest
                 * @return DescribeDedicatedClusterHostStatisticsOutcome
                 */
                DescribeDedicatedClusterHostStatisticsOutcome DescribeDedicatedClusterHostStatistics(const Model::DescribeDedicatedClusterHostStatisticsRequest &request);
                void DescribeDedicatedClusterHostStatisticsAsync(const Model::DescribeDedicatedClusterHostStatisticsRequest& request, const DescribeDedicatedClusterHostStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClusterHostStatisticsOutcomeCallable DescribeDedicatedClusterHostStatisticsCallable(const Model::DescribeDedicatedClusterHostStatisticsRequest& request);

                /**
                 *查询专用集群宿主机信息
                 * @param req DescribeDedicatedClusterHostsRequest
                 * @return DescribeDedicatedClusterHostsOutcome
                 */
                DescribeDedicatedClusterHostsOutcome DescribeDedicatedClusterHosts(const Model::DescribeDedicatedClusterHostsRequest &request);
                void DescribeDedicatedClusterHostsAsync(const Model::DescribeDedicatedClusterHostsRequest& request, const DescribeDedicatedClusterHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClusterHostsOutcomeCallable DescribeDedicatedClusterHostsCallable(const Model::DescribeDedicatedClusterHostsRequest& request);

                /**
                 *查询专用集群支持的实例规格列表
                 * @param req DescribeDedicatedClusterInstanceTypesRequest
                 * @return DescribeDedicatedClusterInstanceTypesOutcome
                 */
                DescribeDedicatedClusterInstanceTypesOutcome DescribeDedicatedClusterInstanceTypes(const Model::DescribeDedicatedClusterInstanceTypesRequest &request);
                void DescribeDedicatedClusterInstanceTypesAsync(const Model::DescribeDedicatedClusterInstanceTypesRequest& request, const DescribeDedicatedClusterInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClusterInstanceTypesOutcomeCallable DescribeDedicatedClusterInstanceTypesCallable(const Model::DescribeDedicatedClusterInstanceTypesRequest& request);

                /**
                 *查询专用集群订单列表
                 * @param req DescribeDedicatedClusterOrdersRequest
                 * @return DescribeDedicatedClusterOrdersOutcome
                 */
                DescribeDedicatedClusterOrdersOutcome DescribeDedicatedClusterOrders(const Model::DescribeDedicatedClusterOrdersRequest &request);
                void DescribeDedicatedClusterOrdersAsync(const Model::DescribeDedicatedClusterOrdersRequest& request, const DescribeDedicatedClusterOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClusterOrdersOutcomeCallable DescribeDedicatedClusterOrdersCallable(const Model::DescribeDedicatedClusterOrdersRequest& request);

                /**
                 *查询专用集群概览信息
                 * @param req DescribeDedicatedClusterOverviewRequest
                 * @return DescribeDedicatedClusterOverviewOutcome
                 */
                DescribeDedicatedClusterOverviewOutcome DescribeDedicatedClusterOverview(const Model::DescribeDedicatedClusterOverviewRequest &request);
                void DescribeDedicatedClusterOverviewAsync(const Model::DescribeDedicatedClusterOverviewRequest& request, const DescribeDedicatedClusterOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClusterOverviewOutcomeCallable DescribeDedicatedClusterOverviewCallable(const Model::DescribeDedicatedClusterOverviewRequest& request);

                /**
                 *查询专有集群配置列表
                 * @param req DescribeDedicatedClusterTypesRequest
                 * @return DescribeDedicatedClusterTypesOutcome
                 */
                DescribeDedicatedClusterTypesOutcome DescribeDedicatedClusterTypes(const Model::DescribeDedicatedClusterTypesRequest &request);
                void DescribeDedicatedClusterTypesAsync(const Model::DescribeDedicatedClusterTypesRequest& request, const DescribeDedicatedClusterTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClusterTypesOutcomeCallable DescribeDedicatedClusterTypesCallable(const Model::DescribeDedicatedClusterTypesRequest& request);

                /**
                 *查询专用集群列表
                 * @param req DescribeDedicatedClustersRequest
                 * @return DescribeDedicatedClustersOutcome
                 */
                DescribeDedicatedClustersOutcome DescribeDedicatedClusters(const Model::DescribeDedicatedClustersRequest &request);
                void DescribeDedicatedClustersAsync(const Model::DescribeDedicatedClustersRequest& request, const DescribeDedicatedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedClustersOutcomeCallable DescribeDedicatedClustersCallable(const Model::DescribeDedicatedClustersRequest& request);

                /**
                 *查询专用集群支持的可用区列表
                 * @param req DescribeDedicatedSupportedZonesRequest
                 * @return DescribeDedicatedSupportedZonesOutcome
                 */
                DescribeDedicatedSupportedZonesOutcome DescribeDedicatedSupportedZones(const Model::DescribeDedicatedSupportedZonesRequest &request);
                void DescribeDedicatedSupportedZonesAsync(const Model::DescribeDedicatedSupportedZonesRequest& request, const DescribeDedicatedSupportedZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDedicatedSupportedZonesOutcomeCallable DescribeDedicatedSupportedZonesCallable(const Model::DescribeDedicatedSupportedZonesRequest& request);

                /**
                 *查询站点列表
                 * @param req DescribeSitesRequest
                 * @return DescribeSitesOutcome
                 */
                DescribeSitesOutcome DescribeSites(const Model::DescribeSitesRequest &request);
                void DescribeSitesAsync(const Model::DescribeSitesRequest& request, const DescribeSitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSitesOutcomeCallable DescribeSitesCallable(const Model::DescribeSitesRequest& request);

                /**
                 *查询站点详情
                 * @param req DescribeSitesDetailRequest
                 * @return DescribeSitesDetailOutcome
                 */
                DescribeSitesDetailOutcome DescribeSitesDetail(const Model::DescribeSitesDetailRequest &request);
                void DescribeSitesDetailAsync(const Model::DescribeSitesDetailRequest& request, const DescribeSitesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSitesDetailOutcomeCallable DescribeSitesDetailCallable(const Model::DescribeSitesDetailRequest& request);

                /**
                 *修改本地专用集群信息
                 * @param req ModifyDedicatedClusterInfoRequest
                 * @return ModifyDedicatedClusterInfoOutcome
                 */
                ModifyDedicatedClusterInfoOutcome ModifyDedicatedClusterInfo(const Model::ModifyDedicatedClusterInfoRequest &request);
                void ModifyDedicatedClusterInfoAsync(const Model::ModifyDedicatedClusterInfoRequest& request, const ModifyDedicatedClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDedicatedClusterInfoOutcomeCallable ModifyDedicatedClusterInfoCallable(const Model::ModifyDedicatedClusterInfoRequest& request);

                /**
                 *修改大订单、小订单的状态
                 * @param req ModifyOrderStatusRequest
                 * @return ModifyOrderStatusOutcome
                 */
                ModifyOrderStatusOutcome ModifyOrderStatus(const Model::ModifyOrderStatusRequest &request);
                void ModifyOrderStatusAsync(const Model::ModifyOrderStatusRequest& request, const ModifyOrderStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOrderStatusOutcomeCallable ModifyOrderStatusCallable(const Model::ModifyOrderStatusRequest& request);

                /**
                 *修改机房设备信息
                 * @param req ModifySiteDeviceInfoRequest
                 * @return ModifySiteDeviceInfoOutcome
                 */
                ModifySiteDeviceInfoOutcome ModifySiteDeviceInfo(const Model::ModifySiteDeviceInfoRequest &request);
                void ModifySiteDeviceInfoAsync(const Model::ModifySiteDeviceInfoRequest& request, const ModifySiteDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySiteDeviceInfoOutcomeCallable ModifySiteDeviceInfoCallable(const Model::ModifySiteDeviceInfoRequest& request);

                /**
                 *修改机房信息
                 * @param req ModifySiteInfoRequest
                 * @return ModifySiteInfoOutcome
                 */
                ModifySiteInfoOutcome ModifySiteInfo(const Model::ModifySiteInfoRequest &request);
                void ModifySiteInfoAsync(const Model::ModifySiteInfoRequest& request, const ModifySiteInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySiteInfoOutcomeCallable ModifySiteInfoCallable(const Model::ModifySiteInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_CDCCLIENT_H_
