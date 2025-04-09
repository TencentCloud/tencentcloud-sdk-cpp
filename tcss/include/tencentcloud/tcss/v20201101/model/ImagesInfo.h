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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 容器安全镜像列表
                */
                class ImagesInfo : public AbstractModel
                {
                public:
                    ImagesInfo();
                    ~ImagesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像id
                     * @return ImageID 镜像id
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像id
                     * @param _imageID 镜像id
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

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
                     * 设置镜像名称
                     * @param _imageName 镜像名称
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

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
                     * 设置镜像大小
                     * @param _size 镜像大小
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取主机个数(包含普通节点数和超级节点数)
                     * @return HostCnt 主机个数(包含普通节点数和超级节点数)
                     * 
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 设置主机个数(包含普通节点数和超级节点数)
                     * @param _hostCnt 主机个数(包含普通节点数和超级节点数)
                     * 
                     */
                    void SetHostCnt(const uint64_t& _hostCnt);

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     * 
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取超级节点数
                     * @return SuperNodeCnt 超级节点数
                     * 
                     */
                    uint64_t GetSuperNodeCnt() const;

                    /**
                     * 设置超级节点数
                     * @param _superNodeCnt 超级节点数
                     * 
                     */
                    void SetSuperNodeCnt(const uint64_t& _superNodeCnt);

                    /**
                     * 判断参数 SuperNodeCnt 是否已赋值
                     * @return SuperNodeCnt 是否已赋值
                     * 
                     */
                    bool SuperNodeCntHasBeenSet() const;

                    /**
                     * 获取容器个数
                     * @return ContainerCnt 容器个数
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置容器个数
                     * @param _containerCnt 容器个数
                     * 
                     */
                    void SetContainerCnt(const uint64_t& _containerCnt);

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     * 
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取扫描时间
                     * @return ScanTime 扫描时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置扫描时间
                     * @param _scanTime 扫描时间
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

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
                     * 设置漏洞个数
                     * @param _vulCnt 漏洞个数
                     * 
                     */
                    void SetVulCnt(const uint64_t& _vulCnt);

                    /**
                     * 判断参数 VulCnt 是否已赋值
                     * @return VulCnt 是否已赋值
                     * 
                     */
                    bool VulCntHasBeenSet() const;

                    /**
                     * 获取病毒个数
                     * @return VirusCnt 病毒个数
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 设置病毒个数
                     * @param _virusCnt 病毒个数
                     * 
                     */
                    void SetVirusCnt(const uint64_t& _virusCnt);

                    /**
                     * 判断参数 VirusCnt 是否已赋值
                     * @return VirusCnt 是否已赋值
                     * 
                     */
                    bool VirusCntHasBeenSet() const;

                    /**
                     * 获取敏感信息个数
                     * @return RiskCnt 敏感信息个数
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置敏感信息个数
                     * @param _riskCnt 敏感信息个数
                     * 
                     */
                    void SetRiskCnt(const uint64_t& _riskCnt);

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取是否信任镜像
                     * @return IsTrustImage 是否信任镜像
                     * 
                     */
                    bool GetIsTrustImage() const;

                    /**
                     * 设置是否信任镜像
                     * @param _isTrustImage 是否信任镜像
                     * 
                     */
                    void SetIsTrustImage(const bool& _isTrustImage);

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
                     * 设置镜像系统
                     * @param _osName 镜像系统
                     * 
                     */
                    void SetOsName(const std::string& _osName);

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
                     * 设置agent镜像扫描错误
                     * @param _agentError agent镜像扫描错误
                     * 
                     */
                    void SetAgentError(const std::string& _agentError);

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
                     * 设置后端镜像扫描错误
                     * @param _scanError 后端镜像扫描错误
                     * 
                     */
                    void SetScanError(const std::string& _scanError);

                    /**
                     * 判断参数 ScanError 是否已赋值
                     * @return ScanError 是否已赋值
                     * 
                     */
                    bool ScanErrorHasBeenSet() const;

                    /**
                     * 获取扫描状态
                     * @return ScanStatus 扫描状态
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置扫描状态
                     * @param _scanStatus 扫描状态
                     * 
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取木马扫描错误信息
                     * @return ScanVirusError 木马扫描错误信息
                     * 
                     */
                    std::string GetScanVirusError() const;

                    /**
                     * 设置木马扫描错误信息
                     * @param _scanVirusError 木马扫描错误信息
                     * 
                     */
                    void SetScanVirusError(const std::string& _scanVirusError);

                    /**
                     * 判断参数 ScanVirusError 是否已赋值
                     * @return ScanVirusError 是否已赋值
                     * 
                     */
                    bool ScanVirusErrorHasBeenSet() const;

                    /**
                     * 获取漏洞扫描错误信息
                     * @return ScanVulError 漏洞扫描错误信息
                     * 
                     */
                    std::string GetScanVulError() const;

                    /**
                     * 设置漏洞扫描错误信息
                     * @param _scanVulError 漏洞扫描错误信息
                     * 
                     */
                    void SetScanVulError(const std::string& _scanVulError);

                    /**
                     * 判断参数 ScanVulError 是否已赋值
                     * @return ScanVulError 是否已赋值
                     * 
                     */
                    bool ScanVulErrorHasBeenSet() const;

                    /**
                     * 获取风险扫描错误信息
                     * @return ScanRiskError 风险扫描错误信息
                     * 
                     */
                    std::string GetScanRiskError() const;

                    /**
                     * 设置风险扫描错误信息
                     * @param _scanRiskError 风险扫描错误信息
                     * 
                     */
                    void SetScanRiskError(const std::string& _scanRiskError);

                    /**
                     * 判断参数 ScanRiskError 是否已赋值
                     * @return ScanRiskError 是否已赋值
                     * 
                     */
                    bool ScanRiskErrorHasBeenSet() const;

                    /**
                     * 获取是否是重点关注镜像，为0不是，非0是
                     * @return IsSuggest 是否是重点关注镜像，为0不是，非0是
                     * 
                     */
                    uint64_t GetIsSuggest() const;

                    /**
                     * 设置是否是重点关注镜像，为0不是，非0是
                     * @param _isSuggest 是否是重点关注镜像，为0不是，非0是
                     * 
                     */
                    void SetIsSuggest(const uint64_t& _isSuggest);

                    /**
                     * 判断参数 IsSuggest 是否已赋值
                     * @return IsSuggest 是否已赋值
                     * 
                     */
                    bool IsSuggestHasBeenSet() const;

                    /**
                     * 获取是否授权，1是0否
                     * @return IsAuthorized 是否授权，1是0否
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置是否授权，1是0否
                     * @param _isAuthorized 是否授权，1是0否
                     * 
                     */
                    void SetIsAuthorized(const uint64_t& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取组件个数
                     * @return ComponentCnt 组件个数
                     * 
                     */
                    uint64_t GetComponentCnt() const;

                    /**
                     * 设置组件个数
                     * @param _componentCnt 组件个数
                     * 
                     */
                    void SetComponentCnt(const uint64_t& _componentCnt);

                    /**
                     * 判断参数 ComponentCnt 是否已赋值
                     * @return ComponentCnt 是否已赋值
                     * 
                     */
                    bool ComponentCntHasBeenSet() const;

                    /**
                     * 获取严重漏洞数
                     * @return CriticalLevelVulCnt 严重漏洞数
                     * 
                     */
                    uint64_t GetCriticalLevelVulCnt() const;

                    /**
                     * 设置严重漏洞数
                     * @param _criticalLevelVulCnt 严重漏洞数
                     * 
                     */
                    void SetCriticalLevelVulCnt(const uint64_t& _criticalLevelVulCnt);

                    /**
                     * 判断参数 CriticalLevelVulCnt 是否已赋值
                     * @return CriticalLevelVulCnt 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulCntHasBeenSet() const;

                    /**
                     * 获取高危漏洞数
                     * @return HighLevelVulCnt 高危漏洞数
                     * 
                     */
                    uint64_t GetHighLevelVulCnt() const;

                    /**
                     * 设置高危漏洞数
                     * @param _highLevelVulCnt 高危漏洞数
                     * 
                     */
                    void SetHighLevelVulCnt(const uint64_t& _highLevelVulCnt);

                    /**
                     * 判断参数 HighLevelVulCnt 是否已赋值
                     * @return HighLevelVulCnt 是否已赋值
                     * 
                     */
                    bool HighLevelVulCntHasBeenSet() const;

                    /**
                     * 获取中危漏洞数
                     * @return MediumLevelVulCnt 中危漏洞数
                     * 
                     */
                    uint64_t GetMediumLevelVulCnt() const;

                    /**
                     * 设置中危漏洞数
                     * @param _mediumLevelVulCnt 中危漏洞数
                     * 
                     */
                    void SetMediumLevelVulCnt(const uint64_t& _mediumLevelVulCnt);

                    /**
                     * 判断参数 MediumLevelVulCnt 是否已赋值
                     * @return MediumLevelVulCnt 是否已赋值
                     * 
                     */
                    bool MediumLevelVulCntHasBeenSet() const;

                    /**
                     * 获取低危漏洞数
                     * @return LowLevelVulCnt 低危漏洞数
                     * 
                     */
                    uint64_t GetLowLevelVulCnt() const;

                    /**
                     * 设置低危漏洞数
                     * @param _lowLevelVulCnt 低危漏洞数
                     * 
                     */
                    void SetLowLevelVulCnt(const uint64_t& _lowLevelVulCnt);

                    /**
                     * 判断参数 LowLevelVulCnt 是否已赋值
                     * @return LowLevelVulCnt 是否已赋值
                     * 
                     */
                    bool LowLevelVulCntHasBeenSet() const;

                    /**
                     * 获取是否最新版本镜像
                     * @return IsLatestImage 是否最新版本镜像
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置是否最新版本镜像
                     * @param _isLatestImage 是否最新版本镜像
                     * 
                     */
                    void SetIsLatestImage(const bool& _isLatestImage);

                    /**
                     * 判断参数 IsLatestImage 是否已赋值
                     * @return IsLatestImage 是否已赋值
                     * 
                     */
                    bool IsLatestImageHasBeenSet() const;

                    /**
                     * 获取是否推荐处置
                     * @return RecommendedFix 是否推荐处置
                     * 
                     */
                    bool GetRecommendedFix() const;

                    /**
                     * 设置是否推荐处置
                     * @param _recommendedFix 是否推荐处置
                     * 
                     */
                    void SetRecommendedFix(const bool& _recommendedFix);

                    /**
                     * 判断参数 RecommendedFix 是否已赋值
                     * @return RecommendedFix 是否已赋值
                     * 
                     */
                    bool RecommendedFixHasBeenSet() const;

                private:

                    /**
                     * 镜像id
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

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
                     * 主机个数(包含普通节点数和超级节点数)
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

                    /**
                     * 超级节点数
                     */
                    uint64_t m_superNodeCnt;
                    bool m_superNodeCntHasBeenSet;

                    /**
                     * 容器个数
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * 扫描时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 漏洞个数
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * 病毒个数
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * 敏感信息个数
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

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
                     * 扫描状态
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 木马扫描错误信息
                     */
                    std::string m_scanVirusError;
                    bool m_scanVirusErrorHasBeenSet;

                    /**
                     * 漏洞扫描错误信息
                     */
                    std::string m_scanVulError;
                    bool m_scanVulErrorHasBeenSet;

                    /**
                     * 风险扫描错误信息
                     */
                    std::string m_scanRiskError;
                    bool m_scanRiskErrorHasBeenSet;

                    /**
                     * 是否是重点关注镜像，为0不是，非0是
                     */
                    uint64_t m_isSuggest;
                    bool m_isSuggestHasBeenSet;

                    /**
                     * 是否授权，1是0否
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * 组件个数
                     */
                    uint64_t m_componentCnt;
                    bool m_componentCntHasBeenSet;

                    /**
                     * 严重漏洞数
                     */
                    uint64_t m_criticalLevelVulCnt;
                    bool m_criticalLevelVulCntHasBeenSet;

                    /**
                     * 高危漏洞数
                     */
                    uint64_t m_highLevelVulCnt;
                    bool m_highLevelVulCntHasBeenSet;

                    /**
                     * 中危漏洞数
                     */
                    uint64_t m_mediumLevelVulCnt;
                    bool m_mediumLevelVulCntHasBeenSet;

                    /**
                     * 低危漏洞数
                     */
                    uint64_t m_lowLevelVulCnt;
                    bool m_lowLevelVulCntHasBeenSet;

                    /**
                     * 是否最新版本镜像
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * 是否推荐处置
                     */
                    bool m_recommendedFix;
                    bool m_recommendedFixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESINFO_H_
