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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SUBNETASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SUBNETASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 子网资产
                */
                class SubnetAsset : public AbstractModel
                {
                public:
                    SubnetAsset();
                    ~SubnetAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取uin
                     * @return Uin uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置uin
                     * @param _uin uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取资产ID
                     * @return AssetId 资产ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产ID
                     * @param _assetId 资产ID
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取资产名
                     * @return AssetName 资产名
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名
                     * @param _assetName 资产名
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param _region 区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取私有网络id
                     * @return VpcId 私有网络id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络id
                     * @param _vpcId 私有网络id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络名
                     * @return VpcName 私有网络名
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名
                     * @param _vpcName 私有网络名
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return Nick 昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置昵称
                     * @param _nick 昵称
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取cidr
                     * @return CIDR cidr
                     * 
                     */
                    std::string GetCIDR() const;

                    /**
                     * 设置cidr
                     * @param _cIDR cidr
                     * 
                     */
                    void SetCIDR(const std::string& _cIDR);

                    /**
                     * 判断参数 CIDR 是否已赋值
                     * @return CIDR 是否已赋值
                     * 
                     */
                    bool CIDRHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取cvm数
                     * @return CVM cvm数
                     * 
                     */
                    int64_t GetCVM() const;

                    /**
                     * 设置cvm数
                     * @param _cVM cvm数
                     * 
                     */
                    void SetCVM(const int64_t& _cVM);

                    /**
                     * 判断参数 CVM 是否已赋值
                     * @return CVM 是否已赋值
                     * 
                     */
                    bool CVMHasBeenSet() const;

                    /**
                     * 获取可用ip数
                     * @return AvailableIp 可用ip数
                     * 
                     */
                    int64_t GetAvailableIp() const;

                    /**
                     * 设置可用ip数
                     * @param _availableIp 可用ip数
                     * 
                     */
                    void SetAvailableIp(const int64_t& _availableIp);

                    /**
                     * 判断参数 AvailableIp 是否已赋值
                     * @return AvailableIp 是否已赋值
                     * 
                     */
                    bool AvailableIpHasBeenSet() const;

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
                     * 获取配置风险
                     * @return ConfigureRisk 配置风险
                     * 
                     */
                    int64_t GetConfigureRisk() const;

                    /**
                     * 设置配置风险
                     * @param _configureRisk 配置风险
                     * 
                     */
                    void SetConfigureRisk(const int64_t& _configureRisk);

                    /**
                     * 判断参数 ConfigureRisk 是否已赋值
                     * @return ConfigureRisk 是否已赋值
                     * 
                     */
                    bool ConfigureRiskHasBeenSet() const;

                    /**
                     * 获取任务数
                     * @return ScanTask 任务数
                     * 
                     */
                    int64_t GetScanTask() const;

                    /**
                     * 设置任务数
                     * @param _scanTask 任务数
                     * 
                     */
                    void SetScanTask(const int64_t& _scanTask);

                    /**
                     * 判断参数 ScanTask 是否已赋值
                     * @return ScanTask 是否已赋值
                     * 
                     */
                    bool ScanTaskHasBeenSet() const;

                    /**
                     * 获取最后扫描时间
                     * @return LastScanTime 最后扫描时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后扫描时间
                     * @param _lastScanTime 最后扫描时间
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取是否核心
                     * @return IsCore 是否核心
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置是否核心
                     * @param _isCore 是否核心
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取是否新资产 1新
                     * @return IsNewAsset 是否新资产 1新
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置是否新资产 1新
                     * @param _isNewAsset 是否新资产 1新
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 资产ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 私有网络id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * cidr
                     */
                    std::string m_cIDR;
                    bool m_cIDRHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * cvm数
                     */
                    int64_t m_cVM;
                    bool m_cVMHasBeenSet;

                    /**
                     * 可用ip数
                     */
                    int64_t m_availableIp;
                    bool m_availableIpHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 配置风险
                     */
                    int64_t m_configureRisk;
                    bool m_configureRiskHasBeenSet;

                    /**
                     * 任务数
                     */
                    int64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * 最后扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 是否核心
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * 是否新资产 1新
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SUBNETASSET_H_
