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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYDETAILRESPONSE_H_

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
                * DescribeAssetImageRegistryDetail返回参数结构体
                */
                class DescribeAssetImageRegistryDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryDetailResponse();
                    ~DescribeAssetImageRegistryDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像Digest
                     * @return ImageDigest 镜像Digest
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
                     * 获取镜像地址
                     * @return ImageRepoAddress 镜像地址
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 判断参数 ImageRepoAddress 是否已赋值
                     * @return ImageRepoAddress 是否已赋值
                     * 
                     */
                    bool ImageRepoAddressHasBeenSet() const;

                    /**
                     * 获取镜像类型
                     * @return RegistryType 镜像类型
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取仓库名称
                     * @return ImageName 仓库名称
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
                     * 获取镜像版本
                     * @return ImageTag 镜像版本
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取扫描时间
                     * @return ScanTime 扫描时间
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
                     * 获取扫描状态
                     * @return ScanStatus 扫描状态
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
                     * 获取安全漏洞数
                     * @return VulCnt 安全漏洞数
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
                     * @return SentiveInfoCnt 敏感信息数
                     * @deprecated
                     */
                    uint64_t GetSentiveInfoCnt() const;

                    /**
                     * 判断参数 SentiveInfoCnt 是否已赋值
                     * @return SentiveInfoCnt 是否已赋值
                     * @deprecated
                     */
                    bool SentiveInfoCntHasBeenSet() const;

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
                     * 获取层文件信息
                     * @return LayerInfo 层文件信息
                     * 
                     */
                    std::string GetLayerInfo() const;

                    /**
                     * 判断参数 LayerInfo 是否已赋值
                     * @return LayerInfo 是否已赋值
                     * 
                     */
                    bool LayerInfoHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取高危扫描错误
                     * @return ScanRiskError 高危扫描错误
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
                     * 获取木马信息扫描进度
                     * @return ScanVirusProgress 木马信息扫描进度
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
                     * 获取漏洞扫描进度
                     * @return ScanVulProgress 漏洞扫描进度
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
                     * 获取敏感扫描进度
                     * @return ScanRiskProgress 敏感扫描进度
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
                     * 获取剩余扫描时间秒
                     * @return ScanRemainTime 剩余扫描时间秒
                     * 
                     */
                    uint64_t GetScanRemainTime() const;

                    /**
                     * 判断参数 ScanRemainTime 是否已赋值
                     * @return ScanRemainTime 是否已赋值
                     * 
                     */
                    bool ScanRemainTimeHasBeenSet() const;

                    /**
                     * 获取cve扫描状态
                     * @return CveStatus cve扫描状态
                     * 
                     */
                    std::string GetCveStatus() const;

                    /**
                     * 判断参数 CveStatus 是否已赋值
                     * @return CveStatus 是否已赋值
                     * 
                     */
                    bool CveStatusHasBeenSet() const;

                    /**
                     * 获取高危扫描状态
                     * @return RiskStatus 高危扫描状态
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取木马扫描状态
                     * @return VirusStatus 木马扫描状态
                     * 
                     */
                    std::string GetVirusStatus() const;

                    /**
                     * 判断参数 VirusStatus 是否已赋值
                     * @return VirusStatus 是否已赋值
                     * 
                     */
                    bool VirusStatusHasBeenSet() const;

                    /**
                     * 获取总进度
                     * @return Progress 总进度
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取授权状态
                     * @return IsAuthorized 授权状态
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取镜像大小
                     * @return ImageSize 镜像大小
                     * 
                     */
                    uint64_t GetImageSize() const;

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取镜像Id
                     * @return ImageId 镜像Id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像区域
                     * @return RegistryRegion 镜像区域
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取镜像创建的时间
                     * @return ImageCreateTime 镜像创建的时间
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

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
                     * 获取Id
                     * @return Id Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 镜像Digest
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * 镜像地址
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * 镜像类型
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 仓库名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像版本
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * 扫描时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 扫描状态
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 安全漏洞数
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * 木马病毒数
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * 风险行为数
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * 敏感信息数
                     */
                    uint64_t m_sentiveInfoCnt;
                    bool m_sentiveInfoCntHasBeenSet;

                    /**
                     * 镜像系统
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

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
                     * 层文件信息
                     */
                    std::string m_layerInfo;
                    bool m_layerInfoHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 高危扫描错误
                     */
                    std::string m_scanRiskError;
                    bool m_scanRiskErrorHasBeenSet;

                    /**
                     * 木马信息扫描进度
                     */
                    uint64_t m_scanVirusProgress;
                    bool m_scanVirusProgressHasBeenSet;

                    /**
                     * 漏洞扫描进度
                     */
                    uint64_t m_scanVulProgress;
                    bool m_scanVulProgressHasBeenSet;

                    /**
                     * 敏感扫描进度
                     */
                    uint64_t m_scanRiskProgress;
                    bool m_scanRiskProgressHasBeenSet;

                    /**
                     * 剩余扫描时间秒
                     */
                    uint64_t m_scanRemainTime;
                    bool m_scanRemainTimeHasBeenSet;

                    /**
                     * cve扫描状态
                     */
                    std::string m_cveStatus;
                    bool m_cveStatusHasBeenSet;

                    /**
                     * 高危扫描状态
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * 木马扫描状态
                     */
                    std::string m_virusStatus;
                    bool m_virusStatusHasBeenSet;

                    /**
                     * 总进度
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 授权状态
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * 镜像大小
                     */
                    uint64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 镜像Id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像区域
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * 镜像创建的时间
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * 敏感信息数
                     */
                    uint64_t m_sensitiveInfoCnt;
                    bool m_sensitiveInfoCntHasBeenSet;

                    /**
                     * Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYDETAILRESPONSE_H_
