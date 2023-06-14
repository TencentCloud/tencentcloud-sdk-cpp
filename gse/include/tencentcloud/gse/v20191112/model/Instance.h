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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 实例信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetId 服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetId 服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpAddress IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipAddress IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取dns
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnsName dns
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDnsName() const;

                    /**
                     * 设置dns
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dnsName dns
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDnsName(const std::string& _dnsName);

                    /**
                     * 判断参数 DnsName 是否已赋值
                     * @return DnsName 是否已赋值
                     * 
                     */
                    bool DnsNameHasBeenSet() const;

                    /**
                     * 获取操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatingSystem 操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatingSystem() const;

                    /**
                     * 设置操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatingSystem 操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatingSystem(const std::string& _operatingSystem);

                    /**
                     * 判断参数 OperatingSystem 是否已赋值
                     * @return OperatingSystem 是否已赋值
                     * 
                     */
                    bool OperatingSystemHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 实例权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置实例权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 实例权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取实例是否保留, 1-保留，0-不保留,默认
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReserveValue 实例是否保留, 1-保留，0-不保留,默认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReserveValue() const;

                    /**
                     * 设置实例是否保留, 1-保留，0-不保留,默认
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reserveValue 实例是否保留, 1-保留，0-不保留,默认
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReserveValue(const int64_t& _reserveValue);

                    /**
                     * 判断参数 ReserveValue 是否已赋值
                     * @return ReserveValue 是否已赋值
                     * 
                     */
                    bool ReserveValueHasBeenSet() const;

                    /**
                     * 获取实例的私有IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIpAddress 实例的私有IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置实例的私有IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIpAddress 实例的私有IP地址
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

                private:

                    /**
                     * 服务部署ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * dns
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dnsName;
                    bool m_dnsNameHasBeenSet;

                    /**
                     * 操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatingSystem;
                    bool m_operatingSystemHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例权重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 实例是否保留, 1-保留，0-不保留,默认
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reserveValue;
                    bool m_reserveValueHasBeenSet;

                    /**
                     * 实例的私有IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCE_H_
