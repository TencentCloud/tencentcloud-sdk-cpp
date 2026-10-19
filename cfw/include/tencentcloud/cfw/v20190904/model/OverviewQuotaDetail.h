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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWQUOTADETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWQUOTADETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/OverviewCommonRuleQuotaDetail.h>
#include <tencentcloud/cfw/v20190904/model/OverviewVpcRuleQuotaDetail.h>
#include <tencentcloud/cfw/v20190904/model/OverviewBlockListQuota.h>
#include <tencentcloud/cfw/v20190904/model/OverviewBlockListQuotaDetail.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 概览资源与配额详情
                */
                class OverviewQuotaDetail : public AbstractModel
                {
                public:
                    OverviewQuotaDetail();
                    ~OverviewQuotaDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>已使用公网 IP 数量。</p>
                     * @return PublicIpUsed <p>已使用公网 IP 数量。</p>
                     * 
                     */
                    int64_t GetPublicIpUsed() const;

                    /**
                     * 设置<p>已使用公网 IP 数量。</p>
                     * @param _publicIpUsed <p>已使用公网 IP 数量。</p>
                     * 
                     */
                    void SetPublicIpUsed(const int64_t& _publicIpUsed);

                    /**
                     * 判断参数 PublicIpUsed 是否已赋值
                     * @return PublicIpUsed 是否已赋值
                     * 
                     */
                    bool PublicIpUsedHasBeenSet() const;

                    /**
                     * 获取<p>公网 IP 总配额数量。</p>
                     * @return PublicIpTotal <p>公网 IP 总配额数量。</p>
                     * 
                     */
                    int64_t GetPublicIpTotal() const;

                    /**
                     * 设置<p>公网 IP 总配额数量。</p>
                     * @param _publicIpTotal <p>公网 IP 总配额数量。</p>
                     * 
                     */
                    void SetPublicIpTotal(const int64_t& _publicIpTotal);

                    /**
                     * 判断参数 PublicIpTotal 是否已赋值
                     * @return PublicIpTotal 是否已赋值
                     * 
                     */
                    bool PublicIpTotalHasBeenSet() const;

                    /**
                     * 获取<p>通用实例总配额数量。</p>
                     * @return CommonInstanceTotal <p>通用实例总配额数量。</p>
                     * 
                     */
                    int64_t GetCommonInstanceTotal() const;

                    /**
                     * 设置<p>通用实例总配额数量。</p>
                     * @param _commonInstanceTotal <p>通用实例总配额数量。</p>
                     * 
                     */
                    void SetCommonInstanceTotal(const int64_t& _commonInstanceTotal);

                    /**
                     * 判断参数 CommonInstanceTotal 是否已赋值
                     * @return CommonInstanceTotal 是否已赋值
                     * 
                     */
                    bool CommonInstanceTotalHasBeenSet() const;

                    /**
                     * 获取<p>通用实例剩余配额数量。</p>
                     * @return CommonInstanceRemain <p>通用实例剩余配额数量。</p>
                     * 
                     */
                    int64_t GetCommonInstanceRemain() const;

                    /**
                     * 设置<p>通用实例剩余配额数量。</p>
                     * @param _commonInstanceRemain <p>通用实例剩余配额数量。</p>
                     * 
                     */
                    void SetCommonInstanceRemain(const int64_t& _commonInstanceRemain);

                    /**
                     * 判断参数 CommonInstanceRemain 是否已赋值
                     * @return CommonInstanceRemain 是否已赋值
                     * 
                     */
                    bool CommonInstanceRemainHasBeenSet() const;

                    /**
                     * 获取<p>通用实例已使用数量。</p>
                     * @return CommonInstanceUsed <p>通用实例已使用数量。</p>
                     * 
                     */
                    int64_t GetCommonInstanceUsed() const;

                    /**
                     * 设置<p>通用实例已使用数量。</p>
                     * @param _commonInstanceUsed <p>通用实例已使用数量。</p>
                     * 
                     */
                    void SetCommonInstanceUsed(const int64_t& _commonInstanceUsed);

                    /**
                     * 判断参数 CommonInstanceUsed 是否已赋值
                     * @return CommonInstanceUsed 是否已赋值
                     * 
                     */
                    bool CommonInstanceUsedHasBeenSet() const;

                    /**
                     * 获取<p>访问控制规则已使用数量。</p>
                     * @return AccessControlRuleUsed <p>访问控制规则已使用数量。</p>
                     * 
                     */
                    int64_t GetAccessControlRuleUsed() const;

                    /**
                     * 设置<p>访问控制规则已使用数量。</p>
                     * @param _accessControlRuleUsed <p>访问控制规则已使用数量。</p>
                     * 
                     */
                    void SetAccessControlRuleUsed(const int64_t& _accessControlRuleUsed);

                    /**
                     * 判断参数 AccessControlRuleUsed 是否已赋值
                     * @return AccessControlRuleUsed 是否已赋值
                     * 
                     */
                    bool AccessControlRuleUsedHasBeenSet() const;

                    /**
                     * 获取<p>访问控制规则总配额数量。</p>
                     * @return AccessControlRuleTotal <p>访问控制规则总配额数量。</p>
                     * 
                     */
                    int64_t GetAccessControlRuleTotal() const;

                    /**
                     * 设置<p>访问控制规则总配额数量。</p>
                     * @param _accessControlRuleTotal <p>访问控制规则总配额数量。</p>
                     * 
                     */
                    void SetAccessControlRuleTotal(const int64_t& _accessControlRuleTotal);

                    /**
                     * 判断参数 AccessControlRuleTotal 是否已赋值
                     * @return AccessControlRuleTotal 是否已赋值
                     * 
                     */
                    bool AccessControlRuleTotalHasBeenSet() const;

                    /**
                     * 获取<p>已使用串行地域数量。</p>
                     * @return SerialRegionUsed <p>已使用串行地域数量。</p>
                     * 
                     */
                    int64_t GetSerialRegionUsed() const;

                    /**
                     * 设置<p>已使用串行地域数量。</p>
                     * @param _serialRegionUsed <p>已使用串行地域数量。</p>
                     * 
                     */
                    void SetSerialRegionUsed(const int64_t& _serialRegionUsed);

                    /**
                     * 判断参数 SerialRegionUsed 是否已赋值
                     * @return SerialRegionUsed 是否已赋值
                     * 
                     */
                    bool SerialRegionUsedHasBeenSet() const;

                    /**
                     * 获取<p>已使用 NAT 防火墙实例数量。</p>
                     * @return NatInstanceUsed <p>已使用 NAT 防火墙实例数量。</p>
                     * 
                     */
                    int64_t GetNatInstanceUsed() const;

                    /**
                     * 设置<p>已使用 NAT 防火墙实例数量。</p>
                     * @param _natInstanceUsed <p>已使用 NAT 防火墙实例数量。</p>
                     * 
                     */
                    void SetNatInstanceUsed(const int64_t& _natInstanceUsed);

                    /**
                     * 判断参数 NatInstanceUsed 是否已赋值
                     * @return NatInstanceUsed 是否已赋值
                     * 
                     */
                    bool NatInstanceUsedHasBeenSet() const;

                    /**
                     * 获取<p>已使用 VPC 防火墙实例数量。</p>
                     * @return VpcInstanceUsed <p>已使用 VPC 防火墙实例数量。</p>
                     * 
                     */
                    int64_t GetVpcInstanceUsed() const;

                    /**
                     * 设置<p>已使用 VPC 防火墙实例数量。</p>
                     * @param _vpcInstanceUsed <p>已使用 VPC 防火墙实例数量。</p>
                     * 
                     */
                    void SetVpcInstanceUsed(const int64_t& _vpcInstanceUsed);

                    /**
                     * 判断参数 VpcInstanceUsed 是否已赋值
                     * @return VpcInstanceUsed 是否已赋值
                     * 
                     */
                    bool VpcInstanceUsedHasBeenSet() const;

                    /**
                     * 获取<p>边界规则配额详情。</p>
                     * @return BorderRuleQuota <p>边界规则配额详情。</p>
                     * 
                     */
                    OverviewCommonRuleQuotaDetail GetBorderRuleQuota() const;

                    /**
                     * 设置<p>边界规则配额详情。</p>
                     * @param _borderRuleQuota <p>边界规则配额详情。</p>
                     * 
                     */
                    void SetBorderRuleQuota(const OverviewCommonRuleQuotaDetail& _borderRuleQuota);

                    /**
                     * 判断参数 BorderRuleQuota 是否已赋值
                     * @return BorderRuleQuota 是否已赋值
                     * 
                     */
                    bool BorderRuleQuotaHasBeenSet() const;

                    /**
                     * 获取<p>NAT 规则配额详情。</p>
                     * @return NatRuleQuota <p>NAT 规则配额详情。</p>
                     * 
                     */
                    OverviewCommonRuleQuotaDetail GetNatRuleQuota() const;

                    /**
                     * 设置<p>NAT 规则配额详情。</p>
                     * @param _natRuleQuota <p>NAT 规则配额详情。</p>
                     * 
                     */
                    void SetNatRuleQuota(const OverviewCommonRuleQuotaDetail& _natRuleQuota);

                    /**
                     * 判断参数 NatRuleQuota 是否已赋值
                     * @return NatRuleQuota 是否已赋值
                     * 
                     */
                    bool NatRuleQuotaHasBeenSet() const;

                    /**
                     * 获取<p>VPC 规则配额详情。</p>
                     * @return VpcRuleQuota <p>VPC 规则配额详情。</p>
                     * 
                     */
                    OverviewVpcRuleQuotaDetail GetVpcRuleQuota() const;

                    /**
                     * 设置<p>VPC 规则配额详情。</p>
                     * @param _vpcRuleQuota <p>VPC 规则配额详情。</p>
                     * 
                     */
                    void SetVpcRuleQuota(const OverviewVpcRuleQuotaDetail& _vpcRuleQuota);

                    /**
                     * 判断参数 VpcRuleQuota 是否已赋值
                     * @return VpcRuleQuota 是否已赋值
                     * 
                     */
                    bool VpcRuleQuotaHasBeenSet() const;

                    /**
                     * 获取<p>封禁列表配额统计信息。</p>
                     * @return BlockListQuota <p>封禁列表配额统计信息。</p>
                     * 
                     */
                    OverviewBlockListQuota GetBlockListQuota() const;

                    /**
                     * 设置<p>封禁列表配额统计信息。</p>
                     * @param _blockListQuota <p>封禁列表配额统计信息。</p>
                     * 
                     */
                    void SetBlockListQuota(const OverviewBlockListQuota& _blockListQuota);

                    /**
                     * 判断参数 BlockListQuota 是否已赋值
                     * @return BlockListQuota 是否已赋值
                     * 
                     */
                    bool BlockListQuotaHasBeenSet() const;

                    /**
                     * 获取<p>封禁 IP 总数量。</p>
                     * @return BlockIpCount <p>封禁 IP 总数量。</p>
                     * 
                     */
                    int64_t GetBlockIpCount() const;

                    /**
                     * 设置<p>封禁 IP 总数量。</p>
                     * @param _blockIpCount <p>封禁 IP 总数量。</p>
                     * 
                     */
                    void SetBlockIpCount(const int64_t& _blockIpCount);

                    /**
                     * 判断参数 BlockIpCount 是否已赋值
                     * @return BlockIpCount 是否已赋值
                     * 
                     */
                    bool BlockIpCountHasBeenSet() const;

                    /**
                     * 获取<p>已使用封禁 IP 数量。</p>
                     * @return BlockIpUsed <p>已使用封禁 IP 数量。</p>
                     * 
                     */
                    int64_t GetBlockIpUsed() const;

                    /**
                     * 设置<p>已使用封禁 IP 数量。</p>
                     * @param _blockIpUsed <p>已使用封禁 IP 数量。</p>
                     * 
                     */
                    void SetBlockIpUsed(const int64_t& _blockIpUsed);

                    /**
                     * 判断参数 BlockIpUsed 是否已赋值
                     * @return BlockIpUsed 是否已赋值
                     * 
                     */
                    bool BlockIpUsedHasBeenSet() const;

                    /**
                     * 获取<p>封禁 IP 总配额数量。</p>
                     * @return BlockIpTotal <p>封禁 IP 总配额数量。</p>
                     * 
                     */
                    int64_t GetBlockIpTotal() const;

                    /**
                     * 设置<p>封禁 IP 总配额数量。</p>
                     * @param _blockIpTotal <p>封禁 IP 总配额数量。</p>
                     * 
                     */
                    void SetBlockIpTotal(const int64_t& _blockIpTotal);

                    /**
                     * 判断参数 BlockIpTotal 是否已赋值
                     * @return BlockIpTotal 是否已赋值
                     * 
                     */
                    bool BlockIpTotalHasBeenSet() const;

                    /**
                     * 获取<p>封禁列表基础包与扩容包配额详情。</p>
                     * @return BlockListQuotaDetail <p>封禁列表基础包与扩容包配额详情。</p>
                     * 
                     */
                    OverviewBlockListQuotaDetail GetBlockListQuotaDetail() const;

                    /**
                     * 设置<p>封禁列表基础包与扩容包配额详情。</p>
                     * @param _blockListQuotaDetail <p>封禁列表基础包与扩容包配额详情。</p>
                     * 
                     */
                    void SetBlockListQuotaDetail(const OverviewBlockListQuotaDetail& _blockListQuotaDetail);

                    /**
                     * 判断参数 BlockListQuotaDetail 是否已赋值
                     * @return BlockListQuotaDetail 是否已赋值
                     * 
                     */
                    bool BlockListQuotaDetailHasBeenSet() const;

                    /**
                     * 获取<p>安全组规则已使用数量。</p>
                     * @return SgRuleQuotaUsed <p>安全组规则已使用数量。</p>
                     * 
                     */
                    int64_t GetSgRuleQuotaUsed() const;

                    /**
                     * 设置<p>安全组规则已使用数量。</p>
                     * @param _sgRuleQuotaUsed <p>安全组规则已使用数量。</p>
                     * 
                     */
                    void SetSgRuleQuotaUsed(const int64_t& _sgRuleQuotaUsed);

                    /**
                     * 判断参数 SgRuleQuotaUsed 是否已赋值
                     * @return SgRuleQuotaUsed 是否已赋值
                     * 
                     */
                    bool SgRuleQuotaUsedHasBeenSet() const;

                    /**
                     * 获取<p>安全组规则总配额数量。</p>
                     * @return SgRuleQuotaTotal <p>安全组规则总配额数量。</p>
                     * 
                     */
                    int64_t GetSgRuleQuotaTotal() const;

                    /**
                     * 设置<p>安全组规则总配额数量。</p>
                     * @param _sgRuleQuotaTotal <p>安全组规则总配额数量。</p>
                     * 
                     */
                    void SetSgRuleQuotaTotal(const int64_t& _sgRuleQuotaTotal);

                    /**
                     * 判断参数 SgRuleQuotaTotal 是否已赋值
                     * @return SgRuleQuotaTotal 是否已赋值
                     * 
                     */
                    bool SgRuleQuotaTotalHasBeenSet() const;

                    /**
                     * 获取<p>总扩容资源已使用数量。</p>
                     * @return TotalExtensionUsed <p>总扩容资源已使用数量。</p>
                     * 
                     */
                    int64_t GetTotalExtensionUsed() const;

                    /**
                     * 设置<p>总扩容资源已使用数量。</p>
                     * @param _totalExtensionUsed <p>总扩容资源已使用数量。</p>
                     * 
                     */
                    void SetTotalExtensionUsed(const int64_t& _totalExtensionUsed);

                    /**
                     * 判断参数 TotalExtensionUsed 是否已赋值
                     * @return TotalExtensionUsed 是否已赋值
                     * 
                     */
                    bool TotalExtensionUsedHasBeenSet() const;

                    /**
                     * 获取<p>总扩容资源配额数量。</p>
                     * @return TotalExtensionNum <p>总扩容资源配额数量。</p>
                     * 
                     */
                    int64_t GetTotalExtensionNum() const;

                    /**
                     * 设置<p>总扩容资源配额数量。</p>
                     * @param _totalExtensionNum <p>总扩容资源配额数量。</p>
                     * 
                     */
                    void SetTotalExtensionNum(const int64_t& _totalExtensionNum);

                    /**
                     * 判断参数 TotalExtensionNum 是否已赋值
                     * @return TotalExtensionNum 是否已赋值
                     * 
                     */
                    bool TotalExtensionNumHasBeenSet() const;

                    /**
                     * 获取<p>地址模板已使用数量。</p>
                     * @return AddressTemplateUsed <p>地址模板已使用数量。</p>
                     * 
                     */
                    int64_t GetAddressTemplateUsed() const;

                    /**
                     * 设置<p>地址模板已使用数量。</p>
                     * @param _addressTemplateUsed <p>地址模板已使用数量。</p>
                     * 
                     */
                    void SetAddressTemplateUsed(const int64_t& _addressTemplateUsed);

                    /**
                     * 判断参数 AddressTemplateUsed 是否已赋值
                     * @return AddressTemplateUsed 是否已赋值
                     * 
                     */
                    bool AddressTemplateUsedHasBeenSet() const;

                    /**
                     * 获取<p>地址模板总配额数量。</p>
                     * @return AddressTemplateTotal <p>地址模板总配额数量。</p>
                     * 
                     */
                    int64_t GetAddressTemplateTotal() const;

                    /**
                     * 设置<p>地址模板总配额数量。</p>
                     * @param _addressTemplateTotal <p>地址模板总配额数量。</p>
                     * 
                     */
                    void SetAddressTemplateTotal(const int64_t& _addressTemplateTotal);

                    /**
                     * 判断参数 AddressTemplateTotal 是否已赋值
                     * @return AddressTemplateTotal 是否已赋值
                     * 
                     */
                    bool AddressTemplateTotalHasBeenSet() const;

                    /**
                     * 获取<p>蜜罐已使用数量。</p>
                     * @return HoneyPotUsed <p>蜜罐已使用数量。</p>
                     * 
                     */
                    int64_t GetHoneyPotUsed() const;

                    /**
                     * 设置<p>蜜罐已使用数量。</p>
                     * @param _honeyPotUsed <p>蜜罐已使用数量。</p>
                     * 
                     */
                    void SetHoneyPotUsed(const int64_t& _honeyPotUsed);

                    /**
                     * 判断参数 HoneyPotUsed 是否已赋值
                     * @return HoneyPotUsed 是否已赋值
                     * 
                     */
                    bool HoneyPotUsedHasBeenSet() const;

                    /**
                     * 获取<p>蜜罐总配额数量。</p>
                     * @return HoneyPotTotal <p>蜜罐总配额数量。</p>
                     * 
                     */
                    int64_t GetHoneyPotTotal() const;

                    /**
                     * 设置<p>蜜罐总配额数量。</p>
                     * @param _honeyPotTotal <p>蜜罐总配额数量。</p>
                     * 
                     */
                    void SetHoneyPotTotal(const int64_t& _honeyPotTotal);

                    /**
                     * 判断参数 HoneyPotTotal 是否已赋值
                     * @return HoneyPotTotal 是否已赋值
                     * 
                     */
                    bool HoneyPotTotalHasBeenSet() const;

                private:

                    /**
                     * <p>已使用公网 IP 数量。</p>
                     */
                    int64_t m_publicIpUsed;
                    bool m_publicIpUsedHasBeenSet;

                    /**
                     * <p>公网 IP 总配额数量。</p>
                     */
                    int64_t m_publicIpTotal;
                    bool m_publicIpTotalHasBeenSet;

                    /**
                     * <p>通用实例总配额数量。</p>
                     */
                    int64_t m_commonInstanceTotal;
                    bool m_commonInstanceTotalHasBeenSet;

                    /**
                     * <p>通用实例剩余配额数量。</p>
                     */
                    int64_t m_commonInstanceRemain;
                    bool m_commonInstanceRemainHasBeenSet;

                    /**
                     * <p>通用实例已使用数量。</p>
                     */
                    int64_t m_commonInstanceUsed;
                    bool m_commonInstanceUsedHasBeenSet;

                    /**
                     * <p>访问控制规则已使用数量。</p>
                     */
                    int64_t m_accessControlRuleUsed;
                    bool m_accessControlRuleUsedHasBeenSet;

                    /**
                     * <p>访问控制规则总配额数量。</p>
                     */
                    int64_t m_accessControlRuleTotal;
                    bool m_accessControlRuleTotalHasBeenSet;

                    /**
                     * <p>已使用串行地域数量。</p>
                     */
                    int64_t m_serialRegionUsed;
                    bool m_serialRegionUsedHasBeenSet;

                    /**
                     * <p>已使用 NAT 防火墙实例数量。</p>
                     */
                    int64_t m_natInstanceUsed;
                    bool m_natInstanceUsedHasBeenSet;

                    /**
                     * <p>已使用 VPC 防火墙实例数量。</p>
                     */
                    int64_t m_vpcInstanceUsed;
                    bool m_vpcInstanceUsedHasBeenSet;

                    /**
                     * <p>边界规则配额详情。</p>
                     */
                    OverviewCommonRuleQuotaDetail m_borderRuleQuota;
                    bool m_borderRuleQuotaHasBeenSet;

                    /**
                     * <p>NAT 规则配额详情。</p>
                     */
                    OverviewCommonRuleQuotaDetail m_natRuleQuota;
                    bool m_natRuleQuotaHasBeenSet;

                    /**
                     * <p>VPC 规则配额详情。</p>
                     */
                    OverviewVpcRuleQuotaDetail m_vpcRuleQuota;
                    bool m_vpcRuleQuotaHasBeenSet;

                    /**
                     * <p>封禁列表配额统计信息。</p>
                     */
                    OverviewBlockListQuota m_blockListQuota;
                    bool m_blockListQuotaHasBeenSet;

                    /**
                     * <p>封禁 IP 总数量。</p>
                     */
                    int64_t m_blockIpCount;
                    bool m_blockIpCountHasBeenSet;

                    /**
                     * <p>已使用封禁 IP 数量。</p>
                     */
                    int64_t m_blockIpUsed;
                    bool m_blockIpUsedHasBeenSet;

                    /**
                     * <p>封禁 IP 总配额数量。</p>
                     */
                    int64_t m_blockIpTotal;
                    bool m_blockIpTotalHasBeenSet;

                    /**
                     * <p>封禁列表基础包与扩容包配额详情。</p>
                     */
                    OverviewBlockListQuotaDetail m_blockListQuotaDetail;
                    bool m_blockListQuotaDetailHasBeenSet;

                    /**
                     * <p>安全组规则已使用数量。</p>
                     */
                    int64_t m_sgRuleQuotaUsed;
                    bool m_sgRuleQuotaUsedHasBeenSet;

                    /**
                     * <p>安全组规则总配额数量。</p>
                     */
                    int64_t m_sgRuleQuotaTotal;
                    bool m_sgRuleQuotaTotalHasBeenSet;

                    /**
                     * <p>总扩容资源已使用数量。</p>
                     */
                    int64_t m_totalExtensionUsed;
                    bool m_totalExtensionUsedHasBeenSet;

                    /**
                     * <p>总扩容资源配额数量。</p>
                     */
                    int64_t m_totalExtensionNum;
                    bool m_totalExtensionNumHasBeenSet;

                    /**
                     * <p>地址模板已使用数量。</p>
                     */
                    int64_t m_addressTemplateUsed;
                    bool m_addressTemplateUsedHasBeenSet;

                    /**
                     * <p>地址模板总配额数量。</p>
                     */
                    int64_t m_addressTemplateTotal;
                    bool m_addressTemplateTotalHasBeenSet;

                    /**
                     * <p>蜜罐已使用数量。</p>
                     */
                    int64_t m_honeyPotUsed;
                    bool m_honeyPotUsedHasBeenSet;

                    /**
                     * <p>蜜罐总配额数量。</p>
                     */
                    int64_t m_honeyPotTotal;
                    bool m_honeyPotTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWQUOTADETAIL_H_
