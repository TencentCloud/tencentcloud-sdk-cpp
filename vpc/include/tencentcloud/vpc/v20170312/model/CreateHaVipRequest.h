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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHAVIPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHAVIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociation.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateHaVip请求参数结构体
                */
                class CreateHaVipRequest : public AbstractModel
                {
                public:
                    CreateHaVipRequest();
                    ~CreateHaVipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`HAVIP`所在私有网络`ID`。
                     * @return VpcId `HAVIP`所在私有网络`ID`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`HAVIP`所在私有网络`ID`。
                     * @param _vpcId `HAVIP`所在私有网络`ID`。
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
                     * 获取`HAVIP`名称。
                     * @return HaVipName `HAVIP`名称。
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置`HAVIP`名称。
                     * @param _haVipName `HAVIP`名称。
                     * 
                     */
                    void SetHaVipName(const std::string& _haVipName);

                    /**
                     * 判断参数 HaVipName 是否已赋值
                     * @return HaVipName 是否已赋值
                     * 
                     */
                    bool HaVipNameHasBeenSet() const;

                    /**
                     * 获取`HAVIP`所在子网`ID`。
                     * @return SubnetId `HAVIP`所在子网`ID`。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置`HAVIP`所在子网`ID`。
                     * @param _subnetId `HAVIP`所在子网`ID`。
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
                     * 获取指定虚拟IP地址，必须在`VPC`网段内且未被占用。不指定则自动分配。
                     * @return Vip 指定虚拟IP地址，必须在`VPC`网段内且未被占用。不指定则自动分配。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置指定虚拟IP地址，必须在`VPC`网段内且未被占用。不指定则自动分配。
                     * @param _vip 指定虚拟IP地址，必须在`VPC`网段内且未被占用。不指定则自动分配。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取`HAVIP`所在弹性网卡`ID`。
                     * @return NetworkInterfaceId `HAVIP`所在弹性网卡`ID`。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置`HAVIP`所在弹性网卡`ID`。
                     * @param _networkInterfaceId `HAVIP`所在弹性网卡`ID`。
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取是否开启`HAVIP`漂移时子机或网卡范围的校验。默认不开启。
                     * @return CheckAssociate 是否开启`HAVIP`漂移时子机或网卡范围的校验。默认不开启。
                     * 
                     */
                    bool GetCheckAssociate() const;

                    /**
                     * 设置是否开启`HAVIP`漂移时子机或网卡范围的校验。默认不开启。
                     * @param _checkAssociate 是否开启`HAVIP`漂移时子机或网卡范围的校验。默认不开启。
                     * 
                     */
                    void SetCheckAssociate(const bool& _checkAssociate);

                    /**
                     * 判断参数 CheckAssociate 是否已赋值
                     * @return CheckAssociate 是否已赋值
                     * 
                     */
                    bool CheckAssociateHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取HaVip绑定的子机或网卡。最多支持10个实例。
                     * @return HaVipAssociationSet HaVip绑定的子机或网卡。最多支持10个实例。
                     * 
                     */
                    std::vector<HaVipAssociation> GetHaVipAssociationSet() const;

                    /**
                     * 设置HaVip绑定的子机或网卡。最多支持10个实例。
                     * @param _haVipAssociationSet HaVip绑定的子机或网卡。最多支持10个实例。
                     * 
                     */
                    void SetHaVipAssociationSet(const std::vector<HaVipAssociation>& _haVipAssociationSet);

                    /**
                     * 判断参数 HaVipAssociationSet 是否已赋值
                     * @return HaVipAssociationSet 是否已赋值
                     * 
                     */
                    bool HaVipAssociationSetHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * `HAVIP`所在私有网络`ID`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * `HAVIP`名称。
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * `HAVIP`所在子网`ID`。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 指定虚拟IP地址，必须在`VPC`网段内且未被占用。不指定则自动分配。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * `HAVIP`所在弹性网卡`ID`。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 是否开启`HAVIP`漂移时子机或网卡范围的校验。默认不开启。
                     */
                    bool m_checkAssociate;
                    bool m_checkAssociateHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * HaVip绑定的子机或网卡。最多支持10个实例。
                     */
                    std::vector<HaVipAssociation> m_haVipAssociationSet;
                    bool m_haVipAssociationSetHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEHAVIPREQUEST_H_
