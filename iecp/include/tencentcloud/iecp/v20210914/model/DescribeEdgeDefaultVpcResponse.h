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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEDEFAULTVPCRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEDEFAULTVPCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeDefaultVpc返回参数结构体
                */
                class DescribeEdgeDefaultVpcResponse : public AbstractModel
                {
                public:
                    DescribeEdgeDefaultVpcResponse();
                    ~DescribeEdgeDefaultVpcResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取网络CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcCidrBlock 网络CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetCidrBlock 子网CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 判断参数 SubnetCidrBlock 是否已赋值
                     * @return SubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool SubnetCidrBlockHasBeenSet() const;

                private:

                    /**
                     * 私有网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 网络CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网CIDR
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEDEFAULTVPCRESPONSE_H_
