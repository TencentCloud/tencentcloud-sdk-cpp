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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IPASSETLISTVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IPASSETLISTVO_H_

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
                * ip列表
                */
                class IpAssetListVO : public AbstractModel
                {
                public:
                    IpAssetListVO();
                    ~IpAssetListVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
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
                     * 获取资产name
                     * @return AssetName 资产name
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产name
                     * @param _assetName 资产name
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
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取云防状态
                     * @return CFWStatus 云防状态
                     * 
                     */
                    uint64_t GetCFWStatus() const;

                    /**
                     * 设置云防状态
                     * @param _cFWStatus 云防状态
                     * 
                     */
                    void SetCFWStatus(const uint64_t& _cFWStatus);

                    /**
                     * 判断参数 CFWStatus 是否已赋值
                     * @return CFWStatus 是否已赋值
                     * 
                     */
                    bool CFWStatusHasBeenSet() const;

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
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取公网ip类型
                     * @return PublicIpType 公网ip类型
                     * 
                     */
                    uint64_t GetPublicIpType() const;

                    /**
                     * 设置公网ip类型
                     * @param _publicIpType 公网ip类型
                     * 
                     */
                    void SetPublicIpType(const uint64_t& _publicIpType);

                    /**
                     * 判断参数 PublicIpType 是否已赋值
                     * @return PublicIpType 是否已赋值
                     * 
                     */
                    bool PublicIpTypeHasBeenSet() const;

                    /**
                     * 获取vpc
                     * @return VpcId vpc
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc
                     * @param _vpcId vpc
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
                     * 获取vpc名
                     * @return VpcName vpc名
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc名
                     * @param _vpcName vpc名
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
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
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
                     * 获取用户uin
                     * @return Uin 用户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
                     * @param _uin 用户uin
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
                     * 获取名称
                     * @return NickName 名称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置名称
                     * @param _nickName 名称
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
                     * 获取核心
                     * @return IsCore 核心
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置核心
                     * @param _isCore 核心
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
                     * 获取云上
                     * @return IsCloud 云上
                     * 
                     */
                    uint64_t GetIsCloud() const;

                    /**
                     * 设置云上
                     * @param _isCloud 云上
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
                     * 获取入向带宽
                     * @return InBandwidth 入向带宽
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置入向带宽
                     * @param _inBandwidth 入向带宽
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
                     * 获取出向带宽
                     * @return OutBandwidth 出向带宽
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置出向带宽
                     * @param _outBandwidth 出向带宽
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
                     * 获取入向流量
                     * @return InFlow 入向流量
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置入向流量
                     * @param _inFlow 入向流量
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
                     * 获取出向流量
                     * @return OutFlow 出向流量
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置出向流量
                     * @param _outFlow 出向流量
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
                     * 获取弱口令
                     * @return WeakPassword 弱口令
                     * 
                     */
                    uint64_t GetWeakPassword() const;

                    /**
                     * 设置弱口令
                     * @param _weakPassword 弱口令
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
                     * 获取eip主键
                     * @return AddressId eip主键
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置eip主键
                     * @param _addressId eip主键
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取MemberId信息
                     * @return MemberId MemberId信息
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置MemberId信息
                     * @param _memberId MemberId信息
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
                     * 获取风险服务暴露
                     * @return RiskExposure 风险服务暴露
                     * 
                     */
                    int64_t GetRiskExposure() const;

                    /**
                     * 设置风险服务暴露
                     * @param _riskExposure 风险服务暴露
                     * 
                     */
                    void SetRiskExposure(const int64_t& _riskExposure);

                    /**
                     * 判断参数 RiskExposure 是否已赋值
                     * @return RiskExposure 是否已赋值
                     * 
                     */
                    bool RiskExposureHasBeenSet() const;

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
                     * 获取资产认证状态，0-待认证，1-认证成功，2-认证中，3+-认证失败
                     * @return VerifyStatus 资产认证状态，0-待认证，1-认证成功，2-认证中，3+-认证失败
                     * 
                     */
                    int64_t GetVerifyStatus() const;

                    /**
                     * 设置资产认证状态，0-待认证，1-认证成功，2-认证中，3+-认证失败
                     * @param _verifyStatus 资产认证状态，0-待认证，1-认证成功，2-认证中，3+-认证失败
                     * 
                     */
                    void SetVerifyStatus(const int64_t& _verifyStatus);

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

                private:

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 云防状态
                     */
                    uint64_t m_cFWStatus;
                    bool m_cFWStatusHasBeenSet;

                    /**
                     * 资产创建时间
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 公网ip类型
                     */
                    uint64_t m_publicIpType;
                    bool m_publicIpTypeHasBeenSet;

                    /**
                     * vpc
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc名
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 核心
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * 云上
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
                     * 入向带宽
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * 出向带宽
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * 入向流量
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * 出向流量
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
                     * 弱口令
                     */
                    uint64_t m_weakPassword;
                    bool m_weakPasswordHasBeenSet;

                    /**
                     * 内容风险
                     */
                    uint64_t m_webContentRisk;
                    bool m_webContentRiskHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * eip主键
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * MemberId信息
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 风险服务暴露
                     */
                    int64_t m_riskExposure;
                    bool m_riskExposureHasBeenSet;

                    /**
                     * 是否新资产 1新
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * 资产认证状态，0-待认证，1-认证成功，2-认证中，3+-认证失败
                     */
                    int64_t m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IPASSETLISTVO_H_
