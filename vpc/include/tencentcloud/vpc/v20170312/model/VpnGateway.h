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
                     * 获取网关实例ID。
                     * @return VpnGatewayId 网关实例ID。
                     * 
                     */
                    std::string GetVpnGatewayId() const;

                    /**
                     * 设置网关实例ID。
                     * @param _vpnGatewayId 网关实例ID。
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
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
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
                     * 获取网关实例名称。
                     * @return VpnGatewayName 网关实例名称。
                     * 
                     */
                    std::string GetVpnGatewayName() const;

                    /**
                     * 设置网关实例名称。
                     * @param _vpnGatewayName 网关实例名称。
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
                     * 获取网关实例类型：'IPSEC', 'SSL','CCN','SSL_CCN'。
                     * @return Type 网关实例类型：'IPSEC', 'SSL','CCN','SSL_CCN'。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置网关实例类型：'IPSEC', 'SSL','CCN','SSL_CCN'。
                     * @param _type 网关实例类型：'IPSEC', 'SSL','CCN','SSL_CCN'。
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
                     * 获取网关实例状态， 'PENDING'：生产中，'PENDING_ERROR'：生产失败，'DELETING'：删除中，'DELETING_ERROR'：删除失败，'AVAILABLE'：运行中。
                     * @return State 网关实例状态， 'PENDING'：生产中，'PENDING_ERROR'：生产失败，'DELETING'：删除中，'DELETING_ERROR'：删除失败，'AVAILABLE'：运行中。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置网关实例状态， 'PENDING'：生产中，'PENDING_ERROR'：生产失败，'DELETING'：删除中，'DELETING_ERROR'：删除失败，'AVAILABLE'：运行中。
                     * @param _state 网关实例状态， 'PENDING'：生产中，'PENDING_ERROR'：生产失败，'DELETING'：删除中，'DELETING_ERROR'：删除失败，'AVAILABLE'：运行中。
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
                     * 获取网关公网IP。
                     * @return PublicIpAddress 网关公网IP。
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置网关公网IP。
                     * @param _publicIpAddress 网关公网IP。
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
                     * 获取网关续费类型：'NOTIFY_AND_MANUAL_RENEW'：手动续费，'NOTIFY_AND_AUTO_RENEW'：自动续费，'NOT_NOTIFY_AND_NOT_RENEW'：到期不续费。
                     * @return RenewFlag 网关续费类型：'NOTIFY_AND_MANUAL_RENEW'：手动续费，'NOTIFY_AND_AUTO_RENEW'：自动续费，'NOT_NOTIFY_AND_NOT_RENEW'：到期不续费。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置网关续费类型：'NOTIFY_AND_MANUAL_RENEW'：手动续费，'NOTIFY_AND_AUTO_RENEW'：自动续费，'NOT_NOTIFY_AND_NOT_RENEW'：到期不续费。
                     * @param _renewFlag 网关续费类型：'NOTIFY_AND_MANUAL_RENEW'：手动续费，'NOTIFY_AND_AUTO_RENEW'：自动续费，'NOT_NOTIFY_AND_NOT_RENEW'：到期不续费。
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
                     * 获取网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。
                     * @return InstanceChargeType 网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。
                     * @param _instanceChargeType 网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。
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
                     * 获取网关出带宽。
                     * @return InternetMaxBandwidthOut 网关出带宽。
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置网关出带宽。
                     * @param _internetMaxBandwidthOut 网关出带宽。
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
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
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
                     * 获取预付费网关过期时间。
                     * @return ExpiredTime 预付费网关过期时间。
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置预付费网关过期时间。
                     * @param _expiredTime 预付费网关过期时间。
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
                     * 获取公网IP是否被封堵。
                     * @return IsAddressBlocked 公网IP是否被封堵。
                     * 
                     */
                    bool GetIsAddressBlocked() const;

                    /**
                     * 设置公网IP是否被封堵。
                     * @param _isAddressBlocked 公网IP是否被封堵。
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
                     * 获取计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。
                     * @return NewPurchasePlan 计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。
                     * 
                     */
                    std::string GetNewPurchasePlan() const;

                    /**
                     * 设置计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。
                     * @param _newPurchasePlan 计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。
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
                     * 获取网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。
                     * @return RestrictState 网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。
                     * 
                     */
                    std::string GetRestrictState() const;

                    /**
                     * 设置网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。
                     * @param _restrictState 网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。
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
                     * 获取可用区，如：ap-guangzhou-2。
                     * @return Zone 可用区，如：ap-guangzhou-2。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区，如：ap-guangzhou-2。
                     * @param _zone 可用区，如：ap-guangzhou-2。
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
                     * 获取网关带宽配额信息。
                     * @return VpnGatewayQuotaSet 网关带宽配额信息。
                     * 
                     */
                    std::vector<VpnGatewayQuota> GetVpnGatewayQuotaSet() const;

                    /**
                     * 设置网关带宽配额信息。
                     * @param _vpnGatewayQuotaSet 网关带宽配额信息。
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
                     * 获取网关实例版本信息。
                     * @return Version 网关实例版本信息。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置网关实例版本信息。
                     * @param _version 网关实例版本信息。
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
                     * 获取Type值为CCN时，该值表示云联网实例ID。
                     * @return NetworkInstanceId Type值为CCN时，该值表示云联网实例ID。
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置Type值为CCN时，该值表示云联网实例ID。
                     * @param _networkInstanceId Type值为CCN时，该值表示云联网实例ID。
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
                     * 获取CDC 实例ID。
                     * @return CdcId CDC 实例ID。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC 实例ID。
                     * @param _cdcId CDC 实例ID。
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
                     * 获取SSL-VPN 客户端连接数。
                     * @return MaxConnection SSL-VPN 客户端连接数。
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置SSL-VPN 客户端连接数。
                     * @param _maxConnection SSL-VPN 客户端连接数。
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
                     * 获取Bgp ASN
                     * @return BgpAsn Bgp ASN
                     * 
                     */
                    uint64_t GetBgpAsn() const;

                    /**
                     * 设置Bgp ASN
                     * @param _bgpAsn Bgp ASN
                     * 
                     */
                    void SetBgpAsn(const uint64_t& _bgpAsn);

                    /**
                     * 判断参数 BgpAsn 是否已赋值
                     * @return BgpAsn 是否已赋值
                     * 
                     */
                    bool BgpAsnHasBeenSet() const;

                private:

                    /**
                     * 网关实例ID。
                     */
                    std::string m_vpnGatewayId;
                    bool m_vpnGatewayIdHasBeenSet;

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 网关实例名称。
                     */
                    std::string m_vpnGatewayName;
                    bool m_vpnGatewayNameHasBeenSet;

                    /**
                     * 网关实例类型：'IPSEC', 'SSL','CCN','SSL_CCN'。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 网关实例状态， 'PENDING'：生产中，'PENDING_ERROR'：生产失败，'DELETING'：删除中，'DELETING_ERROR'：删除失败，'AVAILABLE'：运行中。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 网关公网IP。
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * 网关续费类型：'NOTIFY_AND_MANUAL_RENEW'：手动续费，'NOTIFY_AND_AUTO_RENEW'：自动续费，'NOT_NOTIFY_AND_NOT_RENEW'：到期不续费。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 网关付费类型：POSTPAID_BY_HOUR：按量计费，PREPAID：包年包月预付费。
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 网关出带宽。
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 预付费网关过期时间。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 公网IP是否被封堵。
                     */
                    bool m_isAddressBlocked;
                    bool m_isAddressBlockedHasBeenSet;

                    /**
                     * 计费模式变更，PREPAID_TO_POSTPAID：包年包月预付费到期转按小时后付费。
                     */
                    std::string m_newPurchasePlan;
                    bool m_newPurchasePlanHasBeenSet;

                    /**
                     * 网关计费状态，PROTECTIVELY_ISOLATED：被安全隔离的实例，NORMAL：正常。
                     */
                    std::string m_restrictState;
                    bool m_restrictStateHasBeenSet;

                    /**
                     * 可用区，如：ap-guangzhou-2。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 网关带宽配额信息。
                     */
                    std::vector<VpnGatewayQuota> m_vpnGatewayQuotaSet;
                    bool m_vpnGatewayQuotaSetHasBeenSet;

                    /**
                     * 网关实例版本信息。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Type值为CCN时，该值表示云联网实例ID。
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * CDC 实例ID。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * SSL-VPN 客户端连接数。
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * Bgp ASN
                     */
                    uint64_t m_bgpAsn;
                    bool m_bgpAsnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAY_H_
