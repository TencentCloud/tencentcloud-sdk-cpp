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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MYSQLNETDETAIL_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MYSQLNETDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * TDSQL-C网络信息类型
                */
                class MySQLNetDetail : public AbstractModel
                {
                public:
                    MySQLNetDetail();
                    ~MySQLNetDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateNetAddress 内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateNetAddress() const;

                    /**
                     * 设置内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateNetAddress 内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateNetAddress(const std::string& _privateNetAddress);

                    /**
                     * 判断参数 PrivateNetAddress 是否已赋值
                     * @return PrivateNetAddress 是否已赋值
                     * 
                     */
                    bool PrivateNetAddressHasBeenSet() const;

                    /**
                     * 获取外网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PubNetAddress 外网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPubNetAddress() const;

                    /**
                     * 设置外网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pubNetAddress 外网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPubNetAddress(const std::string& _pubNetAddress);

                    /**
                     * 判断参数 PubNetAddress 是否已赋值
                     * @return PubNetAddress 是否已赋值
                     * 
                     */
                    bool PubNetAddressHasBeenSet() const;

                    /**
                     * 获取网络信息（VPCID/SubnetID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Net 网络信息（VPCID/SubnetID）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNet() const;

                    /**
                     * 设置网络信息（VPCID/SubnetID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _net 网络信息（VPCID/SubnetID）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNet(const std::string& _net);

                    /**
                     * 判断参数 Net 是否已赋值
                     * @return Net 是否已赋值
                     * 
                     */
                    bool NetHasBeenSet() const;

                    /**
                     * 获取是否开通公网
                     * @return PubNetAccessEnabled 是否开通公网
                     * 
                     */
                    bool GetPubNetAccessEnabled() const;

                    /**
                     * 设置是否开通公网
                     * @param _pubNetAccessEnabled 是否开通公网
                     * 
                     */
                    void SetPubNetAccessEnabled(const bool& _pubNetAccessEnabled);

                    /**
                     * 判断参数 PubNetAccessEnabled 是否已赋值
                     * @return PubNetAccessEnabled 是否已赋值
                     * 
                     */
                    bool PubNetAccessEnabledHasBeenSet() const;

                    /**
                     * 获取vpc id 
                     * @return VpcId vpc id 
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id 
                     * @param _vpcId vpc id 
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
                     * 获取vpc name
                     * @return VpcName vpc name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc name
                     * @param _vpcName vpc name
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取子网名
                     * @return SubnetName 子网名
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名
                     * @param _subnetName 子网名
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                private:

                    /**
                     * 内网地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateNetAddress;
                    bool m_privateNetAddressHasBeenSet;

                    /**
                     * 外网地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pubNetAddress;
                    bool m_pubNetAddressHasBeenSet;

                    /**
                     * 网络信息（VPCID/SubnetID）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_net;
                    bool m_netHasBeenSet;

                    /**
                     * 是否开通公网
                     */
                    bool m_pubNetAccessEnabled;
                    bool m_pubNetAccessEnabledHasBeenSet;

                    /**
                     * vpc id 
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网名
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MYSQLNETDETAIL_H_
