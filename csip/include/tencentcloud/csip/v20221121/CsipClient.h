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

#ifndef TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_
#define TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserRequest.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDomainAndIpRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDomainAndIpResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDomainAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDomainAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubnetAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubnetAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsResponse.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            class CsipClient : public AbstractClient
            {
            public:
                CsipClient(const Credential &credential, const std::string &region);
                CsipClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddNewBindRoleUserResponse> AddNewBindRoleUserOutcome;
                typedef std::future<AddNewBindRoleUserOutcome> AddNewBindRoleUserOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddNewBindRoleUserRequest&, AddNewBindRoleUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNewBindRoleUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainAndIpResponse> CreateDomainAndIpOutcome;
                typedef std::future<CreateDomainAndIpOutcome> CreateDomainAndIpOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDomainAndIpRequest&, CreateDomainAndIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAndIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetInfoResponse> DescribeCVMAssetInfoOutcome;
                typedef std::future<DescribeCVMAssetInfoOutcome> DescribeCVMAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetInfoRequest&, DescribeCVMAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetsResponse> DescribeCVMAssetsOutcome;
                typedef std::future<DescribeCVMAssetsOutcome> DescribeCVMAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetsRequest&, DescribeCVMAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPodAssetsResponse> DescribeClusterPodAssetsOutcome;
                typedef std::future<DescribeClusterPodAssetsOutcome> DescribeClusterPodAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterPodAssetsRequest&, DescribeClusterPodAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPodAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetInfoResponse> DescribeDbAssetInfoOutcome;
                typedef std::future<DescribeDbAssetInfoOutcome> DescribeDbAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetInfoRequest&, DescribeDbAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetsResponse> DescribeDbAssetsOutcome;
                typedef std::future<DescribeDbAssetsOutcome> DescribeDbAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetsRequest&, DescribeDbAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainAssetsResponse> DescribeDomainAssetsOutcome;
                typedef std::future<DescribeDomainAssetsOutcome> DescribeDomainAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDomainAssetsRequest&, DescribeDomainAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicIpAssetsResponse> DescribePublicIpAssetsOutcome;
                typedef std::future<DescribePublicIpAssetsOutcome> DescribePublicIpAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePublicIpAssetsRequest&, DescribePublicIpAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicIpAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewPortRiskListResponse> DescribeRiskCenterAssetViewPortRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewPortRiskListOutcome> DescribeRiskCenterAssetViewPortRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewPortRiskListRequest&, DescribeRiskCenterAssetViewPortRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewPortRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewVULRiskListResponse> DescribeRiskCenterAssetViewVULRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewVULRiskListOutcome> DescribeRiskCenterAssetViewVULRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewVULRiskListRequest&, DescribeRiskCenterAssetViewVULRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewVULRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanReportListResponse> DescribeScanReportListOutcome;
                typedef std::future<DescribeScanReportListOutcome> DescribeScanReportListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanReportListRequest&, DescribeScanReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetAssetsResponse> DescribeSubnetAssetsOutcome;
                typedef std::future<DescribeSubnetAssetsOutcome> DescribeSubnetAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSubnetAssetsRequest&, DescribeSubnetAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcAssetsResponse> DescribeVpcAssetsOutcome;
                typedef std::future<DescribeVpcAssetsOutcome> DescribeVpcAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVpcAssetsRequest&, DescribeVpcAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAssetsAsyncHandler;



                /**
                 *csip角色授权绑定接口
                 * @param req AddNewBindRoleUserRequest
                 * @return AddNewBindRoleUserOutcome
                 */
                AddNewBindRoleUserOutcome AddNewBindRoleUser(const Model::AddNewBindRoleUserRequest &request);
                void AddNewBindRoleUserAsync(const Model::AddNewBindRoleUserRequest& request, const AddNewBindRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNewBindRoleUserOutcomeCallable AddNewBindRoleUserCallable(const Model::AddNewBindRoleUserRequest& request);

                /**
                 *创建域名、ip相关信息
                 * @param req CreateDomainAndIpRequest
                 * @return CreateDomainAndIpOutcome
                 */
                CreateDomainAndIpOutcome CreateDomainAndIp(const Model::CreateDomainAndIpRequest &request);
                void CreateDomainAndIpAsync(const Model::CreateDomainAndIpRequest& request, const CreateDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainAndIpOutcomeCallable CreateDomainAndIpCallable(const Model::CreateDomainAndIpRequest& request);

                /**
                 *cvm详情
                 * @param req DescribeCVMAssetInfoRequest
                 * @return DescribeCVMAssetInfoOutcome
                 */
                DescribeCVMAssetInfoOutcome DescribeCVMAssetInfo(const Model::DescribeCVMAssetInfoRequest &request);
                void DescribeCVMAssetInfoAsync(const Model::DescribeCVMAssetInfoRequest& request, const DescribeCVMAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCVMAssetInfoOutcomeCallable DescribeCVMAssetInfoCallable(const Model::DescribeCVMAssetInfoRequest& request);

                /**
                 *cvm列表
                 * @param req DescribeCVMAssetsRequest
                 * @return DescribeCVMAssetsOutcome
                 */
                DescribeCVMAssetsOutcome DescribeCVMAssets(const Model::DescribeCVMAssetsRequest &request);
                void DescribeCVMAssetsAsync(const Model::DescribeCVMAssetsRequest& request, const DescribeCVMAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCVMAssetsOutcomeCallable DescribeCVMAssetsCallable(const Model::DescribeCVMAssetsRequest& request);

                /**
                 *集群pod列表
                 * @param req DescribeClusterPodAssetsRequest
                 * @return DescribeClusterPodAssetsOutcome
                 */
                DescribeClusterPodAssetsOutcome DescribeClusterPodAssets(const Model::DescribeClusterPodAssetsRequest &request);
                void DescribeClusterPodAssetsAsync(const Model::DescribeClusterPodAssetsRequest& request, const DescribeClusterPodAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPodAssetsOutcomeCallable DescribeClusterPodAssetsCallable(const Model::DescribeClusterPodAssetsRequest& request);

                /**
                 *db资产详情
                 * @param req DescribeDbAssetInfoRequest
                 * @return DescribeDbAssetInfoOutcome
                 */
                DescribeDbAssetInfoOutcome DescribeDbAssetInfo(const Model::DescribeDbAssetInfoRequest &request);
                void DescribeDbAssetInfoAsync(const Model::DescribeDbAssetInfoRequest& request, const DescribeDbAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbAssetInfoOutcomeCallable DescribeDbAssetInfoCallable(const Model::DescribeDbAssetInfoRequest& request);

                /**
                 *资产列表
                 * @param req DescribeDbAssetsRequest
                 * @return DescribeDbAssetsOutcome
                 */
                DescribeDbAssetsOutcome DescribeDbAssets(const Model::DescribeDbAssetsRequest &request);
                void DescribeDbAssetsAsync(const Model::DescribeDbAssetsRequest& request, const DescribeDbAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbAssetsOutcomeCallable DescribeDbAssetsCallable(const Model::DescribeDbAssetsRequest& request);

                /**
                 *域名列表
                 * @param req DescribeDomainAssetsRequest
                 * @return DescribeDomainAssetsOutcome
                 */
                DescribeDomainAssetsOutcome DescribeDomainAssets(const Model::DescribeDomainAssetsRequest &request);
                void DescribeDomainAssetsAsync(const Model::DescribeDomainAssetsRequest& request, const DescribeDomainAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainAssetsOutcomeCallable DescribeDomainAssetsCallable(const Model::DescribeDomainAssetsRequest& request);

                /**
                 *ip公网列表
                 * @param req DescribePublicIpAssetsRequest
                 * @return DescribePublicIpAssetsOutcome
                 */
                DescribePublicIpAssetsOutcome DescribePublicIpAssets(const Model::DescribePublicIpAssetsRequest &request);
                void DescribePublicIpAssetsAsync(const Model::DescribePublicIpAssetsRequest& request, const DescribePublicIpAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicIpAssetsOutcomeCallable DescribePublicIpAssetsCallable(const Model::DescribePublicIpAssetsRequest& request);

                /**
                 *获取资产视角的端口风险列表
                 * @param req DescribeRiskCenterAssetViewPortRiskListRequest
                 * @return DescribeRiskCenterAssetViewPortRiskListOutcome
                 */
                DescribeRiskCenterAssetViewPortRiskListOutcome DescribeRiskCenterAssetViewPortRiskList(const Model::DescribeRiskCenterAssetViewPortRiskListRequest &request);
                void DescribeRiskCenterAssetViewPortRiskListAsync(const Model::DescribeRiskCenterAssetViewPortRiskListRequest& request, const DescribeRiskCenterAssetViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewPortRiskListOutcomeCallable DescribeRiskCenterAssetViewPortRiskListCallable(const Model::DescribeRiskCenterAssetViewPortRiskListRequest& request);

                /**
                 *获取资产视角的漏洞风险列表
                 * @param req DescribeRiskCenterAssetViewVULRiskListRequest
                 * @return DescribeRiskCenterAssetViewVULRiskListOutcome
                 */
                DescribeRiskCenterAssetViewVULRiskListOutcome DescribeRiskCenterAssetViewVULRiskList(const Model::DescribeRiskCenterAssetViewVULRiskListRequest &request);
                void DescribeRiskCenterAssetViewVULRiskListAsync(const Model::DescribeRiskCenterAssetViewVULRiskListRequest& request, const DescribeRiskCenterAssetViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewVULRiskListOutcomeCallable DescribeRiskCenterAssetViewVULRiskListCallable(const Model::DescribeRiskCenterAssetViewVULRiskListRequest& request);

                /**
                 *获取扫描报告列表
                 * @param req DescribeScanReportListRequest
                 * @return DescribeScanReportListOutcome
                 */
                DescribeScanReportListOutcome DescribeScanReportList(const Model::DescribeScanReportListRequest &request);
                void DescribeScanReportListAsync(const Model::DescribeScanReportListRequest& request, const DescribeScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanReportListOutcomeCallable DescribeScanReportListCallable(const Model::DescribeScanReportListRequest& request);

                /**
                 *获取子网列表
                 * @param req DescribeSubnetAssetsRequest
                 * @return DescribeSubnetAssetsOutcome
                 */
                DescribeSubnetAssetsOutcome DescribeSubnetAssets(const Model::DescribeSubnetAssetsRequest &request);
                void DescribeSubnetAssetsAsync(const Model::DescribeSubnetAssetsRequest& request, const DescribeSubnetAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetAssetsOutcomeCallable DescribeSubnetAssetsCallable(const Model::DescribeSubnetAssetsRequest& request);

                /**
                 *获取vpc列表
                 * @param req DescribeVpcAssetsRequest
                 * @return DescribeVpcAssetsOutcome
                 */
                DescribeVpcAssetsOutcome DescribeVpcAssets(const Model::DescribeVpcAssetsRequest &request);
                void DescribeVpcAssetsAsync(const Model::DescribeVpcAssetsRequest& request, const DescribeVpcAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcAssetsOutcomeCallable DescribeVpcAssetsCallable(const Model::DescribeVpcAssetsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_
