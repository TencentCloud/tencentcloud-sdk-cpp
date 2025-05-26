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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_

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
                * 域名资产
                */
                class DomainAssetVO : public AbstractModel
                {
                public:
                    DomainAssetVO();
                    ~DomainAssetVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::vector<std::string> GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::vector<std::string>& _assetId);

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
                    std::vector<std::string> GetAssetName() const;

                    /**
                     * 设置资产名
                     * @param _assetName 资产名
                     * 
                     */
                    void SetAssetName(const std::vector<std::string>& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::vector<std::string> GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::vector<std::string>& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Waf状态
                     * @return WAFStatus Waf状态
                     * 
                     */
                    uint64_t GetWAFStatus() const;

                    /**
                     * 设置Waf状态
                     * @param _wAFStatus Waf状态
                     * 
                     */
                    void SetWAFStatus(const uint64_t& _wAFStatus);

                    /**
                     * 判断参数 WAFStatus 是否已赋值
                     * @return WAFStatus 是否已赋值
                     * 
                     */
                    bool WAFStatusHasBeenSet() const;

                    /**
                     * 获取资产创建时间
                     * @return AssetCreateTime 资产创建时间
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置资产创建时间
                     * @param _assetCreateTime 资产创建时间
                     * 
                     */
                    void SetAssetCreateTime(const std::string& _assetCreateTime);

                    /**
                     * 判断参数 AssetCreateTime 是否已赋值
                     * @return AssetCreateTime 是否已赋值
                     * 
                     */
                    bool AssetCreateTimeHasBeenSet() const;

                    /**
                     * 获取Appid
                     * @return AppId Appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Appid
                     * @param _appId Appid
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取账号id
                     * @return Uin 账号id
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号id
                     * @param _uin 账号id
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
                     * 获取账号名称
                     * @return NickName 账号名称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置账号名称
                     * @param _nickName 账号名称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

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
                     * 获取是否云上资产
                     * @return IsCloud 是否云上资产
                     * 
                     */
                    uint64_t GetIsCloud() const;

                    /**
                     * 设置是否云上资产
                     * @param _isCloud 是否云上资产
                     * 
                     */
                    void SetIsCloud(const uint64_t& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取网络攻击
                     * @return Attack 网络攻击
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置网络攻击
                     * @param _attack 网络攻击
                     * 
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取网络访问
                     * @return Access 网络访问
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置网络访问
                     * @param _access 网络访问
                     * 
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取网络拦截
                     * @return Intercept 网络拦截
                     * 
                     */
                    uint64_t GetIntercept() const;

                    /**
                     * 设置网络拦截
                     * @param _intercept 网络拦截
                     * 
                     */
                    void SetIntercept(const uint64_t& _intercept);

                    /**
                     * 判断参数 Intercept 是否已赋值
                     * @return Intercept 是否已赋值
                     * 
                     */
                    bool InterceptHasBeenSet() const;

                    /**
                     * 获取入站峰值带宽
                     * @return InBandwidth 入站峰值带宽
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置入站峰值带宽
                     * @param _inBandwidth 入站峰值带宽
                     * 
                     */
                    void SetInBandwidth(const std::string& _inBandwidth);

                    /**
                     * 判断参数 InBandwidth 是否已赋值
                     * @return InBandwidth 是否已赋值
                     * 
                     */
                    bool InBandwidthHasBeenSet() const;

                    /**
                     * 获取出站峰值带宽
                     * @return OutBandwidth 出站峰值带宽
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置出站峰值带宽
                     * @param _outBandwidth 出站峰值带宽
                     * 
                     */
                    void SetOutBandwidth(const std::string& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取入站累计流量
                     * @return InFlow 入站累计流量
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置入站累计流量
                     * @param _inFlow 入站累计流量
                     * 
                     */
                    void SetInFlow(const std::string& _inFlow);

                    /**
                     * 判断参数 InFlow 是否已赋值
                     * @return InFlow 是否已赋值
                     * 
                     */
                    bool InFlowHasBeenSet() const;

                    /**
                     * 获取出站累计流量
                     * @return OutFlow 出站累计流量
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置出站累计流量
                     * @param _outFlow 出站累计流量
                     * 
                     */
                    void SetOutFlow(const std::string& _outFlow);

                    /**
                     * 判断参数 OutFlow 是否已赋值
                     * @return OutFlow 是否已赋值
                     * 
                     */
                    bool OutFlowHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
                     * @return LastScanTime 最近扫描时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最近扫描时间
                     * @param _lastScanTime 最近扫描时间
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
                     * 获取端口风险
                     * @return PortRisk 端口风险
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置端口风险
                     * @param _portRisk 端口风险
                     * 
                     */
                    void SetPortRisk(const uint64_t& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     * 
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取漏洞风险
                     * @return VulnerabilityRisk 漏洞风险
                     * 
                     */
                    uint64_t GetVulnerabilityRisk() const;

                    /**
                     * 设置漏洞风险
                     * @param _vulnerabilityRisk 漏洞风险
                     * 
                     */
                    void SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk);

                    /**
                     * 判断参数 VulnerabilityRisk 是否已赋值
                     * @return VulnerabilityRisk 是否已赋值
                     * 
                     */
                    bool VulnerabilityRiskHasBeenSet() const;

                    /**
                     * 获取配置风险
                     * @return ConfigurationRisk 配置风险
                     * 
                     */
                    uint64_t GetConfigurationRisk() const;

                    /**
                     * 设置配置风险
                     * @param _configurationRisk 配置风险
                     * 
                     */
                    void SetConfigurationRisk(const uint64_t& _configurationRisk);

                    /**
                     * 判断参数 ConfigurationRisk 是否已赋值
                     * @return ConfigurationRisk 是否已赋值
                     * 
                     */
                    bool ConfigurationRiskHasBeenSet() const;

                    /**
                     * 获取扫描任务
                     * @return ScanTask 扫描任务
                     * 
                     */
                    uint64_t GetScanTask() const;

                    /**
                     * 设置扫描任务
                     * @param _scanTask 扫描任务
                     * 
                     */
                    void SetScanTask(const uint64_t& _scanTask);

                    /**
                     * 判断参数 ScanTask 是否已赋值
                     * @return ScanTask 是否已赋值
                     * 
                     */
                    bool ScanTaskHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return SubDomain 域名
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置域名
                     * @param _subDomain 域名
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取解析ip
                     * @return SeverIp 解析ip
                     * 
                     */
                    std::vector<std::string> GetSeverIp() const;

                    /**
                     * 设置解析ip
                     * @param _severIp 解析ip
                     * 
                     */
                    void SetSeverIp(const std::vector<std::string>& _severIp);

                    /**
                     * 判断参数 SeverIp 是否已赋值
                     * @return SeverIp 是否已赋值
                     * 
                     */
                    bool SeverIpHasBeenSet() const;

                    /**
                     * 获取bot攻击数量
                     * @return BotCount bot攻击数量
                     * 
                     */
                    uint64_t GetBotCount() const;

                    /**
                     * 设置bot攻击数量
                     * @param _botCount bot攻击数量
                     * 
                     */
                    void SetBotCount(const uint64_t& _botCount);

                    /**
                     * 判断参数 BotCount 是否已赋值
                     * @return BotCount 是否已赋值
                     * 
                     */
                    bool BotCountHasBeenSet() const;

                    /**
                     * 获取弱口令风险
                     * @return WeakPassword 弱口令风险
                     * 
                     */
                    uint64_t GetWeakPassword() const;

                    /**
                     * 设置弱口令风险
                     * @param _weakPassword 弱口令风险
                     * 
                     */
                    void SetWeakPassword(const uint64_t& _weakPassword);

                    /**
                     * 判断参数 WeakPassword 是否已赋值
                     * @return WeakPassword 是否已赋值
                     * 
                     */
                    bool WeakPasswordHasBeenSet() const;

                    /**
                     * 获取内容风险
                     * @return WebContentRisk 内容风险
                     * 
                     */
                    uint64_t GetWebContentRisk() const;

                    /**
                     * 设置内容风险
                     * @param _webContentRisk 内容风险
                     * 
                     */
                    void SetWebContentRisk(const uint64_t& _webContentRisk);

                    /**
                     * 判断参数 WebContentRisk 是否已赋值
                     * @return WebContentRisk 是否已赋值
                     * 
                     */
                    bool WebContentRiskHasBeenSet() const;

                    /**
                     * 获取tag标签
                     * @return Tag tag标签
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置tag标签
                     * @param _tag tag标签
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
                     * 获取关联实例类型
                     * @return SourceType 关联实例类型
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置关联实例类型
                     * @param _sourceType 关联实例类型
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取memberId信息
                     * @return MemberId memberId信息
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置memberId信息
                     * @param _memberId memberId信息
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取cc攻击
                     * @return CCAttack cc攻击
                     * 
                     */
                    int64_t GetCCAttack() const;

                    /**
                     * 设置cc攻击
                     * @param _cCAttack cc攻击
                     * 
                     */
                    void SetCCAttack(const int64_t& _cCAttack);

                    /**
                     * 判断参数 CCAttack 是否已赋值
                     * @return CCAttack 是否已赋值
                     * 
                     */
                    bool CCAttackHasBeenSet() const;

                    /**
                     * 获取web攻击
                     * @return WebAttack web攻击
                     * 
                     */
                    int64_t GetWebAttack() const;

                    /**
                     * 设置web攻击
                     * @param _webAttack web攻击
                     * 
                     */
                    void SetWebAttack(const int64_t& _webAttack);

                    /**
                     * 判断参数 WebAttack 是否已赋值
                     * @return WebAttack 是否已赋值
                     * 
                     */
                    bool WebAttackHasBeenSet() const;

                    /**
                     * 获取风险服务暴露数量
                     * @return ServiceRisk 风险服务暴露数量
                     * 
                     */
                    uint64_t GetServiceRisk() const;

                    /**
                     * 设置风险服务暴露数量
                     * @param _serviceRisk 风险服务暴露数量
                     * 
                     */
                    void SetServiceRisk(const uint64_t& _serviceRisk);

                    /**
                     * 判断参数 ServiceRisk 是否已赋值
                     * @return ServiceRisk 是否已赋值
                     * 
                     */
                    bool ServiceRiskHasBeenSet() const;

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

                    /**
                     * 获取待确认资产的随机三级域名
                     * @return VerifyDomain 待确认资产的随机三级域名
                     * 
                     */
                    std::string GetVerifyDomain() const;

                    /**
                     * 设置待确认资产的随机三级域名
                     * @param _verifyDomain 待确认资产的随机三级域名
                     * 
                     */
                    void SetVerifyDomain(const std::string& _verifyDomain);

                    /**
                     * 判断参数 VerifyDomain 是否已赋值
                     * @return VerifyDomain 是否已赋值
                     * 
                     */
                    bool VerifyDomainHasBeenSet() const;

                    /**
                     * 获取待确认资产的TXT记录内容
                     * @return VerifyTXTRecord 待确认资产的TXT记录内容
                     * 
                     */
                    std::string GetVerifyTXTRecord() const;

                    /**
                     * 设置待确认资产的TXT记录内容
                     * @param _verifyTXTRecord 待确认资产的TXT记录内容
                     * 
                     */
                    void SetVerifyTXTRecord(const std::string& _verifyTXTRecord);

                    /**
                     * 判断参数 VerifyTXTRecord 是否已赋值
                     * @return VerifyTXTRecord 是否已赋值
                     * 
                     */
                    bool VerifyTXTRecordHasBeenSet() const;

                    /**
                     * 获取待确认资产的认证状态，0-待认证，1-认证成功，2-认证中，3-txt认证失败，4-人工认证失败
                     * @return VerifyStatus 待确认资产的认证状态，0-待认证，1-认证成功，2-认证中，3-txt认证失败，4-人工认证失败
                     * 
                     */
                    int64_t GetVerifyStatus() const;

                    /**
                     * 设置待确认资产的认证状态，0-待认证，1-认证成功，2-认证中，3-txt认证失败，4-人工认证失败
                     * @param _verifyStatus 待确认资产的认证状态，0-待认证，1-认证成功，2-认证中，3-txt认证失败，4-人工认证失败
                     * 
                     */
                    void SetVerifyStatus(const int64_t& _verifyStatus);

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

                    /**
                     * 获取bot访问数量
                     * @return BotAccessCount bot访问数量
                     * 
                     */
                    int64_t GetBotAccessCount() const;

                    /**
                     * 设置bot访问数量
                     * @param _botAccessCount bot访问数量
                     * 
                     */
                    void SetBotAccessCount(const int64_t& _botAccessCount);

                    /**
                     * 判断参数 BotAccessCount 是否已赋值
                     * @return BotAccessCount 是否已赋值
                     * 
                     */
                    bool BotAccessCountHasBeenSet() const;

                private:

                    /**
                     * 资产id
                     */
                    std::vector<std::string> m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::vector<std::string> m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::vector<std::string> m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Waf状态
                     */
                    uint64_t m_wAFStatus;
                    bool m_wAFStatusHasBeenSet;

                    /**
                     * 资产创建时间
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * Appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 账号id
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 账号名称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 是否核心
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * 是否云上资产
                     */
                    uint64_t m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * 网络攻击
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * 网络访问
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * 网络拦截
                     */
                    uint64_t m_intercept;
                    bool m_interceptHasBeenSet;

                    /**
                     * 入站峰值带宽
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * 出站峰值带宽
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * 入站累计流量
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * 出站累计流量
                     */
                    std::string m_outFlow;
                    bool m_outFlowHasBeenSet;

                    /**
                     * 最近扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 端口风险
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * 漏洞风险
                     */
                    uint64_t m_vulnerabilityRisk;
                    bool m_vulnerabilityRiskHasBeenSet;

                    /**
                     * 配置风险
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * 扫描任务
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 解析ip
                     */
                    std::vector<std::string> m_severIp;
                    bool m_severIpHasBeenSet;

                    /**
                     * bot攻击数量
                     */
                    uint64_t m_botCount;
                    bool m_botCountHasBeenSet;

                    /**
                     * 弱口令风险
                     */
                    uint64_t m_weakPassword;
                    bool m_weakPasswordHasBeenSet;

                    /**
                     * 内容风险
                     */
                    uint64_t m_webContentRisk;
                    bool m_webContentRiskHasBeenSet;

                    /**
                     * tag标签
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 关联实例类型
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * memberId信息
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * cc攻击
                     */
                    int64_t m_cCAttack;
                    bool m_cCAttackHasBeenSet;

                    /**
                     * web攻击
                     */
                    int64_t m_webAttack;
                    bool m_webAttackHasBeenSet;

                    /**
                     * 风险服务暴露数量
                     */
                    uint64_t m_serviceRisk;
                    bool m_serviceRiskHasBeenSet;

                    /**
                     * 是否新资产 1新
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * 待确认资产的随机三级域名
                     */
                    std::string m_verifyDomain;
                    bool m_verifyDomainHasBeenSet;

                    /**
                     * 待确认资产的TXT记录内容
                     */
                    std::string m_verifyTXTRecord;
                    bool m_verifyTXTRecordHasBeenSet;

                    /**
                     * 待确认资产的认证状态，0-待认证，1-认证成功，2-认证中，3-txt认证失败，4-人工认证失败
                     */
                    int64_t m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                    /**
                     * bot访问数量
                     */
                    int64_t m_botAccessCount;
                    bool m_botAccessCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_
