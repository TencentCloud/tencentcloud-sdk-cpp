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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPINFO_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * Eip信息
                */
                class EipInfo : public AbstractModel
                {
                public:
                    EipInfo();
                    ~EipInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取EIP实例ID
                     * @return EipId EIP实例ID
                     * 
                     */
                    std::string GetEipId() const;

                    /**
                     * 设置EIP实例ID
                     * @param _eipId EIP实例ID
                     * 
                     */
                    void SetEipId(const std::string& _eipId);

                    /**
                     * 判断参数 EipId 是否已赋值
                     * @return EipId 是否已赋值
                     * 
                     */
                    bool EipIdHasBeenSet() const;

                    /**
                     * 获取EIP名称
                     * @return EipName EIP名称
                     * 
                     */
                    std::string GetEipName() const;

                    /**
                     * 设置EIP名称
                     * @param _eipName EIP名称
                     * 
                     */
                    void SetEipName(const std::string& _eipName);

                    /**
                     * 判断参数 EipName 是否已赋值
                     * @return EipName 是否已赋值
                     * 
                     */
                    bool EipNameHasBeenSet() const;

                    /**
                     * 获取EIP地址
                     * @return Eip EIP地址
                     * 
                     */
                    std::string GetEip() const;

                    /**
                     * 设置EIP地址
                     * @param _eip EIP地址
                     * 
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     * 
                     */
                    bool EipHasBeenSet() const;

                    /**
                     * 获取运营商ID 0：电信； 1：联通； 2：移动； 3：教育网； 4：盈科； 5：BGP； 6：中国香港
                     * @return IspId 运营商ID 0：电信； 1：联通； 2：移动； 3：教育网； 4：盈科； 5：BGP； 6：中国香港
                     * 
                     */
                    int64_t GetIspId() const;

                    /**
                     * 设置运营商ID 0：电信； 1：联通； 2：移动； 3：教育网； 4：盈科； 5：BGP； 6：中国香港
                     * @param _ispId 运营商ID 0：电信； 1：联通； 2：移动； 3：教育网； 4：盈科； 5：BGP； 6：中国香港
                     * 
                     */
                    void SetIspId(const int64_t& _ispId);

                    /**
                     * 判断参数 IspId 是否已赋值
                     * @return IspId 是否已赋值
                     * 
                     */
                    bool IspIdHasBeenSet() const;

                    /**
                     * 获取状态 0：创建中； 1：绑定中； 2：已绑定； 3：解绑中； 4：未绑定； 6：下线中； 9：创建失败
                     * @return Status 状态 0：创建中； 1：绑定中； 2：已绑定； 3：解绑中； 4：未绑定； 6：下线中； 9：创建失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 0：创建中； 1：绑定中； 2：已绑定； 3：解绑中； 4：未绑定； 6：下线中； 9：创建失败
                     * @param _status 状态 0：创建中； 1：绑定中； 2：已绑定； 3：解绑中； 4：未绑定； 6：下线中； 9：创建失败
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
                     * 获取是否欠费隔离 1： 欠费隔离； 0： 正常。处在欠费隔离情况下的EIP不能进行任何管理操作。
                     * @return Arrears 是否欠费隔离 1： 欠费隔离； 0： 正常。处在欠费隔离情况下的EIP不能进行任何管理操作。
                     * 
                     */
                    int64_t GetArrears() const;

                    /**
                     * 设置是否欠费隔离 1： 欠费隔离； 0： 正常。处在欠费隔离情况下的EIP不能进行任何管理操作。
                     * @param _arrears 是否欠费隔离 1： 欠费隔离； 0： 正常。处在欠费隔离情况下的EIP不能进行任何管理操作。
                     * 
                     */
                    void SetArrears(const int64_t& _arrears);

                    /**
                     * 判断参数 Arrears 是否已赋值
                     * @return Arrears 是否已赋值
                     * 
                     */
                    bool ArrearsHasBeenSet() const;

                    /**
                     * 获取EIP所绑定的服务器实例ID，未绑定则为空
                     * @return InstanceId EIP所绑定的服务器实例ID，未绑定则为空
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EIP所绑定的服务器实例ID，未绑定则为空
                     * @param _instanceId EIP所绑定的服务器实例ID，未绑定则为空
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取服务器别名
                     * @return InstanceAlias 服务器别名
                     * 
                     */
                    std::string GetInstanceAlias() const;

                    /**
                     * 设置服务器别名
                     * @param _instanceAlias 服务器别名
                     * 
                     */
                    void SetInstanceAlias(const std::string& _instanceAlias);

                    /**
                     * 判断参数 InstanceAlias 是否已赋值
                     * @return InstanceAlias 是否已赋值
                     * 
                     */
                    bool InstanceAliasHasBeenSet() const;

                    /**
                     * 获取EIP解绑时间
                     * @return FreeAt EIP解绑时间
                     * 
                     */
                    std::string GetFreeAt() const;

                    /**
                     * 设置EIP解绑时间
                     * @param _freeAt EIP解绑时间
                     * 
                     */
                    void SetFreeAt(const std::string& _freeAt);

                    /**
                     * 判断参数 FreeAt 是否已赋值
                     * @return FreeAt 是否已赋值
                     * 
                     */
                    bool FreeAtHasBeenSet() const;

                    /**
                     * 获取EIP创建时间
                     * @return CreatedAt EIP创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置EIP创建时间
                     * @param _createdAt EIP创建时间
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
                     * 获取EIP更新时间
                     * @return UpdatedAt EIP更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置EIP更新时间
                     * @param _updatedAt EIP更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取EIP未绑定服务器时长（单位：秒）
                     * @return FreeSecond EIP未绑定服务器时长（单位：秒）
                     * 
                     */
                    int64_t GetFreeSecond() const;

                    /**
                     * 设置EIP未绑定服务器时长（单位：秒）
                     * @param _freeSecond EIP未绑定服务器时长（单位：秒）
                     * 
                     */
                    void SetFreeSecond(const int64_t& _freeSecond);

                    /**
                     * 判断参数 FreeSecond 是否已赋值
                     * @return FreeSecond 是否已赋值
                     * 
                     */
                    bool FreeSecondHasBeenSet() const;

                    /**
                     * 获取EIP所绑定的资源类型，-1：未绑定资源；0：黑石物理机，字段对应unInstanceId；1：Nat网关，字段对应natUid；2：云服务器字段对应vpcIp; 3: 托管机器，字段对应HInstanceId, HInstanceAlias
                     * @return Type EIP所绑定的资源类型，-1：未绑定资源；0：黑石物理机，字段对应unInstanceId；1：Nat网关，字段对应natUid；2：云服务器字段对应vpcIp; 3: 托管机器，字段对应HInstanceId, HInstanceAlias
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置EIP所绑定的资源类型，-1：未绑定资源；0：黑石物理机，字段对应unInstanceId；1：Nat网关，字段对应natUid；2：云服务器字段对应vpcIp; 3: 托管机器，字段对应HInstanceId, HInstanceAlias
                     * @param _type EIP所绑定的资源类型，-1：未绑定资源；0：黑石物理机，字段对应unInstanceId；1：Nat网关，字段对应natUid；2：云服务器字段对应vpcIp; 3: 托管机器，字段对应HInstanceId, HInstanceAlias
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     * @return PayMode EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     * @param _payMode EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取EIP带宽计费模式下的带宽上限（单位：MB）
                     * @return Bandwidth EIP带宽计费模式下的带宽上限（单位：MB）
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置EIP带宽计费模式下的带宽上限（单位：MB）
                     * @param _bandwidth EIP带宽计费模式下的带宽上限（单位：MB）
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取最近一次操作变更的EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     * @return LatestPayMode 最近一次操作变更的EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     * 
                     */
                    std::string GetLatestPayMode() const;

                    /**
                     * 设置最近一次操作变更的EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     * @param _latestPayMode 最近一次操作变更的EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     * 
                     */
                    void SetLatestPayMode(const std::string& _latestPayMode);

                    /**
                     * 判断参数 LatestPayMode 是否已赋值
                     * @return LatestPayMode 是否已赋值
                     * 
                     */
                    bool LatestPayModeHasBeenSet() const;

                    /**
                     * 获取最近一次操作变更的EIP计费模式对应的带宽上限值，仅在带宽计费模式下有效（单位：MB）
                     * @return LatestBandwidth 最近一次操作变更的EIP计费模式对应的带宽上限值，仅在带宽计费模式下有效（单位：MB）
                     * 
                     */
                    int64_t GetLatestBandwidth() const;

                    /**
                     * 设置最近一次操作变更的EIP计费模式对应的带宽上限值，仅在带宽计费模式下有效（单位：MB）
                     * @param _latestBandwidth 最近一次操作变更的EIP计费模式对应的带宽上限值，仅在带宽计费模式下有效（单位：MB）
                     * 
                     */
                    void SetLatestBandwidth(const int64_t& _latestBandwidth);

                    /**
                     * 判断参数 LatestBandwidth 是否已赋值
                     * @return LatestBandwidth 是否已赋值
                     * 
                     */
                    bool LatestBandwidthHasBeenSet() const;

                    /**
                     * 获取私有网络名称
                     * @return VpcName 私有网络名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpcName 私有网络名称
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
                     * 获取EIP所绑定的NAT网关的数字ID，形如：1001,，未绑定则为空
                     * @return NatId EIP所绑定的NAT网关的数字ID，形如：1001,，未绑定则为空
                     * 
                     */
                    int64_t GetNatId() const;

                    /**
                     * 设置EIP所绑定的NAT网关的数字ID，形如：1001,，未绑定则为空
                     * @param _natId EIP所绑定的NAT网关的数字ID，形如：1001,，未绑定则为空
                     * 
                     */
                    void SetNatId(const int64_t& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取EIP所绑定的NAT网关实例ID，形如："nat-n47xxxxx"，未绑定则为空
                     * @return NatUid EIP所绑定的NAT网关实例ID，形如："nat-n47xxxxx"，未绑定则为空
                     * 
                     */
                    std::string GetNatUid() const;

                    /**
                     * 设置EIP所绑定的NAT网关实例ID，形如："nat-n47xxxxx"，未绑定则为空
                     * @param _natUid EIP所绑定的NAT网关实例ID，形如："nat-n47xxxxx"，未绑定则为空
                     * 
                     */
                    void SetNatUid(const std::string& _natUid);

                    /**
                     * 判断参数 NatUid 是否已赋值
                     * @return NatUid 是否已赋值
                     * 
                     */
                    bool NatUidHasBeenSet() const;

                    /**
                     * 获取EIP所绑定的云服务器IP(托管或者云服务器的IP），形如："10.1.1.3"。 注意：IP资源需要通过bmvpc模块注册或者申请后才可以绑定eip，接口使用申请子网IP和注册子网IP：,未绑定则为空
                     * @return VpcIp EIP所绑定的云服务器IP(托管或者云服务器的IP），形如："10.1.1.3"。 注意：IP资源需要通过bmvpc模块注册或者申请后才可以绑定eip，接口使用申请子网IP和注册子网IP：,未绑定则为空
                     * 
                     */
                    std::string GetVpcIp() const;

                    /**
                     * 设置EIP所绑定的云服务器IP(托管或者云服务器的IP），形如："10.1.1.3"。 注意：IP资源需要通过bmvpc模块注册或者申请后才可以绑定eip，接口使用申请子网IP和注册子网IP：,未绑定则为空
                     * @param _vpcIp EIP所绑定的云服务器IP(托管或者云服务器的IP），形如："10.1.1.3"。 注意：IP资源需要通过bmvpc模块注册或者申请后才可以绑定eip，接口使用申请子网IP和注册子网IP：,未绑定则为空
                     * 
                     */
                    void SetVpcIp(const std::string& _vpcIp);

                    /**
                     * 判断参数 VpcIp 是否已赋值
                     * @return VpcIp 是否已赋值
                     * 
                     */
                    bool VpcIpHasBeenSet() const;

                    /**
                     * 获取私有网络实例ID
                     * @return VpcId 私有网络实例ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络实例ID
                     * @param _vpcId 私有网络实例ID
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
                     * 获取是否为独占类型EIP
                     * @return Exclusive 是否为独占类型EIP
                     * 
                     */
                    int64_t GetExclusive() const;

                    /**
                     * 设置是否为独占类型EIP
                     * @param _exclusive 是否为独占类型EIP
                     * 
                     */
                    void SetExclusive(const int64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取私有网络的cidr
                     * @return VpcCidr 私有网络的cidr
                     * 
                     */
                    std::string GetVpcCidr() const;

                    /**
                     * 设置私有网络的cidr
                     * @param _vpcCidr 私有网络的cidr
                     * 
                     */
                    void SetVpcCidr(const std::string& _vpcCidr);

                    /**
                     * 判断参数 VpcCidr 是否已赋值
                     * @return VpcCidr 是否已赋值
                     * 
                     */
                    bool VpcCidrHasBeenSet() const;

                    /**
                     * 获取EIP ACL实例ID
                     * @return AclId EIP ACL实例ID
                     * 
                     */
                    std::string GetAclId() const;

                    /**
                     * 设置EIP ACL实例ID
                     * @param _aclId EIP ACL实例ID
                     * 
                     */
                    void SetAclId(const std::string& _aclId);

                    /**
                     * 判断参数 AclId 是否已赋值
                     * @return AclId 是否已赋值
                     * 
                     */
                    bool AclIdHasBeenSet() const;

                    /**
                     * 获取EIP ACL名称
                     * @return AclName EIP ACL名称
                     * 
                     */
                    std::string GetAclName() const;

                    /**
                     * 设置EIP ACL名称
                     * @param _aclName EIP ACL名称
                     * 
                     */
                    void SetAclName(const std::string& _aclName);

                    /**
                     * 判断参数 AclName 是否已赋值
                     * @return AclName 是否已赋值
                     * 
                     */
                    bool AclNameHasBeenSet() const;

                    /**
                     * 获取托管机器实例ID
                     * @return HInstanceId 托管机器实例ID
                     * 
                     */
                    std::string GetHInstanceId() const;

                    /**
                     * 设置托管机器实例ID
                     * @param _hInstanceId 托管机器实例ID
                     * 
                     */
                    void SetHInstanceId(const std::string& _hInstanceId);

                    /**
                     * 判断参数 HInstanceId 是否已赋值
                     * @return HInstanceId 是否已赋值
                     * 
                     */
                    bool HInstanceIdHasBeenSet() const;

                    /**
                     * 获取托管机器别名
                     * @return HInstanceAlias 托管机器别名
                     * 
                     */
                    std::string GetHInstanceAlias() const;

                    /**
                     * 设置托管机器别名
                     * @param _hInstanceAlias 托管机器别名
                     * 
                     */
                    void SetHInstanceAlias(const std::string& _hInstanceAlias);

                    /**
                     * 判断参数 HInstanceAlias 是否已赋值
                     * @return HInstanceAlias 是否已赋值
                     * 
                     */
                    bool HInstanceAliasHasBeenSet() const;

                private:

                    /**
                     * EIP实例ID
                     */
                    std::string m_eipId;
                    bool m_eipIdHasBeenSet;

                    /**
                     * EIP名称
                     */
                    std::string m_eipName;
                    bool m_eipNameHasBeenSet;

                    /**
                     * EIP地址
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                    /**
                     * 运营商ID 0：电信； 1：联通； 2：移动； 3：教育网； 4：盈科； 5：BGP； 6：中国香港
                     */
                    int64_t m_ispId;
                    bool m_ispIdHasBeenSet;

                    /**
                     * 状态 0：创建中； 1：绑定中； 2：已绑定； 3：解绑中； 4：未绑定； 6：下线中； 9：创建失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否欠费隔离 1： 欠费隔离； 0： 正常。处在欠费隔离情况下的EIP不能进行任何管理操作。
                     */
                    int64_t m_arrears;
                    bool m_arrearsHasBeenSet;

                    /**
                     * EIP所绑定的服务器实例ID，未绑定则为空
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务器别名
                     */
                    std::string m_instanceAlias;
                    bool m_instanceAliasHasBeenSet;

                    /**
                     * EIP解绑时间
                     */
                    std::string m_freeAt;
                    bool m_freeAtHasBeenSet;

                    /**
                     * EIP创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * EIP更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * EIP未绑定服务器时长（单位：秒）
                     */
                    int64_t m_freeSecond;
                    bool m_freeSecondHasBeenSet;

                    /**
                     * EIP所绑定的资源类型，-1：未绑定资源；0：黑石物理机，字段对应unInstanceId；1：Nat网关，字段对应natUid；2：云服务器字段对应vpcIp; 3: 托管机器，字段对应HInstanceId, HInstanceAlias
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * EIP带宽计费模式下的带宽上限（单位：MB）
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 最近一次操作变更的EIP计费模式，"flow"：流量计费； "bandwidth"：带宽计费
                     */
                    std::string m_latestPayMode;
                    bool m_latestPayModeHasBeenSet;

                    /**
                     * 最近一次操作变更的EIP计费模式对应的带宽上限值，仅在带宽计费模式下有效（单位：MB）
                     */
                    int64_t m_latestBandwidth;
                    bool m_latestBandwidthHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * EIP所绑定的NAT网关的数字ID，形如：1001,，未绑定则为空
                     */
                    int64_t m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * EIP所绑定的NAT网关实例ID，形如："nat-n47xxxxx"，未绑定则为空
                     */
                    std::string m_natUid;
                    bool m_natUidHasBeenSet;

                    /**
                     * EIP所绑定的云服务器IP(托管或者云服务器的IP），形如："10.1.1.3"。 注意：IP资源需要通过bmvpc模块注册或者申请后才可以绑定eip，接口使用申请子网IP和注册子网IP：,未绑定则为空
                     */
                    std::string m_vpcIp;
                    bool m_vpcIpHasBeenSet;

                    /**
                     * 私有网络实例ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 是否为独占类型EIP
                     */
                    int64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * 私有网络的cidr
                     */
                    std::string m_vpcCidr;
                    bool m_vpcCidrHasBeenSet;

                    /**
                     * EIP ACL实例ID
                     */
                    std::string m_aclId;
                    bool m_aclIdHasBeenSet;

                    /**
                     * EIP ACL名称
                     */
                    std::string m_aclName;
                    bool m_aclNameHasBeenSet;

                    /**
                     * 托管机器实例ID
                     */
                    std::string m_hInstanceId;
                    bool m_hInstanceIdHasBeenSet;

                    /**
                     * 托管机器别名
                     */
                    std::string m_hInstanceAlias;
                    bool m_hInstanceAliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPINFO_H_
