/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEDETAILRESPONSE_H_

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
                * DescribeAssetImageDetail返回参数结构体
                */
                class DescribeAssetImageDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageDetailResponse();
                    ~DescribeAssetImageDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>镜像ID</p>
                     * @return ImageID <p>镜像ID</p>
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取<p>镜像名称</p>
                     * @return ImageName <p>镜像名称</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像摘要</p>
                     * @return ImageDigest <p>镜像摘要</p>
                     * 
                     */
                    std::string GetImageDigest() const;

                    /**
                     * 判断参数 ImageDigest 是否已赋值
                     * @return ImageDigest 是否已赋值
                     * 
                     */
                    bool ImageDigestHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>镜像大小</p>
                     * @return Size <p>镜像大小</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>关联主机个数(包含普通节点数和超级节点数)</p>
                     * @return HostCnt <p>关联主机个数(包含普通节点数和超级节点数)</p>
                     * 
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     * 
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取<p>关联容器个数</p>
                     * @return ContainerCnt <p>关联容器个数</p>
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
                     * 获取<p>超级节点数</p>
                     * @return SuperNodeCnt <p>超级节点数</p>
                     * 
                     */
                    uint64_t GetSuperNodeCnt() const;

                    /**
                     * 判断参数 SuperNodeCnt 是否已赋值
                     * @return SuperNodeCnt 是否已赋值
                     * 
                     */
                    bool SuperNodeCntHasBeenSet() const;

                    /**
                     * 获取<p>最近扫描时间</p>
                     * @return ScanTime <p>最近扫描时间</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>漏洞个数</p>
                     * @return VulCnt <p>漏洞个数</p>
                     * 
                     */
                    uint64_t GetVulCnt() const;

                    /**
                     * 判断参数 VulCnt 是否已赋值
                     * @return VulCnt 是否已赋值
                     * 
                     */
                    bool VulCntHasBeenSet() const;

                    /**
                     * 获取<p>风险行为数</p>
                     * @return RiskCnt <p>风险行为数</p>
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取<p>敏感信息数</p>
                     * @return SensitiveInfoCnt <p>敏感信息数</p>
                     * 
                     */
                    uint64_t GetSensitiveInfoCnt() const;

                    /**
                     * 判断参数 SensitiveInfoCnt 是否已赋值
                     * @return SensitiveInfoCnt 是否已赋值
                     * 
                     */
                    bool SensitiveInfoCntHasBeenSet() const;

                    /**
                     * 获取<p>是否信任镜像</p>
                     * @return IsTrustImage <p>是否信任镜像</p>
                     * 
                     */
                    bool GetIsTrustImage() const;

                    /**
                     * 判断参数 IsTrustImage 是否已赋值
                     * @return IsTrustImage 是否已赋值
                     * 
                     */
                    bool IsTrustImageHasBeenSet() const;

                    /**
                     * 获取<p>镜像系统</p>
                     * @return OsName <p>镜像系统</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取<p>agent镜像扫描错误</p>
                     * @return AgentError <p>agent镜像扫描错误</p>
                     * 
                     */
                    std::string GetAgentError() const;

                    /**
                     * 判断参数 AgentError 是否已赋值
                     * @return AgentError 是否已赋值
                     * 
                     */
                    bool AgentErrorHasBeenSet() const;

                    /**
                     * 获取<p>后端镜像扫描错误</p>
                     * @return ScanError <p>后端镜像扫描错误</p>
                     * 
                     */
                    std::string GetScanError() const;

                    /**
                     * 判断参数 ScanError 是否已赋值
                     * @return ScanError 是否已赋值
                     * 
                     */
                    bool ScanErrorHasBeenSet() const;

                    /**
                     * 获取<p>系统架构</p>
                     * @return Architecture <p>系统架构</p>
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取<p>作者</p>
                     * @return Author <p>作者</p>
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取<p>构建历史</p>
                     * @return BuildHistory <p>构建历史</p>
                     * 
                     */
                    std::string GetBuildHistory() const;

                    /**
                     * 判断参数 BuildHistory 是否已赋值
                     * @return BuildHistory 是否已赋值
                     * 
                     */
                    bool BuildHistoryHasBeenSet() const;

                    /**
                     * 获取<p>木马扫描进度</p>
                     * @return ScanVirusProgress <p>木马扫描进度</p>
                     * 
                     */
                    uint64_t GetScanVirusProgress() const;

                    /**
                     * 判断参数 ScanVirusProgress 是否已赋值
                     * @return ScanVirusProgress 是否已赋值
                     * 
                     */
                    bool ScanVirusProgressHasBeenSet() const;

                    /**
                     * 获取<p>漏洞扫进度</p>
                     * @return ScanVulProgress <p>漏洞扫进度</p>
                     * 
                     */
                    uint64_t GetScanVulProgress() const;

                    /**
                     * 判断参数 ScanVulProgress 是否已赋值
                     * @return ScanVulProgress 是否已赋值
                     * 
                     */
                    bool ScanVulProgressHasBeenSet() const;

                    /**
                     * 获取<p>敏感信息扫描进度</p>
                     * @return ScanRiskProgress <p>敏感信息扫描进度</p>
                     * 
                     */
                    uint64_t GetScanRiskProgress() const;

                    /**
                     * 判断参数 ScanRiskProgress 是否已赋值
                     * @return ScanRiskProgress 是否已赋值
                     * 
                     */
                    bool ScanRiskProgressHasBeenSet() const;

                    /**
                     * 获取<p>木马扫描错误</p>
                     * @return ScanVirusError <p>木马扫描错误</p>
                     * 
                     */
                    std::string GetScanVirusError() const;

                    /**
                     * 判断参数 ScanVirusError 是否已赋值
                     * @return ScanVirusError 是否已赋值
                     * 
                     */
                    bool ScanVirusErrorHasBeenSet() const;

                    /**
                     * 获取<p>漏洞扫描错误</p>
                     * @return ScanVulError <p>漏洞扫描错误</p>
                     * 
                     */
                    std::string GetScanVulError() const;

                    /**
                     * 判断参数 ScanVulError 是否已赋值
                     * @return ScanVulError 是否已赋值
                     * 
                     */
                    bool ScanVulErrorHasBeenSet() const;

                    /**
                     * 获取<p>敏感信息错误</p>
                     * @return ScanRiskError <p>敏感信息错误</p>
                     * 
                     */
                    std::string GetScanRiskError() const;

                    /**
                     * 判断参数 ScanRiskError 是否已赋值
                     * @return ScanRiskError 是否已赋值
                     * 
                     */
                    bool ScanRiskErrorHasBeenSet() const;

                    /**
                     * 获取<p>镜像扫描状态</p>
                     * @return ScanStatus <p>镜像扫描状态</p>
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取<p>木马病毒数</p>
                     * @return VirusCnt <p>木马病毒数</p>
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 判断参数 VirusCnt 是否已赋值
                     * @return VirusCnt 是否已赋值
                     * 
                     */
                    bool VirusCntHasBeenSet() const;

                    /**
                     * 获取<p>镜像扫描状态</p>
                     * @return Status <p>镜像扫描状态</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>剩余扫描时间</p>
                     * @return RemainScanTime <p>剩余扫描时间</p>
                     * 
                     */
                    uint64_t GetRemainScanTime() const;

                    /**
                     * 判断参数 RemainScanTime 是否已赋值
                     * @return RemainScanTime 是否已赋值
                     * 
                     */
                    bool RemainScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>授权为：1，未授权为：0</p>
                     * @return IsAuthorized <p>授权为：1，未授权为：0</p>
                     * 
                     */
                    int64_t GetIsAuthorized() const;

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取<p>解决方案</p>
                     * @return Solution <p>解决方案</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取<p>原因</p>
                     * @return Reason <p>原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>仓库Digests</p>
                     * @return RepoDigests <p>仓库Digests</p>
                     * 
                     */
                    std::vector<std::string> GetRepoDigests() const;

                    /**
                     * 判断参数 RepoDigests 是否已赋值
                     * @return RepoDigests 是否已赋值
                     * 
                     */
                    bool RepoDigestsHasBeenSet() const;

                private:

                    /**
                     * <p>镜像ID</p>
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * <p>镜像名称</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>镜像摘要</p>
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>镜像大小</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>关联主机个数(包含普通节点数和超级节点数)</p>
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * <p>关联容器个数</p>
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * <p>超级节点数</p>
                     */
                    uint64_t m_superNodeCnt;
                    bool m_superNodeCntHasBeenSet;

                    /**
                     * <p>最近扫描时间</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>漏洞个数</p>
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * <p>风险行为数</p>
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * <p>敏感信息数</p>
                     */
                    uint64_t m_sensitiveInfoCnt;
                    bool m_sensitiveInfoCntHasBeenSet;

                    /**
                     * <p>是否信任镜像</p>
                     */
                    bool m_isTrustImage;
                    bool m_isTrustImageHasBeenSet;

                    /**
                     * <p>镜像系统</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>agent镜像扫描错误</p>
                     */
                    std::string m_agentError;
                    bool m_agentErrorHasBeenSet;

                    /**
                     * <p>后端镜像扫描错误</p>
                     */
                    std::string m_scanError;
                    bool m_scanErrorHasBeenSet;

                    /**
                     * <p>系统架构</p>
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * <p>作者</p>
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * <p>构建历史</p>
                     */
                    std::string m_buildHistory;
                    bool m_buildHistoryHasBeenSet;

                    /**
                     * <p>木马扫描进度</p>
                     */
                    uint64_t m_scanVirusProgress;
                    bool m_scanVirusProgressHasBeenSet;

                    /**
                     * <p>漏洞扫进度</p>
                     */
                    uint64_t m_scanVulProgress;
                    bool m_scanVulProgressHasBeenSet;

                    /**
                     * <p>敏感信息扫描进度</p>
                     */
                    uint64_t m_scanRiskProgress;
                    bool m_scanRiskProgressHasBeenSet;

                    /**
                     * <p>木马扫描错误</p>
                     */
                    std::string m_scanVirusError;
                    bool m_scanVirusErrorHasBeenSet;

                    /**
                     * <p>漏洞扫描错误</p>
                     */
                    std::string m_scanVulError;
                    bool m_scanVulErrorHasBeenSet;

                    /**
                     * <p>敏感信息错误</p>
                     */
                    std::string m_scanRiskError;
                    bool m_scanRiskErrorHasBeenSet;

                    /**
                     * <p>镜像扫描状态</p>
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * <p>木马病毒数</p>
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * <p>镜像扫描状态</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>剩余扫描时间</p>
                     */
                    uint64_t m_remainScanTime;
                    bool m_remainScanTimeHasBeenSet;

                    /**
                     * <p>授权为：1，未授权为：0</p>
                     */
                    int64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * <p>解决方案</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>仓库Digests</p>
                     */
                    std::vector<std::string> m_repoDigests;
                    bool m_repoDigestsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEDETAILRESPONSE_H_
