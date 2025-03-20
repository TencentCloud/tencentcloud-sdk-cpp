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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOINFO_H_

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
                * 容器安全镜像仓库列表
                */
                class ImageRepoInfo : public AbstractModel
                {
                public:
                    ImageRepoInfo();
                    ~ImageRepoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像Digest
                     * @return ImageDigest 镜像Digest
                     * 
                     */
                    std::string GetImageDigest() const;

                    /**
                     * 设置镜像Digest
                     * @param _imageDigest 镜像Digest
                     * 
                     */
                    void SetImageDigest(const std::string& _imageDigest);

                    /**
                     * 判断参数 ImageDigest 是否已赋值
                     * @return ImageDigest 是否已赋值
                     * 
                     */
                    bool ImageDigestHasBeenSet() const;

                    /**
                     * 获取镜像仓库地址
                     * @return ImageRepoAddress 镜像仓库地址
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置镜像仓库地址
                     * @param _imageRepoAddress 镜像仓库地址
                     * 
                     */
                    void SetImageRepoAddress(const std::string& _imageRepoAddress);

                    /**
                     * 判断参数 ImageRepoAddress 是否已赋值
                     * @return ImageRepoAddress 是否已赋值
                     * 
                     */
                    bool ImageRepoAddressHasBeenSet() const;

                    /**
                     * 获取仓库类型
                     * @return RegistryType 仓库类型
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置仓库类型
                     * @param _registryType 仓库类型
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

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
                     * 获取镜像版本
                     * @return ImageTag 镜像版本
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置镜像版本
                     * @param _imageTag 镜像版本
                     * 
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取镜像大小
                     * @return ImageSize 镜像大小
                     * 
                     */
                    uint64_t GetImageSize() const;

                    /**
                     * 设置镜像大小
                     * @param _imageSize 镜像大小
                     * 
                     */
                    void SetImageSize(const uint64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
                     * @return ScanTime 最近扫描时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置最近扫描时间
                     * @param _scanTime 最近扫描时间
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
                     * 获取安全漏洞数
                     * @return VulCnt 安全漏洞数
                     * 
                     */
                    uint64_t GetVulCnt() const;

                    /**
                     * 设置安全漏洞数
                     * @param _vulCnt 安全漏洞数
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
                     * 获取木马病毒数
                     * @return VirusCnt 木马病毒数
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 设置木马病毒数
                     * @param _virusCnt 木马病毒数
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
                     * 获取风险行为数
                     * @return RiskCnt 风险行为数
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置风险行为数
                     * @param _riskCnt 风险行为数
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
                     * 获取敏感信息数
                     * @return SentiveInfoCnt 敏感信息数
                     * @deprecated
                     */
                    uint64_t GetSentiveInfoCnt() const;

                    /**
                     * 设置敏感信息数
                     * @param _sentiveInfoCnt 敏感信息数
                     * @deprecated
                     */
                    void SetSentiveInfoCnt(const uint64_t& _sentiveInfoCnt);

                    /**
                     * 判断参数 SentiveInfoCnt 是否已赋值
                     * @return SentiveInfoCnt 是否已赋值
                     * @deprecated
                     */
                    bool SentiveInfoCntHasBeenSet() const;

                    /**
                     * 获取是否可信镜像
                     * @return IsTrustImage 是否可信镜像
                     * 
                     */
                    bool GetIsTrustImage() const;

                    /**
                     * 设置是否可信镜像
                     * @param _isTrustImage 是否可信镜像
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
                     * 获取木马扫描错误
                     * @return ScanVirusError 木马扫描错误
                     * 
                     */
                    std::string GetScanVirusError() const;

                    /**
                     * 设置木马扫描错误
                     * @param _scanVirusError 木马扫描错误
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
                     * 获取漏洞扫描错误
                     * @return ScanVulError 漏洞扫描错误
                     * 
                     */
                    std::string GetScanVulError() const;

                    /**
                     * 设置漏洞扫描错误
                     * @param _scanVulError 漏洞扫描错误
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
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

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
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

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
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

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
                     * 设置高危扫描错误
                     * @param _scanRiskError 高危扫描错误
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
                     * 获取敏感信息扫描进度
                     * @return ScanVirusProgress 敏感信息扫描进度
                     * 
                     */
                    uint64_t GetScanVirusProgress() const;

                    /**
                     * 设置敏感信息扫描进度
                     * @param _scanVirusProgress 敏感信息扫描进度
                     * 
                     */
                    void SetScanVirusProgress(const uint64_t& _scanVirusProgress);

                    /**
                     * 判断参数 ScanVirusProgress 是否已赋值
                     * @return ScanVirusProgress 是否已赋值
                     * 
                     */
                    bool ScanVirusProgressHasBeenSet() const;

                    /**
                     * 获取木马扫描进度
                     * @return ScanVulProgress 木马扫描进度
                     * 
                     */
                    uint64_t GetScanVulProgress() const;

                    /**
                     * 设置木马扫描进度
                     * @param _scanVulProgress 木马扫描进度
                     * 
                     */
                    void SetScanVulProgress(const uint64_t& _scanVulProgress);

                    /**
                     * 判断参数 ScanVulProgress 是否已赋值
                     * @return ScanVulProgress 是否已赋值
                     * 
                     */
                    bool ScanVulProgressHasBeenSet() const;

                    /**
                     * 获取漏洞扫描进度
                     * @return ScanRiskProgress 漏洞扫描进度
                     * 
                     */
                    uint64_t GetScanRiskProgress() const;

                    /**
                     * 设置漏洞扫描进度
                     * @param _scanRiskProgress 漏洞扫描进度
                     * 
                     */
                    void SetScanRiskProgress(const uint64_t& _scanRiskProgress);

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
                     * 设置剩余扫描时间秒
                     * @param _scanRemainTime 剩余扫描时间秒
                     * 
                     */
                    void SetScanRemainTime(const uint64_t& _scanRemainTime);

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
                     * 设置cve扫描状态
                     * @param _cveStatus cve扫描状态
                     * 
                     */
                    void SetCveStatus(const std::string& _cveStatus);

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
                     * 设置高危扫描状态
                     * @param _riskStatus 高危扫描状态
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

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
                     * 设置木马扫描状态
                     * @param _virusStatus 木马扫描状态
                     * 
                     */
                    void SetVirusStatus(const std::string& _virusStatus);

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
                     * 设置总进度
                     * @param _progress 总进度
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

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
                     * 设置授权状态
                     * @param _isAuthorized 授权状态
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
                     * 获取仓库区域
                     * @return RegistryRegion 仓库区域
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置仓库区域
                     * @param _registryRegion 仓库区域
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取列表id
                     * @return Id 列表id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置列表id
                     * @param _id 列表id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取镜像Id
                     * @return ImageId 镜像Id
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像Id
                     * @param _imageId 镜像Id
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取镜像创建的时间
                     * @return ImageCreateTime 镜像创建的时间
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 设置镜像创建的时间
                     * @param _imageCreateTime 镜像创建的时间
                     * 
                     */
                    void SetImageCreateTime(const std::string& _imageCreateTime);

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

                    /**
                     * 获取是否为镜像的最新版本
                     * @return IsLatestImage 是否为镜像的最新版本
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置是否为镜像的最新版本
                     * @param _isLatestImage 是否为镜像的最新版本
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
                     * 获取low级别漏洞个数
                     * @return LowLevelVulCnt low级别漏洞个数
                     * 
                     */
                    uint64_t GetLowLevelVulCnt() const;

                    /**
                     * 设置low级别漏洞个数
                     * @param _lowLevelVulCnt low级别漏洞个数
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
                     * 获取medium级别漏洞个数
                     * @return MediumLevelVulCnt medium级别漏洞个数
                     * 
                     */
                    uint64_t GetMediumLevelVulCnt() const;

                    /**
                     * 设置medium级别漏洞个数
                     * @param _mediumLevelVulCnt medium级别漏洞个数
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
                     * 获取high级别漏洞个数
                     * @return HighLevelVulCnt high级别漏洞个数
                     * 
                     */
                    uint64_t GetHighLevelVulCnt() const;

                    /**
                     * 设置high级别漏洞个数
                     * @param _highLevelVulCnt high级别漏洞个数
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
                     * 获取critical级别漏洞个数
                     * @return CriticalLevelVulCnt critical级别漏洞个数
                     * 
                     */
                    uint64_t GetCriticalLevelVulCnt() const;

                    /**
                     * 设置critical级别漏洞个数
                     * @param _criticalLevelVulCnt critical级别漏洞个数
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
                     * 获取关联容器数
                     * @return ContainerCnt 关联容器数
                     * 
                     */
                    uint64_t GetContainerCnt() const;

                    /**
                     * 设置关联容器数
                     * @param _containerCnt 关联容器数
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
                     * 获取组件数
                     * @return ComponentCnt 组件数
                     * 
                     */
                    uint64_t GetComponentCnt() const;

                    /**
                     * 设置组件数
                     * @param _componentCnt 组件数
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
                     * 获取是否运行中
                     * @return IsRunning 是否运行中
                     * 
                     */
                    bool GetIsRunning() const;

                    /**
                     * 设置是否运行中
                     * @param _isRunning 是否运行中
                     * 
                     */
                    void SetIsRunning(const bool& _isRunning);

                    /**
                     * 判断参数 IsRunning 是否已赋值
                     * @return IsRunning 是否已赋值
                     * 
                     */
                    bool IsRunningHasBeenSet() const;

                    /**
                     * 获取是否存在必修漏洞
                     * @return HasNeedFixVul 是否存在必修漏洞
                     * 
                     */
                    bool GetHasNeedFixVul() const;

                    /**
                     * 设置是否存在必修漏洞
                     * @param _hasNeedFixVul 是否存在必修漏洞
                     * 
                     */
                    void SetHasNeedFixVul(const bool& _hasNeedFixVul);

                    /**
                     * 判断参数 HasNeedFixVul 是否已赋值
                     * @return HasNeedFixVul 是否已赋值
                     * 
                     */
                    bool HasNeedFixVulHasBeenSet() const;

                    /**
                     * 获取敏感信息
                     * @return SensitiveInfoCnt 敏感信息
                     * 
                     */
                    uint64_t GetSensitiveInfoCnt() const;

                    /**
                     * 设置敏感信息
                     * @param _sensitiveInfoCnt 敏感信息
                     * 
                     */
                    void SetSensitiveInfoCnt(const uint64_t& _sensitiveInfoCnt);

                    /**
                     * 判断参数 SensitiveInfoCnt 是否已赋值
                     * @return SensitiveInfoCnt 是否已赋值
                     * 
                     */
                    bool SensitiveInfoCntHasBeenSet() const;

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
                     * 镜像Digest
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * 镜像仓库地址
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * 仓库类型
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像版本
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * 镜像大小
                     */
                    uint64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * 最近扫描时间
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
                     * 是否可信镜像
                     */
                    bool m_isTrustImage;
                    bool m_isTrustImageHasBeenSet;

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
                     * 敏感信息扫描进度
                     */
                    uint64_t m_scanVirusProgress;
                    bool m_scanVirusProgressHasBeenSet;

                    /**
                     * 木马扫描进度
                     */
                    uint64_t m_scanVulProgress;
                    bool m_scanVulProgressHasBeenSet;

                    /**
                     * 漏洞扫描进度
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
                     * 仓库区域
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * 列表id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 镜像Id
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 镜像创建的时间
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * 是否为镜像的最新版本
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * low级别漏洞个数
                     */
                    uint64_t m_lowLevelVulCnt;
                    bool m_lowLevelVulCntHasBeenSet;

                    /**
                     * medium级别漏洞个数
                     */
                    uint64_t m_mediumLevelVulCnt;
                    bool m_mediumLevelVulCntHasBeenSet;

                    /**
                     * high级别漏洞个数
                     */
                    uint64_t m_highLevelVulCnt;
                    bool m_highLevelVulCntHasBeenSet;

                    /**
                     * critical级别漏洞个数
                     */
                    uint64_t m_criticalLevelVulCnt;
                    bool m_criticalLevelVulCntHasBeenSet;

                    /**
                     * 关联容器数
                     */
                    uint64_t m_containerCnt;
                    bool m_containerCntHasBeenSet;

                    /**
                     * 组件数
                     */
                    uint64_t m_componentCnt;
                    bool m_componentCntHasBeenSet;

                    /**
                     * 是否运行中
                     */
                    bool m_isRunning;
                    bool m_isRunningHasBeenSet;

                    /**
                     * 是否存在必修漏洞
                     */
                    bool m_hasNeedFixVul;
                    bool m_hasNeedFixVulHasBeenSet;

                    /**
                     * 敏感信息
                     */
                    uint64_t m_sensitiveInfoCnt;
                    bool m_sensitiveInfoCntHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOINFO_H_
