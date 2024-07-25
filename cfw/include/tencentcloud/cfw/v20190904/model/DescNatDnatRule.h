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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCNATDNATRULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCNATDNATRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NAT防火墙Dnat规则列表
                */
                class DescNatDnatRule : public AbstractModel
                {
                public:
                    DescNatDnatRule();
                    ~DescNatDnatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取网络协议，可选值：TCP、UDP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpProtocol 网络协议，可选值：TCP、UDP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置网络协议，可选值：TCP、UDP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipProtocol 网络协议，可选值：TCP、UDP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取弹性IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAddress 弹性IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置弹性IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIpAddress 弹性IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取公网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicPort 公网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPublicPort() const;

                    /**
                     * 设置公网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicPort 公网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicPort(const int64_t& _publicPort);

                    /**
                     * 判断参数 PublicPort 是否已赋值
                     * @return PublicPort 是否已赋值
                     * 
                     */
                    bool PublicPortHasBeenSet() const;

                    /**
                     * 获取内网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIpAddress 内网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置内网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIpAddress 内网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取内网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivatePort 内网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPrivatePort() const;

                    /**
                     * 设置内网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privatePort 内网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivatePort(const int64_t& _privatePort);

                    /**
                     * 判断参数 PrivatePort 是否已赋值
                     * @return PrivatePort 是否已赋值
                     * 
                     */
                    bool PrivatePortHasBeenSet() const;

                    /**
                     * 获取NAT防火墙转发规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description NAT防火墙转发规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置NAT防火墙转发规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description NAT防火墙转发规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否被关联引用，如被远程运维使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsReferenced 是否被关联引用，如被远程运维使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsReferenced() const;

                    /**
                     * 设置是否被关联引用，如被远程运维使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isReferenced 是否被关联引用，如被远程运维使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsReferenced(const int64_t& _isReferenced);

                    /**
                     * 判断参数 IsReferenced 是否已赋值
                     * @return IsReferenced 是否已赋值
                     * 
                     */
                    bool IsReferencedHasBeenSet() const;

                    /**
                     * 获取所属防火墙实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FwInsId 所属防火墙实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置所属防火墙实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fwInsId 所属防火墙实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                    /**
                     * 获取关联的nat网关Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NatGwId 关联的nat网关Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNatGwId() const;

                    /**
                     * 设置关联的nat网关Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _natGwId 关联的nat网关Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNatGwId(const std::string& _natGwId);

                    /**
                     * 判断参数 NatGwId 是否已赋值
                     * @return NatGwId 是否已赋值
                     * 
                     */
                    bool NatGwIdHasBeenSet() const;

                private:

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 网络协议，可选值：TCP、UDP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * 弹性IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * 公网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_publicPort;
                    bool m_publicPortHasBeenSet;

                    /**
                     * 内网地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * 内网端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_privatePort;
                    bool m_privatePortHasBeenSet;

                    /**
                     * NAT防火墙转发规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否被关联引用，如被远程运维使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isReferenced;
                    bool m_isReferencedHasBeenSet;

                    /**
                     * 所属防火墙实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * 关联的nat网关Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_natGwId;
                    bool m_natGwIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCNATDNATRULE_H_
