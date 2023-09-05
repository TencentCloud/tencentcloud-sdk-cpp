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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ZONEINSTANCECOUNTISP_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ZONEINSTANCECOUNTISP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 实例可用区及对应的实例创建数目及运营商的组合；
                */
                class ZoneInstanceCountISP : public AbstractModel
                {
                public:
                    ZoneInstanceCountISP();
                    ~ZoneInstanceCountISP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建实例的可用区。
                     * @return Zone 创建实例的可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置创建实例的可用区。
                     * @param _zone 创建实例的可用区。
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
                     * 获取在当前可用区创建的实例数目。
                     * @return InstanceCount 在当前可用区创建的实例数目。
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置在当前可用区创建的实例数目。
                     * @param _instanceCount 在当前可用区创建的实例数目。
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
CMCC;CUCC;CTCC：三网；三网需要开通白名单，请直接联系腾讯云客服。
                     * @return ISP 运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
CMCC;CUCC;CTCC：三网；三网需要开通白名单，请直接联系腾讯云客服。
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
CMCC;CUCC;CTCC：三网；三网需要开通白名单，请直接联系腾讯云客服。
                     * @param _iSP 运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
CMCC;CUCC;CTCC：三网；三网需要开通白名单，请直接联系腾讯云客服。
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取指定私有网络编号，SubnetId与VpcId必须同时指定或不指定
                     * @return VpcId 指定私有网络编号，SubnetId与VpcId必须同时指定或不指定
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置指定私有网络编号，SubnetId与VpcId必须同时指定或不指定
                     * @param _vpcId 指定私有网络编号，SubnetId与VpcId必须同时指定或不指定
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
                     * 获取指定子网编号，SubnetId与VpcId必须同时指定或不指定
                     * @return SubnetId 指定子网编号，SubnetId与VpcId必须同时指定或不指定
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置指定子网编号，SubnetId与VpcId必须同时指定或不指定
                     * @param _subnetId 指定子网编号，SubnetId与VpcId必须同时指定或不指定
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取指定主网卡内网IP。条件：SubnetId与VpcId必须同时指定，并且IP数量与InstanceCount相同，多IP主机副网卡内网IP在相同子网内通过DHCP获取。
                     * @return PrivateIpAddresses 指定主网卡内网IP。条件：SubnetId与VpcId必须同时指定，并且IP数量与InstanceCount相同，多IP主机副网卡内网IP在相同子网内通过DHCP获取。
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置指定主网卡内网IP。条件：SubnetId与VpcId必须同时指定，并且IP数量与InstanceCount相同，多IP主机副网卡内网IP在相同子网内通过DHCP获取。
                     * @param _privateIpAddresses 指定主网卡内网IP。条件：SubnetId与VpcId必须同时指定，并且IP数量与InstanceCount相同，多IP主机副网卡内网IP在相同子网内通过DHCP获取。
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取为弹性网卡指定随机生成的IPv6地址数量，单网情况下是1，单网需要ISP 只能为单网运营商，三网情况3
                     * @return Ipv6AddressCount 为弹性网卡指定随机生成的IPv6地址数量，单网情况下是1，单网需要ISP 只能为单网运营商，三网情况3
                     * 
                     */
                    int64_t GetIpv6AddressCount() const;

                    /**
                     * 设置为弹性网卡指定随机生成的IPv6地址数量，单网情况下是1，单网需要ISP 只能为单网运营商，三网情况3
                     * @param _ipv6AddressCount 为弹性网卡指定随机生成的IPv6地址数量，单网情况下是1，单网需要ISP 只能为单网运营商，三网情况3
                     * 
                     */
                    void SetIpv6AddressCount(const int64_t& _ipv6AddressCount);

                    /**
                     * 判断参数 Ipv6AddressCount 是否已赋值
                     * @return Ipv6AddressCount 是否已赋值
                     * 
                     */
                    bool Ipv6AddressCountHasBeenSet() const;

                    /**
                     * 获取指定创建三网ipv6地址，使用的subnet数组，只创建ipv4不创建ipv6和单网ipv6子网依然使用SubnetId字段；
该数组必须且仅支持传入三个不同的子网，并且这三个子网各自分配了电信、联通、移动三个运营商的其中一个IPV6 CIDR网段
                     * @return Ipv6SubnetIds 指定创建三网ipv6地址，使用的subnet数组，只创建ipv4不创建ipv6和单网ipv6子网依然使用SubnetId字段；
该数组必须且仅支持传入三个不同的子网，并且这三个子网各自分配了电信、联通、移动三个运营商的其中一个IPV6 CIDR网段
                     * 
                     */
                    std::vector<std::string> GetIpv6SubnetIds() const;

                    /**
                     * 设置指定创建三网ipv6地址，使用的subnet数组，只创建ipv4不创建ipv6和单网ipv6子网依然使用SubnetId字段；
该数组必须且仅支持传入三个不同的子网，并且这三个子网各自分配了电信、联通、移动三个运营商的其中一个IPV6 CIDR网段
                     * @param _ipv6SubnetIds 指定创建三网ipv6地址，使用的subnet数组，只创建ipv4不创建ipv6和单网ipv6子网依然使用SubnetId字段；
该数组必须且仅支持传入三个不同的子网，并且这三个子网各自分配了电信、联通、移动三个运营商的其中一个IPV6 CIDR网段
                     * 
                     */
                    void SetIpv6SubnetIds(const std::vector<std::string>& _ipv6SubnetIds);

                    /**
                     * 判断参数 Ipv6SubnetIds 是否已赋值
                     * @return Ipv6SubnetIds 是否已赋值
                     * 
                     */
                    bool Ipv6SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * 创建实例的可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 在当前可用区创建的实例数目。
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 运营商如下：
CTCC：中国电信
CUCC：中国联通
CMCC：中国移动
CMCC;CUCC;CTCC：三网；三网需要开通白名单，请直接联系腾讯云客服。
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * 指定私有网络编号，SubnetId与VpcId必须同时指定或不指定
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 指定子网编号，SubnetId与VpcId必须同时指定或不指定
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 指定主网卡内网IP。条件：SubnetId与VpcId必须同时指定，并且IP数量与InstanceCount相同，多IP主机副网卡内网IP在相同子网内通过DHCP获取。
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 为弹性网卡指定随机生成的IPv6地址数量，单网情况下是1，单网需要ISP 只能为单网运营商，三网情况3
                     */
                    int64_t m_ipv6AddressCount;
                    bool m_ipv6AddressCountHasBeenSet;

                    /**
                     * 指定创建三网ipv6地址，使用的subnet数组，只创建ipv4不创建ipv6和单网ipv6子网依然使用SubnetId字段；
该数组必须且仅支持传入三个不同的子网，并且这三个子网各自分配了电信、联通、移动三个运营商的其中一个IPV6 CIDR网段
                     */
                    std::vector<std::string> m_ipv6SubnetIds;
                    bool m_ipv6SubnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ZONEINSTANCECOUNTISP_H_
