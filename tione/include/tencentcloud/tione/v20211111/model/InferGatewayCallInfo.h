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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_INFERGATEWAYCALLINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_INFERGATEWAYCALLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 服务的调用信息，服务组下唯一
                */
                class InferGatewayCallInfo : public AbstractModel
                {
                public:
                    InferGatewayCallInfo();
                    ~InferGatewayCallInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcHttpAddr 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcHttpAddr() const;

                    /**
                     * 设置内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcHttpAddr 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcHttpAddr(const std::string& _vpcHttpAddr);

                    /**
                     * 判断参数 VpcHttpAddr 是否已赋值
                     * @return VpcHttpAddr 是否已赋值
                     * 
                     */
                    bool VpcHttpAddrHasBeenSet() const;

                    /**
                     * 获取内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcHttpsAddr 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcHttpsAddr() const;

                    /**
                     * 设置内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcHttpsAddr 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcHttpsAddr(const std::string& _vpcHttpsAddr);

                    /**
                     * 判断参数 VpcHttpsAddr 是否已赋值
                     * @return VpcHttpsAddr 是否已赋值
                     * 
                     */
                    bool VpcHttpsAddrHasBeenSet() const;

                    /**
                     * 获取内网grpc调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcGrpcTlsAddr 内网grpc调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcGrpcTlsAddr() const;

                    /**
                     * 设置内网grpc调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcGrpcTlsAddr 内网grpc调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcGrpcTlsAddr(const std::string& _vpcGrpcTlsAddr);

                    /**
                     * 判断参数 VpcGrpcTlsAddr 是否已赋值
                     * @return VpcGrpcTlsAddr 是否已赋值
                     * 
                     */
                    bool VpcGrpcTlsAddrHasBeenSet() const;

                    /**
                     * 获取可访问的vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 可访问的vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置可访问的vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 可访问的vpcid
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取后端ip对应的子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 后端ip对应的子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置后端ip对应的子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 后端ip对应的子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcHttpAddr;
                    bool m_vpcHttpAddrHasBeenSet;

                    /**
                     * 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcHttpsAddr;
                    bool m_vpcHttpsAddrHasBeenSet;

                    /**
                     * 内网grpc调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcGrpcTlsAddr;
                    bool m_vpcGrpcTlsAddrHasBeenSet;

                    /**
                     * 可访问的vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 后端ip对应的子网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_INFERGATEWAYCALLINFO_H_
