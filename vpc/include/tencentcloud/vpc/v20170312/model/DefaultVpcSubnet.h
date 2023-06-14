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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DEFAULTVPCSUBNET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DEFAULTVPCSUBNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 默认VPC和子网
                */
                class DefaultVpcSubnet : public AbstractModel
                {
                public:
                    DefaultVpcSubnet();
                    ~DefaultVpcSubnet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认VpcId。
                     * @return VpcId 默认VpcId。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置默认VpcId。
                     * @param _vpcId 默认VpcId。
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
                     * 获取默认SubnetId。
                     * @return SubnetId 默认SubnetId。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置默认SubnetId。
                     * @param _subnetId 默认SubnetId。
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
                     * 获取默认Vpc名字。
                     * @return VpcName 默认Vpc名字。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置默认Vpc名字。
                     * @param _vpcName 默认Vpc名字。
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
                     * 获取默认Subnet名字。
                     * @return SubnetName 默认Subnet名字。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置默认Subnet名字。
                     * @param _subnetName 默认Subnet名字。
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
                     * 获取默认子网网段。
                     * @return CidrBlock 默认子网网段。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置默认子网网段。
                     * @param _cidrBlock 默认子网网段。
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                private:

                    /**
                     * 默认VpcId。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 默认SubnetId。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 默认Vpc名字。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 默认Subnet名字。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 默认子网网段。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DEFAULTVPCSUBNET_H_
