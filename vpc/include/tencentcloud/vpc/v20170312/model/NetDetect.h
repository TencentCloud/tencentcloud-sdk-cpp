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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 网络探测对象。
                */
                class NetDetect : public AbstractModel
                {
                public:
                    NetDetect();
                    ~NetDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`VPC`实例`ID`。形如：`vpc-12345678`
                     * @return VpcId `VPC`实例`ID`。形如：`vpc-12345678`
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`。形如：`vpc-12345678`
                     * @param _vpcId `VPC`实例`ID`。形如：`vpc-12345678`
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
                     * 获取`VPC`实例名称。
                     * @return VpcName `VPC`实例名称。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置`VPC`实例名称。
                     * @param _vpcName `VPC`实例名称。
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
                     * 获取子网实例ID。形如：subnet-12345678。
                     * @return SubnetId 子网实例ID。形如：subnet-12345678。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID。形如：subnet-12345678。
                     * @param _subnetId 子网实例ID。形如：subnet-12345678。
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
                     * 获取子网实例名称。
                     * @return SubnetName 子网实例名称。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网实例名称。
                     * @param _subnetName 子网实例名称。
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取网络探测实例ID。形如：netd-12345678。
                     * @return NetDetectId 网络探测实例ID。形如：netd-12345678。
                     * 
                     */
                    std::string GetNetDetectId() const;

                    /**
                     * 设置网络探测实例ID。形如：netd-12345678。
                     * @param _netDetectId 网络探测实例ID。形如：netd-12345678。
                     * 
                     */
                    void SetNetDetectId(const std::string& _netDetectId);

                    /**
                     * 判断参数 NetDetectId 是否已赋值
                     * @return NetDetectId 是否已赋值
                     * 
                     */
                    bool NetDetectIdHasBeenSet() const;

                    /**
                     * 获取网络探测名称，最大长度不能超过60个字节。
                     * @return NetDetectName 网络探测名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetNetDetectName() const;

                    /**
                     * 设置网络探测名称，最大长度不能超过60个字节。
                     * @param _netDetectName 网络探测名称，最大长度不能超过60个字节。
                     * 
                     */
                    void SetNetDetectName(const std::string& _netDetectName);

                    /**
                     * 判断参数 NetDetectName 是否已赋值
                     * @return NetDetectName 是否已赋值
                     * 
                     */
                    bool NetDetectNameHasBeenSet() const;

                    /**
                     * 获取探测目的IPv4地址数组，最多两个。
                     * @return DetectDestinationIp 探测目的IPv4地址数组，最多两个。
                     * 
                     */
                    std::vector<std::string> GetDetectDestinationIp() const;

                    /**
                     * 设置探测目的IPv4地址数组，最多两个。
                     * @param _detectDestinationIp 探测目的IPv4地址数组，最多两个。
                     * 
                     */
                    void SetDetectDestinationIp(const std::vector<std::string>& _detectDestinationIp);

                    /**
                     * 判断参数 DetectDestinationIp 是否已赋值
                     * @return DetectDestinationIp 是否已赋值
                     * 
                     */
                    bool DetectDestinationIpHasBeenSet() const;

                    /**
                     * 获取系统自动分配的探测源IPv4数组。长度为2。
                     * @return DetectSourceIp 系统自动分配的探测源IPv4数组。长度为2。
                     * 
                     */
                    std::vector<std::string> GetDetectSourceIp() const;

                    /**
                     * 设置系统自动分配的探测源IPv4数组。长度为2。
                     * @param _detectSourceIp 系统自动分配的探测源IPv4数组。长度为2。
                     * 
                     */
                    void SetDetectSourceIp(const std::vector<std::string>& _detectSourceIp);

                    /**
                     * 判断参数 DetectSourceIp 是否已赋值
                     * @return DetectSourceIp 是否已赋值
                     * 
                     */
                    bool DetectSourceIpHasBeenSet() const;

                    /**
                     * 获取下一跳类型，目前我们支持的类型有：
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
NAT：NAT网关；
NORMAL_CVM：普通云服务器；
CCN：云联网网关；
NONEXTHOP：无下一跳；
                     * @return NextHopType 下一跳类型，目前我们支持的类型有：
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
NAT：NAT网关；
NORMAL_CVM：普通云服务器；
CCN：云联网网关；
NONEXTHOP：无下一跳；
                     * 
                     */
                    std::string GetNextHopType() const;

                    /**
                     * 设置下一跳类型，目前我们支持的类型有：
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
NAT：NAT网关；
NORMAL_CVM：普通云服务器；
CCN：云联网网关；
NONEXTHOP：无下一跳；
                     * @param _nextHopType 下一跳类型，目前我们支持的类型有：
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
NAT：NAT网关；
NORMAL_CVM：普通云服务器；
CCN：云联网网关；
NONEXTHOP：无下一跳；
                     * 
                     */
                    void SetNextHopType(const std::string& _nextHopType);

                    /**
                     * 判断参数 NextHopType 是否已赋值
                     * @return NextHopType 是否已赋值
                     * 
                     */
                    bool NextHopTypeHasBeenSet() const;

                    /**
                     * 获取下一跳目的网关，取值与“下一跳类型”相关：
下一跳类型为VPN，取值VPN网关ID，形如：vpngw-12345678；
下一跳类型为DIRECTCONNECT，取值专线网关ID，形如：dcg-12345678；
下一跳类型为PEERCONNECTION，取值对等连接ID，形如：pcx-12345678；
下一跳类型为NAT，取值Nat网关，形如：nat-12345678；
下一跳类型为NORMAL_CVM，取值云服务器IPv4地址，形如：10.0.0.12；
下一跳类型为CCN，取值云联网ID，形如：ccn-12345678；
下一跳类型为NONEXTHOP，指定网络探测为无下一跳的网络探测，添加和修改时，不需要指定值，查询时值为空字符串；
                     * @return NextHopDestination 下一跳目的网关，取值与“下一跳类型”相关：
下一跳类型为VPN，取值VPN网关ID，形如：vpngw-12345678；
下一跳类型为DIRECTCONNECT，取值专线网关ID，形如：dcg-12345678；
下一跳类型为PEERCONNECTION，取值对等连接ID，形如：pcx-12345678；
下一跳类型为NAT，取值Nat网关，形如：nat-12345678；
下一跳类型为NORMAL_CVM，取值云服务器IPv4地址，形如：10.0.0.12；
下一跳类型为CCN，取值云联网ID，形如：ccn-12345678；
下一跳类型为NONEXTHOP，指定网络探测为无下一跳的网络探测，添加和修改时，不需要指定值，查询时值为空字符串；
                     * 
                     */
                    std::string GetNextHopDestination() const;

                    /**
                     * 设置下一跳目的网关，取值与“下一跳类型”相关：
下一跳类型为VPN，取值VPN网关ID，形如：vpngw-12345678；
下一跳类型为DIRECTCONNECT，取值专线网关ID，形如：dcg-12345678；
下一跳类型为PEERCONNECTION，取值对等连接ID，形如：pcx-12345678；
下一跳类型为NAT，取值Nat网关，形如：nat-12345678；
下一跳类型为NORMAL_CVM，取值云服务器IPv4地址，形如：10.0.0.12；
下一跳类型为CCN，取值云联网ID，形如：ccn-12345678；
下一跳类型为NONEXTHOP，指定网络探测为无下一跳的网络探测，添加和修改时，不需要指定值，查询时值为空字符串；
                     * @param _nextHopDestination 下一跳目的网关，取值与“下一跳类型”相关：
下一跳类型为VPN，取值VPN网关ID，形如：vpngw-12345678；
下一跳类型为DIRECTCONNECT，取值专线网关ID，形如：dcg-12345678；
下一跳类型为PEERCONNECTION，取值对等连接ID，形如：pcx-12345678；
下一跳类型为NAT，取值Nat网关，形如：nat-12345678；
下一跳类型为NORMAL_CVM，取值云服务器IPv4地址，形如：10.0.0.12；
下一跳类型为CCN，取值云联网ID，形如：ccn-12345678；
下一跳类型为NONEXTHOP，指定网络探测为无下一跳的网络探测，添加和修改时，不需要指定值，查询时值为空字符串；
                     * 
                     */
                    void SetNextHopDestination(const std::string& _nextHopDestination);

                    /**
                     * 判断参数 NextHopDestination 是否已赋值
                     * @return NextHopDestination 是否已赋值
                     * 
                     */
                    bool NextHopDestinationHasBeenSet() const;

                    /**
                     * 获取下一跳网关名称。
                     * @return NextHopName 下一跳网关名称。
                     * 
                     */
                    std::string GetNextHopName() const;

                    /**
                     * 设置下一跳网关名称。
                     * @param _nextHopName 下一跳网关名称。
                     * 
                     */
                    void SetNextHopName(const std::string& _nextHopName);

                    /**
                     * 判断参数 NextHopName 是否已赋值
                     * @return NextHopName 是否已赋值
                     * 
                     */
                    bool NextHopNameHasBeenSet() const;

                    /**
                     * 获取网络探测描述。
                     * @return NetDetectDescription 网络探测描述。
                     * 
                     */
                    std::string GetNetDetectDescription() const;

                    /**
                     * 设置网络探测描述。
                     * @param _netDetectDescription 网络探测描述。
                     * 
                     */
                    void SetNetDetectDescription(const std::string& _netDetectDescription);

                    /**
                     * 判断参数 NetDetectDescription 是否已赋值
                     * @return NetDetectDescription 是否已赋值
                     * 
                     */
                    bool NetDetectDescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取标签键值对。	
                     * @return TagSet 标签键值对。	
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。	
                     * @param _tagSet 标签键值对。	
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
                     * `VPC`实例`ID`。形如：`vpc-12345678`
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * `VPC`实例名称。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 子网实例ID。形如：subnet-12345678。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网实例名称。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 网络探测实例ID。形如：netd-12345678。
                     */
                    std::string m_netDetectId;
                    bool m_netDetectIdHasBeenSet;

                    /**
                     * 网络探测名称，最大长度不能超过60个字节。
                     */
                    std::string m_netDetectName;
                    bool m_netDetectNameHasBeenSet;

                    /**
                     * 探测目的IPv4地址数组，最多两个。
                     */
                    std::vector<std::string> m_detectDestinationIp;
                    bool m_detectDestinationIpHasBeenSet;

                    /**
                     * 系统自动分配的探测源IPv4数组。长度为2。
                     */
                    std::vector<std::string> m_detectSourceIp;
                    bool m_detectSourceIpHasBeenSet;

                    /**
                     * 下一跳类型，目前我们支持的类型有：
VPN：VPN网关；
DIRECTCONNECT：专线网关；
PEERCONNECTION：对等连接；
NAT：NAT网关；
NORMAL_CVM：普通云服务器；
CCN：云联网网关；
NONEXTHOP：无下一跳；
                     */
                    std::string m_nextHopType;
                    bool m_nextHopTypeHasBeenSet;

                    /**
                     * 下一跳目的网关，取值与“下一跳类型”相关：
下一跳类型为VPN，取值VPN网关ID，形如：vpngw-12345678；
下一跳类型为DIRECTCONNECT，取值专线网关ID，形如：dcg-12345678；
下一跳类型为PEERCONNECTION，取值对等连接ID，形如：pcx-12345678；
下一跳类型为NAT，取值Nat网关，形如：nat-12345678；
下一跳类型为NORMAL_CVM，取值云服务器IPv4地址，形如：10.0.0.12；
下一跳类型为CCN，取值云联网ID，形如：ccn-12345678；
下一跳类型为NONEXTHOP，指定网络探测为无下一跳的网络探测，添加和修改时，不需要指定值，查询时值为空字符串；
                     */
                    std::string m_nextHopDestination;
                    bool m_nextHopDestinationHasBeenSet;

                    /**
                     * 下一跳网关名称。
                     */
                    std::string m_nextHopName;
                    bool m_nextHopNameHasBeenSet;

                    /**
                     * 网络探测描述。
                     */
                    std::string m_netDetectDescription;
                    bool m_netDetectDescriptionHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 标签键值对。	
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECT_H_
