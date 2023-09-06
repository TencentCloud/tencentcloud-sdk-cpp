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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATESUBNETREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATESUBNETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateSubnet请求参数结构体
                */
                class CreateSubnetRequest : public AbstractModel
                {
                public:
                    CreateSubnetRequest();
                    ~CreateSubnetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @return VpcId 待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @param _vpcId 待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
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
                     * 获取子网名称，最大长度不能超过60个字节。
                     * @return SubnetName 子网名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称，最大长度不能超过60个字节。
                     * @param _subnetName 子网名称，最大长度不能超过60个字节。
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
                     * 获取子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。
                     * @return CidrBlock 子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。
                     * @param _cidrBlock 子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
                     * @return Zone 子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
                     * @param _zone 子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
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
                     * 获取ECM 地域
                     * @return EcmRegion ECM 地域
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域
                     * @param _ecmRegion ECM 地域
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
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
                     * 获取IPv6 CIDR
                     * @return IPv6CidrBlock IPv6 CIDR
                     * 
                     */
                    std::string GetIPv6CidrBlock() const;

                    /**
                     * 设置IPv6 CIDR
                     * @param _iPv6CidrBlock IPv6 CIDR
                     * 
                     */
                    void SetIPv6CidrBlock(const std::string& _iPv6CidrBlock);

                    /**
                     * 判断参数 IPv6CidrBlock 是否已赋值
                     * @return IPv6CidrBlock 是否已赋值
                     * 
                     */
                    bool IPv6CidrBlockHasBeenSet() const;

                private:

                    /**
                     * 待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网名称，最大长度不能超过60个字节。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网网段，子网网段必须在VPC网段内，相同VPC内子网网段不能重叠。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 子网所在的可用区ID，不同子网选择不同可用区可以做跨可用区灾备。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * ECM 地域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * IPv6 CIDR
                     */
                    std::string m_iPv6CidrBlock;
                    bool m_iPv6CidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATESUBNETREQUEST_H_
