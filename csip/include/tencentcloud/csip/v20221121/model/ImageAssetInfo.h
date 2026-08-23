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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像资产信息
                */
                class ImageAssetInfo : public AbstractModel
                {
                public:
                    ImageAssetInfo();
                    ~ImageAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像仓库地址</p>
                     * @return ImageRepoAddress <p>镜像仓库地址</p>
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置<p>镜像仓库地址</p>
                     * @param _imageRepoAddress <p>镜像仓库地址</p>
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
                     * 获取<p>镜像摘要</p>
                     * @return ImageDigest <p>镜像摘要</p>
                     * 
                     */
                    std::string GetImageDigest() const;

                    /**
                     * 设置<p>镜像摘要</p>
                     * @param _imageDigest <p>镜像摘要</p>
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
                     * 获取<p>镜像仓库类型</p>
                     * @return RegistryType <p>镜像仓库类型</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>镜像仓库类型</p>
                     * @param _registryType <p>镜像仓库类型</p>
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
                     * 获取<p>镜像名</p>
                     * @return ImageName <p>镜像名</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>镜像名</p>
                     * @param _imageName <p>镜像名</p>
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
                     * 获取<p>镜像tag</p>
                     * @return ImageTag <p>镜像tag</p>
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置<p>镜像tag</p>
                     * @param _imageTag <p>镜像tag</p>
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
                     * 获取<p>镜像大小</p>
                     * @return ImageSize <p>镜像大小</p>
                     * 
                     */
                    uint64_t GetImageSize() const;

                    /**
                     * 设置<p>镜像大小</p>
                     * @param _imageSize <p>镜像大小</p>
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
                     * 获取<p>最后扫描时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestScanTime <p>最后扫描时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置<p>最后扫描时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestScanTime <p>最后扫描时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>扫描状态</p><p>枚举值：</p><ul><li>INIT： 未扫描</li><li>SCANNING： 扫描中</li><li>FINISH： 扫描成功</li><li>TIMEOUT： 扫描超时</li><li>FAILED： 扫描失败</li><li>STOPPING： 终止中</li><li>CANCELLED： 扫描已取消</li><li>CREATING： 扫描任务创建中</li><li>LICENSE_NOT_ENOUGH： 授权不足</li></ul>
                     * @return ScanStatus <p>扫描状态</p><p>枚举值：</p><ul><li>INIT： 未扫描</li><li>SCANNING： 扫描中</li><li>FINISH： 扫描成功</li><li>TIMEOUT： 扫描超时</li><li>FAILED： 扫描失败</li><li>STOPPING： 终止中</li><li>CANCELLED： 扫描已取消</li><li>CREATING： 扫描任务创建中</li><li>LICENSE_NOT_ENOUGH： 授权不足</li></ul>
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置<p>扫描状态</p><p>枚举值：</p><ul><li>INIT： 未扫描</li><li>SCANNING： 扫描中</li><li>FINISH： 扫描成功</li><li>TIMEOUT： 扫描超时</li><li>FAILED： 扫描失败</li><li>STOPPING： 终止中</li><li>CANCELLED： 扫描已取消</li><li>CREATING： 扫描任务创建中</li><li>LICENSE_NOT_ENOUGH： 授权不足</li></ul>
                     * @param _scanStatus <p>扫描状态</p><p>枚举值：</p><ul><li>INIT： 未扫描</li><li>SCANNING： 扫描中</li><li>FINISH： 扫描成功</li><li>TIMEOUT： 扫描超时</li><li>FAILED： 扫描失败</li><li>STOPPING： 终止中</li><li>CANCELLED： 扫描已取消</li><li>CREATING： 扫描任务创建中</li><li>LICENSE_NOT_ENOUGH： 授权不足</li></ul>
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
                     * 获取<p>漏洞数</p>
                     * @return VulCnt <p>漏洞数</p>
                     * 
                     */
                    uint64_t GetVulCnt() const;

                    /**
                     * 设置<p>漏洞数</p>
                     * @param _vulCnt <p>漏洞数</p>
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
                     * 获取<p>木马数</p>
                     * @return VirusCnt <p>木马数</p>
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 设置<p>木马数</p>
                     * @param _virusCnt <p>木马数</p>
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
                     * 获取<p>敏感信息数</p>
                     * @return SensitiveCnt <p>敏感信息数</p>
                     * 
                     */
                    uint64_t GetSensitiveCnt() const;

                    /**
                     * 设置<p>敏感信息数</p>
                     * @param _sensitiveCnt <p>敏感信息数</p>
                     * 
                     */
                    void SetSensitiveCnt(const uint64_t& _sensitiveCnt);

                    /**
                     * 判断参数 SensitiveCnt 是否已赋值
                     * @return SensitiveCnt 是否已赋值
                     * 
                     */
                    bool SensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>镜像操作系统</p>
                     * @return OsName <p>镜像操作系统</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>镜像操作系统</p>
                     * @param _osName <p>镜像操作系统</p>
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
                     * 获取<p>所属仓库实例id</p>
                     * @return InstanceId <p>所属仓库实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>所属仓库实例id</p>
                     * @param _instanceId <p>所属仓库实例id</p>
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
                     * 获取<p>所属镜像仓库实例名</p>
                     * @return InstanceName <p>所属镜像仓库实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>所属镜像仓库实例名</p>
                     * @param _instanceName <p>所属镜像仓库实例名</p>
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
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
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
                     * 获取<p>是否授权</p>
                     * @return IsAuthorized <p>是否授权</p>
                     * 
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置<p>是否授权</p>
                     * @param _isAuthorized <p>是否授权</p>
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
                     * 获取<p>镜像仓库所在region</p>
                     * @return RegistryRegion <p>镜像仓库所在region</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置<p>镜像仓库所在region</p>
                     * @param _registryRegion <p>镜像仓库所在region</p>
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
                     * 获取<p>id</p>
                     * @return Id <p>id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>id</p>
                     * @param _id <p>id</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageId <p>镜像id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageId <p>镜像id</p>
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
                     * 获取<p>镜像创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return ImageCreateTime <p>镜像创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 设置<p>镜像创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _imageCreateTime <p>镜像创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
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
                     * 获取<p>是否是最新镜像</p>
                     * @return IsLatestImage <p>是否是最新镜像</p>
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置<p>是否是最新镜像</p>
                     * @param _isLatestImage <p>是否是最新镜像</p>
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
                     * 获取<p>低风险漏洞数</p>
                     * @return LowLevelVulCnt <p>低风险漏洞数</p>
                     * 
                     */
                    uint64_t GetLowLevelVulCnt() const;

                    /**
                     * 设置<p>低风险漏洞数</p>
                     * @param _lowLevelVulCnt <p>低风险漏洞数</p>
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
                     * 获取<p>中风险漏洞数</p>
                     * @return MediumLevelVulCnt <p>中风险漏洞数</p>
                     * 
                     */
                    uint64_t GetMediumLevelVulCnt() const;

                    /**
                     * 设置<p>中风险漏洞数</p>
                     * @param _mediumLevelVulCnt <p>中风险漏洞数</p>
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
                     * 获取<p>高风险漏洞数</p>
                     * @return HighLevelVulCnt <p>高风险漏洞数</p>
                     * 
                     */
                    uint64_t GetHighLevelVulCnt() const;

                    /**
                     * 设置<p>高风险漏洞数</p>
                     * @param _highLevelVulCnt <p>高风险漏洞数</p>
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
                     * 获取<p>严重风险漏洞数</p>
                     * @return CriticalLevelVulCnt <p>严重风险漏洞数</p>
                     * 
                     */
                    uint64_t GetCriticalLevelVulCnt() const;

                    /**
                     * 设置<p>严重风险漏洞数</p>
                     * @param _criticalLevelVulCnt <p>严重风险漏洞数</p>
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
                     * 获取<p>所属账号名</p>
                     * @return OwnerAccountName <p>所属账号名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>所属账号名</p>
                     * @param _ownerAccountName <p>所属账号名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>所属账号appid</p>
                     * @return OwnerAppId <p>所属账号appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>所属账号appid</p>
                     * @param _ownerAppId <p>所属账号appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>所属账号uin</p>
                     * @return OwnerUin <p>所属账号uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>所属账号uin</p>
                     * @param _ownerUin <p>所属账号uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>低危木马数</p>
                     * @return LowLevelVirusCnt <p>低危木马数</p>
                     * 
                     */
                    uint64_t GetLowLevelVirusCnt() const;

                    /**
                     * 设置<p>低危木马数</p>
                     * @param _lowLevelVirusCnt <p>低危木马数</p>
                     * 
                     */
                    void SetLowLevelVirusCnt(const uint64_t& _lowLevelVirusCnt);

                    /**
                     * 判断参数 LowLevelVirusCnt 是否已赋值
                     * @return LowLevelVirusCnt 是否已赋值
                     * 
                     */
                    bool LowLevelVirusCntHasBeenSet() const;

                    /**
                     * 获取<p>中危木马数</p>
                     * @return MediumLevelVirusCnt <p>中危木马数</p>
                     * 
                     */
                    uint64_t GetMediumLevelVirusCnt() const;

                    /**
                     * 设置<p>中危木马数</p>
                     * @param _mediumLevelVirusCnt <p>中危木马数</p>
                     * 
                     */
                    void SetMediumLevelVirusCnt(const uint64_t& _mediumLevelVirusCnt);

                    /**
                     * 判断参数 MediumLevelVirusCnt 是否已赋值
                     * @return MediumLevelVirusCnt 是否已赋值
                     * 
                     */
                    bool MediumLevelVirusCntHasBeenSet() const;

                    /**
                     * 获取<p>高危木马数</p>
                     * @return HighLevelVirusCnt <p>高危木马数</p>
                     * 
                     */
                    uint64_t GetHighLevelVirusCnt() const;

                    /**
                     * 设置<p>高危木马数</p>
                     * @param _highLevelVirusCnt <p>高危木马数</p>
                     * 
                     */
                    void SetHighLevelVirusCnt(const uint64_t& _highLevelVirusCnt);

                    /**
                     * 判断参数 HighLevelVirusCnt 是否已赋值
                     * @return HighLevelVirusCnt 是否已赋值
                     * 
                     */
                    bool HighLevelVirusCntHasBeenSet() const;

                    /**
                     * 获取<p>严重木马数</p>
                     * @return CriticalLevelVirusCnt <p>严重木马数</p>
                     * 
                     */
                    uint64_t GetCriticalLevelVirusCnt() const;

                    /**
                     * 设置<p>严重木马数</p>
                     * @param _criticalLevelVirusCnt <p>严重木马数</p>
                     * 
                     */
                    void SetCriticalLevelVirusCnt(const uint64_t& _criticalLevelVirusCnt);

                    /**
                     * 判断参数 CriticalLevelVirusCnt 是否已赋值
                     * @return CriticalLevelVirusCnt 是否已赋值
                     * 
                     */
                    bool CriticalLevelVirusCntHasBeenSet() const;

                    /**
                     * 获取<p>应急漏洞数</p>
                     * @return EmergencyVulCnt <p>应急漏洞数</p>
                     * 
                     */
                    uint64_t GetEmergencyVulCnt() const;

                    /**
                     * 设置<p>应急漏洞数</p>
                     * @param _emergencyVulCnt <p>应急漏洞数</p>
                     * 
                     */
                    void SetEmergencyVulCnt(const uint64_t& _emergencyVulCnt);

                    /**
                     * 判断参数 EmergencyVulCnt 是否已赋值
                     * @return EmergencyVulCnt 是否已赋值
                     * 
                     */
                    bool EmergencyVulCntHasBeenSet() const;

                    /**
                     * 获取<p>低危敏感信息数</p>
                     * @return LowLevelSensitiveCnt <p>低危敏感信息数</p>
                     * 
                     */
                    uint64_t GetLowLevelSensitiveCnt() const;

                    /**
                     * 设置<p>低危敏感信息数</p>
                     * @param _lowLevelSensitiveCnt <p>低危敏感信息数</p>
                     * 
                     */
                    void SetLowLevelSensitiveCnt(const uint64_t& _lowLevelSensitiveCnt);

                    /**
                     * 判断参数 LowLevelSensitiveCnt 是否已赋值
                     * @return LowLevelSensitiveCnt 是否已赋值
                     * 
                     */
                    bool LowLevelSensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>中危敏感信息数</p>
                     * @return MediumLevelSensitiveCnt <p>中危敏感信息数</p>
                     * 
                     */
                    uint64_t GetMediumLevelSensitiveCnt() const;

                    /**
                     * 设置<p>中危敏感信息数</p>
                     * @param _mediumLevelSensitiveCnt <p>中危敏感信息数</p>
                     * 
                     */
                    void SetMediumLevelSensitiveCnt(const uint64_t& _mediumLevelSensitiveCnt);

                    /**
                     * 判断参数 MediumLevelSensitiveCnt 是否已赋值
                     * @return MediumLevelSensitiveCnt 是否已赋值
                     * 
                     */
                    bool MediumLevelSensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>高危敏感信息数</p>
                     * @return HighLevelSensitiveCnt <p>高危敏感信息数</p>
                     * 
                     */
                    uint64_t GetHighLevelSensitiveCnt() const;

                    /**
                     * 设置<p>高危敏感信息数</p>
                     * @param _highLevelSensitiveCnt <p>高危敏感信息数</p>
                     * 
                     */
                    void SetHighLevelSensitiveCnt(const uint64_t& _highLevelSensitiveCnt);

                    /**
                     * 判断参数 HighLevelSensitiveCnt 是否已赋值
                     * @return HighLevelSensitiveCnt 是否已赋值
                     * 
                     */
                    bool HighLevelSensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>严重敏感信息数</p>
                     * @return CriticalLevelSensitiveCnt <p>严重敏感信息数</p>
                     * 
                     */
                    uint64_t GetCriticalLevelSensitiveCnt() const;

                    /**
                     * 设置<p>严重敏感信息数</p>
                     * @param _criticalLevelSensitiveCnt <p>严重敏感信息数</p>
                     * 
                     */
                    void SetCriticalLevelSensitiveCnt(const uint64_t& _criticalLevelSensitiveCnt);

                    /**
                     * 判断参数 CriticalLevelSensitiveCnt 是否已赋值
                     * @return CriticalLevelSensitiveCnt 是否已赋值
                     * 
                     */
                    bool CriticalLevelSensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>风险数</p>
                     * @return RiskCnt <p>风险数</p>
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 设置<p>风险数</p>
                     * @param _riskCnt <p>风险数</p>
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
                     * 获取<p>扫描失败原因</p>
                     * @return ScanFailReason <p>扫描失败原因</p>
                     * 
                     */
                    std::string GetScanFailReason() const;

                    /**
                     * 设置<p>扫描失败原因</p>
                     * @param _scanFailReason <p>扫描失败原因</p>
                     * 
                     */
                    void SetScanFailReason(const std::string& _scanFailReason);

                    /**
                     * 判断参数 ScanFailReason 是否已赋值
                     * @return ScanFailReason 是否已赋值
                     * 
                     */
                    bool ScanFailReasonHasBeenSet() const;

                    /**
                     * 获取<p>扫描失败解决方案</p>
                     * @return ScanSolution <p>扫描失败解决方案</p>
                     * 
                     */
                    std::string GetScanSolution() const;

                    /**
                     * 设置<p>扫描失败解决方案</p>
                     * @param _scanSolution <p>扫描失败解决方案</p>
                     * 
                     */
                    void SetScanSolution(const std::string& _scanSolution);

                    /**
                     * 判断参数 ScanSolution 是否已赋值
                     * @return ScanSolution 是否已赋值
                     * 
                     */
                    bool ScanSolutionHasBeenSet() const;

                    /**
                     * 获取<p>地域信息</p>
                     * @return RegionInfo <p>地域信息</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>地域信息</p>
                     * @param _regionInfo <p>地域信息</p>
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取<p>最近扫描任务Id</p>
                     * @return ScanTaskId <p>最近扫描任务Id</p>
                     * 
                     */
                    uint64_t GetScanTaskId() const;

                    /**
                     * 设置<p>最近扫描任务Id</p>
                     * @param _scanTaskId <p>最近扫描任务Id</p>
                     * 
                     */
                    void SetScanTaskId(const uint64_t& _scanTaskId);

                    /**
                     * 判断参数 ScanTaskId 是否已赋值
                     * @return ScanTaskId 是否已赋值
                     * 
                     */
                    bool ScanTaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>镜像仓库地址</p>
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * <p>镜像摘要</p>
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * <p>镜像仓库类型</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>镜像名</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>镜像tag</p>
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * <p>镜像大小</p>
                     */
                    uint64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * <p>最后扫描时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * <p>扫描状态</p><p>枚举值：</p><ul><li>INIT： 未扫描</li><li>SCANNING： 扫描中</li><li>FINISH： 扫描成功</li><li>TIMEOUT： 扫描超时</li><li>FAILED： 扫描失败</li><li>STOPPING： 终止中</li><li>CANCELLED： 扫描已取消</li><li>CREATING： 扫描任务创建中</li><li>LICENSE_NOT_ENOUGH： 授权不足</li></ul>
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * <p>漏洞数</p>
                     */
                    uint64_t m_vulCnt;
                    bool m_vulCntHasBeenSet;

                    /**
                     * <p>木马数</p>
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * <p>敏感信息数</p>
                     */
                    uint64_t m_sensitiveCnt;
                    bool m_sensitiveCntHasBeenSet;

                    /**
                     * <p>镜像操作系统</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>所属仓库实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>所属镜像仓库实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>是否授权</p>
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * <p>镜像仓库所在region</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>镜像创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * <p>是否是最新镜像</p>
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * <p>低风险漏洞数</p>
                     */
                    uint64_t m_lowLevelVulCnt;
                    bool m_lowLevelVulCntHasBeenSet;

                    /**
                     * <p>中风险漏洞数</p>
                     */
                    uint64_t m_mediumLevelVulCnt;
                    bool m_mediumLevelVulCntHasBeenSet;

                    /**
                     * <p>高风险漏洞数</p>
                     */
                    uint64_t m_highLevelVulCnt;
                    bool m_highLevelVulCntHasBeenSet;

                    /**
                     * <p>严重风险漏洞数</p>
                     */
                    uint64_t m_criticalLevelVulCnt;
                    bool m_criticalLevelVulCntHasBeenSet;

                    /**
                     * <p>所属账号名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>所属账号appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>所属账号uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>低危木马数</p>
                     */
                    uint64_t m_lowLevelVirusCnt;
                    bool m_lowLevelVirusCntHasBeenSet;

                    /**
                     * <p>中危木马数</p>
                     */
                    uint64_t m_mediumLevelVirusCnt;
                    bool m_mediumLevelVirusCntHasBeenSet;

                    /**
                     * <p>高危木马数</p>
                     */
                    uint64_t m_highLevelVirusCnt;
                    bool m_highLevelVirusCntHasBeenSet;

                    /**
                     * <p>严重木马数</p>
                     */
                    uint64_t m_criticalLevelVirusCnt;
                    bool m_criticalLevelVirusCntHasBeenSet;

                    /**
                     * <p>应急漏洞数</p>
                     */
                    uint64_t m_emergencyVulCnt;
                    bool m_emergencyVulCntHasBeenSet;

                    /**
                     * <p>低危敏感信息数</p>
                     */
                    uint64_t m_lowLevelSensitiveCnt;
                    bool m_lowLevelSensitiveCntHasBeenSet;

                    /**
                     * <p>中危敏感信息数</p>
                     */
                    uint64_t m_mediumLevelSensitiveCnt;
                    bool m_mediumLevelSensitiveCntHasBeenSet;

                    /**
                     * <p>高危敏感信息数</p>
                     */
                    uint64_t m_highLevelSensitiveCnt;
                    bool m_highLevelSensitiveCntHasBeenSet;

                    /**
                     * <p>严重敏感信息数</p>
                     */
                    uint64_t m_criticalLevelSensitiveCnt;
                    bool m_criticalLevelSensitiveCntHasBeenSet;

                    /**
                     * <p>风险数</p>
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * <p>扫描失败原因</p>
                     */
                    std::string m_scanFailReason;
                    bool m_scanFailReasonHasBeenSet;

                    /**
                     * <p>扫描失败解决方案</p>
                     */
                    std::string m_scanSolution;
                    bool m_scanSolutionHasBeenSet;

                    /**
                     * <p>地域信息</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>最近扫描任务Id</p>
                     */
                    uint64_t m_scanTaskId;
                    bool m_scanTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSETINFO_H_
