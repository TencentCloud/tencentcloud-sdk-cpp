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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_EXPOSEINFO_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_EXPOSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 暴露信息
                */
                class ExposeInfo : public AbstractModel
                {
                public:
                    ExposeInfo();
                    ~ExposeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     * @return ExposeType 暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     * 
                     */
                    std::string GetExposeType() const;

                    /**
                     * 设置暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     * @param _exposeType 暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     * 
                     */
                    void SetExposeType(const std::string& _exposeType);

                    /**
                     * 判断参数 ExposeType 是否已赋值
                     * @return ExposeType 是否已赋值
                     * 
                     */
                    bool ExposeTypeHasBeenSet() const;

                    /**
                     * 获取暴露Ip。暴露方式为 EXTERNAL 为外网 Ip，暴露方式为 VPC 时为指定 Vpc 下的Vip
                     * @return Ip 暴露Ip。暴露方式为 EXTERNAL 为外网 Ip，暴露方式为 VPC 时为指定 Vpc 下的Vip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置暴露Ip。暴露方式为 EXTERNAL 为外网 Ip，暴露方式为 VPC 时为指定 Vpc 下的Vip
                     * @param _ip 暴露Ip。暴露方式为 EXTERNAL 为外网 Ip，暴露方式为 VPC 时为指定 Vpc 下的Vip
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取暴露方式为 VPC 时，打通的私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 暴露方式为 VPC 时，打通的私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置暴露方式为 VPC 时，打通的私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 暴露方式为 VPC 时，打通的私有网络Id
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
                     * 获取暴露方式为 VPC 时，打通的子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 暴露方式为 VPC 时，打通的子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置暴露方式为 VPC 时，打通的子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 暴露方式为 VPC 时，打通的子网Id
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

                    /**
                     * 获取GATEWAY 服务id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GateWayServiceId GATEWAY 服务id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGateWayServiceId() const;

                    /**
                     * 设置GATEWAY 服务id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gateWayServiceId GATEWAY 服务id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGateWayServiceId(const std::string& _gateWayServiceId);

                    /**
                     * 判断参数 GateWayServiceId 是否已赋值
                     * @return GateWayServiceId 是否已赋值
                     * 
                     */
                    bool GateWayServiceIdHasBeenSet() const;

                    /**
                     * 获取GATEWAY api id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GateWayAPIId GATEWAY api id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGateWayAPIId() const;

                    /**
                     * 设置GATEWAY api id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gateWayAPIId GATEWAY api id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGateWayAPIId(const std::string& _gateWayAPIId);

                    /**
                     * 判断参数 GateWayAPIId 是否已赋值
                     * @return GateWayAPIId 是否已赋值
                     * 
                     */
                    bool GateWayAPIIdHasBeenSet() const;

                    /**
                     * 获取GATEWAY domain，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GateWayDomain GATEWAY domain，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGateWayDomain() const;

                    /**
                     * 设置GATEWAY domain，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gateWayDomain GATEWAY domain，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGateWayDomain(const std::string& _gateWayDomain);

                    /**
                     * 判断参数 GateWayDomain 是否已赋值
                     * @return GateWayDomain 是否已赋值
                     * 
                     */
                    bool GateWayDomainHasBeenSet() const;

                private:

                    /**
                     * 暴露方式，支持 EXTERNAL（外网暴露），VPC （VPC内网打通）
                     */
                    std::string m_exposeType;
                    bool m_exposeTypeHasBeenSet;

                    /**
                     * 暴露Ip。暴露方式为 EXTERNAL 为外网 Ip，暴露方式为 VPC 时为指定 Vpc 下的Vip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 暴露方式为 VPC 时，打通的私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 暴露方式为 VPC 时，打通的子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * GATEWAY 服务id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gateWayServiceId;
                    bool m_gateWayServiceIdHasBeenSet;

                    /**
                     * GATEWAY api id，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gateWayAPIId;
                    bool m_gateWayAPIIdHasBeenSet;

                    /**
                     * GATEWAY domain，ExposeType = GATEWAY 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gateWayDomain;
                    bool m_gateWayDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_EXPOSEINFO_H_
