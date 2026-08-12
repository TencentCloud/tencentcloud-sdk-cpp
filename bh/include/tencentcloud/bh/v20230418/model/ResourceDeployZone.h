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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_RESOURCEDEPLOYZONE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_RESOURCEDEPLOYZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 堡垒机实例部署的可用区
                */
                class ResourceDeployZone : public AbstractModel
                {
                public:
                    ResourceDeployZone();
                    ~ResourceDeployZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>部署堡垒机的VpcId</p>
                     * @return VpcId <p>部署堡垒机的VpcId</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>部署堡垒机的VpcId</p>
                     * @param _vpcId <p>部署堡垒机的VpcId</p>
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
                     * 获取<p>部署堡垒机vpc的名称</p>
                     * @return VpcName <p>部署堡垒机vpc的名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>部署堡垒机vpc的名称</p>
                     * @param _vpcName <p>部署堡垒机vpc的名称</p>
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
                     * 获取<p>部署堡垒机vpc的cidr</p>
                     * @return VpcCidrBlock <p>部署堡垒机vpc的cidr</p>
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置<p>部署堡垒机vpc的cidr</p>
                     * @param _vpcCidrBlock <p>部署堡垒机vpc的cidr</p>
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>部署堡垒机的子网Id</p>
                     * @return SubnetId <p>部署堡垒机的子网Id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>部署堡垒机的子网Id</p>
                     * @param _subnetId <p>部署堡垒机的子网Id</p>
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
                     * 获取<p>部署堡垒机的子网名称</p>
                     * @return SubnetName <p>部署堡垒机的子网名称</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>部署堡垒机的子网名称</p>
                     * @param _subnetName <p>部署堡垒机的子网名称</p>
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
                     * 获取<p>子网cidr</p>
                     * @return SubnetCidrBlock <p>子网cidr</p>
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 设置<p>子网cidr</p>
                     * @param _subnetCidrBlock <p>子网cidr</p>
                     * 
                     */
                    void SetSubnetCidrBlock(const std::string& _subnetCidrBlock);

                    /**
                     * 判断参数 SubnetCidrBlock 是否已赋值
                     * @return SubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool SubnetCidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>部署堡垒机的地域</p>
                     * @return Region <p>部署堡垒机的地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>部署堡垒机的地域</p>
                     * @param _region <p>部署堡垒机的地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>部署堡垒机的可用区</p>
                     * @return Zone <p>部署堡垒机的可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>部署堡垒机的可用区</p>
                     * @param _zone <p>部署堡垒机的可用区</p>
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
                     * 获取<p>子网的作用场景</p><p>枚举值：</p><ul><li>DEPLOY： 部署堡垒机的子网</li><li>INTERNAL： 开通内网访问的子网</li></ul>
                     * @return SubnetUsageType <p>子网的作用场景</p><p>枚举值：</p><ul><li>DEPLOY： 部署堡垒机的子网</li><li>INTERNAL： 开通内网访问的子网</li></ul>
                     * 
                     */
                    std::string GetSubnetUsageType() const;

                    /**
                     * 设置<p>子网的作用场景</p><p>枚举值：</p><ul><li>DEPLOY： 部署堡垒机的子网</li><li>INTERNAL： 开通内网访问的子网</li></ul>
                     * @param _subnetUsageType <p>子网的作用场景</p><p>枚举值：</p><ul><li>DEPLOY： 部署堡垒机的子网</li><li>INTERNAL： 开通内网访问的子网</li></ul>
                     * 
                     */
                    void SetSubnetUsageType(const std::string& _subnetUsageType);

                    /**
                     * 判断参数 SubnetUsageType 是否已赋值
                     * @return SubnetUsageType 是否已赋值
                     * 
                     */
                    bool SubnetUsageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>部署堡垒机的VpcId</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>部署堡垒机vpc的名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>部署堡垒机vpc的cidr</p>
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * <p>部署堡垒机的子网Id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>部署堡垒机的子网名称</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>子网cidr</p>
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                    /**
                     * <p>部署堡垒机的地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>部署堡垒机的可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>子网的作用场景</p><p>枚举值：</p><ul><li>DEPLOY： 部署堡垒机的子网</li><li>INTERNAL： 开通内网访问的子网</li></ul>
                     */
                    std::string m_subnetUsageType;
                    bool m_subnetUsageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_RESOURCEDEPLOYZONE_H_
