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
                     * 获取镜像ID
                     * @return ImageID 镜像ID
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
                     * 获取镜像名称
                     * @return ImageName 镜像名称
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
                     * 获取镜像摘要
                     * @return ImageDigest 镜像摘要
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
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
                     * 获取镜像大小
                     * @return Size 镜像大小
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
                     * 获取关联主机个数(包含普通节点数和超级节点数)
                     * @return HostCnt 关联主机个数(包含普通节点数和超级节点数)
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
                     * 获取关联容器个数
                     * @return ContainerCnt 关联容器个数
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
                     * 获取超级节点数
                     * @return SuperNodeCnt 超级节点数
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
                     * 获取最近扫描时间
                     * @return ScanTime 最近扫描时间
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
                     * 获取漏洞个数
                     * @return VulCnt 漏洞个数
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
                     * 获取风险行为数
                     * @return RiskCnt 风险行为数
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
                     * 获取敏感信息数
                     * @return SensitiveInfoCnt 敏感信息数
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
                     * 获取是否信任镜像
                     * @return IsTrustImage 是否信任镜像
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
                     * 获取镜像系统
                     * @return OsName 镜像系统
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
                     * 获取agent镜像扫描错误
                     * @return AgentError agent镜像扫描错误
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
                     * 获取后端镜像扫描错误
                     * @return ScanError 后端镜像扫描错误
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
                     * 获取系统架构
                     * @return Architecture 系统架构
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
                     * 获取作者
                     * @return Author 作者
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
                     * 获取构建历史
                     * @return BuildHistory 构建历史
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
                     * 获取木马扫描进度
                     * @return ScanVirusProgress 木马扫描进度
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
                     * 获取漏洞扫进度
                     * @return ScanVulProgress 漏洞扫进度
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
                     * 获取敏感信息扫描进度
                     * @return ScanRiskProgress 敏感信息扫描进度
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
                     * 获取木马扫描错误
                     * @return ScanVirusError 木马扫描错误
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
                     * 获取漏洞扫描错误
                     * @return ScanVulError 漏洞扫描错误
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
                     * 获取敏感信息错误
                     * @return ScanRiskError 敏感信息错误
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
                     * 获取镜像扫描状态
                     * @return ScanStatus 镜像扫描状态
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
                     * 获取木马病毒数
                     * @return VirusCnt 木马病毒数
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
                     * 获取镜像扫描状态
                     * @return Status 镜像扫描状态
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
                     * 获取剩余扫描时间
                     * @return RemainScanTime 剩余扫描时间
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
                     * 获取授权为：1，未授权为：0
                     * @return IsAuthorized 授权为：1，未授权为：0
                     * 
                     */
                    int64_t GetIsAuthorized() const;

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像摘要
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 镜像大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 关联主机个数(包含普通节点数和超级节点数)
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * 关联容器个数
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * 超级节点数
                     */
                    uint64_t m_superNodeCnt;
                    bool m_superNodeCntHasBeenSet;

                    /**
                     * 最近扫描时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 漏洞个数
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * 风险行为数
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * 敏感信息数
                     */
                    uint64_t m_sensitiveInfoCnt;
                    bool m_sensitiveInfoCntHasBeenSet;

                    /**
                     * 是否信任镜像
                     */
                    bool m_isTrustImage;
                    bool m_isTrustImageHasBeenSet;

                    /**
                     * 镜像系统
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * agent镜像扫描错误
                     */
                    std::string m_agentError;
                    bool m_agentErrorHasBeenSet;

                    /**
                     * 后端镜像扫描错误
                     */
                    std::string m_scanError;
                    bool m_scanErrorHasBeenSet;

                    /**
                     * 系统架构
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 作者
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 构建历史
                     */
                    std::string m_buildHistory;
                    bool m_buildHistoryHasBeenSet;

                    /**
                     * 木马扫描进度
                     */
                    uint64_t m_scanVirusProgress;
                    bool m_scanVirusProgressHasBeenSet;

                    /**
                     * 漏洞扫进度
                     */
                    uint64_t m_scanVulProgress;
                    bool m_scanVulProgressHasBeenSet;

                    /**
                     * 敏感信息扫描进度
                     */
                    uint64_t m_scanRiskProgress;
                    bool m_scanRiskProgressHasBeenSet;

                    /**
                     * 木马扫描错误
                     */
                    std::string m_scanVirusError;
                    bool m_scanVirusErrorHasBeenSet;

                    /**
                     * 漏洞扫描错误
                     */
                    std::string m_scanVulError;
                    bool m_scanVulErrorHasBeenSet;

                    /**
                     * 敏感信息错误
                     */
                    std::string m_scanRiskError;
                    bool m_scanRiskErrorHasBeenSet;

                    /**
                     * 镜像扫描状态
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 木马病毒数
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * 镜像扫描状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 剩余扫描时间
                     */
                    uint64_t m_remainScanTime;
                    bool m_remainScanTimeHasBeenSet;

                    /**
                     * 授权为：1，未授权为：0
                     */
                    int64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEDETAILRESPONSE_H_
