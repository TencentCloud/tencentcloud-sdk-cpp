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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCVIEWINFO_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCVIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmvpc/v20180625/model/VpcSubnetViewInfo.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * VPC视图信息
                */
                class VpcViewInfo : public AbstractModel
                {
                public:
                    VpcViewInfo();
                    ~VpcViewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
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
                     * 获取私有网络CIDR
                     * @return CidrBlock 私有网络CIDR
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置私有网络CIDR
                     * @param _cidrBlock 私有网络CIDR
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
                     * 获取私有网络所在可用区
                     * @return Zone 私有网络所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置私有网络所在可用区
                     * @param _zone 私有网络所在可用区
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
                     * 获取外网负载均衡个数
                     * @return LbNum 外网负载均衡个数
                     * 
                     */
                    uint64_t GetLbNum() const;

                    /**
                     * 设置外网负载均衡个数
                     * @param _lbNum 外网负载均衡个数
                     * 
                     */
                    void SetLbNum(const uint64_t& _lbNum);

                    /**
                     * 判断参数 LbNum 是否已赋值
                     * @return LbNum 是否已赋值
                     * 
                     */
                    bool LbNumHasBeenSet() const;

                    /**
                     * 获取弹性公网IP个数
                     * @return EipNum 弹性公网IP个数
                     * 
                     */
                    uint64_t GetEipNum() const;

                    /**
                     * 设置弹性公网IP个数
                     * @param _eipNum 弹性公网IP个数
                     * 
                     */
                    void SetEipNum(const uint64_t& _eipNum);

                    /**
                     * 判断参数 EipNum 是否已赋值
                     * @return EipNum 是否已赋值
                     * 
                     */
                    bool EipNumHasBeenSet() const;

                    /**
                     * 获取NAT网关个数
                     * @return NatNum NAT网关个数
                     * 
                     */
                    uint64_t GetNatNum() const;

                    /**
                     * 设置NAT网关个数
                     * @param _natNum NAT网关个数
                     * 
                     */
                    void SetNatNum(const uint64_t& _natNum);

                    /**
                     * 判断参数 NatNum 是否已赋值
                     * @return NatNum 是否已赋值
                     * 
                     */
                    bool NatNumHasBeenSet() const;

                    /**
                     * 获取子网列表
                     * @return SubnetSet 子网列表
                     * 
                     */
                    std::vector<VpcSubnetViewInfo> GetSubnetSet() const;

                    /**
                     * 设置子网列表
                     * @param _subnetSet 子网列表
                     * 
                     */
                    void SetSubnetSet(const std::vector<VpcSubnetViewInfo>& _subnetSet);

                    /**
                     * 判断参数 SubnetSet 是否已赋值
                     * @return SubnetSet 是否已赋值
                     * 
                     */
                    bool SubnetSetHasBeenSet() const;

                private:

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 私有网络CIDR
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 私有网络所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 外网负载均衡个数
                     */
                    uint64_t m_lbNum;
                    bool m_lbNumHasBeenSet;

                    /**
                     * 弹性公网IP个数
                     */
                    uint64_t m_eipNum;
                    bool m_eipNumHasBeenSet;

                    /**
                     * NAT网关个数
                     */
                    uint64_t m_natNum;
                    bool m_natNumHasBeenSet;

                    /**
                     * 子网列表
                     */
                    std::vector<VpcSubnetViewInfo> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_VPCVIEWINFO_H_
