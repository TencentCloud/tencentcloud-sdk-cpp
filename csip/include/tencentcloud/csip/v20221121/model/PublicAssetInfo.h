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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PUBLICASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PUBLICASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>
#include <tencentcloud/csip/v20221121/model/CustomTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 资产信息
                */
                class PublicAssetInfo : public AbstractModel
                {
                public:
                    PublicAssetInfo();
                    ~PublicAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>租户ID</p>
                     * @return AppID <p>租户ID</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>租户ID</p>
                     * @param _appID <p>租户ID</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>云厂商</p>
                     * @return Provider <p>云厂商</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>云厂商</p>
                     * @param _provider <p>云厂商</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>云厂商名称</p>
                     * @return ProviderName <p>云厂商名称</p>
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置<p>云厂商名称</p>
                     * @param _providerName <p>云厂商名称</p>
                     * 
                     */
                    void SetProviderName(const std::string& _providerName);

                    /**
                     * 判断参数 ProviderName 是否已赋值
                     * @return ProviderName 是否已赋值
                     * 
                     */
                    bool ProviderNameHasBeenSet() const;

                    /**
                     * 获取<p>云账号ID</p>
                     * @return CloudAccountID <p>云账号ID</p>
                     * 
                     */
                    std::string GetCloudAccountID() const;

                    /**
                     * 设置<p>云账号ID</p>
                     * @param _cloudAccountID <p>云账号ID</p>
                     * 
                     */
                    void SetCloudAccountID(const std::string& _cloudAccountID);

                    /**
                     * 判断参数 CloudAccountID 是否已赋值
                     * @return CloudAccountID 是否已赋值
                     * 
                     */
                    bool CloudAccountIDHasBeenSet() const;

                    /**
                     * 获取<p>云账号名称</p>
                     * @return CloudAccountName <p>云账号名称</p>
                     * 
                     */
                    std::string GetCloudAccountName() const;

                    /**
                     * 设置<p>云账号名称</p>
                     * @param _cloudAccountName <p>云账号名称</p>
                     * 
                     */
                    void SetCloudAccountName(const std::string& _cloudAccountName);

                    /**
                     * 判断参数 CloudAccountName 是否已赋值
                     * @return CloudAccountName 是否已赋值
                     * 
                     */
                    bool CloudAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>资产ID</p>
                     * @return AssetID <p>资产ID</p>
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置<p>资产ID</p>
                     * @param _assetID <p>资产ID</p>
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取<p>资产名称</p>
                     * @return AssetName <p>资产名称</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>资产名称</p>
                     * @param _assetName <p>资产名称</p>
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
                     * 获取<p>资产类型</p>
                     * @return AssetType <p>资产类型</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型</p>
                     * @param _assetType <p>资产类型</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产类型名称</p>
                     * @return AssetTypeName <p>资产类型名称</p>
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置<p>资产类型名称</p>
                     * @param _assetTypeName <p>资产类型名称</p>
                     * 
                     */
                    void SetAssetTypeName(const std::string& _assetTypeName);

                    /**
                     * 判断参数 AssetTypeName 是否已赋值
                     * @return AssetTypeName 是否已赋值
                     * 
                     */
                    bool AssetTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>资产标签</p>
                     * @return Tags <p>资产标签</p>
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置<p>资产标签</p>
                     * @param _tags <p>资产标签</p>
                     * 
                     */
                    void SetTags(const std::vector<AssetTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>公网地址</p>
                     * @return Address <p>公网地址</p>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>公网地址</p>
                     * @param _address <p>公网地址</p>
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>公网地址类型</p>
                     * @return AddressType <p>公网地址类型</p>
                     * 
                     */
                    std::string GetAddressType() const;

                    /**
                     * 设置<p>公网地址类型</p>
                     * @param _addressType <p>公网地址类型</p>
                     * 
                     */
                    void SetAddressType(const std::string& _addressType);

                    /**
                     * 判断参数 AddressType 是否已赋值
                     * @return AddressType 是否已赋值
                     * 
                     */
                    bool AddressTypeHasBeenSet() const;

                    /**
                     * 获取<p>解析地址</p>
                     * @return ResolvedAddress <p>解析地址</p>
                     * 
                     */
                    std::vector<std::string> GetResolvedAddress() const;

                    /**
                     * 设置<p>解析地址</p>
                     * @param _resolvedAddress <p>解析地址</p>
                     * 
                     */
                    void SetResolvedAddress(const std::vector<std::string>& _resolvedAddress);

                    /**
                     * 判断参数 ResolvedAddress 是否已赋值
                     * @return ResolvedAddress 是否已赋值
                     * 
                     */
                    bool ResolvedAddressHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>防护状态</p>
                     * @return ProtectStatus <p>防护状态</p>
                     * 
                     */
                    uint64_t GetProtectStatus() const;

                    /**
                     * 设置<p>防护状态</p>
                     * @param _protectStatus <p>防护状态</p>
                     * 
                     */
                    void SetProtectStatus(const uint64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     * 
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取<p>风险数量</p>
                     * @return RiskCount <p>风险数量</p>
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置<p>风险数量</p>
                     * @param _riskCount <p>风险数量</p>
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>告警数量</p>
                     * @return AlarmCount <p>告警数量</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置<p>告警数量</p>
                     * @param _alarmCount <p>告警数量</p>
                     * 
                     */
                    void SetAlarmCount(const uint64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取<p>实例创建时间</p>
                     * @return CreatedAt <p>实例创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>实例创建时间</p>
                     * @param _createdAt <p>实例创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>首次同步时间</p>
                     * @return FirstSyncTime <p>首次同步时间</p>
                     * 
                     */
                    std::string GetFirstSyncTime() const;

                    /**
                     * 设置<p>首次同步时间</p>
                     * @param _firstSyncTime <p>首次同步时间</p>
                     * 
                     */
                    void SetFirstSyncTime(const std::string& _firstSyncTime);

                    /**
                     * 判断参数 FirstSyncTime 是否已赋值
                     * @return FirstSyncTime 是否已赋值
                     * 
                     */
                    bool FirstSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>严重风险总数</p>
                     * @return CriticalRiskCount <p>严重风险总数</p>
                     * 
                     */
                    uint64_t GetCriticalRiskCount() const;

                    /**
                     * 设置<p>严重风险总数</p>
                     * @param _criticalRiskCount <p>严重风险总数</p>
                     * 
                     */
                    void SetCriticalRiskCount(const uint64_t& _criticalRiskCount);

                    /**
                     * 判断参数 CriticalRiskCount 是否已赋值
                     * @return CriticalRiskCount 是否已赋值
                     * 
                     */
                    bool CriticalRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>高风险总数</p>
                     * @return HighRiskCount <p>高风险总数</p>
                     * 
                     */
                    uint64_t GetHighRiskCount() const;

                    /**
                     * 设置<p>高风险总数</p>
                     * @param _highRiskCount <p>高风险总数</p>
                     * 
                     */
                    void SetHighRiskCount(const uint64_t& _highRiskCount);

                    /**
                     * 判断参数 HighRiskCount 是否已赋值
                     * @return HighRiskCount 是否已赋值
                     * 
                     */
                    bool HighRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>中风险总数</p>
                     * @return MediumRiskCount <p>中风险总数</p>
                     * 
                     */
                    uint64_t GetMediumRiskCount() const;

                    /**
                     * 设置<p>中风险总数</p>
                     * @param _mediumRiskCount <p>中风险总数</p>
                     * 
                     */
                    void SetMediumRiskCount(const uint64_t& _mediumRiskCount);

                    /**
                     * 判断参数 MediumRiskCount 是否已赋值
                     * @return MediumRiskCount 是否已赋值
                     * 
                     */
                    bool MediumRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>低风险总数</p>
                     * @return LowRiskCount <p>低风险总数</p>
                     * 
                     */
                    uint64_t GetLowRiskCount() const;

                    /**
                     * 设置<p>低风险总数</p>
                     * @param _lowRiskCount <p>低风险总数</p>
                     * 
                     */
                    void SetLowRiskCount(const uint64_t& _lowRiskCount);

                    /**
                     * 判断参数 LowRiskCount 是否已赋值
                     * @return LowRiskCount 是否已赋值
                     * 
                     */
                    bool LowRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>资产唯一ID</p>
                     * @return AssetRID <p>资产唯一ID</p>
                     * 
                     */
                    std::string GetAssetRID() const;

                    /**
                     * 设置<p>资产唯一ID</p>
                     * @param _assetRID <p>资产唯一ID</p>
                     * 
                     */
                    void SetAssetRID(const std::string& _assetRID);

                    /**
                     * 判断参数 AssetRID 是否已赋值
                     * @return AssetRID 是否已赋值
                     * 
                     */
                    bool AssetRIDHasBeenSet() const;

                    /**
                     * 获取<p>云安全中心标签</p>
                     * @return CustomTags <p>云安全中心标签</p>
                     * 
                     */
                    std::vector<CustomTag> GetCustomTags() const;

                    /**
                     * 设置<p>云安全中心标签</p>
                     * @param _customTags <p>云安全中心标签</p>
                     * 
                     */
                    void SetCustomTags(const std::vector<CustomTag>& _customTags);

                    /**
                     * 判断参数 CustomTags 是否已赋值
                     * @return CustomTags 是否已赋值
                     * 
                     */
                    bool CustomTagsHasBeenSet() const;

                    /**
                     * 获取<p>资产类型图标</p>
                     * @return AssetTypeIconURL <p>资产类型图标</p>
                     * 
                     */
                    std::string GetAssetTypeIconURL() const;

                    /**
                     * 设置<p>资产类型图标</p>
                     * @param _assetTypeIconURL <p>资产类型图标</p>
                     * 
                     */
                    void SetAssetTypeIconURL(const std::string& _assetTypeIconURL);

                    /**
                     * 判断参数 AssetTypeIconURL 是否已赋值
                     * @return AssetTypeIconURL 是否已赋值
                     * 
                     */
                    bool AssetTypeIconURLHasBeenSet() const;

                private:

                    /**
                     * <p>租户ID</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>云厂商</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>云厂商名称</p>
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * <p>云账号ID</p>
                     */
                    std::string m_cloudAccountID;
                    bool m_cloudAccountIDHasBeenSet;

                    /**
                     * <p>云账号名称</p>
                     */
                    std::string m_cloudAccountName;
                    bool m_cloudAccountNameHasBeenSet;

                    /**
                     * <p>资产ID</p>
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * <p>资产名称</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>资产类型</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>资产类型名称</p>
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * <p>资产标签</p>
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>公网地址</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>公网地址类型</p>
                     */
                    std::string m_addressType;
                    bool m_addressTypeHasBeenSet;

                    /**
                     * <p>解析地址</p>
                     */
                    std::vector<std::string> m_resolvedAddress;
                    bool m_resolvedAddressHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>防护状态</p>
                     */
                    uint64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * <p>风险数量</p>
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>告警数量</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * <p>实例创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>首次同步时间</p>
                     */
                    std::string m_firstSyncTime;
                    bool m_firstSyncTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>严重风险总数</p>
                     */
                    uint64_t m_criticalRiskCount;
                    bool m_criticalRiskCountHasBeenSet;

                    /**
                     * <p>高风险总数</p>
                     */
                    uint64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * <p>中风险总数</p>
                     */
                    uint64_t m_mediumRiskCount;
                    bool m_mediumRiskCountHasBeenSet;

                    /**
                     * <p>低风险总数</p>
                     */
                    uint64_t m_lowRiskCount;
                    bool m_lowRiskCountHasBeenSet;

                    /**
                     * <p>资产唯一ID</p>
                     */
                    std::string m_assetRID;
                    bool m_assetRIDHasBeenSet;

                    /**
                     * <p>云安全中心标签</p>
                     */
                    std::vector<CustomTag> m_customTags;
                    bool m_customTagsHasBeenSet;

                    /**
                     * <p>资产类型图标</p>
                     */
                    std::string m_assetTypeIconURL;
                    bool m_assetTypeIconURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PUBLICASSETINFO_H_
