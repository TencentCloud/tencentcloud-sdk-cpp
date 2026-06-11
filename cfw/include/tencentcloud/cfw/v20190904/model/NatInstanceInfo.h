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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATINSTANCEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Nat实例卡片详细信息
                */
                class NatInstanceInfo : public AbstractModel
                {
                public:
                    NatInstanceInfo();
                    ~NatInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>nat实例id</p>
                     * @return NatinsId <p>nat实例id</p>
                     * 
                     */
                    std::string GetNatinsId() const;

                    /**
                     * 设置<p>nat实例id</p>
                     * @param _natinsId <p>nat实例id</p>
                     * 
                     */
                    void SetNatinsId(const std::string& _natinsId);

                    /**
                     * 判断参数 NatinsId 是否已赋值
                     * @return NatinsId 是否已赋值
                     * 
                     */
                    bool NatinsIdHasBeenSet() const;

                    /**
                     * 获取<p>nat实例名称</p>
                     * @return NatinsName <p>nat实例名称</p>
                     * 
                     */
                    std::string GetNatinsName() const;

                    /**
                     * 设置<p>nat实例名称</p>
                     * @param _natinsName <p>nat实例名称</p>
                     * 
                     */
                    void SetNatinsName(const std::string& _natinsName);

                    /**
                     * 判断参数 NatinsName 是否已赋值
                     * @return NatinsName 是否已赋值
                     * 
                     */
                    bool NatinsNameHasBeenSet() const;

                    /**
                     * 获取<p>实例所在地域</p>
                     * @return Region <p>实例所在地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>实例所在地域</p>
                     * @param _region <p>实例所在地域</p>
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
                     * 获取<p>0: 新增模式，1:接入模式</p>
                     * @return FwMode <p>0: 新增模式，1:接入模式</p>
                     * 
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置<p>0: 新增模式，1:接入模式</p>
                     * @param _fwMode <p>0: 新增模式，1:接入模式</p>
                     * 
                     */
                    void SetFwMode(const int64_t& _fwMode);

                    /**
                     * 判断参数 FwMode 是否已赋值
                     * @return FwMode 是否已赋值
                     * 
                     */
                    bool FwModeHasBeenSet() const;

                    /**
                     * 获取<p>实例带宽大小 Mbps</p>
                     * @return BandWidth <p>实例带宽大小 Mbps</p>
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置<p>实例带宽大小 Mbps</p>
                     * @param _bandWidth <p>实例带宽大小 Mbps</p>
                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取<p>入向带宽峰值 bps</p>
                     * @return InFlowMax <p>入向带宽峰值 bps</p>
                     * 
                     */
                    int64_t GetInFlowMax() const;

                    /**
                     * 设置<p>入向带宽峰值 bps</p>
                     * @param _inFlowMax <p>入向带宽峰值 bps</p>
                     * 
                     */
                    void SetInFlowMax(const int64_t& _inFlowMax);

                    /**
                     * 判断参数 InFlowMax 是否已赋值
                     * @return InFlowMax 是否已赋值
                     * 
                     */
                    bool InFlowMaxHasBeenSet() const;

                    /**
                     * 获取<p>出向带宽峰值 bps</p>
                     * @return OutFlowMax <p>出向带宽峰值 bps</p>
                     * 
                     */
                    uint64_t GetOutFlowMax() const;

                    /**
                     * 设置<p>出向带宽峰值 bps</p>
                     * @param _outFlowMax <p>出向带宽峰值 bps</p>
                     * 
                     */
                    void SetOutFlowMax(const uint64_t& _outFlowMax);

                    /**
                     * 判断参数 OutFlowMax 是否已赋值
                     * @return OutFlowMax 是否已赋值
                     * 
                     */
                    bool OutFlowMaxHasBeenSet() const;

                    /**
                     * 获取<p>地域中文信息</p>
                     * @return RegionZh <p>地域中文信息</p>
                     * 
                     */
                    std::string GetRegionZh() const;

                    /**
                     * 设置<p>地域中文信息</p>
                     * @param _regionZh <p>地域中文信息</p>
                     * 
                     */
                    void SetRegionZh(const std::string& _regionZh);

                    /**
                     * 判断参数 RegionZh 是否已赋值
                     * @return RegionZh 是否已赋值
                     * 
                     */
                    bool RegionZhHasBeenSet() const;

                    /**
                     * 获取<p>公网ip数组</p>
                     * @return EipAddress <p>公网ip数组</p>
                     * 
                     */
                    std::vector<std::string> GetEipAddress() const;

                    /**
                     * 设置<p>公网ip数组</p>
                     * @param _eipAddress <p>公网ip数组</p>
                     * 
                     */
                    void SetEipAddress(const std::vector<std::string>& _eipAddress);

                    /**
                     * 判断参数 EipAddress 是否已赋值
                     * @return EipAddress 是否已赋值
                     * 
                     */
                    bool EipAddressHasBeenSet() const;

                    /**
                     * 获取<p>内外使用ip数组</p>
                     * @return VpcIp <p>内外使用ip数组</p>
                     * 
                     */
                    std::vector<std::string> GetVpcIp() const;

                    /**
                     * 设置<p>内外使用ip数组</p>
                     * @param _vpcIp <p>内外使用ip数组</p>
                     * 
                     */
                    void SetVpcIp(const std::vector<std::string>& _vpcIp);

                    /**
                     * 判断参数 VpcIp 是否已赋值
                     * @return VpcIp 是否已赋值
                     * 
                     */
                    bool VpcIpHasBeenSet() const;

                    /**
                     * 获取<p>实例关联子网数组</p>
                     * @return Subnets <p>实例关联子网数组</p>
                     * 
                     */
                    std::vector<std::string> GetSubnets() const;

                    /**
                     * 设置<p>实例关联子网数组</p>
                     * @param _subnets <p>实例关联子网数组</p>
                     * 
                     */
                    void SetSubnets(const std::vector<std::string>& _subnets);

                    /**
                     * 判断参数 Subnets 是否已赋值
                     * @return Subnets 是否已赋值
                     * 
                     */
                    bool SubnetsHasBeenSet() const;

                    /**
                     * 获取<p>0 :正常 1：正在初始化</p>
                     * @return Status <p>0 :正常 1：正在初始化</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>0 :正常 1：正在初始化</p>
                     * @param _status <p>0 :正常 1：正在初始化</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>地域区域信息</p>
                     * @return RegionDetail <p>地域区域信息</p>
                     * 
                     */
                    std::string GetRegionDetail() const;

                    /**
                     * 设置<p>地域区域信息</p>
                     * @param _regionDetail <p>地域区域信息</p>
                     * 
                     */
                    void SetRegionDetail(const std::string& _regionDetail);

                    /**
                     * 判断参数 RegionDetail 是否已赋值
                     * @return RegionDetail 是否已赋值
                     * 
                     */
                    bool RegionDetailHasBeenSet() const;

                    /**
                     * 获取<p>实例所在可用区</p>
                     * @return ZoneZh <p>实例所在可用区</p>
                     * 
                     */
                    std::string GetZoneZh() const;

                    /**
                     * 设置<p>实例所在可用区</p>
                     * @param _zoneZh <p>实例所在可用区</p>
                     * 
                     */
                    void SetZoneZh(const std::string& _zoneZh);

                    /**
                     * 判断参数 ZoneZh 是否已赋值
                     * @return ZoneZh 是否已赋值
                     * 
                     */
                    bool ZoneZhHasBeenSet() const;

                    /**
                     * 获取<p>实例所在可用区</p>
                     * @return ZoneZhBak <p>实例所在可用区</p>
                     * 
                     */
                    std::string GetZoneZhBak() const;

                    /**
                     * 设置<p>实例所在可用区</p>
                     * @param _zoneZhBak <p>实例所在可用区</p>
                     * 
                     */
                    void SetZoneZhBak(const std::string& _zoneZhBak);

                    /**
                     * 判断参数 ZoneZhBak 是否已赋值
                     * @return ZoneZhBak 是否已赋值
                     * 
                     */
                    bool ZoneZhBakHasBeenSet() const;

                    /**
                     * 获取<p>已使用规则数</p>
                     * @return RuleUsed <p>已使用规则数</p>
                     * 
                     */
                    uint64_t GetRuleUsed() const;

                    /**
                     * 设置<p>已使用规则数</p>
                     * @param _ruleUsed <p>已使用规则数</p>
                     * 
                     */
                    void SetRuleUsed(const uint64_t& _ruleUsed);

                    /**
                     * 判断参数 RuleUsed 是否已赋值
                     * @return RuleUsed 是否已赋值
                     * 
                     */
                    bool RuleUsedHasBeenSet() const;

                    /**
                     * 获取<p>实例的规则限制最大规格数</p>
                     * @return RuleMax <p>实例的规则限制最大规格数</p>
                     * 
                     */
                    uint64_t GetRuleMax() const;

                    /**
                     * 设置<p>实例的规则限制最大规格数</p>
                     * @param _ruleMax <p>实例的规则限制最大规格数</p>
                     * 
                     */
                    void SetRuleMax(const uint64_t& _ruleMax);

                    /**
                     * 判断参数 RuleMax 是否已赋值
                     * @return RuleMax 是否已赋值
                     * 
                     */
                    bool RuleMaxHasBeenSet() const;

                    /**
                     * 获取<p>实例引擎版本</p>
                     * @return EngineVersion <p>实例引擎版本</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>实例引擎版本</p>
                     * @param _engineVersion <p>实例引擎版本</p>
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>引擎是否可升级：0，不可升级；1，可升级</p>
                     * @return UpdateEnable <p>引擎是否可升级：0，不可升级；1，可升级</p>
                     * 
                     */
                    int64_t GetUpdateEnable() const;

                    /**
                     * 设置<p>引擎是否可升级：0，不可升级；1，可升级</p>
                     * @param _updateEnable <p>引擎是否可升级：0，不可升级；1，可升级</p>
                     * 
                     */
                    void SetUpdateEnable(const int64_t& _updateEnable);

                    /**
                     * 判断参数 UpdateEnable 是否已赋值
                     * @return UpdateEnable 是否已赋值
                     * 
                     */
                    bool UpdateEnableHasBeenSet() const;

                    /**
                     * 获取<p>是的需要升级引擎 支持 nat拨测 1需要 0不需要</p>
                     * @return NeedProbeEngineUpdate <p>是的需要升级引擎 支持 nat拨测 1需要 0不需要</p>
                     * 
                     */
                    int64_t GetNeedProbeEngineUpdate() const;

                    /**
                     * 设置<p>是的需要升级引擎 支持 nat拨测 1需要 0不需要</p>
                     * @param _needProbeEngineUpdate <p>是的需要升级引擎 支持 nat拨测 1需要 0不需要</p>
                     * 
                     */
                    void SetNeedProbeEngineUpdate(const int64_t& _needProbeEngineUpdate);

                    /**
                     * 判断参数 NeedProbeEngineUpdate 是否已赋值
                     * @return NeedProbeEngineUpdate 是否已赋值
                     * 
                     */
                    bool NeedProbeEngineUpdateHasBeenSet() const;

                    /**
                     * 获取<p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
                     * @return TrafficMode <p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
                     * 
                     */
                    std::string GetTrafficMode() const;

                    /**
                     * 设置<p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
                     * @param _trafficMode <p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
                     * 
                     */
                    void SetTrafficMode(const std::string& _trafficMode);

                    /**
                     * 判断参数 TrafficMode 是否已赋值
                     * @return TrafficMode 是否已赋值
                     * 
                     */
                    bool TrafficModeHasBeenSet() const;

                    /**
                     * 获取<p>实例主所在可用区</p>
                     * @return Zone <p>实例主所在可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>实例主所在可用区</p>
                     * @param _zone <p>实例主所在可用区</p>
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
                     * 获取<p>实例备所在可用区</p>
                     * @return ZoneBak <p>实例备所在可用区</p>
                     * 
                     */
                    std::string GetZoneBak() const;

                    /**
                     * 设置<p>实例备所在可用区</p>
                     * @param _zoneBak <p>实例备所在可用区</p>
                     * 
                     */
                    void SetZoneBak(const std::string& _zoneBak);

                    /**
                     * 判断参数 ZoneBak 是否已赋值
                     * @return ZoneBak 是否已赋值
                     * 
                     */
                    bool ZoneBakHasBeenSet() const;

                    /**
                     * 获取<p>引擎预约升级时间</p>
                     * @return ReserveTime <p>引擎预约升级时间</p>
                     * 
                     */
                    std::string GetReserveTime() const;

                    /**
                     * 设置<p>引擎预约升级时间</p>
                     * @param _reserveTime <p>引擎预约升级时间</p>
                     * 
                     */
                    void SetReserveTime(const std::string& _reserveTime);

                    /**
                     * 判断参数 ReserveTime 是否已赋值
                     * @return ReserveTime 是否已赋值
                     * 
                     */
                    bool ReserveTimeHasBeenSet() const;

                    /**
                     * 获取<p>引擎预约升级版本</p>
                     * @return ReserveVersion <p>引擎预约升级版本</p>
                     * 
                     */
                    std::string GetReserveVersion() const;

                    /**
                     * 设置<p>引擎预约升级版本</p>
                     * @param _reserveVersion <p>引擎预约升级版本</p>
                     * 
                     */
                    void SetReserveVersion(const std::string& _reserveVersion);

                    /**
                     * 判断参数 ReserveVersion 是否已赋值
                     * @return ReserveVersion 是否已赋值
                     * 
                     */
                    bool ReserveVersionHasBeenSet() const;

                    /**
                     * 获取<p>引擎预约升级版本状态 stable:稳定版；previewed:预览版</p>
                     * @return ReserveVersionState <p>引擎预约升级版本状态 stable:稳定版；previewed:预览版</p>
                     * 
                     */
                    std::string GetReserveVersionState() const;

                    /**
                     * 设置<p>引擎预约升级版本状态 stable:稳定版；previewed:预览版</p>
                     * @param _reserveVersionState <p>引擎预约升级版本状态 stable:稳定版；previewed:预览版</p>
                     * 
                     */
                    void SetReserveVersionState(const std::string& _reserveVersionState);

                    /**
                     * 判断参数 ReserveVersionState 是否已赋值
                     * @return ReserveVersionState 是否已赋值
                     * 
                     */
                    bool ReserveVersionStateHasBeenSet() const;

                    /**
                     * 获取<p>弹性开关<br>1 打开<br>0 关闭</p>
                     * @return ElasticSwitch <p>弹性开关<br>1 打开<br>0 关闭</p>
                     * 
                     */
                    int64_t GetElasticSwitch() const;

                    /**
                     * 设置<p>弹性开关<br>1 打开<br>0 关闭</p>
                     * @param _elasticSwitch <p>弹性开关<br>1 打开<br>0 关闭</p>
                     * 
                     */
                    void SetElasticSwitch(const int64_t& _elasticSwitch);

                    /**
                     * 判断参数 ElasticSwitch 是否已赋值
                     * @return ElasticSwitch 是否已赋值
                     * 
                     */
                    bool ElasticSwitchHasBeenSet() const;

                    /**
                     * 获取<p>弹性带宽，单位Mbps</p>
                     * @return ElasticBandwidth <p>弹性带宽，单位Mbps</p>
                     * 
                     */
                    int64_t GetElasticBandwidth() const;

                    /**
                     * 设置<p>弹性带宽，单位Mbps</p>
                     * @param _elasticBandwidth <p>弹性带宽，单位Mbps</p>
                     * 
                     */
                    void SetElasticBandwidth(const int64_t& _elasticBandwidth);

                    /**
                     * 判断参数 ElasticBandwidth 是否已赋值
                     * @return ElasticBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     * @return IsFirstAfterPay <p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     * 
                     */
                    int64_t GetIsFirstAfterPay() const;

                    /**
                     * 设置<p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     * @param _isFirstAfterPay <p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     * 
                     */
                    void SetIsFirstAfterPay(const int64_t& _isFirstAfterPay);

                    /**
                     * 判断参数 IsFirstAfterPay 是否已赋值
                     * @return IsFirstAfterPay 是否已赋值
                     * 
                     */
                    bool IsFirstAfterPayHasBeenSet() const;

                    /**
                     * 获取<p>按流量弹性开关</p><p>默认值：0</p>
                     * @return ElasticTrafficSwitch <p>按流量弹性开关</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetElasticTrafficSwitch() const;

                    /**
                     * 设置<p>按流量弹性开关</p><p>默认值：0</p>
                     * @param _elasticTrafficSwitch <p>按流量弹性开关</p><p>默认值：0</p>
                     * 
                     */
                    void SetElasticTrafficSwitch(const int64_t& _elasticTrafficSwitch);

                    /**
                     * 判断参数 ElasticTrafficSwitch 是否已赋值
                     * @return ElasticTrafficSwitch 是否已赋值
                     * 
                     */
                    bool ElasticTrafficSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>nat实例id</p>
                     */
                    std::string m_natinsId;
                    bool m_natinsIdHasBeenSet;

                    /**
                     * <p>nat实例名称</p>
                     */
                    std::string m_natinsName;
                    bool m_natinsNameHasBeenSet;

                    /**
                     * <p>实例所在地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>0: 新增模式，1:接入模式</p>
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * <p>实例带宽大小 Mbps</p>
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * <p>入向带宽峰值 bps</p>
                     */
                    int64_t m_inFlowMax;
                    bool m_inFlowMaxHasBeenSet;

                    /**
                     * <p>出向带宽峰值 bps</p>
                     */
                    uint64_t m_outFlowMax;
                    bool m_outFlowMaxHasBeenSet;

                    /**
                     * <p>地域中文信息</p>
                     */
                    std::string m_regionZh;
                    bool m_regionZhHasBeenSet;

                    /**
                     * <p>公网ip数组</p>
                     */
                    std::vector<std::string> m_eipAddress;
                    bool m_eipAddressHasBeenSet;

                    /**
                     * <p>内外使用ip数组</p>
                     */
                    std::vector<std::string> m_vpcIp;
                    bool m_vpcIpHasBeenSet;

                    /**
                     * <p>实例关联子网数组</p>
                     */
                    std::vector<std::string> m_subnets;
                    bool m_subnetsHasBeenSet;

                    /**
                     * <p>0 :正常 1：正在初始化</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>地域区域信息</p>
                     */
                    std::string m_regionDetail;
                    bool m_regionDetailHasBeenSet;

                    /**
                     * <p>实例所在可用区</p>
                     */
                    std::string m_zoneZh;
                    bool m_zoneZhHasBeenSet;

                    /**
                     * <p>实例所在可用区</p>
                     */
                    std::string m_zoneZhBak;
                    bool m_zoneZhBakHasBeenSet;

                    /**
                     * <p>已使用规则数</p>
                     */
                    uint64_t m_ruleUsed;
                    bool m_ruleUsedHasBeenSet;

                    /**
                     * <p>实例的规则限制最大规格数</p>
                     */
                    uint64_t m_ruleMax;
                    bool m_ruleMaxHasBeenSet;

                    /**
                     * <p>实例引擎版本</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>引擎是否可升级：0，不可升级；1，可升级</p>
                     */
                    int64_t m_updateEnable;
                    bool m_updateEnableHasBeenSet;

                    /**
                     * <p>是的需要升级引擎 支持 nat拨测 1需要 0不需要</p>
                     */
                    int64_t m_needProbeEngineUpdate;
                    bool m_needProbeEngineUpdateHasBeenSet;

                    /**
                     * <p>引擎运行模式，Normal:正常, OnlyRoute:透明模式</p>
                     */
                    std::string m_trafficMode;
                    bool m_trafficModeHasBeenSet;

                    /**
                     * <p>实例主所在可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例备所在可用区</p>
                     */
                    std::string m_zoneBak;
                    bool m_zoneBakHasBeenSet;

                    /**
                     * <p>引擎预约升级时间</p>
                     */
                    std::string m_reserveTime;
                    bool m_reserveTimeHasBeenSet;

                    /**
                     * <p>引擎预约升级版本</p>
                     */
                    std::string m_reserveVersion;
                    bool m_reserveVersionHasBeenSet;

                    /**
                     * <p>引擎预约升级版本状态 stable:稳定版；previewed:预览版</p>
                     */
                    std::string m_reserveVersionState;
                    bool m_reserveVersionStateHasBeenSet;

                    /**
                     * <p>弹性开关<br>1 打开<br>0 关闭</p>
                     */
                    int64_t m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * <p>弹性带宽，单位Mbps</p>
                     */
                    int64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                    /**
                     * <p>是否首次开通按量付费<br>1 是<br>0 不是</p>
                     */
                    int64_t m_isFirstAfterPay;
                    bool m_isFirstAfterPayHasBeenSet;

                    /**
                     * <p>按流量弹性开关</p><p>默认值：0</p>
                     */
                    int64_t m_elasticTrafficSwitch;
                    bool m_elasticTrafficSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATINSTANCEINFO_H_
