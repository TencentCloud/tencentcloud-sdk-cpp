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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/VpnGatewayQuota.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPN网关对象。
                */
                class VpnGateway : public AbstractModel
                {
                public:
                    VpnGateway();
                    ~VpnGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网关实例ID。</p>
                     * @return VpnGatewayId <p>网关实例ID。</p>
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置<p>网关实例ID。</p>
                     * @param _vpnGatewayId <p>网关实例ID。</p>
                     * 
                     */
                    void SetVpnGatewayId(const std::string& _vpnGatewayId);

                    /**
                     * 判断参数 VpnGatewayId 是否已赋值
                     * @return VpnGatewayId 是否已赋值
                     * 
                     */
                    bool VpnGatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>VPC实例ID。</p>
                     * @return VpcId <p>VPC实例ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC实例ID。</p>
                     * @param _vpcId <p>VPC实例ID。</p>
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
                     * 获取<p>网关实例名称。</p>
                     * @return VpnGatewayName <p>网关实例名称。</p>
                     * 
                     */
                    std::string GetVpnGatewayName() const;

                    /**
                     * 设置<p>网关实例名称。</p>
                     * @param _vpnGatewayName <p>网关实例名称。</p>
                     * 
                     */
                    void SetVpnGatewayName(const std::string& _vpnGatewayName);

                    /**
                     * 判断参数 VpnGatewayName 是否已赋值
                     * @return VpnGatewayName 是否已赋值
                     * 
                     */
                    bool VpnGatewayNameHasBeenSet() const;

                    /**
                     * 获取<p>网关实例类型</p><p>枚举值：</p><ul><li>IPSEC： IPSEC VPC类型VPN</li><li>SSL： SSL VPC类型VPN</li><li>CCN： IPSEC CCN类型VPN</li><li>SSL_CCN： SSL CCN类型VPN</li></ul><p>默认值：IPSEC</p>
                     * @return Type <p>网关实例类型</p><p>枚举值：</p><ul><li>IPSEC： IPSEC VPC类型VPN</li><li>SSL： SSL VPC类型VPN</li><li>CCN： IPSEC CCN类型VPN</li><li>SSL_CCN： SSL CCN类型VPN</li></ul><p>默认值：IPSEC</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>网关实例类型</p><p>枚举值：</p><ul><li>IPSEC： IPSEC VPC类型VPN</li><li>SSL： SSL VPC类型VPN</li><li>CCN： IPSEC CCN类型VPN</li><li>SSL_CCN： SSL CCN类型VPN</li></ul><p>默认值：IPSEC</p>
                     * @param _type <p>网关实例类型</p><p>枚举值：</p><ul><li>IPSEC： IPSEC VPC类型VPN</li><li>SSL： SSL VPC类型VPN</li><li>CCN： IPSEC CCN类型VPN</li><li>SSL_CCN： SSL CCN类型VPN</li></ul><p>默认值：IPSEC</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>网关实例状态。</p><p>枚举值：</p><ul><li>PENDING： 生产中</li><li>PENDING_ERROR： 生产失败</li><li>DELETING： 删除中</li><li>DELETING_ERROR： 生产失败</li><li>AVAILABLE： 运行中</li></ul>
                     * @return State <p>网关实例状态。</p><p>枚举值：</p><ul><li>PENDING： 生产中</li><li>PENDING_ERROR： 生产失败</li><li>DELETING： 删除中</li><li>DELETING_ERROR： 生产失败</li><li>AVAILABLE： 运行中</li></ul>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>网关实例状态。</p><p>枚举值：</p><ul><li>PENDING： 生产中</li><li>PENDING_ERROR： 生产失败</li><li>DELETING： 删除中</li><li>DELETING_ERROR： 生产失败</li><li>AVAILABLE： 运行中</li></ul>
                     * @param _state <p>网关实例状态。</p><p>枚举值：</p><ul><li>PENDING： 生产中</li><li>PENDING_ERROR： 生产失败</li><li>DELETING： 删除中</li><li>DELETING_ERROR： 生产失败</li><li>AVAILABLE： 运行中</li></ul>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>网关公网IP。</p>
                     * @return PublicIpAddress <p>网关公网IP。</p>
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置<p>网关公网IP。</p>
                     * @param _publicIpAddress <p>网关公网IP。</p>
                     * 
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>网关续费类型：&#39;NOTIFY_AND_MANUAL_RENEW&#39;：手动续费，&#39;NOTIFY_AND_AUTO_RENEW&#39;：自动续费，&#39;NOT_NOTIFY_AND_NOT_RENEW&#39;：到期不续费。</p>
                     * @return RenewFlag <p>网关续费类型：&#39;NOTIFY_AND_MANUAL_RENEW&#39;：手动续费，&#39;NOTIFY_AND_AUTO_RENEW&#39;：自动续费，&#39;NOT_NOTIFY_AND_NOT_RENEW&#39;：到期不续费。</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>网关续费类型：&#39;NOTIFY_AND_MANUAL_RENEW&#39;：手动续费，&#39;NOTIFY_AND_AUTO_RENEW&#39;：自动续费，&#39;NOT_NOTIFY_AND_NOT_RENEW&#39;：到期不续费。</p>
                     * @param _renewFlag <p>网关续费类型：&#39;NOTIFY_AND_MANUAL_RENEW&#39;：手动续费，&#39;NOTIFY_AND_AUTO_RENEW&#39;：自动续费，&#39;NOT_NOTIFY_AND_NOT_RENEW&#39;：到期不续费。</p>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。</p>
                     * @return InstanceChargeType <p>网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。</p>
                     * @param _instanceChargeType <p>网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>网关出带宽</p><p>单位：Mbps</p>
                     * @return InternetMaxBandwidthOut <p>网关出带宽</p><p>单位：Mbps</p>
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置<p>网关出带宽</p><p>单位：Mbps</p>
                     * @param _internetMaxBandwidthOut <p>网关出带宽</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p>
                     * @return CreatedTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdTime <p>创建时间。</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>预付费网关过期时间。</p>
                     * @return ExpiredTime <p>预付费网关过期时间。</p>
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置<p>预付费网关过期时间。</p>
                     * @param _expiredTime <p>预付费网关过期时间。</p>
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>公网IP是否被封堵。</p>
                     * @return IsAddressBlocked <p>公网IP是否被封堵。</p>
                     * 
                     */
                    bool GetIsAddressBlocked() const;

                    /**
                     * 设置<p>公网IP是否被封堵。</p>
                     * @param _isAddressBlocked <p>公网IP是否被封堵。</p>
                     * 
                     */
                    void SetIsAddressBlocked(const bool& _isAddressBlocked);

                    /**
                     * 判断参数 IsAddressBlocked 是否已赋值
                     * @return IsAddressBlocked 是否已赋值
                     * 
                     */
                    bool IsAddressBlockedHasBeenSet() const;

                    /**
                     * 获取<p>计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。</p>
                     * @return NewPurchasePlan <p>计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。</p>
                     * 
                     */
                    std::string GetNewPurchasePlan() const;

                    /**
                     * 设置<p>计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。</p>
                     * @param _newPurchasePlan <p>计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。</p>
                     * 
                     */
                    void SetNewPurchasePlan(const std::string& _newPurchasePlan);

                    /**
                     * 判断参数 NewPurchasePlan 是否已赋值
                     * @return NewPurchasePlan 是否已赋值
                     * 
                     */
                    bool NewPurchasePlanHasBeenSet() const;

                    /**
                     * 获取<p>网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。</p>
                     * @return RestrictState <p>网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。</p>
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置<p>网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。</p>
                     * @param _restrictState <p>网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。</p>
                     * 
                     */
                    void SetRestrictState(const std::string& _restrictState);

                    /**
                     * 判断参数 RestrictState 是否已赋值
                     * @return RestrictState 是否已赋值
                     * 
                     */
                    bool RestrictStateHasBeenSet() const;

                    /**
                     * 获取<p>可用区，如：ap-guangzhou-2。</p>
                     * @return Zone <p>可用区，如：ap-guangzhou-2。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区，如：ap-guangzhou-2。</p>
                     * @param _zone <p>可用区，如：ap-guangzhou-2。</p>
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
                     * 获取<p>网关带宽配额信息。</p>
                     * @return VpnGatewayQuotaSet <p>网关带宽配额信息。</p>
                     * 
                     */
                    std::vector<VpnGatewayQuota> GetVpnGatewayQuotaSet() const;

                    /**
                     * 设置<p>网关带宽配额信息。</p>
                     * @param _vpnGatewayQuotaSet <p>网关带宽配额信息。</p>
                     * 
                     */
                    void SetVpnGatewayQuotaSet(const std::vector<VpnGatewayQuota>& _vpnGatewayQuotaSet);

                    /**
                     * 判断参数 VpnGatewayQuotaSet 是否已赋值
                     * @return VpnGatewayQuotaSet 是否已赋值
                     * 
                     */
                    bool VpnGatewayQuotaSetHasBeenSet() const;

                    /**
                     * 获取<p>网关实例版本信息。</p>
                     * @return Version <p>网关实例版本信息。</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>网关实例版本信息。</p>
                     * @param _version <p>网关实例版本信息。</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>Type值为CCN/SSL_CCN时，该值表示云联网实例ID。</p>
                     * @return NetworkInstanceId <p>Type值为CCN/SSL_CCN时，该值表示云联网实例ID。</p>
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置<p>Type值为CCN/SSL_CCN时，该值表示云联网实例ID。</p>
                     * @param _networkInstanceId <p>Type值为CCN/SSL_CCN时，该值表示云联网实例ID。</p>
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>CDC 实例ID。</p>
                     * @return CdcId <p>CDC 实例ID。</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>CDC 实例ID。</p>
                     * @param _cdcId <p>CDC 实例ID。</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>SSL-VPN 客户端连接数。</p>
                     * @return MaxConnection <p>SSL-VPN 客户端连接数。</p>
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置<p>SSL-VPN 客户端连接数。</p>
                     * @param _maxConnection <p>SSL-VPN 客户端连接数。</p>
                     * 
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     * 
                     */
                    bool MaxConnectionHasBeenSet() const;

                    /**
                     * 获取<p>Bgp ASN</p>
                     * @return BgpAsn <p>Bgp ASN</p>
                     * 
                     */
                    uint64_t GetBgpAsn() const;

                    /**
                     * 设置<p>Bgp ASN</p>
                     * @param _bgpAsn <p>Bgp ASN</p>
                     * 
                     */
                    void SetBgpAsn(const uint64_t& _bgpAsn);

                    /**
                     * 判断参数 BgpAsn 是否已赋值
                     * @return BgpAsn 是否已赋值
                     * 
                     */
                    bool BgpAsnHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return TagSet <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tagSet <p>标签列表</p>
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例ID。</p>
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * <p>VPC实例ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>网关实例名称。</p>
                     */
                    std::string m_vpnGatewayName;
                    bool m_vpnGatewayNameHasBeenSet;

                    /**
                     * <p>网关实例类型</p><p>枚举值：</p><ul><li>IPSEC： IPSEC VPC类型VPN</li><li>SSL： SSL VPC类型VPN</li><li>CCN： IPSEC CCN类型VPN</li><li>SSL_CCN： SSL CCN类型VPN</li></ul><p>默认值：IPSEC</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>网关实例状态。</p><p>枚举值：</p><ul><li>PENDING： 生产中</li><li>PENDING_ERROR： 生产失败</li><li>DELETING： 删除中</li><li>DELETING_ERROR： 生产失败</li><li>AVAILABLE： 运行中</li></ul>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>网关公网IP。</p>
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * <p>网关续费类型：&#39;NOTIFY_AND_MANUAL_RENEW&#39;：手动续费，&#39;NOTIFY_AND_AUTO_RENEW&#39;：自动续费，&#39;NOT_NOTIFY_AND_NOT_RENEW&#39;：到期不续费。</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>网关出带宽</p><p>单位：Mbps</p>
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>预付费网关过期时间。</p>
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>公网IP是否被封堵。</p>
                     */
                    bool m_isAddressBlocked;
                    bool m_isAddressBlockedHasBeenSet;

                    /**
                     * <p>计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。</p>
                     */
                    std::string m_newPurchasePlan;
                    bool m_newPurchasePlanHasBeenSet;

                    /**
                     * <p>网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。</p>
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * <p>可用区，如：ap-guangzhou-2。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>网关带宽配额信息。</p>
                     */
                    std::vector<VpnGatewayQuota> m_vpnGatewayQuotaSet;
                    bool m_vpnGatewayQuotaSetHasBeenSet;

                    /**
                     * <p>网关实例版本信息。</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Type值为CCN/SSL_CCN时，该值表示云联网实例ID。</p>
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * <p>CDC 实例ID。</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>SSL-VPN 客户端连接数。</p>
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * <p>Bgp ASN</p>
                     */
                    uint64_t m_bgpAsn;
                    bool m_bgpAsnHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAY_H_
