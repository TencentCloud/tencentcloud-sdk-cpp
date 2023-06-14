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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETCSSSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETCSSSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeTcssSummary返回参数结构体
                */
                class DescribeTcssSummaryResponse : public AbstractModel
                {
                public:
                    DescribeTcssSummaryResponse();
                    ~DescribeTcssSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像总数
                     * @return ImageCnt 镜像总数
                     * 
                     */
                    uint64_t GetImageCnt() const;

                    /**
                     * 判断参数 ImageCnt 是否已赋值
                     * @return ImageCnt 是否已赋值
                     * 
                     */
                    bool ImageCntHasBeenSet() const;

                    /**
                     * 获取已扫描镜像数
                     * @return ScannedImageCnt 已扫描镜像数
                     * 
                     */
                    uint64_t GetScannedImageCnt() const;

                    /**
                     * 判断参数 ScannedImageCnt 是否已赋值
                     * @return ScannedImageCnt 是否已赋值
                     * 
                     */
                    bool ScannedImageCntHasBeenSet() const;

                    /**
                     * 获取待扫描镜像个数
                     * @return UnScannedImageCnt 待扫描镜像个数
                     * 
                     */
                    uint64_t GetUnScannedImageCnt() const;

                    /**
                     * 判断参数 UnScannedImageCnt 是否已赋值
                     * @return UnScannedImageCnt 是否已赋值
                     * 
                     */
                    bool UnScannedImageCntHasBeenSet() const;

                    /**
                     * 获取本地镜像个数
                     * @return LocalImageCnt 本地镜像个数
                     * 
                     */
                    uint64_t GetLocalImageCnt() const;

                    /**
                     * 判断参数 LocalImageCnt 是否已赋值
                     * @return LocalImageCnt 是否已赋值
                     * 
                     */
                    bool LocalImageCntHasBeenSet() const;

                    /**
                     * 获取仓库镜像个数
                     * @return RepositoryImageCnt 仓库镜像个数
                     * 
                     */
                    uint64_t GetRepositoryImageCnt() const;

                    /**
                     * 判断参数 RepositoryImageCnt 是否已赋值
                     * @return RepositoryImageCnt 是否已赋值
                     * 
                     */
                    bool RepositoryImageCntHasBeenSet() const;

                    /**
                     * 获取风险本地镜像个数
                     * @return RiskLocalImageCnt 风险本地镜像个数
                     * 
                     */
                    uint64_t GetRiskLocalImageCnt() const;

                    /**
                     * 判断参数 RiskLocalImageCnt 是否已赋值
                     * @return RiskLocalImageCnt 是否已赋值
                     * 
                     */
                    bool RiskLocalImageCntHasBeenSet() const;

                    /**
                     * 获取风险仓库镜像个数
                     * @return RiskRepositoryImageCnt 风险仓库镜像个数
                     * 
                     */
                    uint64_t GetRiskRepositoryImageCnt() const;

                    /**
                     * 判断参数 RiskRepositoryImageCnt 是否已赋值
                     * @return RiskRepositoryImageCnt 是否已赋值
                     * 
                     */
                    bool RiskRepositoryImageCntHasBeenSet() const;

                    /**
                     * 获取容器个数
                     * @return ContainerCnt 容器个数
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     * 
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取风险容器个数
                     * @return RiskContainerCnt 风险容器个数
                     * 
                     */
                    uint64_t GetRiskContainerCnt() const;

                    /**
                     * 判断参数 RiskContainerCnt 是否已赋值
                     * @return RiskContainerCnt 是否已赋值
                     * 
                     */
                    bool RiskContainerCntHasBeenSet() const;

                    /**
                     * 获取集群个数
                     * @return ClusterCnt 集群个数
                     * 
                     */
                    uint64_t GetClusterCnt() const;

                    /**
                     * 判断参数 ClusterCnt 是否已赋值
                     * @return ClusterCnt 是否已赋值
                     * 
                     */
                    bool ClusterCntHasBeenSet() const;

                    /**
                     * 获取风险集群个数
                     * @return RiskClusterCnt 风险集群个数
                     * 
                     */
                    uint64_t GetRiskClusterCnt() const;

                    /**
                     * 判断参数 RiskClusterCnt 是否已赋值
                     * @return RiskClusterCnt 是否已赋值
                     * 
                     */
                    bool RiskClusterCntHasBeenSet() const;

                    /**
                     * 获取待扫描漏洞个数
                     * @return UnScannedVulCnt 待扫描漏洞个数
                     * 
                     */
                    uint64_t GetUnScannedVulCnt() const;

                    /**
                     * 判断参数 UnScannedVulCnt 是否已赋值
                     * @return UnScannedVulCnt 是否已赋值
                     * 
                     */
                    bool UnScannedVulCntHasBeenSet() const;

                    /**
                     * 获取风险漏洞个数
                     * @return RiskVulCnt 风险漏洞个数
                     * 
                     */
                    uint64_t GetRiskVulCnt() const;

                    /**
                     * 判断参数 RiskVulCnt 是否已赋值
                     * @return RiskVulCnt 是否已赋值
                     * 
                     */
                    bool RiskVulCntHasBeenSet() const;

                    /**
                     * 获取安全基线待扫描项个数
                     * @return UnScannedBaseLineCnt 安全基线待扫描项个数
                     * 
                     */
                    uint64_t GetUnScannedBaseLineCnt() const;

                    /**
                     * 判断参数 UnScannedBaseLineCnt 是否已赋值
                     * @return UnScannedBaseLineCnt 是否已赋值
                     * 
                     */
                    bool UnScannedBaseLineCntHasBeenSet() const;

                    /**
                     * 获取安全基线风险个数
                     * @return RiskBaseLineCnt 安全基线风险个数
                     * 
                     */
                    uint64_t GetRiskBaseLineCnt() const;

                    /**
                     * 判断参数 RiskBaseLineCnt 是否已赋值
                     * @return RiskBaseLineCnt 是否已赋值
                     * 
                     */
                    bool RiskBaseLineCntHasBeenSet() const;

                    /**
                     * 获取运行时(高危)待处理事件个数
                     * @return RuntimeUnhandleEventCnt 运行时(高危)待处理事件个数
                     * 
                     */
                    uint64_t GetRuntimeUnhandleEventCnt() const;

                    /**
                     * 判断参数 RuntimeUnhandleEventCnt 是否已赋值
                     * @return RuntimeUnhandleEventCnt 是否已赋值
                     * 
                     */
                    bool RuntimeUnhandleEventCntHasBeenSet() const;

                    /**
                     * 获取待扫描集群个数
                     * @return UnScannedClusterCnt 待扫描集群个数
                     * 
                     */
                    uint64_t GetUnScannedClusterCnt() const;

                    /**
                     * 判断参数 UnScannedClusterCnt 是否已赋值
                     * @return UnScannedClusterCnt 是否已赋值
                     * 
                     */
                    bool UnScannedClusterCntHasBeenSet() const;

                    /**
                     * 获取是否已扫描镜像
                     * @return ScanImageStatus 是否已扫描镜像
                     * 
                     */
                    bool GetScanImageStatus() const;

                    /**
                     * 判断参数 ScanImageStatus 是否已赋值
                     * @return ScanImageStatus 是否已赋值
                     * 
                     */
                    bool ScanImageStatusHasBeenSet() const;

                    /**
                     * 获取是否已扫描集群
                     * @return ScanClusterStatus 是否已扫描集群
                     * 
                     */
                    bool GetScanClusterStatus() const;

                    /**
                     * 判断参数 ScanClusterStatus 是否已赋值
                     * @return ScanClusterStatus 是否已赋值
                     * 
                     */
                    bool ScanClusterStatusHasBeenSet() const;

                    /**
                     * 获取是否已扫描基线
                     * @return ScanBaseLineStatus 是否已扫描基线
                     * 
                     */
                    bool GetScanBaseLineStatus() const;

                    /**
                     * 判断参数 ScanBaseLineStatus 是否已赋值
                     * @return ScanBaseLineStatus 是否已赋值
                     * 
                     */
                    bool ScanBaseLineStatusHasBeenSet() const;

                    /**
                     * 获取是否已扫描漏洞
                     * @return ScanVulStatus 是否已扫描漏洞
                     * 
                     */
                    bool GetScanVulStatus() const;

                    /**
                     * 判断参数 ScanVulStatus 是否已赋值
                     * @return ScanVulStatus 是否已赋值
                     * 
                     */
                    bool ScanVulStatusHasBeenSet() const;

                    /**
                     * 获取漏洞影响镜像数
                     * @return VulRiskImageCnt 漏洞影响镜像数
                     * 
                     */
                    uint64_t GetVulRiskImageCnt() const;

                    /**
                     * 判断参数 VulRiskImageCnt 是否已赋值
                     * @return VulRiskImageCnt 是否已赋值
                     * 
                     */
                    bool VulRiskImageCntHasBeenSet() const;

                private:

                    /**
                     * 镜像总数
                     */
                    uint64_t m_imageCnt;
                    bool m_imageCntHasBeenSet;

                    /**
                     * 已扫描镜像数
                     */
                    uint64_t m_scannedImageCnt;
                    bool m_scannedImageCntHasBeenSet;

                    /**
                     * 待扫描镜像个数
                     */
                    uint64_t m_unScannedImageCnt;
                    bool m_unScannedImageCntHasBeenSet;

                    /**
                     * 本地镜像个数
                     */
                    uint64_t m_localImageCnt;
                    bool m_localImageCntHasBeenSet;

                    /**
                     * 仓库镜像个数
                     */
                    uint64_t m_repositoryImageCnt;
                    bool m_repositoryImageCntHasBeenSet;

                    /**
                     * 风险本地镜像个数
                     */
                    uint64_t m_riskLocalImageCnt;
                    bool m_riskLocalImageCntHasBeenSet;

                    /**
                     * 风险仓库镜像个数
                     */
                    uint64_t m_riskRepositoryImageCnt;
                    bool m_riskRepositoryImageCntHasBeenSet;

                    /**
                     * 容器个数
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * 风险容器个数
                     */
                    uint64_t m_riskContainerCnt;
                    bool m_riskContainerCntHasBeenSet;

                    /**
                     * 集群个数
                     */
                    uint64_t m_clusterCnt;
                    bool m_clusterCntHasBeenSet;

                    /**
                     * 风险集群个数
                     */
                    uint64_t m_riskClusterCnt;
                    bool m_riskClusterCntHasBeenSet;

                    /**
                     * 待扫描漏洞个数
                     */
                    uint64_t m_unScannedVulCnt;
                    bool m_unScannedVulCntHasBeenSet;

                    /**
                     * 风险漏洞个数
                     */
                    uint64_t m_riskVulCnt;
                    bool m_riskVulCntHasBeenSet;

                    /**
                     * 安全基线待扫描项个数
                     */
                    uint64_t m_unScannedBaseLineCnt;
                    bool m_unScannedBaseLineCntHasBeenSet;

                    /**
                     * 安全基线风险个数
                     */
                    uint64_t m_riskBaseLineCnt;
                    bool m_riskBaseLineCntHasBeenSet;

                    /**
                     * 运行时(高危)待处理事件个数
                     */
                    uint64_t m_runtimeUnhandleEventCnt;
                    bool m_runtimeUnhandleEventCntHasBeenSet;

                    /**
                     * 待扫描集群个数
                     */
                    uint64_t m_unScannedClusterCnt;
                    bool m_unScannedClusterCntHasBeenSet;

                    /**
                     * 是否已扫描镜像
                     */
                    bool m_scanImageStatus;
                    bool m_scanImageStatusHasBeenSet;

                    /**
                     * 是否已扫描集群
                     */
                    bool m_scanClusterStatus;
                    bool m_scanClusterStatusHasBeenSet;

                    /**
                     * 是否已扫描基线
                     */
                    bool m_scanBaseLineStatus;
                    bool m_scanBaseLineStatusHasBeenSet;

                    /**
                     * 是否已扫描漏洞
                     */
                    bool m_scanVulStatus;
                    bool m_scanVulStatusHasBeenSet;

                    /**
                     * 漏洞影响镜像数
                     */
                    uint64_t m_vulRiskImageCnt;
                    bool m_vulRiskImageCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBETCSSSUMMARYRESPONSE_H_
