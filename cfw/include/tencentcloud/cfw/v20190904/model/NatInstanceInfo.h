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
                     * 获取nat实例id
                     * @return NatinsId nat实例id
                     */
                    std::string GetNatinsId() const;

                    /**
                     * 设置nat实例id
                     * @param NatinsId nat实例id
                     */
                    void SetNatinsId(const std::string& _natinsId);

                    /**
                     * 判断参数 NatinsId 是否已赋值
                     * @return NatinsId 是否已赋值
                     */
                    bool NatinsIdHasBeenSet() const;

                    /**
                     * 获取nat实例名称
                     * @return NatinsName nat实例名称
                     */
                    std::string GetNatinsName() const;

                    /**
                     * 设置nat实例名称
                     * @param NatinsName nat实例名称
                     */
                    void SetNatinsName(const std::string& _natinsName);

                    /**
                     * 判断参数 NatinsName 是否已赋值
                     * @return NatinsName 是否已赋值
                     */
                    bool NatinsNameHasBeenSet() const;

                    /**
                     * 获取实例所在地域
                     * @return Region 实例所在地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所在地域
                     * @param Region 实例所在地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取0: 新增模式，1:接入模式
                     * @return FwMode 0: 新增模式，1:接入模式
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置0: 新增模式，1:接入模式
                     * @param FwMode 0: 新增模式，1:接入模式
                     */
                    void SetFwMode(const int64_t& _fwMode);

                    /**
                     * 判断参数 FwMode 是否已赋值
                     * @return FwMode 是否已赋值
                     */
                    bool FwModeHasBeenSet() const;

                    /**
                     * 获取实例带宽大小 Mbps
                     * @return BandWidth 实例带宽大小 Mbps
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置实例带宽大小 Mbps
                     * @param BandWidth 实例带宽大小 Mbps
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取入向带宽峰值 bps
                     * @return InFlowMax 入向带宽峰值 bps
                     */
                    int64_t GetInFlowMax() const;

                    /**
                     * 设置入向带宽峰值 bps
                     * @param InFlowMax 入向带宽峰值 bps
                     */
                    void SetInFlowMax(const int64_t& _inFlowMax);

                    /**
                     * 判断参数 InFlowMax 是否已赋值
                     * @return InFlowMax 是否已赋值
                     */
                    bool InFlowMaxHasBeenSet() const;

                    /**
                     * 获取出向带宽峰值 bps
                     * @return OutFlowMax 出向带宽峰值 bps
                     */
                    uint64_t GetOutFlowMax() const;

                    /**
                     * 设置出向带宽峰值 bps
                     * @param OutFlowMax 出向带宽峰值 bps
                     */
                    void SetOutFlowMax(const uint64_t& _outFlowMax);

                    /**
                     * 判断参数 OutFlowMax 是否已赋值
                     * @return OutFlowMax 是否已赋值
                     */
                    bool OutFlowMaxHasBeenSet() const;

                    /**
                     * 获取地域中文信息
                     * @return RegionZh 地域中文信息
                     */
                    std::string GetRegionZh() const;

                    /**
                     * 设置地域中文信息
                     * @param RegionZh 地域中文信息
                     */
                    void SetRegionZh(const std::string& _regionZh);

                    /**
                     * 判断参数 RegionZh 是否已赋值
                     * @return RegionZh 是否已赋值
                     */
                    bool RegionZhHasBeenSet() const;

                    /**
                     * 获取公网ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EipAddress 公网ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetEipAddress() const;

                    /**
                     * 设置公网ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EipAddress 公网ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEipAddress(const std::vector<std::string>& _eipAddress);

                    /**
                     * 判断参数 EipAddress 是否已赋值
                     * @return EipAddress 是否已赋值
                     */
                    bool EipAddressHasBeenSet() const;

                    /**
                     * 获取内外使用ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcIp 内外使用ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetVpcIp() const;

                    /**
                     * 设置内外使用ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcIp 内外使用ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcIp(const std::vector<std::string>& _vpcIp);

                    /**
                     * 判断参数 VpcIp 是否已赋值
                     * @return VpcIp 是否已赋值
                     */
                    bool VpcIpHasBeenSet() const;

                    /**
                     * 获取实例关联子网数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subnets 实例关联子网数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSubnets() const;

                    /**
                     * 设置实例关联子网数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Subnets 实例关联子网数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnets(const std::vector<std::string>& _subnets);

                    /**
                     * 判断参数 Subnets 是否已赋值
                     * @return Subnets 是否已赋值
                     */
                    bool SubnetsHasBeenSet() const;

                    /**
                     * 获取0 :正常 1：正在初始化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 0 :正常 1：正在初始化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0 :正常 1：正在初始化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 0 :正常 1：正在初始化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取地域区域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionDetail 地域区域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionDetail() const;

                    /**
                     * 设置地域区域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionDetail 地域区域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionDetail(const std::string& _regionDetail);

                    /**
                     * 判断参数 RegionDetail 是否已赋值
                     * @return RegionDetail 是否已赋值
                     */
                    bool RegionDetailHasBeenSet() const;

                    /**
                     * 获取实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneZh 实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZoneZh() const;

                    /**
                     * 设置实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneZh 实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneZh(const std::string& _zoneZh);

                    /**
                     * 判断参数 ZoneZh 是否已赋值
                     * @return ZoneZh 是否已赋值
                     */
                    bool ZoneZhHasBeenSet() const;

                    /**
                     * 获取实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneZhBak 实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZoneZhBak() const;

                    /**
                     * 设置实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneZhBak 实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneZhBak(const std::string& _zoneZhBak);

                    /**
                     * 判断参数 ZoneZhBak 是否已赋值
                     * @return ZoneZhBak 是否已赋值
                     */
                    bool ZoneZhBakHasBeenSet() const;

                private:

                    /**
                     * nat实例id
                     */
                    std::string m_natinsId;
                    bool m_natinsIdHasBeenSet;

                    /**
                     * nat实例名称
                     */
                    std::string m_natinsName;
                    bool m_natinsNameHasBeenSet;

                    /**
                     * 实例所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 0: 新增模式，1:接入模式
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * 实例带宽大小 Mbps
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * 入向带宽峰值 bps
                     */
                    int64_t m_inFlowMax;
                    bool m_inFlowMaxHasBeenSet;

                    /**
                     * 出向带宽峰值 bps
                     */
                    uint64_t m_outFlowMax;
                    bool m_outFlowMaxHasBeenSet;

                    /**
                     * 地域中文信息
                     */
                    std::string m_regionZh;
                    bool m_regionZhHasBeenSet;

                    /**
                     * 公网ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_eipAddress;
                    bool m_eipAddressHasBeenSet;

                    /**
                     * 内外使用ip数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_vpcIp;
                    bool m_vpcIpHasBeenSet;

                    /**
                     * 实例关联子网数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subnets;
                    bool m_subnetsHasBeenSet;

                    /**
                     * 0 :正常 1：正在初始化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 地域区域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionDetail;
                    bool m_regionDetailHasBeenSet;

                    /**
                     * 实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneZh;
                    bool m_zoneZhHasBeenSet;

                    /**
                     * 实例所在可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneZhBak;
                    bool m_zoneZhBakHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATINSTANCEINFO_H_
