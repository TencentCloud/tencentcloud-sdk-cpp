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
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像id
                     * @param ImageID 镜像id
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param ImageName 镜像名称
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取镜像大小
                     * @return Size 镜像大小
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置镜像大小
                     * @param Size 镜像大小
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取主机个数
                     * @return HostCnt 主机个数
                     */
                    uint64_t GetHostCnt() const;

                    /**
                     * 设置主机个数
                     * @param HostCnt 主机个数
                     */
                    void SetHostCnt(const uint64_t& _hostCnt);

                    /**
                     * 判断参数 HostCnt 是否已赋值
                     * @return HostCnt 是否已赋值
                     */
                    bool HostCntHasBeenSet() const;

                    /**
                     * 获取容器个数
                     * @return ContainerCnt 容器个数
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置容器个数
                     * @param ContainerCnt 容器个数
                     */
                    void SetContainerCnt(const uint64_t& _containerCnt);

                    /**
                     * 判断参数 ContainerCnt 是否已赋值
                     * @return ContainerCnt 是否已赋值
                     */
                    bool ContainerCntHasBeenSet() const;

                    /**
                     * 获取扫描时间
                     * @return ScanTime 扫描时间
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置扫描时间
                     * @param ScanTime 扫描时间
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取漏洞个数
                     * @return VulCnt 漏洞个数
                     */
                    uint64_t GetVulCnt() const;

                    /**
                     * 设置漏洞个数
                     * @param VulCnt 漏洞个数
                     */
                    void SetVulCnt(const uint64_t& _vulCnt);

                    /**
                     * 判断参数 VulCnt 是否已赋值
                     * @return VulCnt 是否已赋值
                     */
                    bool VulCntHasBeenSet() const;

                    /**
                     * 获取病毒个数
                     * @return VirusCnt 病毒个数
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 设置病毒个数
                     * @param VirusCnt 病毒个数
                     */
                    void SetVirusCnt(const uint64_t& _virusCnt);

                    /**
                     * 判断参数 VirusCnt 是否已赋值
                     * @return VirusCnt 是否已赋值
                     */
                    bool VirusCntHasBeenSet() const;

                    /**
                     * 获取敏感信息个数
                     * @return RiskCnt 敏感信息个数
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置敏感信息个数
                     * @param RiskCnt 敏感信息个数
                     */
                    void SetRiskCnt(const uint64_t& _riskCnt);

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取是否信任镜像
                     * @return IsTrustImage 是否信任镜像
                     */
                    bool GetIsTrustImage() const;

                    /**
                     * 设置是否信任镜像
                     * @param IsTrustImage 是否信任镜像
                     */
                    void SetIsTrustImage(const bool& _isTrustImage);

                    /**
                     * 判断参数 IsTrustImage 是否已赋值
                     * @return IsTrustImage 是否已赋值
                     */
                    bool IsTrustImageHasBeenSet() const;

                    /**
                     * 获取镜像系统
                     * @return OsName 镜像系统
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置镜像系统
                     * @param OsName 镜像系统
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取agent镜像扫描错误
                     * @return AgentError agent镜像扫描错误
                     */
                    std::string GetAgentError() const;

                    /**
                     * 设置agent镜像扫描错误
                     * @param AgentError agent镜像扫描错误
                     */
                    void SetAgentError(const std::string& _agentError);

                    /**
                     * 判断参数 AgentError 是否已赋值
                     * @return AgentError 是否已赋值
                     */
                    bool AgentErrorHasBeenSet() const;

                    /**
                     * 获取后端镜像扫描错误
                     * @return ScanError 后端镜像扫描错误
                     */
                    std::string GetScanError() const;

                    /**
                     * 设置后端镜像扫描错误
                     * @param ScanError 后端镜像扫描错误
                     */
                    void SetScanError(const std::string& _scanError);

                    /**
                     * 判断参数 ScanError 是否已赋值
                     * @return ScanError 是否已赋值
                     */
                    bool ScanErrorHasBeenSet() const;

                    /**
                     * 获取扫描状态
                     * @return ScanStatus 扫描状态
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置扫描状态
                     * @param ScanStatus 扫描状态
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取木马扫描错误信息
                     * @return ScanVirusError 木马扫描错误信息
                     */
                    std::string GetScanVirusError() const;

                    /**
                     * 设置木马扫描错误信息
                     * @param ScanVirusError 木马扫描错误信息
                     */
                    void SetScanVirusError(const std::string& _scanVirusError);

                    /**
                     * 判断参数 ScanVirusError 是否已赋值
                     * @return ScanVirusError 是否已赋值
                     */
                    bool ScanVirusErrorHasBeenSet() const;

                    /**
                     * 获取漏洞扫描错误信息
                     * @return ScanVulError 漏洞扫描错误信息
                     */
                    std::string GetScanVulError() const;

                    /**
                     * 设置漏洞扫描错误信息
                     * @param ScanVulError 漏洞扫描错误信息
                     */
                    void SetScanVulError(const std::string& _scanVulError);

                    /**
                     * 判断参数 ScanVulError 是否已赋值
                     * @return ScanVulError 是否已赋值
                     */
                    bool ScanVulErrorHasBeenSet() const;

                    /**
                     * 获取风险扫描错误信息
                     * @return ScanRiskError 风险扫描错误信息
                     */
                    std::string GetScanRiskError() const;

                    /**
                     * 设置风险扫描错误信息
                     * @param ScanRiskError 风险扫描错误信息
                     */
                    void SetScanRiskError(const std::string& _scanRiskError);

                    /**
                     * 判断参数 ScanRiskError 是否已赋值
                     * @return ScanRiskError 是否已赋值
                     */
                    bool ScanRiskErrorHasBeenSet() const;

                    /**
                     * 获取是否是重点关注镜像，为0不是，非0是
                     * @return IsSuggest 是否是重点关注镜像，为0不是，非0是
                     */
                    uint64_t GetIsSuggest() const;

                    /**
                     * 设置是否是重点关注镜像，为0不是，非0是
                     * @param IsSuggest 是否是重点关注镜像，为0不是，非0是
                     */
                    void SetIsSuggest(const uint64_t& _isSuggest);

                    /**
                     * 判断参数 IsSuggest 是否已赋值
                     * @return IsSuggest 是否已赋值
                     */
                    bool IsSuggestHasBeenSet() const;

                    /**
                     * 获取是否授权，1是0否
                     * @return IsAuthorized 是否授权，1是0否
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置是否授权，1是0否
                     * @param IsAuthorized 是否授权，1是0否
                     */
                    void SetIsAuthorized(const uint64_t& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     */
                    bool IsAuthorizedHasBeenSet() const;

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
                     * 主机个数
                     */
                    uint64_t m_hostCnt;
                    bool m_hostCntHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESINFO_H_
