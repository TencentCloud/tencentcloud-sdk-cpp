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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATASOURCECONNECTIONLOCATION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATASOURCECONNECTIONLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据源连接的网络信息
                */
                class DatasourceConnectionLocation : public AbstractModel
                {
                public:
                    DatasourceConnectionLocation();
                    ~DatasourceConnectionLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据连接所在Vpc实例Id，如“vpc-azd4dt1c”。
                     * @return VpcId 数据连接所在Vpc实例Id，如“vpc-azd4dt1c”。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置数据连接所在Vpc实例Id，如“vpc-azd4dt1c”。
                     * @param _vpcId 数据连接所在Vpc实例Id，如“vpc-azd4dt1c”。
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
                     * 获取Vpc的IPv4 CIDR
                     * @return VpcCidrBlock Vpc的IPv4 CIDR
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置Vpc的IPv4 CIDR
                     * @param _vpcCidrBlock Vpc的IPv4 CIDR
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
                     * 获取数据连接所在子网的实例Id，如“subnet-bthucmmy”
                     * @return SubnetId 数据连接所在子网的实例Id，如“subnet-bthucmmy”
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置数据连接所在子网的实例Id，如“subnet-bthucmmy”
                     * @param _subnetId 数据连接所在子网的实例Id，如“subnet-bthucmmy”
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
                     * 获取Subnet的IPv4 CIDR
                     * @return SubnetCidrBlock Subnet的IPv4 CIDR
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 设置Subnet的IPv4 CIDR
                     * @param _subnetCidrBlock Subnet的IPv4 CIDR
                     * 
                     */
                    void SetSubnetCidrBlock(const std::string& _subnetCidrBlock);

                    /**
                     * 判断参数 SubnetCidrBlock 是否已赋值
                     * @return SubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool SubnetCidrBlockHasBeenSet() const;

                private:

                    /**
                     * 数据连接所在Vpc实例Id，如“vpc-azd4dt1c”。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Vpc的IPv4 CIDR
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 数据连接所在子网的实例Id，如“subnet-bthucmmy”
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Subnet的IPv4 CIDR
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATASOURCECONNECTIONLOCATION_H_
