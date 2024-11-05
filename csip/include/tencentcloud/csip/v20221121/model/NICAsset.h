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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_NICASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_NICASSET_H_

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
                * 网卡资产
                */
                class NICAsset : public AbstractModel
                {
                public:
                    NICAsset();
                    ~NICAsset() = default;
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
                     * 获取私有ip
                     * @return PrivateIp 私有ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置私有ip
                     * @param _privateIp 私有ip
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取公网ip
                     * @return PublicIp 公网ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
                     * @param _publicIp 公网ip
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
                     * 获取出向峰值带宽
                     * @return OutboundPeakBandwidth 出向峰值带宽
                     * 
                     */
                    std::string GetOutboundPeakBandwidth() const;

                    /**
                     * 设置出向峰值带宽
                     * @param _outboundPeakBandwidth 出向峰值带宽
                     * 
                     */
                    void SetOutboundPeakBandwidth(const std::string& _outboundPeakBandwidth);

                    /**
                     * 判断参数 OutboundPeakBandwidth 是否已赋值
                     * @return OutboundPeakBandwidth 是否已赋值
                     * 
                     */
                    bool OutboundPeakBandwidthHasBeenSet() const;

                    /**
                     * 获取入向峰值带宽
                     * @return InboundPeakBandwidth 入向峰值带宽
                     * 
                     */
                    std::string GetInboundPeakBandwidth() const;

                    /**
                     * 设置入向峰值带宽
                     * @param _inboundPeakBandwidth 入向峰值带宽
                     * 
                     */
                    void SetInboundPeakBandwidth(const std::string& _inboundPeakBandwidth);

                    /**
                     * 判断参数 InboundPeakBandwidth 是否已赋值
                     * @return InboundPeakBandwidth 是否已赋值
                     * 
                     */
                    bool InboundPeakBandwidthHasBeenSet() const;

                    /**
                     * 获取出站累计流量
                     * @return OutboundCumulativeFlow 出站累计流量
                     * 
                     */
                    std::string GetOutboundCumulativeFlow() const;

                    /**
                     * 设置出站累计流量
                     * @param _outboundCumulativeFlow 出站累计流量
                     * 
                     */
                    void SetOutboundCumulativeFlow(const std::string& _outboundCumulativeFlow);

                    /**
                     * 判断参数 OutboundCumulativeFlow 是否已赋值
                     * @return OutboundCumulativeFlow 是否已赋值
                     * 
                     */
                    bool OutboundCumulativeFlowHasBeenSet() const;

                    /**
                     * 获取入站累计流量
                     * @return InboundCumulativeFlow 入站累计流量
                     * 
                     */
                    std::string GetInboundCumulativeFlow() const;

                    /**
                     * 设置入站累计流量
                     * @param _inboundCumulativeFlow 入站累计流量
                     * 
                     */
                    void SetInboundCumulativeFlow(const std::string& _inboundCumulativeFlow);

                    /**
                     * 判断参数 InboundCumulativeFlow 是否已赋值
                     * @return InboundCumulativeFlow 是否已赋值
                     * 
                     */
                    bool InboundCumulativeFlowHasBeenSet() const;

                    /**
                     * 获取网络攻击
                     * @return NetworkAttack 网络攻击
                     * 
                     */
                    int64_t GetNetworkAttack() const;

                    /**
                     * 设置网络攻击
                     * @param _networkAttack 网络攻击
                     * 
                     */
                    void SetNetworkAttack(const int64_t& _networkAttack);

                    /**
                     * 判断参数 NetworkAttack 是否已赋值
                     * @return NetworkAttack 是否已赋值
                     * 
                     */
                    bool NetworkAttackHasBeenSet() const;

                    /**
                     * 获取暴露端口
                     * @return ExposedPort 暴露端口
                     * 
                     */
                    int64_t GetExposedPort() const;

                    /**
                     * 设置暴露端口
                     * @param _exposedPort 暴露端口
                     * 
                     */
                    void SetExposedPort(const int64_t& _exposedPort);

                    /**
                     * 判断参数 ExposedPort 是否已赋值
                     * @return ExposedPort 是否已赋值
                     * 
                     */
                    bool ExposedPortHasBeenSet() const;

                    /**
                     * 获取暴露漏洞
                     * @return ExposedVUL 暴露漏洞
                     * 
                     */
                    int64_t GetExposedVUL() const;

                    /**
                     * 设置暴露漏洞
                     * @param _exposedVUL 暴露漏洞
                     * 
                     */
                    void SetExposedVUL(const int64_t& _exposedVUL);

                    /**
                     * 判断参数 ExposedVUL 是否已赋值
                     * @return ExposedVUL 是否已赋值
                     * 
                     */
                    bool ExposedVULHasBeenSet() const;

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
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 私有ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 公网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

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
                     * 出向峰值带宽
                     */
                    std::string m_outboundPeakBandwidth;
                    bool m_outboundPeakBandwidthHasBeenSet;

                    /**
                     * 入向峰值带宽
                     */
                    std::string m_inboundPeakBandwidth;
                    bool m_inboundPeakBandwidthHasBeenSet;

                    /**
                     * 出站累计流量
                     */
                    std::string m_outboundCumulativeFlow;
                    bool m_outboundCumulativeFlowHasBeenSet;

                    /**
                     * 入站累计流量
                     */
                    std::string m_inboundCumulativeFlow;
                    bool m_inboundCumulativeFlowHasBeenSet;

                    /**
                     * 网络攻击
                     */
                    int64_t m_networkAttack;
                    bool m_networkAttackHasBeenSet;

                    /**
                     * 暴露端口
                     */
                    int64_t m_exposedPort;
                    bool m_exposedPortHasBeenSet;

                    /**
                     * 暴露漏洞
                     */
                    int64_t m_exposedVUL;
                    bool m_exposedVULHasBeenSet;

                    /**
                     * 配置风险
                     */
                    int64_t m_configureRisk;
                    bool m_configureRiskHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

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
                     * 昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_NICASSET_H_
